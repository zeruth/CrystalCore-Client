#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ec0110 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec0110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x290)));
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x298)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x10))))(this_00 GEN_EDX_FWD);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this_00 GEN_EDX_ARG);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: FUN_00ec0180 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec0180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4f0)));
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x4f8)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x10))))(this_00 GEN_EDX_FWD);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this_00 GEN_EDX_ARG);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec01f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec01f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ebfe20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec02b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec02b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec02b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec02e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec02e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0340(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ebfee0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec03a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec03a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec03a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec03d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec03d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec03d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ebff60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0430(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ebffd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0460(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec04c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec04c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_M::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec04f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec04f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0520(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_O::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0580(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec05b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec05b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec05e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec05e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0610(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0640(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec06a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec06a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_P::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec06d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec06d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_BC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0700(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ec0110(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0730(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_CF::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0760(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ec0180(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0790(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec0790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec07c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec07c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xec07c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x115d618);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115cab0));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  F_00ebd750(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,param_1,(undefined1)param_2);
  return (uint)this;
}

/* ref: FUN_00ec0810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec0810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD);
  }
  bVar5 = F_00ebc060(this GEN_EDX_ARG,1);
  if (bVar5 == 0) {
    (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
    if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x10)) = uVar6;
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
    }
    if ((*(uint *)(gen_frame + 0x10)) == 0xffffffff) {
      uVar7 = 3;
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
      if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar3 = ((int *)GEN_TOP(piVar2[0xc])), *piVar3 < 1)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
      }
      else {
        *piVar3 = *piVar3 - 1;
        *((int *)GEN_TOP(piVar2[8])) = *((int *)GEN_TOP(piVar2[8])) + 1;
      }
      puVar1 = ((uint *)GEN_TOP(((int)this + 8)));
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + (uint)(0xfffffffe < uVar6);
    }
  }
  iVar4 = *((int *)GEN_TOP((*(int *)this + 4)));
  if (uVar7 != 0) {
    uVar7 = *((uint *)GEN_TOP(((int)this + iVar4 + 0xc))) | uVar7;
    if (*((int *)GEN_TOP(((int)this + iVar4 + 0x38))) == 0) {
      uVar7 = uVar7 | 4;
    }
    *((uint *)GEN_TOP(((int)this + iVar4 + 0xc))) = uVar7 & 0x17;
    uVar7 = *((uint *)GEN_TOP(((int)this + iVar4 + 0x10))) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00ec0950 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ec0950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xec0950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined1 * puVar1;
  undefined1 * puVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    puVar2 = ((undefined1 *)GEN_TOP(0x0));
    if ((param_1 != 0) &&
       (puVar2 = ((undefined1 *)GEN_TOP(F_004069f0(param_1))), puVar2 == ((undefined1 *)GEN_TOP(0x0)))) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    puVar1 = puVar2 + param_1;
    *(undefined1 * PTR32 *)this = puVar2;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar1;
    for (iVar3 = param_1; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar1;
  }
  return;
}

/* ref: FUN_00ec09d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec09d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec09d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x70))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  return (uint)this;
}

/* ref: FUN_00ec0a10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 4;
  uVar1 = F_00eba6b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,4,0);
  *((uint *)GEN_TOP(((int)this + 0x110))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  return (uint)this;
}

/* ref: FUN_00ec0a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 2;
  uVar1 = F_00eba750(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  return (uint)this;
}

/* ref: FUN_00ec0ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 7;
  uVar1 = F_00eba7f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,7,0);
  *((uint *)GEN_TOP(((int)this + 0x1a0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  return (uint)this;
}

/* ref: FUN_00ec0b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 3;
  uVar1 = F_00eba890(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,3,0);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  return (uint)this;
}

/* ref: FUN_00ec0b50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 9;
  uVar1 = F_00eba930(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,9,0);
  *((uint *)GEN_TOP(((int)this + 0x200))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  return (uint)this;
}

/* ref: FUN_00ec0ba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 10;
  uVar1 = F_00eba9d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,10,0);
  *((uint *)GEN_TOP(((int)this + 0x230))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  return (uint)this;
}

/* ref: FUN_00ec0bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 3;
  uVar1 = F_00ebaa70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,3,0);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  return (uint)this;
}

/* ref: FUN_00ec0c40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 8;
  uVar1 = F_00ebab10(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,8,0);
  *((uint *)GEN_TOP(((int)this + 0x1d0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  return (uint)this;
}

/* ref: FUN_00ec0c90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 6;
  uVar1 = F_00ebabb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,6,0);
  *((uint *)GEN_TOP(((int)this + 0x170))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  return (uint)this;
}

/* ref: FUN_00ec0ce0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 4;
  uVar1 = F_00ebac50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,4,0);
  *((uint *)GEN_TOP(((int)this + 0xd0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  return (uint)this;
}

/* ref: FUN_00ec0d30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x980))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x984))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x988))) = 0x31;
  uVar1 = F_00ebacf0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x31,0);
  *((uint *)GEN_TOP(((int)this + 0x980))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  return (uint)this;
}

/* ref: FUN_00ec0d80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x90))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  return (uint)this;
}

/* ref: FUN_00ec0dd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x350))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x354))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x358))) = 0x10;
  uVar1 = F_00ebae30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x10,0);
  *((uint *)GEN_TOP(((int)this + 0x350))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  return (uint)this;
}

/* ref: FUN_00ec0e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c8))) = 0x1d;
  uVar1 = F_00ebaed0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x1d,0);
  *((uint *)GEN_TOP(((int)this + 0x5c0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  return (uint)this;
}

/* ref: FUN_00ec0e70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x2510))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2514))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2518))) = 0xc4;
  uVar1 = F_00ebaf70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xc4,0);
  *((uint *)GEN_TOP(((int)this + 0x2510))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  return (uint)this;
}

/* ref: FUN_00ec0ec0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0xc;
  uVar1 = F_00ebb010(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xc,0);
  *((uint *)GEN_TOP(((int)this + 0x290))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  return (uint)this;
}

/* ref: FUN_00ec0f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x418))) = 0x14;
  uVar1 = F_00ebb0b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x14,0);
  *((uint *)GEN_TOP(((int)this + 0x410))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  return (uint)this;
}

/* ref: FUN_00ec0f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x3b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3b8))) = 0x12;
  uVar1 = F_00ebb150(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x12,0);
  *((uint *)GEN_TOP(((int)this + 0x3b0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  return (uint)this;
}

/* ref: FUN_00ec0fb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec0fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec0fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x2f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f8))) = 0xe;
  uVar1 = F_00ebb1f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xe,0);
  *((uint *)GEN_TOP(((int)this + 0x2f0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  return (uint)this;
}

/* ref: FUN_00ec1000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x470))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x474))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x478))) = 0x16;
  uVar1 = F_00ebb290(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x16,0);
  *((uint *)GEN_TOP(((int)this + 0x470))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  return (uint)this;
}

/* ref: FUN_00ec1050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x7a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a8))) = 0x27;
  uVar1 = F_00ebb330(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x27,0);
  *((uint *)GEN_TOP(((int)this + 0x7a0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  return (uint)this;
}

/* ref: FUN_00ec10a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec10a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec10a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x4a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4a8))) = 0x17;
  uVar1 = F_00ebb3d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x17,0);
  *((uint *)GEN_TOP(((int)this + 0x4a0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  return (uint)this;
}

/* ref: FUN_00ec10f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec10f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec10f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xaa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xaa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xaa8))) = 0x37;
  uVar1 = F_00ebb470(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x37,0);
  *((uint *)GEN_TOP(((int)this + 0xaa0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  return (uint)this;
}

/* ref: FUN_00ec1140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x890))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x894))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x898))) = 0x2c;
  uVar1 = F_00ebb510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x2c,0);
  *((uint *)GEN_TOP(((int)this + 0x890))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  return (uint)this;
}

/* ref: FUN_00ec1190 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xbc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc8))) = 0x3d;
  uVar1 = F_00ebb5b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x3d,0);
  *((uint *)GEN_TOP(((int)this + 0xbc0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  return (uint)this;
}

/* ref: FUN_00ec11e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec11e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec11e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 800))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x324))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x328))) = 0xf;
  uVar1 = F_00ebb650(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xf,0);
  *((uint *)GEN_TOP(((int)this + 800))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  return (uint)this;
}

/* ref: FUN_00ec1230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0x12;
  uVar1 = F_00ebb6f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x12,0);
  *((uint *)GEN_TOP(((int)this + 0x290))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec1280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x9b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b8))) = 0x32;
  uVar1 = F_00ebb790(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x32,0);
  *((uint *)GEN_TOP(((int)this + 0x9b0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  return (uint)this;
}

/* ref: FUN_00ec12d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec12d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec12d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x4f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4f8))) = 0x25;
  uVar1 = F_00ebb830(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x25,0);
  *((uint *)GEN_TOP(((int)this + 0x4f0))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  return (uint)this;
}

/* ref: FUN_00ec1320 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec1320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec1320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1970))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1974))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1978))) = 0x86;
  uVar1 = F_00ebb8d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x86,0);
  *((uint *)GEN_TOP(((int)this + 0x1970))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  return (uint)this;
}

/* ref: FUN_00ec1370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec1370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xec1370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  F_00ebe820(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ec13a0 */
GEN_LIB_GS GEN_FRAME uint F_00ec13a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char * PTR32 * PTR32 * PTR32 * PTR32 * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(undefined * param_10, unsigned int gen_a9), GEN_P(gen_size32 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12), GEN_P(undefined4 param_14, unsigned int gen_a13))
{
  GEN_ENTER(0xec13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char * PTR32 * PTR32 * PTR32 * PTR32 * param_7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(undefined * param_10 = (undefined *)(uintptr_t)gen_a9;)
  GEN_PIN(gen_size32 param_11 = (gen_size32)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a13;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  int * piVar6;
  uint uVar7;
  undefined * plVar8;
  undefined * pvVar9;
  gen_size32 sVar10;
  uint uVar11;
  undefined4 * puVar12;
  undefined * puVar13;
  int iVar14;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar15;
  gen_size32 _MaxCount;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  (*(uint *)(gen_frame + 0x4)) = param_2;
  (*(int *)(gen_frame + 0x24)) = param_8;
  (*(int *)(gen_frame + 0x8)) = param_5;
  piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(int *)(gen_frame + 0xc)) = param_9;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_10;
  (*(gen_size32 *)(gen_frame + 0x3c)) = param_11;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(F_00ebe280(&(*(int * PTR32 *)(gen_frame + 0x10)))));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
  iVar14 = piVar2[1];
  if ((iVar14 != 0) && (iVar14 != -1)) {
    piVar2[1] = iVar14 - 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP((~-(uint)(piVar2[1] != 0) & (uint)piVar2)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x30)))))((*(undefined4 * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x10));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) = uVar7 & 0xffff;
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppcVar5 & 0xffffff00)));
  ((char *)(gen_frame + 0x2c))[0] = '0';
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x0));
  F_010512d7((wchar_t *)&(*(undefined4 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x2c)),1,(int *)&(*(undefined4 * PTR32 *)(gen_frame + 0x30)),((undefined *)GEN_TOP((param_1 + 8))));
  cVar1 = *(char *)param_7;
  if ((cVar1 == '+') || ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x0)), cVar1 == '-')) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x1));
  }
  plVar8 = F_00c527f9();
  _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c));
  (*(char *)(gen_frame + 0x28)) = *(*(char * PTR32 *)((char *)(plVar8)));
  (*(undefined2 *)(gen_frame + 0x29)) = 0x65;
  pvVar9 = F_00c48f80(param_7,0x65,(*(gen_size32 *)(gen_frame + 0x3c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar9;
  pvVar9 = F_00c48f80(param_7,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar9;
  if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar9;
  }
  pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
  if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
    pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
  }
  pppppcVar16 = param_7;
  if (*(char *)pppppcVar15 != '\x7f') {
    pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
    if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
      pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
    }
    if ('\0' < *(char *)pppppcVar15) {
      F_00e69490(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,param_7,_MaxCount);
      pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x20));
      if ((*(undefined * PTR32 *)(gen_frame + 0x20)) == ((undefined *)GEN_TOP(0x0))) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
      }
      else {
        if ((*(undefined * PTR32 *)(gen_frame + 0x38)) == ((undefined *)GEN_TOP(0x0))) {
          F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x24)),0x30);
          (*(int *)(gen_frame + 0x24)) = 0;
        }
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(int)pvVar9 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x38)) == ((undefined *)GEN_TOP(0x0))) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x24)),0x30);
      }
      else {
        iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)param_7;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,iVar14 + 1,(*(int *)(gen_frame + 0xc)),0x30);
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,iVar14,(*(int *)(gen_frame + 0x24)),0x30);
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      (*(int *)(gen_frame + 0x24)) = 0;
      pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
      if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
        pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
      pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      sVar10 = F_00c525d0((char *)pppppcVar16,&(*(char *)(gen_frame + 0x28)));
      cVar1 = *(char *)pppppcVar15;
      _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
      while ((((*(gen_size32 *)(gen_frame + 0x6c)) = _MaxCount, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar10 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x30))))) {
        sVar10 = sVar10 - (int)cVar1;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,sVar10,1,0);
        if ('\0' < *((char *)GEN_TOP(((int)pppppcVar15 + 1)))) {
          pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar15 + 1)));
        }
        _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
        cVar1 = *(char *)pppppcVar15;
      }
      pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
      (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    }
  }
  uVar7 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20)));
  uVar11 = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xc)) + _MaxCount;
  if (((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 0) || ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 1 && (uVar7 == 0)))) ||
     (uVar7 <= uVar11)) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(0x0));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP((uVar7 - uVar11)));
  }
  uVar7 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) & 0x1c0;
  if (uVar7 != 0x40) {
    if (uVar7 == 0x100) {
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != ((undefined4 *)GEN_TOP(0x0))) {
        puVar12 = ((undefined4 *)GEN_TOP(F_00ebb950(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,1)));
        param_3 = *puVar12;
        param_4 = puVar12[1];
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar16 + 1)));
        _MaxCount = _MaxCount - 1;
        (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
      }
      puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)))));
      param_3 = *puVar12;
      param_4 = puVar12[1];
    }
    else {
      puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)))));
      param_3 = *puVar12;
      param_4 = puVar12[1];
    }
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(0x0));
  }
  pvVar9 = F_00c48f80(pppppcVar16,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  if (pvVar9 != ((undefined *)GEN_TOP(0x0))) {
    iVar14 = ((int)pvVar9 - (int)pppppcVar16) + 1;
    puVar12 = ((undefined4 *)GEN_TOP(F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,
                           (int)pvVar9 - (int)pppppcVar16,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))))));
    puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x24)))));
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),uVar3,uVar4,uVar7 & 0xffff,1)));
    puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0xc)))));
    param_3 = *puVar12;
    pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar16 + iVar14)));
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar14;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar12[1];
  }
  pvVar9 = F_00c48f80(pppppcVar16,0x65,_MaxCount);
  if (pvVar9 != ((undefined *)GEN_TOP(0x0))) {
    iVar14 = ((int)pvVar9 - (int)pppppcVar16) + 1;
    puVar12 = ((undefined4 *)GEN_TOP(F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,
                           (int)pvVar9 - (int)pppppcVar16,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))))));
    puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x34)))));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
    puVar13 = &REFG(undefined, 0x115d624);
    if ((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) & 4) == 0) {
      puVar13 = &REFG(undefined, 0x115d620);
    }
    puVar12 = ((undefined4 *)GEN_TOP(F_00ebb950(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],puVar13,1)));
    param_3 = *puVar12;
    pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar16 + iVar14)));
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar14;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar12[1];
  }
  puVar12 = ((undefined4 *)GEN_TOP(F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,_MaxCount,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))))));
  puVar12 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x34)))));
  uVar7 = (*(uint *)(gen_frame + 0x4));
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) = 0;
  F_00eba490(param_1,(*(uint *)(gen_frame + 0x4)),uVar3,uVar4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0]);
  }
  ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppcVar5 & 0xffffff00)));
  if (0xf < (*(uint *)(gen_frame + 0x54))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0]);
  }
  return uVar7;
}

/* ref: FUN_00ec1920 */
GEN_LIB_GS GEN_FRAME uint F_00ec1920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char * param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xec1920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char * param_7 = (char *)(uintptr_t)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar7;
  char * pcVar8;
  undefined4 * puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x8)) = param_5;
  piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(uint *)(gen_frame + 0x4)) = param_2;
  (*(uint *)(gen_frame + 0x28)) = param_8;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(F_00ebe280(&(*(int * PTR32 *)(gen_frame + 0x10)))));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,0);
  iVar11 = piVar2[1];
  if ((iVar11 != 0) && (iVar11 != -1)) {
    piVar2[1] = iVar11 - 1;
  }
  iVar11 = piVar2[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar11 != 0) & (uint)piVar2)));
  if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)));
  cVar1 = *param_7;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 1;
  }
  else if ((cVar1 == '0') && ((param_7[1] == 'x' || (param_7[1] == 'X')))) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 2;
  }
  else {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 0;
  }
  pppppcVar7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    pppppcVar7 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  if (*(char *)pppppcVar7 != '\x7f') {
    pppppcVar7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      pppppcVar7 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    }
    if ('\0' < *(char *)pppppcVar7) {
      if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
        (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
      }
      else {
        (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
      }
      cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      uVar10 = (*(uint *)(gen_frame + 0x28));
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < uVar10 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))))))) {
        uVar10 = uVar10 - (int)cVar1;
        iVar11 = ((*(uint *)(gen_frame + 0x28)) - uVar10) + 1;
        F_01051df1(param_7 + uVar10 + 1,iVar11,param_7 + uVar10,iVar11);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
        param_7[uVar10] = '\0';
        if ('\0' < *((char *)GEN_TOP(((int)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) + 1)))) {
          (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) + 1)));
        }
        cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
    }
  }
  uVar12 = (*(uint *)(gen_frame + 0x28));
  uVar10 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20)));
  if (((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 0) || ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 1 && (uVar10 == 0)))) ||
     (uVar10 <= (*(uint *)(gen_frame + 0x28)))) {
    iVar11 = 0;
  }
  else {
    iVar11 = uVar10 - (*(uint *)(gen_frame + 0x28));
  }
  uVar10 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) & 0x1c0;
  pcVar8 = param_7;
  if (uVar10 != 0x40) {
    if (uVar10 == 0x100) {
      puVar9 = ((undefined4 *)GEN_TOP(F_00ebb950((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x14)),param_3,param_4,param_7,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))))));
      pcVar8 = param_7 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      uVar12 = uVar12 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      puVar9 = ((undefined4 *)GEN_TOP(F_00eba490((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x20)),*puVar9,puVar9[1],param_6,iVar11)));
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    else {
      puVar9 = ((undefined4 *)GEN_TOP(F_00eba490((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x20)),param_3,param_4,param_6,iVar11)));
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    iVar11 = 0;
  }
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  uVar5 = (*(undefined4 *)(gen_frame + 0x1c));
  puVar9 = ((undefined4 *)GEN_TOP(F_00ebba20((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0xc)),param_3,param_4,pcVar8,uVar12,uVar10 & 0xffff)));
  uVar10 = (*(uint *)(gen_frame + 0x4));
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) = 0;
  F_00eba490(uVar5,(*(uint *)(gen_frame + 0x4)),uVar3,uVar4,param_6,iVar11);
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0]);
  }
  return uVar10;
}

/* ref: FUN_00ec1bc0 */
GEN_LIB_GS GEN_FRAME uint F_00ec1bc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xec1bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  byte * pbVar3;
  bool bVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * pvVar8;
  char * pcVar9;
  char * pcVar10;
  char * PTR32 * PTR32 * PTR32 * ppppcVar11;
  gen_size32 _MaxCount;
  int iVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar6 = ((int *)GEN_TOP(F_00ebe910(param_6)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x1c)) == 0) {
    (*(char *)(gen_frame + 0x9)) = '\0';
  }
  else {
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
    (*(char *)(gen_frame + 0x9)) = (char)uVar7;
  }
  (*(char * PTR32 *)(gen_frame + 0x4)) = param_2;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,param_4);
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar6 = ((int *)GEN_TOP(*param_3));
      if (piVar6 == ((int *)GEN_TOP(0x0))) {
LAB_00ec1c5a: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar6[8])) == 0) || (*((int *)GEN_TOP(piVar6[0xc])) < 1)) {
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
        }
        else {
          uVar7 = (uint)**((byte * PTR32 *)GEN_TOP(piVar6[8]));
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1c5a;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) == '+') {
      *param_2 = '+';
    }
    else {
      bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
      if (bVar5 != 0x2d) goto LAB_00ec1c87;
      *param_2 = '-';
    }
    (*(char * PTR32 *)(gen_frame + 0x4)) = param_2 + 1;
    F_00ebbb10(param_3 GEN_EDX_ARG);
  }
LAB_00ec1c87: ;
  uVar7 = param_5 & 0xe00;
  if (uVar7 == 0x400) {
    (*(uint *)(gen_frame + 0x0)) = 8;
  }
  else if (uVar7 == 0x800) {
    (*(uint *)(gen_frame + 0x0)) = 0x10;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = -(uint)(uVar7 != 0) & 10;
  }
  (*(byte *)(gen_frame + 0xb)) = 0;
  bVar4 = false;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,param_4);
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar6 = ((int *)GEN_TOP(*param_3));
      if (piVar6 == ((int *)GEN_TOP(0x0))) {
LAB_00ec1d08: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar6[8])) == 0) || (*((int *)GEN_TOP(piVar6[0xc])) < 1)) {
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
        }
        else {
          uVar7 = (uint)**((byte * PTR32 *)GEN_TOP(piVar6[8]));
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1d08;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) != '0') goto LAB_00ec1d6f;
    (*(byte *)(gen_frame + 0xb)) = 1;
    F_00ebbb10(param_3 GEN_EDX_ARG);
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,param_4);
    if (((bVar5 != 0) ||
        ((bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar5 != 0x78 &&
         (bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar5 != 0x58)))) ||
       (((*(uint *)(gen_frame + 0x0)) != 0 && ((*(uint *)(gen_frame + 0x0)) != 0x10)))) {
      if ((*(uint *)(gen_frame + 0x0)) == 0) {
        (*(uint *)(gen_frame + 0x0)) = 8;
        goto LAB_00ec1d78;
      }
      goto LAB_00ec1d73;
    }
    (*(uint *)(gen_frame + 0x0)) = 0x10;
    (*(byte *)(gen_frame + 0xb)) = 0;
    F_00ebbb10(param_3 GEN_EDX_ARG);
LAB_00ec1d78: ;
    _MaxCount = (-(uint)((*(uint *)(gen_frame + 0x0)) != 8) & 0xe) + 8;
  }
  else {
LAB_00ec1d6f: ;
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
LAB_00ec1d73: ;
      if ((*(uint *)(gen_frame + 0x0)) != 10) goto LAB_00ec1d78;
    }
    _MaxCount = 10;
  }
  (*(undefined1 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x28)) + 0)) = (*(byte *)(gen_frame + 0xb));
  (*(uint *)(gen_frame + 0x3c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x38)) = 1;
  (*(undefined1 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x28)) + 1)) = 0;
  (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x28)) + 0)) = (ushort)(*(byte *)(gen_frame + 0xb));
  iVar12 = 0;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,param_4);
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar6 = ((int *)GEN_TOP(*param_3));
        if (piVar6 == ((int *)GEN_TOP(0x0))) {
LAB_00ec1df4: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar6[8])) == 0) || (*((int *)GEN_TOP(piVar6[0xc])) < 1)) {
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
          }
          else {
            uVar7 = (uint)**((byte * PTR32 *)GEN_TOP(piVar6[8]));
          }
          if (uVar7 == 0xffffffff) goto LAB_00ec1df4;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
      *(*(char * PTR32 *)(gen_frame + 0x4)) = cVar1;
      pvVar8 = F_00c48f80(((char *)REFP(0x115d628)),(int)cVar1,_MaxCount);
      if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
          pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
        }
        if ((pcVar10[iVar12] == '\0') || ((*(char *)(gen_frame + 0x9)) == '\0')) break;
        if ((char)param_3[1] == '\0') {
          piVar6 = ((int *)GEN_TOP(*param_3));
          if (piVar6 == ((int *)GEN_TOP(0x0))) {
LAB_00ec1ebc: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar6[8])) == 0) || (*((int *)GEN_TOP(piVar6[0xc])) < 1)) {
              uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
            }
            else {
              uVar7 = (uint)**((byte * PTR32 *)GEN_TOP(piVar6[8]));
            }
            if (uVar7 == 0xffffffff) goto LAB_00ec1ebc;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar7;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*((char *)GEN_TOP(((int)param_3 + 5))) != (*(char *)(gen_frame + 0x9))) break;
        F_00a17030(&(*(char * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1,0);
        iVar12 = iVar12 + 1;
      }
      else {
        if (((bVar4) || (*(*(char * PTR32 *)(gen_frame + 0x4)) != '0')) && ((*(char * PTR32 *)(gen_frame + 0x4)) < param_2 + 0x1f)) {
          (*(char * PTR32 *)(gen_frame + 0x4)) = (*(char * PTR32 *)(gen_frame + 0x4)) + 1;
          bVar4 = true;
        }
        (*(byte *)(gen_frame + 0xb)) = 1;
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
          pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
        }
        if (pcVar10[iVar12] != '\x7f') {
          pcVar10 = (*(char * PTR32 *)(gen_frame + 0x28));
          if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
            pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
          }
          pcVar10[iVar12] = pcVar10[iVar12] + '\x01';
        }
      }
      piVar6 = ((int *)GEN_TOP(*param_3));
      if (piVar6 == ((int *)GEN_TOP(0x0))) {
LAB_00ec1f14: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar6[8])) == 0) || (piVar2 = ((int *)GEN_TOP(piVar6[0xc])), *piVar2 < 1)) {
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG);
        }
        else {
          *piVar2 = *piVar2 - 1;
          pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar6[8]));
          *((byte * PTR32 *)GEN_TOP(piVar6[8])) = pbVar3 + 1;
          uVar7 = (uint)*pbVar3;
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1f14;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,param_4);
    } while (bVar5 == 0);
    if (iVar12 != 0) {
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x28));
      if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
        pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
      }
      if (pcVar10[iVar12] < '\x01') {
        (*(byte *)(gen_frame + 0xb)) = 0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
    }
  }
  ppppcVar11 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    ppppcVar11 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  pcVar10 = param_2;
  if ((*(byte *)(gen_frame + 0xb)) != 0) {
    while ((iVar12 != 0 && (cVar1 = *(char *)ppppcVar11, cVar1 != '\x7f'))) {
      iVar12 = iVar12 - 1;
      if (iVar12 != 0) {
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
          pcVar9 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
        }
        if (cVar1 != pcVar9[iVar12]) goto LAB_00ec1fb0;
      }
      if (iVar12 == 0) {
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x3c)) < 0x10) {
          pcVar9 = (char *)&(*(char * PTR32 *)(gen_frame + 0x28));
        }
        if (cVar1 < *pcVar9) goto LAB_00ec1fb0;
      }
      if ('\0' < *((char *)GEN_TOP(((int)ppppcVar11 + 1)))) {
        ppppcVar11 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar11 + 1)));
      }
    }
    pcVar10 = (*(char * PTR32 *)(gen_frame + 0x4));
    if (!bVar4) {
      *(*(char * PTR32 *)(gen_frame + 0x4)) = '0';
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x4)) + 1;
    }
  }
LAB_00ec1fb0: ;
  *pcVar10 = '\0';
  if (0xf < (*(uint *)(gen_frame + 0x3c))) {
    F_00406ad0((*(char * PTR32 *)(gen_frame + 0x28)));
  }
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00ec1ff0 */
GEN_LIB_GS GEN_FRAME uint F_00ec1ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xec1ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_SUSPECT(0xec1ff0u, "_Var14");
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  char cVar1;
  int * piVar2;
  byte * pbVar3;
  code * pcVar4;
  undefined4 uVar5;
  char * PTR32 * PTR32 * pppcVar6;
  byte bVar7;
  int * piVar8;
  uint uVar9;
  undefined * this;
  char * PTR32 * PTR32 * PTR32 * ppppcVar10;
  char * PTR32 * PTR32 * PTR32 * ppppcVar11;
  undefined * plVar12;
  char * PTR32 * PTR32 * PTR32 * ppppcVar13;
  undefined4 _Var14;
  int iVar15;
  char * pcVar16;
  char * pcVar17;
  undefined4 * puVar18;
  int iVar19;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  (*(char * PTR32 *)(gen_frame + 0x8)) = param_2;
  piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_6;
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar8 = ((int *)GEN_TOP(F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0xc)))));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  iVar19 = piVar2[1];
  if ((iVar19 != 0) && (iVar19 != -1)) {
    piVar2[1] = iVar19 - 1;
  }
  iVar19 = piVar2[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  puVar18 = ((undefined4 *)GEN_TOP((~-(uint)(iVar19 != 0) & (uint)piVar2)));
  if (puVar18 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar18)))(puVar18 GEN_EDX_ARG,1);
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xc));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)));
  pcVar16 = (*(char * PTR32 *)(gen_frame + 0x8));
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x8));
  (*(char *)(gen_frame + 0x2a)) = '\0';
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar8 = ((int *)GEN_TOP(*param_3));
      if (piVar8 == ((int *)GEN_TOP(0x0))) {
LAB_00ec20e5: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar8[8])) == 0) || (*((int *)GEN_TOP(piVar8[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x18))))(piVar8 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar8[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec20e5;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) == '+') {
      *pcVar16 = '+';
    }
    else {
      bVar7 = F_00ebbac0(param_3 GEN_EDX_ARG);
      if (bVar7 != 0x2d) goto LAB_00ec2112;
      *pcVar16 = '-';
    }
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar16 + 1;
    F_00ebbb10(param_3 GEN_EDX_ARG);
  }
LAB_00ec2112: ;
  uVar5 = (*(undefined4 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x24))[0] = '0';
  (*(char * PTR32 *)(gen_frame + 0x24))[1] = 'x';
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 2;
  (*(char *)(gen_frame + 0x2b)) = '\0';
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar8 = ((int *)GEN_TOP(*param_3));
      if (piVar8 == ((int *)GEN_TOP(0x0))) {
LAB_00ec216e: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar8[8])) == 0) || (*((int *)GEN_TOP(piVar8[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x18))))(piVar8 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar8[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec216e;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) == '0') {
      this = ((undefined *)GEN_TOP(F_00ebbb10(param_3 GEN_EDX_ARG)));
      bVar7 = F_00eb6af0(this GEN_EDX_ARG,uVar5);
      if ((bVar7 == 0) &&
         ((bVar7 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar7 == 0x78 ||
          (bVar7 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar7 == 0x58)))) {
        F_00ebbb10(param_3 GEN_EDX_ARG);
      }
      else {
        (*(char *)(gen_frame + 0x2b)) = '\x01';
      }
    }
  }
  ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    ppppcVar10 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  if (*(char *)ppppcVar10 == '\x7f') {
LAB_00ec2461: ;
    bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar5);
    if (bVar7 != 0) goto LAB_00ec2403;
    do {
      if ((char)param_3[1] == '\0') {
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec24a4: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
          }
          else {
            uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec24a4;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      iVar19 = (*(int *)(gen_frame + 0x14));
      cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
      if ((cVar1 < '0') || (0x39 < cVar1)) {
        if ((cVar1 < 'a') || (0x66 < cVar1)) {
          if ((cVar1 < 'A') || (0x46 < cVar1)) goto LAB_00ec2403;
          iVar15 = cVar1 - 0x37;
        }
        else {
          iVar15 = cVar1 - 0x57;
        }
      }
      else {
        iVar15 = cVar1 - 0x30;
      }
      if (iVar15 < 0) goto LAB_00ec2403;
      if ((*(int *)(gen_frame + 0x14)) < 0x24) {
        if ((char)param_3[1] == '\0') {
          piVar2 = ((int *)GEN_TOP(*param_3));
          if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2533: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
              uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
            }
            else {
              uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
            }
            if (uVar9 == 0xffffffff) goto LAB_00ec2533;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((*((char *)GEN_TOP(((int)param_3 + 5))) != '0') || (iVar19 != 0)) {
          *(*(char * PTR32 *)(gen_frame + 0x24)) = ((char *)REFP(0x115d640))[iVar15];
          (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
          (*(int *)(gen_frame + 0x14)) = iVar19 + 1;
        }
      }
      else {
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
      }
      piVar2 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x2b)) = '\x01';
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2597: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
        }
        else {
          *piVar8 = *piVar8 - 1;
          pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
          *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
          uVar9 = (uint)*pbVar3;
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec2597;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
    } while (bVar7 == 0);
LAB_00ec2409: ;
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      *(*(char * PTR32 *)(gen_frame + 0x24)) = '0';
      (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
    }
  }
  else {
    ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      ppppcVar10 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    }
    if (*(char *)ppppcVar10 < '\x01') goto LAB_00ec2461;
    if ((*(int *)(gen_frame + 0x3c)) == 0) {
      (*(byte *)(gen_frame + 0x23)) = 0;
    }
    else {
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      (*(byte *)(gen_frame + 0x23)) = (byte)uVar9;
    }
    pppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
    (*(int *)((char *)&(_Var14))) = 0;
    (*(uint *)(gen_frame + 0x5c)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x58)) = 1;
    (*(undefined2 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0] + 0)) = 0;
    ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0] = ((char * PTR32 * PTR32 *)GEN_TOP(((uint)pppcVar6 & 0xffff0000)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = 0;
    bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar5);
    ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
    if (bVar7 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar2 = ((int *)GEN_TOP(*param_3));
          if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2255: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
              uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
            }
            else {
              uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
            }
            if (uVar9 == 0xffffffff) goto LAB_00ec2255;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
        iVar19 = (*(int *)(gen_frame + 0x14));
        cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
        if ((cVar1 < '0') || (0x39 < cVar1)) {
          if (('`' < cVar1) && (cVar1 < 0x67)) {
            iVar15 = cVar1 - 0x57;
            goto LAB_00ec2293;
          }
          if (('@' < cVar1) && (cVar1 < 0x47)) {
            iVar15 = cVar1 - 0x37;
            goto LAB_00ec2293;
          }
LAB_00ec22f1: ;
          ppppcVar13 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
          if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
            ppppcVar13 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
          }
          if (((*((char *)GEN_TOP(((int)ppppcVar13 + (*(int *)((char *)&(_Var14)))))) == '\0') || ((*(byte *)(gen_frame + 0x23)) == 0)) ||
             (bVar7 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar7 != (*(byte *)(gen_frame + 0x23)))) break;
          F_00a17030(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,1,0);
          (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = (*(int *)((char *)&(_Var14))) + 1;
        }
        else {
          iVar15 = cVar1 - 0x30;
LAB_00ec2293: ;
          if (iVar15 < 0) goto LAB_00ec22f1;
          (*(char *)(gen_frame + 0x2b)) = '\x01';
          if ((*(int *)(gen_frame + 0x14)) < 0x24) {
            bVar7 = F_00ebbac0(param_3 GEN_EDX_ARG);
            if ((bVar7 != 0x30) || (iVar19 != 0)) {
              *(*(char * PTR32 *)(gen_frame + 0x24)) = ((char *)REFP(0x115d640))[iVar15];
              (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
              (*(int *)(gen_frame + 0x14)) = iVar19 + 1;
            }
          }
          else {
            (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
          }
          ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
          if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
            ppppcVar10 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
          }
          if (*((char *)GEN_TOP(((int)ppppcVar10 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))))))) != '\x7f') {
            ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
            if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
              ppppcVar10 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
            }
            *((char *)GEN_TOP(((int)ppppcVar10 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))))))) =
                 *((char *)GEN_TOP(((int)ppppcVar10 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))))))) + '\x01';
          }
        }
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2360: ;
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
          }
          else {
            *piVar8 = *piVar8 - 1;
            pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
            *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
            uVar9 = (uint)*pbVar3;
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec2360;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
        (*(int *)((char *)&(_Var14))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))));
        ppppcVar10 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48))[0];
      } while (bVar7 == 0);
      if ((*(int *)((char *)&(_Var14))) != 0) {
        ppppcVar13 = ppppcVar10;
        if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
          ppppcVar13 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
        }
        if (*((char *)GEN_TOP(((int)ppppcVar13 + (*(int *)((char *)&(_Var14)))))) < '\x01') {
          (*(char *)(gen_frame + 0x2a)) = '\x01';
        }
        else {
          (*(int *)((char *)&(_Var14))) = (*(int *)((char *)&(_Var14))) + 1;
        }
      }
    }
    ppppcVar13 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      ppppcVar13 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    }
    if ((*(char *)(gen_frame + 0x2a)) == '\0') {
      while( true ) {
        if (((*(int *)((char *)&(_Var14))) == 0) || (cVar1 = *(char *)ppppcVar13, cVar1 == '\x7f'))
        goto LAB_00ec23f4;
        (*(int *)((char *)&(_Var14))) = (*(int *)((char *)&(_Var14))) - 1;
        if ((*(int *)((char *)&(_Var14))) != 0) break;
LAB_00ec23d4: ;
        if ((*(int *)((char *)&(_Var14))) == 0) {
          ppppcVar11 = ppppcVar10;
          if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
            ppppcVar11 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
          }
          if (cVar1 < *(char *)ppppcVar11) goto LAB_00ec23f0;
        }
        if ('\0' < *((char *)GEN_TOP(((int)ppppcVar13 + 1)))) {
          ppppcVar13 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar13 + 1)));
        }
      }
      ppppcVar11 = ppppcVar10;
      if ((*(uint *)(gen_frame + 0x5c)) < 0x10) {
        ppppcVar11 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x48));
      }
      if (cVar1 == *((char *)GEN_TOP(((int)ppppcVar11 + (*(int *)((char *)&(_Var14))))))) goto LAB_00ec23d4;
LAB_00ec23f0: ;
      (*(char *)(gen_frame + 0x2a)) = '\x01';
    }
LAB_00ec23f4: ;
    if (0xf < (*(uint *)(gen_frame + 0x5c))) {
      F_00406ad0(ppppcVar10);
    }
LAB_00ec2403: ;
    if ((*(char *)(gen_frame + 0x2b)) != '\0') goto LAB_00ec2409;
  }
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar2 = ((int *)GEN_TOP(*param_3));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec25ca: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec25ca;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 4))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    if (cVar1 == (char)uVar9) {
      plVar12 = F_00c527f9();
      *(*(char * PTR32 *)(gen_frame + 0x24)) = *(*(char * PTR32 *)((char *)(plVar12)));
      piVar2 = ((int *)GEN_TOP(*param_3));
      (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
        }
        else {
          *piVar8 = *piVar8 - 1;
          pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
          *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
          uVar9 = (uint)*pbVar3;
        }
        if (uVar9 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_00ec263c;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
  }
LAB_00ec263c: ;
  iVar19 = (*(int *)(gen_frame + 0x14));
  pcVar16 = (*(char * PTR32 *)(gen_frame + 0x24));
  if ((*(int *)(gen_frame + 0x14)) == 0) {
    bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
    iVar15 = (*(int *)(gen_frame + 0x18));
    if (bVar7 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar2 = ((int *)GEN_TOP(*param_3));
          if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2694: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
              uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
            }
            else {
              uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
            }
            if (uVar9 == 0xffffffff) goto LAB_00ec2694;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*((char *)GEN_TOP(((int)param_3 + 5))) != '0') break;
        piVar2 = ((int *)GEN_TOP(*param_3));
        iVar15 = iVar15 - 1;
        (*(char *)(gen_frame + 0x2b)) = '\x01';
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec26e2: ;
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
          }
          else {
            *piVar8 = *piVar8 - 1;
            pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
            *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
            uVar9 = (uint)*pbVar3;
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec26e2;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
      } while (bVar7 == 0);
      (*(int *)(gen_frame + 0x18)) = iVar15;
    }
    pcVar16 = (*(char * PTR32 *)(gen_frame + 0x24));
    if ((*(int *)(gen_frame + 0x18)) < 0) {
      *(*(char * PTR32 *)(gen_frame + 0x24)) = '0';
      pcVar16 = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    }
  }
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec275c: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
          }
          else {
            uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec275c;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
      if ((cVar1 < '0') || (0x39 < cVar1)) {
        if ((cVar1 < 'a') || (0x66 < cVar1)) {
          if ((cVar1 < 'A') || (0x46 < cVar1)) goto LAB_00ec2809;
          iVar15 = cVar1 - 0x37;
        }
        else {
          iVar15 = cVar1 - 0x57;
        }
      }
      else {
        iVar15 = cVar1 - 0x30;
      }
      if (iVar15 < 0) goto LAB_00ec2809;
      if (iVar19 < 0x24) {
        *pcVar16 = ((char *)REFP(0x115d640))[iVar15];
        pcVar16 = pcVar16 + 1;
        iVar19 = iVar19 + 1;
      }
      piVar2 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x2b)) = '\x01';
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec27ea: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
        }
        else {
          *piVar8 = *piVar8 - 1;
          pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
          *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
          uVar9 = (uint)*pbVar3;
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec27ea;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
    } while (bVar7 == 0);
  }
  else {
LAB_00ec2809: ;
    if ((*(char *)(gen_frame + 0x2b)) == '\0') goto LAB_00ec2bca;
  }
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 != 0) goto LAB_00ec2bca;
  if ((char)param_3[1] == '\0') {
    piVar2 = ((int *)GEN_TOP(*param_3));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2859: ;
      *param_3 = 0;
    }
    else {
      if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
      }
      else {
        uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
      }
      if (uVar9 == 0xffffffff) goto LAB_00ec2859;
      *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*((char *)GEN_TOP(((int)param_3 + 5))) != 'p') {
    if ((char)param_3[1] == '\0') {
      piVar2 = ((int *)GEN_TOP(*param_3));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec289d: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec289d;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) != 'P') goto LAB_00ec2bca;
  }
  *pcVar16 = 'p';
  piVar2 = ((int *)GEN_TOP(*param_3));
  pcVar17 = pcVar16 + 1;
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec28ee: ;
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    }
    else {
      *piVar8 = *piVar8 - 1;
      pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
      *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
      uVar9 = (uint)*pbVar3;
    }
    if (uVar9 == 0xffffffff) goto LAB_00ec28ee;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  (*(char *)(gen_frame + 0x2b)) = '\0';
  iVar19 = 0;
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar2 = ((int *)GEN_TOP(*param_3));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2942: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec2942;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) == '+') {
      *pcVar17 = '+';
    }
    else {
      if ((char)param_3[1] == '\0') {
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2985: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
          }
          else {
            uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec2985;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) != '-') goto LAB_00ec29d2;
      *pcVar17 = '-';
    }
    piVar2 = ((int *)GEN_TOP(*param_3));
    pcVar17 = pcVar16 + 2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
      }
      else {
        *piVar8 = *piVar8 - 1;
        pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
        *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 != 0xffffffff) {
        *(undefined1 *)(param_3 + 1) = 0;
        goto LAB_00ec29d2;
      }
    }
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 0;
  }
LAB_00ec29d2: ;
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  if (bVar7 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2a17: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
          }
          else {
            uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec2a17;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) != '0') {
        if ((*(char *)(gen_frame + 0x2b)) == '\0') goto LAB_00ec2a83;
        break;
      }
      piVar2 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x2b)) = '\x01';
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2a5e: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
        }
        else {
          *piVar8 = *piVar8 - 1;
          pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
          *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
          uVar9 = (uint)*pbVar3;
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec2a5e;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
    } while (bVar7 == 0);
    *pcVar17 = '0';
    pcVar17 = pcVar17 + 1;
  }
LAB_00ec2a83: ;
  bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  pcVar16 = pcVar17;
  while (bVar7 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar2 = ((int *)GEN_TOP(*param_3));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2aca: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
          pcVar4 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x18)));
          uVar9 = (*pcVar4)(piVar2);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec2aca;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) < '0') break;
    if ((char)param_3[1] == '\0') {
      piVar2 = ((int *)GEN_TOP(*param_3));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2b12: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
        }
        else {
          uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
        }
        if (uVar9 == 0xffffffff) goto LAB_00ec2b12;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ('9' < *((char *)GEN_TOP(((int)param_3 + 5)))) break;
    if (iVar19 < 8) {
      if ((char)param_3[1] == '\0') {
        piVar2 = ((int *)GEN_TOP(*param_3));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2b5f: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
          }
          else {
            uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
          }
          if (uVar9 == 0xffffffff) goto LAB_00ec2b5f;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      *pcVar16 = *((char *)GEN_TOP(((int)param_3 + 5)));
      pcVar16 = pcVar16 + 1;
      iVar19 = iVar19 + 1;
    }
    piVar2 = ((int *)GEN_TOP(*param_3));
    (*(char *)(gen_frame + 0x2b)) = '\x01';
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec2bad: ;
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar8 = ((int *)GEN_TOP(piVar2[0xc])), *piVar8 < 1)) {
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
      }
      else {
        *piVar8 = *piVar8 - 1;
        pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
        *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_00ec2bad;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    bVar7 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
  }
LAB_00ec2bca: ;
  if (((*(char *)(gen_frame + 0x2a)) != '\0') || ((*(char *)(gen_frame + 0x2b)) == '\0')) {
    pcVar16 = (*(char * PTR32 *)(gen_frame + 0x8));
  }
  *pcVar16 = '\0';
  *(*(int * PTR32 *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x18));
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0]);
  }
  return 0;
}

/* ref: FUN_00ec2c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec2c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec2c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b123c0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ec2c30 */
GEN_LIB GEN_FRAME uint F_00ec2c30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec2c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * this;
  int * piVar5;
  byte * pbVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  puVar7 = param_2;
  iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
  uVar8 = *((uint *)GEN_TOP((iVar9 + 0x20 + (int)param_1)));
  uVar2 = param_2[4];
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  iVar3 = *((int *)GEN_TOP((iVar9 + 0x24 + (int)param_1)));
  if ((iVar3 < 0) || (((iVar3 < 1 && (uVar8 == 0)) || (uVar8 <= uVar2)))) {
    param_2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    param_2 = ((undefined4 *)GEN_TOP((uVar8 - uVar2)));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP((iVar9 + 0x38 + (int)param_1)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x3c + (int)param_1))), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00a16e10(this GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) {
    iVar9 = (int)param_2;
    if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 0x1c0) != 0x40) {
      for (; iVar9 != 0; iVar9 = iVar9 - 1) {
        piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
        bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x40 + (int)param_1)));
        if ((*((int *)GEN_TOP(piVar4[9])) == 0) || (piVar5 = ((int *)GEN_TOP(piVar4[0xd])), *piVar5 < 1)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,(uint)bVar1);
        }
        else {
          *piVar5 = *piVar5 - 1;
          pbVar6 = *((byte * PTR32 *)GEN_TOP(piVar4[9]));
          *((byte * PTR32 *)GEN_TOP(piVar4[9])) = pbVar6 + 1;
          *pbVar6 = bVar1;
          uVar8 = (uint)bVar1;
        }
        if (uVar8 == 0xffffffff) {
          (*(uint *)(gen_frame + 0x14)) = 4;
          goto joined_r0x00ec2d2c;
        }
      }
    }
    if (0xf < (uint)puVar7[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4,puVar7,(*(uint *)(gen_frame + 0x10)),0);
    if (((uint)uVar10 == (*(uint *)(gen_frame + 0x10))) && ((int)((ulonglong)uVar10 >> 0x20) == 0)) {
joined_r0x00ec2d2c: ;
      do {
        if (iVar9 == 0) goto LAB_00ec2da6;
        piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
        bVar1 = *((byte *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((*param_1 + 4))) + 0x40)));
        if ((*((int *)GEN_TOP(piVar4[9])) == 0) || (piVar5 = ((int *)GEN_TOP(piVar4[0xd])), *piVar5 < 1)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,(uint)bVar1);
        }
        else {
          *piVar5 = *piVar5 - 1;
          pbVar6 = *((byte * PTR32 *)GEN_TOP(piVar4[9]));
          *((byte * PTR32 *)GEN_TOP(piVar4[9])) = pbVar6 + 1;
          *pbVar6 = bVar1;
          uVar8 = (uint)bVar1;
        }
        if (uVar8 == 0xffffffff) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | 4;
          goto LAB_00ec2da6;
        }
        iVar9 = iVar9 - 1;
      } while( true );
    }
    (*(uint *)(gen_frame + 0x14)) = 4;
LAB_00ec2da6: ;
    iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar9 + 0x20 + (int)param_1))) = 0;
    *((undefined4 *)GEN_TOP((iVar9 + 0x24 + (int)param_1))) = 0;
    uVar8 = (*(uint *)(gen_frame + 0x14));
  }
  else {
    uVar8 = 4;
  }
  iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
  if (uVar8 != 0) {
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0xc))) | uVar8;
    if (*((int *)GEN_TOP(((int)param_1 + iVar9 + 0x38))) == 0) {
      uVar8 = uVar8 | 4;
    }
    *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0xc))) = uVar8 & 0x17;
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0x10))) & uVar8 & 0x17;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 & 2) == 0) {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar8 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1 GEN_EDX_ARG);
  }
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec2e60 */
GEN_LIB GEN_FRAME uint F_00ec2e60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec2e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  int iVar2;
  int * piVar3;
  undefined * this;
  int * piVar4;
  ushort * puVar5;
  ushort uVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  puVar7 = param_2;
  iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
  uVar8 = *((uint *)GEN_TOP((iVar9 + 0x20 + (int)param_1)));
  uVar1 = param_2[4];
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  iVar2 = *((int *)GEN_TOP((iVar9 + 0x24 + (int)param_1)));
  if ((iVar2 < 0) || (((iVar2 < 1 && (uVar8 == 0)) || (uVar8 <= uVar1)))) {
    param_2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    param_2 = ((undefined4 *)GEN_TOP((uVar8 - uVar1)));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((iVar9 + 0x38 + (int)param_1)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x3c + (int)param_1))), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00ebbf30(this GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) {
    iVar9 = (int)param_2;
    if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 0x1c0) != 0x40) {
      for (; iVar9 != 0; iVar9 = iVar9 - 1) {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
        uVar6 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x40 + (int)param_1)));
        if ((*((int *)GEN_TOP(piVar3[9])) == 0) || (piVar4 = ((int *)GEN_TOP(piVar3[0xd])), *piVar4 < 1)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,(uint)uVar6);
          uVar6 = (ushort)uVar8;
        }
        else {
          *piVar4 = *piVar4 - 1;
          puVar5 = *((ushort * PTR32 *)GEN_TOP(piVar3[9]));
          *((ushort * PTR32 *)GEN_TOP(piVar3[9])) = puVar5 + 1;
          *puVar5 = uVar6;
        }
        if (uVar6 == 0xffff) {
          (*(uint *)(gen_frame + 0x14)) = 4;
          goto joined_r0x00ec2f62;
        }
      }
    }
    if (7 < (uint)puVar7[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
    }
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3,puVar7,(*(uint *)(gen_frame + 0x10)),0);
    if (((uint)uVar10 == (*(uint *)(gen_frame + 0x10))) && ((int)((ulonglong)uVar10 >> 0x20) == 0)) {
joined_r0x00ec2f62: ;
      do {
        if (iVar9 == 0) goto LAB_00ec2fde;
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
        uVar6 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x40 + (int)param_1)));
        if ((*((int *)GEN_TOP(piVar3[9])) == 0) || (piVar4 = ((int *)GEN_TOP(piVar3[0xd])), *piVar4 < 1)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,(uint)uVar6);
          uVar6 = (ushort)uVar8;
        }
        else {
          *piVar4 = *piVar4 - 1;
          puVar5 = *((ushort * PTR32 *)GEN_TOP(piVar3[9]));
          *((ushort * PTR32 *)GEN_TOP(piVar3[9])) = puVar5 + 1;
          *puVar5 = uVar6;
        }
        if (uVar6 == 0xffff) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | 4;
          goto LAB_00ec2fde;
        }
        iVar9 = iVar9 - 1;
      } while( true );
    }
    (*(uint *)(gen_frame + 0x14)) = 4;
LAB_00ec2fde: ;
    iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar9 + 0x20 + (int)param_1))) = 0;
    *((undefined4 *)GEN_TOP((iVar9 + 0x24 + (int)param_1))) = 0;
    uVar8 = (*(uint *)(gen_frame + 0x14));
  }
  else {
    uVar8 = 4;
  }
  iVar9 = *((int *)GEN_TOP((*param_1 + 4)));
  if (uVar8 != 0) {
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0xc))) | uVar8;
    if (*((int *)GEN_TOP(((int)param_1 + iVar9 + 0x38))) == 0) {
      uVar8 = uVar8 | 4;
    }
    *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0xc))) = uVar8 & 0x17;
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar9 + 0x10))) & uVar8 & 0x17;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 & 2) == 0) {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar8 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00ebbf30(param_1 GEN_EDX_ARG);
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec3090 */
GEN_LIB GEN_FRAME uint F_00ec3090(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec3090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x3c + (int)param_1))), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00a16e10(this GEN_EDX_ARG);
  }
  iVar3 = *((int *)GEN_TOP((*param_1 + 4)));
  if (*((int *)GEN_TOP(((int)param_1 + iVar3 + 0xc))) == 0) {
    iVar6 = *((int *)GEN_TOP(((int)param_1 + iVar3 + 0x24)));
    uVar7 = *((uint *)GEN_TOP(((int)param_1 + iVar3 + 0x20)));
    if ((iVar6 < 1) && ((iVar6 < 0 || (uVar7 < 2)))) {
      (*(longlong *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0;
      iVar9 = (int)(*(longlong *)(gen_frame + 0x8));
    }
    else {
      iVar9 = uVar7 - 1;
      iVar6 = iVar6 - (uint)(uVar7 == 0);
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = iVar6;
      (*(longlong *)(gen_frame + 0x8)) = CONCAT44(iVar6,(int)(*(longlong *)(gen_frame + 0x8)));
    }
    if ((*((uint *)GEN_TOP(((int)param_1 + iVar3 + 0x14))) & 0x1c0) == 0x40) {
LAB_00ec318d: ;
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
      if ((*((int *)GEN_TOP(piVar2[9])) == 0) || (piVar4 = ((int *)GEN_TOP(piVar2[0xd])), *piVar4 < 1)) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(uint)param_2);
      }
      else {
        *piVar4 = *piVar4 - 1;
        pbVar5 = *((byte * PTR32 *)GEN_TOP(piVar2[9]));
        *((byte * PTR32 *)GEN_TOP(piVar2[9])) = pbVar5 + 1;
        *pbVar5 = param_2;
        uVar7 = (uint)param_2;
      }
      if (uVar7 == 0xffffffff) {
        uVar8 = 4;
      }
      else {
        do {
          if (((*(longlong *)(gen_frame + 0x8)) < 0) || (((int)(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) < 1 && (iVar9 == 0)))) break;
          piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
          bVar1 = *((byte *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((*param_1 + 4))) + 0x40)));
          if ((*((int *)GEN_TOP(piVar2[9])) == 0) || (piVar4 = ((int *)GEN_TOP(piVar2[0xd])), *piVar4 < 1)) {
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(uint)bVar1);
          }
          else {
            *piVar4 = *piVar4 - 1;
            pbVar5 = *((byte * PTR32 *)GEN_TOP(piVar2[9]));
            *((byte * PTR32 *)GEN_TOP(piVar2[9])) = pbVar5 + 1;
            *pbVar5 = bVar1;
            uVar7 = (uint)bVar1;
            uVar8 = (*(uint *)(gen_frame + 0x10));
          }
          if (uVar7 == 0xffffffff) {
            uVar8 = uVar8 | 4;
            (*(uint *)(gen_frame + 0x10)) = uVar8;
          }
          bVar10 = iVar9 != 0;
          iVar9 = iVar9 - 1;
          iVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) - 1 + (uint)bVar10;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = iVar3;
          (*(longlong *)(gen_frame + 0x8)) = CONCAT44(iVar3,(int)(*(longlong *)(gen_frame + 0x8)));
        } while (uVar8 == 0);
      }
    }
    else {
      do {
        if (((*(longlong *)(gen_frame + 0x8)) < 0) || (((int)(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) < 1 && (iVar9 == 0)))) {
          if (uVar8 == 0) goto LAB_00ec318d;
          break;
        }
        piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
        bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x40 + (int)param_1)));
        if ((*((int *)GEN_TOP(piVar2[9])) == 0) || (piVar4 = ((int *)GEN_TOP(piVar2[0xd])), *piVar4 < 1)) {
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(uint)bVar1);
        }
        else {
          *piVar4 = *piVar4 - 1;
          pbVar5 = *((byte * PTR32 *)GEN_TOP(piVar2[9]));
          *((byte * PTR32 *)GEN_TOP(piVar2[9])) = pbVar5 + 1;
          *pbVar5 = bVar1;
          uVar7 = (uint)bVar1;
          uVar8 = (*(uint *)(gen_frame + 0x10));
        }
        if (uVar7 == 0xffffffff) {
          uVar8 = uVar8 | 4;
          (*(uint *)(gen_frame + 0x10)) = uVar8;
        }
        bVar10 = iVar9 != 0;
        iVar9 = iVar9 - 1;
        iVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) - 1 + (uint)bVar10;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = iVar3;
        (*(longlong *)(gen_frame + 0x8)) = CONCAT44(iVar3,(int)(*(longlong *)(gen_frame + 0x8)));
      } while (uVar8 == 0);
    }
  }
  iVar3 = *((int *)GEN_TOP((*param_1 + 4)));
  *((undefined4 *)GEN_TOP((iVar3 + 0x20 + (int)param_1))) = 0;
  *((undefined4 *)GEN_TOP((iVar3 + 0x24 + (int)param_1))) = 0;
  iVar3 = *((int *)GEN_TOP((*param_1 + 4)));
  if (uVar8 != 0) {
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar3 + 0xc))) | uVar8;
    if (*((int *)GEN_TOP(((int)param_1 + iVar3 + 0x38))) == 0) {
      uVar8 = uVar8 | 4;
    }
    *((uint *)GEN_TOP(((int)param_1 + iVar3 + 0xc))) = uVar8 & 0x17;
    uVar8 = *((uint *)GEN_TOP(((int)param_1 + iVar3 + 0x10))) & uVar8 & 0x17;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 & 2) == 0) {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar8 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 1;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = uVar8;
      (*(longlong *)(gen_frame + 0x8)) = CONCAT44(uVar8,1);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1 GEN_EDX_ARG);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec32f0 */
GEN_LIB GEN_FRAME uint F_00ec32f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec32f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00ec3310 */
GEN_LIB GEN_FRAME uint F_00ec3310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec3310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00ec3330 */
GEN_LIB GEN_FRAME unsigned int F_00ec3330(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec3330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00ec3360 */
GEN_LIB_GS GEN_FRAME uint F_00ec3360(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xec3360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  char * pcVar1;
  int * piVar2;
  int * piVar3;
  byte * pbVar4;
  bool bVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar10;
  undefined1 uVar11;
  char * pcVar12;
  int iVar13;
  uint uVar14;
  
  pppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  cVar7 = *param_4;
  pcVar12 = param_4;
  while (cVar7 != '\0') {
    if (cVar7 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar1 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
    cVar7 = *pcVar1;
  }
  (*(uint *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar6 & 0xffffff00)));
  F_00a17190(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_3,0);
  (*(uint *)(gen_frame + 0x0)) = 0xfffffffe;
  (*(uint *)(gen_frame + 0x4)) = 1;
  while( true ) {
    iVar13 = 0;
    uVar14 = 0;
    bVar5 = false;
    if (param_3 == 0) break;
    do {
      cVar7 = param_4[iVar13];
      if (cVar7 != '\0') {
        do {
          if (cVar7 == *param_4) break;
          cVar7 = param_4[iVar13 + 1];
          iVar13 = iVar13 + 1;
        } while (cVar7 != '\0');
      }
      ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
      if ((*(uint *)(gen_frame + 0x24)) < 0x10) {
        ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
      }
      if (*((char *)GEN_TOP(((int)ppppuVar10 + uVar14))) == '\0') {
        iVar13 = iVar13 + (*(uint *)(gen_frame + 0x4));
        if ((param_4[iVar13] == *param_4) || (param_4[iVar13] == '\0')) {
          uVar9 = (*(uint *)(gen_frame + 0x4));
          if (0x7e < (*(uint *)(gen_frame + 0x4))) {
            uVar9 = 0x7f;
          }
          uVar11 = (undefined1)uVar9;
          ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
          (*(uint *)(gen_frame + 0x0)) = uVar14;
          if ((*(uint *)(gen_frame + 0x24)) < 0x10) {
            ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        else {
          bVar8 = F_00eb6af0(param_1 GEN_EDX_ARG,param_2);
          if (bVar8 == 0) {
            if ((char)param_1[1] == '\0') {
              piVar2 = ((int *)GEN_TOP(*param_1));
              if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec348e: ;
                *param_1 = 0;
              }
              else {
                if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (*((int *)GEN_TOP(piVar2[0xc])) < 1)) {
                  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG);
                }
                else {
                  uVar9 = (uint)**((byte * PTR32 *)GEN_TOP(piVar2[8]));
                }
                if (uVar9 == 0xffffffff) goto LAB_00ec348e;
                *((char *)GEN_TOP(((int)param_1 + 5))) = (char)uVar9;
              }
              *(undefined1 *)(param_1 + 1) = 1;
            }
            if (param_4[iVar13] == *((char *)GEN_TOP(((int)param_1 + 5)))) {
              bVar5 = true;
              goto LAB_00ec34dc;
            }
          }
          uVar9 = (*(uint *)(gen_frame + 0x4));
          if (0x7e < (*(uint *)(gen_frame + 0x4))) {
            uVar9 = 0x7f;
          }
          uVar11 = (undefined1)uVar9;
          ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
          if ((*(uint *)(gen_frame + 0x24)) < 0x10) {
            ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        *((undefined1 *)GEN_TOP(((int)ppppuVar10 + uVar14))) = uVar11;
      }
      else {
        ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
        if ((*(uint *)(gen_frame + 0x24)) < 0x10) {
          ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
        }
        iVar13 = iVar13 + *((char *)GEN_TOP(((int)ppppuVar10 + uVar14)));
      }
LAB_00ec34dc: ;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_3);
    if ((!bVar5) || (bVar8 = F_00eb6af0(param_1 GEN_EDX_ARG,param_2), bVar8 != 0)) break;
    piVar2 = ((int *)GEN_TOP(*param_1));
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_00ec3544: ;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
    }
    else {
      if ((*((int *)GEN_TOP(piVar2[8])) == 0) || (piVar3 = ((int *)GEN_TOP(piVar2[0xc])), *piVar3 < 1)) {
        uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
      }
      else {
        *piVar3 = *piVar3 - 1;
        pbVar4 = *((byte * PTR32 *)GEN_TOP(piVar2[8]));
        *((byte * PTR32 *)GEN_TOP(piVar2[8])) = pbVar4 + 1;
        uVar14 = (uint)*pbVar4;
      }
      if (uVar14 == 0xffffffff) goto LAB_00ec3544;
      *(undefined1 *)(param_1 + 1) = 0;
      (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
    }
  }
  if (0xf < (*(uint *)(gen_frame + 0x24))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0]);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00ec3580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3580(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xec3580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
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
  
  if (0x186185f < *((uint *)GEN_TOP(((int)param_1 + 8)))) {
    F_0042c880(param_5 + 0x18 GEN_EDX_FWD);
    F_0042c880(param_5 + 3 GEN_EDX_ARG);
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)param_1 + 8))) = *((uint *)GEN_TOP(((int)param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) = (int)param_5;
      }
      goto LAB_00ec35fa;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00ec35fa;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00ec35fa: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0xb4)));
  piVar6 = param_5;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) + 0xb4))) = 1;
      *param_2 = param_5;
      return (uint)param_2;
    }
    piVar3 = ((int *)GEN_TOP(piVar6[1]));
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
      iVar4 = piVar5[2];
      if (*((char *)GEN_TOP((iVar4 + 0xb4))) != '\0') {
        if (piVar6 == ((int *)GEN_TOP(piVar3[2]))) {
          piVar6 = ((int *)GEN_TOP(piVar3[2]));
          piVar3[2] = *piVar6;
          if (*((char *)GEN_TOP((*piVar6 + 0xb5))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar3;
          }
          piVar6[1] = piVar3[1];
          if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar6;
          }
          else {
            piVar5 = ((int *)GEN_TOP(piVar3[1]));
            if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
              *piVar5 = (int)piVar6;
            }
            else {
              piVar5[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar3;
          piVar3[1] = (int)piVar6;
          piVar6 = piVar3;
        }
        *((undefined1 *)GEN_TOP((piVar6[1] + 0xb4))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xb4))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
        piVar5 = ((int *)GEN_TOP(*piVar3));
        *piVar3 = piVar5[2];
        if (*((char *)GEN_TOP((piVar5[2] + 0xb5))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
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
        goto LAB_00ec3768;
      }
LAB_00ec36e4: ;
      *(undefined1 *)(piVar3 + 0x2d) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0xb4))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xb4))) = 0;
      piVar6 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
    }
    else {
      iVar4 = *piVar5;
      if (*((char *)GEN_TOP((iVar4 + 0xb4))) == '\0') goto LAB_00ec36e4;
      if (piVar6 == ((int *)GEN_TOP(*piVar3))) {
        F_00eb2c90(param_1 GEN_EDX_ARG,piVar3);
        piVar6 = piVar3;
      }
      *((undefined1 *)GEN_TOP((piVar6[1] + 0xb4))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xb4))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
      piVar5 = ((int *)GEN_TOP(piVar3[2]));
      piVar3[2] = *piVar5;
      if (*((char *)GEN_TOP((*piVar5 + 0xb5))) == '\0') {
        *((int * PTR32 *)GEN_TOP((*piVar5 + 4))) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
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
LAB_00ec3768: ;
      piVar3[1] = (int)piVar5;
    }
    cVar1 = *((char *)GEN_TOP((piVar6[1] + 0xb4)));
  } while( true );
}

/* ref: FUN_00ec37a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec37a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xec37a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
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
  
  if (0x2492490 < *((uint *)GEN_TOP(((int)param_1 + 8)))) {
    param_5[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(param_5 + 0x1a GEN_EDX_FWD);
    F_0042c880(param_5 + 4 GEN_EDX_ARG);
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)param_1 + 8))) = *((uint *)GEN_TOP(((int)param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) = (int)param_5;
      }
      goto LAB_00ec3820;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00ec3820;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00ec3820: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x80)));
  piVar6 = param_5;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) + 0x80))) = 1;
      *param_2 = param_5;
      return (uint)param_2;
    }
    piVar3 = ((int *)GEN_TOP(piVar6[1]));
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
      iVar4 = piVar5[2];
      if (*((char *)GEN_TOP((iVar4 + 0x80))) == '\0') goto LAB_00ec3908;
      if (piVar6 == ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP(piVar3[2]));
        piVar3[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x81))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar3;
        }
        piVar6[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar5 = ((int *)GEN_TOP(piVar3[1]));
          if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
            *piVar5 = (int)piVar6;
          }
          else {
            piVar5[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar3;
        piVar3[1] = (int)piVar6;
        piVar6 = piVar3;
      }
      *((undefined1 *)GEN_TOP((piVar6[1] + 0x80))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x80))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
      piVar5 = ((int *)GEN_TOP(*piVar3));
      *piVar3 = piVar5[2];
      if (*((char *)GEN_TOP((piVar5[2] + 0x81))) == '\0') {
        *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
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
LAB_00ec398c: ;
      piVar3[1] = (int)piVar5;
    }
    else {
      iVar4 = *piVar5;
      if (*((char *)GEN_TOP((iVar4 + 0x80))) != '\0') {
        if (piVar6 == ((int *)GEN_TOP(*piVar3))) {
          F_00eb1690(param_1 GEN_EDX_ARG,piVar3);
          piVar6 = piVar3;
        }
        *((undefined1 *)GEN_TOP((piVar6[1] + 0x80))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x80))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
        piVar5 = ((int *)GEN_TOP(piVar3[2]));
        piVar3[2] = *piVar5;
        if (*((char *)GEN_TOP((*piVar5 + 0x81))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar5 + 4))) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
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
        goto LAB_00ec398c;
      }
LAB_00ec3908: ;
      *(undefined1 *)(piVar3 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x80))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0x80))) = 0;
      piVar6 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x80)));
  } while( true );
}

/* ref: FUN_00ec39c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ec39c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec39c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  (*(undefined4 *)&gen_args[1]) = CONCAT13((undefined1)(*(undefined4 *)&gen_args[1]),(undefined3)(*(undefined4 *)&gen_args[1]));
  F_00ec0950(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  return;
}

/* ref: FUN_00ec39e0 */
GEN_LIB GEN_FRAME uint F_00ec39e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec39e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  uVar7 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  bVar5 = F_00ebc060(param_1 GEN_EDX_ARG,0);
  if (bVar5 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
    if ((*((int *)GEN_TOP(piVar1[8])) == 0) || (piVar2 = ((int *)GEN_TOP(piVar1[0xc])), *piVar2 < 1)) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
    }
    else {
      *piVar2 = *piVar2 - 1;
      pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar1[8]));
      *((byte * PTR32 *)GEN_TOP(piVar1[8])) = pbVar3 + 1;
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) {
      uVar7 = 3;
    }
    else {
      *param_2 = (char)uVar6;
    }
  }
  iVar4 = *((int *)GEN_TOP((*param_1 + 4)));
  if (uVar7 != 0) {
    uVar7 = *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0xc))) | uVar7;
    if (*((int *)GEN_TOP(((int)param_1 + iVar4 + 0x38))) == 0) {
      uVar7 = uVar7 | 4;
    }
    *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0xc))) = uVar7 & 0x17;
    uVar7 = *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0x10))) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec3ae0 */
GEN_LIB GEN_FRAME uint F_00ec3ae0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xec3ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ebe4b0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00ec3b10 */
GEN_LIB GEN_FRAME unsigned int F_00ec3b10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xec3b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_0042cbc0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
  }
  return;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf8 */
GEN_LIB GEN_NOFRAME uint F_00ec3b40(void)
{
  GEN_ENTER(0xec3b40u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15e3928) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e3928) = *(uint *)&REFG(undefined, 0x15e3928) | 1;
    REFG(undefined4, 0x15e3920) = 0xf;
    *(undefined4 *)&REFG(undefined, 0x15e391c) = 0;
    (*(undefined1 *)((char *)&REFG(undefined4, 0x15e390c) + 0)) = 0;
    F_00c47de6(((code *)REFP(0x107d300)));
  }
  return 0x15e390c;
}

/* ref: FUN_00ec3b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  short * psVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
  uVar7 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x3c + (int)this))), this_00 != ((undefined *)GEN_TOP(0x0))))
  {
    F_00ebbf30(this_00 GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0xc + (int)this))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
    if ((*((int *)GEN_TOP(piVar1[9])) == 0) || (piVar2 = ((int *)GEN_TOP(piVar1[0xd])), *piVar2 < 1)) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1);
      sVar6 = (short)uVar5;
    }
    else {
      *piVar2 = *piVar2 - 1;
      psVar3 = *((short * PTR32 *)GEN_TOP(piVar1[9]));
      *((short * PTR32 *)GEN_TOP(piVar1[9])) = psVar3 + 1;
      sVar6 = (short)param_1;
      *psVar3 = sVar6;
    }
    if (sVar6 != -1) goto LAB_00ec3c10;
  }
  uVar7 = 4;
LAB_00ec3c10: ;
  iVar4 = *((int *)GEN_TOP((*(int *)this + 4)));
  if (uVar7 != 0) {
    uVar7 = *((uint *)GEN_TOP(((int)this + iVar4 + 0xc))) | uVar7;
    if (*((int *)GEN_TOP(((int)this + iVar4 + 0x38))) == 0) {
      uVar7 = uVar7 | 4;
    }
    *((uint *)GEN_TOP(((int)this + iVar4 + 0xc))) = uVar7 & 0x17;
    uVar7 = *((uint *)GEN_TOP(((int)this + iVar4 + 0x10))) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x14 + (int)this))) & 2) != 0) {
    F_00ebbf30(this GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + 0x38 + (int)this)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: FUN_00ec3cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3cc0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec3cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined * this;
  int * piVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  uVar6 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x3c + (int)param_1))), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00a16e10(this GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
    if ((*((int *)GEN_TOP(piVar1[9])) == 0) || (piVar2 = ((int *)GEN_TOP(piVar1[0xd])), *piVar2 < 1)) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(uint)param_2);
    }
    else {
      *piVar2 = *piVar2 - 1;
      pbVar3 = *((byte * PTR32 *)GEN_TOP(piVar1[9]));
      *((byte * PTR32 *)GEN_TOP(piVar1[9])) = pbVar3 + 1;
      *pbVar3 = param_2;
      uVar5 = (uint)param_2;
    }
    if (uVar5 != 0xffffffff) goto LAB_00ec3d48;
  }
  uVar6 = 4;
LAB_00ec3d48: ;
  iVar4 = *((int *)GEN_TOP((*param_1 + 4)));
  if (uVar6 != 0) {
    uVar6 = *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0xc))) | uVar6;
    if (*((int *)GEN_TOP(((int)param_1 + iVar4 + 0x38))) == 0) {
      uVar6 = uVar6 | 4;
    }
    *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0xc))) = uVar6 & 0x17;
    uVar6 = *((uint *)GEN_TOP(((int)param_1 + iVar4 + 0x10))) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910b0));
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910c8));
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10910e0));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      (*(uint *)(gen_frame + 0xc)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1 GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0x38 + (int)param_1)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec3df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xec3df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x115d65c);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined, 0x115d654);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  return (uint)this;
}

/* ref: FUN_00ec3e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xec3e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_00ebe720(this GEN_EDX_FWD,iVar2,1,param_3);
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00ec3eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec3eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec3eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = F_00ebe820(this GEN_EDX_FWD,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return uVar3;
}

/* ref: FUN_00ec3ee0 */
GEN_LIB_GS GEN_FRAME uint F_00ec3ee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char * PTR32 * PTR32 * PTR32 * PTR32 * param_7, unsigned int gen_a6), GEN_P(undefined * param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(undefined * param_10, unsigned int gen_a9), GEN_P(gen_size32 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12), GEN_P(undefined4 param_14, unsigned int gen_a13))
{
  GEN_ENTER(0xec3ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char * PTR32 * PTR32 * PTR32 * PTR32 * param_7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined * param_8 = (undefined *)(uintptr_t)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(undefined * param_10 = (undefined *)(uintptr_t)gen_a9;)
  GEN_PIN(gen_size32 param_11 = (gen_size32)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a13;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  char cVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  undefined1 uVar7;
  int * piVar8;
  uint uVar9;
  undefined * plVar10;
  undefined * pvVar11;
  undefined * pvVar12;
  gen_size32 sVar13;
  uint uVar14;
  undefined * puVar15;
  undefined4 * puVar16;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar17;
  gen_size32 _MaxCount;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_8;
  (*(int *)(gen_frame + 0x8)) = param_5;
  piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(int *)(gen_frame + 0x14)) = param_9;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = param_10;
  (*(gen_size32 *)(gen_frame + 0x34)) = param_11;
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  piVar8 = ((int *)GEN_TOP(F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0x4)))));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar8;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,0);
  iVar3 = piVar2[1];
  if ((iVar3 != 0) && (iVar3 != -1)) {
    piVar2[1] = iVar3 - 1;
  }
  puVar16 = ((undefined4 *)GEN_TOP((~-(uint)(piVar2[1] != 0) & (uint)piVar2)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  if (puVar16 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar16)))(puVar16 GEN_EDX_ARG,1);
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38)));
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0];
  (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))) + 0)) = (char)uVar9;
  cVar1 = *(char *)param_7;
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0] = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppcVar6 & 0xffffff00)));
  if ((cVar1 == '+') || ((*(int *)(gen_frame + 0x10)) = 0, cVar1 == '-')) {
    (*(int *)(gen_frame + 0x10)) = 1;
  }
  plVar10 = F_00c527f9();
  _MaxCount = (*(gen_size32 *)(gen_frame + 0x34));
  (*(char *)(gen_frame + 0x28)) = *(*(char * PTR32 *)((char *)(plVar10)));
  (*(undefined2 *)(gen_frame + 0x29)) = 0x65;
  pvVar11 = F_00c48f80(param_7,0x65,(*(gen_size32 *)(gen_frame + 0x34)));
  pvVar12 = F_00c48f80(param_7,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar12;
  if (pvVar12 == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar12;
  }
  pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
  if ((*(uint *)(gen_frame + 0x4c)) < 0x10) {
    pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38));
  }
  pppppcVar18 = param_7;
  if (*(char *)pppppcVar17 != '\x7f') {
    pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
    if ((*(uint *)(gen_frame + 0x4c)) < 0x10) {
      pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38));
    }
    if ('\0' < *(char *)pppppcVar17) {
      F_00e69490(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_7,_MaxCount);
      pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x30));
      if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x2c)),0x30);
        pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x30));
      }
      else {
        if ((*(undefined * PTR32 *)(gen_frame + 0x30)) == ((undefined *)GEN_TOP(0x0))) {
          F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x24)),0x30);
          (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar12;
        }
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)pvVar11 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x2c)),0x30);
      }
      if (pvVar12 == ((undefined *)GEN_TOP(0x0))) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x24)),0x30);
      }
      else {
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,((int)pvVar12 - (int)param_7) + 1,(*(int *)(gen_frame + 0x14)),0x30);
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(int)pvVar12 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x24)),0x30);
        (*(int *)(gen_frame + 0x14)) = 0;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
      pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
      if ((*(uint *)(gen_frame + 0x4c)) < 0x10) {
        pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38));
      }
      pppppcVar18 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0];
      if ((*(uint *)(gen_frame + 0x68)) < 0x10) {
        pppppcVar18 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54));
      }
      sVar13 = F_00c525d0((char *)pppppcVar18,&(*(char *)(gen_frame + 0x28)));
      cVar1 = *(char *)pppppcVar17;
      _MaxCount = (*(gen_size32 *)(gen_frame + 0x64));
      while ((((*(gen_size32 *)(gen_frame + 0x64)) = _MaxCount, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar13 - (*(int *)(gen_frame + 0x10))))) {
        sVar13 = sVar13 - (int)cVar1;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,sVar13,1,0);
        if ('\0' < *((char *)GEN_TOP(((int)pppppcVar17 + 1)))) {
          pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar17 + 1)));
        }
        _MaxCount = (*(gen_size32 *)(gen_frame + 0x64));
        cVar1 = *(char *)pppppcVar17;
      }
      pppppcVar18 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0];
      if ((*(uint *)(gen_frame + 0x68)) < 0x10) {
        pppppcVar18 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
      (*(gen_size32 *)(gen_frame + 0x34)) = _MaxCount;
    }
  }
  uVar9 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20)));
  uVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x14)) + _MaxCount + (int)(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 0) || ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) < 1 && (uVar9 == 0)))) ||
     (uVar9 <= uVar14)) {
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP((uVar9 - uVar14)));
  }
  uVar9 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) & 0x1c0;
  if (uVar9 != 0x40) {
    if (uVar9 == 0x100) {
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        puVar16 = ((undefined4 *)GEN_TOP(F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0xc)),param_3,param_4,pppppcVar18,1)));
        param_3 = *puVar16;
        param_4 = puVar16[1];
        pppppcVar18 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar18 + 1)));
        _MaxCount = _MaxCount - 1;
        (*(gen_size32 *)(gen_frame + 0x34)) = _MaxCount;
      }
      puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0xc)),param_3,param_4,(undefined1)param_6,(*(undefined * PTR32 *)(gen_frame + 0x30)))));
      param_3 = *puVar16;
      param_4 = puVar16[1];
    }
    else {
      puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0xc)),param_3,param_4,(undefined1)param_6,(*(undefined * PTR32 *)(gen_frame + 0x30)))));
      param_3 = *puVar16;
      param_4 = puVar16[1];
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
  }
  pvVar11 = F_00c48f80(pppppcVar18,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  if (pvVar11 != ((undefined *)GEN_TOP(0x0))) {
    iVar3 = ((int)pvVar11 - (int)pppppcVar18) + 1;
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7330(param_1,((undefined1 *)(gen_frame + 0xc)),param_3,param_4,pppppcVar18,
                           (int)pvVar11 - (int)pppppcVar18,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))))));
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0xc)),*puVar16,puVar16[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x24)))));
    uVar4 = *puVar16;
    uVar5 = puVar16[1];
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 4))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar7 = (undefined1)uVar9;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = uVar7;
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x0)),uVar4,uVar5,uVar7,1)));
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x18)),*puVar16,puVar16[1],0x30,(*(int *)(gen_frame + 0x14)))));
    param_3 = *puVar16;
    pppppcVar18 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar18 + iVar3)));
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x34)) - iVar3;
    (*(gen_size32 *)(gen_frame + 0x34)) = _MaxCount;
    param_4 = puVar16[1];
  }
  pvVar11 = F_00c48f80(pppppcVar18,0x65,_MaxCount);
  if (pvVar11 != ((undefined *)GEN_TOP(0x0))) {
    iVar3 = ((int)pvVar11 - (int)pppppcVar18) + 1;
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x18)),param_3,param_4,pppppcVar18,
                           (int)pvVar11 - (int)pppppcVar18,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))))));
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x18)),*puVar16,puVar16[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x2c)))));
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    puVar15 = &REFG(undefined, 0x115d624);
    if ((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14))) & 4) == 0) {
      puVar15 = &REFG(undefined, 0x115d620);
    }
    puVar16 = ((undefined4 *)GEN_TOP(F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x18)),*puVar16,puVar16[1],puVar15,1)));
    param_3 = *puVar16;
    pppppcVar18 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppcVar18 + iVar3)));
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x34)) - iVar3;
    (*(gen_size32 *)(gen_frame + 0x34)) = _MaxCount;
    param_4 = puVar16[1];
  }
  puVar16 = ((undefined4 *)GEN_TOP(F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x18)),param_3,param_4,pppppcVar18,_MaxCount,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))))));
  puVar16 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x18)),*puVar16,puVar16[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x2c)))));
  uVar4 = *puVar16;
  uVar5 = puVar16[1];
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) = 0;
  F_00eb7250(param_1,param_2,uVar4,uVar5,(undefined1)param_6,(*(undefined * PTR32 *)(gen_frame + 0x30)));
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0]);
  }
  ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0];
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x54))[0] = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppcVar6 & 0xffffff00)));
  if (0xf < (*(uint *)(gen_frame + 0x4c))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0]);
  }
  return param_2;
}

/* ref: FUN_00ec4420 */
GEN_LIB_GS GEN_FRAME uint F_00ec4420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char * param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xec4420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char * param_7 = (char *)(uintptr_t)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  int iVar7;
  char * pcVar8;
  undefined4 * puVar9;
  uint uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(uint *)(gen_frame + 0x20)) = param_8;
  (*(int *)(gen_frame + 0x14)) = param_5;
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0x4)))));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0);
  iVar7 = piVar2[1];
  if ((iVar7 != 0) && (iVar7 != -1)) {
    piVar2[1] = iVar7 - 1;
  }
  iVar7 = piVar2[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar7 != 0) & (uint)piVar2)));
  if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)));
  cVar1 = *param_7;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = 1;
  }
  else if ((cVar1 == '0') && ((param_7[1] == 'x' || (param_7[1] == 'X')))) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = 2;
  }
  else {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = 0;
  }
  ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
  if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
    ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
  }
  if (*(char *)ppppcVar6 != '\x7f') {
    ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
    if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
      ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
    }
    if ('\0' < *(char *)ppppcVar6) {
      if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
        (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
      }
      else {
        (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
      }
      cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      uVar10 = (*(uint *)(gen_frame + 0x20));
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < uVar10 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))))))) {
        uVar10 = uVar10 - (int)cVar1;
        iVar7 = ((*(uint *)(gen_frame + 0x20)) - uVar10) + 1;
        F_01051df1(param_7 + uVar10 + 1,iVar7,param_7 + uVar10,iVar7);
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
        param_7[uVar10] = '\0';
        if ('\0' < *((char *)GEN_TOP(((int)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1)))) {
          (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = ((char * PTR32 * PTR32 *)GEN_TOP(((int)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1)));
        }
        cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      }
    }
  }
  uVar10 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20)));
  if (((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x24))) < 0) || ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x24))) < 1 && (uVar10 == 0)))) ||
     (uVar10 <= (*(uint *)(gen_frame + 0x20)))) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar10 - (*(uint *)(gen_frame + 0x20));
  }
  uVar10 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x14))) & 0x1c0;
  pcVar8 = param_7;
  if (uVar10 != 0x40) {
    if (uVar10 == 0x100) {
      puVar9 = ((undefined4 *)GEN_TOP(F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x8)),param_3,param_4,param_7,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))))));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))));
      pcVar8 = param_7 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))));
      puVar9 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x18)),*puVar9,puVar9[1],(undefined1)param_6,iVar7)));
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    else {
      puVar9 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x18)),param_3,param_4,(undefined1)param_6,iVar7)));
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    iVar7 = 0;
  }
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) + 0)) = (char)uVar10;
  puVar9 = ((undefined4 *)GEN_TOP(F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,pcVar8,(*(uint *)(gen_frame + 0x20)),(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))))));
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x24))) = 0;
  F_00eb7250(param_1,param_2,uVar3,uVar4,(undefined1)param_6,iVar7);
  if (0xf < (*(uint *)(gen_frame + 0x38))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0]);
  }
  return param_2;
}

/* ref: FUN_00ec46b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec46b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec46b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ec0810(this GEN_EDX_FWD);
  if (uVar1 != 0xffffffff) {
    *param_1 = (char)uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00ec46d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec46d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec46d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x81))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00eacb60(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x81))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x81))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x81))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x20];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x20))) = (char)piVar3[0x20];
      *(char *)(piVar3 + 0x20) = (char)iVar1;
      goto LAB_00ec480f;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x81))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x81))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00eaca60(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x81))) == '\0') {
      uVar5 = F_00eaca30(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00ec480f: ;
  if ((char)piVar3[0x20] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x20] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x20] == '\0') {
            *(undefined1 *)(piVar6 + 0x20) = 1;
            *(undefined1 *)(piVar4 + 0x20) = 0;
            F_00eb99e0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x81))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x80))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x80))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x80))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x80))) = 1;
                *(undefined1 *)(piVar6 + 0x20) = 0;
                F_00eb1690(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x20) = (char)piVar4[0x20];
              *(undefined1 *)(piVar4 + 0x20) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x80))) = 1;
              F_00eb99e0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ec491c: ;
            *(undefined1 *)(piVar6 + 0x20) = 0;
          }
        }
        else {
          if ((char)piVar6[0x20] == '\0') {
            *(undefined1 *)(piVar6 + 0x20) = 1;
            *(undefined1 *)(piVar4 + 0x20) = 0;
            F_00eb1690(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x81))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x80))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x80))) == '\x01'))
            goto LAB_00ec491c;
            if (*((char *)GEN_TOP((*piVar6 + 0x80))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x80))) = 1;
              *(undefined1 *)(piVar6 + 0x20) = 0;
              F_00eb99e0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x20) = (char)piVar4[0x20];
            *(undefined1 *)(piVar4 + 0x20) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x80))) = 1;
            F_00eb1690(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x20) = 1;
  }
  piVar3[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(piVar3 + 0x1a GEN_EDX_ARG);
  F_0042c880(piVar3 + 4 GEN_EDX_ARG);
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ec49d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec49d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xec49d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x115d664);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115cab0));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  F_00ebd750(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  F_00eb2150(this_00 GEN_EDX_ARG);
  uVar1 = 0;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *((uint *)GEN_TOP(((int)this + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  return (uint)this;
}

/* ref: FUN_00ec4a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4a70(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xec4a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * this;
  uint uVar1;
  
  if (param_3 != 0) {
    *param_1 = (int)&REFG(undefined, 0x115d674);
    param_1[4] = (int)&REFG(undefined, 0x115d66c);
    param_1[0x18] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((*param_1 + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  param_1[2] = 0;
  param_1[3] = 0;
  this = param_1 + 6;
  F_00483f60(*((int *)GEN_TOP((*param_1 + 4))) + (int)param_1 GEN_EDX_FWD,this,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((param_1[4] + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((*param_1 + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP((*param_1 + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d014));
  F_00479880(this GEN_EDX_ARG);
  uVar1 = 0;
  *this = (int)(*(undefined * PTR32 (*)[15])REFP(0x11577d4));
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
  param_1[0x15] = 0;
  param_1[0x16] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00ec4b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xec4b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00ec0950(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ec4b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec4b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec4b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  return (uint)this;
}

/* ref: FUN_00ec4ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec4ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x6c))) + param_2 * 4;
}

/* ref: FUN_00ec4bd0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec4bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec4bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0x74)));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x78))));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x78))));
  }
  return 0;
}

/* ref: FUN_00ec4cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0x74))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00eba620(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0x70))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x70))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x74)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0x74))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec4d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x70))) == *((int *)GEN_TOP(((int)this + 0x74)))) {
    F_00ec4cb0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) + *((int *)GEN_TOP(((int)this + 0x70))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x70))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec4d80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec4d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec4d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return uVar1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) == *((int *)GEN_TOP(((int)this + 0x7c)))) {
    F_00ec4cb0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x7c))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + *((int *)GEN_TOP(((int)this + 0x78))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x78))) = *((int *)GEN_TOP(((int)this + 0x78))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec4de0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec4de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec4de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 4;
  uVar1 = F_00eba6b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,4,0);
  *((uint *)GEN_TOP(((int)this + 0x110))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6a8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d698));
  return (uint)this;
}

/* ref: FUN_00ec4e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  return (uint)this;
}

/* ref: FUN_00ec4ec0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec4ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca220((int)this - 0x11c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec4ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec4ef0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec4ef0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec4ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec4f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec4f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec4f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x114))) < param_1) {
    uVar4 = F_00eba6b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x110))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x10c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x10c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x110))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x114)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x10c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x114))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x110))) == *((int *)GEN_TOP(((int)this + 0x114)))) {
    F_00ec4f30(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x114))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10c))) + *((int *)GEN_TOP(((int)this + 0x110))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x110))) = *((int *)GEN_TOP(((int)this + 0x110))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec50b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec50b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec50b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec5020(((undefined *)GEN_TOP(((int)this - 0x118))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec50e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec50e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 2;
  uVar1 = F_00eba750(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6c0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d6b0));
  return (uint)this;
}

/* ref: FUN_00ec5180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca260((int)this - 0xbc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec5190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec51b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec51b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec51b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec51f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec51f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec51f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0xb4))) < param_1) {
    uVar4 = F_00eba750(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0xb0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0xac))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0xac))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0xb0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xb4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xac)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0xac))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0xb4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec52e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec52e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec52e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xb0))) == *((int *)GEN_TOP(((int)this + 0xb4)))) {
    F_00ec51f0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xb4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xac))) + *((int *)GEN_TOP(((int)this + 0xb0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0xb0))) = *((int *)GEN_TOP(((int)this + 0xb0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec52e0(((undefined *)GEN_TOP(((int)this - 0xb8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec53a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec53a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec53a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 7;
  uVar1 = F_00eba7f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,7,0);
  *((uint *)GEN_TOP(((int)this + 0x1a0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6d8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined * PTR32 (*)[3])REFP(0x115d6c8));
  return (uint)this;
}

/* ref: FUN_00ec5440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca2a0((int)this - 0x1ac GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec5450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec5470 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec5470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec5470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec54b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec54b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec54b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x1a4))) < param_1) {
    uVar4 = F_00eba7f0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x1a0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x19c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x19c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x1a0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1a4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x19c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x19c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x1a4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec55a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec55a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec55a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1a0))) == *((int *)GEN_TOP(((int)this + 0x1a4)))) {
    F_00ec54b0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1a4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x19c))) + *((int *)GEN_TOP(((int)this + 0x1a0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x1a0))) = *((int *)GEN_TOP(((int)this + 0x1a0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec55a0(((undefined *)GEN_TOP(((int)this - 0x1a8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec5660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 3;
  uVar1 = F_00eba890(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,3,0);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xec))) = (*(undefined * PTR32 (*)[3])REFP(0x115d6e0));
  return (uint)this;
}

/* ref: FUN_00ec5700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca2e0((int)this - 0xec GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec5710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec5730 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec5730(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec5730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0xe4))) < param_1) {
    uVar4 = F_00eba890(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0xe0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0xdc))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0xdc))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0xe0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xe4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xdc)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0xdc))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0xe4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xe0))) == *((int *)GEN_TOP(((int)this + 0xe4)))) {
    F_00ec5770(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xe4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + *((int *)GEN_TOP(((int)this + 0xe0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0xe0))) = *((int *)GEN_TOP(((int)this + 0xe0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec58f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec58f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec58f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec5860(((undefined *)GEN_TOP(((int)this - 0xe8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec5920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 9;
  uVar1 = F_00eba930(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,9,0);
  *((uint *)GEN_TOP(((int)this + 0x200))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d708));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d6f8));
  return (uint)this;
}

/* ref: FUN_00ec59c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec59c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec59c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca320((int)this - 0x20c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec59d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec59d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec59d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec59f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec59f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec59f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x204))) < param_1) {
    uVar4 = F_00eba930(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x200))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x1fc))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x1fc))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x200))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x204)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x1fc)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x1fc))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x204))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x200))) == *((int *)GEN_TOP(((int)this + 0x204)))) {
    F_00ec5a30(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x204))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1fc))) + *((int *)GEN_TOP(((int)this + 0x200))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x200))) = *((int *)GEN_TOP(((int)this + 0x200))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec5b20(((undefined *)GEN_TOP(((int)this - 0x208))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec5be0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 10;
  uVar1 = F_00eba9d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,10,0);
  *((uint *)GEN_TOP(((int)this + 0x230))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x23c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d720));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x23c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d710));
  return (uint)this;
}

/* ref: FUN_00ec5c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca360((int)this - 0x23c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec5c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec5cb0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec5cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec5cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x234))) < param_1) {
    uVar4 = F_00eba9d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x230))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x22c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x22c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x230))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x234)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x22c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x22c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x234))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x230))) == *((int *)GEN_TOP(((int)this + 0x234)))) {
    F_00ec5cf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x234))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22c))) + *((int *)GEN_TOP(((int)this + 0x230))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x230))) = *((int *)GEN_TOP(((int)this + 0x230))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec5de0(((undefined *)GEN_TOP(((int)this - 0x238))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec5ea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec5ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 3;
  uVar1 = F_00ebaa70(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,3,0);
  *((uint *)GEN_TOP(((int)this + 0xb4))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  return (uint)this;
}

/* ref: FUN_00ec5ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec5ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xac))) + param_2 * 4;
}

/* ref: FUN_00ec5f30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec5f30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec5f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec5f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
  if (*((int *)GEN_TOP(((int)this + 0xb8))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0xb4)));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec5f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0xb8))));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec5fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec5fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec5fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0xb8))));
  }
  return 0;
}

/* ref: FUN_00ec6040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0xb4))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00ebaa70(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0xb0))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xac))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0xb0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xac)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xb4)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xac))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0xb4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec60e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec60e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec60e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xb0))) == *((int *)GEN_TOP(((int)this + 0xb4)))) {
    F_00ec6040(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xb4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xac))) + *((int *)GEN_TOP(((int)this + 0xb0))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0xb0))) = *((int *)GEN_TOP(((int)this + 0xb0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return uVar1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xb8))) == *((int *)GEN_TOP(((int)this + 0xbc)))) {
    F_00ec6040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xbc))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + *((int *)GEN_TOP(((int)this + 0xb8))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0xb8))) = *((int *)GEN_TOP(((int)this + 0xb8))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec61a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec61a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec61a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 8;
  uVar1 = F_00ebab10(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,8,0);
  *((uint *)GEN_TOP(((int)this + 0x1d0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1dc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d750));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1dc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d740));
  return (uint)this;
}

/* ref: FUN_00ec6240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca3d0((int)this - 0x1dc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec6250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec6270 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec6270(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec62b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec62b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec62b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x1d4))) < param_1) {
    uVar4 = F_00ebab10(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x1d0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x1cc))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x1cc))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x1d0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1d4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x1cc)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x1cc))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x1d4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec63a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec63a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec63a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1d0))) == *((int *)GEN_TOP(((int)this + 0x1d4)))) {
    F_00ec62b0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1d4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1cc))) + *((int *)GEN_TOP(((int)this + 0x1d0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x1d0))) = *((int *)GEN_TOP(((int)this + 0x1d0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec63a0(((undefined *)GEN_TOP(((int)this - 0x1d8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec6460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 6;
  uVar1 = F_00ebabb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,6,0);
  *((uint *)GEN_TOP(((int)this + 0x170))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x17c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d768));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x17c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d758));
  return (uint)this;
}

/* ref: FUN_00ec6500 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca410((int)this - 0x17c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec6510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec6530 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec6530(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x174))) < param_1) {
    uVar4 = F_00ebabb0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x170))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x16c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x16c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x170))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x174)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x16c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x16c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x174))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x170))) == *((int *)GEN_TOP(((int)this + 0x174)))) {
    F_00ec6570(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x174))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x16c))) + *((int *)GEN_TOP(((int)this + 0x170))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x170))) = *((int *)GEN_TOP(((int)this + 0x170))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec66f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec66f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec66f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec6660(((undefined *)GEN_TOP(((int)this - 0x178))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec6720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 4;
  uVar1 = F_00ebac50(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,4,0);
  *((uint *)GEN_TOP(((int)this + 0xd4))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  return (uint)this;
}

/* ref: FUN_00ec6770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xcc))) + param_2 * 4;
}

/* ref: FUN_00ec67b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec67b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec67b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec67d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec67d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec67d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0xd8)));
  if (*((int *)GEN_TOP(((int)this + 0xd8))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0xd4)));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xd8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0xd8))));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xd8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0xd8))));
  }
  return 0;
}

/* ref: FUN_00ec68c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec68c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec68c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0xd4))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00ebac50(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0xd0))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0xd0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xcc)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xd4)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xcc))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0xd4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xd0))) == *((int *)GEN_TOP(((int)this + 0xd4)))) {
    F_00ec68c0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xd4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + *((int *)GEN_TOP(((int)this + 0xd0))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0xd0))) = *((int *)GEN_TOP(((int)this + 0xd0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec69b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec69b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec69b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec69d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec69d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xd8))) == *((int *)GEN_TOP(((int)this + 0xdc)))) {
    F_00ec68c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xdc))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6a20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x980))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x984))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x988))) = 0x31;
  uVar1 = F_00ebacf0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x31,0);
  *((uint *)GEN_TOP(((int)this + 0x980))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d798));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d788));
  return (uint)this;
}

/* ref: FUN_00ec6ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca480((int)this - 0x98c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec6ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec6af0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec6af0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x984))) < param_1) {
    uVar4 = F_00ebacf0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x980))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x97c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x97c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x980))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x984)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x97c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x97c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x984))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x980))) == *((int *)GEN_TOP(((int)this + 0x984)))) {
    F_00ec6b30(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x984))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x97c))) + *((int *)GEN_TOP(((int)this + 0x980))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x980))) = *((int *)GEN_TOP(((int)this + 0x980))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec6c20(((undefined *)GEN_TOP(((int)this - 0x988))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec6ce0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x94))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  return (uint)this;
}

/* ref: FUN_00ec6d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x8c))) + param_2 * 4;
}

/* ref: FUN_00ec6d70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec6d70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec6d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec6d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
  if (*((int *)GEN_TOP(((int)this + 0x98))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0x94)));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x98))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x98))));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x98))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x98))));
  }
  return 0;
}

/* ref: FUN_00ec6e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0x94))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00ebad90(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0x90))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x90))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x8c)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x94)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0x94))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x90))) == *((int *)GEN_TOP(((int)this + 0x94)))) {
    F_00ec6e80(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x94))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + *((int *)GEN_TOP(((int)this + 0x90))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x90))) = *((int *)GEN_TOP(((int)this + 0x90))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6f70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec6f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec6f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x98))) == *((int *)GEN_TOP(((int)this + 0x9c)))) {
    F_00ec6e80(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x9c))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + *((int *)GEN_TOP(((int)this + 0x98))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x98))) = *((int *)GEN_TOP(((int)this + 0x98))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x350))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x354))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x358))) = 0x10;
  uVar1 = F_00ebae30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x10,0);
  *((uint *)GEN_TOP(((int)this + 0x350))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x35c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7c8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x35c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d7b8));
  return (uint)this;
}

/* ref: FUN_00ec7080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca4f0((int)this - 0x35c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec7090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec70b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec70b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec70b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec70f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec70f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec70f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x354))) < param_1) {
    uVar4 = F_00ebae30(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x34c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x34c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x350))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x354)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x34c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x34c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x354))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec71e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec71e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec71e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x350))) == *((int *)GEN_TOP(((int)this + 0x354)))) {
    F_00ec70f0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x354))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34c))) + *((int *)GEN_TOP(((int)this + 0x350))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x350))) = *((int *)GEN_TOP(((int)this + 0x350))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec71e0(((undefined *)GEN_TOP(((int)this - 0x358))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec72a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec72a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec72a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c8))) = 0x1d;
  uVar1 = F_00ebaed0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x1d,0);
  *((uint *)GEN_TOP(((int)this + 0x5c0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5cc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7e0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5cc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d7d0));
  return (uint)this;
}

/* ref: FUN_00ec7340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca530((int)this - 0x5cc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec7350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec7370 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec7370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec7370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec73b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec73b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec73b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x5c4))) < param_1) {
    uVar4 = F_00ebaed0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x5c0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x5bc))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x5bc))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x5c0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x5c4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x5bc)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x5bc))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x5c4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec74a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec74a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec74a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c0))) == *((int *)GEN_TOP(((int)this + 0x5c4)))) {
    F_00ec73b0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x5c4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5bc))) + *((int *)GEN_TOP(((int)this + 0x5c0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x5c0))) = *((int *)GEN_TOP(((int)this + 0x5c0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec74a0(((undefined *)GEN_TOP(((int)this - 0x5c8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec7560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x2510))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2514))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2518))) = 0xc4;
  uVar1 = F_00ebaf70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xc4,0);
  *((uint *)GEN_TOP(((int)this + 0x2510))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x251c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7f8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x251c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d7e8));
  return (uint)this;
}

/* ref: FUN_00ec7600 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca570((int)this - 0x251c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec7610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec7630 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec7630(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec7630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x2514))) < param_1) {
    uVar4 = F_00ebaf70(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x2510))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x250c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x250c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x2510))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x2514)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x250c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x250c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x2514))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x2510))) == *((int *)GEN_TOP(((int)this + 0x2514)))) {
    F_00ec7670(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x2514))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x250c))) + *((int *)GEN_TOP(((int)this + 0x2510))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x2510))) = *((int *)GEN_TOP(((int)this + 0x2510))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec77f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec77f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec77f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec7760(((undefined *)GEN_TOP(((int)this - 0x2518))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec7820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0xc;
  uVar1 = F_00ebb010(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xc,0);
  *((uint *)GEN_TOP(((int)this + 0x290))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x29c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d810));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x29c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d800));
  return (uint)this;
}

/* ref: FUN_00ec78c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec78c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec78c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca5b0((int)this - 0x29c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec78d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec78d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec78d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec78f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec78f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec78f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x294))) < param_1) {
    uVar4 = F_00ebb010(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x290))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x28c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x28c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x290))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x294)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x28c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x28c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x294))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x290))) == *((int *)GEN_TOP(((int)this + 0x294)))) {
    F_00ec7930(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x294))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28c))) + *((int *)GEN_TOP(((int)this + 0x290))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x290))) = *((int *)GEN_TOP(((int)this + 0x290))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec7a20(((undefined *)GEN_TOP(((int)this - 0x298))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec7ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x418))) = 0x14;
  uVar1 = F_00ebb0b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x14,0);
  *((uint *)GEN_TOP(((int)this + 0x410))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x41c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d828));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x41c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d818));
  return (uint)this;
}

/* ref: FUN_00ec7b80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca5f0((int)this - 0x41c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec7b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec7bb0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec7bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec7bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x414))) < param_1) {
    uVar4 = F_00ebb0b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x410))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x40c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x40c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x410))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x414)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x40c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x40c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x414))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x410))) == *((int *)GEN_TOP(((int)this + 0x414)))) {
    F_00ec7bf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x414))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40c))) + *((int *)GEN_TOP(((int)this + 0x410))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x410))) = *((int *)GEN_TOP(((int)this + 0x410))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec7ce0(((undefined *)GEN_TOP(((int)this - 0x418))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec7da0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x3b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3b8))) = 0x12;
  uVar1 = F_00ebb150(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x12,0);
  *((uint *)GEN_TOP(((int)this + 0x3b0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3bc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d840));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3bc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d830));
  return (uint)this;
}

/* ref: FUN_00ec7e40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec7e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca630((int)this - 0x3bc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec7e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec7e70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec7e70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec7e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x3b4))) < param_1) {
    uVar4 = F_00ebb150(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x3b0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x3ac))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x3ac))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x3b0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x3b4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x3ac)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x3ac))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x3b4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec7fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec7fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x3b0))) == *((int *)GEN_TOP(((int)this + 0x3b4)))) {
    F_00ec7eb0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x3b4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3ac))) + *((int *)GEN_TOP(((int)this + 0x3b0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x3b0))) = *((int *)GEN_TOP(((int)this + 0x3b0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec7fa0(((undefined *)GEN_TOP(((int)this - 0x3b8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec8060 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x2f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f8))) = 0xe;
  uVar1 = F_00ebb1f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xe,0);
  *((uint *)GEN_TOP(((int)this + 0x2f0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2fc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d858));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2fc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d848));
  return (uint)this;
}

/* ref: FUN_00ec8100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca670((int)this - 0x2fc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec8110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec8130 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec8130(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec8130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x2f4))) < param_1) {
    uVar4 = F_00ebb1f0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x2f0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x2ec))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x2ec))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x2f0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x2f4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x2ec)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x2ec))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x2f4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x2f0))) == *((int *)GEN_TOP(((int)this + 0x2f4)))) {
    F_00ec8170(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x2f4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2ec))) + *((int *)GEN_TOP(((int)this + 0x2f0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x2f0))) = *((int *)GEN_TOP(((int)this + 0x2f0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec82f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec82f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec82f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec8260(((undefined *)GEN_TOP(((int)this - 0x2f8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec8320 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x470))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x474))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x478))) = 0x16;
  uVar1 = F_00ebb290(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x16,0);
  *((uint *)GEN_TOP(((int)this + 0x470))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x47c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d870));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x47c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d860));
  return (uint)this;
}

/* ref: FUN_00ec83c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec83c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec83c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca6b0((int)this - 0x47c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec83d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec83d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec83d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec83f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec83f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec83f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x474))) < param_1) {
    uVar4 = F_00ebb290(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x470))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x46c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x46c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x470))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x474)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x46c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x46c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x474))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x470))) == *((int *)GEN_TOP(((int)this + 0x474)))) {
    F_00ec8430(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x474))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x46c))) + *((int *)GEN_TOP(((int)this + 0x470))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x470))) = *((int *)GEN_TOP(((int)this + 0x470))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec85b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec85b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec85b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec8520(((undefined *)GEN_TOP(((int)this - 0x478))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec85e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec85e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec85e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x7a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a8))) = 0x27;
  uVar1 = F_00ebb330(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x27,0);
  *((uint *)GEN_TOP(((int)this + 0x7a0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7ac))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d888));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7ac))) = (*(undefined * PTR32 (*)[3])REFP(0x115d878));
  return (uint)this;
}

/* ref: FUN_00ec8680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca6f0((int)this - 0x7ac GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec8690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec86b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec86b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec86b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec86f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec86f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec86f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x7a4))) < param_1) {
    uVar4 = F_00ebb330(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x7a0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x79c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x79c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x7a0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x7a4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x79c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x79c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x7a4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec87e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec87e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec87e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x7a0))) == *((int *)GEN_TOP(((int)this + 0x7a4)))) {
    F_00ec86f0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x7a4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x79c))) + *((int *)GEN_TOP(((int)this + 0x7a0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x7a0))) = *((int *)GEN_TOP(((int)this + 0x7a0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec87e0(((undefined *)GEN_TOP(((int)this - 0x7a8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec88a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec88a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec88a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x4a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4a8))) = 0x17;
  uVar1 = F_00ebb3d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x17,0);
  *((uint *)GEN_TOP(((int)this + 0x4a0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4ac))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4ac))) = (*(undefined * PTR32 (*)[3])REFP(0x115d890));
  return (uint)this;
}

/* ref: FUN_00ec8940 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca730((int)this - 0x4ac GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec8950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec8970 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec8970(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec8970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec89b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x4a4))) < param_1) {
    uVar4 = F_00ebb3d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x4a0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x49c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x49c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x4a0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x4a4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x49c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x49c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x4a4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4a0))) == *((int *)GEN_TOP(((int)this + 0x4a4)))) {
    F_00ec89b0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x4a4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x49c))) + *((int *)GEN_TOP(((int)this + 0x4a0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x4a0))) = *((int *)GEN_TOP(((int)this + 0x4a0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec8aa0(((undefined *)GEN_TOP(((int)this - 0x4a8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec8b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xaa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xaa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xaa8))) = 0x37;
  uVar1 = F_00ebb470(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x37,0);
  *((uint *)GEN_TOP(((int)this + 0xaa0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xaac))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8b8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xaac))) = (*(undefined * PTR32 (*)[3])REFP(0x115d8a8));
  return (uint)this;
}

/* ref: FUN_00ec8c00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca770((int)this - 0xaac GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec8c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec8c30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec8c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec8c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0xaa4))) < param_1) {
    uVar4 = F_00ebb470(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0xaa0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0xa9c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0xa9c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0xaa0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xaa4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xa9c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0xa9c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0xaa4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xaa0))) == *((int *)GEN_TOP(((int)this + 0xaa4)))) {
    F_00ec8c70(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xaa4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa9c))) + *((int *)GEN_TOP(((int)this + 0xaa0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0xaa0))) = *((int *)GEN_TOP(((int)this + 0xaa0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec8d60(((undefined *)GEN_TOP(((int)this - 0xaa8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec8e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x890))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x894))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x898))) = 0x2c;
  uVar1 = F_00ebb510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x2c,0);
  *((uint *)GEN_TOP(((int)this + 0x890))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x89c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8d0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x89c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d8c0));
  return (uint)this;
}

/* ref: FUN_00ec8ec0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec8ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca7b0((int)this - 0x89c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec8ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec8ef0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec8ef0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec8ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec8f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec8f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x894))) < param_1) {
    uVar4 = F_00ebb510(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x890))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x88c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x88c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x890))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x894)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x88c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x88c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x894))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x890))) == *((int *)GEN_TOP(((int)this + 0x894)))) {
    F_00ec8f30(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x894))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88c))) + *((int *)GEN_TOP(((int)this + 0x890))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x890))) = *((int *)GEN_TOP(((int)this + 0x890))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec90b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec90b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec90b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec9020(((undefined *)GEN_TOP(((int)this - 0x898))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec90e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec90e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec90e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xbc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc8))) = 0x3d;
  uVar1 = F_00ebb5b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x3d,0);
  *((uint *)GEN_TOP(((int)this + 0xbc0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbcc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8e8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbcc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d8d8));
  return (uint)this;
}

/* ref: FUN_00ec9180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca7f0((int)this - 0xbcc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec9190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec91b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec91b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec91b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec91f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec91f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec91f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0xbc4))) < param_1) {
    uVar4 = F_00ebb5b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0xbc0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0xbbc))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0xbbc))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0xbc0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xbc4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0xbbc)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0xbbc))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0xbc4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec92e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec92e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec92e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xbc0))) == *((int *)GEN_TOP(((int)this + 0xbc4)))) {
    F_00ec91f0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xbc4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xbbc))) + *((int *)GEN_TOP(((int)this + 0xbc0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0xbc0))) = *((int *)GEN_TOP(((int)this + 0xbc0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec92e0(((undefined *)GEN_TOP(((int)this - 0xbc8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec93a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec93a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec93a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 800))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x324))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x328))) = 0xf;
  uVar1 = F_00ebb650(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xf,0);
  *((uint *)GEN_TOP(((int)this + 800))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x32c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d900));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x32c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d8f0));
  return (uint)this;
}

/* ref: FUN_00ec9440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca830((int)this - 0x32c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec9450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec9470 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec9470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec9470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec94b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec94b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec94b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x324))) < param_1) {
    uVar4 = F_00ebb650(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 800))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x31c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x31c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 800))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x324)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x31c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x31c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x324))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec95a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec95a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec95a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 800))) == *((int *)GEN_TOP(((int)this + 0x324)))) {
    F_00ec94b0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x324))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x31c))) + *((int *)GEN_TOP(((int)this + 800))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 800))) = *((int *)GEN_TOP(((int)this + 800))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec95a0(((undefined *)GEN_TOP(((int)this - 0x328))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec9660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x29c))) = 0x12;
  uVar1 = F_00ebb6f0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x12,0);
  *((uint *)GEN_TOP(((int)this + 0x294))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec96b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec96b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec96b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x28c))) + param_2 * 4;
}

/* ref: FUN_00ec96f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec96f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec96f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x298)));
  if (*((int *)GEN_TOP(((int)this + 0x298))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0x294)));
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x298))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x294))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x294))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x298))));
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec97a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec97a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x298))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x294))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x294))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x298))));
  }
  return 0;
}

/* ref: FUN_00ec9800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0x294))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00ebb6f0(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0x290))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28c))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x290))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x28c)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x294)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28c))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0x294))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec98a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec98a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec98a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x290))) == *((int *)GEN_TOP(((int)this + 0x294)))) {
    F_00ec9800(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x294))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28c))) + *((int *)GEN_TOP(((int)this + 0x290))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x290))) = *((int *)GEN_TOP(((int)this + 0x290))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec98f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec98f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec98f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x298))) == *((int *)GEN_TOP(((int)this + 0x29c)))) {
    F_00ec9800(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x29c))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x294))) + *((int *)GEN_TOP(((int)this + 0x298))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x298))) = *((int *)GEN_TOP(((int)this + 0x298))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x9b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b8))) = 0x32;
  uVar1 = F_00ebb790(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x32,0);
  *((uint *)GEN_TOP(((int)this + 0x9b0))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9bc))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d930));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9bc))) = (*(undefined * PTR32 (*)[3])REFP(0x115d920));
  return (uint)this;
}

/* ref: FUN_00ec9a00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca8a0((int)this - 0x9bc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec9a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00ec9a30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec9a30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec9a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ec9a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x9b4))) < param_1) {
    uVar4 = F_00ebb790(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x9b0))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x9ac))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x9ac))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x9b0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x9b4)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x9ac)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x9ac))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x9b4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x9b0))) == *((int *)GEN_TOP(((int)this + 0x9b4)))) {
    F_00ec9a70(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x9b4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9ac))) + *((int *)GEN_TOP(((int)this + 0x9b0))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x9b0))) = *((int *)GEN_TOP(((int)this + 0x9b0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ec9b60(((undefined *)GEN_TOP(((int)this - 0x9b8))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: FUN_00ec9c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x4f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4fc))) = 0x25;
  uVar1 = F_00ebb830(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0x25,0);
  *((uint *)GEN_TOP(((int)this + 0x4f4))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  return (uint)this;
}

/* ref: FUN_00ec9c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec9c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x4ec))) + param_2 * 4;
}

/* ref: FUN_00ec9cb0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ec9cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xec9cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x4f8)));
  if (*((int *)GEN_TOP(((int)this + 0x4f8))) != 0) {
    return *((uint *)GEN_TOP(((int)this + 0x4f4)));
  }
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x4f8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4f4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4f4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x4f8))));
  }
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x4f8))) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4f4))) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4f4))) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x4f8))));
  }
  return 0;
}

/* ref: FUN_00ec9dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*((uint *)GEN_TOP(((int)this + 0x4f4))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00ebb830(this GEN_EDX_FWD,param_1,0)));
    uVar5 = 0;
    puVar6 = puVar4;
    if (*((int *)GEN_TOP(((int)this + 0x4f0))) != 0) {
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4ec))) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x4f0))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x4ec)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x4f4)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
    *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar2 - 1) * -0x10 - 0x20;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4ec))) = puVar4;
    *((uint *)GEN_TOP(((int)this + 0x4f4))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4f0))) == *((int *)GEN_TOP(((int)this + 0x4f4)))) {
    F_00ec9dc0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x4f4))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4ec))) + *((int *)GEN_TOP(((int)this + 0x4f0))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x4f0))) = *((int *)GEN_TOP(((int)this + 0x4f0))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9eb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ec9eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4f8))) == *((int *)GEN_TOP(((int)this + 0x4fc)))) {
    F_00ec9dc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x4fc))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4f4))) + *((int *)GEN_TOP(((int)this + 0x4f8))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x4f8))) = *((int *)GEN_TOP(((int)this + 0x4f8))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9f20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1970))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1974))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1978))) = 0x86;
  uVar1 = F_00ebb8d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x86,0);
  *((uint *)GEN_TOP(((int)this + 0x1970))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x197c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d960));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x197c))) = (*(undefined * PTR32 (*)[3])REFP(0x115d950));
  return (uint)this;
}

/* ref: FUN_00ec9fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ec9fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00eca910((int)this - 0x197c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00ec9fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ec9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xec9fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this - 8)));
  if (*((int *)GEN_TOP(((int)this - 8))) != 0) {
    return *((uint *)GEN_TOP(((int)this - 0xc)));
  }
  return 0;
}

/* ref: FUN_00eca000 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00eca000(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    param_1[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    param_1[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    param_1[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00eca040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeca040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*((uint *)GEN_TOP(((int)this + 0x1974))) < param_1) {
    uVar4 = F_00ebb8d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x1970))) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x10)));
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x196c))) + (-0x10 - uVar4);
        if (puVar7 != ((undefined4 *)GEN_TOP(0x10))) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 4)));
          puVar7[-2] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 8)));
          puVar7[-1] = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0xc)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)puVar7 + iVar1 + 0x10)));
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 0x196c))) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *((uint *)GEN_TOP(((int)this + 0x1970))));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1974)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x196c)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *((int *)GEN_TOP((iVar2 - 8))) = iVar1;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2 - 0x10;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + (iVar1 - 1) * -0x20 - 0x30;
    *((uint *)GEN_TOP(((int)this + 0x196c))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x1974))) = param_1;
  }
  return param_1;
}

/* ref: FUN_00eca130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeca130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1970))) == *((int *)GEN_TOP(((int)this + 0x1974)))) {
    F_00eca040(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1974))) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x196c))) + *((int *)GEN_TOP(((int)this + 0x1970))) * 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP((param_1 + 8)));
    puVar1[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  }
  *((int *)GEN_TOP(((int)this + 0x1970))) = *((int *)GEN_TOP(((int)this + 0x1970))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00eca1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeca1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00eca130(((undefined *)GEN_TOP(((int)this - 0x1978))) GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP(((int)this - 0xc))) - 0x14 + *((int *)GEN_TOP(((int)this - 8))) * 0x14;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x47] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x2f] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca2a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x6b] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca2e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x3b] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x83] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x8f] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca3a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x77] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca410(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x5f] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_DB_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca480(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x263] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca4c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BA_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0xd7] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BN_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x173] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_ME_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x947] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_M_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca5b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0xa7] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BE_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x107] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BC_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca630(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0xef] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_O_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0xbf] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BG_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca6b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x11f] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_CH_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca6f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x1eb] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_BH_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca730(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[299] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_DH_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x2ab] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_CM_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca7b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x227] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_DN_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x2f3] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_P_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca830(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0xcb] = (*(undefined * PTR32 (*)[3])REFP(0x1159910))
  ;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_DC_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x26f] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca8e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SetParameterInfoContainer_IG_WorkDefinitions_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eca910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeca910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[0x65f] =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00eca950 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00eca950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeca950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0xb5)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00eca950(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_0042c880(piVar3 + 0x18 GEN_EDX_ARG);
    F_0042c880(piVar3 + 3 GEN_EDX_ARG);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0xb5)));
  }
  return;
}

/* ref: FUN_00eca9b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00eca9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeca9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x81)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00eca9b0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    piVar3[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(piVar3 + 0x1a GEN_EDX_ARG);
    F_0042c880(piVar3 + 4 GEN_EDX_ARG);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x81)));
  }
  return;
}

/* ref: FUN_00ecaa10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ecaa10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecaa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00ecaa40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ecaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xecaa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf7 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecaa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecaa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d964),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf6 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecab00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d968),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xecab80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d96c),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf4 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecac00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xecac00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d970),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf3 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecac80(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(double param_7, double gen_a6))
{
  GEN_ENTER(0xecac80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(double param_7 = (double)gen_a6;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  iVar1 = *((int *)GEN_TOP((param_5 + 0x1c)));
  uVar6 = 0;
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x18)));
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x0)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x0));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x0)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x0)));
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x14)));
  (*(uint *)(gen_frame + 0x4)) = 0;
  dVar8 = param_7;
  if (((uVar4 & 0x3000) == 0x2000) &&
     (bVar7 = GEN_ISNAN(param_7 * REFG(double, 0x1088108)) || GEN_ISNAN(param_7),
     bVar7 == (bVar7 || param_7 * REFG(double, 0x1088108) == param_7))) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0x4))) break;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecad92;
      while (9 < uVar5) {
LAB_00ecad92: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecadb8;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecadb8: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x78)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x79));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x79)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x7a));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = ((undefined2 *)GEN_TOP(((int)puVar2 + 1)));
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *(char *)(puVar2 + 1) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x78));
  *((undefined1 *)GEN_TOP(((int)puVar2 + 3))) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0xc));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x0)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  return param_2;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf2 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecae80(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(double param_7, double gen_a6))
{
  GEN_ENTER(0xecae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(double param_7 = (double)gen_a6;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  iVar1 = *((int *)GEN_TOP((param_5 + 0x1c)));
  uVar6 = 0;
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x18)));
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x0)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x0));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x0)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x0)));
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x14)));
  (*(uint *)(gen_frame + 0x4)) = 0;
  dVar8 = param_7;
  if ((uVar4 & 0x3000) == 0x2000) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0x4))) break;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecaf80;
      while (9 < uVar5) {
LAB_00ecaf80: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecafa6;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecafa6: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x78)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x79));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x79)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x7a));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = ((undefined2 *)GEN_TOP(((int)puVar2 + 1)));
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  *(undefined1 *)(puVar2 + 1) = 0x4c;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *((char *)GEN_TOP(((int)puVar2 + 3))) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x78));
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0xc));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x0)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  return param_2;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf11 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_SUSPECT(0xecb0e0u, "_Var4");
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  int iVar1;
  code * pcVar2;
  uint * puVar3;
  undefined4 _Var4;
  uint uVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * p_Var10;
  
  iVar1 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  if ((*((uint *)GEN_TOP(((*(int *)&gen_args[5]) + 0x14))) & 0x4000) == 0) {
    puVar3 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) = 0;
    uVar8 = *puVar3;
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = uVar8;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
    if (*((int *)GEN_TOP((uVar8 + 4))) != -1) {
      *((int *)GEN_TOP((uVar8 + 4))) = *((int *)GEN_TOP((uVar8 + 4))) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    p_Var10 = &(*(undefined4 *)(gen_frame + 0x18));
    uVar8 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x3c)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar1 + 0x14))),&(*(undefined4 *)(gen_frame + 0x1c)));
    uVar8 = F_0105144a(((undefined1 *)(gen_frame + 0x3c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar8,p_Var10);
    (*(int *)((char *)&(_Var4))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))));
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
      iVar1 = *((int *)GEN_TOP(((*(int *)((char *)&(_Var4))) + 4)));
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *((int *)GEN_TOP(((*(int *)((char *)&(_Var4))) + 4))) = iVar1 - 1;
      }
      iVar1 = *((int *)GEN_TOP(((*(int *)((char *)&(_Var4))) + 4)));
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (*(int *)((char *)&(_Var4))))));
      if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
      }
    }
    if ((((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x3c))) || ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) != 0)) || (1 < uVar8)) {
      uVar8 = (*(uint *)(gen_frame + 0x10));
    }
  }
  else {
    uVar8 = **((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = uVar8;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
    if (*((int *)GEN_TOP((uVar8 + 4))) != -1) {
      *((int *)GEN_TOP((uVar8 + 4))) = *((int *)GEN_TOP((uVar8 + 4))) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    piVar7 = ((int *)GEN_TOP(F_00ebe910(&(*(undefined4 *)(gen_frame + 0x1c)))));
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0);
    iVar1 = *((int *)GEN_TOP((uVar8 + 4)));
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *((int *)GEN_TOP((uVar8 + 4))) = iVar1 - 1;
    }
    iVar1 = *((int *)GEN_TOP((uVar8 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar8)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x10)));
    (*(uint *)(gen_frame + 0x34)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x30)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 2)) << 0x10)));
    (*pcVar2)(piVar7,((undefined4 *)(gen_frame + 0x40)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)),0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x54))) {
      F_00406ad0(((undefined4 *)(gen_frame + 0x40))[0]);
    }
    F_00a17030(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)),0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x54))) {
      F_00406ad0(((undefined4 *)(gen_frame + 0x40))[0]);
    }
    uVar5 = (*(uint *)(gen_frame + 0x34));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
    if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
      puVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    }
    uVar8 = F_00ec3360(&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),2,puVar9);
    if (0xf < uVar5) {
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    }
  }
  bVar6 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar6 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if ((int)uVar8 < 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    *((bool *)GEN_TOP((*(undefined4 *)(gen_frame + 0x4)))) = uVar8 != 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x8));
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  undefined2 * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  puVar3 = (*(undefined2 * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar6 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar6 + 4))) != -1) {
    *((int *)GEN_TOP((uVar6 + 4))) = *((int *)GEN_TOP((uVar6 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  uVar5 = F_00ec1bc0(this,&(*(char *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0xc)));
  uVar6 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar6 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar6 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar6 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x15));
  if ((*(char *)(gen_frame + 0x14)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x14));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x0)),uVar5,&(*(int *)(gen_frame + 0x4)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if ((((*(char * PTR32 *)(gen_frame + 0x0)) == pcVar8) || ((*(int *)(gen_frame + 0x4)) != 0)) || (0xffff < uVar6)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    if ((*(char *)(gen_frame + 0x14)) == '-') {
      uVar6 = -uVar6;
    }
    *puVar3 = (short)uVar6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf9 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar6 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar6 + 4))) != -1) {
    *((int *)GEN_TOP((uVar6 + 4))) = *((int *)GEN_TOP((uVar6 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  uVar5 = F_00ec1bc0(this,&(*(char *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0xc)));
  uVar6 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar6 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar6 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar6 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x15));
  if ((*(char *)(gen_frame + 0x14)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x14));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x0)),uVar5,&(*(int *)(gen_frame + 0x4)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if (((*(char * PTR32 *)(gen_frame + 0x0)) == pcVar8) || ((*(int *)(gen_frame + 0x4)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    if ((*(char *)(gen_frame + 0x14)) == '-') {
      uVar6 = -uVar6;
    }
    *puVar3 = uVar6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf8 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar5 + 4))) != -1) {
    *((int *)GEN_TOP((uVar5 + 4))) = *((int *)GEN_TOP((uVar5 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x4));
  uVar5 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0xc)));
  uVar6 = F_01051600(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar5 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0x4)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    *puVar3 = uVar6;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf7 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar5 + 4))) != -1) {
    *((int *)GEN_TOP((uVar5 + 4))) = *((int *)GEN_TOP((uVar5 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x4));
  uVar5 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0xc)));
  uVar6 = F_0105144a(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar5 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0x4)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    *puVar3 = uVar6;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf6 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  ulonglong * puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  int * piVar8;
  
  puVar3 = (*(ulonglong * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar5 + 4))) != -1) {
    *((int *)GEN_TOP((uVar5 + 4))) = *((int *)GEN_TOP((uVar5 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0xc));
  uVar5 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0x4)));
  uVar7 = F_010516a5(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x4));
  if ((*(uint *)(gen_frame + 0x4)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar5 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0xc)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    *puVar3 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  uint * puVar1;
  int iVar2;
  ulonglong * puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  int * piVar8;
  
  puVar3 = (*(ulonglong * PTR32 *)&gen_args[7]);
  iVar2 = (*(int *)&gen_args[5]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar5 + 4))) != -1) {
    *((int *)GEN_TOP((uVar5 + 4))) = *((int *)GEN_TOP((uVar5 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0xc));
  uVar5 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),*((undefined4 *)GEN_TOP((iVar2 + 0x14))),&(*(uint *)(gen_frame + 0x4)));
  uVar7 = F_01051782(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x4));
  if ((*(uint *)(gen_frame + 0x4)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar5 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar5 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0xc)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)(gen_frame + 0x8)) | 2;
  }
  else {
    *puVar3 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf1 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecba60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecba60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  puVar4 = (*(uint * PTR32 *)&gen_args[7]);
  puVar3 = (*(uint * PTR32 *)&gen_args[6]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  puVar1 = *((uint * PTR32 *)GEN_TOP(((*(int *)&gen_args[5]) + 0x30)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar7 = *puVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar7 + 4))) != -1) {
    *((int *)GEN_TOP((uVar7 + 4))) = *((int *)GEN_TOP((uVar7 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar6 = F_00ec1bc0(this,((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),0x800,&(*(uint *)(gen_frame + 0x8)));
  uVar7 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((uVar7 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar7 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar7 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar7)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
    }
  }
  uVar7 = F_0105144a(((undefined1 *)(gen_frame + 0x10)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar6,&(*(int *)(gen_frame + 0x4)));
  bVar5 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar5 != 0) {
    *puVar3 = *puVar3 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x10))) || ((*(int *)(gen_frame + 0x4)) != 0)) {
    *puVar3 = *puVar3 | 2;
  }
  else {
    *puVar4 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ecbb90 */
GEN_LIB_GS GEN_FRAME uint F_00ecbb90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xecbb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_SUSPECT(0xecbb90u, "_Var15");
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  char cVar1;
  byte * pbVar2;
  undefined4 uVar3;
  char * PTR32 * PTR32 * pppcVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  char * PTR32 * PTR32 * PTR32 * ppppcVar9;
  undefined * plVar10;
  int * piVar11;
  char * PTR32 * PTR32 * PTR32 * ppppcVar12;
  int iVar13;
  undefined4 * puVar14;
  undefined4 _Var15;
  byte * pbVar16;
  byte * pbVar17;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  (*(byte * PTR32 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  if ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x3000) == 0x3000) {
    uVar6 = F_00ec1ff0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar6;
  }
  piVar11 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((param_5 + 0x30)))));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar11;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  if (piVar11[1] != -1) {
    piVar11[1] = piVar11[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar7 = ((int *)GEN_TOP(F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0x8)))));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  iVar13 = piVar11[1];
  if ((iVar13 != 0) && (iVar13 != -1)) {
    piVar11[1] = iVar13 - 1;
  }
  iVar13 = piVar11[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  puVar14 = ((undefined4 *)GEN_TOP((~-(uint)(iVar13 != 0) & (uint)piVar11)));
  if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar14)))(puVar14 GEN_EDX_ARG,1);
  }
  piVar11 = (*(int * PTR32 *)(gen_frame + 0x8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)));
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x4));
  (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x4));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  if (bVar5 == 0) {
    bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
    if (bVar5 == 0x2b) {
      *pbVar17 = 0x2b;
    }
    else {
      bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
      if (bVar5 != 0x2d) goto LAB_00ecbca9;
      *pbVar17 = 0x2d;
    }
    (*(byte * PTR32 *)(gen_frame + 0x1c)) = pbVar17 + 1;
    F_00ebbb10(param_3 GEN_EDX_ARG);
  }
LAB_00ecbca9: ;
  (*(char *)(gen_frame + 0x23)) = '\0';
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = 0;
  ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
  if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
    ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
  }
  if (*(char *)ppppcVar12 == '\x7f') {
LAB_00ecbeee: ;
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecbf34: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecbf34;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*((char *)GEN_TOP(((int)param_3 + 5))) < '0') goto LAB_00ecbe8f;
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecbf7c: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecbf7c;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        iVar13 = (*(int *)(gen_frame + 0xc));
        if ('9' < *((char *)GEN_TOP(((int)param_3 + 5)))) goto LAB_00ecbe8f;
        if ((*(int *)(gen_frame + 0xc)) < 0x24) {
          bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
          if ((bVar5 != 0x30) || (iVar13 != 0)) {
            bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
            *(*(byte * PTR32 *)(gen_frame + 0x1c)) = bVar5;
            iVar13 = iVar13 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
            (*(int *)(gen_frame + 0xc)) = iVar13;
          }
        }
        else {
          (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) + 1;
        }
        (*(char *)(gen_frame + 0x23)) = '\x01';
        F_00ebbb10(param_3 GEN_EDX_ARG);
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
      } while (bVar5 == 0);
LAB_00ecbe98: ;
      if (iVar13 == 0) {
        *(*(byte * PTR32 *)(gen_frame + 0x1c)) = 0x30;
        (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
      }
    }
  }
  else {
    ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
    if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
      ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
    }
    if (*(char *)ppppcVar12 < '\x01') goto LAB_00ecbeee;
    if ((*(int *)(gen_frame + 0x34)) == 0) {
      (*(byte *)(gen_frame + 0x1a)) = 0;
    }
    else {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 8))))(piVar11 GEN_EDX_ARG);
      (*(byte *)(gen_frame + 0x1a)) = (byte)uVar6;
    }
    pppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
    uVar6 = 0xf;
    (*(uint *)(gen_frame + 0x54)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x50)) = 1;
    (*(undefined2 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0] + 0)) = 0;
    ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0] = ((char * PTR32 * PTR32 *)GEN_TOP(((uint)pppcVar4 & 0xffff0000)));
    iVar13 = 0;
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecbd56: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar8 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar8 == 0xffffffff) goto LAB_00ecbd56;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((*((char *)GEN_TOP(((int)param_3 + 5))) < '0') ||
           (bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), '9' < (char)bVar5)) {
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
          if (uVar6 < 0x10) {
            ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
          }
          if (((*((char *)GEN_TOP(((int)ppppcVar12 + iVar13))) == '\0') || ((*(byte *)(gen_frame + 0x1a)) == 0)) ||
             (bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar5 != (*(byte *)(gen_frame + 0x1a)))) break;
          F_00a17030(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,1,0);
          iVar13 = iVar13 + 1;
          uVar6 = (*(uint *)(gen_frame + 0x54));
        }
        else {
          (*(char *)(gen_frame + 0x23)) = '\x01';
          if ((*(int *)(gen_frame + 0xc)) < 0x24) {
            bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
            if ((bVar5 != 0x30) || ((*(int *)(gen_frame + 0xc)) != 0)) {
              bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
              *(*(byte * PTR32 *)(gen_frame + 0x1c)) = bVar5;
              (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
            }
          }
          else {
            (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) + 1;
          }
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
          if (uVar6 < 0x10) {
            ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
          }
          if (*((char *)GEN_TOP(((int)ppppcVar12 + iVar13))) != '\x7f') {
            ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
            if (uVar6 < 0x10) {
              ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
            }
            *((char *)GEN_TOP(((int)ppppcVar12 + iVar13))) = *((char *)GEN_TOP(((int)ppppcVar12 + iVar13))) + '\x01';
            uVar6 = (*(uint *)(gen_frame + 0x54));
          }
        }
        F_00ebbb10(param_3 GEN_EDX_ARG);
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
      } while (bVar5 == 0);
      if (iVar13 != 0) {
        ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
        if (uVar6 < 0x10) {
          ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
        }
        if (*((char *)GEN_TOP(((int)ppppcVar12 + iVar13))) < '\x01') {
          (*(char *)(gen_frame + 0x1b)) = '\x01';
        }
        else {
          iVar13 = iVar13 + 1;
        }
      }
    }
    ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
    if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
      ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
    }
    if ((*(char *)(gen_frame + 0x1b)) == '\0') {
      while( true ) {
        if ((iVar13 == 0) || (cVar1 = *(char *)ppppcVar12, cVar1 == '\x7f')) goto LAB_00ecbe7e;
        iVar13 = iVar13 - 1;
        if (iVar13 != 0) break;
LAB_00ecbe5e: ;
        if (iVar13 == 0) {
          ppppcVar9 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
          if (uVar6 < 0x10) {
            ppppcVar9 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
          }
          if (cVar1 < *(char *)ppppcVar9) goto LAB_00ecbe7a;
        }
        if ('\0' < *((char *)GEN_TOP(((int)ppppcVar12 + 1)))) {
          ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar12 + 1)));
        }
      }
      ppppcVar9 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
      if (uVar6 < 0x10) {
        ppppcVar9 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
      if (cVar1 == *((char *)GEN_TOP(((int)ppppcVar9 + iVar13)))) goto LAB_00ecbe5e;
LAB_00ecbe7a: ;
      (*(char *)(gen_frame + 0x1b)) = '\x01';
    }
LAB_00ecbe7e: ;
    if (0xf < uVar6) {
      F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0]);
    }
LAB_00ecbe8f: ;
    iVar13 = (*(int *)(gen_frame + 0xc));
    if ((*(char *)(gen_frame + 0x23)) != '\0') goto LAB_00ecbe98;
  }
  uVar3 = (*(undefined4 *)(gen_frame + 0x14));
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = ((int *)GEN_TOP(*param_3));
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecbff4: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecbff4;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar1 = *((char *)GEN_TOP(((int)param_3 + 5)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 4))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if (cVar1 == (char)uVar6) {
      plVar10 = F_00c527f9();
      *(*(byte * PTR32 *)(gen_frame + 0x1c)) = *(*(char * PTR32 *)((char *)(plVar10)));
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
      if (piVar11 != ((int *)GEN_TOP(0x0))) {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
          *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_00ecc066;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
  }
LAB_00ecc066: ;
  if ((*(int *)(gen_frame + 0xc)) == 0) {
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
    uVar3 = (*(undefined4 *)(gen_frame + 0x14));
    (*(int *)((char *)&(_Var15))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc0ba: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc0ba;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*((char *)GEN_TOP(((int)param_3 + 5))) != '0') break;
        piVar11 = ((int *)GEN_TOP(*param_3));
        (*(int *)((char *)&(_Var15))) = (*(int *)((char *)&(_Var15))) - 1;
        (*(char *)(gen_frame + 0x23)) = '\x01';
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc108: ;
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
          }
          else {
            *piVar7 = *piVar7 - 1;
            pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
            *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
            uVar6 = (uint)*pbVar17;
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc108;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
      } while (bVar5 == 0);
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = (*(int *)((char *)&(_Var15)));
    }
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) < 0) {
      *(*(byte * PTR32 *)(gen_frame + 0x1c)) = 0x30;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10))))) + 1;
      (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
    }
  }
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  iVar13 = (*(int *)(gen_frame + 0xc));
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc184: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc184;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) < '0') goto LAB_00ecc28c;
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc1cc: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc1cc;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ('9' < *((char *)GEN_TOP(((int)param_3 + 5)))) goto LAB_00ecc28c;
      if (iVar13 < 0x24) {
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc219: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc219;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        *(*(byte * PTR32 *)(gen_frame + 0x1c)) = *((byte *)GEN_TOP(((int)param_3 + 5)));
        (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
        iVar13 = iVar13 + 1;
      }
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x23)) = '\x01';
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc26d: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
          *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc26d;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    } while (bVar5 == 0);
  }
  else {
LAB_00ecc28c: ;
    if ((*(char *)(gen_frame + 0x23)) == '\0') goto LAB_00ecc6bc;
  }
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  if (bVar5 != 0) goto LAB_00ecc6bc;
  if ((char)param_3[1] == '\0') {
    piVar11 = ((int *)GEN_TOP(*param_3));
    if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc2dc: ;
      *param_3 = 0;
    }
    else {
      if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
      }
      else {
        uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
      }
      if (uVar6 == 0xffffffff) goto LAB_00ecc2dc;
      *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*((char *)GEN_TOP(((int)param_3 + 5))) != 'e') {
    if ((char)param_3[1] == '\0') {
      piVar11 = ((int *)GEN_TOP(*param_3));
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc320: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc320;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) != 'E') goto LAB_00ecc6bc;
  }
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x1c));
  *(*(byte * PTR32 *)(gen_frame + 0x1c)) = 0x65;
  piVar11 = ((int *)GEN_TOP(*param_3));
  pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
  (*(byte * PTR32 *)(gen_frame + 0x1c)) = pbVar16;
  if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc377: ;
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
    }
    else {
      *piVar7 = *piVar7 - 1;
      pbVar2 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
      *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
    }
    if (uVar6 == 0xffffffff) goto LAB_00ecc377;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  uVar3 = (*(undefined4 *)(gen_frame + 0x14));
  (*(char *)(gen_frame + 0x23)) = '\0';
  (*(int *)(gen_frame + 0xc)) = 0;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = ((int *)GEN_TOP(*param_3));
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc3d2: ;
        *param_3 = 0;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc3d2;
        *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*((char *)GEN_TOP(((int)param_3 + 5))) == '+') {
      *pbVar16 = 0x2b;
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(byte * PTR32 *)(gen_frame + 0x1c)) = pbVar17 + 2;
      if (piVar11 != ((int *)GEN_TOP(0x0))) {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
LAB_00ecc48e: ;
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
          *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
LAB_00ecc495: ;
        if (uVar6 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_00ecc4aa;
        }
      }
    }
    else {
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc450: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc450;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) != '-') goto LAB_00ecc4aa;
      *pbVar16 = 0x2d;
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(byte * PTR32 *)(gen_frame + 0x1c)) = pbVar17 + 2;
      if (piVar11 != ((int *)GEN_TOP(0x0))) {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1))
        goto LAB_00ecc48e;
        *piVar7 = *piVar7 - 1;
        pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
        *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
        uVar6 = (uint)*pbVar17;
        goto LAB_00ecc495;
      }
    }
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 0;
  }
LAB_00ecc4aa: ;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc4f4: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc4f4;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) != '0') {
        if ((*(char *)(gen_frame + 0x23)) == '\0') goto LAB_00ecc56d;
        break;
      }
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x23)) = '\x01';
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc541: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
          *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc541;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
    } while (bVar5 == 0);
    *(*(byte * PTR32 *)(gen_frame + 0x1c)) = 0x30;
    (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
  }
LAB_00ecc56d: ;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
  iVar13 = (*(int *)(gen_frame + 0xc));
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x1c));
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc5b9: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc5b9;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*((char *)GEN_TOP(((int)param_3 + 5))) < '0') break;
      if ((char)param_3[1] == '\0') {
        piVar11 = ((int *)GEN_TOP(*param_3));
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc601: ;
          *param_3 = 0;
        }
        else {
          if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc601;
          *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ('9' < *((char *)GEN_TOP(((int)param_3 + 5)))) break;
      if (iVar13 < 8) {
        if ((char)param_3[1] == '\0') {
          piVar11 = ((int *)GEN_TOP(*param_3));
          if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc64e: ;
            *param_3 = 0;
          }
          else {
            if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (*((int *)GEN_TOP(piVar11[0xc])) < 1)) {
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x18))))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**((byte * PTR32 *)GEN_TOP(piVar11[8]));
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc64e;
            *((char *)GEN_TOP(((int)param_3 + 5))) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        *pbVar17 = *((byte *)GEN_TOP(((int)param_3 + 5)));
        pbVar17 = pbVar17 + 1;
        iVar13 = iVar13 + 1;
      }
      piVar11 = ((int *)GEN_TOP(*param_3));
      (*(char *)(gen_frame + 0x23)) = '\x01';
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
LAB_00ecc69c: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*((int *)GEN_TOP(piVar11[8])) == 0) || (piVar7 = ((int *)GEN_TOP(piVar11[0xc])), *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x1c))))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar16 = *((byte * PTR32 *)GEN_TOP(piVar11[8]));
          *((byte * PTR32 *)GEN_TOP(piVar11[8])) = pbVar16 + 1;
          uVar6 = (uint)*pbVar16;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc69c;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    } while (bVar5 == 0);
    (*(byte * PTR32 *)(gen_frame + 0x1c)) = pbVar17;
  }
LAB_00ecc6bc: ;
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x4));
  if (((*(char *)(gen_frame + 0x1b)) == '\0') && ((*(char *)(gen_frame + 0x23)) != '\0')) {
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x1c));
  }
  *pbVar17 = 0;
  if (0xf < (*(uint *)(gen_frame + 0x38))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0]);
  }
  return (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x10)))));
}

/* ref: FUN_00ecc700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecc700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecc700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b123c0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecc720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecc720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xecc720u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xb5))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00eb1600(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0xb5))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0xb5))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0xb5))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x2d];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x2d))) = (char)piVar3[0x2d];
      *(char *)(piVar3 + 0x2d) = (char)iVar1;
      goto LAB_00ecc85f;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0xb5))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0xb5))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00eace00(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0xb5))) == '\0') {
      uVar5 = F_00ead920(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00ecc85f: ;
  if ((char)piVar3[0x2d] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x2d] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x2d] == '\0') {
            *(undefined1 *)(piVar6 + 0x2d) = 1;
            *(undefined1 *)(piVar4 + 0x2d) = 0;
            F_00eb2c30(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0xb5))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0xb4))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0xb4))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0xb4))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0xb4))) = 1;
                *(undefined1 *)(piVar6 + 0x2d) = 0;
                F_00eb2c90(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
              *(undefined1 *)(piVar4 + 0x2d) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0xb4))) = 1;
              F_00eb2c30(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ecc96c: ;
            *(undefined1 *)(piVar6 + 0x2d) = 0;
          }
        }
        else {
          if ((char)piVar6[0x2d] == '\0') {
            *(undefined1 *)(piVar6 + 0x2d) = 1;
            *(undefined1 *)(piVar4 + 0x2d) = 0;
            F_00eb2c90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0xb5))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0xb4))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0xb4))) == '\x01'))
            goto LAB_00ecc96c;
            if (*((char *)GEN_TOP((*piVar6 + 0xb4))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0xb4))) = 1;
              *(undefined1 *)(piVar6 + 0x2d) = 0;
              F_00eb2c30(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
            *(undefined1 *)(piVar4 + 0x2d) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0xb4))) = 1;
            F_00eb2c90(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x2d) = 1;
  }
  F_0042c880(piVar3 + 0x18 GEN_EDX_ARG);
  F_0042c880(piVar3 + 3 GEN_EDX_ARG);
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ecca10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xecca10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x81))) == '\0') {
    puVar1 = ((uint *)GEN_TOP(F_00ebe3a0(this GEN_EDX_FWD,param_1 + 4)));
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    local_8 = puVar3;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x81))) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00ecca10(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(*param_1)),(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00ecca10(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(param_1[2])),(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00ecca80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xecca80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  (*(undefined4 *)&gen_args[1]) = CONCAT13((undefined1)(*(undefined4 *)&gen_args[1]),(undefined3)(*(undefined4 *)&gen_args[1]));
  F_00ec0950(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  return (uint)this;
}

/* ref: FUN_00eccab0 */
GEN_LIB GEN_FRAME uint F_00eccab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeccab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ec39e0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eccac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eccac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeccac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ebe4b0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00eccaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eccaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeccaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xb5)));
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
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0xb5)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00ec3580(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00eaeac0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00ec3580(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0042c880(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x60))) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00eccc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eccc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeccc00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x81)));
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
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x81)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00ec37a0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00eaeb50(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 4 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00ec37a0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x68))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x68))) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00eccd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eccd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeccd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xb8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_1);
      F_0042cbc0(puVar1 + 0x18 GEN_EDX_ARG,param_1 + 0x54);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00eccd90 */
GEN_LIB GEN_FRAME uint F_00eccd90(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xeccd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  F_00ec3cc0(param_1 GEN_EDX_ARG,10);
  F_00a16e10(param_1 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00eccdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eccdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeccdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_00ebe720(this GEN_EDX_FWD,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00ebe720(this GEN_EDX_ARG,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00ecce00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  F_00ebe820(this GEN_EDX_FWD,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf7 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecce50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d964),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf6 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d968),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00eccf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xeccf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  _Format = ((char *)GEN_TOP(F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d96c),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

