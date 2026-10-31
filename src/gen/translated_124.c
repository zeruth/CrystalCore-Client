#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00add370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00add370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00add390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add3a0 */
GEN_OWN GEN_FRAME uint F_00add3a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add3b0 */
GEN_OWN GEN_FRAME uint F_00add3b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add400 */
GEN_OWN GEN_FRAME uint F_00add400(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadd410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00add440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00add470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00add490 */
GEN_OWN GEN_FRAME uint F_00add490(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add4a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add4a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add500 */
GEN_OWN GEN_FRAME uint F_00add500(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00add550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xadd550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10eacb4));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xd))) = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xe))) = param_6;
  return (uint)param_1;
}

/* ref: CompletionCacheFunc_VExcelEntryKey_Excel_Component_Common_PAVExcelEntry::vf1 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00add580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadd580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if (((undefined *)GEN_TOP(*param_2)) == ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
  uVar3 = F_00cb0950(((undefined *)GEN_TOP(*param_2)) GEN_EDX_FWD,(uint)*((byte *)GEN_TOP(((int)this + 0xd))));
  if (*((char *)GEN_TOP(((int)this + 0xe))) == '\0') {
    F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    iVar2 = *piVar1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xc))))(*((undefined4 *)GEN_TOP(((int)this + 8))),((undefined1 *)(gen_frame + 0x0)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if ((int)uVar3 < 1) goto LAB_00add64e;
  }
  else {
    F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x24))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_3,*param_1,((undefined1 *)(gen_frame + 0x54)));
  }
  uVar4 = *param_1;
  iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 8))))
            (*((undefined4 *)GEN_TOP(((int)this + 4))),(int)*((char *)GEN_TOP(((int)this + 0xc))),uVar3,uVar4);
LAB_00add64e: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00add670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00add670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: CompletionCacheFunc_VExcelEntryKey_Excel_Component_Common_PAVExcelEntry::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add6b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e90bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00add7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x19))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00add830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00add830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadd830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00adcce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00add860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd860u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00add890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd890u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00add8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd8d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00add910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
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

/* ref: FUN_00add950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
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

/* ref: FUN_00add990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add990(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add9b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 1;
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

/* ref: FUN_00add9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add9e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add9f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadda00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadda10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadda20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadda30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadda40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adda60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adda60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadda60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00adcce0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00adda80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00adda80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadda80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addaa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00addaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaddaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addac0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00addac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaddac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00addae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaddae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00addb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaddb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00addb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaddb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00addb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00addb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaddb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00addb60 */
GEN_OWN GEN_FRAME uint F_00addb60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addb80 */
GEN_OWN GEN_FRAME uint F_00addb80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddb80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addba0 */
GEN_OWN GEN_FRAME uint F_00addba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addbc0 */
GEN_OWN GEN_FRAME uint F_00addbc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addbe0 */
GEN_OWN GEN_FRAME uint F_00addbe0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc00 */
GEN_OWN GEN_FRAME uint F_00addc00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddc00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc20 */
GEN_OWN GEN_FRAME uint F_00addc20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc40 */
GEN_OWN GEN_FRAME uint F_00addc40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addc70 */
GEN_OWN GEN_FRAME uint F_00addc70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addca0 */
GEN_OWN GEN_FRAME uint F_00addca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00addcd0 */
GEN_OWN GEN_FRAME uint F_00addcd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00addd30 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00addd30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaddd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined1 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_00addd60 */
GEN_OWN GEN_FRAME uint F_00addd60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaddd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00addd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00addd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaddd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00addda0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00addda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaddda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00add0f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00adddb0 */
GEN_OWN GEN_FRAME uint F_00adddb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadddb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adddc0 */
GEN_OWN GEN_FRAME unsigned int F_00adddc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadddc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00adddf0 */
GEN_OWN GEN_FRAME uint F_00adddf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadddf0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00adde30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adde30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadde30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00adde50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adde50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadde50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00adde60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00adde60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadde60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00addea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00addea0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaddea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00addeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00addeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaddeb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00added0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00added0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadded0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00addef0 */
GEN_OWN GEN_FRAME uint F_00addef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addf30 */
GEN_OWN GEN_FRAME uint F_00addf30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addf50 */
GEN_OWN GEN_FRAME uint F_00addf50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaddf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00addff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00addff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaddff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00adcce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ade000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ade050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xade050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00ade090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade0a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade0b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade0c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade0d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ade0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x19)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ade0d0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x1c,0x2be);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  }
  return;
}

/* ref: FUN_00ade110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ade190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade190(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ade1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade1c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ade1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade1e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00ade200 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade200(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade210 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade220(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade240 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade2a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ade2b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade2d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade2f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade310 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade330 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade350 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ade370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ade390 */
GEN_OWN GEN_FRAME unsigned int F_00ade390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined1 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined1 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ade3c0 */
GEN_OWN GEN_FRAME unsigned int F_00ade3c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade3f0 */
GEN_OWN GEN_FRAME uint F_00ade3f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined1 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined1 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ade430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xade430u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x1c,0x2be);
                    
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
LAB_00ade62d: ;
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
        goto LAB_00ade62d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x18)));
  } while( true );
}

/* ref: FUN_00ade660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xade660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ade680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ade680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xade680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00add0f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ade690 */
GEN_OWN GEN_FRAME uint F_00ade690(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ade6a0 */
GEN_OWN GEN_FRAME uint F_00ade6a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xade6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = param_2;
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  do {
    if (piVar4[3] == param_4) break;
    if (*((char *)GEN_TOP(((int)piVar4 + 0x19))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar4[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x19))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
        piVar4 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x19)));
        piVar3 = ((int *)GEN_TOP(piVar4[1]));
        piVar2 = piVar4;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x19)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
        }
      }
    }
  } while (piVar4 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00ade710 */
GEN_OWN_GS GEN_FRAME uint F_00ade710(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xade710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  do {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2[3],REFG(undefined4, 0x108cc50));
    uVar5 = 1;
    uVar3 = F_0042a970(param_4 GEN_EDX_ARG);
    uVar3 = F_00ad9c40(((undefined1 *)(gen_frame + 0x0)),param_4,uVar3,uVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    piVar4 = param_2;
    if (uVar3 == 0) break;
    if (*((char *)GEN_TOP(((int)param_2 + 0x19))) == '\0') {
      piVar4 = ((int *)GEN_TOP(param_2[2]));
      if (*((char *)GEN_TOP(((int)piVar4 + 0x19))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x19)));
        param_2 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x19)));
          param_2 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((param_2[1] + 0x19)));
        piVar2 = ((int *)GEN_TOP(param_2[1]));
        piVar4 = param_2;
        while ((param_2 = piVar2, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x19)));
          piVar2 = ((int *)GEN_TOP(param_2[1]));
          piVar4 = param_2;
        }
      }
    }
    piVar4 = param_2;
  } while (param_2 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00ade800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ade820 */
GEN_OWN GEN_FRAME unsigned int F_00ade820(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade820u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade850 */
GEN_OWN GEN_FRAME unsigned int F_00ade850(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00ade870 */
GEN_OWN GEN_FRAME uint F_00ade870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00ade880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xade880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00ade8a0 */
GEN_OWN GEN_FRAME unsigned int F_00ade8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade8a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade8d0 */
GEN_OWN GEN_FRAME unsigned int F_00ade8d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade900 */
GEN_OWN GEN_FRAME unsigned int F_00ade900(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ade930 */
GEN_OWN GEN_FRAME unsigned int F_00ade930(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xade930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00ade960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ade960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xade960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00ade9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade9a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade9c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xade9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ade9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ade9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xade9d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00adcce0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00adeaea;
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
      piVar4 = ((int *)GEN_TOP(F_00adc9b0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      uVar5 = F_00adc990(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00adeaea: ;
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
            F_00ade110(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x18))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x18))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_00add7a0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              F_00ade110(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00adeba8: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_00add7a0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01'))
            goto LAB_00adeba8;
            if (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_00ade110(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
            F_00add7a0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,0x2be);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00adec30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadec30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  while (cVar1 == '\0') {
    F_00ade0d0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x1c,0x2be);
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

/* ref: FUN_00adec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadec90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00adecf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00aded50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aded50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaded50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00aded90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aded90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xaded90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adede0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadede0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00adee60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adee60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadee60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 1) * 2;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00adeec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adeec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadeec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00adec30(this GEN_EDX_FWD);
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
    F_00ade9d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00adef60 */
GEN_OWN GEN_FRAME uint F_00adef60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xadef60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00ade6a0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00adef90 */
GEN_OWN GEN_FRAME uint F_00adef90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xadef90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00ade710(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00adefd0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00adefd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xadefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0xc4, 12, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0));
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  puVar2 = ((undefined4 *)GEN_TOP(puVar6[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar2 + 0x19)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_2;
  (*(char *)(gen_frame + 0x0)) = '\x01';
  puVar7 = param_2;
  cVar9 = (*(char *)(gen_frame + 0x0));
  while (cVar1 == '\0') {
    uVar10 = 1;
    if (param_4 == '\0') {
      uVar11 = puVar2[3];
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_FWD,uVar11,REFG(undefined4, 0x108cc50));
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),REFG(undefined4, 0x108cc50));
      uVar4 = F_00ad9c10(uVar5,uVar4,uVar10);
      (*(bool *)(gen_frame + 0x13)) = (int)uVar4 < 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      cVar9 = (*(bool *)(gen_frame + 0x13));
    }
    else {
      uVar11 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
      uVar3 = puVar2[3];
      uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar11,REFG(undefined4, 0x108cc50));
      uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
      uVar4 = F_00ad9c10(uVar5,uVar4,uVar10);
      cVar9 = -1 < (int)uVar4;
      F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    if (cVar9 == '\0') {
      puVar8 = ((undefined4 *)GEN_TOP(puVar2[2]));
    }
    else {
      puVar8 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    puVar6 = puVar2;
    puVar2 = puVar8;
    cVar1 = *((char *)GEN_TOP(((int)puVar8 + 0x19)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  if (cVar9 != '\0') {
    if (puVar6 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      puVar6 = ((undefined4 *)GEN_TOP(F_00ade430(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),1,puVar6,param_3)));
      *puVar7 = *puVar6;
      *(undefined1 *)(puVar7 + 1) = 1;
      return (uint)puVar7;
    }
    F_00add0f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  uVar10 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
  uVar11 = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[3];
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar10,REFG(undefined4, 0x108cc50));
  uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),REFG(undefined4, 0x108cc50));
  uVar4 = F_00ad9c10(uVar5,uVar4,uVar11);
  (*(bool *)(gen_frame + 0x13)) = (int)uVar4 < 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  if ((*(bool *)(gen_frame + 0x13)) == false) {
    F_00429760(param_3,0x1c,0x2be);
    *puVar7 = puVar2;
    *(undefined1 *)(puVar7 + 1) = 0;
  }
  else {
    puVar6 = ((undefined4 *)GEN_TOP(F_00ade430(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),cVar9,puVar6,param_3)));
    *puVar7 = *puVar6;
    *(undefined1 *)(puVar7 + 1) = 1;
  }
  return (uint)puVar7;
}

/* ref: FUN_00adf210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadf210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00adf230 */
GEN_OWN GEN_FRAME unsigned int F_00adf230(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf230u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf260 */
GEN_OWN GEN_FRAME unsigned int F_00adf260(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00adf280 */
GEN_OWN GEN_FRAME unsigned int F_00adf280(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00adf2b0 */
GEN_OWN GEN_FRAME unsigned int F_00adf2b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf2b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf2e0 */
GEN_OWN GEN_FRAME unsigned int F_00adf2e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00adf310 */
GEN_OWN GEN_FRAME unsigned int F_00adf310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf340 */
GEN_OWN GEN_FRAME uint F_00adf340(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf340u, gen_a0, gen_a1, gen_a2, 0u);
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
      *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00adf380 */
GEN_OWN GEN_FRAME unsigned int F_00adf380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadf3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00adf3d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00adf3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00adf400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adf400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00adf440 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00adf440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00adf470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adf470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00adf4b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adf4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf4b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00adf4e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00adf4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00adf510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00adeec0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00adf540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadf540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00adf560 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00adf560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf560u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf590 */
GEN_OWN GEN_FRAME unsigned int F_00adf590(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00adf5b0 */
GEN_OWN GEN_FRAME unsigned int F_00adf5b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00adf5e0 */
GEN_OWN GEN_FRAME unsigned int F_00adf5e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf5e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf610 */
GEN_OWN GEN_FRAME unsigned int F_00adf610(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00adf640 */
GEN_OWN GEN_FRAME unsigned int F_00adf640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf670 */
GEN_OWN GEN_FRAME uint F_00adf670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf670u, gen_a0, gen_a1, gen_a2, 0u);
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
        *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00adf6b0 */
GEN_OWN GEN_FRAME unsigned int F_00adf6b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf6e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adf6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadf6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00adf710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00adeec0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adf750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadf750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::FreePointerVector */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adf790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadf790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::ReservePointerVector */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adf7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadf7d0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::FillBytes */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adf880(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return (uint)(param_1 + param_2);
}

/* ref: Global::DestroyRecordRange */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00adf8b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadf8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00adf8e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00adf8e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf8e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf910 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adf910(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00adf940 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00adf940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf940u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adf970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adf970(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf970u, gen_a0, gen_a1, gen_a2, 0u);
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
        *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00adf9b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00adf9b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00adf9e0 */
GEN_OWN GEN_FRAME uint F_00adf9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadf9e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00adfa00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadfa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00adeec0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adfa40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adfa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadfa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00adfab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadfab0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::GrowPointerVector */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadfba0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00adf7d0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adf7d0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00adfc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadfc10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00adfab0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adfab0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00adfc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadfc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined1 uVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 * puVar10;
  
  uVar7 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != 0) {
    iVar8 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if ((iVar8 - iVar2) - 1U < (*(uint *)&gen_args[1])) {
                    
      F_00c4579a(((char *)REFP(0x108497c)));
    }
    uVar9 = (iVar2 - iVar8) + (*(uint *)&gen_args[1]);
    uVar3 = *((int *)GEN_TOP(((int)this + 8))) - iVar8;
    if (uVar3 < uVar9) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        (*(uint *)&gen_args[1]) = 0;
      }
      else {
        (*(uint *)&gen_args[1]) = uVar3 + (uVar3 >> 1);
      }
      if ((*(uint *)&gen_args[1]) < uVar9) {
        (*(uint *)&gen_args[1]) = uVar9;
      }
      puVar4 = ((undefined1 *)GEN_TOP(F_004296a0((*(uint *)&gen_args[1]),0,0x2be)));
      iVar8 = *(int *)this;
      F_00adf880(puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[0]) - iVar8),uVar7,(*(undefined1 * PTR32 *)&gen_args[2]));
      puVar10 = puVar4;
      for (puVar5 = *(undefined1 * PTR32 *)this; puVar5 != (*(undefined1 * PTR32 *)&gen_args[0]); puVar5 = puVar5 + 1) {
        if (puVar10 != ((undefined1 *)GEN_TOP(0x0))) {
          *puVar10 = *puVar5;
        }
        puVar10 = puVar10 + 1;
      }
      puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
      puVar10 = puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[0]) - iVar8) + uVar7;
      for (puVar6 = (*(undefined1 * PTR32 *)&gen_args[0]); puVar6 != puVar5; puVar6 = puVar6 + 1) {
        if (puVar10 != ((undefined1 *)GEN_TOP(0x0))) {
          *puVar10 = *puVar6;
        }
        puVar10 = puVar10 + 1;
      }
      iVar8 = *(int *)this;
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      if (iVar8 != 0) {
        F_00429760(iVar8,*((int *)GEN_TOP(((int)this + 8))) - iVar8,0x2be);
      }
      *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4 + (*(uint *)&gen_args[1]);
      *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4 + uVar7 + (iVar2 - iVar8);
      *(undefined1 * PTR32 *)this = puVar4;
      return (uint)puVar4;
    }
    uVar1 = *(*(undefined1 * PTR32 *)&gen_args[2]);
    (*(undefined1 * PTR32 *)&gen_args[2]) = ((undefined1 *)GEN_TOP(CONCAT13(uVar1,GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[2]), 0, 3))));
    if ((uint)(iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[0])) < (*(uint *)&gen_args[1])) {
      F_00adf910((*(undefined1 * PTR32 *)&gen_args[0]),iVar2,(*(undefined1 * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]));
      F_00adf880(*((int *)GEN_TOP(((int)this + 4))),(*(undefined1 * PTR32 *)&gen_args[0]) + ((*(uint *)&gen_args[1]) - *((int *)GEN_TOP(((int)this + 4)))),
                        (int)&(*(undefined1 * PTR32 *)&gen_args[2]) + 3);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + (*(uint *)&gen_args[1]);
      uVar7 = F_0049f130((*(undefined1 * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)this + 4))) - (*(uint *)&gen_args[1]),(int)&(*(undefined1 * PTR32 *)&gen_args[2]) + 3);
      return uVar7;
    }
    uVar7 = F_00adf910(iVar2 - (*(uint *)&gen_args[1]),iVar2,iVar2);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
    iVar8 = (iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[0])) - (*(uint *)&gen_args[1]);
    F_00c46e20(iVar2 - iVar8,(*(undefined1 * PTR32 *)&gen_args[0]),iVar8);
    in_EAX = F_0049f130((*(undefined1 * PTR32 *)&gen_args[0]),(*(undefined1 * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]),(int)&(*(undefined1 * PTR32 *)&gen_args[2]) + 3);
  }
  return in_EAX;
}

/* ref: FUN_00adfe30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adfe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xadfe30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *((undefined1 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x54)));
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

/* ref: FUN_00adfeb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adfeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadfeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0x2be);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00adff10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adff10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadff10u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00adffc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadffc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0x2be);
    F_00adf970(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0x2be);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ae00b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae00b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae00b0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined2 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0x2be)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: Global::CreateTreeNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0x2be)));
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

/* ref: Global::AppendPointer_00ae01a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae01a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00adfba0(this GEN_EDX_FWD,1);
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
      F_00adfba0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::AppendPointer2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00adfba0(this GEN_EDX_FWD,1);
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
      F_00adfba0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae0280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00adfc10(this GEN_EDX_FWD,1);
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
      F_00adfc10(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae02f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae02f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae02f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  iVar2 = *(int *)this;
  if ((*(uint *)&gen_args[0]) <= uVar3 - iVar2) {
    if (((*(uint *)&gen_args[0]) < uVar3 - iVar2) && (uVar1 = iVar2 + (*(uint *)&gen_args[0]), uVar1 != uVar3)) {
      uVar3 = F_00c46e20(uVar1,uVar3,0);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    }
    return uVar3;
  }
  uVar3 = F_00adfc80(this GEN_EDX_ARG,uVar3,(iVar2 - uVar3) + (*(uint *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00ae0360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00adfe30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ae0380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0380u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00adff10(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00adff10(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::GrowRecordVector */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae03f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae03f0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00adffc0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00adffc0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ae0480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0480u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00ae00b0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00ae00b0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00ae04f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae04f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae04f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0x2be)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_00adefd0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ae0550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae0750((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ae0560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae0750((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ae0570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0049f630(this GEN_EDX_FWD,1);
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
      F_0049f630(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ae05e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae05e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae05e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ae0380(this GEN_EDX_FWD,1);
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
      F_00ae0380(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::AppendRecord */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae0650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ae03f0(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined1 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined1 *)GEN_TOP((iVar4 + 0x54)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ae03f0(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined1 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined1 *)GEN_TOP((param_1 + 0x54)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
  return;
}

/* ref: FUN_00ae06e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae06e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae06e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined2 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ae0480(this GEN_EDX_FWD,1);
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
      F_00ae0480(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 2;
  return (uint)puVar3;
}

/* ref: Component::Completion::CompletionModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0750(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00adb830(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ae0790 */
GEN_OWN GEN_FRAME float10 F_00ae0790(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xae0790u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00ae07b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae07b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae07b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c90))) = 0xffffffff;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x214)));
  iVar2 = 8;
  do {
    F_00b7af70(((undefined *)GEN_TOP(((int)this_00 - 0x1a8))) GEN_EDX_FWD,0);
    uVar1 = F_00b7af70(this_00 GEN_EDX_ARG,0);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x390)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00ae0800 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae0800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x1c94))) = 0;
  return;
}

/* ref: FUN_00ae0810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  if (*((byte *)GEN_TOP(((int)this + 0x1c94))) != 0) {
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  }
  return 0;
}

/* ref: FUN_00ae0850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((-1 < param_1) && (param_1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))))) {
    return (uint)(param_1 * 0x390 + (int)this);
  }
  return 0;
}

/* ref: FUN_00ae0880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (*((byte *)GEN_TOP(((int)this + 0x1c94))) != 0) {
    piVar2 = ((int *)GEN_TOP(((int)this + 0x208)));
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  }
  return 0;
}

/* ref: FUN_00ae08d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae08d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (*((byte *)GEN_TOP(((int)this + 0x1c94))) != 0) {
    piVar2 = ((int *)GEN_TOP(((int)this + 4)));
    do {
      if (*piVar2 == param_1) {
        return (uint)(iVar1 * 0x390 + (int)this);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  }
  return 0;
}

/* ref: FUN_00ae0910 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  if (*((byte *)GEN_TOP(((int)this + 0x1c94))) != 0) {
    do {
      if (*piVar2 == param_1) {
        if (((undefined *)GEN_TOP((iVar1 * 0x390 + (int)this))) == ((undefined *)GEN_TOP(0x0))) {
          return 0;
        }
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  }
  return 0;
}

/* ref: FUN_00ae0950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae0950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (*((byte *)GEN_TOP(((int)this + 0x1c94))) != 0) {
    pbVar4 = ((byte *)GEN_TOP(((int)this + 0x10)));
    pbVar2 = param_1;
    pbVar5 = pbVar4;
LAB_00ae0970: ;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00ae0990;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_00ae0970;
        }
        iVar3 = 0;
      }
      else {
LAB_00ae0990: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      pbVar4 = pbVar5 + 0x390;
      pbVar2 = param_1;
      pbVar5 = pbVar4;
    } while (iVar6 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  }
  return 0;
}

/* ref: FUN_00ae09c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae09c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae09c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((-1 < *((int *)GEN_TOP((in_ecx + 0x1c90)))) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c90))) * 0x390 + in_ecx))) == param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae09f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae09f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae09f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (((99 < *((uint *)GEN_TOP(((int)this + 0x200)))) ||
      (uVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(*((uint *)GEN_TOP(((int)this + 0x200))))], uVar1 == 0)) ||
     (*((int *)GEN_TOP((uVar1 + 0x74))) != *(int *)this)) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)this);
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x200))) = (uint)*((ushort *)GEN_TOP((uVar1 + 0x88)));
    }
  }
  return uVar1;
}

/* ref: FUN_00ae0a30 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00ae0a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  double dVar4;
  float local_8;
  
  if (REFG(int, 0x1379694) == 0) {
    return (float)(float10)0;
  }
  if (param_1 == 0) {
    param_1 = REFG(int, 0x1379694);
  }
  iVar3 = 0;
  local_8 = 0.0;
  if (*((char *)GEN_TOP(((int)this + 0x1c94))) == '\0') {
    return 0.0;
  }
  puVar2 = ((uint *)GEN_TOP(((int)this + 0x200)));
  do {
    if (((99 < *puVar2) || (uVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(*puVar2)], uVar1 == 0)) ||
       (*((uint *)GEN_TOP((uVar1 + 0x74))) != puVar2[-0x80])) {
      uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,puVar2[-0x80]);
      if (uVar1 == 0) {
        return REFG(float, 0x1090998);
      }
      *puVar2 = (uint)*((ushort *)GEN_TOP((uVar1 + 0x88)));
    }
    dVar4 = F_00a600a0(param_1,uVar1);
    if ((float10)local_8 < (float10)(float)dVar4) {
      local_8 = (float)dVar4;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xe4;
  } while (iVar3 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1c94))));
  return local_8;
}

/* ref: FUN_00ae0b20 */
GEN_OWN GEN_FRAME float10 F_00ae0b20(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xae0b20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00ae0b60 */
GEN_OWN GEN_NOFRAME unsigned int F_00ae0b60(void)
{
  GEN_ENTER(0xae0b60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ae0b90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae0b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x388))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x590))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x718))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x71c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x920))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0xaa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xaac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcb0))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0xe38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1040))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13d0))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x1558))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x155c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1760))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x18e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1af0))) = 100;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c7c))) = 0;
  return 0;
}

/* ref: FUN_00ae0c30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ae0b90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ae0c70 */
GEN_OWN GEN_FRAME float10 F_00ae0c70(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xae0c70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00ae0c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x3e90;
  uVar1 = F_00406bb0(0xac0c0,0,0);
  *(uint *)this = uVar1;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ae0cc0 */
GEN_OWN GEN_NOFRAME unsigned int F_00ae0cc0(void)
{
  GEN_ENTER(0xae0cc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ae0cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
  uVar2 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
  }
  return uVar2;
}

/* ref: FUN_00ae0d60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae0d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((((iVar1 != 0x28) && (iVar1 != 0x29)) && (iVar1 != 0x2a)) && (iVar1 != 0x2b)) {
      F_00ae0cd0(this GEN_EDX_FWD,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2c);
  return;
}

/* ref: FUN_00ae0d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP((in_ecx + 8)));
  do {
    if (*piVar2 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00ae0db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae0db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x2b < param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + 8 + param_2 * 4)));
}

/* ref: FUN_00ae0dd0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00ae0dd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return 1 - (0x2b < param_1 - 200U);
}

/* ref: Client::Game::Object::GatheringPointObject::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00a5f970((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,7,0);
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0xfc);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 4))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_FWD);
  uVar1 = F_00a5fb90((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf42 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xae0e60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 8))))
                    (*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0xc))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_FWD);
  uVar1 = F_00a61430((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf48 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    uVar1 = F_00ab2d80(*(undefined4 *)(this + 0x80));
    if (uVar1 == 0) {
      return 0;
    }
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_00718ff0(this_00 GEN_EDX_ARG,this,uVar1);
  }
  return 1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 4)));
  if (iVar1 != 0) {
    *param_1 = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*(int *)(this + 0x178) != 0) {
    param_1[uVar2] = *(int *)(this + 0x178);
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00ae0f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xae0f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x8a))) = 6;
  F_00a5f430(this GEN_EDX_FWD,param_3);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ae0f50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae0f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00ae0f60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae0f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00ae0f70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae0f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00ae0f80 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae0f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00ae0fa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00ae0fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae0fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae0fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae0fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae0fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_006ce640(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,*(undefined4 *)(this + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (uVar2 = *(uint *)(this + 4), *((char *)GEN_TOP((uVar2 + 0x148))) == '\0')) {
    uVar2 = (uint)*((byte *)GEN_TOP((uVar2 + 0x145)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      uVar3 = 0x422;
      break;
    case 1: ;
      uVar3 = 0x423;
      break;
    case 2: ;
      uVar3 = 0x424;
      break;
    case 3: ;
      uVar3 = 0x425;
      break;
    default: ;
      goto switchD_00ae100b_default;
    }
    uVar2 = F_00a76e30(uVar3,*(undefined4 *)(this + 0x10),0,0,0,REFG(float, 0x10b8df8));
  }
switchD_00ae100b_default: ;
  return uVar2;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_006ce820(*((undefined4 *)GEN_TOP((in_ecx + 4))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 0xec)));
  bVar1 = F_006ce640(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,*(undefined4 *)(this + 8));
  if (bVar1 == 0) {
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfd;
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfe;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_0068b710(this_00 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        F_0068b730(this_00 GEN_EDX_ARG,(float)(float10)0);
      }
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x28))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,7,0);
  }
  else {
    bVar3 = *((char *)GEN_TOP((*(int *)(this + 4) + 0x148))) != '\0';
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) =
         *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfd | bVar3 * '\x02';
    *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) = *((byte *)GEN_TOP((*(int *)(this + 0x10) + 0x8e))) & 0xfe | bVar3
    ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x24))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,7,0);
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_0068b710(this_00 GEN_EDX_ARG);
      if ((char)uVar2 == '\0') {
        uVar2 = F_00699cb0(this_00 GEN_EDX_ARG,(float)(float10)0);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x145)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x147)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf6 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x148)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x149)));
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf8 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1180(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x130))) != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x134))) != 0)
     ) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae11a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae11a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_006ce740(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,&REFG(undefined, 0x14c09e0));
  uVar1 = F_0042a990(&REFG(undefined, 0x14c09e0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae11c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae11c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_006d59d0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,&REFG(undefined, 0x14c09e0));
  uVar1 = F_0042a990(&REFG(undefined, 0x14c09e0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ae11e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae11e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae11e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x1f0;
  uVar1 = F_00406bb0(0x4d80,0,0);
  *(uint *)this = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
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
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  return 0;
}

/* ref: FUN_00ae12a0 */
GEN_OWN GEN_NOFRAME unsigned int F_00ae12a0(void)
{
  GEN_ENTER(0xae12a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ae12b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae12b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae12b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  if (REFG(char, 0x1379c96) == '\0') {
    piVar2 = ((int *)GEN_TOP(((int)this + 8)));
    iVar3 = 0x28;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00ae1300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae1300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 0x28) {
    return *((uint *)GEN_TOP((in_ecx + 8 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00ae1320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 8)));
  while ((*piVar2 == 0 || (*((int *)GEN_TOP((*piVar2 + 0x74))) != param_1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x27 < iVar1) {
      return 0;
    }
  }
  return *((uint *)GEN_TOP(((int)this + iVar1 * 4 + 8)));
}

/* ref: FUN_00ae1360 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ae1360(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae1360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00ae1370 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ae1370(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae1370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00ae1380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae1380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP(((int)this + 0xc)));
  iVar3 = 8;
  do {
    iVar1 = piVar2[-1];
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    iVar1 = piVar2[3];
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xe4))) == param_1)) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) | 0x2c;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00ae1410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae1410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar4 = ((int *)GEN_TOP(((int)this + 8)));
  do {
    piVar2 = ((int *)GEN_TOP(*piVar4));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) &&
       (bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x8a))), ((byte)param_1 & 1 < bVar1) != 0)) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_FWD);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      if ((*((byte *)GEN_TOP(((int)piVar2 + 0x8e))) & 0x80) != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x70))))(piVar2 GEN_EDX_ARG);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        if ((bVar1 == 7) && ((char)piVar2[99] == '\0')) {
          return 0;
        }
      }
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    if (0x27 < uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ae14a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae14a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae14a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00ae14b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae14b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xae14b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  float10 fVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 uVar3;
  
  fVar1 = (float10)0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))
            (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar1),(undefined4)gen_fl2bits((float)fVar1),
             (undefined4)gen_fl2bits((float)fVar1));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x8a))) = 4;
  uVar3 = (undefined2)param_2;
  if (param_3 == 0) {
    uVar3 = 0xffff;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x1e8))) = uVar3;
  F_00a5f430(this GEN_EDX_ARG,param_3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
  uVar2 = F_00ab26f0(param_1);
  this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar2 = F_00718ff0(this_00 GEN_EDX_ARG,this,uVar2);
  return uVar2;
}

/* ref: FUN_00ae1540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae1540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 400 + param_2 * 4;
}

/* ref: FUN_00ae1560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1d0)));
  if (uVar1 < 0x10) {
    *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 400))) = 0;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x1d0)));
    *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 400))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x1d0))) = *((int *)GEN_TOP(((int)this + 0x1d0))) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ae15a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae15a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_005eb180(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,param_1,0);
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::Game::Object::Treasure::vf52 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae15d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae15d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0xf0);
  if (this[0x1d8] != (undefined1)0x0) {
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_005eb180(this_00 GEN_EDX_FWD,2,0);
    }
    *(undefined4 *)(this + 0x180) = 2;
    return;
  }
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_005eb180(this_00 GEN_EDX_ARG,3,0);
  }
  *(undefined4 *)(this + 0x180) = 0;
  return;
}

/* ref: Client::Game::Object::Treasure::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00a5f970((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Object::Treasure::vf53 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae1640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x184))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x188))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1d4))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1dc))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 400))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x194))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x198))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1cc))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1e2))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1e4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x180))) = 0;
  return 0;
}

/* ref: FUN_00ae1700 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae1700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x1d8))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x1d8))) = 1;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
      F_005eb180(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,0,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 1;
  }
  return;
}

/* ref: FUN_00ae1740 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae1740(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xae1740u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  if (*((char *)GEN_TOP((param_1 + 0x1d8))) == '\0') {
    *((float *)GEN_TOP((param_1 + 0x184))) = param_2;
    *((float *)GEN_TOP((param_1 + 0x18c))) = param_4;
    *((undefined1 *)GEN_TOP((param_1 + 0x1d8))) = 1;
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
      F_005eb180(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_FWD,0,0);
    }
    *((undefined4 *)GEN_TOP((param_1 + 0x180))) = 1;
  }
  return;
}

/* ref: FUN_00ae17a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae17a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae17a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP((param_1 + 0x14))) * 4 + 400))) =
       *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x194)));
  while (piVar3[-1] != 0) {
    *((int *)GEN_TOP(((int)this + 0x1d0))) = *((int *)GEN_TOP(((int)this + 0x1d0))) + 1;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x1d0)));
    if (((*piVar3 == 0) || (*((int *)GEN_TOP(((int)this + 0x1d0))) = iVar2 + 1, piVar3[1] == 0)) ||
       (*((int *)GEN_TOP(((int)this + 0x1d0))) = iVar2 + 2, piVar3[2] == 0)) break;
    iVar4 = iVar4 + 4;
    piVar3 = piVar3 + 4;
    *((int *)GEN_TOP(((int)this + 0x1d0))) = iVar2 + 3;
    if (0xf < iVar4) break;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 1;
  *((bool *)GEN_TOP(((int)this + 0x1e1))) = *((int *)GEN_TOP(((int)this + 0x1d0))) != 0;
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if (*((char *)GEN_TOP(((int)this + 0x1d8))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0x184))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = uVar1;
    *((undefined1 *)GEN_TOP(((int)this + 0x1d8))) = 1;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) != ((undefined *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_005eb180(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,0,0)));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 1;
  }
  return (uint)piVar3;
}

/* ref: FUN_00ae18c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae18c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae18c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x1e4))) != 0;
}

/* ref: FUN_00ae18d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae18d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae18d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x1e2))) != '\0';
}

/* ref: Client::Game::Object::Treasure::vf49 */
GEN_OWN GEN_NOFRAME byte F_00ae18e0(void)
{
  GEN_ENTER(0xae18e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::Treasure::vf50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae18f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae18f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_FWD);
  return (char)uVar1 == '\x01';
}

/* ref: FUN_00ae1910 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae1910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x180))) = 2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1e0))) = 1;
  return;
}

/* ref: FUN_00ae1930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint in_EAX = 0;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x1ec))) < 2) && (*((char *)GEN_TOP(((int)this + 0x1d8))) != '\0')) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x28)));
    *((byte *)GEN_TOP(((int)this + 0x8e))) = *((byte *)GEN_TOP(((int)this + 0x8e))) & 0xfd;
    in_EAX = (*pcVar1)(this,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 4;
  }
  return in_EAX;
}

/* ref: FUN_00ae1970 */
GEN_OWN GEN_FRAME double F_00ae1970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae1970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  double dVar1;
  
  if ((REFG(int, 0x1379694) != 0) && (param_1 != 0)) {
    dVar1 = F_00a600a0(REFG(int, 0x1379694),param_1);
    return dVar1;
  }
  return 0.0;
}

/* ref: FUN_00ae19a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ae19a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((((0x27 < uVar3 || (piVar2 = ((int *)GEN_TOP((&REFG(undefined4, 0x14c0880))[(int)(uVar3)])), piVar2 == ((int *)GEN_TOP(0x0)))) ||
          (piVar2[0x1d] != param_1)) || (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG), uVar1 != 4))) {
    uVar3 = uVar3 + 1;
    if (0x27 < uVar3) {
      uVar3 = 0;
      while (((piVar2 = ((int *)GEN_TOP(F_00b79f30(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,uVar3))), piVar2 == ((int *)GEN_TOP(0x0)) ||
              (piVar2[0x1d] != param_1)) || (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG), uVar1 != 4)
             )) {
        uVar3 = uVar3 + 1;
        if (0x3b < uVar3) {
          return 0;
        }
      }
      return (uint)piVar2;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ae1a20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ae1a20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae1a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00ae19a0(*param_1)));
  puVar3 = puVar2;
  if ((puVar2 != ((undefined4 *)GEN_TOP(0x0))) && (*(char *)(puVar2 + 0x76) == '\0')) {
    uVar4 = 0;
    if (*(char *)(param_1 + 1) != '\0') {
      puVar3 = puVar2 + 100;
      puVar5 = param_1 + 5;
      do {
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar3 = *puVar5;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 < *(byte *)(param_1 + 1));
    }
    puVar2[0x74] = (uint)*(byte *)(param_1 + 1);
    *((bool *)GEN_TOP(((int)puVar2 + 0x1e1))) = *(char *)(param_1 + 1) != '\0';
    uVar1 = param_1[4];
    if (*(char *)(puVar2 + 0x76) == '\0') {
      puVar2[0x61] = param_1[2];
      puVar2[99] = uVar1;
      *(undefined1 *)(puVar2 + 0x76) = 1;
      if (((undefined *)GEN_TOP(puVar2[0x3c])) != ((undefined *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(F_005eb180(((undefined *)GEN_TOP(puVar2[0x3c])) GEN_EDX_ARG,0,0)));
      }
      puVar2[0x60] = 1;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00ae1ad0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 4)));
  while( true ) {
    if (*piVar3 == -0x20000000) {
      return 0;
    }
    uVar1 = F_00ab24a0(piVar3[2]);
    if (uVar1 == 0) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 10;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae1b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa08)));
}

/* ref: FUN_00ae1b20 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00ae1b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)0.0;
  iVar2 = 0;
  pfVar1 = ((float *)GEN_TOP(((int)this + 0x4c)));
  do {
    if (pfVar1[-0x12] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[-10]) {
      fVar3 = (float10)pfVar1[-10];
    }
    if (pfVar1[-8] == -3.689349e+19) break;
    if (fVar3 < (float10)*pfVar1) {
      fVar3 = (float10)*pfVar1;
    }
    if (pfVar1[2] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[10]) {
      fVar3 = (float10)pfVar1[10];
    }
    if (pfVar1[0xc] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[0x14]) {
      fVar3 = (float10)pfVar1[0x14];
    }
    iVar2 = iVar2 + 4;
    pfVar1 = pfVar1 + 0x28;
  } while (iVar2 < 0x40);
  return (float)fVar3;
}

/* ref: FUN_00ae1be0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00ae1be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar4 = (float10)REFG(float, 0x1090998);
  iVar2 = 0;
  pfVar1 = ((float *)GEN_TOP(((int)this + 0x48)));
  do {
    if (pfVar1[-0x11] == -3.689349e+19) break;
    if ((float10)pfVar1[-10] < fVar4) {
      fVar4 = (float10)pfVar1[-10];
    }
    if (pfVar1[-7] == -3.689349e+19) break;
    if ((float10)*pfVar1 < fVar4) {
      fVar4 = (float10)*pfVar1;
    }
    if (pfVar1[3] == -3.689349e+19) break;
    if ((float10)pfVar1[10] < fVar4) {
      fVar4 = (float10)pfVar1[10];
    }
    if (pfVar1[0xd] == -3.689349e+19) break;
    if ((float10)pfVar1[0x14] < fVar4) {
      fVar4 = (float10)pfVar1[0x14];
    }
    iVar2 = iVar2 + 4;
    pfVar1 = pfVar1 + 0x28;
  } while (iVar2 < 0x40);
  bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)REFG(double, 0x10909a0));
  if (bVar3 != (bVar3 || fVar4 == (float10)REFG(double, 0x10909a0))) {
    fVar4 = (float10)0.0;
  }
  return (float)fVar4;
}

/* ref: FUN_00ae1d00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae1d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if (param_1 != -0x20000000) {
    iVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 4)));
    do {
      if (*piVar2 == -0x20000000) {
        return 0;
      }
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar1 < 0x40);
  }
  return 0;
}

/* ref: FUN_00ae1d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x2c)));
  while( true ) {
    if (piVar2[-10] == -0x20000000) {
      return uVar1;
    }
    if (*piVar2 == -0x20000000) {
      return uVar1 + 1;
    }
    if (piVar2[10] == -0x20000000) {
      return uVar1 + 2;
    }
    if (piVar2[0x14] == -0x20000000) break;
    iVar3 = iVar3 + 4;
    piVar2 = piVar2 + 0x28;
    uVar1 = uVar1 + 4;
    if (0x3f < iVar3) {
      return uVar1;
    }
  }
  return uVar1 + 3;
}

/* ref: FUN_00ae1d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae1d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  iVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 4)));
  while( true ) {
    if (*piVar1 == -0x20000000) {
      return 0;
    }
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 10;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_00ae1de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae1de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x3f < param_2) {
    return 0;
  }
  return in_ecx + 4 + param_2 * 0x28;
}

/* ref: FUN_00ae1e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xa14))) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::EventObject::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a5f970((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  this[0x18c] = (undefined1)0x0;
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00b5c1e0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,(uint)*(ushort *)(this + 0x88));
  uVar1 = F_00a5fb90((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ae1e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae1e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xae1e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  code * pcVar1;
  float10 fVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  
  fVar2 = (float10)0;
  *((undefined2 *)GEN_TOP(((int)this + 0x188))) = (undefined2)param_2;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x8a))) = 7;
  (*pcVar1)(this,(undefined4)gen_fl2bits((float)fVar2),(undefined4)gen_fl2bits((float)fVar2),
            (undefined4)gen_fl2bits((float)fVar2));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  F_00a5f430(this GEN_EDX_ARG,param_3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
  uVar4 = F_00ab2470(param_1);
  *((uint *)GEN_TOP(((int)this + 0x180))) = uVar4;
  uVar5 = 0;
  if (uVar4 != 0) {
    F_00a5f570(this GEN_EDX_ARG,*((undefined1 *)GEN_TOP((uVar4 + 0x17))));
    F_00a607e0(this GEN_EDX_ARG,0,param_1,7);
    iVar6 = *((int *)GEN_TOP(((int)this + 0x180)));
    *((byte *)GEN_TOP(((int)this + 0x8e))) =
         *((byte *)GEN_TOP(((int)this + 0x8e))) ^ (*((byte *)GEN_TOP(((int)this + 0x8e))) ^ *((byte *)GEN_TOP((iVar6 + 0x18)))) & 1;
    *((byte *)GEN_TOP(((int)this + 0x8e))) =
         (*((char *)GEN_TOP((iVar6 + 0x18))) * '\x02' ^ *((byte *)GEN_TOP(((int)this + 0x8e)))) & 2 ^
         *((byte *)GEN_TOP(((int)this + 0x8e)));
    if (param_4 == 0) {
      uVar5 = F_00ab3d20((uint)*((ushort *)GEN_TOP((iVar6 + 0x14))));
      *((uint *)GEN_TOP(((int)this + 0x184))) = uVar5;
    }
    else {
      *((int *)GEN_TOP(((int)this + 0x7c))) = param_4;
      if (REFG(char, 0x1379c96) == '\0') {
        bVar3 = F_005d99c0();
        if (bVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
        }
      }
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0x180)));
    if (*((char *)GEN_TOP((iVar6 + 0x19))) == '\x01') {
      *((byte *)GEN_TOP(((int)this + 0x8f))) = *((byte *)GEN_TOP(((int)this + 0x8f))) | 2;
    }
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar5 = F_00718ff0(this_00 GEN_EDX_ARG,this,iVar6);
  }
  return uVar5;
}

/* ref: Client::Game::Object::EventObject::vf11 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae1f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((byte)this[0x8e] & 0x80) != 0) {
    return;
  }
  if (*(int *)(this + 0x7c) != 0) {
    F_00a608c0((undefined *)this GEN_EDX_FWD);
    return;
  }
  F_00a61740(this GEN_EDX_ARG);
  return;
}

/* ref: Client::Game::Object::EventObject::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae1fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a61430((undefined *)this GEN_EDX_FWD);
  if (((byte)this[0x8f] & 1) == 0) {
    uVar1 = F_00a607e0(this GEN_EDX_ARG,0,*(undefined4 *)(this + 0x80),7);
  }
  return uVar1;
}

/* ref: Client::Game::Object::EventObject::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae1fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) &&
     ((*(int *)(this + 0x7c) != 0 ||
      ((*(int *)(this + 0x180) == 0 || (*((short *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) != 0)))))) {
    return;
  }
  F_00a61d10((undefined *)this GEN_EDX_FWD);
  return;
}

/* ref: Client::Game::Object::EventObject::vf34 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae2010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x18c))) = 0;
  F_00a5f610(in_ecx GEN_EDX_FWD);
  return;
}

/* ref: Client::Game::Object::EventObject::vf49 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae2020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x184))) != 0;
}

/* ref: FUN_00ae2030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  ushort uVar1;
  undefined * this_00;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x18a)));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xf0)));
  *((ushort *)GEN_TOP(((int)this + 0x18a))) = (ushort)param_1;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_005d5fe0(this_00 GEN_EDX_FWD);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      uVar3 = F_00a5f380(this GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int * PTR32 *)(gen_frame + 0x0))[0] + 0xc4))))(((int * PTR32 *)(gen_frame + 0x0))[0] GEN_EDX_ARG,this,(uint)uVar1,param_1);
        return uVar3;
      }
      uVar4 = 0;
      do {
        bVar2 = F_005dbc90(this_00 GEN_EDX_ARG,uVar4);
        uVar3 = CONCAT31(extraout_var_00,bVar2);
        if (bVar2 != 0) {
          if (((ushort)param_1 & 1 << GEN_SHC((byte)uVar4, (unsigned int)(uintptr_t)uVar4)) == 0) {
            uVar3 = F_005e35d0(this_00 GEN_EDX_ARG,uVar4);
            if ((char)uVar3 != '\0') {
              bVar2 = F_005e3530(this_00 GEN_EDX_ARG,uVar4);
              uVar3 = CONCAT31(extraout_var_01,bVar2);
            }
          }
          else {
            uVar3 = F_005e35d0(this_00 GEN_EDX_ARG,uVar4);
            if ((char)uVar3 == '\0') {
              uVar3 = F_005eb180(this_00 GEN_EDX_ARG,uVar4,0);
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
    }
  }
  return uVar3;
}

/* ref: FUN_00ae20f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae20f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae20f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x180))) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x180))) + 0x16)));
  }
  return 0;
}

/* ref: FUN_00ae2110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xae2110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10eb824));
  in_ecx[1] = param_2;
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::Distance2DFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD);
  uVar2 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar3 = F_00aaea30(uVar2,uVar1);
  if ((float10)fVar3 <= (float10)*(float *)(this + 8)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::BnpcFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae2170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    return uVar1 == 2;
  }
  return 0;
}

/* ref: FUN_00ae21b0 */
GEN_OWN GEN_FRAME unsigned int F_00ae21b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xae21b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((param_1 + uVar3 * 4)));
      if ((iVar1 != 0) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_ARG,iVar1), (char)uVar2 == '\0'))
      {
        *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

/* ref: FUN_00ae21f0 */
GEN_OWN GEN_FRAME uint F_00ae21f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xae21f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  local_c = 0;
  if (param_2 != 0) {
    do {
      if (local_8 != 0) {
        return local_8;
      }
      uVar2 = *((uint *)GEN_TOP((param_1 + local_c * 4)));
      if (uVar2 != 0) {
        uVar5 = 0;
        bVar4 = 1;
        if (param_4 != 0) {
          do {
            if (bVar4 == 0) goto LAB_00ae2241;
            piVar1 = *((int * PTR32 *)GEN_TOP((param_3 + uVar5 * 4)));
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,uVar2);
            uVar5 = uVar5 + 1;
            bVar4 = bVar4 & (byte)uVar3;
          } while (uVar5 < param_4);
          if (bVar4 == 0) goto LAB_00ae2241;
        }
        local_8 = uVar2;
      }
LAB_00ae2241: ;
      local_c = local_c + 1;
      uVar2 = local_8;
    } while (local_c < param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Object::AreaObject::vf43 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae2260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a5f970((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  return;
}

/* ref: Client::Game::Object::AreaObject::vf44 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae2280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x180) != ((undefined *)GEN_TOP(0x0))) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,1);
    F_00983120(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,0);
    *(undefined4 *)(this + 0x180) = 0;
  }
  return;
}

/* ref: FUN_00ae22b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae22b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae22b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float10 fVar1;
  float * pfVar2;
  uint in_ecx;
  undefined * this;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_FWD)));
  (*(float *)(gen_frame + 0x0)) = *pfVar2;
  (*(float *)(gen_frame + 0x4)) = pfVar2[1];
  (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  in_ecx = F_00ab44e0(param_1[0x20],&(*(float *)(gen_frame + 0x0)),(float)(float10)1,0);
  param_1[0x60] = in_ecx;
  uVar3 = 0;
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    pfVar2 = ((float *)(gen_frame + 0x10));
    ((float *)(gen_frame + 0x10))[0] = param_2;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + fVar1);
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = param_2;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + fVar1);
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x38)) = param_2;
    (*(float *)(gen_frame + 0x48)) = (float)(fVar1 + (float10)(*(float *)(gen_frame + 0x8)));
    this = ((undefined *)GEN_TOP(F_00983160(in_ecx GEN_EDX_ARG)));
    F_009bc130(this GEN_EDX_ARG,pfVar2);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,0xb,0);
  }
  return uVar3;
}

/* ref: FUN_00ae23b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae23b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae23b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 8)));
  local_8 = 0x2c;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar3));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
      case 8: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar2 = F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ae2460 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00ae2460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae2460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return 1 - (0x2b < *((ushort *)GEN_TOP((param_1 + 0x88))) - 200);
}

/* ref: Client::Game::Object::GatheringPointObject::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0xec))) != 0) && (*((char *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xec))) + 0x65))) == '\x03')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae24a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae24a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae24a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
  uVar2 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
  }
  return uVar2;
}

/* ref: FUN_00ae2520 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae2520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 8)));
  local_8 = 0x28;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar3));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return;
}

/* ref: Client::Game::Object::Treasure::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae25a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae25a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(this + 0x184) - (float10)fVar1)));
  *(float *)(this + 0x184) = fVar2;
  if ((float10)fVar2 < (float10)0) {
    *(undefined4 *)(this + 0x184) = 0;
  }
  iVar3 = *(int *)(this + 0x180);
  if (iVar3 == 1) {
    if ((*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0))) &&
       (uVar4 = F_005e35d0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_FWD,0), (char)uVar4 == '\0')) {
      *(undefined4 *)(this + 0x180) = 2;
      *(undefined4 *)(this + 0x1dc) = 0;
      uVar4 = F_00a61430((undefined *)this GEN_EDX_ARG);
      return uVar4;
    }
  }
  else if (iVar3 == 2) {
    if ((((*(int *)(this + 0x1ec) == 1) || (*(int *)(this + 0x1ec) == 0)) ||
        (this[0x1e0] != (undefined1)0x0)) &&
       (fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)(this + 0x1dc)))),
       *(float *)(this + 0x1dc) = fVar1, (float10)1 <= (float10)fVar1)) {
      if (*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0))) {
        F_005eb180(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_ARG,4,0);
      }
      this[0x8e] = (undefined1)((byte)this[0x8e] & 0xfd);
      *(undefined4 *)(this + 0x180) = 3;
      uVar4 = F_00a61430((undefined *)this GEN_EDX_ARG);
      return uVar4;
    }
  }
  else if (((iVar3 == 3) && (*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0)))) &&
          ((*(int *)(this + 0x11c) == 0 &&
           (uVar4 = F_005e35d0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_ARG,4), (char)uVar4 == '\0')))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0,0);
    *(undefined4 *)(this + 0x180) = 4;
    uVar4 = F_00a61430((undefined *)this GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_00a61430((undefined *)this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00ae2700 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae2700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae2700u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x188))) = param_2;
  if ((float10)*((float *)GEN_TOP((in_ecx + 0x184))) < (float10)*((float *)GEN_TOP((in_ecx + 0x188)))) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x184))) = *((undefined4 *)GEN_TOP((in_ecx + 0x184)));
    return;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x184))) = *((undefined4 *)GEN_TOP((in_ecx + 0x188)));
  return;
}

/* ref: Client::Game::Object::Treasure::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(this + 0x1e4) != 0) {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0x18b;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar5);
      return uVar2;
    }
  }
  return (uint)(this + 0x30);
}

/* ref: Client::Game::Object::Treasure::vf11 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae2790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab26f0(0)));
    F_00a5f8c0(this GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
    F_00a61740(this GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: Client::Game::Object::Treasure::vf51 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae27d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae27d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  uint * puVar3;
  
  if (*(int *)(this + 0x80) == 0) {
    uVar2 = 0x63e;
  }
  else {
    uVar1 = F_00ab26f0(*(int *)(this + 0x80));
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
  }
  puVar3 = ((uint *)GEN_TOP(F_00ab3d20(uVar2)));
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00a1d100((uint)*(ushort *)(this + 0x1e8),*(undefined4 *)(this + 0x78),&REFG(float, 0x1302df0),
                       (*puVar3 & 0xffffff) + (int)puVar3,((char *)REFP(0x10eb0b4)),
                       (uint)(*(int *)(this + 0x11c) == 0),(uint)*(ushort *)(this + 0x88),5,0);
  return uVar1;
}

/* ref: FUN_00ae2850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae2850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  bool bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar4 = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar6 = 0x20;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((undefined1 *)GEN_TOP(((int)this + 0xa10))) = 1;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      if ((uVar4 == 0) || (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG), (char)uVar4 != '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar5 = param_1;
      if (param_1 == 3) {
        if (param_2 != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0xa08))) = 3;
          *((uint *)GEN_TOP(((int)this + 0xa0c))) = param_2;
          return param_2;
        }
        iVar5 = 1;
      }
      uVar4 = F_00ae1d40(this GEN_EDX_ARG);
      if (((uVar4 != 0) && (iVar5 != 0)) && ((iVar5 != 1 || (bVar1)))) {
        bVar2 = F_00ae1ad0(this GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this + 0xa08))) = (bVar2 != 1) + 1;
        return CONCAT31(extraout_var,bVar2);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0xa08))) = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_00ae2920 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ae2850(this GEN_EDX_FWD,0,0);
  return uVar1;
}

/* ref: FUN_00ae2930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00ae1d40(this GEN_EDX_ARG);
    if (uVar2 != 0) {
      if (*((int *)GEN_TOP(((int)this + 0xa04))) != 0) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xa04))),0);
        *((undefined4 *)GEN_TOP(((int)this + 0xa04))) = 0;
      }
      uVar4 = 0x20;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
      piVar1[3] = *((int *)GEN_TOP(((int)this + 0xa14)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ae29b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae29b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae29b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar4 = 0x20;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    if (*((int *)GEN_TOP(((int)this + 0xa04))) != 0) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xa04))),0);
      *((undefined4 *)GEN_TOP(((int)this + 0xa04))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae2a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae2a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae19a0(param_1);
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar2 = 0, param_2 != 0)) {
    uVar2 = F_00ae2850(this GEN_EDX_ARG,3,param_2);
  }
  return uVar2;
}

/* ref: FUN_00ae2a50 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00ae2a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae2a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1b4;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ae2af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (uVar1 == 4) {
    uVar1 = F_00ae2a50(param_1[0x1d]);
    if (param_1[0x7b] == 1) {
      uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x6e,0,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00ae2b40 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00ae2b40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae2b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar2 = param_1;
  if (param_1 != 0xe0000000) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x1b6;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(uint *)(gen_frame + 0x18)) = param_1;
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar2 = 0;
    if (this != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ae2be0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2be0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xae2be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(uint *)(gen_frame + 0xc24)) = uVar3;
  if (param_3 < 0x40) {
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 4 + param_3 * 0x28)));
    (*(undefined4 *)(gen_frame + 0x18)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar1[1];
    (*(undefined1 *)(gen_frame + 0x20)) = param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x1b5;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
    bVar2 = F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_00ae2c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae2c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae2c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x3f < param_1) {
    return 0;
  }
  if ((int)param_1 < 0x40) {
    piVar1 = ((int *)GEN_TOP(((int)this + param_1 * 0x28 + 0x2c)));
    uVar4 = param_1;
    do {
      if ((uVar4 == 0x3f) || (*piVar1 == -0x20000000)) {
        piVar1[-10] = -0x20000000;
      }
      else {
        piVar5 = piVar1;
        piVar6 = piVar1 - 10;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 - 1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      uVar4 = uVar4 + 1;
      piVar1 = piVar1 + 10;
    } while ((int)uVar4 < 0x40);
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xa14)));
  if (uVar4 <= param_1) {
    if (uVar4 == param_1) {
      uVar2 = F_00ae1d40(this GEN_EDX_FWD);
      if (uVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xa14))) = 0;
        return 1;
      }
      if (uVar2 <= uVar4) {
        *((uint *)GEN_TOP(((int)this + 0xa14))) = uVar2 - 1;
      }
    }
    return 1;
  }
  *((uint *)GEN_TOP(((int)this + 0xa14))) = uVar4 - 1;
  return 1;
}

/* ref: FUN_00ae2d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae2d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ae1d90(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ae2d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae2d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  if (0x3f < param_2) {
    return param_2;
  }
  if ((param_1 != 4) && (param_1 != 3)) {
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + param_2 * 0x28 + 0x1a))))) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 3: ;
      break;
    case 4: ;
      uVar1 = F_00ab9000(0x4d7);
      return uVar1;
    case 5: ;
      uVar1 = F_00ab9000(0x4d8);
      return uVar1;
    default: ;
      return param_2;
    case 7: ;
      uVar1 = F_00ab9000(0x4d9);
      return uVar1;
    case 8: ;
      uVar1 = F_00ab9000(0x4e4);
      return uVar1;
    case 9: ;
      uVar1 = F_00ab9000(0x4dc);
      return uVar1;
    case 10: ;
      uVar1 = F_00ab9000(0x4db);
      return uVar1;
    case 0xb: ;
      uVar1 = F_00ab9000(0x4da);
      return uVar1;
    case 0x10: ;
      uVar1 = F_00ab9000(0x4e3);
      return uVar1;
    }
  }
  uVar1 = F_00ae2be0(this GEN_EDX_ARG,(char)param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ae2e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae2e60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xae2e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = F_00ae1d90(param_1 GEN_EDX_FWD,param_2,param_3);
  uVar3 = 0;
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x18))) = param_5;
    *((undefined1 *)GEN_TOP((uVar1 + 0x17))) = param_4;
    *((undefined1 *)GEN_TOP((uVar1 + 0x16))) = 0x10;
    iVar4 = 0;
    piVar2 = ((int *)GEN_TOP(((int)param_1 + 4)));
    do {
      if (*piVar2 == -0x20000000) break;
      if (*((char *)GEN_TOP(((int)piVar2 + 0x16))) != '\x10') {
        return (uint)piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar4 < 0x40);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar3 = 0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar5 = 0x20;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
      piVar2 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar5)));
      uVar3 = 0;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *((undefined1 *)GEN_TOP(((int)param_1 + 0xa10))) = 1;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
        }
        *((undefined4 *)GEN_TOP(((int)param_1 + 0xa08))) = 0;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Object::EventObject::vf37 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae2f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_00a61a70((undefined *)this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    if ((this[0x18c] == (undefined1)0x0) && (*(undefined * PTR32 *)(this + 0xf0) != ((undefined *)GEN_TOP(0x0)))) {
      bVar2 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_ARG);
      if (bVar2 != 0) {
        uVar1 = *(ushort *)(this + 0x18a);
        this[0x18c] = (undefined1)0x1;
        *(ushort *)(this + 0x18a) = ~uVar1;
        F_00ae2030(this GEN_EDX_ARG,(uint)uVar1);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\x01') &&
     ((*(int *)(this + 0x180) == 0 || (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x16))) != '\x04')))) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Object::EventObject::vf51 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae2f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae2f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = *(uint * PTR32 *)(this + 0x184);
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    return 0;
  }
  if (*(ushort *)(this + 0x188) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x78);
  }
  uVar2 = F_00a1d100((uint)*(ushort *)(this + 0x188),uVar3,&REFG(float, 0x1302df0),
                       (*puVar1 & 0xffffff) + (int)puVar1,((char *)REFP(0x10eb788)),0,
                       (uint)*(ushort *)(this + 0x88),6,0);
  return uVar2;
}

/* ref: FUN_00ae2fd0 */
GEN_OWN GEN_FRAME unsigned int F_00ae2fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xae2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (((*((int *)GEN_TOP((param_1 + uVar2 * 8))) != -0x20000000) ||
          (*((int *)GEN_TOP((param_1 + 4 + uVar2 * 8))) != 0)) &&
         ((0x157 < uVar2 ||
          (((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)] == 0 ||
           (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_ARG,(&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]), (char)uVar1 == '\0'
           )))))) {
        *((undefined4 *)GEN_TOP((param_1 + uVar2 * 8))) = 0xe0000000;
        *((undefined4 *)GEN_TOP((param_1 + 4 + uVar2 * 8))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

/* ref: FUN_00ae3030 */
GEN_OWN GEN_FRAME byte F_00ae3030(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xae3030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  bVar1 = true;
  if (param_3 != 0) {
    iVar5 = param_1 - (int)param_2;
    uVar3 = 0;
    puVar4 = param_2;
    do {
      *puVar4 = 0xe0000000;
      puVar4[1] = 0;
      if ((((*((int *)GEN_TOP((iVar5 + (int)puVar4))) != -0x20000000) ||
           (*((int *)GEN_TOP((iVar5 + 4 + (int)puVar4))) != 0)) && (uVar3 < 0x158)) &&
         (((&REFG(undefined4, 0x14a31f0))[(int)(uVar3)] != 0 &&
          (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 4))))(param_4 GEN_EDX_ARG,(&REFG(undefined4, 0x14a31f0))[(int)(uVar3)]), (char)uVar2 != '\0')
          ))) {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar5 + 4 + (int)puVar4)));
        bVar1 = false;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar3 < param_3);
  }
  return !bVar1;
}

/* ref: Client::Game::Object::AreaObject::vf9 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae30c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a61980((undefined *)this GEN_EDX_FWD,param_1,param_2);
  if (*(int *)(this + 0x180) != 0) {
    F_009bc5d0(*(int *)(this + 0x180) GEN_EDX_ARG,*(int *)(this + 0x11c) == 0);
  }
  return 1;
}

/* ref: Client::Game::Object::AreaObject::vf10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae3100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a619f0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  if (*(int *)(this + 0x180) != 0) {
    F_009bc5d0(*(int *)(this + 0x180) GEN_EDX_ARG,*(int *)(this + 0x11c) == 0);
  }
  return 1;
}

/* ref: FUN_00ae3140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae3140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 8)));
  do {
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar2 + *(int *)this)));
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        piVar1 = ((int *)GEN_TOP(0x0));
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 8))) = piVar1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_FWD,uVar2 + 200);
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar2 * 4 + 8))) + 0x8a))) = 7;
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + uVar2 * 4 + 8))));
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00ae3210 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae3210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae3210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00ae2520(this GEN_EDX_FWD);
  uVar1 = F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::CreateGatheringPointObject */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xae3230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = param_4;
  if (param_4 == 0xffffffff) {
    uVar1 = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 8)));
    while (*piVar3 != 0) {
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xb0))))(piVar3 GEN_EDX_FWD);
  }
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar1 + *(int *)this)));
  piVar3 = ((int *)GEN_TOP(0x0));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb90c));
    piVar2[0x61] = 0;
    piVar2[0x60] = (int)(*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
    piVar2[0x62] = 0;
    piVar2[99] = 0;
    piVar2[100] = (int)piVar2;
    piVar2[0x66] = 0;
    piVar2[0x67] = 0;
    piVar2[0x68] = 0;
    piVar2[0x69] = (int)piVar2;
    piVar2[0x65] = (int)(*(undefined * PTR32 (*)[12])REFP(0x10eb7e4));
    piVar2[0x6a] = (int)(piVar2 + 0x60);
    piVar3 = piVar2;
  }
  *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8))) = piVar3;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xac))))(piVar3 GEN_EDX_ARG,uVar1 + 0xf4);
  piVar3[0x20] = param_1;
  *((undefined1 *)GEN_TOP(((int)piVar3 + 0x8a))) = 6;
  F_00a5f430(piVar3 GEN_EDX_ARG,param_3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x80))))(piVar3 GEN_EDX_ARG);
  F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar3);
  return uVar1;
}

/* ref: FUN_00ae3330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xae3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_5;
  if (param_5 == 0xffffffff) {
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 8)));
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb0))))(piVar2 GEN_EDX_FWD);
  }
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar1 + *(int *)this)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8))) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,uVar1 + 0xf4);
  F_00ae1e60(piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar2);
  return uVar1;
}

/* ref: FUN_00ae33e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ae33e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae33e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xa08))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xa10))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  iVar3 = 0x40;
  do {
    *puVar1 = 0xe0000000;
    puVar1 = puVar1 + 10;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0xa04))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa14))) = 0;
  uVar2 = F_00ae2850(this GEN_EDX_FWD,0,0);
  return uVar2;
}

/* ref: Client::Game::Object::TreasureManager::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xae3430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  uint uVar2;
  
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 2;
    (*(undefined1 *)(gen_frame + 0x4)) = 1;
    F_00596cd0(param_1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_00533b90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar2 = F_00ae19a0(uVar2);
    if (uVar2 != 0) {
      F_00ae2b40(*((undefined4 *)GEN_TOP((uVar2 + 0x74))));
    }
  }
  else {
    if (iVar1 != 1) {
      (*(undefined4 *)(gen_frame + 0x10)) = 2;
      (*(undefined1 *)(gen_frame + 0x14)) = 0;
      F_00596cd0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      return (uint)param_1;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    (*(undefined1 *)(gen_frame + 0xc)) = 1;
    F_00596cd0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00547460(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,0);
  }
  F_00ae2850(this GEN_EDX_ARG,0,0);
  return (uint)param_1;
}

/* ref: FUN_00ae3500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae3500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00ae1d90(this GEN_EDX_FWD,*param_1,(uint)*(byte *)(param_1 + 1));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x10eb784);
  if (uVar2 != 0) {
    *((undefined1 *)GEN_TOP((uVar2 + 0x19))) = 1;
    *((undefined4 *)GEN_TOP((uVar2 + 0x24))) = uVar1;
  }
  uVar2 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && (param_1[2] == *((int *)GEN_TOP((REFG(undefined4, 0x1379694) + 0x74))))) {
    uVar2 = F_0043f8b0(0xf4242);
  }
  return uVar2;
}

/* ref: FUN_00ae3550 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ae3550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined2 * param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xae3550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined2 * param_5 = (undefined2 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  int iVar4;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  if (param_2 == -0x20000000) {
    bVar2 = 0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(F_00ae1d90(param_1 GEN_EDX_FWD,param_2,param_3)));
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(((int)param_1 + 4)));
      iVar4 = 0;
      do {
        if (*piVar3 == -0x20000000) {
          if (-1 < iVar4) goto LAB_00ae3625;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 10;
      } while (iVar4 < 0x40);
      if (*((char *)GEN_TOP(((int)param_1 + 0x1b))) == '\0') {
        this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar1 = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
        (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
        (*(undefined4 *)(gen_frame + 0x0)) = 0x1b5;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
        (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
        (*(undefined1 *)(gen_frame + 0x20)) = 3;
        F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      }
      F_00ae2c80(param_1 GEN_EDX_ARG,0);
      iVar4 = 0x3f;
LAB_00ae3625: ;
      piVar3 = ((int *)GEN_TOP(((int)param_1 + iVar4 * 0x28 + 4)));
      *(undefined2 *)(piVar3 + 6) = 0;
      piVar3[9] = 0;
      F_00ab9000(0x4e6);
    }
    *piVar3 = param_2;
    piVar3[1] = param_3;
    piVar3[2] = param_4;
    *(undefined2 *)(piVar3 + 3) = *param_5;
    *((undefined2 *)GEN_TOP(((int)piVar3 + 0xe))) = param_5[1];
    *(undefined2 *)(piVar3 + 4) = param_5[2];
    *((undefined2 *)GEN_TOP(((int)piVar3 + 0x12))) = param_5[3];
    *(undefined2 *)(piVar3 + 5) = param_5[4];
    piVar3[7] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar3 + 6) = param_10;
    *((undefined1 *)GEN_TOP(((int)piVar3 + 0x16))) = param_6;
    *((undefined1 *)GEN_TOP(((int)piVar3 + 0x17))) = param_7;
    piVar3[8] = (int)gen_fl2bits(param_9);
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_00ae36d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae36d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae36d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  iVar2 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 4)));
  do {
    if (*piVar3 == -0x20000000) {
      return 1;
    }
    if (*piVar3 == param_1) {
      bVar1 = F_00ae2c80(this GEN_EDX_FWD,iVar2);
      if (bVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 - 1;
      piVar3 = piVar3 - 10;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 10;
  } while (iVar2 < 0x40);
  return 1;
}

/* ref: FUN_00ae3730 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae3730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  undefined4 * puVar4;
  char * pcVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0xec))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1a8)));
    in_ecx = piVar1[1];
    if (in_ecx != 0) {
      pcVar5 = "bgcommon/world/common/vfx_for_live/eff/b0046_sa_p_y.avfx";
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
      switch((unsigned int)(uintptr_t)(uVar3 & 0xff)) {
      case 0: ;
        bVar2 = F_006bde60(in_ecx GEN_EDX_ARG);
        if (bVar2 == 0) {
          pcVar5 = "bgcommon/world/common/vfx_for_live/eff/b0046_sa_p_y.avfx";
        }
        else {
          pcVar5 = ((char *)REFP(0x10eaed4));
        }
        break;
      case 1: ;
        bVar2 = F_006bde60(in_ecx GEN_EDX_ARG);
        if (bVar2 == 0) {
          pcVar5 = ((char *)REFP(0x10eaf88));
        }
        else {
          pcVar5 = ((char *)REFP(0x10eaf4c));
        }
        break;
      case 2: ;
        bVar2 = F_006bde60(in_ecx GEN_EDX_ARG);
        if (bVar2 == 0) {
          pcVar5 = ((char *)REFP(0x10eb000));
        }
        else {
          pcVar5 = ((char *)REFP(0x10eafc4));
        }
        break;
      case 3: ;
        bVar2 = F_006bde60(in_ecx GEN_EDX_ARG);
        pcVar5 = ((char *)REFP(0x10eb03c));
        if (bVar2 == 0) {
          pcVar5 = ((char *)REFP(0x10eb078));
        }
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_ARG);
      F_00a5f8c0(this GEN_EDX_ARG,uVar3);
      *((undefined1 *)GEN_TOP(((int)this + 0x8a))) = 6;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,0x2d0,0x10)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        this_01 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_01 = ((undefined *)GEN_TOP(F_00698e40(this_00 GEN_EDX_ARG)));
      }
      F_00699000(this_01 GEN_EDX_ARG);
      F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,this_01);
      F_00690620((undefined *)this_01 GEN_EDX_ARG);
      F_0068fce0(this_01 GEN_EDX_ARG,pcVar5);
      puVar4 = ((undefined4 *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
      *(undefined4 *)(this_01 + 0x30) = *puVar4;
      *(undefined4 *)(this_01 + 0x34) = puVar4[1];
      *(undefined4 *)(this_01 + 0x38) = puVar4[2];
      *(uint *)(this_01 + 0x24) = *(uint *)(this_01 + 0x24) | 2;
      F_0068ffe0(this_01 GEN_EDX_ARG,(float)(float10)0,(float)(float10)0,*(float *)&REFG(undefined, 0x10eae90),
                   *(float *)&REFG(undefined, 0x10ebb98));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,this_01);
      this_01[100] = (undefined1)((byte)this_01[100] & 0xfe);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ae38b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae38b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 4) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      iVar1 = *(int *)(this + 0x10);
      *((undefined4 *)GEN_TOP((iVar1 + 0x198))) = *(undefined4 *)(this + 4);
      *((undefined4 *)GEN_TOP((iVar1 + 0x19c))) = *(undefined4 *)(this + 8);
      *((undefined4 *)GEN_TOP((iVar1 + 0x1a0))) = *(undefined4 *)(this + 0xc);
      *((int *)GEN_TOP((*(int *)(this + 0x10) + 0x1a8))) = iVar1 + 0x194;
      F_00ae3730(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: FUN_00ae3900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xae3900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (param_4 == 0xffffffff) {
    uVar2 = 0;
    piVar1 = ((int *)GEN_TOP(((int)this + 8)));
    while (*piVar1 != 0) {
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
      if (0x27 < (int)uVar2) {
        return 0xffffffff;
      }
    }
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_FWD);
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar2 + *(int *)this)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar1 = (int)(*(undefined * PTR32 (*)[54])REFP(0x10eb9e4));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 8))) = piVar1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,uVar2 + 0xf4);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + uVar2 * 4 + 8)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG,uVar2 + 0xf4);
  F_00ae14b0(piVar1 GEN_EDX_ARG,param_1,param_2,param_3);
  F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
  return uVar2;
}

/* ref: FUN_00ae39b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae39b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1;
  if (param_1 == 0xffffffff) {
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 8)));
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb0))))(piVar2 GEN_EDX_FWD);
  }
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar1 + *(int *)this)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10ebac4));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 8))) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,uVar1 + 0xf4);
  F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar2);
  return uVar1;
}

/* ref: FUN_00ae3a40 */
GEN_OWN GEN_FRAME uint F_00ae3a40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xae3a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  undefined * this;
  ulonglong uVar2;
  int * PTR32 * this_00;
  
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
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x0));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00492c50(this_00 GEN_EDX_ARG);
    uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    return (uint)uVar2;
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
  F_0046aa70(this GEN_EDX_ARG,param_1,this_00);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00ae3af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae3af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00ae19a0(*param_1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00ae17a0(this_00 GEN_EDX_ARG,param_1);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x17))) == '\0') {
    F_00ae3a40(0x4de);
    if (*((char *)GEN_TOP(((int)param_1 + 0x17))) == '\0') {
      F_00ae36d0(this GEN_EDX_ARG,*param_1);
      goto LAB_00ae3b95;
    }
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x4d,0,0);
  if (*((char *)GEN_TOP(((int)param_1 + 0x16))) != '\x06') {
    F_00ae3550(this GEN_EDX_ARG,*param_1,(uint)*(byte *)(param_1 + 5),param_1[1],param_1 + 7,
                 *((undefined1 *)GEN_TOP(((int)param_1 + 0x15))),*((char *)GEN_TOP(((int)param_1 + 0x16))),GEN_ARGF(gen_bits2f(param_1[2])),GEN_ARGF(gen_bits2f(param_1[4])),*((undefined1 *)GEN_TOP(((int)param_1 + 0x1a))))
    ;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x19))) == '\x01') {
    uVar1 = F_00ae2850(this GEN_EDX_ARG,2,0);
    return uVar1;
  }
LAB_00ae3b95: ;
  uVar1 = F_00ae2850(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_00ae3bb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ae3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae3bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar8 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar8 + 0x54))) = *((int *)GEN_TOP(((int)pvVar8 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar8 + 0x54))) < 1) {
        F_0042c880(pvVar8 GEN_EDX_ARG);
        F_00406ad0(pvVar8);
      }
    }
    F_00ab3200(0x18e78,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x18)));
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = 1;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 4;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar8 = this;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
    uVar3 = F_00866a60(uVar4 GEN_EDX_ARG,uVar3,uVar6,uVar7,pvVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                         uVar15,uVar16,uVar17,uVar18,uVar19);
    *((uint *)GEN_TOP(((int)this + 0xa04))) = uVar3;
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar3 = (uint)uVar5;
  }
  return uVar3;
}

/* ref: FUN_00ae3d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xae3d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  undefined4 uVar10;
  
  bVar2 = false;
  iVar7 = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 4)));
  do {
    if (*piVar5 == -0x20000000) break;
    uVar3 = F_00ae19a0(*piVar5);
    if (uVar3 == 0) {
      fVar8 = GEN_X87(((float10)GEN_TOD(gen_bits2f(piVar5[7]))) - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))));
    }
    else {
      fVar8 = (float10)*((float *)GEN_TOP((uVar3 + 0x184)));
    }
    piVar5[7] = (int)gen_fl2bits((float)fVar8);
    if ((gen_bits2f(piVar5[7]) <= 0.0) &&
       (piVar5[7] = 0, fVar1 = *(float *)&REFG(undefined, 0x10eb784), *((char *)GEN_TOP(((int)piVar5 + 0x19))) == '\0')) {
      *((undefined1 *)GEN_TOP(((int)piVar5 + 0x19))) = 1;
      piVar5[9] = (int)gen_fl2bits(fVar1);
    }
    if (*((char *)GEN_TOP(((int)piVar5 + 0x19))) == '\x01') {
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar5[9]))) - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      piVar5[9] = (int)gen_fl2bits(fVar1);
      if ((float10)fVar1 <= (float10)0) {
        F_00ae2c80(this GEN_EDX_ARG,iVar7);
        iVar7 = iVar7 - 1;
        bVar2 = true;
        piVar5 = piVar5 - 10;
      }
    }
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 10;
  } while (iVar7 < 0x40);
  if (bVar2) {
    F_00ae2850(this GEN_EDX_ARG,1,0);
  }
  if (*((int *)GEN_TOP(((int)this + 0xa08))) != 3) goto LAB_00ae3e34;
  uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  uVar3 = F_00ae19a0(uVar3);
  if (uVar3 != 0) {
    if (REFG(int, 0x1379694) != 0) {
      dVar9 = F_00a600a0(REFG(int, 0x1379694),uVar3);
      fVar1 = (float)dVar9;
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x10eb784))) &&
          (!(fVar1 < *(float *)&REFG(undefined, 0x10eb784)) && fVar1 != *(float *)&REFG(undefined, 0x10eb784)))
      goto LAB_00ae3e29;
    }
    uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if ((uVar3 != 0xe0000000) && (REFG(char, 0x1375c51) == '\0')) goto LAB_00ae3e34;
  }
LAB_00ae3e29: ;
  F_00ae2850(this GEN_EDX_ARG,1,0);
LAB_00ae3e34: ;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xa08))) - 1;
  if (uVar3 == 0) {
    iVar7 = 0;
    piVar5 = ((int *)GEN_TOP(((int)this + 4)));
    do {
      if (*piVar5 == -0x20000000) break;
      uVar4 = F_00ab24a0(piVar5[2]);
      uVar3 = 0;
      if (uVar4 == 0) goto LAB_00ae3e6e;
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 10;
    } while (iVar7 < 0x40);
    uVar3 = F_00ae2850(this GEN_EDX_ARG,2,0);
  }
LAB_00ae3e6e: ;
  if (*((char *)GEN_TOP(((int)this + 0xa10))) == '\x01') {
    *((undefined1 *)GEN_TOP(((int)this + 0xa10))) = 0;
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      uVar10 = 0x20;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
      piVar6 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this + 0xa04))) != 0) {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x1c))))(piVar5 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x54))))(piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xa04))),0);
        *((undefined4 *)GEN_TOP(((int)this + 0xa04))) = 0;
      }
    }
    if (*((int *)GEN_TOP(((int)this + 0xa08))) == 2) {
      uVar3 = F_00ae2930(this GEN_EDX_ARG);
    }
    else {
      uVar3 = *((int *)GEN_TOP(((int)this + 0xa08))) - 3;
      if (uVar3 == 0) {
        uVar3 = F_00ae3bb0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xa0c))));
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00ae3f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae3f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae3f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte * pbVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  
  if (0x2b < (int)param_1) {
    return 0xffffffff;
  }
  uVar3 = param_1;
  if (param_1 == 0xffffffff) {
    uVar3 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 8)));
    while (*piVar2 != 0) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar3) {
        return 0xffffffff;
      }
    }
    if (uVar3 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * uVar3 + *(int *)this)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar2 = ((int *)GEN_TOP(F_00a668f0(this_00 GEN_EDX_FWD)));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + uVar3 * 4 + 8))) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,uVar3 + 200);
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar3 * 4 + 8))) + 0x8a))) = 3;
  if (0x27 < (int)uVar3) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar3 * 4 + 8))) + 0x2dd4)));
    *pbVar1 = *pbVar1 | 4;
  }
  F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + uVar3 * 4 + 8))));
  return uVar3;
}

/* ref: FUN_00ae4000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1e1))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_00ae4060(void)
{
  GEN_ENTER(0xae4060u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf2 */
GEN_OWN GEN_NOFRAME uint F_00ae4070(void)
{
  GEN_ENTER(0xae4070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf4 */
GEN_OWN GEN_NOFRAME byte F_00ae4080(void)
{
  GEN_ENTER(0xae4080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf5 */
GEN_OWN GEN_NOFRAME byte F_00ae4090(void)
{
  GEN_ENTER(0xae4090u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf6 */
GEN_OWN GEN_NOFRAME byte F_00ae40a0(void)
{
  GEN_ENTER(0xae40a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf7 */
GEN_OWN GEN_NOFRAME byte F_00ae40b0(void)
{
  GEN_ENTER(0xae40b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf8 */
GEN_OWN GEN_NOFRAME byte F_00ae40c0(void)
{
  GEN_ENTER(0xae40c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf9 */
GEN_OWN GEN_NOFRAME uint F_00ae40d0(void)
{
  GEN_ENTER(0xae40d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf10 */
GEN_OWN GEN_NOFRAME uint F_00ae40e0(void)
{
  GEN_ENTER(0xae40e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf11 */
GEN_OWN GEN_NOFRAME byte F_00ae40f0(void)
{
  GEN_ENTER(0xae40f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ae4100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae4100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a8))) = param_1;
  return param_1;
}

/* ref: FUN_00ae4130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4130(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10eb7e4));
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf11 */
GEN_OWN GEN_NOFRAME byte F_00ae4160(void)
{
  GEN_ENTER(0xae4160u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4170(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae41a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae41a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ae4230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::TreasureManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ae42a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae42a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xae42a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0x1b4;
  param_1[1] = 0x18;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = param_3;
  return (uint)param_1;
}

/* ref: FUN_00ae42d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae42d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xae42d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[6] = param_2;
  *param_1 = 0x1b5;
  param_1[1] = 0x20;
  param_1[7] = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00ae4300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0x1b6;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::Distance2DFilter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Object::EventObject::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Object::GatheringPointObject::vf32 */
GEN_OWN GEN_NOFRAME unsigned int F_00ae43a0(void)
{
  GEN_ENTER(0xae43a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GatheringPointObject::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae43b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae43b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x65] = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  param_1[0x60] = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  *param_1 = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Object::Treasure::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4410(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Object::AreaObject::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4460(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ae44a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae44a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae44a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00ae44d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae44d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xae44d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00ae4500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae4500(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xae4500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return;
}

/* ref: FUN_00ae4530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae4530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00ae4560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xae4560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c9f0c0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ae45a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae45a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae45a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14c))) = param_2;
  return param_2;
}

/* ref: FUN_00ae45b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae45b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae45b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x150))) = param_2;
  return param_2;
}

/* ref: FUN_00ae45c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae45c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae45c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x151))) = param_2;
  return param_2;
}

/* ref: FUN_00ae45d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xae45d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00c9f380(this GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00ae4600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x60))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x61))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x62))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae4690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x81))) = param_2;
  return param_2;
}

/* ref: FUN_00ae46b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ae46b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae46b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x82))) = param_2;
  return param_2;
}

/* ref: FUN_00ae46d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae46d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae46d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x84))) = param_2;
  return;
}

/* ref: FUN_00ae4700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x88))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4720 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00ae4720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xae4720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(ushort *)this = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00ae4830 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae4830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae4830u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return;
}

/* ref: FUN_00ae4860 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae4860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae4860u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return;
}

/* ref: FUN_00ae4890 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae4890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae4890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return;
}

/* ref: FUN_00ae48c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ae48c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xae48c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return;
}

/* ref: FUN_00ae48f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae48f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae48f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00ae4910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ae4910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xae4910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

