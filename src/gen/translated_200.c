#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
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

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf1 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecb080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecb080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int iVar1;
  undefined1 * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  iVar1 = F_00c472af(puVar2,0x40,&REFG(undefined, 0x113bf1c),param_6);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x0)),iVar1,puVar2);
  return param_1;
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

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf4 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00eccfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xeccfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  _Format = ((char *)GEN_TOP(F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d970),*((undefined4 *)GEN_TOP((param_4 + 0x14))))));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf3 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd050(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(double param_7, double gen_a6))
{
  GEN_ENTER(0xecd050u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x18)));
  iVar1 = *((int *)GEN_TOP((param_5 + 0x1c)));
  uVar6 = 0;
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
    uVar6 = 0;
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecd160;
      while (9 < uVar5) {
LAB_00ecd160: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecd186;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecd186: ;
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
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  return param_2;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf2 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd250(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(double param_7, double gen_a6))
{
  GEN_ENTER(0xecd250u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uVar4 = *((uint *)GEN_TOP((param_5 + 0x18)));
  iVar1 = *((int *)GEN_TOP((param_5 + 0x1c)));
  uVar6 = 0;
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
      if (0 < iVar1) goto LAB_00ecd344;
      while (9 < uVar5) {
LAB_00ecd344: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecd36a;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecd36a: ;
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
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  return param_2;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf1 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xecd440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int iVar1;
  undefined1 * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  iVar1 = F_00c472af(puVar2,0x40,&REFG(undefined, 0x113bf1c),param_6);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x0)),iVar1,puVar2);
  return param_1;
}

/* ref: FUN_00ecd4a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ecd4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00eca950(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00ecd4d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ecd4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00eca9b0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00ecd500 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ecd500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd500u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ecd540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecd540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xecd540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * this_00;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      F_00ea7d20(this_00 GEN_EDX_FWD,puVar2);
      this_00 = this_00 + 6;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (puVar2 = this_00; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,0);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf4 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  uint * puVar1;
  float * pfVar2;
  byte bVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  int * piVar7;
  
  pfVar2 = (*(float * PTR32 *)&gen_args[7]);
  puVar1 = (*(uint * PTR32 *)&gen_args[6]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  piVar7 = &(*(int *)(gen_frame + 0x4));
  uVar4 = F_00ecbb90(this,((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),&(*(float *)(gen_frame + 0xc)));
  fVar6 = F_010519a0(((undefined1 *)(gen_frame + 0x10)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar4,piVar7);
  (*(float *)(gen_frame + 0x8)) = fVar6;
  if ((*(float *)(gen_frame + 0xc)) != 0.0) {
    dVar5 = F_00c52a5e((double)fVar6,(int)gen_fl2bits((*(float *)(gen_frame + 0xc))) * 4);
    (*(float *)(gen_frame + 0xc)) = (float)dVar5;
    (*(float *)(gen_frame + 0x8)) = (float)dVar5;
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x0)) == ((undefined1 *)(gen_frame + 0x10))) || ((*(int *)(gen_frame + 0x4)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pfVar2 = (*(float *)(gen_frame + 0x8));
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf3 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint * puVar1;
  double * pdVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  
  pdVar2 = (*(double * PTR32 *)&gen_args[7]);
  puVar1 = (*(uint * PTR32 *)&gen_args[6]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  piVar5 = &(*(int *)(gen_frame + 0x10));
  uVar4 = F_00ecbb90(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),&(*(int *)(gen_frame + 0xc)));
  (*(double *)(gen_frame + 0x0)) = F_010519e1(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),uVar4,piVar5);
  if ((*(int *)(gen_frame + 0xc)) != 0) {
    (*(double *)(gen_frame + 0x0)) = F_00c52a5e((*(double *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0xc)) * 4);
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x8)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0x10)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pdVar2 = (*(double *)(gen_frame + 0x0));
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf2 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecd770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint * puVar1;
  double * pdVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  
  pdVar2 = (*(double * PTR32 *)&gen_args[7]);
  puVar1 = (*(uint * PTR32 *)&gen_args[6]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  piVar5 = &(*(int *)(gen_frame + 0x10));
  uVar4 = F_00ecbb90(this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),&(*(int *)(gen_frame + 0xc)));
  (*(double *)(gen_frame + 0x0)) = F_01051a67(((undefined1 *)(gen_frame + 0x14)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),uVar4,piVar5);
  if ((*(int *)(gen_frame + 0xc)) != 0) {
    (*(double *)(gen_frame + 0x0)) = F_00c52a5e((*(double *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0xc)) * 4);
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x8)) == ((undefined1 *)(gen_frame + 0x14))) || ((*(int *)(gen_frame + 0x10)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pdVar2 = (*(double *)(gen_frame + 0x0));
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ecd840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecd840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecd840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      F_00406ad0(*(undefined4 *)this);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *(undefined2 *)this = 0;
    if ((uint)param_1[5] < 8) {
      F_00c46e20(this,param_1,param_1[4] * 2 + 2);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ecd8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecd8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xecd8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00eca950(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0xb5))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0xb5))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0xb5)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0xb5)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0xb5)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0xb5)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00ecc720(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecd990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecd990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xecd990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00eca9b0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x81))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x81))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x81)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x81)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x81)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x81)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00ec46d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecda60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ecda60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecda60u, gen_a0, gen_a1, 0u, 0u);
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
  uVar7 = F_00ecca10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))),iVar2);
  *((uint *)GEN_TOP((iVar2 + 4))) = uVar7;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  piVar4 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar4 + 0x81))) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((*piVar4 + 0x81)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*piVar6 + 0x81)));
    piVar4 = piVar6;
    piVar6 = ((int *)GEN_TOP(*piVar6));
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 8)));
  cVar1 = *((char *)GEN_TOP((iVar5 + 0x81)));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 8))) + 0x81)));
    iVar2 = iVar5;
    iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = iVar2;
  return 0;
}

/* ref: numpunct_G_std::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecdaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = *((short * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  F_00ebe820(param_1 GEN_EDX_FWD,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: numpunct_G_std::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecdb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = *((short * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  F_00ebe820(param_1 GEN_EDX_FWD,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: FUN_00ecdb90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecdb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[2]) + 3;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00ec3580(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    if (bVar3 != 0) {
      F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    bVar3 = F_0042c7c0(((undefined *)GEN_TOP((piVar1[2] + 0xc))) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00eaeac0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0xb5))) == '\0') {
          F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[1]) + 3 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00eb1600(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0xb5))) == '\0') {
          F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00ec3580(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00eccaf0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ecdd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecdd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[2]) + 4;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00ec37a0(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 4);
    if (bVar3 != 0) {
      F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    bVar3 = F_0042c7c0(((undefined *)GEN_TOP((piVar1[2] + 0x10))) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 4);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00eaeb50(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 4 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x81))) == '\0') {
          F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[1]) + 4 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00eacb60(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 4), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x81))) == '\0') {
          F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00ec37a0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00eccc00(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecdef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8 GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xecdf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8 GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecdf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecdf30(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecdf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(param_1[1]));
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
    }
    F_00406ad0(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf8 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ecdf90(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xecdf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * PTR32 * ppuVar4;
  int * piVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  code * pcVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = param_6;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),param_6);
  if ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x4000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_5,(*(undefined4 *)(gen_frame + 0x14)),(uint)param_7);
    return param_2;
  }
  uVar1 = **((uint * PTR32 *)GEN_TOP((param_5 + 0x30)));
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP((uVar1 + 4))) != -1) {
    *((int *)GEN_TOP((uVar1 + 4))) = *((int *)GEN_TOP((uVar1 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(F_00ebe910(&(*(uint *)(gen_frame + 0xc)))));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  iVar9 = *((int *)GEN_TOP((uVar1 + 4)));
  if ((iVar9 != 0) && (iVar9 != -1)) {
    *((int *)GEN_TOP((uVar1 + 4))) = iVar9 - 1;
  }
  iVar9 = *((int *)GEN_TOP((uVar1 + 4)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar9 != 0) & (*(uint *)(gen_frame + 0xc)))));
  if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
  }
  ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
  (*(uint *)(gen_frame + 0x48)) = 0xf;
  (*(uint *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] = ((undefined4 * PTR32 *)GEN_TOP(((uint)ppuVar4 & 0xffffff00)));
  if (param_7 == 0) {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10)));
  }
  else {
    pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x14)));
  }
  (*pcVar7)((*(int * PTR32 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x18)));
  F_00e45e40(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x18)));
  if (0xf < (*(uint *)(gen_frame + 0x2c))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x18))[0]);
  }
  uVar1 = *((uint *)GEN_TOP((param_5 + 0x20)));
  if ((*((int *)GEN_TOP((param_5 + 0x24))) < 0) ||
     (((*((int *)GEN_TOP((param_5 + 0x24))) < 1 && (uVar1 == 0)) || (uVar1 <= (*(uint *)(gen_frame + 0x44)))))) {
    iVar9 = 0;
  }
  else {
    iVar9 = uVar1 - (*(uint *)(gen_frame + 0x44));
  }
  if ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x1c0) != 0x40) {
    puVar8 = ((undefined4 *)GEN_TOP(F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,(char)(*(undefined4 *)(gen_frame + 0x14)),iVar9)));
    param_3 = *puVar8;
    param_4 = puVar8[1];
    iVar9 = 0;
  }
  pppuVar6 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
  if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
    pppuVar6 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34));
  }
  puVar8 = ((undefined4 *)GEN_TOP(F_00eb71e0(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,pppuVar6,(*(uint *)(gen_frame + 0x44)))));
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  *((undefined4 *)GEN_TOP((param_5 + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((param_5 + 0x24))) = 0;
  F_00eb7250(param_1,param_2,uVar2,uVar3,(char)(*(undefined4 *)(gen_frame + 0x14)),iVar9);
  if (0xf < (*(uint *)(gen_frame + 0x48))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x34))[0]);
  }
  return param_2;
}

/* ref: numpunct_D_std::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xece170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xece1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xece1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  param_1[0x50] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece2f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  param_1[0x50] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  param_1[0x50] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece3b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  param_1[0x8c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece410(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  param_1[0x5c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  param_1[0x5c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  param_1[0xa4] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece590(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  param_1[0xb0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece650(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece6b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  param_1[0xa8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 0x32 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  param_1[0x80] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece7d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  param_1[0x29c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x39] = (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(param_1 + 0x3a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece830(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  param_1[0xa0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece890(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  param_1[0x100] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece8f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  param_1[0xb8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  param_1[0x19c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ece9b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xece9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  param_1[0x970] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecea10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecea10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecea70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecead0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecead0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eceb30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeceb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eceb90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeceb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115de44));
  param_1[0xd0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecebf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  param_1[0x130] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecec50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecec50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ececb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xececb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eced10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeced10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eced70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeced70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecedd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecedd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecee30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecee30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecee90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecee90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eceef0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xeceef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecef50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecef50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecefb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecefb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf010(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf070(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  param_1[0xb8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf0d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  param_1[0x118] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  param_1[0xe8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf190(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  param_1[0x148] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  param_1[0x214] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf2b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  param_1[0xb8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  param_1[0xb8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf430(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  param_1[0xb8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  param_1[0x94] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf5b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  param_1[0xa0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf610(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  param_1[0x94] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf6d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  param_1[0x100] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf730(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e414));
  param_1[0x130] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf790(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e444));
  param_1[0xa8] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(param_1 + 0x32 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e474));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e4a4));
  param_1[0x14c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf8b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e4d4));
  param_1[0x2cc] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e504));
  param_1[0x128] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e534));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecf9d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecf9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e564));
  param_1[0x8c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfa30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e594));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfa90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e5c4));
  param_1[0x88] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x29] = (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(param_1 + 0x2a GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfaf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e5f4));
  param_1[0x248] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfb50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e624));
  param_1[0x8c] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfbb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e654));
  param_1[0x50] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfc10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e684));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfc70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e6b4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfcd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e6e4));
  param_1[0x314] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfd30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e714));
  param_1[0xe0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfd90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e744));
  param_1[0xec] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfdf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e774));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfe50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e7a4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecfeb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecfeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e7d4));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecff10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecff10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e804));
  param_1[0x68] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecff70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecff70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e834));
  param_1[0x318] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0xa9] = (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0(param_1 + 0xaa GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ecffd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xecffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e864));
  param_1[0x7a0] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x141] = (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0(param_1 + 0x142 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x115e894));
  param_1[0x50] = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  param_1[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(param_1 + 0x22 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(param_1 + 2 GEN_EDX_ARG);
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ed0090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ecd540(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed00b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed00b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed00b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ecd8c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed00d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed00d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed00d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if (this != (*(undefined * PTR32 *)&gen_args[0])) {
    F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
    F_00ecda60(this GEN_EDX_ARG,pvVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ed0100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf8 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed0120(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xed0120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(uint *)(gen_frame + 0x14)) = param_6 & 0xffff;
  if ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x4000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))
              (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6 & 0xffff,(uint)param_7);
    return param_2;
  }
  uVar1 = **((uint * PTR32 *)GEN_TOP((param_5 + 0x30)));
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP((uVar1 + 4))) != -1) {
    *((int *)GEN_TOP((uVar1 + 4))) = *((int *)GEN_TOP((uVar1 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00ebe280(&(*(uint *)(gen_frame + 0x10)))));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  iVar7 = *((int *)GEN_TOP((uVar1 + 4)));
  if ((iVar7 != 0) && (iVar7 != -1)) {
    *((int *)GEN_TOP((uVar1 + 4))) = iVar7 - 1;
  }
  iVar7 = *((int *)GEN_TOP((uVar1 + 4)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar7 != 0) & (*(uint *)(gen_frame + 0x10)))));
  if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
  }
  (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2)) << 0x10)));
  (*(uint *)(gen_frame + 0x48)) = 7;
  (*(uint *)(gen_frame + 0x44)) = 0;
  if (param_7 == 0) {
    pcVar5 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x10)));
  }
  else {
    pcVar5 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x14)));
  }
  (*pcVar5)((*(int * PTR32 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x18)));
  F_00ecd840(&(*(undefined4 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x18)));
  if (7 < (*(uint *)(gen_frame + 0x2c))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x18))[0]);
  }
  uVar1 = *((uint *)GEN_TOP((param_5 + 0x20)));
  if ((*((int *)GEN_TOP((param_5 + 0x24))) < 0) ||
     (((*((int *)GEN_TOP((param_5 + 0x24))) < 1 && (uVar1 == 0)) || (uVar1 <= (*(uint *)(gen_frame + 0x44)))))) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar1 - (*(uint *)(gen_frame + 0x44));
  }
  if ((*((uint *)GEN_TOP((param_5 + 0x14))) & 0x1c0) != 0x40) {
    puVar6 = ((undefined4 *)GEN_TOP(F_00eba490(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,(*(uint *)(gen_frame + 0x14)),iVar7)));
    param_3 = *puVar6;
    param_4 = puVar6[1];
    iVar7 = 0;
  }
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
  if ((*(uint *)(gen_frame + 0x48)) < 8) {
    puVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x34));
  }
  puVar6 = ((undefined4 *)GEN_TOP(F_00eba420(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,puVar6,(*(uint *)(gen_frame + 0x44)))));
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  *((undefined4 *)GEN_TOP((param_5 + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((param_5 + 0x24))) = 0;
  F_00eba490(param_1,param_2,uVar2,uVar3,(*(uint *)(gen_frame + 0x14)),iVar7);
  if (7 < (*(uint *)(gen_frame + 0x48))) {
    F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x34)));
  }
  return param_2;
}

/* ref: FUN_00ed0300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  F_00ecd840(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: numpunct_G_std::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: FUN_00ed0370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xed0370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xb8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_3);
      F_0042cbc0(puVar1 + 0x18 GEN_EDX_ARG,param_3 + 0x54);
    }
    F_00ecdb90(this GEN_EDX_ARG,param_1,param_2,puVar1);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00ed0400 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x10c, 4, 4);
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_1;
  puVar7 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar7 + 0xb5)));
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0(puVar7 + 3 GEN_EDX_FWD,(*(undefined * PTR32 *)(gen_frame + 0x4)));
    if (bVar4 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar7));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(puVar7[2]));
      puVar7 = puVar3;
    }
    puVar3 = puVar7;
    puVar7 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0xb5)));
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,puVar3 + 3), bVar4 == 0)) {
    return (uint)(puVar3 + 0x18);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb0)));
  piVar5 = ((int *)GEN_TOP(F_00ed0370(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,((undefined1 *)(gen_frame + 0x8)))));
  iVar2 = *piVar5;
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  return iVar2 + 0x60;
}

/* ref: FUN_00ed0500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ecd8c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed0530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed0530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if (this != (*(undefined * PTR32 *)&gen_args[0])) {
    F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
    F_00ecda60(this GEN_EDX_ARG,pvVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ed0560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed0590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed0590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  undefined4 * puVar7;
  int iVar8;
  uint uVar9;
  
  if (this != (*(int * PTR32 *)&gen_args[0])) {
    iVar1 = (*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0]) >> 0x1f;
    iVar8 = ((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x18 + iVar1;
    uVar9 = iVar8 - iVar1;
    if (iVar8 == iVar1) {
      F_00ecd540(this GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      return (uint)this;
    }
    iVar1 = *(int *)this;
    uVar4 = (*((int *)GEN_TOP(((int)this + 4))) - iVar1) / 0x18;
    if (uVar9 <= uVar4) {
      puVar7 = ((undefined4 *)GEN_TOP(F_00eb6340(*(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[0])[1],iVar1)));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      for (; puVar7 != puVar2; puVar7 = puVar7 + 6) {
        pcVar3 = *((gen_code32 *)GEN_TOP(*puVar7));
        (*pcVar3)(puVar7,0);
      }
      *((int *)GEN_TOP(((int)this + 4))) = *(int *)this + (((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x18) * 0x18;
      return (uint)this;
    }
    if (uVar9 <= (uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18)) {
      iVar8 = *(*(int * PTR32 *)&gen_args[0]) + uVar4 * 0x18;
      F_00eb6340(*(*(int * PTR32 *)&gen_args[0]),iVar8,iVar1);
      uVar9 = F_00ebe4b0(iVar8,(*(int * PTR32 *)&gen_args[0])[1],*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,(*(int * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)this + 4))) = uVar9;
      return (uint)this;
    }
    if (iVar1 != 0) {
      F_00ecaa10(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00406ad0(*(undefined4 *)this);
    }
    piVar5 = (*(int * PTR32 *)&gen_args[0]);
    bVar6 = F_00eb9a40(this GEN_EDX_ARG,((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x18);
    if (bVar6 != 0) {
      uVar9 = F_00eccac0(this GEN_EDX_ARG,*piVar5,piVar5[1],*(undefined4 *)this);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar9;
    }
  }
  return (uint)this;
}

/* ref: FUN_00ed0700 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  if (((*((uint *)GEN_TOP(((int)this + 0x40))) & 2) == 0) && (**((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) != 0)) {
    uVar1 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if (uVar1 <= *((uint *)GEN_TOP(((int)this + 0x3c)))) {
      uVar1 = *((uint *)GEN_TOP(((int)this + 0x3c)));
    }
    iVar3 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    iVar2 = uVar1 - iVar3;
  }
  else {
    if (((*((uint *)GEN_TOP(((int)this + 0x40))) & 4) != 0) || (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) == 0)) {
      (*(uint *)(gen_frame + 0x14)) = 7;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x0)) + 0)) = 0;
      (*(int *)(gen_frame + 0x0)) = (uint)(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x0)) + 2)) << 0x10;
      *(undefined4 *)(param_1 + 10) = 7;
      *(undefined4 *)(param_1 + 8) = 0;
      *param_1 = 0;
      F_00ecd840(param_1 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
      goto joined_r0x00ed07c9;
    }
    iVar3 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    iVar2 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) * 2 - iVar3) + **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  }
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x0)) + 0)) = 0;
  (*(int *)(gen_frame + 0x0)) = (uint)(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x0)) + 2)) << 0x10;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 7;
  F_00ebe820(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar3,iVar2 >> 1);
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  F_00ecd840(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
joined_r0x00ed07c9: ;
  if (7 < (*(uint *)(gen_frame + 0x14))) {
    F_00406ad0((*(int *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_00ed07f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed07f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed07f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed0820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ecd8c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ed0850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: FUN_00ed08c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed08c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed08c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: FUN_00ed0930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00ed0700(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00ed0950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00e46800(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00ed0970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0970(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  F_00ecd990(param_1 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)param_1 + 4))));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::ServerFramework::Properties::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed09b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed09b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115e8d8));
  F_00ecd8c0(param_1 + 1 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[2])),((undefined4 *)GEN_TOP(param_1[2])));
  F_00406ad0(param_1[2]);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ed0a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ea7f50(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ed0a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed0a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00ea7d20(((undefined4 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00ed0a40 */
GEN_LIB GEN_FRAME uint F_00ed0a40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0a70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed0a70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed0aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00ea7d20(((undefined4 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00ed0ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed0ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00ea7d20(((undefined4 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00ed0b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed0b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00ea7d20(((undefined4 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00ed0b30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed0b30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0b60 */
GEN_LIB GEN_FRAME uint F_00ed0b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xed0b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    param_2[2] = 0;
    param_2[4] = 0;
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_2 GEN_EDX_ARG,param_3);
  }
  return uVar1;
}

/* ref: FUN_00ed0b90 */
GEN_LIB GEN_FRAME uint F_00ed0b90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xed0b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x18;
    this = this + 6;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ed0be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00ea7d20(((undefined4 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ed0c20 */
GEN_LIB GEN_FRAME uint F_00ed0c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xed0c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    param_2[2] = 0;
    param_2[4] = 0;
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_2 GEN_EDX_ARG,param_3);
  }
  return uVar1;
}

/* ref: FUN_00ed0c50 */
GEN_LIB GEN_FRAME unsigned int F_00ed0c50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xed0c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    if (this != ((undefined4 *)GEN_TOP(0x0))) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this = this + 6;
  }
  return;
}

/* ref: FUN_00ed0cc0 */
GEN_LIB GEN_FRAME uint F_00ed0cc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed0cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ed0b90(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ed0cf0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ed0cf0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed0cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x68))) = 0;
    F_00ea7d20(((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_ARG,param_2 + 0x58);
  }
  return;
}

/* ref: FUN_00ed0d30 */
GEN_LIB GEN_FRAME unsigned int F_00ed0d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00ed0c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00ed0d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xed0d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ed0b90(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ed0d90 */
GEN_LIB GEN_FRAME unsigned int F_00ed0d90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xed0d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x68))) = 0;
    F_00ea7d20(((undefined4 *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG,param_3 + 0x58);
  }
  return;
}

/* ref: FUN_00ed0dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if (0xaaaaaaa < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (param_1 != 0) {
      uVar3 = F_004069f0(param_1 * 0x18);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(0x0));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    F_00ed0b90(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(*(uint *)(gen_frame + 0x8)),(int)this + 0xc,0,
                 param_1);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar4 = *(undefined4 * PTR32 *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
    iVar2 = ((int)puVar1 - (int)puVar4) / 0x18;
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar4 != puVar1) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,0);
          puVar4 = puVar4 + 6;
        } while (puVar4 != (*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      }
      F_00406ad0(*(undefined4 *)this);
      uVar5 = (*(uint *)(gen_frame + 0x8));
    }
    uVar3 = iVar2 * 3;
    *(uint *)this = uVar5;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar5 + param_1 * 0x18;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar5 + iVar2 * 0x18;
  }
  return uVar3;
}

/* ref: FUN_00ed0ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x88)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 0x20) = 0;
    if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0042cbc0(puVar1 + 4 GEN_EDX_ARG,param_1);
      puVar1[0x1a] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      puVar1[0x1c] = 0;
      puVar1[0x1e] = 0;
      F_00ea7d20(puVar1 + 0x1a GEN_EDX_ARG,param_1 + 0x58);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00ed0f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed0f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - param_1 < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ed0dd0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ed0dd0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ed0ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed0ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xed0ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ed0ed0(this GEN_EDX_FWD,param_3);
  F_00ecdd40(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00ed1020 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_1;
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x81)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0(puVar6 + 4 GEN_EDX_FWD,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    if (bVar4 == 0) {
      puVar7 = ((undefined4 *)GEN_TOP(*puVar6));
    }
    else {
      puVar7 = ((undefined4 *)GEN_TOP(puVar6[2]));
      puVar6 = puVar2;
    }
    puVar2 = puVar6;
    puVar6 = puVar7;
    cVar1 = *((char *)GEN_TOP(((int)puVar7 + 0x81)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,puVar2 + 4), bVar4 == 0)) {
    return (uint)(puVar2 + 0x1a);
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x18)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x74))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  F_00ea7d20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  uVar5 = F_00ed0ed0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)));
  F_00ecdd40(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x18)),puVar2,uVar5);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x74))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (int)pvVar3 + 0x68;
}

/* ref: FUN_00ed1140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed1140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if ((*(uint *)&gen_args[0]) < uVar2) {
    uVar2 = F_00ecd540(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),*(int *)this + (*(uint *)&gen_args[0]) * 0x18,*((int *)GEN_TOP(((int)this + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[0])) {
    F_00ed0f60(this GEN_EDX_ARG,(*(uint *)&gen_args[0]) - uVar2);
    F_00ed0c50(*((int *)GEN_TOP(((int)this + 4))),uVar1 - (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18,0,
                 (int)this + 0xc,0,(*(uint *)&gen_args[0]));
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
    *((uint *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + (uVar1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00ed11f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ed11f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed11f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ed0f60(this GEN_EDX_FWD,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x18) * 0x18;
    this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ed0f60(this GEN_EDX_ARG,1);
    }
    this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar1 = param_1;
  }
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    *this_00 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    this_00[2] = 0;
    this_00[4] = 0;
    F_00ea7d20(this_00 GEN_EDX_ARG,uVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
  return;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ed12a0(void)
{
  GEN_ENTER(0xed12a0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ed12b0(void)
{
  GEN_ENTER(0xed12b0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136953c);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed12c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed12c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8f64) + param_1 * 4);
}

/* ref: FUN_00ed12e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed12e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed12e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12a8f84) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return 0xffffffff;
}

/* ref: FUN_00ed1340 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed1340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed1340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x17;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136951c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8f04) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8f44) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed13b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed13b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed13d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed13d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8f24) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed13f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed13f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a8f44) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a8f44) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1470(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed1470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12a8f24) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12a8f04) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a8f04) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a8f24) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed14f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed14f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed1580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed1580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,7);
  return uVar8 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed15f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed15f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xed1610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed1630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,7,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed16d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed16d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,7,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed1770 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ed1770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed1770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed1780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136962c) + 0x10))))(&REFG(undefined * PTR32, 0x136962c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed17b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed17b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed17b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136962c) + 0x10))))(&REFG(undefined * PTR32, 0x136962c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed17e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed17e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 5;
  case 2: ;
    return in_ecx + 8;
  case 3: ;
    return in_ecx + 0xc;
  case 4: ;
    return in_ecx + 0x10;
  case 5: ;
    return in_ecx + 0x20;
  case 6: ;
    return in_ecx + 0x21;
  case 7: ;
    return in_ecx + 0x28;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::Warp::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed1850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed1850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed1860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00ed1963: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed1968;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ed1963;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed1968: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ed1a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xed1a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pWVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[4] = SUB81(uVar6,0);
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[5] = SUB81(uVar6,0);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 8) = fVar7;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 4: ;
    iVar4 = 0;
    pWVar5 = this + 0x10;
    break;
  case 5: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_ARG)));
    bVar1 = F_0042b740(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x20] = (undefined1)(bVar1 != 0);
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_ARG)));
    bVar1 = F_0042b740(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x21] = (undefined1)(bVar1 != 0);
    return 1;
  case 7: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x28) = uVar6;
    return 1;
  default: ;
    return 0;
  }
  do {
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)pWVar5 = fVar7;
    iVar4 = iVar4 + 1;
    pWVar5 = pWVar5 + 4;
  } while (iVar4 < 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed1bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed1bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pWVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[5] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar9 = F_00e50660(uVar3 + 3);
  *(float *)(this + 8) = fVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0xc) = (int)uVar8;
  uVar3 = uVar3 + 1;
  pWVar7 = this + 0x10;
  (*(int *)(gen_frame + 0x0)) = 4;
  do {
    iVar5 = uVar3 + 3;
    uVar3 = F_00c51da0(iVar5,0x22);
    fVar9 = F_00e50660(iVar5);
    *(float *)pWVar7 = fVar9;
    pWVar7 = pWVar7 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  uVar6 = F_00c51da0(((char *)GEN_TOP((uVar3 + 4))),0x22);
  this[0x20] = (undefined1)(*((char *)GEN_TOP((uVar3 + 4))) != '0');
  uVar3 = F_00c51da0(((char *)GEN_TOP((uVar6 + 3))),0x22);
  this[0x21] = (undefined1)(*((char *)GEN_TOP((uVar6 + 3))) != '0');
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  *(ulonglong *)(this + 0x28) = uVar8;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed1d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed1d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed1e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed1e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x10))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x10)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,2,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x1c))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x1c)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,3,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x20]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x21]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed2100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed2100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed2120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed2120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00ed2233: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed2238;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ed2233;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed2238: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed23c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed23c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pWVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[4] = SUB81(uVar6,0);
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[5] = SUB81(uVar6,0);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 8) = fVar7;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 4: ;
    iVar5 = 0;
    pWVar4 = this + 0x10;
    break;
  case 5: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x20] = (undefined1)(bVar1 == 0);
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x21] = (undefined1)(bVar1 == 0);
    return 1;
  case 7: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x28) = uVar6;
    return 1;
  default: ;
    return 0;
  }
  do {
    uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)pWVar4 = fVar7;
    iVar5 = iVar5 + 1;
    pWVar4 = pWVar4 + 4;
  } while (iVar5 < 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed25e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed25e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pWVar6;
  ulonglong uVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[4] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[5] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 8) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369688));
      iVar5 = uVar3 + 10;
      pWVar6 = this + 0x10;
      (*(int *)(gen_frame + 0x0)) = 4;
      do {
        fVar8 = F_00e50660(iVar5);
        *(float *)pWVar6 = fVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pWVar6 = pWVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      this[0x20] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      this[0x21] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 0x28) = uVar7;
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed2950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed2950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed2a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed2a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12a929c)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 4;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x10;
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x60));
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 4);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x20]);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x21]);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed35c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed35c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00ed3712: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed3717;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed3712;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed3717: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00ed3a40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed3a40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed3a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined2 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ed3a80(void)
{
  GEN_ENTER(0xed3a80u, 0u, 0u, 0u, 0u);
  return 0x11;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ed3a90(void)
{
  GEN_ENTER(0xed3a90u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136955c);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8ffc) + param_1 * 4);
}

/* ref: FUN_00ed3ac0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed3ac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed3ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12a9018) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 7);
  return 0xffffffff;
}

/* ref: FUN_00ed3b20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed3b20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed3b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x4d;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x1369540))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3c50(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed3c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12a8fc4) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12a8fa8) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a8fa8) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a8fc4) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed3cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed3d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed3d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  return uVar7 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed3e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed3ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed3ee0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed3ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a9304));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 6) = 0;
  *(undefined8 *)(in_ecx + 7) = 0;
  *(undefined8 *)(in_ecx + 9) = 0;
  *(undefined8 *)(in_ecx + 0xb) = 0;
  *(undefined8 *)(in_ecx + 0xd) = 0;
  *(undefined8 *)(in_ecx + 0xf) = 0;
  *(undefined8 *)(in_ecx + 0x11) = 0;
  *(undefined8 *)(in_ecx + 0x13) = 0;
  *(undefined8 *)(in_ecx + 0x15) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ed3f30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ed3f30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed3f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed3f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369630) + 0x10))))(&REFG(undefined * PTR32, 0x1369630),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed3f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed3f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369630) + 0x10))))(&REFG(undefined * PTR32, 0x1369630),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed3fa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed3fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x14;
  case 5: ;
    return in_ecx + 0x18;
  case 6: ;
    return in_ecx + 0x1c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed4010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed4010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4)) && (param_1 == 6)) {
    return (uint)(this + param_2 * 4 + 0x1c);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ed4040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed4040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    this[8] = *(undefined *)(param_1 + 2);
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    pAVar5 = this + 0x1c;
    *(int *)(this + 0x14) = param_1[5];
    this[0x18] = *(undefined *)(param_1 + 6);
    iVar6 = 0x10;
    do {
      *(undefined4 *)pAVar5 = *((undefined4 *)GEN_TOP((pAVar5 + ((int)param_1 - (int)this))));
      pAVar5 = pAVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed40d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed40d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pAVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  if ((short)uVar3 == (short)pAVar4) {
    pAVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0x0: ;
      uVar3 = param_1[1];
      *(uint *)(this + 4) = uVar3;
      return uVar3;
    case 0x1: ;
      this[8] = *(undefined *)(param_1 + 2);
      return (uint)pAVar4;
    case 0x2: ;
      *(int *)(this + 0xc) = param_1[3];
      return (uint)pAVar4;
    case 0x3: ;
      uVar3 = param_1[4];
      *(uint *)(this + 0x10) = uVar3;
      return uVar3;
    case 0x4: ;
      *(int *)(this + 0x14) = param_1[5];
      return (uint)pAVar4;
    case 0x5: ;
      this[0x18] = *(undefined *)(param_1 + 6);
      return (uint)pAVar4;
    case 0x6: ;
      pAVar4 = this + 0x1c;
      iVar5 = 0x10;
      do {
        *(undefined4 *)pAVar4 = *((undefined4 *)GEN_TOP((pAVar4 + ((int)param_1 - (int)this))));
        pAVar4 = pAVar4 + 4;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  return (uint)pAVar4;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed41b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00ed42b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed42b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ed42b3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed42b8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ed4380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xed4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar5;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar5;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    fVar6 = F_00e50660(uVar1);
    *(float *)(this + 0x14) = fVar6;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[0x18] = SUB81(uVar5,0);
    return 1;
  case 6: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pAVar4 = this + 0x1c;
    break;
  default: ;
    return 0;
  }
  do {
    if ((int)uVar1 <= iVar3) {
      return 1;
    }
    uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)pAVar4 = (int)uVar5;
    iVar3 = iVar3 + 1;
    pAVar4 = pAVar4 + 4;
  } while (iVar3 < 0x10);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed44e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pAVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar9 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  this[8] = SUB81(uVar9,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar9;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar10 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0x14) = fVar10;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  uVar3 = uVar3 + 1;
  this[0x18] = SUB81(uVar9,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  pAVar7 = this + 0x1c;
  while( true ) {
    uVar8 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar8,0x22);
    if ((uVar6 < uVar8) || (uVar6 < uVar3)) break;
    uVar9 = F_00e50570(uVar8);
    *(int *)pAVar7 = (int)uVar9;
    iVar5 = iVar5 + 1;
    pAVar7 = pAVar7 + 4;
    if (0xf < iVar5) {
LAB_00ed4640: ;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00ed4640;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed4670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed4670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed4790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed4790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  undefined * pAVar2;
  int iVar3;
  undefined1 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x10,0);
  pAVar2 = this + 0x1c;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pAVar2,0);
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar4);
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar3 < 0x10);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed4950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed4950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed4970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed4970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00ed4a83: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed4a88;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ed4a83;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed4a88: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed4c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed4c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar5;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar5;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    fVar6 = F_00e50660(uVar1);
    *(float *)(this + 0x14) = fVar6;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[0x18] = SUB81(uVar5,0);
    return 1;
  case 6: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pAVar3 = this + 0x1c;
    break;
  default: ;
    return 0;
  }
  do {
    if ((int)uVar1 <= iVar4) {
      return 1;
    }
    uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)pAVar3 = (int)uVar5;
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (iVar4 < 0x10);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed4e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  undefined * pAVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 4) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      this[8] = SUB81(uVar8,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 0x10) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      fVar9 = F_00e50660(iVar5);
      *(float *)(this + 0x14) = fVar9;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      this[0x18] = SUB81(uVar8,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369718));
      iVar5 = uVar3 + 10;
      pAVar7 = this + 0x1c;
      iVar6 = 0x10;
      do {
        uVar8 = F_00e50570(iVar5);
        *(int *)pAVar7 = (int)uVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pAVar7 = pAVar7 + 4;
        iVar6 = iVar6 - 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 != 0);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed5120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed5120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed5240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed5240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pAVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0x10;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  iVar6 = 0;
  pAVar7 = this + 0x1c;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pAVar7,0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x54));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar6 = iVar6 + 1;
    pAVar7 = pAVar7 + 4;
  } while (iVar6 < 0x10);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed5c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed5c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00ed5d62: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed5d67;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed5d62;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed5d67: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed5ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed5ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00ed6090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed6090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed6090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x24))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x2c))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x34))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x44))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x4c))) = 0;
  *((undefined8 *)GEN_TOP((in_ecx + 0x54))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ed6100(void)
{
  GEN_ENTER(0xed6100u, 0u, 0u, 0u, 0u);
  return 0x1a;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ed6110(void)
{
  GEN_ENTER(0xed6110u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695c8);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a90d4) + param_1 * 4);
}

/* ref: FUN_00ed6140 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed6140(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed6140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12a9108) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xd);
  return 0xffffffff;
}

/* ref: FUN_00ed61a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed61a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed61a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0xea;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed61b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed61b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x1369560))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed61d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed61d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a9038) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed61f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed61f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a90a0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1369594) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a906c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a90a0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a90a0) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a906c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9038) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a906c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9038) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed62d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed62d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12a906c) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12a9038) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9038) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a906c) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed6350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a906c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed63e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed63e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,7);
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,8);
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,9);
  uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,10);
  uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xb);
  uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,0xc);
  return uVar13 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 +
                  uVar11 + uVar12;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed6490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed64b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xed64b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed64d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed64d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,8,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,9,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,10,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xb,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,0xc,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed65b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed65b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,8,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,9,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,10,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xb,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,0xc,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed6690 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ed6690(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed6690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a93cc));
  F_00f674b0(in_ecx + 0xf GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed66b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed66b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369634) + 0x10))))(&REFG(undefined * PTR32, 0x1369634),param_1);
  if (-1 < (int)uVar1) {
    return (uint)this;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 8))))(this + 0x3c GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00ed66f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed66f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed66f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369634) + 0x10))))(&REFG(undefined * PTR32, 0x1369634),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed6720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed6720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x20;
  case 5: ;
    return in_ecx + 0x30;
  case 6: ;
    return in_ecx + 0x34;
  case 7: ;
    return in_ecx + 0x35;
  case 8: ;
    return in_ecx + 0x38;
  case 9: ;
    return in_ecx + 0x3c;
  case 10: ;
    return in_ecx + 0x50;
  case 0xb: ;
    return in_ecx + 0x60;
  case 0xc: ;
    return in_ecx + 0x61;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed67d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed67d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed67e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed67e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00ed68e3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed68e8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ed68e3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed68e8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ed69b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed69b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  float * pfVar6;
  ulonglong uVar7;
  float fVar8;
  undefined * puVar9;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_FWD);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((char *)GEN_TOP((param_1 + 4))) = (char)uVar7;
    return 1;
  case 1: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((int *)GEN_TOP((param_1 + 8))) = (int)uVar7;
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((int *)GEN_TOP((param_1 + 0xc))) = (int)uVar7;
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((int *)GEN_TOP((param_1 + 0x10))) = (int)uVar7;
    return 1;
  case 4: ;
    iVar5 = 0;
    pfVar6 = ((float *)GEN_TOP((param_1 + 0x20)));
    do {
      uVar4 = F_00e9e450(param_3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
      uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
      fVar8 = F_00e50660(uVar4);
      *pfVar6 = fVar8;
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 < 3);
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    fVar8 = F_00e50660(uVar4);
    *((float *)GEN_TOP((param_1 + 0x30))) = fVar8;
    return 1;
  case 6: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar3 = ((undefined *)GEN_TOP(F_00e82f00(param_3 GEN_EDX_ARG)));
    bVar2 = F_0042b740(pvVar3 GEN_EDX_ARG,puVar9);
    *((bool *)GEN_TOP((param_1 + 0x34))) = bVar2 != 0;
    return 1;
  case 7: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((char *)GEN_TOP((param_1 + 0x35))) = (char)uVar7;
    return 1;
  case 8: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((int *)GEN_TOP((param_1 + 0x38))) = (int)uVar7;
    return 1;
  case 9: ;
    break;
  case 10: ;
    iVar5 = 0;
    pfVar6 = ((float *)GEN_TOP((param_1 + 0x50)));
    do {
      uVar4 = F_00e9e450(param_3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar4 = F_00e82f00(uVar4 GEN_EDX_ARG);
      uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
      fVar8 = F_00e50660(uVar4);
      *pfVar6 = fVar8;
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 < 3);
    return 1;
  case 0xb: ;
    puVar9 = &REFG(undefined, 0x1158a00);
    pvVar3 = ((undefined *)GEN_TOP(F_00e82f00(param_3 GEN_EDX_ARG)));
    bVar2 = F_0042b740(pvVar3 GEN_EDX_ARG,puVar9);
    *((bool *)GEN_TOP((param_1 + 0x60))) = bVar2 != 0;
    return 1;
  case 0xc: ;
    uVar4 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar7 = F_00e50570(uVar4);
    *((char *)GEN_TOP((param_1 + 0x61))) = (char)uVar7;
    return 1;
  default: ;
    return 0;
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 0x3c)));
  if (param_4 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_3);
    return 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,param_3);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed6c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed6c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  undefined * pTVar8;
  ulonglong uVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  iVar6 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP((param_1 + 1)));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar6 + 4))))(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0xc)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x8)),((char *)(gen_frame + 0xc)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0xc)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x8)),0x5b);
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP((uVar4 - 1)));
  pcVar5 = ((char *)GEN_TOP(F_00c51da0(uVar4 + 2,0x22)));
  uVar9 = F_00e50570(uVar4 + 2);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  this[4] = SUB81(uVar9,0);
  pcVar7 = ((char *)GEN_TOP(F_00c51da0(pcVar5 + 3,0x22)));
  uVar9 = F_00e50570(pcVar5 + 3);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
  *(int *)(this + 8) = (int)uVar9;
  pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7 + 3,0x22)));
  uVar9 = F_00e50570(pcVar7 + 3);
  *(int *)(this + 0xc) = (int)uVar9;
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  uVar4 = F_00c51da0(pcVar5 + 3,0x22);
  uVar9 = F_00e50570(pcVar5 + 3);
  pcVar5 = ((char *)GEN_TOP((uVar4 + 1)));
  *(int *)(this + 0x10) = (int)uVar9;
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  pTVar8 = this + 0x20;
  (*(int *)(gen_frame + 0x0)) = 3;
  do {
    pcVar7 = pcVar5 + 3;
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
    pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7,0x22)));
    fVar10 = F_00e50660(pcVar7);
    *(float *)pTVar8 = fVar10;
    pTVar8 = pTVar8 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5 + 1;
  pcVar7 = ((char *)GEN_TOP(F_00c51da0(pcVar5 + 4,0x22)));
  fVar10 = F_00e50660(pcVar5 + 4);
  *(float *)(this + 0x30) = fVar10;
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
  pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7 + 3,0x22)));
  this[0x34] = (undefined1)(pcVar7[3] != '0');
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  pcVar7 = ((char *)GEN_TOP(F_00c51da0(pcVar5 + 3,0x22)));
  uVar9 = F_00e50570(pcVar5 + 3);
  this[0x35] = SUB81(uVar9,0);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
  pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7 + 3,0x22)));
  uVar9 = F_00e50570(pcVar7 + 3);
  *(int *)(this + 0x38) = (int)uVar9;
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x44)));
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  uVar4 = (*pcVar2)(this + 0x3c,pcVar5 + 2,&(*(char * PTR32 *)(gen_frame + 0x8)));
  if ((char)uVar4 == '\0') {
    return 0;
  }
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8)) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x50;
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  (*(int *)(gen_frame + 0x0)) = 3;
  do {
    pcVar7 = pcVar5 + 3;
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
    pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7,0x22)));
    fVar10 = F_00e50660(pcVar7);
    *(float *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = fVar10;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5 + 1;
  pcVar7 = ((char *)GEN_TOP(F_00c51da0(pcVar5 + 4,0x22)));
  this[0x60] = (undefined1)(pcVar5[4] != '0');
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
  pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar7 + 3,0x22)));
  uVar9 = F_00e50570(pcVar7 + 3);
  this[0x61] = SUB81(uVar9,0);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar4 = F_00c51da0(pcVar5,0x7d);
    *param_2 = uVar4;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed6ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed6fc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xed6fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  code * pcVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*((byte *)GEN_TOP((param_1 + 4))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 8))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 0xc))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 0x10))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,4,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x20)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x20)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x24)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x24)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x28)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x28)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,2,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar5);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x30)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x30)))) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)*((byte *)GEN_TOP((param_1 + 0x34))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*((byte *)GEN_TOP((param_1 + 0x35))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,8,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 0x38))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,9,0);
  if (param_3 == '\0') {
    pcVar4 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x3c))) + 0x28)));
  }
  else {
    pcVar4 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x3c))) + 0x40)));
  }
  (*pcVar4)(param_1 + 0x3c,uVar3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,10,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x50)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x50)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x54)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x54)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x58)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x58)))) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,2,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar5);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,0xb,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)*((byte *)GEN_TOP((param_1 + 0x60))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,0xc,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*((byte *)GEN_TOP((param_1 + 0x61))),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed73a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed73a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed73c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed73c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00ed74d3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed74d8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ed74d3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed74d8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed7660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed7660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pTVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[4] = SUB81(uVar6,0);
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 8) = (int)uVar6;
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x10) = (int)uVar6;
    return 1;
  case 4: ;
    iVar5 = 0;
    pTVar4 = this + 0x20;
    do {
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
      uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
      fVar7 = F_00e50660(uVar3);
      *(float *)pTVar4 = fVar7;
      iVar5 = iVar5 + 1;
      pTVar4 = pTVar4 + 4;
    } while (iVar5 < 3);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x30) = fVar7;
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x34] = (undefined1)(bVar1 == 0);
    return 1;
  case 7: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x35] = SUB81(uVar6,0);
    return 1;
  case 8: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x38) = (int)uVar6;
    return 1;
  case 9: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x2c))))(this + 0x3c GEN_EDX_ARG,pvVar2);
    return 1;
  case 10: ;
    iVar5 = 0;
    pTVar4 = this + 0x50;
    do {
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
      uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
      fVar7 = F_00e50660(uVar3);
      *(float *)pTVar4 = fVar7;
      iVar5 = iVar5 + 1;
      pTVar4 = pTVar4 + 4;
    } while (iVar5 < 3);
    return 1;
  case 0xb: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x60] = (undefined1)(bVar1 == 0);
    return 1;
  case 0xc: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x61] = SUB81(uVar6,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed7990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed7990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pTVar6;
  ulonglong uVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((param_1 + 1)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))(this)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x4)),0x5b);
    iVar5 = *(int *)this;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 - 1)));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))(this)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      this[4] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 8) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 0xc) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 0x10) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697a8));
      pcVar4 = ((char *)GEN_TOP((uVar3 + 10)));
      pTVar6 = this + 0x20;
      (*(int *)(gen_frame + 0x0)) = 3;
      do {
        fVar8 = F_00e50660(pcVar4);
        *(float *)pTVar6 = fVar8;
        uVar3 = F_00c51da0(pcVar4,0x2c);
        pTVar6 = pTVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        pcVar4 = ((char *)GEN_TOP((uVar3 + 2)));
      } while ((*(int *)(gen_frame + 0x0)) != 0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      fVar8 = F_00e50660(((char *)GEN_TOP((uVar3 + 9))));
      *(float *)(this + 0x30) = fVar8;
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      cVar1 = *((char *)GEN_TOP((uVar3 + 9)));
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
      this[0x34] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      this[0x35] = SUB81(uVar7,0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar7 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 0x38) = (int)uVar7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,9);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x3c) + 0x48))))(this + 0x3c GEN_EDX_ARG,uVar3 + 8,&(*(char * PTR32 *)(gen_frame + 0x4)));
      if ((char)uVar3 == '\0') {
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,10);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697a8));
      pcVar4 = ((char *)GEN_TOP((uVar3 + 10)));
      pTVar6 = this + 0x50;
      (*(int *)(gen_frame + 0x0)) = 3;
      do {
        fVar8 = F_00e50660(pcVar4);
        *(float *)pTVar6 = fVar8;
        uVar3 = F_00c51da0(pcVar4,0x2c);
        pTVar6 = pTVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        pcVar4 = ((char *)GEN_TOP((uVar3 + 2)));
      } while ((*(int *)(gen_frame + 0x0)) != 0);
      (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar4;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0xb);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      cVar1 = *((char *)GEN_TOP((uVar3 + 9)));
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((uVar3 + 9)));
      this[0x60] = (undefined1)(cVar1 != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x4)),((char *)(gen_frame + 0x8)));
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x4));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x13697ac));
      pcVar4 = ((char *)GEN_TOP((uVar3 + 9)));
      uVar7 = F_00e50570(pcVar4);
      this[0x61] = SUB81(uVar7,0);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = (int)pcVar4;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ed7f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed7f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed8050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed8050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x37c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x374)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x378));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12a9438)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x354));
    pTVar6 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pTVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x34]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x35],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x38),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,9,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158090)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  iVar5 = *(int *)(this + 0x3c);
  uVar4 = F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)));
  ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x34))))(this + 0x3c,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,10,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12a9438)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x258)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x50;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x354));
    pTVar6 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pTVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xb,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x258)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x60]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xc,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x354)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x61],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed93f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed93f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00ed9542: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed9547;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed9542;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed9547: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ed96a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed96a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00ed9870 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ed9870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed9870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ed98b0(void)
{
  GEN_ENTER(0xed98b0u, 0u, 0u, 0u, 0u);
  return 0x2c;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ed98c0(void)
{
  GEN_ENTER(0xed98c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695e4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed98d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed98d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a9188) + param_1 * 4);
}

/* ref: FUN_00ed98f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed98f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed98f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12a91a0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return 0xffffffff;
}

/* ref: FUN_00ed9950 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ed9950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xed9950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1a8;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x13695cc))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a9140) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed99a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed99a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a9170) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed99c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed99c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed99e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed99e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a9158) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a9170) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a9170) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9140) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9a80(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xed9a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12a9158) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12a9140) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a9140) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a9158) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xed9b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a74) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a9158) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed9b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed9b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  return uVar6 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::FishingWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed9c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed9cf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ed9cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed9cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12a949c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 8))),0,0x32);
  *((undefined8 *)GEN_TOP(((int)this + 0x3a))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x42))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x4a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x52))) = 0;
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
  return (uint)this;
}

/* ref: FUN_00ed9da0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ed9da0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xed9da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369638) + 0x10))))(&REFG(undefined * PTR32, 0x1369638),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed9de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369638) + 0x10))))(&REFG(undefined * PTR32, 0x1369638),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xed9e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0x3a;
  case 3: ;
    return in_ecx + 0x54;
  case 4: ;
    return in_ecx + 0x78;
  case 5: ;
    return in_ecx + 0x9c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed9e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x12a9140) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      return (uint)(this + param_2 + 8);
    case 2: ;
      return (uint)(this + param_2 + 0x3a);
    case 3: ;
      return (uint)(this + param_2 * 2 + 0x54);
    case 4: ;
      return (uint)(this + param_2 * 2 + 0x78);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xed9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pFVar6;
  int iVar7;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    pFVar6 = this + 8;
    iVar5 = (int)param_1 - (int)this;
    iVar7 = 0x32;
    do {
      *pFVar6 = pFVar6[iVar5];
      pFVar6 = pFVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x3a;
    iVar7 = 0x19;
    do {
      *pFVar6 = pFVar6[iVar5];
      pFVar6 = pFVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x54;
    iVar7 = 0x12;
    do {
      *(undefined2 *)pFVar6 = *(undefined2 *)(pFVar6 + iVar5);
      pFVar6 = pFVar6 + 2;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    pFVar6 = this + 0x78;
    iVar7 = 0x12;
    do {
      *(undefined2 *)pFVar6 = *(undefined2 *)(pFVar6 + iVar5);
      pFVar6 = pFVar6 + 2;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    uVar4 = param_1[0x27];
    *(uint *)(this + 0x9c) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ed9f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xed9f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
      return uVar4;
    case 1: ;
      pFVar5 = this + 8;
      iVar6 = 0x32;
      do {
        *pFVar5 = pFVar5[(int)param_1 - (int)this];
        pFVar5 = pFVar5 + 1;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 2: ;
      pFVar5 = this + 0x3a;
      iVar6 = 0x19;
      do {
        *pFVar5 = pFVar5[(int)param_1 - (int)this];
        pFVar5 = pFVar5 + 1;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 3: ;
      pFVar5 = this + 0x54;
      iVar6 = 0x12;
      do {
        *(undefined2 *)pFVar5 = *((undefined2 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
        pFVar5 = pFVar5 + 2;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 4: ;
      pFVar5 = this + 0x78;
      iVar6 = 0x12;
      do {
        *(undefined2 *)pFVar5 = *((undefined2 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
        pFVar5 = pFVar5 + 2;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return (uint)pFVar5;
    case 5: ;
      uVar4 = param_1[0x27];
      *(uint *)(this + 0x9c) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00eda090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeda090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00eda193: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00eda198;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00eda193;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00eda198: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00eda260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xeda260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar1);
      this[iVar3 + 8] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x31 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar1);
      this[iVar3 + 0x3a] = SUB81(uVar5,0);
      iVar3 = iVar3 + 1;
      if (0x18 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pFVar4 = this + 0x54;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar1);
      *(short *)pFVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 2;
      if (0x11 < iVar3) {
        return 1;
      }
    }
    break;
  case 4: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pFVar4 = this + 0x78;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar1);
      *(short *)pFVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 2;
      if (0x11 < iVar3) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x9c) = (int)uVar5;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00eda430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeda430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar6 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar3 = F_00c51da0(uVar6 + 2,0x22);
  uVar8 = F_00e50570(uVar6 + 2);
  uVar3 = uVar3 + 1;
  *(int *)(this + 4) = (int)uVar8;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 8] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x32);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x3a] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x54;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
  } while (iVar5 < 0x12);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x78;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    if (0x11 < iVar5) {
LAB_00eda61b: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      *(int *)(this + 0x9c) = (int)uVar8;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00eda61b;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00eda670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeda670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00eda790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xeda790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pFVar3;
  int iVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x32,0);
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar4 + 8],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x32);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x19,0);
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar4 + 0x3a],0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x12,0);
  iVar4 = 0;
  pFVar3 = this + 0x54;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pFVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pFVar3 = pFVar3 + 2;
  } while (iVar4 < 0x12);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x12,0);
  iVar4 = 0;
  pFVar3 = this + 0x78;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pFVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pFVar3 = pFVar3 + 2;
  } while (iVar4 < 0x12);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x9c),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00eda9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeda9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00eda9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xeda9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00edaae3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00edaae8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00edaae3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00edaae8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00edac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedac70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pFVar3;
  int iVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      this[iVar4 + 8] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x31 < iVar4) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      this[iVar4 + 0x3a] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x18 < iVar4) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pFVar3 = this + 0x54;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      *(short *)pFVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pFVar3 = pFVar3 + 2;
      if (0x11 < iVar4) {
        return 1;
      }
    }
    break;
  case 4: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pFVar3 = this + 0x78;
    while (iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      *(short *)pFVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pFVar3 = pFVar3 + 2;
      if (0x11 < iVar4) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x9c) = (int)uVar5;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00edaec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedaec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  undefined * pFVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136983c));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 8] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x32);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    iVar6 = 0;
    do {
      uVar8 = F_00e50570(iVar5);
      this[iVar6 + 0x3a] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(iVar5,0x2c);
      iVar6 = iVar6 + 1;
      iVar5 = uVar3 + 2;
    } while (iVar6 < 0x19);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    pFVar7 = this + 0x54;
    (*(int *)(gen_frame + 0x0)) = 0x12;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pFVar7 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pFVar7 = pFVar7 + 2;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369838));
    iVar5 = uVar3 + 10;
    pFVar7 = this + 0x78;
    (*(int *)(gen_frame + 0x0)) = 0x12;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pFVar7 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pFVar7 = pFVar7 + 2;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136983c));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 0x9c) = (int)uVar8;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00edb1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedb1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00edb300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedb300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x32;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 8],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x5c));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f;
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pFVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 0x32);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x19;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x3a],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x5c));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f;
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pFVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 0x19);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x12;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x54;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x5c));
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pFVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) < 0x12);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x12;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x78;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x5c));
    pFVar6 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pFVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 0x12);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x5c)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x9c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00edbd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedbd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00edbea2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00edbea7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00edbea2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00edbea7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FishingWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00edc000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00edc200(void)
{
  GEN_ENTER(0xedc200u, 0u, 0u, 0u, 0u);
  return 0xd3;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00edc210(void)
{
  GEN_ENTER(0xedc210u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695ec);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a91c8) + param_1 * 4);
}

/* ref: FUN_00edc240 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00edc240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xedc240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12a91cc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  return 0xffffffff;
}

/* ref: FUN_00edc2a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00edc2a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xedc2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1df;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x13695e8))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a91bc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a91c4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12a91c0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a91c4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a91c4) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a91bc) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc3d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xedc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12a91c0) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12a91bc) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a91bc) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a91c0) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xedc450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a8c) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a91c0) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00edc4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xedc4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xedc4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xedc510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedc530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedc550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00edc570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00edc570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xedc570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a9564));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00edc580 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00edc580(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xedc580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xedc590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136963c) + 0x10))))(&REFG(undefined * PTR32, 0x136963c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00edc5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedc5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136963c) + 0x10))))(&REFG(undefined * PTR32, 0x136963c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00edc5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xedc5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 0) {
    return 0;
  }
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::EnterContentInfo::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00edc610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xedc610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

