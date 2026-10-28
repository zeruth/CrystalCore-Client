#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e84e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe84e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e84e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe84e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x200;
  }
  return 0;
}

/* ref: FUN_00e84eb0 */
GEN_NOFRAME uint F_00e84eb0(void)
{
  GEN_ENTER(0xe84eb0u, 0u, 0u, 0u, 0u);
  return 0x135ec60;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf3 */
GEN_NOFRAME uint F_00e84ec0(void)
{
  GEN_ENTER(0xe84ec0u, 0u, 0u, 0u, 0u);
  return 0x135ec60;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e84ee0(void)
{
  GEN_ENTER(0xe84ee0u, 0u, 0u, 0u, 0u);
  return 0xf;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e84ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe84ef0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e84f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe84f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e84f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe84f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e84f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e84f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e84fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e84fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe84fd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e84fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe84fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xe4) {
    return in_ecx + 0xa70;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf3 */
GEN_NOFRAME uint F_00e85010(void)
{
  GEN_ENTER(0xe85010u, 0u, 0u, 0u, 0u);
  return 0x135ec6c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e850a0(void)
{
  GEN_ENTER(0xe850a0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e850b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe850b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e850f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe850f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e851a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe851a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x280;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf3 */
GEN_NOFRAME uint F_00e851d0(void)
{
  GEN_ENTER(0xe851d0u, 0u, 0u, 0u, 0u);
  return 0x135ec9c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85260(void)
{
  GEN_ENTER(0xe85260u, 0u, 0u, 0u, 0u);
  return 0x11;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e852b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe852b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e852d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe852d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e852f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe852f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85360u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x400;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf3 */
GEN_NOFRAME uint F_00e85390(void)
{
  GEN_ENTER(0xe85390u, 0u, 0u, 0u, 0u);
  return 0x135eccc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85420(void)
{
  GEN_ENTER(0xe85420u, 0u, 0u, 0u, 0u);
  return 0x12;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e85470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e854b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e854d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e854f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf3 */
GEN_NOFRAME uint F_00e85550(void)
{
  GEN_ENTER(0xe85550u, 0u, 0u, 0u, 0u);
  return 0x135ecfc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e855e0(void)
{
  GEN_ENTER(0xe855e0u, 0u, 0u, 0u, 0u);
  return 0x13;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e855f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe855f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e85630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e856b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe856b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e856d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe856d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e856e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe856e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x670;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf3 */
GEN_NOFRAME uint F_00e85710(void)
{
  GEN_ENTER(0xe85710u, 0u, 0u, 0u, 0u);
  return 0x135ed2c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e857a0(void)
{
  GEN_ENTER(0xe857a0u, 0u, 0u, 0u, 0u);
  return 0x14;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e857b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe857b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e857f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe857f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e858a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe858a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x25c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf3 */
GEN_NOFRAME uint F_00e858d0(void)
{
  GEN_ENTER(0xe858d0u, 0u, 0u, 0u, 0u);
  return 0x135ed5c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85960(void)
{
  GEN_ENTER(0xe85960u, 0u, 0u, 0u, 0u);
  return 0x15;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85970u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e859b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe859b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e859d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe859d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e859f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe859f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85a60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf3 */
GEN_NOFRAME uint F_00e85a90(void)
{
  GEN_ENTER(0xe85a90u, 0u, 0u, 0u, 0u);
  return 0x135ed8c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85b20(void)
{
  GEN_ENTER(0xe85b20u, 0u, 0u, 0u, 0u);
  return 0x16;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e85b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf3 */
GEN_NOFRAME uint F_00e85c50(void)
{
  GEN_ENTER(0xe85c50u, 0u, 0u, 0u, 0u);
  return 0x135edbc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85ce0(void)
{
  GEN_ENTER(0xe85ce0u, 0u, 0u, 0u, 0u);
  return 0x17;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85cf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e85d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85dd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf3 */
GEN_NOFRAME uint F_00e85e10(void)
{
  GEN_ENTER(0xe85e10u, 0u, 0u, 0u, 0u);
  return 0x135edec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e85ea0(void)
{
  GEN_ENTER(0xe85ea0u, 0u, 0u, 0u, 0u);
  return 0x18;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e85eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85eb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e85ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e85f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe85f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e85f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e85f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e85f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e85f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e85fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe85fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf3 */
GEN_NOFRAME uint F_00e85fd0(void)
{
  GEN_ENTER(0xe85fd0u, 0u, 0u, 0u, 0u);
  return 0x135ee1c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86060(void)
{
  GEN_ENTER(0xe86060u, 0u, 0u, 0u, 0u);
  return 0x19;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e860b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe860b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e860d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe860d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e860f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe860f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x340;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf3 */
GEN_NOFRAME uint F_00e86190(void)
{
  GEN_ENTER(0xe86190u, 0u, 0u, 0u, 0u);
  return 0x135ee4c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86220(void)
{
  GEN_ENTER(0xe86220u, 0u, 0u, 0u, 0u);
  return 0x1a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e862b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e862d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e862f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x4c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf3 */
GEN_NOFRAME uint F_00e86350(void)
{
  GEN_ENTER(0xe86350u, 0u, 0u, 0u, 0u);
  return 0x135ee7c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e863e0(void)
{
  GEN_ENTER(0xe863e0u, 0u, 0u, 0u, 0u);
  return 0x1b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e863f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe863f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e86470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e864b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe864b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e864d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe864d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e864e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe864e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf3 */
GEN_NOFRAME uint F_00e86510(void)
{
  GEN_ENTER(0xe86510u, 0u, 0u, 0u, 0u);
  return 0x135eeac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e865a0(void)
{
  GEN_ENTER(0xe865a0u, 0u, 0u, 0u, 0u);
  return 0x1c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e865b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe865b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e865f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe865f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e86630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e866a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe866a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf3 */
GEN_NOFRAME uint F_00e866d0(void)
{
  GEN_ENTER(0xe866d0u, 0u, 0u, 0u, 0u);
  return 0x135eedc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86760(void)
{
  GEN_ENTER(0xe86760u, 0u, 0u, 0u, 0u);
  return 0x1d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e867b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe867b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e867d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe867d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e867f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe867f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf3 */
GEN_NOFRAME uint F_00e86890(void)
{
  GEN_ENTER(0xe86890u, 0u, 0u, 0u, 0u);
  return 0x135ef0c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86920(void)
{
  GEN_ENTER(0xe86920u, 0u, 0u, 0u, 0u);
  return 0x1e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86930u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e869b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe869b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e869d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe869d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e869f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe869f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf3 */
GEN_NOFRAME uint F_00e86a50(void)
{
  GEN_ENTER(0xe86a50u, 0u, 0u, 0u, 0u);
  return 0x135ef3c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86ae0(void)
{
  GEN_ENTER(0xe86ae0u, 0u, 0u, 0u, 0u);
  return 0x1f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86af0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e86b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf3 */
GEN_NOFRAME uint F_00e86c10(void)
{
  GEN_ENTER(0xe86c10u, 0u, 0u, 0u, 0u);
  return 0x135ef6c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86ca0(void)
{
  GEN_ENTER(0xe86ca0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86cb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e86d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf3 */
GEN_NOFRAME uint F_00e86dd0(void)
{
  GEN_ENTER(0xe86dd0u, 0u, 0u, 0u, 0u);
  return 0x135ef9c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e86e60(void)
{
  GEN_ENTER(0xe86e60u, 0u, 0u, 0u, 0u);
  return 0x21;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e86e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86e70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e86eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e86ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe86ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e86ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e86f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e86f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e86f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e86f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe86f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf3 */
GEN_NOFRAME uint F_00e86f90(void)
{
  GEN_ENTER(0xe86f90u, 0u, 0u, 0u, 0u);
  return 0x135efcc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87020(void)
{
  GEN_ENTER(0xe87020u, 0u, 0u, 0u, 0u);
  return 0x22;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87030u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e870b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe870b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e870d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe870d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e870f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe870f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf3 */
GEN_NOFRAME uint F_00e87150(void)
{
  GEN_ENTER(0xe87150u, 0u, 0u, 0u, 0u);
  return 0x135effc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e871e0(void)
{
  GEN_ENTER(0xe871e0u, 0u, 0u, 0u, 0u);
  return 0x23;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e871f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe871f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e872b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe872b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e872d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe872d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e872e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe872e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf3 */
GEN_NOFRAME uint F_00e87310(void)
{
  GEN_ENTER(0xe87310u, 0u, 0u, 0u, 0u);
  return 0x135f02c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e873a0(void)
{
  GEN_ENTER(0xe873a0u, 0u, 0u, 0u, 0u);
  return 0x24;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e873b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe873b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e873f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe873f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e87470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e874a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe874a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf3 */
GEN_NOFRAME uint F_00e874d0(void)
{
  GEN_ENTER(0xe874d0u, 0u, 0u, 0u, 0u);
  return 0x135f05c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87560(void)
{
  GEN_ENTER(0xe87560u, 0u, 0u, 0u, 0u);
  return 0x25;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87570u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e875b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe875b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e875d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe875d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e875f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe875f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e87630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf3 */
GEN_NOFRAME uint F_00e87690(void)
{
  GEN_ENTER(0xe87690u, 0u, 0u, 0u, 0u);
  return 0x135f08c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87720(void)
{
  GEN_ENTER(0xe87720u, 0u, 0u, 0u, 0u);
  return 0x26;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e877b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe877b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e877d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe877d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e877f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe877f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf3 */
GEN_NOFRAME uint F_00e87850(void)
{
  GEN_ENTER(0xe87850u, 0u, 0u, 0u, 0u);
  return 0x135f0bc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e878e0(void)
{
  GEN_ENTER(0xe878e0u, 0u, 0u, 0u, 0u);
  return 0x27;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e878f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe878f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e879b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe879b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e879d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe879d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e879e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe879e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x460;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf3 */
GEN_NOFRAME uint F_00e87a10(void)
{
  GEN_ENTER(0xe87a10u, 0u, 0u, 0u, 0u);
  return 0x135f0ec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87aa0(void)
{
  GEN_ENTER(0xe87aa0u, 0u, 0u, 0u, 0u);
  return 0x28;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87ab0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e87b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x3a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf3 */
GEN_NOFRAME uint F_00e87bd0(void)
{
  GEN_ENTER(0xe87bd0u, 0u, 0u, 0u, 0u);
  return 0x135f11c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87c60(void)
{
  GEN_ENTER(0xe87c60u, 0u, 0u, 0u, 0u);
  return 0x29;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87c70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e87d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87d50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf3 */
GEN_NOFRAME uint F_00e87d90(void)
{
  GEN_ENTER(0xe87d90u, 0u, 0u, 0u, 0u);
  return 0x135f14c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87e20(void)
{
  GEN_ENTER(0xe87e20u, 0u, 0u, 0u, 0u);
  return 0x2a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87e30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e87e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e87e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e87eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e87ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e87ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe87ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e87f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e87f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x520;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf3 */
GEN_NOFRAME uint F_00e87f50(void)
{
  GEN_ENTER(0xe87f50u, 0u, 0u, 0u, 0u);
  return 0x135f17c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e87fe0(void)
{
  GEN_ENTER(0xe87fe0u, 0u, 0u, 0u, 0u);
  return 0x2b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e87ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe87ff0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e880b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe880b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e880d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe880d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e880e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe880e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x850;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf3 */
GEN_NOFRAME uint F_00e88110(void)
{
  GEN_ENTER(0xe88110u, 0u, 0u, 0u, 0u);
  return 0x135f1ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e881a0(void)
{
  GEN_ENTER(0xe881a0u, 0u, 0u, 0u, 0u);
  return 0x2c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e881b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe881b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e881f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe881f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e882a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe882a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf3 */
GEN_NOFRAME uint F_00e882d0(void)
{
  GEN_ENTER(0xe882d0u, 0u, 0u, 0u, 0u);
  return 0x135f1dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88360(void)
{
  GEN_ENTER(0xe88360u, 0u, 0u, 0u, 0u);
  return 0x2d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e883b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe883b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e883d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe883d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e883f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe883f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e88460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf3 */
GEN_NOFRAME uint F_00e88490(void)
{
  GEN_ENTER(0xe88490u, 0u, 0u, 0u, 0u);
  return 0x135f20c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88520(void)
{
  GEN_ENTER(0xe88520u, 0u, 0u, 0u, 0u);
  return 0x2e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e885b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe885b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e885d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe885d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e885f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe885f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e88620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf3 */
GEN_NOFRAME uint F_00e88650(void)
{
  GEN_ENTER(0xe88650u, 0u, 0u, 0u, 0u);
  return 0x135f23c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e886e0(void)
{
  GEN_ENTER(0xe886e0u, 0u, 0u, 0u, 0u);
  return 0x2f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e886f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe886f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e887b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe887b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e887d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe887d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e887e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe887e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf3 */
GEN_NOFRAME uint F_00e88810(void)
{
  GEN_ENTER(0xe88810u, 0u, 0u, 0u, 0u);
  return 0x135f26c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e888a0(void)
{
  GEN_ENTER(0xe888a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e888b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe888b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e888f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe888f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e889a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe889a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf3 */
GEN_NOFRAME uint F_00e889d0(void)
{
  GEN_ENTER(0xe889d0u, 0u, 0u, 0u, 0u);
  return 0x135f29c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88a60(void)
{
  GEN_ENTER(0xe88a60u, 0u, 0u, 0u, 0u);
  return 0x31;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88a70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e88b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf3 */
GEN_NOFRAME uint F_00e88b90(void)
{
  GEN_ENTER(0xe88b90u, 0u, 0u, 0u, 0u);
  return 0x135f2cc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88c20(void)
{
  GEN_ENTER(0xe88c20u, 0u, 0u, 0u, 0u);
  return 0x32;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88c30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e88d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf3 */
GEN_NOFRAME uint F_00e88d50(void)
{
  GEN_ENTER(0xe88d50u, 0u, 0u, 0u, 0u);
  return 0x135f2fc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88de0(void)
{
  GEN_ENTER(0xe88de0u, 0u, 0u, 0u, 0u);
  return 0x33;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e88e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e88e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e88e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e88eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe88eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e88ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e88ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x250;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf3 */
GEN_NOFRAME uint F_00e88f10(void)
{
  GEN_ENTER(0xe88f10u, 0u, 0u, 0u, 0u);
  return 0x135f32c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e88fa0(void)
{
  GEN_ENTER(0xe88fa0u, 0u, 0u, 0u, 0u);
  return 0x34;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e88fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88fb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e88ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe88ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e89030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e890a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe890a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x280;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf3 */
GEN_NOFRAME uint F_00e890d0(void)
{
  GEN_ENTER(0xe890d0u, 0u, 0u, 0u, 0u);
  return 0x135f35c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89160(void)
{
  GEN_ENTER(0xe89160u, 0u, 0u, 0u, 0u);
  return 0x35;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e891b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe891b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e891d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe891d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e891f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe891f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e89210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e89230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe89230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e89250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e89260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x250;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf3 */
GEN_NOFRAME uint F_00e89290(void)
{
  GEN_ENTER(0xe89290u, 0u, 0u, 0u, 0u);
  return 0x135f38c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf3 */
GEN_NOFRAME uint F_00e89320(void)
{
  GEN_ENTER(0xe89320u, 0u, 0u, 0u, 0u);
  return 0x36;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e89330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e89370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e89390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe89390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e893b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe893b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e893d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe893d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

