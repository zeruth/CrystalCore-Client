#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::NpcTradeItem_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00ff3690(void)
{
  GEN_ENTER(0xff3690u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::NpcTradeItem::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff36a0(void)
{
  GEN_ENTER(0xff36a0u, 0u, 0u, 0u, 0u);
  return 0x136b860;
}

/* ref: Application::Network::WorkDefinitions::Position_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00ff36b0(void)
{
  GEN_ENTER(0xff36b0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Position::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff36c0(void)
{
  GEN_ENTER(0xff36c0u, 0u, 0u, 0u, 0u);
  return 0x136b864;
}

/* ref: Application::Network::WorkDefinitions::InfoFcData_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00ff36d0(void)
{
  GEN_ENTER(0xff36d0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::InfoFcData::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff36e0(void)
{
  GEN_ENTER(0xff36e0u, 0u, 0u, 0u, 0u);
  return 0x136b868;
}

/* ref: FUN_00ff36f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff36f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff36f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ff3720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff3720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ff3a20((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00ff3730(void)
{
  GEN_ENTER(0xff3730u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::Recast_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff3770(void)
{
  GEN_ENTER(0xff3770u, 0u, 0u, 0u, 0u);
  return 0x136b850;
}

/* ref: Application::Network::WorkDefinitions::Recast::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::CalcResultParam_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff37b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff37b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::CalcResultParam::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff37e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff37e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::GatheringWork_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3810(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::GatheringWork::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::RetainerList_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::RetainerList::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff38a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff38a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 * in_ecx;
  
  *param_1 = (*(undefined * PTR32 (*)[27])REFP(0x12af77c));
  in_ecx = param_1 + 0x8c;
  iVar1 = 7;
  do {
    in_ecx = in_ecx - 0x10;
    F_00fc6af0(in_ecx GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00e5bc00(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::NpcTradeItem_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::NpcTradeItem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Position_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3960(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Position::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::InfoFcData_TypeInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff39c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff39c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::InfoFcData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff39f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff39f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ff3a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[2] = (*(undefined * PTR32 (*)[27])REFP(0x12afa44));
  param_1[2] = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x12a9294));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ff3a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff3a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1 - 0x10;
  iVar1 = param_2 * 3 - 3;
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + iVar1 * -0x10 - 0x40;
  return iVar1 * 0x10;
}

/* ref: FUN_00ff3a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff3a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x40) + param_1)));
  *((int *)GEN_TOP((param_1 - 8))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 - 0xc))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0xc))) = param_1 - 0x10;
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) + (param_2 * 3 - 3) * -0x10 - 0x40;
  return uVar1;
}

/* ref: FUN_00ff3ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x40) + (int)param_1)));
  param_1[-2] = 1;
  param_1[-3] = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((int *)GEN_TOP((uVar1 + 0x10))) = *((int *)GEN_TOP((uVar1 + 0x10))) - 0x40;
  *((undefined4 * PTR32 *)GEN_TOP((uVar1 + 0xc))) = param_1 - 4;
  return uVar1;
}

/* ref: FUN_00ff3b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3b00(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_00ff3b20 */
GEN_LIB GEN_FRAME uint F_00ff3b20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return 8;
}

/* ref: FUN_00ff3b60 */
GEN_LIB GEN_FRAME uint F_00ff3b60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 8;
}

/* ref: FUN_00ff3b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + 0x1c + in_ecx;
}

/* ref: FUN_00ff3ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + 0x11c + in_ecx;
}

/* ref: FUN_00ff3bc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00ff3bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3bd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff3bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff3c00(void)
{
  GEN_ENTER(0xff3c00u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ff3c10(void)
{
  GEN_ENTER(0xff3c10u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bcac);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afd7c) + param_1 * 4);
}

/* ref: FUN_00ff3c40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff3c40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff3c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12afd88) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3c60u, gen_a0, gen_a1, 0u, 0u);
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
  } while ((int)uVar2 < 3);
  return 0xffffffff;
}

/* ref: FUN_00ff3ca0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff3ca0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff3ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x11;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bca0))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afd58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afd70) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3d58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afd64) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff3d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12afd70) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12afd70) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12afd64) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12afd58) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12afd64) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12afd58) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3dd0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xff3dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12afd64) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12afd58) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12afd58) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12afd64) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xff3e50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d58) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12afd64) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff3ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff3ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  return uVar3 + uVar1 + uVar2;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xff3f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xff3f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff3f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,param_2 + uVar1);
  iVar3 = param_2 + uVar1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff3fa0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ff3ff0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ff3ff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff3ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::Target::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff4000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff4000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bda8) + 0x10))))(&REFG(undefined * PTR32, 0x136bda8),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ff4030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff4030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bda8) + 0x10))))(&REFG(undefined * PTR32, 0x136bda8),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Target::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff4060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff4060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return in_ecx + 8;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return in_ecx + 0x18;
  }
  return in_ecx + 0x10;
}

/* ref: Application::Network::WorkDefinitions::Target::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff4090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff4090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Target::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff40a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff40a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    uVar4 = param_1[5];
    *(uint *)(this + 0x14) = uVar4;
    *(int *)(this + 0x18) = param_1[6];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Target::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff4110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff4110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      *(int *)(this + 8) = param_1[2];
      uVar4 = param_1[3];
      *(uint *)(this + 0xc) = uVar4;
    }
    else {
      if (param_2 == 1) {
        uVar4 = param_1[4];
        *(uint *)(this + 0x10) = uVar4;
        *(int *)(this + 0x14) = param_1[5];
        return uVar4;
      }
      uVar4 = param_2 - 2;
      if (uVar4 == 0) {
        *(int *)(this + 0x18) = param_1[6];
        return 0;
      }
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Target::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff4190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff4190u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff4293: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff4298;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ff4293;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff4298: ;
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

/* ref: Application::Network::WorkDefinitions::Target::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ff4360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xff4360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (param_1 == 0) {
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 0x18) = fVar3;
    return 1;
  }
  uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
  uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
  uVar2 = F_00e50570(uVar1);
  *(ulonglong *)(this + 0x10) = uVar2;
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff43f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff43f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  ulonglong uVar7;
  float fVar8;
  
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
  uVar7 = F_00e50570(uVar3 + 2);
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(ulonglong *)(this + 0x10) = uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar8 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0x18) = fVar8;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ff44f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff44f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Target::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff4610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff4610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff46e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff46e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff4700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff4700u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff4813: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff4818;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ff4813;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff4818: ;
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

/* ref: Application::Network::WorkDefinitions::Target::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff49a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff49a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
  }
  else if (param_1 == 1) {
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 0x10) = uVar2;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    fVar3 = F_00e50660(uVar1);
    *(float *)(this + 0x18) = fVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff4a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff4a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  
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
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bdc4));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bdc4));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 0x10) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bdc4));
    iVar5 = uVar3 + 9;
    fVar7 = F_00e50660(iVar5);
    *(float *)(this + 0x18) = fVar7;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ff4c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff4c20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Target::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff4d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff4d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff5170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5170u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff52c2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ff52c7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ff52c2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ff52c7: ;
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

/* ref: Application::Network::WorkDefinitions::Target::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff5420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ff55f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff55f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff55f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff5630(void)
{
  GEN_ENTER(0xff5630u, 0u, 0u, 0u, 0u);
  return 0xf;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ff5640(void)
{
  GEN_ENTER(0xff5640u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bcf0);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afdf8) + param_1 * 4);
}

/* ref: FUN_00ff5670 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff5670(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff5670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12afe18) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5690u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ff56d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff56d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff56d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x42;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff56e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff56e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bcb0))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afd98) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afdd8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x136bcd0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afdb8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12afdd8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12afdd8) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12afdb8) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12afd98) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12afdb8) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12afd98) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5800(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xff5800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12afdb8) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12afd98) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12afd98) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12afdb8) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xff5880u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x136bcd0) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12afdb8) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff5910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff5910u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5980(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xff5980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  int * piVar2;
  undefined2 uVar3;
  int iVar4;
  uint * puVar5;
  int iVar6;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD,param_3);
  *param_6 = uVar1;
  puVar5 = param_6 + 1;
  uVar3 = (undefined2)param_5;
  if (param_3 == 6) {
    if ((param_4 & 3) == 0) {
      *(byte *)puVar5 = param_4;
      *((undefined2 *)GEN_TOP(((int)param_6 + 5))) = uVar3;
      puVar5 = ((uint *)GEN_TOP(((int)param_6 + 7)));
      if (param_5 != 0) {
        iVar6 = param_2 + 0x1c;
        iVar4 = param_5;
        do {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x3c))))(REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,iVar6,puVar5);
          puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar1)));
          iVar6 = iVar6 + 0x20;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return (int)puVar5 - (int)param_6;
      }
      goto LAB_00ff5a8f;
    }
    if ((param_4 & 3) != 1) goto LAB_00ff5a8f;
    *(byte *)puVar5 = param_4;
    *((undefined2 *)GEN_TOP(((int)param_6 + 5))) = uVar3;
    iVar4 = param_5 * 0x20 + 0x1c;
    piVar2 = (int *)REFG(undefined * PTR32, 0x136bce8);
  }
  else {
    if (param_3 != 7) goto LAB_00ff5a8f;
    if ((param_4 & 3) == 0) {
      *(byte *)puVar5 = param_4;
      *((undefined2 *)GEN_TOP(((int)param_6 + 5))) = uVar3;
      puVar5 = ((uint *)GEN_TOP(((int)param_6 + 7)));
      if (param_5 != 0) {
        iVar6 = param_2 + 0x11c;
        iVar4 = param_5;
        do {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x3c))))(REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,iVar6,puVar5);
          puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar1)));
          iVar6 = iVar6 + 0x20;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return (int)puVar5 - (int)param_6;
      }
      goto LAB_00ff5a8f;
    }
    if ((param_4 & 3) != 1) goto LAB_00ff5a8f;
    *(byte *)puVar5 = param_4;
    *((undefined2 *)GEN_TOP(((int)param_6 + 5))) = uVar3;
    iVar4 = param_5 * 0x20 + 0x11c;
    piVar2 = (int *)REFG(undefined * PTR32, 0x136bcec);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG,iVar4 + param_2,(int)param_6 + 7);
  puVar5 = ((uint *)GEN_TOP(((int)param_6 + 7 + uVar1)));
LAB_00ff5a8f: ;
  return (int)puVar5 - (int)param_6;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xff5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar2;
  puVar5 = param_7 + 1;
  if (param_2 == 6) {
    if (((byte)param_3 & 3) == 2) {
      *(byte *)puVar5 = (byte)param_3;
      uVar1 = ((ushort)param_5 - (ushort)param_4) + 1;
      uVar4 = (uint)uVar1;
      *((ushort *)GEN_TOP(((int)param_7 + 5))) = (ushort)param_4;
      *((ushort *)GEN_TOP(((int)param_7 + 7))) = (ushort)param_5;
      uVar2 = (uint)(uVar1 >> 5);
      puVar5 = ((uint *)GEN_TOP(((int)param_7 + 9)));
      uVar3 = 0;
      if (uVar2 != 0xffffffff) {
        do {
          *puVar5 = *((uint *)GEN_TOP((param_6 + uVar3 * 4)));
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar3 < uVar2 + 1);
      }
      param_3 = 0;
      if ((ushort)param_4 <= (ushort)param_5) {
        uVar2 = (uint)(ushort)param_4;
        param_4 = uVar2 * 0x20 + 0x1c + param_1;
        do {
          if ((*((uint *)GEN_TOP((param_6 + (param_3 >> 5 & 0x7ff) * 4))) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x3c))))(REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,param_4,puVar5);
            puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar3)));
          }
          param_3 = param_3 + 1;
          param_4 = param_4 + 0x20;
          uVar2 = uVar2 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  else if ((param_2 == 7) && (((byte)param_3 & 3) == 2)) {
    *(byte *)puVar5 = (byte)param_3;
    uVar1 = ((ushort)param_5 - (ushort)param_4) + 1;
    uVar4 = (uint)uVar1;
    *((ushort *)GEN_TOP(((int)param_7 + 5))) = (ushort)param_4;
    *((ushort *)GEN_TOP(((int)param_7 + 7))) = (ushort)param_5;
    uVar2 = (uint)(uVar1 >> 5);
    puVar5 = ((uint *)GEN_TOP(((int)param_7 + 9)));
    uVar3 = 0;
    if (uVar2 != 0xffffffff) {
      do {
        *puVar5 = *((uint *)GEN_TOP((param_6 + uVar3 * 4)));
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 < uVar2 + 1);
    }
    param_3 = 0;
    if ((ushort)param_4 <= (ushort)param_5) {
      uVar2 = (uint)(ushort)param_4;
      param_4 = uVar2 * 0x20 + 0x11c + param_1;
      do {
        if ((*((uint *)GEN_TOP((param_6 + (param_3 >> 5 & 0x7ff) * 4))) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x3c))))(REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,param_4,puVar5);
          puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar3)));
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 0x20;
        uVar2 = uVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return (int)puVar5 - (int)param_7;
    }
  }
  return (int)puVar5 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff5c40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff5ce0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ff5d80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff5d80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff5d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b01bc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  puVar2 = in_ecx + 7;
  iVar1 = 7;
  do {
    F_00fd8580(puVar2 GEN_EDX_FWD);
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  puVar2 = in_ecx + 0x47;
  iVar1 = 7;
  do {
    F_00fd8580(puVar2 GEN_EDX_ARG);
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)in_ecx;
}

/* ref: FUN_00ff5de0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff5de0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff5de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  undefined4 * puVar1;
  int iVar2;
  
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b01bc));
  puVar1 = in_ecx + 0x87;
  iVar2 = 7;
  do {
    puVar1 = puVar1 - 8;
    F_00fd85b0(puVar1 GEN_EDX_FWD);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  puVar1 = in_ecx + 0x47;
  iVar2 = 7;
  do {
    puVar1 = puVar1 - 8;
    F_00fd85b0(puVar1 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return in_EAX;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdac) + 0x10))))(&REFG(undefined * PTR32, 0x136bdac),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ff5e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff5e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdac) + 0x10))))(&REFG(undefined * PTR32, 0x136bdac),param_1);
  if (-1 < (int)uVar2) {
    return (uint)this;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))))((int)this + 0x1c,param_1);
  if (uVar2 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x11c))) + 8))))((int)this + 0x11c,param_1);
    if ((uVar2 != 0) && (param_2 < 8)) {
      piVar1 = ((int *)GEN_TOP((param_2 * 0x20 + 0x11c + (int)this)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
  else if (param_2 < 8) {
    piVar1 = ((int *)GEN_TOP((param_2 * 0x20 + 0x1c + (int)this)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff5f00u, gen_a0, gen_a1, 0u, 0u);
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
  case 7: ;
    return in_ecx + 0x11c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff5f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff5f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x12afd98) + param_1 * 4)) {
    if (param_1 == 6) {
      return (uint)(this + param_2 * 0x20 + 0x1c);
    }
    if (param_1 == 7) {
      return (uint)(this + param_2 * 0x20 + 0x11c);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ff5fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff5fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    *(int *)(this + 8) = param_1[2];
    this[0xc] = *(undefined *)(param_1 + 3);
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    *(int *)(this + 0x18) = param_1[6];
    pAVar5 = this + 0x1c;
    iVar7 = (int)param_1 - (int)this;
    param_1 = ((int *)GEN_TOP(0x8));
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar5 + 0x18))))(pAVar5 GEN_EDX_ARG,pAVar5 + iVar7);
      pAVar5 = pAVar5 + 0x20;
      param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
    pAVar5 = this + 0x11c;
    iVar6 = 8;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar5 + 0x18))))(pAVar5 GEN_EDX_ARG,pAVar5 + iVar7);
      pAVar5 = pAVar5 + 0x20;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff6070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff6070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
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
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
      return uVar4;
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      return uVar4;
    case 2: ;
      this[0xc] = *(undefined *)(param_1 + 3);
      return uVar4;
    case 3: ;
      uVar4 = param_1[4];
      *(uint *)(this + 0x10) = uVar4;
      return uVar4;
    case 4: ;
      *(int *)(this + 0x14) = param_1[5];
      return uVar4;
    case 5: ;
      *(int *)(this + 0x18) = param_1[6];
      return uVar4;
    case 6: ;
      pAVar5 = this + 0x1c;
      iVar6 = 8;
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar5 + 0x18))))(pAVar5 GEN_EDX_ARG,pAVar5 + ((int)param_1 - (int)this));
        pAVar5 = pAVar5 + 0x20;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return uVar4;
    case 7: ;
      pAVar5 = this + 0x11c;
      iVar6 = 8;
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar5 + 0x18))))(pAVar5 GEN_EDX_ARG,pAVar5 + ((int)param_1 - (int)this));
        pAVar5 = pAVar5 + 0x20;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff6190u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff6293: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff6298;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ff6293;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff6298: ;
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

/* ref: Application::Network::WorkDefinitions::ActionResult::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ff6360(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xff6360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_FWD);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar2);
    *((int *)GEN_TOP((param_1 + 4))) = (int)uVar6;
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar2);
    *((int *)GEN_TOP((param_1 + 8))) = (int)uVar6;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar2);
    *((char *)GEN_TOP((param_1 + 0xc))) = (char)uVar6;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar2);
    *((int *)GEN_TOP((param_1 + 0x10))) = (int)uVar6;
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar2);
    *((float *)GEN_TOP((param_1 + 0x14))) = fVar7;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(param_3 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar2);
    *((int *)GEN_TOP((param_1 + 0x18))) = (int)uVar6;
    return 1;
  case 6: ;
    uVar2 = F_00e8c050(param_3 GEN_EDX_ARG);
    iVar5 = 0;
    piVar4 = ((int *)GEN_TOP((param_1 + 0x1c)));
    while (iVar5 < (int)uVar2) {
      iVar1 = *piVar4;
      uVar3 = F_00e9e450(param_3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      if (param_4 == '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x20))))(piVar4,uVar3);
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x38))))(piVar4,uVar3);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 8;
      if (7 < iVar5) {
        return 1;
      }
    }
    break;
  case 7: ;
    uVar2 = F_00e8c050(param_3 GEN_EDX_ARG);
    iVar5 = 0;
    piVar4 = ((int *)GEN_TOP((param_1 + 0x11c)));
    do {
      if ((int)uVar2 <= iVar5) {
        return 1;
      }
      iVar1 = *piVar4;
      uVar3 = F_00e9e450(param_3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      if (param_4 == '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x20))))(piVar4,uVar3);
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x38))))(piVar4,uVar3);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 8;
    } while (iVar5 < 8);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff6520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  undefined * pAVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  iVar5 = *(int *)this;
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((param_1 + 1)));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))(this)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x0)),0x5b);
    (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 - 1)));
    pcVar4 = ((char *)GEN_TOP(F_00c51da0(uVar3 + 2,0x22)));
    uVar8 = F_00e50570(uVar3 + 2);
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar4;
    *(int *)(this + 4) = (int)uVar8;
    pcVar6 = ((char *)GEN_TOP(F_00c51da0(pcVar4 + 3,0x22)));
    uVar8 = F_00e50570(pcVar4 + 3);
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar6;
    *(int *)(this + 8) = (int)uVar8;
    pcVar4 = ((char *)GEN_TOP(F_00c51da0(pcVar6 + 3,0x22)));
    uVar8 = F_00e50570(pcVar6 + 3);
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar4;
    this[0xc] = SUB81(uVar8,0);
    pcVar6 = ((char *)GEN_TOP(F_00c51da0(pcVar4 + 3,0x22)));
    uVar8 = F_00e50570(pcVar4 + 3);
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar6;
    *(int *)(this + 0x10) = (int)uVar8;
    pcVar4 = ((char *)GEN_TOP(F_00c51da0(pcVar6 + 3,0x22)));
    fVar9 = F_00e50660(pcVar6 + 3);
    *(float *)(this + 0x14) = fVar9;
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar4;
    uVar3 = F_00c51da0(pcVar4 + 3,0x22);
    uVar8 = F_00e50570(pcVar4 + 3);
    *(int *)(this + 0x18) = (int)uVar8;
    (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 1)));
    F_00fb9a80(((char *)GEN_TOP((uVar3 + 1))),0x5b,0x5d);
    iVar5 = 0;
    pAVar7 = this + 0x1c;
    do {
      pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0)) + 2;
      F_00c51da0(pcVar4,0x22);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar7 + 0x44))))(pAVar7 GEN_EDX_ARG,pcVar4,&(*(char * PTR32 *)(gen_frame + 0x0)));
      if ((char)uVar3 == '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
      pAVar7 = pAVar7 + 0x20;
    } while (iVar5 < 8);
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0)) + 2;
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar4;
    F_00fb9a80(pcVar4,0x5b,0x5d);
    iVar5 = 0;
    pAVar7 = this + 0x11c;
    do {
      pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0)) + 2;
      F_00c51da0(pcVar4,0x22);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar7 + 0x44))))(pAVar7 GEN_EDX_ARG,pcVar4,&(*(char * PTR32 *)(gen_frame + 0x0)));
      if ((char)uVar3 == '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
      pAVar7 = pAVar7 + 0x20;
    } while (iVar5 < 8);
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar4;
    if (param_2 != ((uint *)GEN_TOP(0x0))) {
      uVar3 = F_00c51da0(pcVar4,0x7d);
      *param_2 = uVar3;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ff6730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff6730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionResult::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6850(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xff6850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 4))),0);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 8))),0);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x1080800),(uint)*((byte *)GEN_TOP((param_1 + 0xc))),0);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 0x10))),0);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x113bf34),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x14)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((param_1 + 0x14)))) >> 0x20));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0xc)),0x20,&REFG(undefined, 0x1080800),*((undefined4 *)GEN_TOP((param_1 + 0x18))),0);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,6,0)));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_00ea83e0(pvVar2 GEN_EDX_ARG,8,0);
  (*(int *)(gen_frame + 0x0)) = 0;
  piVar5 = ((int *)GEN_TOP((param_1 + 0x1c)));
  do {
    if (param_3 == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP((*piVar5 + 0x28)));
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x0)) >> 0x1f);
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP((*piVar5 + 0x40)));
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x0)) >> 0x1f);
    }
    (*((code *)GEN_TOP(*puVar4)))(piVar5,uVar3);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    piVar5 = piVar5 + 8;
  } while ((*(int *)(gen_frame + 0x0)) < 8);
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_2 GEN_EDX_ARG,7,0)));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_00ea83e0(pvVar2 GEN_EDX_ARG,8,0);
  iVar6 = 0;
  piVar5 = ((int *)GEN_TOP((param_1 + 0x11c)));
  do {
    iVar1 = *piVar5;
    uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar6 >> 0x1f);
    if (param_3 == '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x28))))(piVar5,uVar3);
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x40))))(piVar5,uVar3);
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 8;
  } while (iVar6 < 8);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff6a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff6a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff6aa0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff6bb3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff6bb8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ff6bb3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff6bb8: ;
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

/* ref: Application::Network::WorkDefinitions::ActionResult::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff6d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 8) = (int)uVar5;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[0xc] = SUB81(uVar5,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x10) = (int)uVar5;
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    fVar6 = F_00e50660(uVar2);
    *(float *)(this + 0x14) = fVar6;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(int *)(this + 0x18) = (int)uVar5;
    return 1;
  case 6: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x1c;
    while (iVar4 < (int)uVar2) {
      iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      uVar3 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x2c))))((*(undefined * PTR32 *)(gen_frame + 0x0)),uVar3);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x20;
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        return 1;
      }
    }
    break;
  case 7: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x11c;
    do {
      if ((int)uVar2 <= iVar4) {
        return 1;
      }
      iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      uVar3 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x2c))))((*(undefined * PTR32 *)(gen_frame + 0x0)),uVar3);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x20;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff6f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pAVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((param_1 + 1)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x0)),0x5b);
    iVar5 = *(int *)this;
    (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 - 1)));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))(this)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      uVar8 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 4) = (int)uVar8;
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      uVar8 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 8) = (int)uVar8;
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      uVar8 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      this[0xc] = SUB81(uVar8,0);
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      uVar8 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 0x10) = (int)uVar8;
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      fVar9 = F_00e50660(((char *)GEN_TOP((uVar3 + 9))));
      *(float *)(this + 0x14) = fVar9;
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be54));
      uVar8 = F_00e50570(((char *)GEN_TOP((uVar3 + 9))));
      *(int *)(this + 0x18) = (int)uVar8;
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP((uVar3 + 9)));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be50));
      iVar5 = uVar3 + 10;
      iVar7 = 0;
      pAVar6 = this + 0x1c;
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar6 + 0x48))))(pAVar6 GEN_EDX_ARG,iVar5 - 1,&(*(char * PTR32 *)(gen_frame + 0x0)));
        if ((char)uVar3 == '\0') {
          return 0;
        }
        uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x0)),0x7b);
        iVar7 = iVar7 + 1;
        iVar5 = uVar3 + 1;
        pAVar6 = pAVar6 + 0x20;
      } while (iVar7 < 8);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136be50));
      iVar5 = uVar3 + 10;
      iVar7 = 0;
      pAVar6 = this + 0x11c;
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar6 + 0x48))))(pAVar6 GEN_EDX_ARG,iVar5 - 1,&(*(char * PTR32 *)(gen_frame + 0x0)));
        if ((char)uVar3 == '\0') {
          return 0;
        }
        uVar3 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x0)),0x7b);
        iVar7 = iVar7 + 1;
        iVar5 = uVar3 + 1;
        pAVar6 = pAVar6 + 0x20;
      } while (iVar7 < 8);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = (int)(*(char * PTR32 *)(gen_frame + 0x0));
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ff7370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff7370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ActionResult::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff7490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff7490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0xc],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x64)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158090)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar11 = 0;
  uVar9 = 8;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar11);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x1c;
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar7 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0));
    iVar5 = (*(int *)(gen_frame + 0xc)) >> 0x1f;
    iVar10 = (*(int *)(gen_frame + 0xc));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
    uVar4 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar10,iVar5);
    ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x34))))((*(undefined * PTR32 *)(gen_frame + 0x0)),uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x20;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 8);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158090)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar11 = 0;
  uVar9 = 8;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar11);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  iVar7 = 0;
  pAVar8 = this + 0x11c;
  do {
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar10 = *(int *)pAVar8;
    iVar6 = iVar7 >> 0x1f;
    iVar5 = iVar7;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
    uVar4 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar6);
    ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x34))))(pAVar8,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    iVar7 = iVar7 + 1;
    pAVar8 = pAVar8 + 0x20;
  } while (iVar7 < 8);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff8060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8060u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff81b2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ff81b7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ff81b2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ff81b7: ;
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

/* ref: Application::Network::WorkDefinitions::ActionResult::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff8310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ff84e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff84e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff84e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  iVar3 = in_ecx + 0x1c;
  iVar2 = 8;
  do {
    iVar4 = iVar2;
    F_00fdac90(iVar3 GEN_EDX_FWD);
    iVar3 = iVar3 + 0x20;
    iVar2 = iVar4 - 1;
  } while (iVar2 != 0);
  iVar3 = in_ecx + 0x11c;
  iVar4 = iVar4 + 7;
  do {
    uVar1 = F_00fdac90(iVar3 GEN_EDX_ARG);
    iVar3 = iVar3 + 0x20;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ff8560(void)
{
  GEN_ENTER(0xff8560u, 0u, 0u, 0u, 0u);
  return 0x18;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ff8570(void)
{
  GEN_ENTER(0xff8570u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bd28);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afed8) + param_1 * 4);
}

/* ref: FUN_00ff85a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff85a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff85a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12aff0c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff85c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff85c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ff8600 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ff8600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xff8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0xdb;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bcf4))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afe3c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afea4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3d64) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afe70) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff86b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12afea4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12afea4) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12afe70) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12afe3c) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12afe70) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12afe3c) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8730(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xff8730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12afe70) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12afe3c) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12afe3c) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12afe70) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff87b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xff87b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d64) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12afe70) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff8840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff8840u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff88f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xff88f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xff8910u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff8930u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff8a10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ff8af0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ff8af0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xff8af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb0) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ff8b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff8b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb0) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff8b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xff8b60u, gen_a0, gen_a1, 0u, 0u);
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
    return in_ecx + 0x20;
  case 7: ;
    return in_ecx + 0x30;
  case 8: ;
    return in_ecx + 0x34;
  case 9: ;
    return in_ecx + 0x38;
  case 10: ;
    return in_ecx + 0x3c;
  case 0xb: ;
    return in_ecx + 0x3d;
  case 0xc: ;
    return in_ecx + 0x3e;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ff8c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff8c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff8c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff8c20u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff8d23: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff8d28;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ff8d23;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff8d28: ;
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ff8df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xff8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pTVar5;
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
    *(int *)(this + 8) = (int)uVar6;
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0x10) = (int)uVar6;
    return 1;
  case 4: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x14] = SUB81(uVar6,0);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x18) = fVar7;
    return 1;
  case 6: ;
    iVar4 = 0;
    pTVar5 = this + 0x20;
    break;
  case 7: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x30) = fVar7;
    return 1;
  case 8: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x34) = fVar7;
    return 1;
  case 9: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x38) = fVar7;
    return 1;
  case 10: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_ARG)));
    bVar1 = F_0042b740(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x3c] = (undefined1)(bVar1 != 0);
    return 1;
  case 0xb: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_ARG)));
    bVar1 = F_0042b740(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x3d] = (undefined1)(bVar1 != 0);
    return 1;
  case 0xc: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x3e] = SUB81(uVar6,0);
    return 1;
  default: ;
    return 0;
  }
  do {
    uVar3 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
    uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)pTVar5 = fVar7;
    iVar4 = iVar4 + 1;
    pTVar5 = pTVar5 + 4;
  } while (iVar4 < 3);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff9020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff9020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pTVar7;
  ulonglong uVar8;
  float fVar9;
  
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
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 8) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar8;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  this[0x14] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  fVar9 = F_00e50660(uVar6 + 3);
  *(float *)(this + 0x18) = fVar9;
  uVar3 = uVar3 + 1;
  pTVar7 = this + 0x20;
  (*(int *)(gen_frame + 0x0)) = 3;
  do {
    iVar5 = uVar3 + 3;
    uVar3 = F_00c51da0(iVar5,0x22);
    fVar9 = F_00e50660(iVar5);
    *(float *)pTVar7 = fVar9;
    pTVar7 = pTVar7 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  uVar6 = F_00c51da0(uVar3 + 4,0x22);
  fVar9 = F_00e50660(uVar3 + 4);
  *(float *)(this + 0x30) = fVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  fVar9 = F_00e50660(uVar6 + 3);
  *(float *)(this + 0x34) = fVar9;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar9 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0x38) = fVar9;
  uVar3 = F_00c51da0(((char *)GEN_TOP((uVar6 + 3))),0x22);
  this[0x3c] = (undefined1)(*((char *)GEN_TOP((uVar6 + 3))) != '0');
  uVar6 = F_00c51da0(((char *)GEN_TOP((uVar3 + 3))),0x22);
  this[0x3d] = (undefined1)(*((char *)GEN_TOP((uVar3 + 3))) != '0');
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x3e] = SUB81(uVar8,0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ff9220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff9220u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff9340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff9340u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x20))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x20)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x24))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x24)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x28))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x28)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,2,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,puVar3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x34))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x34)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,9,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x38))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x38)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,10,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x3c]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xb,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x3d]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xc,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x3e],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ff96b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff96b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff96d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xff96d0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ff97e3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ff97e8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ff97e3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ff97e8: ;
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff9970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff9970u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x14] = SUB81(uVar6,0);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x18) = fVar7;
    return 1;
  case 6: ;
    iVar5 = 0;
    pTVar4 = this + 0x20;
    break;
  case 7: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x30) = fVar7;
    return 1;
  case 8: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x34) = fVar7;
    return 1;
  case 9: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 0x38) = fVar7;
    return 1;
  case 10: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x3c] = (undefined1)(bVar1 == 0);
    return 1;
  case 0xb: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar8);
    this[0x3d] = (undefined1)(bVar1 == 0);
    return 1;
  case 0xc: ;
    uVar3 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar3);
    this[0x3e] = SUB81(uVar6,0);
    return 1;
  default: ;
    return 0;
  }
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
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ff9c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xff9c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pTVar6;
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
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[4] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 8) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0x10) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x14] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x18) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea4));
      iVar5 = uVar3 + 10;
      pTVar6 = this + 0x20;
      (*(int *)(gen_frame + 0x0)) = 3;
      do {
        fVar8 = F_00e50660(iVar5);
        *(float *)pTVar6 = fVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pTVar6 = pTVar6 + 4;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x30) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,8);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x34) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,9);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0x38) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,10);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      this[0x3c] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0xb);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      this[0x3d] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0xc);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x3e] = SUB81(uVar7,0);
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ffa190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffa190u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffa2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffa2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x4cc, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c8));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12a9438)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x20;
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x4a4));
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x34))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x34)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,9,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,9);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,9);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x38))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x38)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,10,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,10);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x450)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x450)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,10);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x300)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x3c]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x258)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x258)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xb,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xb);
  F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x3fc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3fc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x3fc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x3a8)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xb);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3a8)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x3a8)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x354)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x354)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x354)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x3d]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,0xc,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x204)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0xc);
  F_0042c880(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0xc);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x4a4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x3e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x15c)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffb5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffb5b0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffb702: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ffb707;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ffb702;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ffb707: ;
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

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffb860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffb860u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ffba60(void)
{
  GEN_ENTER(0xffba60u, 0u, 0u, 0u, 0u);
  return 0x2a;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ffba70(void)
{
  GEN_ENTER(0xffba70u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bd44);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffba80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12aff8c) + param_1 * 4);
}

/* ref: FUN_00ffbaa0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ffbaa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xffbaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12affa4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbac0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ffbb00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ffbb00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xffbb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1a0;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bd2c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12aff44) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12aff74) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3d98) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12aff5c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12aff74) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12aff74) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12aff5c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12aff44) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12aff5c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12aff44) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbc30(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xffbc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12aff5c) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12aff44) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12aff44) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12aff5c) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xffbcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3d98) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12aff5c) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffbd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffbd40u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xffbda0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xffbdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffbde0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffbe60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ffbee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffbee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffbee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b02dc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00ffbf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ffbf10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffbf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbf20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb4) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb4),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ffbf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffbf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb4) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb4),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbf80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xffbf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 10;
  case 3: ;
    return in_ecx + 0xc;
  case 4: ;
    return in_ecx + 0x10;
  case 5: ;
    return in_ecx + 0x14;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffbfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffbfe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffbff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffbff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    *(short *)(this + 8) = (short)param_1[2];
    *(undefined2 *)(this + 10) = *((undefined2 *)GEN_TOP(((int)param_1 + 10)));
    uVar4 = param_1[3];
    *(uint *)(this + 0xc) = uVar4;
    *(int *)(this + 0x10) = param_1[4];
    this[0x14] = *(undefined *)(param_1 + 5);
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffc060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffc060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
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
      *(short *)(this + 8) = (short)param_1[2];
      return uVar4;
    case 2: ;
      *(undefined2 *)(this + 10) = *((undefined2 *)GEN_TOP(((int)param_1 + 10)));
      return uVar4;
    case 3: ;
      uVar4 = param_1[3];
      *(uint *)(this + 0xc) = uVar4;
      return uVar4;
    case 4: ;
      *(int *)(this + 0x10) = param_1[4];
      return uVar4;
    case 5: ;
      this[0x14] = *(undefined *)(param_1 + 5);
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffc120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffc120u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffc223: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ffc228;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ffc223;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ffc228: ;
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ffc2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xffc2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffc400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffc400u, gen_a0, gen_a1, gen_a2, 0u);
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
  ulonglong uVar7;
  
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
  uVar7 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 8) = (short)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(short *)(this + 10) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e505e0(uVar6 + 3);
  *(int *)(this + 0xc) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e505e0(uVar3 + 3);
  *(int *)(this + 0x10) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[0x14] = SUB81(uVar7,0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ffc540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffc540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffc660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffc660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffc7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffc7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffc7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffc7e0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffc8f3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ffc8f8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ffc8f3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ffc8f8: ;
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffca80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 8) = (short)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(short *)(this + 10) = (short)uVar2;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(int *)(this + 0xc) = (int)uVar2;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffcc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffcc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
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
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 8) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 10) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(int *)(this + 0xc) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    *(int *)(this + 0x10) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bf44));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x14] = SUB81(uVar6,0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ffcec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffcec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffcfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffcfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 8),0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 10),0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
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
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffd7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffd7e0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffd932: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ffd937;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ffd932;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ffd937: ;
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

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffda90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffda90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ffdc60 */
GEN_LIB GEN_NOFRAME unsigned int F_00ffdc60(void)
{
  GEN_ENTER(0xffdc60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ffdc90(void)
{
  GEN_ENTER(0xffdc90u, 0u, 0u, 0u, 0u);
  return 0x33;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00ffdca0(void)
{
  GEN_ENTER(0xffdca0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bd58);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12afff0) + param_1 * 4);
}

/* ref: FUN_00ffdcd0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ffdcd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xffdcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12b0000) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdcf0u, gen_a0, gen_a1, 0u, 0u);
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
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

/* ref: FUN_00ffdd30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ffdd30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xffdd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1d8;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bd48))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12affc0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12affe0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3db0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffddc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12affd0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffdde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12affe0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12affe0) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12affd0) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12affc0) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12affd0) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12affc0) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffde60(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xffde60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12affd0) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12affc0) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12affc0) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12affd0) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xffdee0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3db0) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12affd0) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffdf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffdf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xffdfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xffdfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffdff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffdff0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe050u, gen_a0, gen_a1, gen_a2, 0u);
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
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ffe0b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffe0b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffe0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b03a4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ffe0d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ffe0d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xffe0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb8) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb8),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ffe110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdb8) + 0x10))))(&REFG(undefined * PTR32, 0x136bdb8),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xffe140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 8;
  case 1: ;
    return in_ecx + 0x10;
  case 2: ;
    return in_ecx + 0x14;
  case 3: ;
    return in_ecx + 0x15;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffe190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf6 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ffe1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 5);
    this[0x14] = *(undefined *)(param_1 + 5);
    this[0x15] = *((undefined *)GEN_TOP(((int)param_1 + 0x15)));
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 RVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[2];
      *(uint *)(this + 8) = uVar5;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 1: ;
      *(int *)(this + 0x10) = param_1[4];
      return param_2;
    case 2: ;
      RVar1 = *(undefined *)(param_1 + 5);
      this[0x14] = RVar1;
      return CONCAT31((int3)(param_2 >> 8),RVar1);
    case 3: ;
      this[0x15] = *((undefined *)GEN_TOP(((int)param_1 + 0x15)));
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffe2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe2b0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffe3b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ffe3b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ffe3b3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ffe3b8: ;
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ffe480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xffe480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    this[0x15] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffe540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe540u, gen_a0, gen_a1, gen_a2, 0u);
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
  ulonglong uVar7;
  
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
  uVar7 = F_00e50570(uVar3 + 2);
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e505e0(uVar3 + 3);
  this[0x14] = SUB81(uVar7,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e505e0(uVar6 + 3);
  this[0x15] = SUB81(uVar7,0);
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ffe650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe650u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffe770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffe770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),(int)(char)this[0x14],(int)(char)this[0x14] >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),(int)(char)this[0x15],(int)(char)this[0x15] >> 0x1f);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffe870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffe890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffe890u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00ffe9a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ffe9a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ffe9a3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ffe9a8: ;
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffeb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffeb30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e505e0(uVar1);
    this[0x15] = SUB81(uVar2,0);
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffec70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffec70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
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
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bfe8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bfe8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x10) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bfe8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    this[0x14] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136bfe8));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e505e0(iVar5);
    this[0x15] = SUB81(uVar6,0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ffee70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffee70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00ffef90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffef90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x12aa560));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),(int)(char)this[0x14],(int)(char)this[0x14] >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x12aa560));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),(int)(char)this[0x15],(int)(char)this[0x15] >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00fff500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfff500u, gen_a0, gen_a1, 0u, 0u);
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
LAB_00fff652: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00fff657;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00fff652;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00fff657: ;
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

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00fff7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfff7b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00fff980 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00fff980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xfff980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined2 *)GEN_TOP((in_ecx + 0x14))) = 0;
  return;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00fff9b0(void)
{
  GEN_ENTER(0xfff9b0u, 0u, 0u, 0u, 0u);
  return 0x39;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00fff9c0(void)
{
  GEN_ENTER(0xfff9c0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bd7c);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fff9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfff9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0074) + param_1 * 4);
}

/* ref: FUN_00fff9f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00fff9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xfff9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12b0094) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffa10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00fffa50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00fffa50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xfffa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1fc;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bd5c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0014) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0054) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3dc0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0034) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b0054) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b0054) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b0034) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b0014) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b0034) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b0014) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffb80(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xfffb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12b0034) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12b0014) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b0014) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b0034) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xfffc00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3dc0) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b0034) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00fffc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xfffc90u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xfffd00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xfffd20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xfffd40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xfffde0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00fffe80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00fffe80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xfffe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b046c));
  *(undefined1 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00fffeb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00fffeb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xfffeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xfffec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdbc) + 0x10))))(&REFG(undefined * PTR32, 0x136bdbc),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00fffef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00fffef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xfffef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdbc) + 0x10))))(&REFG(undefined * PTR32, 0x136bdbc),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffff20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xffff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0x10;
  case 3: ;
    return in_ecx + 0x11;
  case 4: ;
    return in_ecx + 0x14;
  case 5: ;
    return in_ecx + 0x18;
  case 6: ;
    return in_ecx + 0x1c;
  case 7: ;
    return in_ecx + 0x1e;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ffff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xffff90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ffffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xffffa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    this[0x10] = *(undefined *)(param_1 + 4);
    this[0x11] = *((undefined *)GEN_TOP(((int)param_1 + 0x11)));
    *(int *)(this + 0x14) = param_1[5];
    uVar4 = param_1[6];
    *(uint *)(this + 0x18) = uVar4;
    *(short *)(this + 0x1c) = (short)param_1[7];
    *(undefined2 *)(this + 0x1e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x1e)));
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01000020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1000020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 RVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar6 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      RVar1 = *(undefined *)(param_1 + 1);
      this[4] = RVar1;
      return CONCAT31(uVar6,RVar1);
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 2: ;
      RVar1 = *(undefined *)(param_1 + 4);
      this[0x10] = RVar1;
      return CONCAT31(uVar6,RVar1);
    case 3: ;
      this[0x11] = *((undefined *)GEN_TOP(((int)param_1 + 0x11)));
      return uVar5;
    case 4: ;
      *(int *)(this + 0x14) = param_1[5];
      return uVar5;
    case 5: ;
      uVar5 = param_1[6];
      *(uint *)(this + 0x18) = uVar5;
      return uVar5;
    case 6: ;
      *(short *)(this + 0x1c) = (short)param_1[7];
      return uVar5;
    case 7: ;
      *(undefined2 *)(this + 0x1e) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x1e)));
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01000100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1000100u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01000203: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01000208;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01000203;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01000208: ;
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

/* ref: Application::Network::WorkDefinitions::RequestAction::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010002d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10002d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  undefined * puVar4;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    puVar4 = &REFG(undefined, 0x1158a00);
    this_00 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_FWD)));
    bVar1 = F_0042b740(this_00 GEN_EDX_ARG,puVar4);
    this[4] = (undefined1)(bVar1 != 0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar3;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar3,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    this[0x11] = SUB81(uVar3,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(int *)(this + 0x14) = (int)uVar3;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(int *)(this + 0x18) = (int)uVar3;
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(short *)(this + 0x1c) = (short)uVar3;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(short *)(this + 0x1e) = (short)uVar3;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01000430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1000430u, gen_a0, gen_a1, gen_a2, 0u);
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
  ulonglong uVar7;
  
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
  uVar6 = F_00c51da0(((char *)GEN_TOP((uVar3 + 2))),0x22);
  this[4] = (undefined1)(*((char *)GEN_TOP((uVar3 + 2))) != '0');
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(ulonglong *)(this + 8) = uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  this[0x10] = SUB81(uVar7,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[0x11] = SUB81(uVar7,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0x14) = (int)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x18) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(short *)(this + 0x1c) = (short)uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(short *)(this + 0x1e) = (short)uVar7;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar3,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_010005a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10005a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::RequestAction::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010006c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10006c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[4]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x11],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1c),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1e),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01000880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1000880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010008a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10008a0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_010009b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_010009b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_010009b3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_010009b8: ;
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

/* ref: Application::Network::WorkDefinitions::RequestAction::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01000b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1000b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  ulonglong uVar3;
  undefined * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    puVar4 = &REFG(undefined, 0x1158a00);
    this_00 = ((undefined *)GEN_TOP(F_00e82f00(uVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(this_00 GEN_EDX_ARG,puVar4);
    this[4] = (undefined1)(bVar1 == 0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar3;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar3,0);
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    this[0x11] = SUB81(uVar3,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(int *)(this + 0x14) = (int)uVar3;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(int *)(this + 0x18) = (int)uVar3;
    return 1;
  case 6: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(short *)(this + 0x1c) = (short)uVar3;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar3 = F_00e50570(uVar2);
    *(short *)(this + 0x1e) = (short)uVar3;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01000d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1000d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
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
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    this[4] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x10] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x11] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x14) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x18) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 0x1c) = (short)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c080));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(short *)(this + 0x1e) = (short)uVar6;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01001080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1001080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::RequestAction::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010011a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10011a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[4]);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x11],0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x14),0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(this + 0x1e),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01001c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1001c40u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01001d92: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01001d97;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01001d92;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01001d97: ;
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

/* ref: Application::Network::WorkDefinitions::RequestAction::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01001ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1001ef0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_010020c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010020c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10020c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_01002100(void)
{
  GEN_ENTER(0x1002100u, 0u, 0u, 0u, 0u);
  return 0x81;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_01002110(void)
{
  GEN_ENTER(0x1002110u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136bda0);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b0118) + param_1 * 4);
}

/* ref: FUN_01002140 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01002140(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1002140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x12b0138) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002160u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_010021a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_010021a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x10021a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x48e;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010021b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10021b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x136bd80))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010021d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10021d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b00b8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010021f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10021f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b00f8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3de0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x12b00d8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12b00f8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12b00f8) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12b00d8) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x12b00b8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12b00d8) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12b00b8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010022d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10022d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x12b00d8) + param_2 * 4) * *(int *)(&REFG(undefined, 0x12b00b8) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12b00b8) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12b00d8) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1002350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3de0) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12b00d8) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010023e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10023e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1002450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010024f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10024f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_01002590 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01002590(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1002590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b0534));
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  *(undefined8 *)(in_ecx + 0xc) = REFG(undefined8, 0x1375ab0);
  *(undefined8 *)(in_ecx + 0xe) = REFG(undefined8, 0x1375ab8);
  in_ecx[0x10] = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_010025e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010025e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10025e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010025f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10025f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdc0) + 0x10))))(&REFG(undefined * PTR32, 0x136bdc0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_01002620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1002620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136bdc0) + 0x10))))(&REFG(undefined * PTR32, 0x136bdc0),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1002650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x14;
  case 2: ;
    return in_ecx + 0x18;
  case 3: ;
    return in_ecx + 0x1c;
  case 4: ;
    return in_ecx + 0x20;
  case 5: ;
    return in_ecx + 0x24;
  case 6: ;
    return in_ecx + 0x30;
  case 7: ;
    return in_ecx + 0x40;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010026c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10026c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12b00b8) + param_1 * 4)) && (param_1 == 0)) {
    return (uint)(this + param_2 * 4 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010026f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10026f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    *(int *)(this + 0x18) = param_1[6];
    *(int *)(this + 0x1c) = param_1[7];
    *(int *)(this + 0x20) = param_1[8];
    *(int *)(this + 0x24) = param_1[9];
    *(int *)(this + 0x30) = param_1[0xc];
    *(int *)(this + 0x34) = param_1[0xd];
    uVar4 = param_1[0x10];
    *(uint *)(this + 0x40) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01002780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1002780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      *(int *)(this + 4) = param_1[1];
      *(int *)(this + 8) = param_1[2];
      *(int *)(this + 0xc) = param_1[3];
      uVar4 = param_1[4];
      *(uint *)(this + 0x10) = uVar4;
      return uVar4;
    case 1: ;
      *(int *)(this + 0x14) = param_1[5];
      return uVar4;
    case 2: ;
      *(int *)(this + 0x18) = param_1[6];
      return uVar4;
    case 3: ;
      uVar4 = param_1[7];
      *(uint *)(this + 0x1c) = uVar4;
      return uVar4;
    case 4: ;
      *(int *)(this + 0x20) = param_1[8];
      return uVar4;
    case 5: ;
      *(int *)(this + 0x24) = param_1[9];
      return uVar4;
    case 6: ;
      *(int *)(this + 0x30) = param_1[0xc];
      *(int *)(this + 0x34) = param_1[0xd];
      return uVar4;
    case 7: ;
      uVar4 = param_1[0x10];
      *(uint *)(this + 0x40) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01002880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002880u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01002983: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01002988;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_01002983;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01002988: ;
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01002a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1002a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pPVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar3 = 0;
    while (this = this + 4, iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      *(int *)this = (int)uVar5;
      iVar3 = iVar3 + 1;
      if (3 < iVar3) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x14) = (int)uVar5;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x18) = (int)uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x1c) = (int)uVar5;
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x20) = (int)uVar5;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x24) = (int)uVar5;
    return 1;
  case 6: ;
    iVar3 = 0;
    pPVar4 = this + 0x30;
    do {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      fVar6 = F_00e50660(uVar2);
      *(float *)pPVar4 = fVar6;
      iVar3 = iVar3 + 1;
      pPVar4 = pPVar4 + 4;
    } while (iVar3 < 2);
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x40) = (int)uVar5;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01002c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1002c10u, gen_a0, gen_a1, gen_a2, 0u);
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
  undefined * pPVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
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
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(int *)(gen_frame + 0x0)) = 0;
  pPVar7 = this;
  while( true ) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = pPVar7 + 4;
    uVar8 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar8,0x22);
    if ((uVar6 < uVar8) || (uVar6 < uVar3)) break;
    uVar9 = F_00e505e0(uVar8);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = (int)uVar9;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    pPVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if (3 < (*(int *)(gen_frame + 0x0))) {
LAB_01002cfa: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar9 = F_00e505e0(uVar3 + 4);
      *(int *)(this + 0x14) = (int)uVar9;
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar9 = F_00e505e0(uVar6 + 3);
      *(int *)(this + 0x18) = (int)uVar9;
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar9 = F_00e505e0(uVar3 + 3);
      *(int *)(this + 0x1c) = (int)uVar9;
      uVar8 = F_00c51da0(uVar6 + 3,0x22);
      uVar9 = F_00e505e0(uVar6 + 3);
      *(int *)(this + 0x20) = (int)uVar9;
      uVar3 = F_00c51da0(uVar8 + 3,0x22);
      uVar9 = F_00e505e0(uVar8 + 3);
      *(int *)(this + 0x24) = (int)uVar9;
      uVar3 = uVar3 + 1;
      pPVar7 = this + 0x30;
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x2));
      do {
        iVar5 = uVar3 + 3;
        uVar3 = F_00c51da0(iVar5,0x22);
        fVar10 = F_00e50660(iVar5);
        *(float *)pPVar7 = fVar10;
        pPVar7 = pPVar7 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - 1)));
      } while ((*(undefined * PTR32 *)(gen_frame + 0x4)) != ((undefined *)GEN_TOP(0x0)));
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar9 = F_00e505e0(uVar3 + 4);
      *(int *)(this + 0x40) = (int)uVar9;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_01002cfa;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01002de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1002de0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01002f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1002f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pPVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  int iVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_00ea83e0(pvVar2 GEN_EDX_ARG,4,0);
  iVar4 = 0;
  pPVar1 = this;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pPVar1 + 4;
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)),*(int *)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar3 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar3 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pPVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  } while (iVar4 < 4);
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x20),*(int *)(this + 0x20) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x24),*(int *)(this + 0x24) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_00ea83e0(pvVar2 GEN_EDX_ARG,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x4));
  pvVar3 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,0,0)));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,puVar5);
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x34))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x34)) >> 0x20));
  puVar5 = ((undefined1 *)(gen_frame + 0x4));
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,1,0)));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
  pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x40),*(int *)(this + 0x40) >> 0x1f);
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01003150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1003150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01003170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1003170u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01003283: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_01003288;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_01003283;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_01003288: ;
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01003410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1003410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    while (this = this + 4, iVar4 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      *(int *)this = (int)uVar5;
      iVar4 = iVar4 + 1;
      if (3 < iVar4) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x14) = (int)uVar5;
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x18) = (int)uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x1c) = (int)uVar5;
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x20) = (int)uVar5;
    return 1;
  case 5: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x24) = (int)uVar5;
    return 1;
  case 6: ;
    iVar4 = 0;
    pPVar3 = this + 0x30;
    do {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      fVar6 = F_00e50660(uVar2);
      *(float *)pPVar3 = fVar6;
      iVar4 = iVar4 + 1;
      pPVar3 = pPVar3 + 4;
    } while (iVar4 < 2);
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e505e0(uVar2);
    *(int *)(this + 0x40) = (int)uVar5;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01003660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1003660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pPVar6;
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
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c114));
    iVar5 = uVar3 + 10;
    (*(int *)(gen_frame + 0x0)) = 4;
    pPVar6 = this;
    do {
      pPVar6 = pPVar6 + 4;
      uVar7 = F_00e505e0(iVar5);
      *(int *)pPVar6 = (int)uVar7;
      uVar3 = F_00c51da0(iVar5,0x2c);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x14) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x18) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x1c) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x20) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x24) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c114));
    iVar5 = uVar3 + 10;
    pPVar6 = this + 0x30;
    (*(int *)(gen_frame + 0x0)) = 2;
    do {
      fVar8 = F_00e50660(iVar5);
      *(float *)pPVar6 = fVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pPVar6 = pPVar6 + 4;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136c110));
    iVar5 = uVar3 + 9;
    uVar7 = F_00e505e0(iVar5);
    *(int *)(this + 0x40) = (int)uVar7;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_010039e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10039e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01003b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1003b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pPVar6;
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
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
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  pPVar6 = this;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pPVar6 + 4;
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f);
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x60));
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pPVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) < 4);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x20),*(int *)(this + 0x20) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x24),*(int *)(this + 0x24) >> 0x1f);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x12b05a0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 2;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x30;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x60));
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,pPVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
  } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) < 2);
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
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)(this + 0x40),*(int *)(this + 0x40) >> 0x1f);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010046d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10046d0u, gen_a0, gen_a1, 0u, 0u);
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
LAB_01004822: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_01004827;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_01004822;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_01004827: ;
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

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01004980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1004980u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01004b50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01004b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1004b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1004b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  if (param_2 == 0) {
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    puVar2 = param_3 + 3;
  }
  else {
    if (param_2 == 1) {
      *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
      param_3[2] = *((uint *)GEN_TOP((param_1 + 0x14)));
      return 0xc;
    }
    if (param_2 == 2) {
      *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
      return 8;
    }
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Target_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1004be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      puVar3 = param_2 + 3;
    }
    else {
      if (param_1 == 1) {
        *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
        *((uint *)GEN_TOP((param_3 + 0x14))) = param_2[2];
        return 0xc;
      }
      if (param_1 == 2) {
        *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
        return 8;
      }
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01004c60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01004c60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1004c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b0604));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01004c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1004c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0604));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Target::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1004cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Target::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1004d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Target::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1004d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1004d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 4)));
    return 8;
  case 1: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 8)));
    return 8;
  case 2: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0xc)));
    return 5;
  case 3: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 4: ;
    param_3[1] = *((uint *)GEN_TOP((param_1 + 0x14)));
    return 8;
  case 5: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x18)));
    return 8;
  case 6: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 8;
    iVar5 = (int)param_3 + 7;
    iVar4 = param_1 + 0x1c;
    iVar2 = 8;
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x3c))))(REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,iVar4,iVar5);
      iVar5 = iVar5 + uVar1;
      iVar4 = iVar4 + 0x20;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    return iVar5 - (int)param_3;
  case 7: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 8;
    puVar3 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar5 = param_1 + 0x11c;
    iVar2 = 8;
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x3c))))(REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,iVar5,puVar3);
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar1)));
      iVar5 = iVar5 + 0x20;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01004eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1004eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  ushort uVar6;
  uint * puVar7;
  int iVar8;
  uint * puVar9;
  uint uVar10;
  
  uVar10 = *param_2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar5 = param_2;
  if (uVar10 == uVar3) {
    puVar5 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 4))) = *puVar5;
      return 8;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar5;
      return 8;
    case 2: ;
      *((byte *)GEN_TOP((param_3 + 0xc))) = (byte)*puVar5;
      return 5;
    case 3: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar5;
      return 8;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x14))) = *puVar5;
      return 8;
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar5;
      return 8;
    case 6: ;
      uVar10 = *puVar5;
      puVar5 = ((uint *)GEN_TOP(((int)param_2 + 5)));
      bVar2 = (byte)uVar10 & 3;
      if (bVar2 == 0) {
        uVar10 = (uint)*(ushort *)puVar5;
        puVar5 = ((uint *)GEN_TOP(((int)param_2 + 7)));
        if (uVar10 != 0) {
          iVar8 = param_3 + 0x1c;
          do {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x4c))))(REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,puVar5,iVar8);
            puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar3)));
            iVar8 = iVar8 + 0x20;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return (int)puVar5 - (int)param_2;
        }
      }
      else {
        if (bVar2 == 1) {
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x4c))))
                             (REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,((byte *)GEN_TOP(((int)param_2 + 7))),
                              (uint)*(ushort *)((int)(uintptr_t)puVar5) * 0x20 + 0x1c + param_3);
          return (uint)(((byte *)GEN_TOP(((int)param_2 + 7))) + (uVar10 - (int)param_2));
        }
        if (bVar2 == 2) {
          uVar6 = *((ushort *)GEN_TOP(((int)param_2 + 7)));
          uVar1 = *(ushort *)puVar5;
          uVar3 = (uint)uVar1;
          uVar10 = (uVar6 - uVar3) + 1 & 0xffff;
          puVar5 = ((uint *)GEN_TOP(((int)param_2 + 9)));
          iVar8 = (uVar10 >> 5) + 1;
          ((uint *)(gen_frame + 0x0))[1] = (uint)uVar6;
          if (iVar8 != 0) {
            puVar7 = puVar5;
            puVar9 = ((uint *)(gen_frame + 0x0));
            for (iVar4 = iVar8; iVar4 != 0; iVar4 = iVar4 - 1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            uVar6 = (ushort)((uint *)(gen_frame + 0x0))[1];
            puVar5 = puVar5 + iVar8;
          }
          param_1 = 0;
          if (uVar1 <= uVar6) {
            iVar8 = uVar3 * 0x20 + 0x1c + param_3;
            param_3 = uVar10;
            do {
              if ((((uint *)(gen_frame + 0x0))[(int)(param_1 >> 5 & 0x7ff)] & 1 << ((byte)uVar3 & 0x1f)) != 0) {
                uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bce8) + 0x4c))))
                                   (REFG(undefined * PTR32, 0x136bce8) GEN_EDX_ARG,puVar5,iVar8);
                puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar10)));
              }
              param_1 = param_1 + 1;
              uVar3 = uVar3 + 1;
              iVar8 = iVar8 + 0x20;
              param_3 = param_3 - 1;
            } while (param_3 != 0);
            return (int)puVar5 - (int)param_2;
          }
        }
      }
      break;
    case 7: ;
      uVar10 = *puVar5;
      puVar5 = ((uint *)GEN_TOP(((int)param_2 + 5)));
      bVar2 = (byte)uVar10 & 3;
      if (bVar2 == 0) {
        uVar10 = (uint)*(ushort *)puVar5;
        puVar5 = ((uint *)GEN_TOP(((int)param_2 + 7)));
        if (uVar10 != 0) {
          iVar8 = param_3 + 0x11c;
          do {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x4c))))(REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,puVar5,iVar8);
            puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar3)));
            iVar8 = iVar8 + 0x20;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return (int)puVar5 - (int)param_2;
        }
      }
      else {
        if (bVar2 == 1) {
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x4c))))
                             (REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,((byte *)GEN_TOP(((int)param_2 + 7))),
                              (uint)*(ushort *)((int)(uintptr_t)puVar5) * 0x20 + 0x11c + param_3);
          return (uint)(((byte *)GEN_TOP(((int)param_2 + 7))) + (uVar10 - (int)param_2));
        }
        if (bVar2 == 2) {
          uVar6 = *((ushort *)GEN_TOP(((int)param_2 + 7)));
          uVar1 = *(ushort *)puVar5;
          uVar3 = (uint)uVar1;
          uVar10 = (uVar6 - uVar3) + 1 & 0xffff;
          puVar5 = ((uint *)GEN_TOP(((int)param_2 + 9)));
          iVar8 = (uVar10 >> 5) + 1;
          ((uint *)(gen_frame + 0x0))[0] = uVar10;
          if (iVar8 != 0) {
            puVar7 = ((uint *)(gen_frame + 0x0));
            puVar9 = puVar5;
            for (iVar4 = iVar8; puVar7 = puVar7 + 1, iVar4 != 0; iVar4 = iVar4 - 1) {
              *puVar7 = *puVar9;
              puVar9 = puVar9 + 1;
            }
            puVar5 = puVar5 + iVar8;
          }
          param_1 = 0;
          if (uVar1 <= uVar6) {
            iVar8 = uVar3 * 0x20 + 0x11c + param_3;
            param_3 = uVar10;
            do {
              if ((((uint *)(gen_frame + 0x0))[(int)((param_1 >> 5 & 0x7ff) + 1)] & 1 << ((byte)uVar3 & 0x1f)) != 0) {
                uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)REFG(undefined * PTR32, 0x136bcec) + 0x4c))))
                                   (REFG(undefined * PTR32, 0x136bcec) GEN_EDX_ARG,puVar5,iVar8);
                puVar5 = ((uint *)GEN_TOP(((int)puVar5 + uVar10)));
              }
              param_1 = param_1 + 1;
              uVar3 = uVar3 + 1;
              iVar8 = iVar8 + 0x20;
              param_3 = param_3 - 1;
            } while (param_3 != 0);
          }
        }
      }
    }
  }
  return (int)puVar5 - (int)param_2;
}

/* ref: FUN_010051d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010051d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10051d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b01bc));
  iVar1 = (int)this + 0x1c;
  iVar2 = 7;
  do {
    F_00fd8580(iVar1 GEN_EDX_FWD);
    iVar1 = iVar1 + 0x20;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  iVar1 = (int)this + 0x11c;
  iVar2 = 7;
  do {
    F_00fd8580(iVar1 GEN_EDX_ARG);
    iVar1 = iVar1 + 0x20;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00ff5fc0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    return 5;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    return 8;
  case 2: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 8;
  case 3: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 4: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    return 5;
  case 5: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    return 8;
  case 6: ;
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
    *(undefined8 *)puVar2 = *((undefined8 *)GEN_TOP((param_1 + 0x20)));
    param_3[3] = uVar1;
    return 0x10;
  case 7: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x30)));
    return 8;
  case 8: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x34)));
    return 8;
  case 9: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x38)));
    return 8;
  case 10: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x3c)));
    return 5;
  case 0xb: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x3d)));
    return 5;
  case 0xc: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x3e)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      return 5;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      return 8;
    case 2: ;
      *((uint *)GEN_TOP((param_3 + 0xc))) = *puVar3;
      return 8;
    case 3: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
      return 8;
    case 4: ;
      *((char *)GEN_TOP((param_3 + 0x14))) = (char)*puVar3;
      return 5;
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      return 8;
    case 6: ;
      *((undefined8 *)GEN_TOP((param_3 + 0x20))) = *(undefined8 *)puVar3;
      *((uint *)GEN_TOP((param_3 + 0x28))) = param_2[3];
      return 0x10;
    case 7: ;
      *((uint *)GEN_TOP((param_3 + 0x30))) = *puVar3;
      return 8;
    case 8: ;
      *((uint *)GEN_TOP((param_3 + 0x34))) = *puVar3;
      return 8;
    case 9: ;
      *((uint *)GEN_TOP((param_3 + 0x38))) = *puVar3;
      return 8;
    case 10: ;
      *((char *)GEN_TOP((param_3 + 0x3c))) = (char)*puVar3;
      return 5;
    case 0xb: ;
      *((char *)GEN_TOP((param_3 + 0x3d))) = (char)*puVar3;
      return 5;
    case 0xc: ;
      *((char *)GEN_TOP((param_3 + 0x3e))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_010055b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010055b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10055b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12b0674));
  *(undefined1 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 5) = 0;
  in_ecx[6] = 0;
  in_ecx[8] = GEN_FLT_TO(in_ecx[8], REFG(float, 0x1375ac0));
  in_ecx[9] = GEN_FLT_TO(in_ecx[9], REFG(float, 0x1375ac4));
  in_ecx[10] = GEN_FLT_TO(in_ecx[10], REFG(float, 0x1375ac8));
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  *(undefined2 *)(in_ecx + 0xf) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x3e))) = 0;
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    this[0x14] = *(undefined *)(param_1 + 5);
    *(int *)(this + 0x18) = param_1[6];
    *(int *)(this + 0x20) = param_1[8];
    *(int *)(this + 0x24) = param_1[9];
    *(int *)(this + 0x28) = param_1[10];
    *(int *)(this + 0x30) = param_1[0xc];
    *(int *)(this + 0x34) = param_1[0xd];
    *(int *)(this + 0x38) = param_1[0xe];
    this[0x3c] = *(undefined *)(param_1 + 0xf);
    uVar4 = (uint)(byte)*((undefined *)GEN_TOP(((int)param_1 + 0x3d)));
    this[0x3d] = *((undefined *)GEN_TOP(((int)param_1 + 0x3d)));
    this[0x3e] = *((undefined *)GEN_TOP(((int)param_1 + 0x3e)));
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010056c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10056c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 TVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar6 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      TVar1 = *(undefined *)(param_1 + 1);
      this[4] = TVar1;
      return CONCAT31(uVar6,TVar1);
    case 1: ;
      *(int *)(this + 8) = param_1[2];
      return uVar5;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 3: ;
      uVar5 = param_1[4];
      *(uint *)(this + 0x10) = uVar5;
      return uVar5;
    case 4: ;
      this[0x14] = *(undefined *)(param_1 + 5);
      return uVar5;
    case 5: ;
      *(int *)(this + 0x18) = param_1[6];
      return uVar5;
    case 6: ;
      *(int *)(this + 0x20) = param_1[8];
      *(int *)(this + 0x24) = param_1[9];
      *(int *)(this + 0x28) = param_1[10];
      return uVar5;
    case 7: ;
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar5;
    case 8: ;
      *(int *)(this + 0x34) = param_1[0xd];
      return uVar5;
    case 9: ;
      *(int *)(this + 0x38) = param_1[0xe];
      return uVar5;
    case 10: ;
      this[0x3c] = *(undefined *)(param_1 + 0xf);
      return uVar5;
    case 0xb: ;
      TVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x3d)));
      this[0x3d] = TVar1;
      return CONCAT31(uVar6,TVar1);
    case 0xc: ;
      this[0x3e] = *((undefined *)GEN_TOP(((int)param_1 + 0x3e)));
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    return 8;
  case 1: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 8)));
    return 6;
  case 2: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 10)));
    return 6;
  case 3: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 8;
  case 4: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 5: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 4))) = *puVar3;
      return 8;
    case 1: ;
      *((short *)GEN_TOP((param_3 + 8))) = (short)*puVar3;
      return 6;
    case 2: ;
      *((short *)GEN_TOP((param_3 + 10))) = (short)*puVar3;
      return 6;
    case 3: ;
      *((uint *)GEN_TOP((param_3 + 0xc))) = *puVar3;
      return 8;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
      return 8;
    case 5: ;
      *((char *)GEN_TOP((param_3 + 0x14))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_010059f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010059f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10059f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b02dc));
  F_00ffbff0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 2: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x15)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
      return 8;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x14))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x15))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01005b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b03a4));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((char *)GEN_TOP(((int)this + 0x14))) = (char)param_1[5];
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x15)));
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    return 5;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 2: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x11)));
    return 5;
  case 4: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x14)));
    return 8;
  case 5: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    return 8;
  case 6: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0x1c)));
    return 6;
  case 7: ;
    *(undefined2 *)puVar2 = *((undefined2 *)GEN_TOP((param_1 + 0x1e)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 6)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      return 5;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x10))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x11))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x14))) = *puVar3;
      return 8;
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      return 8;
    case 6: ;
      *((short *)GEN_TOP((param_3 + 0x1c))) = (short)*puVar3;
      return 6;
    case 7: ;
      *((short *)GEN_TOP((param_3 + 0x1e))) = (short)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 6)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_01005e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b046c));
  F_00ffffa0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1005eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01005ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1005ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 4;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xf))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0x13))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    return 0x17;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x14)));
    return 8;
  case 2: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    return 8;
  case 3: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x1c)));
    return 8;
  case 4: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x20)));
    return 8;
  case 5: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x24)));
    return 8;
  case 6: ;
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x34)));
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x30)));
    param_3[2] = uVar1;
    return 0xc;
  case 7: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x40)));
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01006000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1006000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68050(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01006050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1006050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68160(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010060a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10060a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68dc0(puVar3,param_3 + 4,4);
      return (int)puVar3 + (uVar2 - (int)param_2);
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 0x14))) = *puVar3;
      return 8;
    case 2: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      return 8;
    case 3: ;
      *((uint *)GEN_TOP((param_3 + 0x1c))) = *puVar3;
      return 8;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x20))) = *puVar3;
      return 8;
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0x24))) = *puVar3;
      return 8;
    case 6: ;
      *((uint *)GEN_TOP((param_3 + 0x30))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0x34))) = param_2[2];
      return 0xc;
    case 7: ;
      *((uint *)GEN_TOP((param_3 + 0x40))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_010061c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010061c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10061c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0534));
  F_010026f0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010061e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10061e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01006200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1006200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01006220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1006220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: FUN_01006240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01006240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1006240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x12b0674));
  F_01005610(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Target::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01006260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1006260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_01006640;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_010064a3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_0100646b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_0100646b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_01006640;
      }
LAB_010064a3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_01006640: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_01006626: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_01006626;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_01006640;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x14)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_010067c2;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_010067c2;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 0x10) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
LAB_010067c2: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    fVar16 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(float *)(this + 0x18) = fVar16;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01006840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1006840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  uint uVar10;
  char * PTR32 * ppcVar11;
  char * pcVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  undefined * pAVar15;
  undefined * pAVar16;
  ulonglong uVar17;
  float fVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x34));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x34)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x34)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar12 = pcVar5;
    pcVar5 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar12 - 1, pcVar5 < pcVar12 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  pcVar12 = (*(char * PTR32 *)(gen_frame + 0x18));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  if ((*(char * PTR32 *)(gen_frame + 0x1c)) != pcVar8) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = pcVar5;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar13;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar12 = (*(char * PTR32 *)(gen_frame + 0x18));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar12) goto LAB_01006c0b;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar12);
        }
        else {
          if (cVar1 != '[') goto LAB_01006a73;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_01006a3b: ;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_01006a3b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)); pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (iVar6 == 1) goto LAB_01006c0b;
      }
LAB_01006a73: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_01006c0b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x18));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)(gen_frame + 0x18));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x18));
  while ((*(undefined * PTR32 *)(gen_frame + 0x10)) = pAVar16, cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x1c)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x1c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x1c)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_01006bf1: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar9 = uVar9 + 1;
          uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar11) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_01006bf1;
          uVar9 = uVar9 + 1;
          uVar10 = (int)ppcVar11 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = pcVar8;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_01006c0b;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8;
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x30)) != pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(pAVar16)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      return 0;
    }
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
    *(int *)(pAVar16 + 4) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if (pcVar12 < (*(char * PTR32 *)(gen_frame + 0x30))) {
      uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
      *(int *)(pAVar16 + 8) = (int)uVar17;
      goto LAB_01006d99;
    }
LAB_01006d4f: ;
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
joined_r0x01007052: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
LAB_01006d99: ;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) goto LAB_01006d4f;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
    pAVar16[0xc] = SUB81(uVar17,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) goto LAB_01006d4f;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
    *(int *)(pAVar16 + 0x10) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) goto LAB_01006d4f;
    fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
    *(float *)(pAVar16 + 0x14) = fVar18;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) goto LAB_01006d4f;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12]);
    *(int *)(pAVar16 + 0x18) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      goto joined_r0x01007052;
    }
    iVar6 = 0;
    (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12];
    pAVar15 = pAVar16 + 0x1c;
    do {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar15 + 0x50))))(pAVar15 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x14)));
      if ((char)uVar4 == '\0') {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        goto joined_r0x01007052;
      }
      iVar6 = iVar6 + 1;
      pAVar15 = pAVar15 + 0x20;
      pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    } while (iVar6 < 8);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 4))))(pAVar16 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar12) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      goto joined_r0x01007052;
    }
    iVar6 = 0;
    (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar12];
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x11c;
    do {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar16 + 0x50))))(pAVar16 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x14)));
      if ((char)uVar4 == '\0') {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        goto joined_r0x01007052;
      }
      iVar6 = iVar6 + 1;
      pAVar16 = pAVar16 + 0x20;
    } while (iVar6 < 8);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010070e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10070e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  undefined * pTVar15;
  char * PTR32 * ppcVar16;
  ulonglong uVar17;
  float fVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9 + 0xc;
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar16) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
          if (ppcVar16 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar16 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar16 = pcVar5;
          }
        }
        ppcVar16 = ppcVar16 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar16;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x24));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_01007900;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_01007323;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_010072eb: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_010072eb;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (iVar6 == 1) goto LAB_01007900;
      }
LAB_01007323: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x10)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar16 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
  (*(char * PTR32 *)(gen_frame + 0x10)) = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x24));
  while (cVar1 != ']') {
    if (*pcVar9 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9;
      if ((&(*(char * PTR32 *)(gen_frame + 0x10)) < ppcVar14) && (ppcVar16 <= &(*(char * PTR32 *)(gen_frame + 0x10)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x10)) - (int)ppcVar16;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar16) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_010074c7: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar16) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar16[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar13) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar16) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_010074c7;
          uVar10 = uVar10 + 1;
          uVar12 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar16) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = pcVar9;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0(pcVar9 + 1,0x22)));
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar16);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
          return 0;
        }
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
        return 0;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar16) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar16);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar9) {
    if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar16);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[4] = SUB81(uVar17,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 8) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0xc) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x10) = (int)uVar17;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x14] = SUB81(uVar17,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(float *)(this + 0x18) = fVar18;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    pTVar15 = this + 0x20;
    iVar6 = 3;
    do {
      fVar18 = F_00e50660(pcVar9);
      *(float *)pTVar15 = fVar18;
      uVar4 = F_00c51da0(pcVar9,0x2c);
      pTVar15 = pTVar15 + 4;
      iVar6 = iVar6 - 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar16 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
LAB_01007900: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(float *)(this + 0x30) = fVar18;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(float *)(this + 0x34) = fVar18;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,9);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    fVar18 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(float *)(this + 0x38) = fVar18;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,10);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    this[0x3c] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11] != '0');
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xb);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto joined_r0x01007603;
    this[0x3d] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11] != '0');
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0xc);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x2c)))));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      pcVar11 = ((char *)GEN_TOP(0x0));
      do {
        if (pcVar5 == ppcVar16[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
joined_r0x01007603: ;
      if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar16);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      }
      return 0;
    }
    uVar17 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x3e] = SUB81(uVar17,0);
  }
  if (ppcVar16 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar16);
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01007ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1007ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_01007f80;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_01007de3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_01007dab: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_01007dab;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_01007f80;
      }
LAB_01007de3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_01007f80: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_01007f66: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_01007f66;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_01007f80;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x14)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008233;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 4) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008233;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 8) = (short)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008233;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 10) = (short)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008233;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0xc) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008233;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x10) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
LAB_01008233: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x14] = SUB81(uVar15,0);
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010082b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10082b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_01008690;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_010084f3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_010084bb: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_010084bb;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_01008690;
      }
LAB_010084f3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_01008690: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_01008676: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_01008676;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_01008690;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x14)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008873;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008873;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x10) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_01008873;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x14] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
LAB_01008873: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x15] = SUB81(uVar15,0);
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010088f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10088f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  ((char * PTR32 *)(gen_frame + 0x10))[1] = pcVar9 + 0xc;
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  ((char * PTR32 *)(gen_frame + 0x10))[0] = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(((char * PTR32 *)(gen_frame + 0x10)) + 2 GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = ((char * PTR32 *)(gen_frame + 0x10))[1];
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(((char * PTR32 *)(gen_frame + 0x10)) + 2 GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(((char * PTR32 *)(gen_frame + 0x10)) + 2 GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = ((char * PTR32 *)(gen_frame + 0x10))[1];
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(((char * PTR32 *)(gen_frame + 0x10)) + 2 GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_01008cd0;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_01008b33;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_01008afb: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_01008afb;
          }
          F_00e695d0(((char * PTR32 *)(gen_frame + 0x10)) + 2 GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_01008cd0;
      }
LAB_01008b33: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != ((char * PTR32 *)(gen_frame + 0x10))[0]);
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_01008cd0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *((char * PTR32 *)(gen_frame + 0x10))[1];
  ((char * PTR32 *)(gen_frame + 0x10))[0] = ((char * PTR32 *)(gen_frame + 0x10))[1];
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = ((char * PTR32 *)(gen_frame + 0x10))[1];
  while (((char * PTR32 *)(gen_frame + 0x10))[0] = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((((char * PTR32 *)(gen_frame + 0x10)) < ppcVar13) && (ppcVar14 <= ((char * PTR32 *)(gen_frame + 0x10)))) {
        iVar6 = (int)((char * PTR32 *)(gen_frame + 0x10)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_01008cb6: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_01008cb6;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0(((char * PTR32 *)(gen_frame + 0x10))[0] + 1,0x22)));
      ((char * PTR32 *)(gen_frame + 0x10))[0] = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_01008cd0;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    ((char * PTR32 *)(gen_frame + 0x10))[0] = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    this[4] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11] != '0');
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      pcVar11 = ((char *)GEN_TOP(0x0));
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x10] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x11] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x14) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x18) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_01009044;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 0x1c) = (short)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(((char * PTR32 *)(gen_frame + 0x10))[1],((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
LAB_01009044: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(short *)(this + 0x1e) = (short)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010090c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10090c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pPVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x30));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x30)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x30)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar11 = pcVar5;
    pcVar5 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar11 - 1, pcVar5 < pcVar11 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x28));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x24));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28));
  while (pcVar5 != pcVar8) {
    cVar1 = *pcVar5;
    if (cVar1 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = pcVar5;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar12;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0x24));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar11) goto LAB_0100948b;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_010092f3;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_010092bb: ;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_010092bb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
        }
      }
      ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
      if (iVar6 == 1) goto LAB_0100948b;
    }
LAB_010092f3: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
    uVar4 = (*(uint *)(gen_frame + 0x10));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_0100948b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x24));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_01009471: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar4 = uVar4 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x28));
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar12[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_01009471;
          uVar4 = uVar4 + 1;
          uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar8;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar12);
        }
        goto LAB_0100948b;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)(*(uint *)(gen_frame + 0x10)) < (int)pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x2c)) != pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    (*(uint *)(gen_frame + 0x10)) = 4;
    pPVar14 = this;
    do {
      pPVar14 = pPVar14 + 4;
      uVar15 = F_00e505e0(pcVar8);
      *(int *)pPVar14 = (int)uVar15;
      uVar9 = F_00c51da0(pcVar8,0x2c);
      uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
      pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
    } while (uVar4 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x28));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x14) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x2c))) {
      uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
      *(int *)(this + 0x18) = (int)uVar15;
      goto LAB_010096df;
    }
LAB_01009695: ;
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
joined_r0x010096a6: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
LAB_010096df: ;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_01009695;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x1c) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_01009695;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x20) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_01009695;
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x24) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      goto joined_r0x010096a6;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    pPVar14 = this + 0x30;
    iVar6 = 2;
    do {
      fVar16 = F_00e50660(pcVar8);
      *(float *)pPVar14 = fVar16;
      uVar4 = F_00c51da0(pcVar8,0x2c);
      pPVar14 = pPVar14 + 4;
      iVar6 = iVar6 - 1;
      pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x24)),((char *)(gen_frame + 0x30)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      goto joined_r0x010096a6;
    }
    uVar15 = F_00e505e0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5]);
    *(int *)(this + 0x40) = (int)uVar15;
  }
  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar12);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01009970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1009970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Target::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01009b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1009b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100a0c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x100a0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  code * pcVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_2 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_2 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),param_1[1],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),param_1[2],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)*(byte *)(param_1 + 3),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),param_1[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(param_1[5])))),
             (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(param_1[5])))) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),param_1[6],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_2 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  piVar4 = param_1 + 7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x8));
  do {
    if (param_3 == '\0') {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x24)));
    }
    else {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x3c)));
    }
    (*pcVar8)(piVar4,param_2);
    F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    piVar4 = piVar4 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_2[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_2[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_2;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_2));
    }
    puVar9 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_2));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_2[4];
    param_2[4] = iVar3 - 1;
    puVar9 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_2));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  piVar4 = param_1 + 0x47;
  iVar3 = 8;
  do {
    iVar11 = iVar3;
    if (param_3 == '\0') {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x24)));
    }
    else {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x3c)));
    }
    (*pcVar8)(piVar4,param_2);
    F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    piVar4 = piVar4 + 8;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_2[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar10 = param_2;
      puVar9 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_2));
        puVar10 = ((undefined4 *)GEN_TOP(*param_2));
      }
      F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_2[4];
      param_2[4] = iVar3 - iVar11;
      puVar9 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_2));
      }
      *((undefined1 *)GEN_TOP(((int)puVar9 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_2[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar10 = param_2;
        puVar9 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_2));
          puVar10 = ((undefined4 *)GEN_TOP(*param_2));
        }
        F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_2[4];
        param_2[4] = iVar3 - 1;
        puVar9 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_2));
        }
        *((undefined1 *)GEN_TOP(((int)puVar9 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100a550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pAVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0xc],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12a98c0)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pAVar10 = this + 0x1c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x8));
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar10 + 0x30))))(pAVar10 GEN_EDX_ARG,param_1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    pAVar10 = pAVar10 + 0x20;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12a98c0)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pAVar10 = this + 0x11c;
  iVar3 = 8;
  do {
    iVar11 = iVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pAVar10 + 0x30))))(pAVar10 GEN_EDX_ARG,param_1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    pAVar10 = pAVar10 + 0x20;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20(uVar5 + (int)puVar9,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100b330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x100b330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pTVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0xc),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pTVar10 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x3));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pTVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pTVar10 = pTVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x34))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x34)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x38))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x38)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x3c]);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x3d]);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x3e],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100b8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100b8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pTVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0xc),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12a98d4)),0x15);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pTVar10 = this + 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x3));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pTVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pTVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pTVar10 = pTVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x30))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x30)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,8)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x34))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x34)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),9);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,9);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,9)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x38))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x38)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),10);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,10);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,10)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c40)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x3c]);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0xb);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0xb)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c40)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x3d]);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0xc);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0xc)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x3e],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100cda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x100cda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100d050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0xc),*(int *)(this + 0xc) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x10),*(int *)(this + 0x10) >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,5)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100da00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x100da00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),(int)(char)this[0x14],(int)(char)this[0x14] >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),(int)(char)this[0x15],(int)(char)this[0x15] >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100dc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100dc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa64c)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),(int)(char)this[0x14],(int)(char)this[0x14] >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12aa64c)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x12a98ec)),(int)(char)this[0x15],(int)(char)this[0x15] >> 0x1f);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100e2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x100e2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[4]);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x11],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x14),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x1c),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x1e),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100e630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100e630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c40)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[4]);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x11],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x14),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,5)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,6)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x1c),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,7)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)*(ushort *)(this + 0x1e),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100f2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x100f2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pPVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x4));
  pPVar10 = this;
  do {
    pPVar10 = pPVar10 + 4;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pPVar10,*(int *)((int)(uintptr_t)pPVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x20),*(int *)(this + 0x20) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x24),*(int *)(this + 0x24) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pPVar10 = this + 0x30;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pPVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pPVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pPVar10 = pPVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x40),*(int *)(this + 0x40) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_0100f780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x100f780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pPVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x4));
  pPVar10 = this;
  do {
    pPVar10 = pPVar10 + 4;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pPVar10,*(int *)((int)(uintptr_t)pPVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x14),*(int *)(this + 0x14) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x18),*(int *)(this + 0x18) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x1c),*(int *)(this + 0x1c) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x20),*(int *)(this + 0x20) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x24),*(int *)(this + 0x24) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x12b06e0)),0x15);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pPVar10 = this + 0x30;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pPVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pPVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pPVar10 = pPVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x12a98ec)),*(int *)(this + 0x40),*(int *)(this + 0x40) >> 0x1f);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::Target::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_010105a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10105a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01010651;
  }
  bVar2 = true;
LAB_01010651: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01010790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1010790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01010841;
  }
  bVar2 = true;
LAB_01010841: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01010980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1010980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01010a31;
  }
  bVar2 = true;
LAB_01010a31: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01010b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1010b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01010c21;
  }
  bVar2 = true;
LAB_01010c21: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01010d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1010d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01010e11;
  }
  bVar2 = true;
LAB_01010e11: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01010f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1010f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_01011001;
  }
  bVar2 = true;
LAB_01011001: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::PcSaveWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01011140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1011140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_010111f1;
  }
  bVar2 = true;
LAB_010111f1: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionResult_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01011330(void)
{
  GEN_ENTER(0x1011330u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Application::Network::WorkDefinitions::ActionResult::vf1 */
GEN_LIB GEN_NOFRAME uint F_01011340(void)
{
  GEN_ENTER(0x1011340u, 0u, 0u, 0u, 0u);
  return 0x136bdac;
}

/* ref: Application::Network::WorkDefinitions::ThinkLastOrder_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01011350(void)
{
  GEN_ENTER(0x1011350u, 0u, 0u, 0u, 0u);
  return 0xd;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01011360(void)
{
  GEN_ENTER(0x1011360u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::GatheringMapWork::vf1 */
GEN_LIB GEN_NOFRAME uint F_01011370(void)
{
  GEN_ENTER(0x1011370u, 0u, 0u, 0u, 0u);
  return 0x136bdb4;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_01011380(void)
{
  GEN_ENTER(0x1011380u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::RetainerListTemporary::vf1 */
GEN_LIB GEN_NOFRAME uint F_01011390(void)
{
  GEN_ENTER(0x1011390u, 0u, 0u, 0u, 0u);
  return 0x136bdb8;
}

/* ref: Application::Network::WorkDefinitions::RequestAction_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_010113a0(void)
{
  GEN_ENTER(0x10113a0u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Application::Network::WorkDefinitions::RequestAction::vf1 */
GEN_LIB GEN_NOFRAME uint F_010113b0(void)
{
  GEN_ENTER(0x10113b0u, 0u, 0u, 0u, 0u);
  return 0x136bdbc;
}

