#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e897a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe897a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x4c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf3 */
GEN_NOFRAME uint F_00e897d0(void)
{
  GEN_ENTER(0xe897d0u, 0u, 0u, 0u, 0u);
  return 0x135f41c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89860(void)
{
  GEN_ENTER(0xe89860u, 0u, 0u, 0u, 0u);
  return 0x39;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e898b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe898b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e898d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe898d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e898f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe898f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e89960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xc4) {
    return in_ecx + 0x2a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf3 */
GEN_NOFRAME uint F_00e89990(void)
{
  GEN_ENTER(0xe89990u, 0u, 0u, 0u, 0u);
  return 0x135f44c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89a20(void)
{
  GEN_ENTER(0xe89a20u, 0u, 0u, 0u, 0u);
  return 0x3a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e89a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e89ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e89b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89b20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf3 */
GEN_NOFRAME uint F_00e89b50(void)
{
  GEN_ENTER(0xe89b50u, 0u, 0u, 0u, 0u);
  return 0x135f47c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89be0(void)
{
  GEN_ENTER(0xe89be0u, 0u, 0u, 0u, 0u);
  return 0x3b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e89c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e89c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e89ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x530;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf3 */
GEN_NOFRAME uint F_00e89d10(void)
{
  GEN_ENTER(0xe89d10u, 0u, 0u, 0u, 0u);
  return 0x135f4ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89da0(void)
{
  GEN_ENTER(0xe89da0u, 0u, 0u, 0u, 0u);
  return 0x3c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e89df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e89e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e89ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0xb30;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf3 */
GEN_NOFRAME uint F_00e89ed0(void)
{
  GEN_ENTER(0xe89ed0u, 0u, 0u, 0u, 0u);
  return 0x135f4dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89f60(void)
{
  GEN_ENTER(0xe89f60u, 0u, 0u, 0u, 0u);
  return 0x3d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e89fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e89ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x4a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf3 */
GEN_NOFRAME uint F_00e8a090(void)
{
  GEN_ENTER(0xe8a090u, 0u, 0u, 0u, 0u);
  return 0x135f50c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a120(void)
{
  GEN_ENTER(0xe8a120u, 0u, 0u, 0u, 0u);
  return 0x3e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8a170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8a190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8a1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf3 */
GEN_NOFRAME uint F_00e8a250(void)
{
  GEN_ENTER(0xe8a250u, 0u, 0u, 0u, 0u);
  return 0x135f53c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a2e0(void)
{
  GEN_ENTER(0xe8a2e0u, 0u, 0u, 0u, 0u);
  return 0x3f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8a330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8a350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8a370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x230;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf3 */
GEN_NOFRAME uint F_00e8a410(void)
{
  GEN_ENTER(0xe8a410u, 0u, 0u, 0u, 0u);
  return 0x135f56c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a4a0(void)
{
  GEN_ENTER(0xe8a4a0u, 0u, 0u, 0u, 0u);
  return 0x40;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8a4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8a510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8a530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf3 */
GEN_NOFRAME uint F_00e8a5d0(void)
{
  GEN_ENTER(0xe8a5d0u, 0u, 0u, 0u, 0u);
  return 0x135f59c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a660(void)
{
  GEN_ENTER(0xe8a660u, 0u, 0u, 0u, 0u);
  return 0x41;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8a6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8a6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8a6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf3 */
GEN_NOFRAME uint F_00e8a790(void)
{
  GEN_ENTER(0xe8a790u, 0u, 0u, 0u, 0u);
  return 0x135f5cc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a820(void)
{
  GEN_ENTER(0xe8a820u, 0u, 0u, 0u, 0u);
  return 0x42;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8a870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8a890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8a8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8a8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8a8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8a920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x920;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf3 */
GEN_NOFRAME uint F_00e8a950(void)
{
  GEN_ENTER(0xe8a950u, 0u, 0u, 0u, 0u);
  return 0x135f5fc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8a9e0(void)
{
  GEN_ENTER(0xe8a9e0u, 0u, 0u, 0u, 0u);
  return 0x43;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8a9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8a9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8aa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8aa50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8aa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8aa70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8aa70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8aa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8aa90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8aab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8aab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8aad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8aae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x230;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf3 */
GEN_NOFRAME uint F_00e8ab10(void)
{
  GEN_ENTER(0xe8ab10u, 0u, 0u, 0u, 0u);
  return 0x135f62c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8aba0(void)
{
  GEN_ENTER(0xe8aba0u, 0u, 0u, 0u, 0u);
  return 0x44;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8abb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8abb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8abf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8abf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8ac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8ac30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ac30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8ac50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ac50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8ac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8ac90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ac90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8aca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf3 */
GEN_NOFRAME uint F_00e8acd0(void)
{
  GEN_ENTER(0xe8acd0u, 0u, 0u, 0u, 0u);
  return 0x135f65c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8ad60(void)
{
  GEN_ENTER(0xe8ad60u, 0u, 0u, 0u, 0u);
  return 0x45;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8ad70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8ad70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8adb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8add0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8add0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8adf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8adf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8ae10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ae10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8ae30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8ae50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ae50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8ae60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ae60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf3 */
GEN_NOFRAME uint F_00e8ae90(void)
{
  GEN_ENTER(0xe8ae90u, 0u, 0u, 0u, 0u);
  return 0x135f68c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8af20(void)
{
  GEN_ENTER(0xe8af20u, 0u, 0u, 0u, 0u);
  return 0x46;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8af30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8af70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8af90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8af90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8afb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8afb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8afd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8afd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8aff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf3 */
GEN_NOFRAME uint F_00e8b050(void)
{
  GEN_ENTER(0xe8b050u, 0u, 0u, 0u, 0u);
  return 0x135f6bc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b0e0(void)
{
  GEN_ENTER(0xe8b0e0u, 0u, 0u, 0u, 0u);
  return 0x47;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8b150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8b170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8b190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8b1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0xc50;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf3 */
GEN_NOFRAME uint F_00e8b210(void)
{
  GEN_ENTER(0xe8b210u, 0u, 0u, 0u, 0u);
  return 0x135f6ec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b2a0(void)
{
  GEN_ENTER(0xe8b2a0u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8b310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8b330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8b350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8b370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x380;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf3 */
GEN_NOFRAME uint F_00e8b3d0(void)
{
  GEN_ENTER(0xe8b3d0u, 0u, 0u, 0u, 0u);
  return 0x135f71c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b460(void)
{
  GEN_ENTER(0xe8b460u, 0u, 0u, 0u, 0u);
  return 0x49;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8b4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8b4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8b510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x3b0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf3 */
GEN_NOFRAME uint F_00e8b590(void)
{
  GEN_ENTER(0xe8b590u, 0u, 0u, 0u, 0u);
  return 0x135f74c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b620(void)
{
  GEN_ENTER(0xe8b620u, 0u, 0u, 0u, 0u);
  return 0x4a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8b690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8b6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8b6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8b6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf3 */
GEN_NOFRAME uint F_00e8b750(void)
{
  GEN_ENTER(0xe8b750u, 0u, 0u, 0u, 0u);
  return 0x135f77c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b7e0(void)
{
  GEN_ENTER(0xe8b7e0u, 0u, 0u, 0u, 0u);
  return 0x4b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8b850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8b870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8b890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8b8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8b8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b8e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf3 */
GEN_NOFRAME uint F_00e8b910(void)
{
  GEN_ENTER(0xe8b910u, 0u, 0u, 0u, 0u);
  return 0x135f7ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8b9a0(void)
{
  GEN_ENTER(0xe8b9a0u, 0u, 0u, 0u, 0u);
  return 0x4c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8b9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8b9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8b9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8ba10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8ba10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8ba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8ba50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ba50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8ba70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ba70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8ba90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ba90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8baa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8baa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf3 */
GEN_NOFRAME uint F_00e8bad0(void)
{
  GEN_ENTER(0xe8bad0u, 0u, 0u, 0u, 0u);
  return 0x135f7dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8baf0(void)
{
  GEN_ENTER(0xe8baf0u, 0u, 0u, 0u, 0u);
  return 0x4d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8bb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8bb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8bb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8bb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8bba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8bbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bbe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bbf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf3 */
GEN_NOFRAME uint F_00e8bc20(void)
{
  GEN_ENTER(0xe8bc20u, 0u, 0u, 0u, 0u);
  return 0x135f80c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8bc40(void)
{
  GEN_ENTER(0xe8bc40u, 0u, 0u, 0u, 0u);
  return 0x4e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8bc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8bc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8bcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8bcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8bcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8bd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bd30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bd30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bd40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bd40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x2a4) {
    return in_ecx + 0xc60;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf3 */
GEN_NOFRAME uint F_00e8bd70(void)
{
  GEN_ENTER(0xe8bd70u, 0u, 0u, 0u, 0u);
  return 0x135f814;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8bda0(void)
{
  GEN_ENTER(0xe8bda0u, 0u, 0u, 0u, 0u);
  return 0x4f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8bdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8bdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8be10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8be10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8be30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8be30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8be50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8be50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8be70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8be70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8be90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8be90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x504) {
    return in_ecx + 0x1e80;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf3 */
GEN_NOFRAME uint F_00e8bed0(void)
{
  GEN_ENTER(0xe8bed0u, 0u, 0u, 0u, 0u);
  return 0x135f81c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e8bf00(void)
{
  GEN_ENTER(0xe8bf00u, 0u, 0u, 0u, 0u);
  return 0x50;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e8bf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e8bf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e8bf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8bf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e8bf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e8bfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e8bfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8bfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e8bff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e8c000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8c000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf3 */
GEN_NOFRAME uint F_00e8c030(void)
{
  GEN_ENTER(0xe8c030u, 0u, 0u, 0u, 0u);
  return 0x135f824;
}

/* ref: FUN_00e8c050 */
GEN_NOFRAME uint GEN_THISCALL F_00e8c050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8c050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((*(int * PTR32 *)((int)this + 0x10))[1] - **(int * PTR32 *)((int)this + 0x10)) / 0x18;
}

/* ref: FUN_00e8c070 */
GEN_FRAME uint F_00e8c070(unsigned int gen_a0)
{
  GEN_ENTER(0xe8c070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(undefined4, 0x135eb88) != 0) {
    do {
      if (param_1 == (ushort)(&REFG(undefined2, 0x135d0b8))[(int)(uVar1)]) {
        uVar1 = F_00e83460((uint)(ushort)(&REFG(undefined2, 0x135b5e8))[(int)(uVar1)]);
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < REFG(undefined4, 0x135eb88));
  }
  uVar1 = F_00e83460(0xffff);
  return uVar1;
}

/* ref: FUN_00e8c0c0 */
GEN_FRAME uint F_00e8c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c0c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint local_8;
  
  uVar2 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      uVar2 = 0;
      if (REFG(undefined4, 0x135eb88) != 0) {
        do {
          if (*(uint *)(param_1 + iVar4 * 4) == (uint)(ushort)(&REFG(undefined2, 0x135d0b8))[(int)(uVar2)]) {
            uVar2 = (uint)(ushort)(&REFG(undefined2, 0x135b5e8))[(int)(uVar2)];
            goto LAB_00e8c106;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < REFG(undefined4, 0x135eb88));
      }
      uVar2 = 0xffff;
LAB_00e8c106: ;
      piVar3 = (int *)F_00e83460(uVar2);
      iVar1 = *piVar3;
      uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(piVar3,*(undefined4 *)(param_1 + iVar4 * 4));
      uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x38))(piVar3,uVar2);
      uVar2 = local_8 + uVar2;
      iVar4 = iVar4 + 1;
      local_8 = uVar2;
    } while (iVar4 < param_2);
  }
  return uVar2;
}

/* ref: FUN_00e8c150 */
GEN_FRAME uint F_00e8c150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8c150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar1 = 0;
      if (REFG(undefined4, 0x135eb88) != 0) {
        do {
          if (*(uint *)(param_2 + iVar3 * 4) == (uint)(ushort)(&REFG(undefined2, 0x135d0b8))[(int)(uVar1)]) {
            uVar1 = (uint)(ushort)(&REFG(undefined2, 0x135b5e8))[(int)(uVar1)];
            goto LAB_00e8c186;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < REFG(undefined4, 0x135eb88));
      }
      uVar1 = 0xffff;
LAB_00e8c186: ;
      piVar2 = (int *)F_00e83460(uVar1);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG,*(undefined4 *)(param_2 + iVar3 * 4));
      if (-1 < (int)uVar1) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG,param_1,uVar1,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00e8c1d0 */
GEN_FRAME uint F_00e8c1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  if (param_1 < 0x51) {
    (*(int *)(gen_frame + 0x0)) = *(int *)(&REFG(undefined, 0x135fd10) + (int)((int)(uintptr_t)param_1) * 4);
    param_1 = ((undefined4 *)GEN_TOP((&REFG(undefined * PTR32, 0x135fbc8))[(int)((int)param_1)]));
  }
  else {
    (*(int *)(gen_frame + 0x0)) = 0;
    param_1 = (undefined4 *)0x0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
  uVar2 = 1;
  param_2 = (int *)0x1;
  iVar5 = (*(int *)(gen_frame + 0x8));
  if (0 < (*(int *)(gen_frame + 0x0))) {
    do {
      (*(int *)(gen_frame + 0x4)) = 0;
      if (0 < iVar5) {
        do {
          piVar3 = *(int * PTR32 *)(uVar1 + (*(int *)(gen_frame + 0x4)) * 4);
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,*param_1)));
          if (piVar3 != (int *)0x0) {
            piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
            iVar5 = *piVar3;
            uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG,*param_1);
            uVar2 = ((code *)*(gen_code32 *)(iVar5 + 0x38))(piVar3,uVar2);
            param_2 = (int *)((int)param_2 + uVar2);
          }
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
          iVar5 = (*(int *)(gen_frame + 0x8));
        } while ((*(int *)(gen_frame + 0x4)) < (*(int *)(gen_frame + 0x8)));
      }
      param_1 = param_1 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      uVar2 = (uint)param_2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  return uVar2;
}

/* ref: FUN_00e8c2a0 */
GEN_FRAME uint F_00e8c2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8c2a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  puVar8 = (undefined4 *)0x0;
  if ((param_2 != (int *)0x0) && (param_3 != (char *)0x0)) {
    (*(int *)(gen_frame + 0x14)) = 0;
    if (param_1 < 0x51) {
      (*(int *)(gen_frame + 0x8)) = *(int *)(&REFG(undefined, 0x135fd10) + param_1 * 4);
      puVar8 = ((undefined4 *)GEN_TOP((&REFG(undefined * PTR32, 0x135fbc8))[(int)(param_1)]));
    }
    else {
      (*(int *)(gen_frame + 0x8)) = 0;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x14)));
    (*(char * PTR32 *)(gen_frame + 0x10)) = param_3 + 1;
    cVar1 = '\0';
    if (0 < (*(int *)(gen_frame + 0x8))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8;
      iVar7 = (*(int *)(gen_frame + 0x14));
      do {
        (*(int *)(gen_frame + 0xc)) = 0;
        if (0 < iVar7) {
          do {
            piVar3 = *(int * PTR32 *)(uVar2 + (*(int *)(gen_frame + 0xc)) * 4);
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))));
            if (piVar3 != (int *)0x0) {
              piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
              iVar7 = *piVar5;
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),param_3);
              uVar6 = ((code *)*(gen_code32 *)(iVar7 + 0x48))(piVar5,piVar3,uVar6);
              (*(char * PTR32 *)(gen_frame + 0x10)) = (*(char * PTR32 *)(gen_frame + 0x10)) + uVar6;
              cVar1 = cVar1 + '\x01';
            }
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
            iVar7 = (*(int *)(gen_frame + 0x14));
          } while ((*(int *)(gen_frame + 0xc)) < (*(int *)(gen_frame + 0x14)));
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) - 1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
    }
    *param_3 = cVar1;
    return (int)(*(char * PTR32 *)(gen_frame + 0x10)) - (int)param_3;
  }
  return 0;
}

/* ref: FUN_00e8c3a0 */
GEN_FRAME uint GEN_THISCALL F_00e8c3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c3d0 */
GEN_FRAME uint GEN_THISCALL F_00e8c3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c400 */
GEN_FRAME uint GEN_THISCALL F_00e8c400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c430 */
GEN_FRAME uint GEN_THISCALL F_00e8c430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c460 */
GEN_FRAME uint GEN_THISCALL F_00e8c460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c490 */
GEN_FRAME uint GEN_THISCALL F_00e8c490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c4c0 */
GEN_FRAME uint GEN_THISCALL F_00e8c4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c4f0 */
GEN_FRAME uint GEN_THISCALL F_00e8c4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c520 */
GEN_FRAME uint GEN_THISCALL F_00e8c520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c550 */
GEN_FRAME uint GEN_THISCALL F_00e8c550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c580 */
GEN_FRAME uint GEN_THISCALL F_00e8c580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf2 */
GEN_FRAME uint GEN_THISCALL F_00e8c5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c5e0 */
GEN_FRAME uint GEN_THISCALL F_00e8c5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c610 */
GEN_FRAME uint GEN_THISCALL F_00e8c610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int * piVar2;
  uint * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)0x0;
  piVar2 = ((int *)GEN_TOP((*pcVar1)((int)this + 4)));
  puVar3 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x20)))));
  (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
  puVar9 = puVar3;
  if ((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) {
    do {
      uVar6 = *puVar9;
      if (uVar6 < 0x51) {
        (*(uint *)(gen_frame + 0x10)) = *(uint *)(&REFG(undefined, 0x135fd10) + uVar6 * 4);
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar6)];
      }
      else {
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
      }
      piVar2 = (int *)F_00eaad40(this GEN_EDX_ARG,puVar9);
      if ((piVar2 != (int *)0x0) && ((*(uint *)(gen_frame + 0xc)) = 0, (*(uint *)(gen_frame + 0x10)) != 0)) {
        do {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))
                                    (param_1 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4))));
          if (piVar4 != (int *)0x0) {
            piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4));
            if (-1 < (int)uVar6) {
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
              uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5 GEN_EDX_ARG,uVar6);
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  if ((int)(uVar10 + 0x20) < (int)uVar7) {
                    uVar8 = uVar10 + 0x1f;
                  }
                  else {
                    uVar8 = uVar7 - 1;
                  }
                  (*(uint *)(gen_frame + 0x34)) = ((uVar8 & 0x3fff) << 0xe | uVar10 & 0x3fff) * 8 | 2;
                  pcVar1 = *(gen_code32 *)(*piVar2 + 8);
                  (*(uint *)(gen_frame + 0x2c)) = uVar6;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
                  (*(undefined4 *)(gen_frame + 0x30)) = 0;
                  piVar5 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 4))(piVar5 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
                  }
                  uVar10 = uVar10 + 0x20;
                } while ((int)uVar10 < (int)uVar7);
              }
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              pcVar1 = *(gen_code32 *)(*piVar2 + 8);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
              (*(uint *)(gen_frame + 0x2c)) = uVar6;
              piVar4 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
              ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
              }
            }
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < (*(uint *)(gen_frame + 0x10)));
      }
      puVar9 = puVar9 + 1;
      puVar3 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x0)) + 1);
      (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar3;
    } while (puVar3 < (*(uint * PTR32 *)(gen_frame + 0x20)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_00e8c820 */
GEN_FRAME uint GEN_THISCALL F_00e8c820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8c820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int * piVar2;
  uint * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)0x0;
  piVar2 = ((int *)GEN_TOP((*pcVar1)((int)this + 4)));
  puVar3 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x20)))));
  (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
  puVar9 = puVar3;
  if ((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) {
    do {
      uVar6 = *puVar9;
      if (uVar6 < 0x51) {
        (*(uint *)(gen_frame + 0x10)) = *(uint *)(&REFG(undefined, 0x135fd10) + uVar6 * 4);
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar6)];
      }
      else {
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
      }
      piVar2 = (int *)F_00eab000(this GEN_EDX_ARG,puVar9);
      if ((piVar2 != (int *)0x0) && ((*(uint *)(gen_frame + 0xc)) = 0, (*(uint *)(gen_frame + 0x10)) != 0)) {
        do {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))
                                    (param_1 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4))));
          if (piVar4 != (int *)0x0) {
            piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4));
            if (-1 < (int)uVar6) {
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
              uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5 GEN_EDX_ARG,uVar6);
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  if ((int)(uVar10 + 0x20) < (int)uVar7) {
                    uVar8 = uVar10 + 0x1f;
                  }
                  else {
                    uVar8 = uVar7 - 1;
                  }
                  (*(uint *)(gen_frame + 0x34)) = ((uVar8 & 0x3fff) << 0xe | uVar10 & 0x3fff) * 8 | 2;
                  pcVar1 = *(gen_code32 *)(*piVar2 + 8);
                  (*(uint *)(gen_frame + 0x2c)) = uVar6;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
                  (*(undefined4 *)(gen_frame + 0x30)) = 0;
                  piVar5 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 4))(piVar5 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
                  }
                  uVar10 = uVar10 + 0x20;
                } while ((int)uVar10 < (int)uVar7);
              }
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              pcVar1 = *(gen_code32 *)(*piVar2 + 8);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
              (*(uint *)(gen_frame + 0x2c)) = uVar6;
              piVar4 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
              ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
              }
            }
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < (*(uint *)(gen_frame + 0x10)));
      }
      puVar9 = puVar9 + 1;
      puVar3 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x0)) + 1);
      (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar3;
    } while (puVar3 < (*(uint * PTR32 *)(gen_frame + 0x20)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_00e8ca30 */
GEN_FRAME uint GEN_STDCALL F_00e8ca30(unsigned int gen_a0)
{
  GEN_ENTER(0xe8ca30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8ca50 */
GEN_FRAME uint GEN_STDCALL F_00e8ca50(unsigned int gen_a0)
{
  GEN_ENTER(0xe8ca50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8ca70 */
GEN_FRAME uint GEN_STDCALL F_00e8ca70(unsigned int gen_a0)
{
  GEN_ENTER(0xe8ca70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8ca90 */
GEN_FRAME uint GEN_STDCALL F_00e8ca90(unsigned int gen_a0)
{
  GEN_ENTER(0xe8ca90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8cab0 */
GEN_FRAME uint GEN_STDCALL F_00e8cab0(unsigned int gen_a0)
{
  GEN_ENTER(0xe8cab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8cad0 */
GEN_FRAME uint GEN_STDCALL F_00e8cad0(unsigned int gen_a0)
{
  GEN_ENTER(0xe8cad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8caf0 */
GEN_FRAME uint GEN_STDCALL F_00e8caf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe8caf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8cb10 */
GEN_FRAME uint GEN_STDCALL F_00e8cb10(unsigned int gen_a0)
{
  GEN_ENTER(0xe8cb10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8cb30 */
GEN_FRAME uint GEN_STDCALL F_00e8cb30(unsigned int gen_a0)
{
  GEN_ENTER(0xe8cb30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e8cb50 */
GEN_FRAME uint GEN_THISCALL F_00e8cb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8cb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
  piVar1 = (int *)((int)this + 4);
  (*(uint *)(gen_frame + 0xc)) = 0;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(piVar1)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar5 = uVar4;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      uVar7 = (*(uint *)(gen_frame + 0x10));
      uVar9 = 0;
      uVar5 = *(uint *)(uVar4 + (*(uint *)(gen_frame + 0x10)) * 4);
      if (uVar5 < 0x51) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar5)];
        uVar9 = *(uint *)(&REFG(undefined, 0x135fd10) + uVar5 * 4);
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      }
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
      if (((uVar5 == *(uint *)(uVar4 + uVar7 * 4)) && (piVar1 != (int *)0x0)) &&
         ((*(uint *)(gen_frame + 0x4)) = 0, uVar7 = (*(uint *)(gen_frame + 0x10)), uVar9 != 0)) {
        do {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))
                                    (param_1 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x4)) * 4))));
          uVar5 = 0;
          if (piVar3 != (int *)0x0) {
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x10))(piVar6 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x4)) * 4));
            if (-1 < (int)uVar5) {
              piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG)));
              uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG,uVar5);
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  if ((int)(uVar10 + 0x20) < (int)uVar7) {
                    uVar8 = uVar10 + 0x1f;
                  }
                  else {
                    uVar8 = uVar7 - 1;
                  }
                  (*(uint *)(gen_frame + 0x24)) = ((uVar8 & 0x3fff) << 0xe | uVar10 & 0x3fff) * 8 | 2;
                  pcVar2 = *(gen_code32 *)(*piVar1 + 8);
                  (*(uint *)(gen_frame + 0x1c)) = uVar5;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
                  (*(undefined4 *)(gen_frame + 0x20)) = 0;
                  piVar6 = ((int *)GEN_TOP((*pcVar2)(piVar1)));
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  if ((((*(uint *)(gen_frame + 0x24)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0)) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x18)))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                  }
                  uVar10 = uVar10 + 0x20;
                } while ((int)uVar10 < (int)uVar7);
              }
              (*(uint *)(gen_frame + 0x24)) = 0;
              (*(undefined4 *)(gen_frame + 0x20)) = 0;
              pcVar2 = *(gen_code32 *)(*piVar1 + 8);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
              (*(uint *)(gen_frame + 0x1c)) = uVar5;
              piVar3 = ((int *)GEN_TOP((*pcVar2)(piVar1)));
              uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              if ((((*(uint *)(gen_frame + 0x24)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0)) {
                uVar5 = ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x18)))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
              }
            }
          }
          (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
          uVar7 = (*(uint *)(gen_frame + 0x10));
        } while ((*(uint *)(gen_frame + 0x4)) < uVar9);
      }
      (*(uint *)(gen_frame + 0x10)) = uVar7 + 1;
    } while (uVar7 + 1 < (*(uint *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00e8cd80 */
GEN_FRAME uint GEN_THISCALL F_00e8cd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8cd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int * piVar2;
  uint * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)0x0;
  piVar2 = ((int *)GEN_TOP((*pcVar1)((int)this + 4)));
  puVar3 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x20)))));
  (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
  puVar9 = puVar3;
  if ((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) {
    do {
      uVar6 = *puVar9;
      if (uVar6 < 0x51) {
        (*(uint *)(gen_frame + 0x10)) = *(uint *)(&REFG(undefined, 0x135fd10) + uVar6 * 4);
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar6)];
      }
      else {
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
      }
      piVar2 = (int *)F_00eabc20(this GEN_EDX_ARG,puVar9);
      if ((piVar2 != (int *)0x0) && ((*(uint *)(gen_frame + 0xc)) = 0, (*(uint *)(gen_frame + 0x10)) != 0)) {
        do {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))
                                    (param_1 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4))));
          if (piVar4 != (int *)0x0) {
            piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc)) * 4));
            if (-1 < (int)uVar6) {
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG)));
              uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5 GEN_EDX_ARG,uVar6);
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  if ((int)(uVar10 + 0x20) < (int)uVar7) {
                    uVar8 = uVar10 + 0x1f;
                  }
                  else {
                    uVar8 = uVar7 - 1;
                  }
                  (*(uint *)(gen_frame + 0x34)) = ((uVar8 & 0x3fff) << 0xe | uVar10 & 0x3fff) * 8 | 2;
                  pcVar1 = *(gen_code32 *)(*piVar2 + 8);
                  (*(uint *)(gen_frame + 0x2c)) = uVar6;
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
                  (*(undefined4 *)(gen_frame + 0x30)) = 0;
                  piVar5 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 4))(piVar5 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
                  if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
                  }
                  uVar10 = uVar10 + 0x20;
                } while ((int)uVar10 < (int)uVar7);
              }
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              pcVar1 = *(gen_code32 *)(*piVar2 + 8);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
              (*(uint *)(gen_frame + 0x2c)) = uVar6;
              piVar4 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
              ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)));
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
              if ((((*(uint *)(gen_frame + 0x34)) & 0x80000000) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0)) {
                ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x28)))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
              }
            }
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < (*(uint *)(gen_frame + 0x10)));
      }
      puVar9 = puVar9 + 1;
      puVar3 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x0)) + 1);
      (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar3;
    } while (puVar3 < (*(uint * PTR32 *)(gen_frame + 0x20)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8d0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8d140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8d350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8d430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8d4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d5c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8d6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8d9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8da10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8da10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8da50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8da50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8dab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8dab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8db30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8db30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8dbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8dbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8dcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8dcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8dd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8dd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8dd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8dd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8ddd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ddd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8de30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8de30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8df40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8df40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x224);
  if (iVar8 != iVar8 + *(int *)(this + 0x228) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x224) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8e150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x224);
  if (iVar2 != iVar2 + *(int *)(this + 0x228) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x228) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8e230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x164);
  if (iVar8 != iVar8 + *(int *)(this + 0x168) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x164) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8e4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x164);
  if (iVar2 != iVar2 + *(int *)(this + 0x168) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x168) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8e640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x164);
  if (iVar8 != iVar8 + *(int *)(this + 0x168) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x164) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8e850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x164);
  if (iVar2 != iVar2 + *(int *)(this + 0x168) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x168) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8e8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8e930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8eac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8eac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8eb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8eb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8eb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8ebd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ebd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8ecb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8ecb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8ed40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8ed40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x284);
  if (iVar8 != iVar8 + *(int *)(this + 0x288) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x284) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ee40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ee40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x284);
  if (iVar1 != iVar1 + *(int *)(this + 0x288) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8eea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ef10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ef10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x284);
  if (iVar1 != iVar1 + *(int *)(this + 0x288) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8ef50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ef50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x284);
  if (iVar2 != iVar2 + *(int *)(this + 0x288) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x288) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8efb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8efb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8f030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8f0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f1c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8f2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8f440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8f650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f8c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8f9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8fab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8fb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x294);
  if (iVar8 != iVar8 + *(int *)(this + 0x298) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x294) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e8fd50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x294);
  if (iVar2 != iVar2 + *(int *)(this + 0x298) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x298) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fe30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8fe30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8fec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8fec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ffc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ffc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e900d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe900d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e901b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe901b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 500);
  if (iVar8 != iVar8 + *(int *)(this + 0x1f8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 500) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 500);
  if (iVar1 != iVar1 + *(int *)(this + 0x1f8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e903a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe903a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 500);
  if (iVar1 != iVar1 + *(int *)(this + 0x1f8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e90450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 500);
  if (iVar2 != iVar2 + *(int *)(this + 0x1f8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1f8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe90580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0xa64);
  if (iVar8 != iVar8 + *(int *)(this + 0xa68) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0xa64) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa64);
  if (iVar1 != iVar1 + *(int *)(this + 0xa68) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e907e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe907e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa64);
  if (iVar1 != iVar1 + *(int *)(this + 0xa68) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e90820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xa64);
  if (iVar2 != iVar2 + *(int *)(this + 0xa68) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xa68) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e908e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe908e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x274);
  if (iVar8 != iVar8 + *(int *)(this + 0x278) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x274) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e90b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x274);
  if (iVar2 != iVar2 + *(int *)(this + 0x278) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x278) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe90c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e90cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x3f4);
  if (iVar8 != iVar8 + *(int *)(this + 0x3f8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x3f4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3f4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3f8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14);
  }
  return 0;
}

