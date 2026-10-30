#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe87e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe87e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe87eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe87ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe87ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e87f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e87f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe87f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x520;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e87f50(void)
{
  GEN_ENTER(0xe87f50u, 0u, 0u, 0u, 0u);
  return 0x135f17c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e87fe0(void)
{
  GEN_ENTER(0xe87fe0u, 0u, 0u, 0u, 0u);
  return 0x2b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e87ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe87ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e880b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe880b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e880d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe880d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e880e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe880e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x850;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88110(void)
{
  GEN_ENTER(0xe88110u, 0u, 0u, 0u, 0u);
  return 0x135f1ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e881a0(void)
{
  GEN_ENTER(0xe881a0u, 0u, 0u, 0u, 0u);
  return 0x2c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e881b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe881b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e881f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe881f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e882a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe882a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e882d0(void)
{
  GEN_ENTER(0xe882d0u, 0u, 0u, 0u, 0u);
  return 0x135f1dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88360(void)
{
  GEN_ENTER(0xe88360u, 0u, 0u, 0u, 0u);
  return 0x2d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e883b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe883b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e883d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe883d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e883f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe883f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88490(void)
{
  GEN_ENTER(0xe88490u, 0u, 0u, 0u, 0u);
  return 0x135f20c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88520(void)
{
  GEN_ENTER(0xe88520u, 0u, 0u, 0u, 0u);
  return 0x2e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e885b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe885b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e885d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe885d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e885f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe885f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88650(void)
{
  GEN_ENTER(0xe88650u, 0u, 0u, 0u, 0u);
  return 0x135f23c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e886e0(void)
{
  GEN_ENTER(0xe886e0u, 0u, 0u, 0u, 0u);
  return 0x2f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e886f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe886f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e887b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe887b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e887d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe887d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e887e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe887e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88810(void)
{
  GEN_ENTER(0xe88810u, 0u, 0u, 0u, 0u);
  return 0x135f26c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e888a0(void)
{
  GEN_ENTER(0xe888a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e888b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe888b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e888f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe888f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e889a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe889a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e889d0(void)
{
  GEN_ENTER(0xe889d0u, 0u, 0u, 0u, 0u);
  return 0x135f29c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88a60(void)
{
  GEN_ENTER(0xe88a60u, 0u, 0u, 0u, 0u);
  return 0x31;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88b90(void)
{
  GEN_ENTER(0xe88b90u, 0u, 0u, 0u, 0u);
  return 0x135f2cc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88c20(void)
{
  GEN_ENTER(0xe88c20u, 0u, 0u, 0u, 0u);
  return 0x32;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88d50(void)
{
  GEN_ENTER(0xe88d50u, 0u, 0u, 0u, 0u);
  return 0x135f2fc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88de0(void)
{
  GEN_ENTER(0xe88de0u, 0u, 0u, 0u, 0u);
  return 0x33;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe88eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e88ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe88ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x250;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88f10(void)
{
  GEN_ENTER(0xe88f10u, 0u, 0u, 0u, 0u);
  return 0x135f32c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e88fa0(void)
{
  GEN_ENTER(0xe88fa0u, 0u, 0u, 0u, 0u);
  return 0x34;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e88ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe88ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e890a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe890a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x280;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e890d0(void)
{
  GEN_ENTER(0xe890d0u, 0u, 0u, 0u, 0u);
  return 0x135f35c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89160(void)
{
  GEN_ENTER(0xe89160u, 0u, 0u, 0u, 0u);
  return 0x35;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e891b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe891b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e891d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe891d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e891f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe891f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x250;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89290(void)
{
  GEN_ENTER(0xe89290u, 0u, 0u, 0u, 0u);
  return 0x135f38c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89320(void)
{
  GEN_ENTER(0xe89320u, 0u, 0u, 0u, 0u);
  return 0x36;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e893b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe893b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e893d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe893d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e893f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe893f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89450(void)
{
  GEN_ENTER(0xe89450u, 0u, 0u, 0u, 0u);
  return 0x135f3bc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e894e0(void)
{
  GEN_ENTER(0xe894e0u, 0u, 0u, 0u, 0u);
  return 0x37;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e894f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe894f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e895b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe895b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e895d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe895d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e895e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe895e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x400;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89610(void)
{
  GEN_ENTER(0xe89610u, 0u, 0u, 0u, 0u);
  return 0x135f3ec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e896a0(void)
{
  GEN_ENTER(0xe896a0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e896b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe896b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e896f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe896f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e897a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe897a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x4c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e897d0(void)
{
  GEN_ENTER(0xe897d0u, 0u, 0u, 0u, 0u);
  return 0x135f41c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89860(void)
{
  GEN_ENTER(0xe89860u, 0u, 0u, 0u, 0u);
  return 0x39;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e898b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe898b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e898d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe898d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e898f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe898f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xc4) {
    return in_ecx + 0x2a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89990(void)
{
  GEN_ENTER(0xe89990u, 0u, 0u, 0u, 0u);
  return 0x135f44c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89a20(void)
{
  GEN_ENTER(0xe89a20u, 0u, 0u, 0u, 0u);
  return 0x3a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89b50(void)
{
  GEN_ENTER(0xe89b50u, 0u, 0u, 0u, 0u);
  return 0x135f47c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89be0(void)
{
  GEN_ENTER(0xe89be0u, 0u, 0u, 0u, 0u);
  return 0x3b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x530;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89d10(void)
{
  GEN_ENTER(0xe89d10u, 0u, 0u, 0u, 0u);
  return 0x135f4ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89da0(void)
{
  GEN_ENTER(0xe89da0u, 0u, 0u, 0u, 0u);
  return 0x3c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e89ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe89ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0xb30;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89ed0(void)
{
  GEN_ENTER(0xe89ed0u, 0u, 0u, 0u, 0u);
  return 0x135f4dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e89f60(void)
{
  GEN_ENTER(0xe89f60u, 0u, 0u, 0u, 0u);
  return 0x3d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe89fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e89ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe89ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x4a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a090(void)
{
  GEN_ENTER(0xe8a090u, 0u, 0u, 0u, 0u);
  return 0x135f50c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a120(void)
{
  GEN_ENTER(0xe8a120u, 0u, 0u, 0u, 0u);
  return 0x3e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a250(void)
{
  GEN_ENTER(0xe8a250u, 0u, 0u, 0u, 0u);
  return 0x135f53c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a2e0(void)
{
  GEN_ENTER(0xe8a2e0u, 0u, 0u, 0u, 0u);
  return 0x3f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a3d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a3e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x230;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a410(void)
{
  GEN_ENTER(0xe8a410u, 0u, 0u, 0u, 0u);
  return 0x135f56c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a4a0(void)
{
  GEN_ENTER(0xe8a4a0u, 0u, 0u, 0u, 0u);
  return 0x40;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a5d0(void)
{
  GEN_ENTER(0xe8a5d0u, 0u, 0u, 0u, 0u);
  return 0x135f59c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a660(void)
{
  GEN_ENTER(0xe8a660u, 0u, 0u, 0u, 0u);
  return 0x41;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a790(void)
{
  GEN_ENTER(0xe8a790u, 0u, 0u, 0u, 0u);
  return 0x135f5cc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a820(void)
{
  GEN_ENTER(0xe8a820u, 0u, 0u, 0u, 0u);
  return 0x42;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8a920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8a920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x920;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a950(void)
{
  GEN_ENTER(0xe8a950u, 0u, 0u, 0u, 0u);
  return 0x135f5fc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8a9e0(void)
{
  GEN_ENTER(0xe8a9e0u, 0u, 0u, 0u, 0u);
  return 0x43;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8a9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8a9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8aa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8aa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8aa90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8aab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8aad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8aae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x230;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8ab10(void)
{
  GEN_ENTER(0xe8ab10u, 0u, 0u, 0u, 0u);
  return 0x135f62c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8aba0(void)
{
  GEN_ENTER(0xe8aba0u, 0u, 0u, 0u, 0u);
  return 0x44;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8abb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8abb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8abf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8abf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ac10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8ac10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ac30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ac30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ac50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ac70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8ac90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ac90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8aca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8aca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8acd0(void)
{
  GEN_ENTER(0xe8acd0u, 0u, 0u, 0u, 0u);
  return 0x135f65c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8ad60(void)
{
  GEN_ENTER(0xe8ad60u, 0u, 0u, 0u, 0u);
  return 0x45;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8ad70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8adb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8adb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8add0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8add0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8adf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8adf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ae10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ae30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8ae50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ae50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8ae60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ae60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8ae90(void)
{
  GEN_ENTER(0xe8ae90u, 0u, 0u, 0u, 0u);
  return 0x135f68c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8af20(void)
{
  GEN_ENTER(0xe8af20u, 0u, 0u, 0u, 0u);
  return 0x46;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8af30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8af30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8af70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8af70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8af90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8af90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8afb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8afd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8afd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8aff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8aff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b050(void)
{
  GEN_ENTER(0xe8b050u, 0u, 0u, 0u, 0u);
  return 0x135f6bc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b0e0(void)
{
  GEN_ENTER(0xe8b0e0u, 0u, 0u, 0u, 0u);
  return 0x47;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0xc50;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b210(void)
{
  GEN_ENTER(0xe8b210u, 0u, 0u, 0u, 0u);
  return 0x135f6ec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b2a0(void)
{
  GEN_ENTER(0xe8b2a0u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b3a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x380;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b3d0(void)
{
  GEN_ENTER(0xe8b3d0u, 0u, 0u, 0u, 0u);
  return 0x135f71c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b460(void)
{
  GEN_ENTER(0xe8b460u, 0u, 0u, 0u, 0u);
  return 0x49;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x3b0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b590(void)
{
  GEN_ENTER(0xe8b590u, 0u, 0u, 0u, 0u);
  return 0x135f74c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b620(void)
{
  GEN_ENTER(0xe8b620u, 0u, 0u, 0u, 0u);
  return 0x4a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b750(void)
{
  GEN_ENTER(0xe8b750u, 0u, 0u, 0u, 0u);
  return 0x135f77c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b7e0(void)
{
  GEN_ENTER(0xe8b7e0u, 0u, 0u, 0u, 0u);
  return 0x4b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b8d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8b8e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8b8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b910(void)
{
  GEN_ENTER(0xe8b910u, 0u, 0u, 0u, 0u);
  return 0x135f7ac;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8b9a0(void)
{
  GEN_ENTER(0xe8b9a0u, 0u, 0u, 0u, 0u);
  return 0x4c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8b9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ba10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8ba10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ba30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ba30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ba50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ba50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8ba70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ba70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8ba90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ba90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8baa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8baa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bad0(void)
{
  GEN_ENTER(0xe8bad0u, 0u, 0u, 0u, 0u);
  return 0x135f7dc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8baf0(void)
{
  GEN_ENTER(0xe8baf0u, 0u, 0u, 0u, 0u);
  return 0x4d;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bb80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bbf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bc20(void)
{
  GEN_ENTER(0xe8bc20u, 0u, 0u, 0u, 0u);
  return 0x135f80c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bc40(void)
{
  GEN_ENTER(0xe8bc40u, 0u, 0u, 0u, 0u);
  return 0x4e;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bd30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x2a4) {
    return in_ecx + 0xc60;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bd70(void)
{
  GEN_ENTER(0xe8bd70u, 0u, 0u, 0u, 0u);
  return 0x135f814;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bda0(void)
{
  GEN_ENTER(0xe8bda0u, 0u, 0u, 0u, 0u);
  return 0x4f;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8be10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8be10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8be30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8be30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8be50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8be50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8be70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8be70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8be90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8be90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x504) {
    return in_ecx + 0x1e80;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bed0(void)
{
  GEN_ENTER(0xe8bed0u, 0u, 0u, 0u, 0u);
  return 0x135f81c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8bf00(void)
{
  GEN_ENTER(0xe8bf00u, 0u, 0u, 0u, 0u);
  return 0x50;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[(int)(uVar1)];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8bf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bfb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8bfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8bfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8bff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8bff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8c000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8c000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e8c030(void)
{
  GEN_ENTER(0xe8c030u, 0u, 0u, 0u, 0u);
  return 0x135f824;
}

/* ref: FUN_00e8c050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e8c050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8c050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((*((int * PTR32 *)GEN_TOP(((int)this + 0x10))))[1] - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) / 0x18;
}

/* ref: FUN_00e8c070 */
GEN_LIB GEN_FRAME uint F_00e8c070(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe8c070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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
GEN_LIB GEN_FRAME uint F_00e8c0c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
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
          if (*((uint *)GEN_TOP((param_1 + iVar4 * 4))) == (uint)(ushort)(&REFG(undefined2, 0x135d0b8))[(int)(uVar2)]) {
            uVar2 = (uint)(ushort)(&REFG(undefined2, 0x135b5e8))[(int)(uVar2)];
            goto LAB_00e8c106;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < REFG(undefined4, 0x135eb88));
      }
      uVar2 = 0xffff;
LAB_00e8c106: ;
      piVar3 = ((int *)GEN_TOP(F_00e83460(uVar2)));
      iVar1 = *piVar3;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(piVar3,*((undefined4 *)GEN_TOP((param_1 + iVar4 * 4))));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x38))))(piVar3,uVar2);
      uVar2 = local_8 + uVar2;
      iVar4 = iVar4 + 1;
      local_8 = uVar2;
    } while (iVar4 < param_2);
  }
  return uVar2;
}

/* ref: FUN_00e8c150 */
GEN_LIB GEN_FRAME uint F_00e8c150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe8c150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar1 = 0;
      if (REFG(undefined4, 0x135eb88) != 0) {
        do {
          if (*((uint *)GEN_TOP((param_2 + iVar3 * 4))) == (uint)(ushort)(&REFG(undefined2, 0x135d0b8))[(int)(uVar1)]) {
            uVar1 = (uint)(ushort)(&REFG(undefined2, 0x135b5e8))[(int)(uVar1)];
            goto LAB_00e8c186;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < REFG(undefined4, 0x135eb88));
      }
      uVar1 = 0xffff;
LAB_00e8c186: ;
      piVar2 = ((int *)GEN_TOP(F_00e83460(uVar1)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + iVar3 * 4))));
      if (-1 < (int)uVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG,param_1,uVar1,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00e8c1d0 */
GEN_LIB GEN_FRAME uint F_00e8c1d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
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
    param_1 = ((undefined4 *)GEN_TOP(0x0));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
  uVar2 = 1;
  param_2 = ((int *)GEN_TOP(0x1));
  iVar5 = (*(int *)(gen_frame + 0x8));
  if (0 < (*(int *)(gen_frame + 0x0))) {
    do {
      (*(int *)(gen_frame + 0x4)) = 0;
      if (0 < iVar5) {
        do {
          piVar3 = *((int * PTR32 *)GEN_TOP((uVar1 + (*(int *)(gen_frame + 0x4)) * 4)));
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,*param_1)));
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG)));
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG)));
            iVar5 = *piVar3;
            uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,*param_1);
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x38))))(piVar3,uVar2);
            param_2 = ((int *)GEN_TOP(((int)param_2 + uVar2)));
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
GEN_LIB GEN_FRAME uint F_00e8c2a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe8c2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  puVar8 = ((undefined4 *)GEN_TOP(0x0));
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (param_3 != ((char *)GEN_TOP(0x0)))) {
    (*(int *)(gen_frame + 0xc)) = 0;
    if (param_1 < 0x51) {
      (*(int *)(gen_frame + 0x0)) = *(int *)(&REFG(undefined, 0x135fd10) + param_1 * 4);
      puVar8 = ((undefined4 *)GEN_TOP((&REFG(undefined * PTR32, 0x135fbc8))[(int)(param_1)]));
    }
    else {
      (*(int *)(gen_frame + 0x0)) = 0;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)));
    (*(char * PTR32 *)(gen_frame + 0x8)) = param_3 + 1;
    cVar1 = '\0';
    if (0 < (*(int *)(gen_frame + 0x0))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar8;
      iVar7 = (*(int *)(gen_frame + 0xc));
      do {
        (*(int *)(gen_frame + 0x4)) = 0;
        if (0 < iVar7) {
          do {
            piVar3 = *((int * PTR32 *)GEN_TOP((uVar2 + (*(int *)(gen_frame + 0x4)) * 4)));
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x10)))));
            if (piVar3 != ((int *)GEN_TOP(0x0))) {
              piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG)));
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG)));
              iVar7 = *piVar5;
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x10)),param_3);
              uVar6 = ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x48))))(piVar5,piVar3,uVar6);
              (*(char * PTR32 *)(gen_frame + 0x8)) = (*(char * PTR32 *)(gen_frame + 0x8)) + uVar6;
              cVar1 = cVar1 + '\x01';
            }
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
            iVar7 = (*(int *)(gen_frame + 0xc));
          } while ((*(int *)(gen_frame + 0x4)) < (*(int *)(gen_frame + 0xc)));
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    *param_3 = cVar1;
    return (int)(*(char * PTR32 *)(gen_frame + 0x8)) - (int)param_3;
  }
  return 0;
}

/* ref: FUN_00e8c3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

/* ref: FUN_00e8c490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e8c490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8c490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x136066c) + uVar1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[(int)(uVar1)];
}

