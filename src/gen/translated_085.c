#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::ContainerInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009072c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9072c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009072f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9072f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (param_1[0xc82] != 0) {
    F_00406b30(param_1[0xc82]);
    param_1[0xc82] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00907350 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00907350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) | 2;
    return;
  }
  *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) & 0xfd;
  return;
}

/* ref: FUN_00907370 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00907370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) | 0x40;
    return;
  }
  *((byte *)GEN_TOP((in_ecx + 0x2c24c))) = *((byte *)GEN_TOP((in_ecx + 0x2c24c))) & 0xbf;
  return;
}

/* ref: Client::UI::Misc::ConfigModule::ConfigEventInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009073f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9073f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00907450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00907450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x907450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((*((int *)GEN_TOP(((int)this + 0x48))) == param_1) && (*((int *)GEN_TOP(((int)this + 0x4c))) == param_2)) {
    *((int *)GEN_TOP(((int)this + 0x4c))) = param_2;
    *((int *)GEN_TOP(((int)this + 0x48))) = param_1;
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 0x4c))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x48))) = param_1;
  return 1;
}

/* ref: FUN_009074a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009074a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9074a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x6b90 + param_2 * 4)));
}

/* ref: FUN_009074d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009074d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9074d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x70f4 + param_2 * 4)));
}

/* ref: FUN_00907500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x71d4 + param_2 * 4)));
}

/* ref: FUN_00907590 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00907590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((byte *)GEN_TOP((in_ecx + 0x230bf))) & param_2) != 0;
}

/* ref: FUN_009075f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009075f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9075f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  return uVar1;
}

/* ref: FUN_00907620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00907620(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x907620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x66))) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00907680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00907680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x907680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)in_ecx + 0x6d))) = *((byte *)GEN_TOP(((int)in_ecx + 0x6d))) & 0xfe;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x66))) = 0;
  in_ecx[0x1a] = 0;
  *(undefined1 *)(in_ecx + 0x1b) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3efc));
  return (uint)in_ecx;
}

/* ref: FUN_009076d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009076d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9076d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x66))) = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3f0c));
  return (uint)in_ecx;
}

/* ref: Client::UI2::RaptureAtkModule::CrystalCache::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009077c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9077c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042c880(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::UIInputData::KeyLoadInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f1c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009078f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009078f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9078f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 0x224 + in_ecx)));
}

/* ref: FUN_00907940 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00907940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 == *((char *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 5)));
}

/* ref: FUN_00907960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x40))) + 0xd + param_2)));
}

/* ref: FUN_00907980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x40))) + 0x15 + param_2)));
}

/* ref: FUN_009079b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009079b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9079b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (uint)param_2 * 0x60 + 0x32c + in_ecx;
}

/* ref: FUN_009079d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009079d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9079d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (uint)param_2 * 0x54 + 0xe0 + in_ecx;
}

/* ref: FUN_00907a20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00907a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x907a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 4))) != 0) && (*((int *)GEN_TOP((in_ecx + 4))) != 1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00907af0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00907af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x907af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((*((uint *)GEN_TOP(((int)this + 100))) != 0) &&
     (uVar1 = (uint)(*((int *)GEN_TOP(((int)this + 0x60))) * 100) / *((uint *)GEN_TOP(((int)this + 100))), 100 < uVar1)) {
    uVar1 = 100;
  }
  return uVar1;
}

/* ref: FUN_00907b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x907b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((param_2 <= *((int *)GEN_TOP(((int)this + 0x6c)))) &&
     ((param_2 < *((int *)GEN_TOP(((int)this + 0x6c))) || (param_1 <= *((uint *)GEN_TOP(((int)this + 0x68))))))) {
    return *((uint *)GEN_TOP(((int)this + 0x68))) - param_1;
  }
  return 0;
}

/* ref: FUN_00907b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x907b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x7c + param_2 * 0x18;
}

/* ref: FUN_00907bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00907bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x907bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x32))) & 1) == 0) {
    return *((uint *)GEN_TOP((in_ecx + 8)));
  }
  return 0;
}

/* ref: FUN_00907ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1e))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1f))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x907d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x23))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00907d40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00907d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x907d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = ((undefined1 *)GEN_TOP(((ushort)param_1 + 4 + (int)this)));
    uVar3 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined1 *)GEN_TOP(((uVar2 & 0xffff) + param_3)));
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00907d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907d90(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x907d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *(undefined1 *)param_1 = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 1))) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 2))) = param_4;
  *param_1 = *param_1 | 0xff000000;
  return (uint)param_1;
}

/* ref: FUN_00907db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00907db0(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x907db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = (char)param_2;
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[3] = param_3;
  return (uint)param_1;
}

/* ref: FUN_009080e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009080e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9080e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0bc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00908160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x908160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  return (uint)this;
}

/* ref: FUN_009081b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009081b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9081b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  return (uint)this;
}

/* ref: FUN_00908310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x6c + 0x2d28 + in_ecx;
}

/* ref: FUN_00908340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x6c + 0x3238 + in_ecx;
}

/* ref: FUN_00908360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((byte *)GEN_TOP((in_ecx + 0x33d9))) & param_2) != 0;
}

/* ref: FUN_00908380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x33d9))) = *((byte *)GEN_TOP((in_ecx + 0x33d9))) | param_2;
  return param_2;
}

/* ref: FUN_00908390 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x33d9))) = *((byte *)GEN_TOP((in_ecx + 0x33d9))) & ~param_2;
  return ~param_2;
}

/* ref: FUN_009083b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009083b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9083b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x338c))) == param_2;
}

/* ref: FUN_009083d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009083d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9083d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 0x33b0))) & param_2) != 0;
}

/* ref: FUN_009083f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009083f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9083f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b0))) = param_2;
  return param_2;
}

/* ref: FUN_00908400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b0))) = *((uint *)GEN_TOP((in_ecx + 0x33b0))) | param_2;
  return param_2;
}

/* ref: FUN_00908410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b0))) = *((uint *)GEN_TOP((in_ecx + 0x33b0))) & ~param_2;
  return ~param_2;
}

/* ref: FUN_00908430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 0x33b4))) & param_2) != 0;
}

/* ref: FUN_00908450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b4))) = param_2;
  return param_2;
}

/* ref: FUN_00908460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b4))) = *((uint *)GEN_TOP((in_ecx + 0x33b4))) | param_2;
  return param_2;
}

/* ref: FUN_00908470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x33b4))) = *((uint *)GEN_TOP((in_ecx + 0x33b4))) & ~param_2;
  return ~param_2;
}

/* ref: FUN_009084a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009084a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9084a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  return (uint)this;
}

/* ref: FUN_009084c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009084c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9084c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009084d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009084d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9084d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  return uVar1 == *(uint *)this;
}

/* ref: FUN_009084f0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_009084f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9084f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((byte *)GEN_TOP((param_1 + 0x14)));
}

/* ref: Client::UI2::Agent::AgentMap::ParamFunctor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompare::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908590(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009085f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009085f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9085f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x61))) = param_2;
  return param_2;
}

/* ref: FUN_00908600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((byte *)GEN_TOP((in_ecx + 0xdd6))) & param_2) != 0;
}

/* ref: FUN_00908620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xdd6))) = *((byte *)GEN_TOP((in_ecx + 0xdd6))) | param_2;
  return param_2;
}

/* ref: FUN_00908630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00908630(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x58 GEN_EDX_ARG);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00908660 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00908660(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0xac))) = 0;
  return in_ecx;
}

/* ref: FUN_00908690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x908690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  return (uint)this;
}

/* ref: FUN_009086b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009086b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9086b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_7;
  return (uint)this;
}

/* ref: FUN_00908700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908700(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x908700u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00908720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908720(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x908720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  F_0042cbc0(param_1 + 4 GEN_EDX_FWD,param_5);
  F_0042b630(param_1 + 0x19 GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 0x2e) = param_6;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xb9))) = param_7;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return (uint)param_1;
}

/* ref: FUN_009087a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009087a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9087a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 0x1c GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x70 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xc4 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x118 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x16c GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_009087e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009087e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9087e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908820(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (int)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(param_1 + 1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    piVar3 = param_1 + iVar2 * 0x1c;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      piVar3[-0x1c] = (int)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(piVar3 - 0x1b GEN_EDX_ARG);
      piVar3 = piVar3 - 0x1c;
    }
    param_1 = piVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009088a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9088a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (int)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(param_1 + 1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    piVar3 = param_1 + iVar2 * 0x1a;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      piVar3[-0x1a] = (int)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
      F_0042c880(piVar3 - 0x19 GEN_EDX_ARG);
      piVar3 = piVar3 - 0x1a;
    }
    param_1 = piVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00908920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x908920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 0x40 + param_2 * 4))) = param_3;
  return (int)param_2;
}

/* ref: FUN_00908940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x40))) = param_2;
  *((uint *)GEN_TOP((in_ecx + 0x44))) = param_2;
  *((uint *)GEN_TOP((in_ecx + 0x48))) = param_2;
  *((uint *)GEN_TOP((in_ecx + 0x4c))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00908980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,1,0);
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkManagedInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009089a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9089a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009089e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009089e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9089e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00908a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x908a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00908a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908a60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x94))) = param_2;
  return param_2;
}

/* ref: FUN_00908a70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908a70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11d))) = param_2;
  return param_2;
}

/* ref: FUN_00908a80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x113))) = param_2;
  return param_2;
}

/* ref: FUN_00908a90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11c))) = param_2;
  return param_2;
}

/* ref: FUN_00908aa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11e))) = param_2;
  return param_2;
}

/* ref: FUN_00908ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908ab0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x908ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((byte *)GEN_TOP((param_1 + 0x121))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0x122))) = param_3;
  return param_2;
}

/* ref: FUN_00908ae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x125))) = param_2;
  return param_2;
}

/* ref: FUN_00908af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xe4))) = param_2;
  return param_2;
}

/* ref: FUN_00908b30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 0x188))) & param_2) == param_2;
}

/* ref: FUN_00908b50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00908b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 400))) + 0x88))) == '\x01') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x184))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_FWD,1);
    return uVar2;
  }
  if (*((char *)GEN_TOP(((int)this + 0x19e))) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x184))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_ARG,0);
  }
  bVar1 = F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG,0);
  *((undefined1 *)GEN_TOP(((int)this + 0x19c))) = 0;
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00908be0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00908be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x134))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00908c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x136))) = param_2;
  return param_2;
}

/* ref: FUN_00908c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00908c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00561390();
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,uVar1 + 0xc0);
  return uVar1;
}

/* ref: FUN_00908c40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x908c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP(((int)this + 0x18c))) & param_1) == param_1;
}

/* ref: FUN_00908c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x908c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  short sVar1;
  uint in_EAX = 0;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  if (param_1 <= *((uint *)GEN_TOP(((int)this + 0x188)))) {
    F_0059dde0(*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x184))) * 4 + 0x1a4))) GEN_EDX_FWD,0);
    *((uint *)GEN_TOP(((int)this + 0x184))) = param_1;
    in_EAX = F_0059dde0(*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x1a4))) GEN_EDX_ARG,1);
    if (*((int *)GEN_TOP(((int)this + 0x19c))) != 0) {
      sVar3 = *((short *)GEN_TOP(((int)this + 0x184))) * 0x19;
      iVar4 = (int)sVar3;
      uVar2 = *((short *)GEN_TOP(((int)this + 0x180))) - iVar4;
      if ((int)uVar2 < 0x19) {
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = 0x19;
      }
      F_0059ead0(*((int *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG,uVar2,0,1);
      sVar1 = *((short *)GEN_TOP(((int)this + 400)));
      if ((sVar3 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        uVar2 = F_005623b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG,sVar1 - iVar4);
        return uVar2;
      }
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x19c))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_00908d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x908d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x14c))) = param_3;
  return param_3;
}

/* ref: FUN_00908dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2fc))) = param_2;
  return param_2;
}

/* ref: FUN_00908de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x908de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x194))) = param_2;
  return param_2;
}

/* ref: FUN_00908e50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00908e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x908e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*((int *)GEN_TOP((in_ecx + 0x18c))) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = ((byte *)GEN_TOP(F_0042a990(*((int *)GEN_TOP((in_ecx + 0x18c))) + 0x9c GEN_EDX_FWD)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908e90: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908e95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908e90;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908e95: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*((int *)GEN_TOP((in_ecx + 400))) != 0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
    pbVar2 = ((byte *)GEN_TOP(F_0042a990(*((int *)GEN_TOP((in_ecx + 400))) + 0x9c GEN_EDX_ARG)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00908ed8: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00908edd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00908ed8;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00908edd: ;
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00908ef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00908ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x908ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return (*((uint *)GEN_TOP(((int)this + 0x18c))) & uVar1) == uVar1;
}

/* ref: FUN_00908f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00908f10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x908f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  ushort uVar1;
  short sVar2;
  int * piVar3;
  short sVar4;
  uint in_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 <= *((uint *)GEN_TOP((param_1 + 0x188)))) {
    F_0059dde0(*((undefined4 *)GEN_TOP((param_1 + 0x1ac + *((int *)GEN_TOP((param_1 + 0x184))) * 4))) GEN_EDX_FWD,0);
    *((uint *)GEN_TOP((param_1 + 0x184))) = param_2;
    in_EAX = F_0059dde0(*((undefined4 *)GEN_TOP((param_1 + 0x1ac + param_2 * 4))) GEN_EDX_ARG,1);
    if (*((int *)GEN_TOP((param_1 + 0x1a4))) != 0) {
      uVar1 = *((ushort *)GEN_TOP((param_1 + 0x194)));
      sVar4 = *((short *)GEN_TOP((param_1 + 0x184))) * uVar1;
      iVar6 = (int)sVar4;
      uVar5 = *((short *)GEN_TOP((param_1 + 0x180))) - iVar6;
      iVar7 = (int)(short)uVar1;
      if ((int)uVar5 < iVar7) {
        uVar5 = uVar5 & 0xffff;
      }
      else {
        uVar5 = (uint)uVar1;
      }
      F_0059ead0(*((int *)GEN_TOP((param_1 + 0x1a4))) GEN_EDX_ARG,uVar5,0,1);
      sVar2 = *((short *)GEN_TOP((param_1 + 0x198)));
      if ((sVar4 <= sVar2) && ((int)sVar2 < iVar7 + iVar6)) {
        uVar5 = F_005623b0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1a4))) GEN_EDX_ARG,sVar2 - iVar6);
        *((undefined4 *)GEN_TOP((param_1 + 0x1a0))) = 0xffffffff;
        return uVar5;
      }
      piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x1a4)));
      if (param_3 == '\x01') {
        in_EAX = (int)sVar2 / iVar7;
        sVar4 = (short)piVar3[0x33];
        if (sVar4 == sVar2 % (short)uVar1) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x74))))(piVar3 GEN_EDX_ARG,0xffffffff,0);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1a4))) + 0x74))))
                            (*((int * PTR32 *)GEN_TOP((param_1 + 0x1a4))) GEN_EDX_ARG,(int)sVar4,0);
          *((int *)GEN_TOP((param_1 + 0x1a0))) = (int)sVar4;
          return uVar5;
        }
      }
      else {
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x78))))(piVar3 GEN_EDX_ARG);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00909030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x909030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return (*((uint *)GEN_TOP(((int)this + 0x18c))) & uVar1) == uVar1;
}

/* ref: FUN_00909050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x909050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1;
  if (param_1 <= *((uint *)GEN_TOP(((int)this + 0x188)))) {
    *((uint *)GEN_TOP(((int)this + 0x184))) = param_1;
    if (*((int *)GEN_TOP(((int)this + 0x1a0))) != 0) {
      sVar2 = (short)param_1 * 0x19;
      iVar4 = (int)sVar2;
      uVar3 = *((short *)GEN_TOP(((int)this + 0x180))) - iVar4;
      if ((int)uVar3 < 0x19) {
        uVar3 = uVar3 & 0xffff;
      }
      else {
        uVar3 = 0x19;
      }
      F_0059ead0(*((int *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_FWD,uVar3,0,1);
      sVar1 = *((short *)GEN_TOP(((int)this + 400)));
      if ((sVar2 <= sVar1) && ((int)sVar1 < iVar4 + 0x19)) {
        iVar4 = sVar1 - iVar4;
        F_005623b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,iVar4);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a0))) + 0x74))))
                          (*((int * PTR32 *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,iVar4);
        return uVar3;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1a0))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: FUN_009091b0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_009091b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9091b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (double)(int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18c))) + (short)param_1 * 4)));
}

/* ref: FUN_009091d0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_009091d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9091d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (double)(int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18c))) + 2 + (short)param_1 * 4)));
}

/* ref: FUN_00909230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x909230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_00561aa0(this GEN_EDX_FWD,param_1);
  F_00561b40(this GEN_EDX_ARG,param_2);
  uVar1 = F_00561b90(param_3,param_4);
  return uVar1;
}

/* ref: FUN_00909260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x909260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00561530(this GEN_EDX_FWD,param_1);
  }
  *((uint *)GEN_TOP(((int)this + 0x9c))) = uVar1;
  uVar1 = F_0057eb30(uVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe4))),0,0,0,0);
  return uVar1;
}

/* ref: FUN_009092a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009092a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9092a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf62 */
GEN_OWN GEN_NOFRAME unsigned int F_009092d0(void)
{
  GEN_ENTER(0x9092d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf64 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009092e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9092e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf65 */
GEN_OWN GEN_NOFRAME byte F_009092f0(void)
{
  GEN_ENTER(0x9092f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf66 */
GEN_OWN GEN_NOFRAME unsigned int F_00909300(void)
{
  GEN_ENTER(0x909300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonScreenInfoChild::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00909340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x188))) = param_2;
  return param_2;
}

/* ref: FUN_00909360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909360(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0058d480(in_ecx + 1 GEN_EDX_FWD);
  in_ecx[0xd] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0xe] = 4;
  in_ecx[0xf] = 0x15;
  in_ecx[0x10] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_009093b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009093b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9093b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0xffffffff;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x17] = 4;
  in_ecx[0x18] = 0x15;
  return (uint)in_ecx;
}

/* ref: FUN_00909450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xbc))) = param_2;
  return param_2;
}

/* ref: FUN_00909500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00909500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x909500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return;
}

/* ref: FUN_00909530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00909550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909550(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00909560 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00909560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x34))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00909590 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00909590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x909590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  return;
}

/* ref: FUN_009095e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009095e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9095e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x60)))) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x58))));
  if ((bVar1 != (bVar1 || (float10)*((float *)GEN_TOP((in_ecx + 0x60))) == (float10)*((float *)GEN_TOP((in_ecx + 0x58)))))
     && (bVar1 = GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 100)))) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x5c)))),
        bVar1 != (bVar1 || (float10)*((float *)GEN_TOP((in_ecx + 100))) == (float10)*((float *)GEN_TOP((in_ecx + 0x5c)))))
     ) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00909640 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00909640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x7a))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI2::AddonNaviMap::SetTargetRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009096a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9096a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonNaviMap::MaskRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009096d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9096d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00909710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  return param_2;
}

/* ref: FUN_00909720 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0xaa)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0xaa))) = *((byte *)GEN_TOP((in_ecx + 0xaa))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xa9))) = param_2;
  return param_2;
}

/* ref: FUN_00909750 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 5 ^ *((byte *)GEN_TOP((in_ecx + 0xaa)))) & 0x20;
  *((byte *)GEN_TOP((in_ecx + 0xaa))) = *((byte *)GEN_TOP((in_ecx + 0xaa))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_00909790 */
GEN_OWN GEN_FRAME byte F_00909790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x909790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 < 2;
}

/* ref: FUN_009097b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009097b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9097b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x198))) = param_2;
  return param_2;
}

/* ref: FUN_00909820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x180))) = param_2;
  return param_2;
}

/* ref: FUN_00909830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x180))) = param_2;
  return param_2;
}

/* ref: FUN_00909850 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00909850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x909850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x28))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x2a))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00909870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0x2c)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0x2c))) = *((byte *)GEN_TOP((in_ecx + 0x2c))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00909890 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2d))) = param_2;
  return param_2;
}

/* ref: FUN_009098c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009098c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9098c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x36))) = param_2;
  return param_2;
}

/* ref: FUN_009098f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009098f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9098f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x92))) = param_2;
  return param_2;
}

/* ref: FUN_00909900 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x94))) = param_2;
  return param_2;
}

/* ref: FUN_00909910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x16 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x2b GEN_EDX_ARG);
  in_ecx[0x40] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009099b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009099b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9099b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  iVar2 = 5;
  do {
    F_0055a300(*puVar3 GEN_EDX_FWD,(undefined1)param_1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,(undefined1)param_1);
  F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,(undefined1)param_1);
  bVar1 = F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,(undefined1)param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00909a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909a50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x16 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x2b GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x40 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x55 GEN_EDX_ARG);
  in_ecx[0x6a] = 0;
  in_ecx[0x6b] = 0;
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00909ac0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00909ac0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[8] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  in_ecx[0x2b] = 0;
  *in_ecx = 0;
  in_ecx[9] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x21] = 0;
  in_ecx[1] = 0;
  in_ecx[10] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x23] = 0;
  in_ecx[3] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x24] = 0;
  in_ecx[4] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x25] = 0;
  in_ecx[5] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x26] = 0;
  in_ecx[6] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x27] = 0;
  in_ecx[7] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x28] = 0;
  return 0;
}

/* ref: FUN_00909b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909b70(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00909bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909bb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00909c00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00909c00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  in_ecx[0x28] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2a] = 0;
  return 0;
}

/* ref: FUN_00909cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00909cb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x909cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00909d10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00909d10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x909d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((byte *)GEN_TOP((param_1 + 0x18e))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 399))) = param_3;
  return param_2;
}

/* ref: FUN_00909dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909dc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x909dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00909e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909e50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909e60(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x909e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *(ushort *)param_1 = (ushort)param_2;
  *param_1 = (param_3 & 0x7fff | (uint)param_4 << 0xf) << 0x10 | (uint)(ushort)*param_1;
  return (uint)param_1;
}

/* ref: FUN_00909ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909ec0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x909ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00909ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909ed0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x909ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *(ushort *)param_1 = (ushort)param_2;
  *param_1 = (param_3 & 0x7fff | (uint)param_4 << 0xf) << 0x10 | (uint)(ushort)*param_1;
  return (uint)param_1;
}

/* ref: FUN_00909f70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00909f70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x909f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xffffff;
}

/* ref: FUN_00909fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00909fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x909fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_0090a020 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xae))) ^ param_2) & 0xf;
  *((byte *)GEN_TOP((in_ecx + 0xae))) = *((byte *)GEN_TOP((in_ecx + 0xae))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0090a060 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a060(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xae))) & 0x7f | param_2 << 7;
  *((byte *)GEN_TOP((param_1 + 0xae))) = bVar1;
  return bVar1;
}

/* ref: FUN_0090a0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_0090a190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90a190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_0090a1f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a1f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x58 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xac GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090a240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a240(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 100))) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a260(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0xb4))) = 0x100;
  return in_ecx;
}

/* ref: FUN_0090a2a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a2a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x17 GEN_EDX_ARG);
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  *(undefined1 *)(in_ecx + 0x2e) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0090a2e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a2e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  return in_ecx;
}

/* ref: FUN_0090a300 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a300(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  return in_ecx;
}

/* ref: FUN_0090a320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a320(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x60))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0xffffffff;
  return in_ecx;
}

/* ref: FUN_0090a400 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090a400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
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
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x8c)));
  iVar2 = 0xe;
  do {
    puVar1[-0xe] = 0;
    *puVar1 = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_0090a490 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090a490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xcc)));
  iVar2 = 0x1f;
  do {
    puVar1[-0x1f] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0090a540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090a540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  uVar1 = 0;
  do {
    *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0x4c))) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x13);
  return 0;
}

/* ref: FUN_0090a610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xd8))) = param_2;
  return param_2;
}

/* ref: FUN_0090a620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2b4))) = param_2;
  return param_2;
}

/* ref: FUN_0090a660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x29c))) = param_2;
  return param_2;
}

/* ref: FUN_0090a670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x278))) = param_2;
  return param_2;
}

/* ref: FUN_0090a690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090a690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2b6))) = param_2;
  return param_2;
}

/* ref: FUN_0090a6c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a6c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090a720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a720(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0090a730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90a730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_0090a750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90a750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_0090a770 */
GEN_OWN GEN_FRAME uint F_0090a770(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90a770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ushort uVar1;
  
  uVar1 = F_0055a020(param_3 GEN_EDX_ARG);
  *param_1 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_1);
  uVar1 = F_0055a030(param_3 GEN_EDX_ARG);
  *param_2 = (float)((float10)uVar1 * (float10)REFG(double, 0x1088108) + (float10)*param_2);
  return (uint)param_2;
}

/* ref: FUN_0090a820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c40ac));
  return (uint)this;
}

/* ref: FUN_0090a840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x180))) = param_2;
  return param_2;
}

/* ref: FUN_0090a850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x184))) = param_2;
  return param_2;
}

/* ref: FUN_0090a980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090a980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90a980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 100 + 4 + in_ecx;
}

/* ref: FUN_0090a9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090a9e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90a9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x5c GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090aa00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aa00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561490(this_00 GEN_EDX_FWD,5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,4);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aa90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,0xe);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,0x10);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090aaf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090aaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90aaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,0xf);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ab20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90ab20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561490(this_00 GEN_EDX_FWD,3);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ab50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90ab50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561490(this_00 GEN_EDX_FWD,8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ab80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90ab80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561490(this_00 GEN_EDX_FWD,0x11);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090abb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90abb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561530(this_00 GEN_EDX_FWD,0x13);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090abe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090abe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90abe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00561490(this_00 GEN_EDX_FWD,0x16);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0090ac10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ac10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90ac10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0055a300(*(undefined4 *)this GEN_EDX_FWD,(undefined1)param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0090ac80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090ac80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ac80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x68)));
  iVar2 = 0xd;
  do {
    puVar1[-0x1a] = 0;
    puVar1[-0xd] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  return 0;
}

/* ref: FUN_0090ad40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090ad40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90ad40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(param_1 - 1U < 0xd);
}

/* ref: FUN_0090ad60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090ad60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90ad60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 1;
}

/* ref: FUN_0090ad70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090ad70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90ad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(param_1 - 0xfU < 0x19);
}

/* ref: FUN_0090ad90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090ad90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90ad90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0xf;
}

/* ref: FUN_0090ae00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ae00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90ae00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = F_0056d300(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_FWD,7);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = ((undefined *)GEN_TOP(F_0056d250(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,7,iVar5)));
      uVar4 = F_00561490(pvVar3 GEN_EDX_ARG,uVar6);
      F_0055a300(uVar4 GEN_EDX_ARG,(undefined1)param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,6);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = ((undefined *)GEN_TOP(F_0056d250(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,6,iVar5)));
      uVar4 = F_00561490(pvVar3 GEN_EDX_ARG,uVar6);
      F_0055a300(uVar4 GEN_EDX_ARG,(undefined1)param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,5);
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = ((undefined *)GEN_TOP(F_0056d250(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,5,iVar5)));
      uVar4 = F_00561490(pvVar3 GEN_EDX_ARG,uVar6);
      F_0055a300(uVar4 GEN_EDX_ARG,(undefined1)param_1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  uVar2 = F_0056d300(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,4);
  uVar4 = (uint)uVar2;
  iVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = 1;
      pvVar3 = ((undefined *)GEN_TOP(F_0056d250(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,4,iVar5)));
      uVar4 = F_00561490(pvVar3 GEN_EDX_ARG,uVar6);
      bVar1 = F_0055a300(uVar4 GEN_EDX_ARG,(undefined1)param_1);
      uVar4 = CONCAT31(extraout_var,bVar1);
      iVar5 = iVar5 + 1;
    } while ((ushort)iVar5 < uVar2);
  }
  return uVar4;
}

/* ref: FUN_0090b030 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090b030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
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
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 9;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  return 0;
}

/* ref: FUN_0090b2e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090b2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 9;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 9;
  *((undefined2 *)GEN_TOP(((int)this + 0x120))) = 0;
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::JournalTree::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x90b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::JournalTree::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090b500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090b500(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x58 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xac GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090b520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x90b520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_0042e430(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_3);
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0xac))) GEN_EDX_ARG,param_4);
  return uVar1;
}

/* ref: FUN_0090b600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b600(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * this;
  
  if ((param_2 & 2) == 0) {
    F_0042c880(param_1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    this = param_1 + iVar2 * 0x15;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = this - 0x15;
      F_0042c880(this GEN_EDX_ARG);
    }
    param_1 = piVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_0090b680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 - 4)));
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x54 + iVar1)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    uVar4 = F_00406b30(((int *)GEN_TOP((iVar1 - 4))));
    uVar3 = (uint)uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return uVar3;
}

/* ref: FUN_0090b700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 - 4)));
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x54 + iVar1)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    uVar4 = F_00406b30(((int *)GEN_TOP((iVar1 - 4))));
    uVar3 = (uint)uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return uVar3;
}

/* ref: FUN_0090b770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1d0))) = param_2;
  return param_2;
}

/* ref: FUN_0090b780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1d4))) = param_2;
  return param_2;
}

/* ref: FUN_0090b790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1a4))) = param_2;
  return param_2;
}

/* ref: FUN_0090b7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1a8))) = param_2;
  return param_2;
}

/* ref: FUN_0090b7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x388))) = param_2;
  return param_2;
}

/* ref: FUN_0090b7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38c))) = param_2;
  return param_2;
}

/* ref: FUN_0090b7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b7f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x390))) = param_2;
  return param_2;
}

/* ref: FUN_0090b800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x394))) = param_2;
  return param_2;
}

/* ref: FUN_0090b810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090b810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  return (uint)this;
}

/* ref: FUN_0090b840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x180))) = param_2;
  return param_2;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf62 */
GEN_OWN GEN_NOFRAME unsigned int F_0090b850(void)
{
  GEN_ENTER(0x90b850u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b860(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090b8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_0090b8f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090b8f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x194))) = param_2;
  return param_2;
}

/* ref: FUN_0090b900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090b900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x180))) = param_2;
  return param_2;
}

/* ref: FUN_0090b910 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090b910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90b910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x188))) = param_2;
  return param_2;
}

/* ref: FUN_0090b9d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090b9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90b9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c42bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLicenseViewer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ba00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[62])REFP(0x10c42bc));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoEventHandlerInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ba90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90ba90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090baf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090baf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90baf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *(undefined1 *)(in_ecx + 5) = 0xff;
  in_ecx[6] = 0xffffffff;
  *in_ecx = 9999;
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x1d GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_0090bbf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bbf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90bbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)(param_2 * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)(param_2 * '\x05'))) : 0)) * 0x10;
  if (((uint)lVar1 & *((uint *)GEN_TOP((param_1 + 0x28)))) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *((uint *)GEN_TOP((param_1 + 0x2c)))) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090bc30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bc30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90bc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)param_3 < 0x40) ? ((((ulonglong)(((ulonglong)(byte)(param_2 * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)(param_2 * '\x05'))) : 0)) << (ulonglong)param_3)) : 0));
  if (((uint)lVar1 & *((uint *)GEN_TOP((param_1 + 0x28)))) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *((uint *)GEN_TOP((param_1 + 0x2c)))) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090bc70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bc70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90bc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  return *((byte *)GEN_TOP(((uint)param_3 + param_1 + (uint)param_2 * 4)));
}

/* ref: FUN_0090bc90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bc90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90bc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*((uint *)GEN_TOP((param_1 + 0x34))) & 1 << GEN_SHC(param_2, param_2)) != 0;
}

/* ref: FUN_0090bcb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0090bcb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90bcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  uint uVar1;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = 1 << GEN_SHC(param_2, param_2);
    if (param_3 == 0) {
      *((uint *)GEN_TOP((param_1 + 0x34))) = *((uint *)GEN_TOP((param_1 + 0x34))) & ~uVar1;
    }
    else {
      *((uint *)GEN_TOP((param_1 + 0x34))) = *((uint *)GEN_TOP((param_1 + 0x34))) | uVar1;
    }
    F_00a51200(0x24,(uint)*((byte *)GEN_TOP((param_1 + 0x38))),(uint)param_2,(uint)param_3,0);
  }
  return;
}

/* ref: FUN_0090bd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090bd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x90bd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x34))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_4;
  *((undefined1 *)GEN_TOP(((int)this + 0x44))) = 1;
  return param_3;
}

/* ref: FUN_0090bd40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90bd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x45))) = param_2;
  return param_2;
}

/* ref: FUN_0090bd70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090bd70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x90bd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *((byte *)GEN_TOP(((int)param_1 + 5))) = param_4;
  return param_4;
}

/* ref: FUN_0090bd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090bd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90bd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_0090bdc0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_0090bdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90bdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) + *(int *)((int)(uintptr_t)this) * 0x3c) * 0x3c;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87(((float)GEN_TOF((fVar2 + (float10)*((float *)GEN_TOP(((int)this + 8)))))));
}

/* ref: FUN_0090be00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090be00(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90be00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 0x235a4))) =
       ~(3 << ((char)param_2 * '\x02' & 0x1fU)) & *((uint *)GEN_TOP((param_1 + 0x235a4))) |
       (uint)param_3 << ((char)param_2 * '\x02' & 0x1fU);
  return param_1;
}

/* ref: FUN_0090be30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090be30(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90be30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 0x235a8))) =
       ~(3 << ((char)param_2 * '\x02' & 0x1fU)) & *((uint *)GEN_TOP((param_1 + 0x235a8))) |
       (uint)param_3 << ((char)param_2 * '\x02' & 0x1fU);
  return param_1;
}

/* ref: FUN_0090be60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090be60(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90be60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 0x235ac))) =
       ~(3 << ((char)param_2 * '\x02' & 0x1fU)) & *((uint *)GEN_TOP((param_1 + 0x235ac))) |
       (uint)param_3 << ((char)param_2 * '\x02' & 0x1fU);
  return param_1;
}

/* ref: FUN_0090be90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090be90(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90be90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 0x235b0))) =
       ~(3 << ((char)param_2 * '\x02' & 0x1fU)) & *((uint *)GEN_TOP((param_1 + 0x235b0))) |
       (uint)param_3 << ((char)param_2 * '\x02' & 0x1fU);
  return param_1;
}

/* ref: FUN_0090bec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090bec0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x90bec0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)(longlong)TRUNC((double)param_4 * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_004e99a0(param_1 GEN_EDX_FWD,param_2,param_3,local_c);
  return uVar1;
}

/* ref: FUN_0090bf10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0090bf10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90bf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (*((int *)GEN_TOP((param_2 + 4))) + *((int *)GEN_TOP(param_2)) * 0x3c) * 0x3c;
  fVar3 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar1 = ((float)GEN_TOF((fVar3 + (float10)*((float *)GEN_TOP((param_2 + 8))))));
  *((float *)GEN_TOP((param_1 + 0xc))) = fVar1;
  if (param_3 != '\0') {
    *((float *)GEN_TOP((param_1 + 8))) = fVar1;
    *((undefined1 *)GEN_TOP((param_1 + 0x28))) = 1;
  }
  return 0;
}

/* ref: FUN_0090c030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x24 + param_2 * 2;
}

/* ref: FUN_0090c040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x56 + in_ecx;
}

/* ref: FUN_0090c050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x80 + param_2 * 4;
}

/* ref: FUN_0090c070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 4 + in_ecx;
}

/* ref: FUN_0090c080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1e))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1f))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_0090c0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90c0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 4 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_0090c100 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0090c100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x90c100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = ((undefined1 *)GEN_TOP(((ushort)param_1 + 4 + (int)this)));
    uVar3 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined1 *)GEN_TOP(((uVar2 & 0xffff) + param_3)));
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: Application::Network::LogoutCallbackInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c43cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::ZoneLoginCallbackInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c43d8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090c230 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_0090c230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90c230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != 0) {
    return *((ulonglong *)GEN_TOP((*(int *)this + 8)));
  }
  return 0;
}

/* ref: FUN_0090c260 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_0090c260(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90c260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx != 0) {
    return *((ushort *)GEN_TOP((*in_ecx + 0x18)));
  }
  return 0;
}

/* ref: FUN_0090c2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_0090c400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90c400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_0090c420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_0090c430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_0090c440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_0090c450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090c450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1d))) = param_2;
  return param_2;
}

/* ref: FUN_0090c480 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090c480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_0090c490 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090c490(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((byte *)GEN_TOP((param_1 + 0x2e))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0x2d))) = 1;
  *((undefined1 *)GEN_TOP((param_1 + 0x2f))) = param_3;
  return param_2;
}

/* ref: FUN_0090c4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x90c4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return (uint)param_1;
}

/* ref: FUN_0090c550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090c550(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90c550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 6) = 0;
  in_ecx[8] = 0;
  *(undefined1 *)(in_ecx + 9) = 0;
  *(undefined1 *)(in_ecx + 0x1ba) = 0;
  *(undefined4 *)(in_ecx + 0x1bc) = 0;
  *(undefined4 *)(in_ecx + 0x1be) = 0;
  in_ecx[0x1c0] = 0;
  uVar1 = F_0042aca0(in_ecx + 0x1c2 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0090c5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c5a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0090c5f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0090c5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (*((byte *)GEN_TOP((param_2 + 100 + in_ecx))) & 1) == 1;
}

/* ref: FUN_0090c610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90c610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte * pbVar1;
  
  *((int *)GEN_TOP((param_1 + 0x60))) = *((int *)GEN_TOP((param_1 + 0x60))) + 1;
  pbVar1 = ((byte *)GEN_TOP((param_2 + 100 + param_1)));
  *pbVar1 = *pbVar1 | param_3 * '\x02';
  return param_2;
}

/* ref: FUN_0090c630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_2 + 100 + in_ecx))) >> 1);
}

/* ref: FUN_0090c650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90c650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x58))) != '\0') {
    uVar1 = F_00461bb0(param_1 GEN_EDX_FWD,0x12,*((undefined4 *)GEN_TOP(((int)this + 0x5c))));
    F_0042e430(this_00 GEN_EDX_ARG,uVar1);
    uVar1 = F_0042a990(this_00 GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_0043bd00(param_1 GEN_EDX_ARG,0x7d9,0,0);
  F_0042e430(this_00 GEN_EDX_ARG,uVar1);
  uVar1 = F_0042a990(this_00 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0090c6b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090c6b0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90c6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 0xc GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090c6d0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0090c6d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90c6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  char cVar1;
  byte bVar2;
  ushort * puVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  ushort local_8;
  
  bVar2 = *((byte *)GEN_TOP((param_1 + 0x38)));
  if (((bVar2 != 2) && (bVar2 != 6)) && (bVar2 != 9)) {
    return 0;
  }
  cVar1 = '\0';
  piVar5 = ((int *)GEN_TOP((param_1 + 0xc)));
  iVar6 = 9;
  puVar3 = param_3;
  do {
    iVar4 = *piVar5;
    if (iVar4 < 1) {
      if (param_3 != ((ushort *)GEN_TOP(0x0))) {
        iVar4 = 0;
        *puVar3 = 0;
        goto LAB_0090c72f;
      }
    }
    else {
      cVar1 = cVar1 + '\x01';
      if (param_3 != ((ushort *)GEN_TOP(0x0))) {
        local_8 = (ushort)bVar2;
        *puVar3 = local_8;
LAB_0090c72f: ;
        *(int *)(puVar3 + 2) = iVar4;
      }
    }
    piVar5 = piVar5 + 1;
    puVar3 = puVar3 + 0x30;
    iVar6 = iVar6 - 1;
    if (iVar6 == 0) {
      *param_2 = cVar1;
      return 1;
    }
  } while( true );
}

/* ref: FUN_0090c800 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0090c800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0xa4))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0090c880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c880(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x40 + param_2 * 4;
}

/* ref: FUN_0090c890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x48 + in_ecx;
}

/* ref: FUN_0090c8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090c8a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90c8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 100))) = 0;
  return in_ecx;
}

/* ref: FUN_0090c8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c8c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x90c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  F_0042cbc0(param_1 GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = param_4;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = param_5;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = param_6;
  *((undefined1 *)GEN_TOP(((int)param_1 + 100))) = param_7;
  return (uint)param_1;
}

/* ref: FUN_0090c920 */
GEN_OWN GEN_FRAME uint F_0090c920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((uint *)GEN_TOP((param_1 + 0x60))) < *((uint *)GEN_TOP((param_2 + 0x60))));
}

/* ref: FUN_0090c940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x90c940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_6;
  return (uint)this;
}

/* ref: FUN_0090c980 */
GEN_OWN GEN_FRAME uint F_0090c980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  bool bVar1;
  
  bVar1 = *((uint *)GEN_TOP((param_1 + 0x5c))) < *((uint *)GEN_TOP((param_2 + 0x5c)));
  if (*((uint *)GEN_TOP((param_1 + 0x5c))) == *((uint *)GEN_TOP((param_2 + 0x5c)))) {
    bVar1 = *((uint *)GEN_TOP((param_1 + 0x68))) < *((uint *)GEN_TOP((param_2 + 0x68)));
  }
  return (uint)bVar1;
}

/* ref: FUN_0090c9b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090c9b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x90c9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return (uint)param_1;
}

/* ref: FUN_0090c9d0 */
GEN_OWN GEN_FRAME uint F_0090c9d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90c9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_1 + 4))) < *((byte *)GEN_TOP((param_2 + 4))));
}

/* ref: FUN_0090cb80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cb80(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((in_ecx + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x100))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x115))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x119))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x104))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x108))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x110))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x114))) = 0;
  return in_ecx;
}

/* ref: FUN_0090cc90 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0090cc90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0xc))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0090cca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090cca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90cca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2);
  uVar1 = *((uint *)GEN_TOP((param_2 + 0x28)));
  *((uint *)GEN_TOP(((int)this + 0x68))) = uVar1;
  return uVar1;
}

/* ref: FUN_0090ccd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ccd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ccd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  return uVar1;
}

/* ref: FUN_0090cd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090cd00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90cd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_0090cd40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cd40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 1;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  return (uint)in_ecx;
}

/* ref: FUN_0090cd80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 100)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_0090cdb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cdb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 2;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  *(undefined2 *)(in_ecx + 0x18) = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43f4));
  *(undefined1 *)(in_ecx + 0x1c) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0090cdf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cdf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 4;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43fc));
  *(undefined1 *)(in_ecx + 0x18) = 0;
  in_ecx[0x19] = 0;
  *(undefined2 *)(in_ecx + 0x1a) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x6a))) = 0;
  F_0042b630(in_ecx + 0x1b GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_0090ce30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ce30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ce30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 5;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c4404));
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ce60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90ce60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(param_1 + 3 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemQuest::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090ce90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90ce90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[0x19]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    param_1[0x19] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(param_1 + 3 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090cef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090cef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90cef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090cf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090cf60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x90cf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 5) = param_7;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x15))) = 0;
  return (uint)param_1;
}

/* ref: FUN_0090cf90 */
GEN_OWN GEN_FRAME uint F_0090cf90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90cf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((uint *)GEN_TOP((param_1 + 0x10))) != *((uint *)GEN_TOP((param_2 + 0x10)))) {
    return (uint)(*((uint *)GEN_TOP((param_1 + 0x10))) < *((uint *)GEN_TOP((param_2 + 0x10))));
  }
  return CONCAT31((int3)((uint)*((int *)GEN_TOP((param_1 + 4))) >> 8),
                  *((int *)GEN_TOP((param_1 + 4))) < *((int *)GEN_TOP((param_2 + 4))));
}

/* ref: FUN_0090d010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_0090d060 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d060(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0090d0d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined2 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  iVar1 = 3;
  do {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    F_00401500(puVar2 + 2,8,4,((code *)REFP(0x90d060)));
    puVar2 = puVar2 + 10;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  return (uint)this;
}

/* ref: FUN_0090d130 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0090d130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  int iVar2;
  
  *(undefined1 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 0;
  puVar1 = ((undefined1 *)GEN_TOP(((int)this + 0x18)));
  iVar2 = 4;
  do {
    puVar1[-0x10] = 0;
    *(undefined4 *)(puVar1 - 0x14) = 0;
    *(undefined4 *)(puVar1 - 0xc) = 0;
    *(undefined4 *)(puVar1 - 4) = 0;
    puVar1[-8] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x10] = 0;
    puVar1 = puVar1 + 0x28;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  return 0;
}

/* ref: FUN_0090d1c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0090d1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90d1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x104, 12, 4);
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100));
  F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_FWD,&REFG(undefined, 0x10c4408),REFG(undefined4, 0x108cc50));
  puVar3 = ((undefined1 *)(gen_frame + 0xa8));
  this_00 = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1)));
  uVar1 = F_0042e360(this_00 GEN_EDX_ARG,puVar3);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0xdac))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_0090d270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90d270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this,param_1);
  return (uint)(uVar1 % 0x3c);
}

/* ref: FUN_0090d2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_0090d2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d2b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x90d2b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  double dVar1;
  float * pfVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 <= 0.0) {
    param_4 = REFG(float, 0x1094884);
  }
  dVar1 = (double)param_4;
  if (*(double *)&REFG(undefined, 0x1094818) <= dVar1) {
    dVar1 = (double)REFG(float, 0x1094820);
  }
  sVar4 = 0;
  iVar5 = -1;
  iVar3 = 0;
  pfVar2 = ((float *)GEN_TOP((param_1 + 0x24)));
  iVar6 = 0x5c;
  do {
    if ((dVar1 <= (double)*pfVar2) && (sVar4 = sVar4 + 1, iVar5 == -1)) {
      iVar5 = iVar3;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  *param_2 = sVar4;
  *param_3 = iVar5;
  return (uint)param_2;
}

/* ref: FUN_0090d360 */
GEN_OWN GEN_FRAME uint F_0090d360(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((uint *)GEN_TOP((param_1 + 8))) < *((uint *)GEN_TOP((param_2 + 8))));
}

/* ref: FUN_0090d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d3c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0090d3d0 */
GEN_OWN GEN_FRAME uint F_0090d3d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((uint *)GEN_TOP((param_1 + 8))) < *((uint *)GEN_TOP((param_2 + 8))));
}

/* ref: FUN_0090d430 */
GEN_OWN GEN_FRAME uint F_0090d430(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  return (int)(short)CONCAT11(param_1,param_2 != '\0');
}

/* ref: FUN_0090d450 */
GEN_OWN GEN_FRAME uint F_0090d450(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90d450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1e: ;
  case 0x1f: ;
    return 3;
  case 0x20: ;
    return 2;
  case 0x21: ;
    uVar1 = 6;
  }
  return uVar1;
}

/* ref: FUN_0090d490 */
GEN_OWN GEN_FRAME byte F_0090d490(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  bool bVar1;
  
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x1e: ;
  case 0x1f: ;
    return (param_1 & 1) != 0;
  case 0x20: ;
    return (param_1 & 2) != 0;
  case 0x21: ;
    bVar1 = (param_1 & 4) != 0;
  }
  return bVar1;
}

/* ref: FUN_0090d4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90d4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
  *((undefined1 *)GEN_TOP(((int)this + 100))) = *((undefined1 *)GEN_TOP((param_1 + 100)));
  return (uint)this;
}

/* ref: FUN_0090d530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090d550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 900))) GEN_EDX_FWD);
  iVar1 = 8;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x380)));
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x60)));
    uVar2 = F_0042c880(this_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_0090d590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090d5b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d5b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x66))) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0090d620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090d640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090d660 */
GEN_OWN GEN_FRAME byte F_0090d660(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_2 < *param_1;
}

/* ref: FUN_0090d680 */
GEN_OWN GEN_FRAME uint F_0090d680(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0090d6a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090d6a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90d6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 0x14 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090d740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90d740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined * this_01;
  int local_10;
  int local_c;
  undefined4 * local_8;
  
  local_8 = param_1;
  this_01 = ((undefined *)GEN_TOP(((int)this + 4)));
  local_10 = 2;
  do {
    *((undefined4 *)GEN_TOP(((int)this_01 - 4))) = *local_8;
    F_0042ccf0(this_01 GEN_EDX_FWD,((int)param_1 - (int)this) + (int)this_01);
    local_c = 0xf;
    this_00 = this_01;
    do {
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
      F_0042ccf0(this_00 GEN_EDX_ARG,((int)local_8 - ((int)this_01 - 4)) + (int)this_00);
      local_c = local_c - 1;
    } while (local_c != 0);
    local_8 = local_8 + 0x151;
    this_01 = ((undefined *)GEN_TOP(((int)this_01 + 0x544)));
    local_10 = local_10 - 1;
  } while (local_10 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0xa88))) = param_1[0x2a2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa8c))) = param_1[0x2a3];
  *((undefined4 *)GEN_TOP(((int)this + 0xa90))) = param_1[0x2a4];
  *((undefined1 *)GEN_TOP(((int)this + 0xa94))) = *(undefined1 *)(param_1 + 0x2a5);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameWorld::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameRegion::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d8f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameArea::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameFloor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameAreaOrFloor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090d980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090d9f0 */
GEN_OWN GEN_FRAME uint F_0090d9f0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x90d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ab3d80(param_1 * param_2 + param_3 * 10 + 1 + (int)param_4);
  return uVar1;
}

/* ref: FUN_0090da20 */
GEN_OWN GEN_FRAME byte F_0090da20(GEN_P(char param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90da20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      return param_2;
    }
    if (param_1 == '\x02') {
      return param_2 == 0;
    }
  }
  return 1;
}

/* ref: FUN_0090da50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90da50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(param_1 + 0x18);
  *((undefined4 *)GEN_TOP(((int)this + 0x62))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x62)));
  *((undefined4 *)GEN_TOP(((int)this + 0x66))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x66)));
  *((undefined2 *)GEN_TOP(((int)this + 0x6a))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x6a)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_1[0x1b];
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = *(undefined1 *)(param_1 + 0x1c);
  *((undefined1 *)GEN_TOP(((int)this + 0x71))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x71)));
  *((undefined1 *)GEN_TOP(((int)this + 0x72))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x72)));
  *((undefined1 *)GEN_TOP(((int)this + 0x73))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x73)));
  return (uint)this;
}

/* ref: FUN_0090dac0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090dac0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90dac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 1;
  case 0x15db: ;
    return 2;
  case 0x15dc: ;
    return 3;
  case 0x15dd: ;
    return 4;
  case 0x15de: ;
    return 5;
  }
}

/* ref: FUN_0090db20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0090db20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90db20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0x15da;
  case 2: ;
    return 0x15db;
  case 3: ;
    return 0x15dc;
  case 4: ;
    return 0x15dd;
  case 5: ;
    return 0x15de;
  }
}

/* ref: FUN_0090db80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090db80(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90db80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x60 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090dba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090dba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90dba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090dbc0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0090dbc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x90dbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x13: ;
  case 0x14: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_0090dc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090dc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90dc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (0 < param_1) {
    *((uint *)GEN_TOP(((int)this + 0x28))) = *((uint *)GEN_TOP(((int)this + 0x28))) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  return (uint)this;
}

/* ref: FUN_0090dc70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090dc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90dc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090dca0 */
GEN_OWN GEN_FRAME uint F_0090dca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((float10)*((float *)GEN_TOP((param_2 + 0xc0))) < (float10)*((float *)GEN_TOP((param_1 + 0xc0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090dcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090dcd0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0090dcf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090dcf0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 4;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_0090dd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090dd30(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 4;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_0090dd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090dd70(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    param_1 = param_1 - 4;
    if ((param_2 & 1) != 0) {
      F_00406b30(param_1);
      return param_1;
    }
  }
  return param_1;
}

/* ref: FUN_0090ddc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ddc0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ddc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090ddd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ddd0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ddd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090ddf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ddf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ddf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090de10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090de10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90de10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int iVar2;
  ulonglong uVar3;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xda4))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd50))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xcfc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xca8))) GEN_EDX_ARG);
  iVar2 = 0xf;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0xc48)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar1 - 0x70))) GEN_EDX_ARG);
    uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)pvVar1 - 0xc4))) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 - 0xc4)));
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_0090de80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90de80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090dea0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090dea0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90dea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090ded0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090ded0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90ded0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090df00 */
GEN_OWN GEN_FRAME uint F_0090df00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90df00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_1 + 1))) < *((byte *)GEN_TOP((param_2 + 1))));
}

/* ref: FUN_0090df20 */
GEN_OWN GEN_FRAME uint F_0090df20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90df20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_1 + 4))) < *((byte *)GEN_TOP((param_2 + 4))));
}

/* ref: FUN_0090df40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090df40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90df40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 0x28 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x7c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xd0 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x124 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090df70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090df70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90df70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x124))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090dfd0 */
GEN_OWN GEN_FRAME uint F_0090dfd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90dfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_1 + 2))) < *((byte *)GEN_TOP((param_2 + 2))));
}

/* ref: FUN_0090dff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090dff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90dff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090e040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x90e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: FUN_0090e0a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e0a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00e5bbd0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf1 */
GEN_OWN GEN_NOFRAME uint F_0090e0d0(void)
{
  GEN_ENTER(0x90e0d0u, 0u, 0u, 0u, 0u);
  return 0x135ae50;
}

/* ref: Application::Network::LobbyProtoChannel::CharaMake::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e0f0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e5bc00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0090e120 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e120(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_0090e140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0090e160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e160(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00e75840(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf1 */
GEN_OWN GEN_NOFRAME uint F_0090e190(void)
{
  GEN_ENTER(0x90e190u, 0u, 0u, 0u, 0u);
  return 0x135b2a0;
}

/* ref: Application::Network::LobbyProtoChannel::CharaRemake::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e1b0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e75880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0090e1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e1e0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Client::UI2::Agent::Lobby3D::LoadMapEvent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090e260 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0090e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = ((undefined1 *)GEN_TOP(((int)this + 4)));
  iVar2 = 0x1a;
  do {
    *puVar1 = puVar1[param_1 - (int)this];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x1e))) = *((undefined1 *)GEN_TOP((param_1 + 0x1e)));
  *((undefined1 *)GEN_TOP(((int)this + 0x1f))) = *((undefined1 *)GEN_TOP((param_1 + 0x1f)));
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
  *((undefined1 *)GEN_TOP(((int)this + 0x23))) = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
  return 0;
}

/* ref: FUN_0090e2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90e2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::CharaRemake::CharaRemakeCopy */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90e2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e78fe0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
  return (uint)this;
}

/* ref: Client::UI2::PopupMenu::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0090e2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90e2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::UI2::PopupMenu::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_0090e300(void)
{
  GEN_ENTER(0x90e300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0090e310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx - 0x180;
}

/* ref: FUN_0090e320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx - 0x180;
}

/* ref: FUN_0090e330 */
GEN_OWN GEN_NOFRAME uint F_0090e330(void)
{
  GEN_ENTER(0x90e330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090e340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx - 0x180;
}

/* ref: FUN_0090e350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e350(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090e370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x90e370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *(undefined1 *)(param_1 + 2);
  *((undefined1 *)GEN_TOP(((int)this + 5))) = *((undefined1 *)GEN_TOP(((int)param_1 + 5)));
  *((undefined1 *)GEN_TOP(((int)this + 6))) = *(undefined1 *)(param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 7))) = *((undefined1 *)GEN_TOP(((int)param_1 + 7)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 4);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *(undefined4 *)(param_1 + 0x2e);
  return (uint)this;
}

/* ref: Client::UI2::AddonAreaText::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e3e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090e420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e420(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: Client::UI2::AddonTextChain::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonTextError::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonTextClassChange::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e510(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090e540 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e540(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_0090e560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6434));
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCommandInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e590(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00590600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0090e5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0090e5c0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x90e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Client::UI2::AddonNotification::vf51 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90e5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf54 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x90e600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0090e610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0090e610(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x90e610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

