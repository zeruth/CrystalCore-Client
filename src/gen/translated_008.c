#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00475a70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00475a70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x475a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00475a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475a90(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x475a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_3;
  return in_ecx;
}

/* ref: FUN_00475aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00475ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x475ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00475b00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00475b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00475b20 */
GEN_OWN GEN_FRAME uint F_00475b20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x475b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00475b50 */
GEN_OWN GEN_FRAME uint F_00475b50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475b80 */
GEN_OWN GEN_FRAME uint F_00475b80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x475b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_00475b90 */
GEN_OWN GEN_FRAME uint F_00475b90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475ba0 */
GEN_OWN GEN_FRAME uint F_00475ba0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475bb0 */
GEN_OWN GEN_FRAME uint F_00475bb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475bc0 */
GEN_OWN GEN_FRAME uint F_00475bc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475bd0 */
GEN_OWN GEN_FRAME uint F_00475bd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475be0 */
GEN_OWN GEN_FRAME uint F_00475be0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475bf0 */
GEN_OWN GEN_FRAME uint F_00475bf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c00 */
GEN_OWN GEN_FRAME uint F_00475c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c10 */
GEN_OWN GEN_FRAME uint F_00475c10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c20 */
GEN_OWN GEN_FRAME uint F_00475c20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c30 */
GEN_OWN GEN_FRAME uint F_00475c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c40 */
GEN_OWN GEN_FRAME uint F_00475c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475c50 */
GEN_OWN GEN_FRAME byte F_00475c50(void)
{
  GEN_ENTER(0x475c50u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00475c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00475cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475cb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x475cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_00475cc0 */
GEN_OWN GEN_FRAME uint F_00475cc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x475cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *((undefined4 *)GEN_TOP((param_1 + param_2 * 4))) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*((undefined4 *)GEN_TOP((param_1 + uVar2 * 4))),*param_4);
    if ((char)uVar1 == '\0') {
      *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4))) = *param_4;
      return (uint)param_4;
    }
    *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4))) = *((undefined4 *)GEN_TOP((param_1 + uVar2 * 4)));
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *((undefined4 *)GEN_TOP((param_1 + uVar2 * 4))) = *param_4;
  return uVar1;
}

/* ref: FUN_00475d40 */
GEN_OWN GEN_FRAME byte F_00475d40(void)
{
  GEN_ENTER(0x475d40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00475d50 */
GEN_OWN GEN_FRAME uint F_00475d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x475d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00475d80 */
GEN_OWN GEN_FRAME byte F_00475d80(void)
{
  GEN_ENTER(0x475d80u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00475d90 */
GEN_OWN GEN_FRAME uint F_00475d90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475da0 */
GEN_OWN GEN_FRAME uint F_00475da0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00475db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00476330((int)this - 0x20 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00475dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00476800((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00475dd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004766e0((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00475de0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00477200((int)this - 0x1a4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00475df0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0046fd20((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00475e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < 0x27) {
    iVar1 = 0x27;
  }
  F_00a34690(this GEN_EDX_FWD,iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090ae8));
  F_0046db90(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Input::InputData::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::InputData::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::InputData::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::InputData::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::InputData::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Input::InputData::vf7 */
GEN_OWN GEN_NOFRAME byte F_00475e80(void)
{
  GEN_ENTER(0x475e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkInputData::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475e90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x475e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a34020(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00475ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x475ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  return (uint)this;
}

/* ref: FUN_00475ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x475ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0046fe00(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00475f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00475f20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x475f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  in_ecx[2] = 0xe0000000;
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00475f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00475f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x475f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((byte *)GEN_TOP(((int)this + 0x10))) = (byte)param_3 & 1;
  *((byte *)GEN_TOP(((int)this + 0x11))) = (byte)(param_3 >> 1) & 1;
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_5;
  return param_4;
}

/* ref: FUN_00475fa0 */
GEN_OWN GEN_FRAME uint F_00475fa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x475fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00475fd0 */
GEN_OWN GEN_FRAME uint F_00475fd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x475fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (0x157 < param_1) {
    return 0;
  }
  return (&REFG(undefined4, 0x14a31f0))[(int)(param_1)];
}

/* ref: FUN_00476000 */
GEN_OWN GEN_NOFRAME uint F_00476000(void)
{
  GEN_ENTER(0x476000u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00975680(this GEN_EDX_ARG);
    return uVar1;
  }
  uVar2 = F_0046ff40();
  return (uint)(uVar2 / 1000);
}

/* ref: FUN_00476030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
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

/* ref: Client::UI::Misc::UserFileManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004760a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4760a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  if (param_1[1] != 0) {
    F_0050c620(param_1[1],0,0);
  }
  F_005095f0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004760f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004760f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4760f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x2c24c))) & 0x3c) == 0) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI::UI3DModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109072c));
  F_00a4b160(param_1 + 0x1c70 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::UIClipboard::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1090734));
  F_00aadc20(param_1 + 2 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004761b0 */
GEN_OWN GEN_NOFRAME uint F_004761b0(void)
{
  GEN_ENTER(0x4761b0u, 0u, 0u, 0u, 0u);
  return 0x4000;
}

/* ref: FUN_004761c0 */
GEN_OWN GEN_NOFRAME uint F_004761c0(void)
{
  GEN_ENTER(0x4761c0u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: FUN_004761d0 */
GEN_OWN GEN_NOFRAME uint F_004761d0(void)
{
  GEN_ENTER(0x4761d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_004761e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004761e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4761e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0047dea0((int)this - 0x850 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_004761f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004761f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4761f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x850))) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*((int *)GEN_TOP(((int)this + 0x864))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x864))));
    *((undefined4 *)GEN_TOP(((int)this + 0x864))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x868))) = 0;
  }
  uVar1 = F_00a34020(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Crypt::SimpleString::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476240(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x476270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
  param_1[9] = 0;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  param_1[4] = 5;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d))) = 0x101;
  param_1[6] = param_4;
  *(undefined1 *)(param_1 + 7) = param_5;
  return (uint)param_1;
}

/* ref: FUN_004762b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004762b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4762b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  __time64_t _Var1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  *((undefined1 *)GEN_TOP(((int)param_1 + 10))) = 0;
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  param_1[3] = (int)_Var1;
  *(undefined1 *)(param_1 + 5) = param_5;
  param_1[4] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004762f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004762f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4762f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109082c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x1090824));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109082c));
  param_1[8] = (*(undefined * PTR32 (*)[1])REFP(0x1090824));
  param_1[8] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 0xc GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(param_1[6]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = 99;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x20ed0)));
  do {
    F_00401530((int)pvVar2 - 0x4f0,0x54,0xf,((code *)REFP(0x42c880)));
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar2 - 0x544))) GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x544)));
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: FUN_004763e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004763e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4763e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  iVar2 = 0xf;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x1be04)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x110))) GEN_EDX_FWD);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x164))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x1c0))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x214))) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x164)));
  } while (-1 < iVar2);
  iVar2 = 0xf;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x1a7c4)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x110))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x164))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x1c0))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x214))) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x164)));
  } while (-1 < iVar2);
  iVar2 = 0x11f;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x19184)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x110))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x164))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x1c0))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x214))) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x164)));
  } while (-1 < iVar2);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) =
       (*(undefined * PTR32 (*)[2])REFP(0x1090504));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::UIInputModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004764d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4764d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  REFG(undefined1, 0x12fdbd7) = 0;
  F_0042c880(param_1 + 0xc GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476510 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(param_1[6]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1090760));
  piVar2 = param_1 + 2;
  iVar3 = 0x10;
  do {
    puVar1 = ((undefined4 *)GEN_TOP(*piVar2));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_0042c880(param_1 + 0x14 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004765d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4765d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1090768));
  F_0042c880(param_1 + 6 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(param_1[6]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyDetail::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 * this;
  
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x1090b80));
  this = param_1 + 0x7b;
  iVar1 = 1;
  do {
    this = this - 0x15;
    F_0042c880(this GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042c880(param_1 + 0x3c GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyCreate::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004766e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4766e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x10907cc));
  param_1[3] = (*(undefined * PTR32 (*)[1])REFP(0x10907c4));
  param_1[3] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 7 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0047df00((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476730(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(param_1[6]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyInvitedlist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  F_00406b30(param_1[4]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004767b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4767b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * this;
  int iVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1090890));
  iVar1 = 7;
  this = param_1 + 0x726;
  do {
    this = this - 0x1a;
    F_0042c880(this GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyPartyInvite::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476800(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 9 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  F_00406b30(param_1[4]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyChat::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00439ec0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::CharaConfig::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004768c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4768c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = param_2;
  return param_1;
}

/* ref: Client::UI::Misc::CharaConfig::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004768e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4768e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Client::UI::Misc::CharaConfig::vf4 */
GEN_OWN GEN_NOFRAME uint F_004768f0(void)
{
  GEN_ENTER(0x4768f0u, 0u, 0u, 0u, 0u);
  return 0x400;
}

/* ref: Client::UI::Misc::CharaConfig::vf5 */
GEN_OWN GEN_NOFRAME uint F_00476900(void)
{
  GEN_ENTER(0x476900u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00476910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::PronounModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  F_00a29b20(param_1 + 0x44 GEN_EDX_FWD);
  F_0042c880(param_1 + 0x2e GEN_EDX_ARG);
  F_0042c880(param_1 + 0x19 GEN_EDX_ARG);
  F_0042c880(param_1 + 4 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf4 */
GEN_OWN GEN_NOFRAME uint F_00476990(void)
{
  GEN_ENTER(0x476990u, 0u, 0u, 0u, 0u);
  return 0x32000;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf5 */
GEN_OWN GEN_NOFRAME uint F_004769a0(void)
{
  GEN_ENTER(0x4769a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf6 */
GEN_OWN GEN_NOFRAME uint F_004769b0(void)
{
  GEN_ENTER(0x4769b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_004769c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004769c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4769c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00476a10((int)this - 0x30 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004769d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4769d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(uint *)(this + 8) || (param_2 != *(uint *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(uint *)(this + 8) = param_1;
  uVar1 = param_1 | param_2;
  *(uint *)(this + 0xc) = param_2;
  if (uVar1 == 0) {
    uVar1 = F_0043b1d0(this GEN_EDX_FWD,0);
    this[0x39] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476a10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004763e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf4 */
GEN_OWN GEN_NOFRAME uint F_00476a40(void)
{
  GEN_ENTER(0x476a40u, 0u, 0u, 0u, 0u);
  return 0x10000;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf5 */
GEN_OWN GEN_NOFRAME uint F_00476a50(void)
{
  GEN_ENTER(0x476a50u, 0u, 0u, 0u, 0u);
  return 0x66;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf6 */
GEN_OWN GEN_NOFRAME uint F_00476a60(void)
{
  GEN_ENTER(0x476a60u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00476aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00476ad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476ad0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  return in_ecx;
}

/* ref: FUN_00476af0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476af0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  return in_ecx;
}

/* ref: FUN_00476b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476b10(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x6c GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00476b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_1[0x16];
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[0x17];
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_1[0x18];
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_1[0x19];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1[0x1a];
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG,param_1 + 0x1b);
  return (uint)this;
}

/* ref: FUN_00476b80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476b80(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00476ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00476bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476bc0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x60 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xbc GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x11c GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00476bf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x11c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00476c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476c20(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x68 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00476c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00476c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_00471510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x11c))) GEN_EDX_ARG,param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00476cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::RaptureShellCommandInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476ce0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476d10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c70));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c64));
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00476d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: FUN_00476d60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00476d70((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandFriendlist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476d70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 + 2 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x476db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  
  if (((*((int *)GEN_TOP(((int)this + 0x58))) != 0) && (0 < param_3)) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    if (param_4 == 0) {
      uVar1 = F_0042a990((int)this + 4 GEN_EDX_FWD);
      F_004438d0(uVar1);
    }
    else if (param_4 == 1) {
      uVar1 = F_0042a990((int)this + 4 GEN_EDX_ARG);
      F_00443960(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00476e20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476e20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c88));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c7c));
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00476e50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x476e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: FUN_00476e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00476e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x476e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00476e80((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandBlacklist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476e80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 + 2 GEN_EDX_FWD);
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00476ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x476ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  
  if (((*((int *)GEN_TOP(((int)this + 0x58))) != 0) && (0 < param_3)) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    if (param_4 == 0) {
      uVar1 = F_0042a990((int)this + 4 GEN_EDX_FWD);
      F_0043fc40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar1);
    }
    else if (param_4 == 1) {
      uVar1 = F_0042a990((int)this + 4 GEN_EDX_ARG);
      F_0043fd10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00476f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476f30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::UI::Shell::ShellCommandAgent::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x476f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = *(undefined4 *)(this + 4);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_FWD);
    piVar2 = ((int *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar1 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        return 0;
      }
      return 10;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandAgent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00476fc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x476fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00477000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00477000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x477000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb080 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: Client::UI::Shell::ShellCommandReturn::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477040(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x477040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00477070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x477070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090cac));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_004770a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004770a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4770a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandCommand::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004770c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4770c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined * this_00;
  undefined * pSVar1;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    pSVar1 = this + 4;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_FWD)));
    F_00abefa0(this_00 GEN_EDX_ARG,pSVar1,param_2);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandCommand::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004770f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4770f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00477120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandConfigToggle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x477150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandConfigToggle::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    F_004482b0(*(undefined4 *)(this + 8),*((undefined4 *)GEN_TOP((param_1 + 4))));
  }
  else if (iVar1 == 1) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = *((undefined4 *)GEN_TOP((param_1 + 4)));
      uVar3 = *(undefined4 *)(this + 8);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_ARG);
      F_00448300(uVar2,uVar3,uVar4);
      return 0;
    }
  }
  else if ((iVar1 == 2) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 4)));
    uVar3 = *(undefined4 *)(this + 8);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_ARG);
    F_00448390(uVar2,uVar3,uVar4);
    return 0;
  }
  return 0;
}

/* ref: Client::UI::Shell::RaptureShellModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477200(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x477200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0043d770(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandBattleMode::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (-1 < (int)*((uint *)GEN_TOP((param_1 + 4)))) {
    uVar1 = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
    if (uVar1 == 0) {
      F_00a7efa0(&REFG(char, 0x14ab058) GEN_EDX_FWD,1);
      return 0;
    }
    if (uVar1 == 2) {
      F_00a7efa0(&REFG(char, 0x14ab058) GEN_EDX_ARG,0);
      return 0;
    }
  }
  F_00a7efa0(&REFG(char, 0x14ab058) GEN_EDX_ARG,(uint)(REFG(char, 0x14ab058) == '\0'));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandBattleTarget::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00547970(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,0xb,3,1);
  return 0;
}

/* ref: FUN_00477390 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00477390(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x477390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  longlong lVar1;
  uint uVar2;
  longlong * plVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    if (((*((byte *)GEN_TOP(((int)param_1 + 0x2dd2))) & 0x10) != 0) || (REFG(int * PTR32, 0x1379694) == param_1)) {
      uVar2 = F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,param_1,0,0);
      return uVar2;
    }
    plVar3 = (longlong *)&REFG(undefined4, 0x14b2790);
    do {
      lVar1 = *plVar3;
      lVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1);
      if (lVar4 == lVar1) {
        uVar5 = 1;
        goto LAB_004773e8;
      }
      plVar3 = plVar3 + 1;
    } while ((int)plVar3 < 0x14b2800);
  }
  uVar5 = 0;
LAB_004773e8: ;
  uVar2 = F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,param_1,1,uVar5);
  return uVar2;
}

/* ref: Client::UI::Shell::ShellCommandTargetPc::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00547970(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,6,7,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetNpc::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00547970(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,5,3,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemy::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004774c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4774c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00547970(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,2,3,1);
  return 0;
}

/* ref: FUN_00477520 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00477520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x477520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  
  if (param_1 < param_2) {
    piVar1 = &REFG(undefined4, 0x14b2790) + param_1 * 2;
    iVar2 = param_1;
    do {
      if ((*piVar1 == -0x20000000) && (piVar1[1] == 0)) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLoot::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0053d810(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,0x13,3,0);
  if (uVar1 != 0) {
    F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar1,0,1);
    F_00ae2af0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandFaceTarget::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004775e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4775e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (REFG(int, 0x1379694) != 0) {
    F_00ae8f30(0);
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandAutoMove::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (REFG(int, 0x1379694) != 0) {
    F_00ae8f20();
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyNext::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00549d90(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyPrev::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004776a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4776a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00549d90(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLockon::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
  if (uVar2 == 0) {
    F_005329b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,1);
    return 0;
  }
  if (uVar2 != 2) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    F_005329b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,bVar1 == 0);
    return 0;
  }
  F_005329b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatReply::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00477840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  iVar3 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x54 + iVar1 != iVar1) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      piVar4 = param_2;
      uVar2 = F_0042a990(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
      uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x1090dec)),uVar2);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x20))))(param_2 GEN_EDX_ARG)));
      F_00abefa0(this_00 GEN_EDX_ARG,uVar2,piVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    return 0;
  }
  return 7;
}

/* ref: FUN_00477970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x477970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042b630(this GEN_EDX_FWD);
  F_0077c0f0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyJoin::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004779f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4779f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_FWD);
  piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    return 9;
  }
  uVar5 = 0x2f;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_ARG);
  uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar5);
  if (piVar1[2] != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar1[1])) + 0x1c))))(((int *)GEN_TOP(piVar1[1])) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)piVar1 + 0xd))));
    if (uVar4 != 0) {
      F_0087d300(uVar2 GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((uVar4 + 0x20))),0,0);
      return 0;
    }
  }
  F_0087d300(uVar2 GEN_EDX_ARG,0,0,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyDecline::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_FWD);
  piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    return 9;
  }
  uVar4 = 0x2f;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
  if (piVar1[2] != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar1[1])) + 0x1c))))(((int *)GEN_TOP(piVar1[1])) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)piVar1 + 0xd))));
    if (uVar2 != 0) {
      F_0087d4a0(this_00 GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((uVar2 + 0x20))),0);
      return 0;
    }
  }
  F_0087d4a0(this_00 GEN_EDX_ARG,0,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeave::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_FWD);
    if (*((int *)GEN_TOP((uVar1 + 8))) != 0) {
      F_004459f0();
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandFC::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(F_00763050(uVar1 GEN_EDX_ARG,uVar3)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      return 10;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandComment::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00477cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 7;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x44))))(param_2 GEN_EDX_FWD);
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar2 + 0x28)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 7;
  }
  iVar3 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)));
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x54 + iVar1 == iVar1) {
    F_00440970(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  }
  else {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x10))));
    uVar10 = 4;
    uVar9 = 0x162;
    uVar8 = 0xc;
    uVar7 = 0;
    uVar6 = 0xc0;
    uVar5 = 0x3c;
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
    F_0058c4d0(uVar2 GEN_EDX_ARG,puVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00440970(this_00 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  F_004408a0(this_00 GEN_EDX_ARG,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLegacy::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 7;
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else {
    if (uVar1 == 2) {
      uVar7 = 1;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0x14e;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_FWD);
      F_00447870(uVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5,uVar6,uVar7);
      return 0;
    }
    uVar4 = 0;
    uVar3 = 0x14e;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_ARG)));
    uVar1 = F_0043c920(this_00 GEN_EDX_ARG,uVar3,uVar4);
    uVar1 = (uint)(uVar1 == 0);
  }
  uVar4 = 0;
  uVar7 = 1;
  uVar6 = 1;
  uVar3 = 0x14e;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_ARG);
  F_00447870(uVar2 GEN_EDX_ARG,uVar3,uVar1,uVar4,uVar6,uVar7);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarDisplay::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00477f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandInventory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00477f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x477f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  uint in_ecx;
  undefined * this_00;
  int iVar1;
  undefined1 * this_01;
  undefined4 uVar2;
  
  this_01 = (gen_frame + 0x10);
  iVar1 = 0;
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar2 = 5;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x48))))(param_2 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar2)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      if (*((int *)GEN_TOP((param_1 + 4))) - 1U < 4) {
        iVar1 = *((int *)GEN_TOP((param_1 + 4))) - 1;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = iVar1;
      F_0086e5a0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),2);
      iVar1 = 1;
      do {
        this_01 = this_01 - 8;
        F_005a2670(this_01 GEN_EDX_ARG);
        iVar1 = iVar1 - 1;
      } while (-1 < iVar1);
      return 0;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf2 */
GEN_OWN GEN_NOFRAME uint F_00478010(void)
{
  GEN_ENTER(0x478010u, 0u, 0u, 0u, 0u);
  return 0x73;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf3 */
GEN_OWN GEN_NOFRAME byte F_00478020(void)
{
  GEN_ENTER(0x478020u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00478030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00478030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x478030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0047ade0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x478040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  undefined * pSVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    if (REFG(char, 0x1372338) != '\0') {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x25);
      return 0;
    }
    if (REFG(undefined4, 0x1372334) != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(undefined4, 0x1372334),0);
      REFG(undefined4, 0x1372334) = 0;
      return 0;
    }
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
      return 0;
    }
    REFG(undefined1, 0x137232f) = 0;
    REFG(undefined1, 0x1372332) = 0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    REFG(undefined1, 0x1372333) = (undefined1)uVar3;
    pSVar7 = this + 4;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x18))))(param_2 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar4 + 600))) == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar4 + 0x34))) GEN_EDX_ARG,((char *)REFP(0x108f868)));
      *((uint *)GEN_TOP((uVar4 + 600))) = uVar5;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar4 + 600))) + 0x24))))(*((int * PTR32 *)GEN_TOP((uVar4 + 600))) GEN_EDX_ARG,uVar3)));
    uVar18 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
    uVar3 = F_00cb0950(this_00 GEN_EDX_ARG,uVar18);
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x14;
    uVar11 = 0;
    uVar10 = 4;
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar18 = 0;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x1c))))(param_2 GEN_EDX_ARG);
    REFG(undefined4, 0x1372334) = F_00866a60(uVar4 GEN_EDX_ARG,uVar3,uVar18,uVar6,pSVar7,param_2,uVar8,uVar9,uVar10,uVar11,
                                uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
  }
  return 0;
}

/* ref: FUN_004781c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004781c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4781c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  byte bVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if ((param_4 == ((int *)GEN_TOP(0x0))) || (this_00 == ((undefined *)GEN_TOP(0x0)))) goto LAB_0047824e;
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if (iVar2 == 0) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
    }
    else {
      uVar6 = 0;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x48))))(param_4 GEN_EDX_ARG);
      uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar6);
      if (uVar3 != 0) {
        REFG(char, 0x137232f) = '\x01';
        uVar5 = 0x3c;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 4))) + 0xc))))(((int *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG);
        F_007e4b80(uVar3 GEN_EDX_ARG,(char)uVar4,uVar5);
      }
    }
  }
  else if (iVar2 == 4) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7d);
      REFG(undefined4, 0x1372334) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    REFG(char, 0x1372332) = '\x01';
    F_00975070(this_00 GEN_EDX_ARG);
    bVar1 = F_00433a30(param_4,1);
    if (bVar1 == 0) goto LAB_0047824e;
    REFG(undefined1, 0x1372338) = 1;
  }
  else {
    if (iVar2 == 5) {
      REFG(char, 0x1372332) = '\0';
      F_00975080(this_00 GEN_EDX_ARG);
LAB_0047824e: ;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    if ((REFG(char, 0x137232f) == '\0') && (REFG(char, 0x1372332) != '\0')) {
      F_00975080(this_00 GEN_EDX_ARG);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  REFG(undefined4, 0x1372334) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf2 */
GEN_OWN GEN_NOFRAME uint F_00478360(void)
{
  GEN_ENTER(0x478360u, 0u, 0u, 0u, 0u);
  return 0x74;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf3 */
GEN_OWN GEN_NOFRAME byte F_00478370(void)
{
  GEN_ENTER(0x478370u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00478390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00478390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x478390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0047ae10((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandHud::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004783c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4783c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 4))) & 0xffffff;
  if ((0x28 < uVar1) || (*(int *)(&REFG(undefined, 0x1090f58) + uVar1 * 4) < 0)) {
    return 7;
  }
  this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,
                                 *(int *)(&REFG(undefined, 0x1090f58) + uVar1 * 4))));
  if (*((int *)GEN_TOP((param_1 + 8))) == 0) {
    F_00414a40(this_00 GEN_EDX_ARG,1,1);
    return 0;
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 2) {
    F_00414a40(this_00 GEN_EDX_ARG,(uint)(*((int *)GEN_TOP(((int)this_00 + 0x14))) == 0),1);
    return 0;
  }
  F_00414a40(this_00 GEN_EDX_ARG,0,1);
  return 0;
}

/* ref: FUN_00478450 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00478450(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a4cf70(param_2,10);
  if (uVar1 == 0xc) {
    F_00414a40(param_1 GEN_EDX_ARG,1,1);
    return 1;
  }
  if (uVar1 == 0x18) {
    F_00414a40(param_1 GEN_EDX_ARG,0,1);
    return 1;
  }
  return 0;
}

/* ref: FUN_004784b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004784b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4784b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = (int)param_1;
  pvVar3 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x14e)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar3;
  pvVar3 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x14f)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
  pvVar3 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x150)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar3;
  uVar6 = 0;
  param_1 = ((uint *)GEN_TOP(((int)param_1 + 8)));
  (*(int *)(gen_frame + 0x0)) = 1;
  iVar5 = 0x54;
  do {
    switch((unsigned int)(uintptr_t)(*param_1 & 0xfffffffe)) {
    case 0: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1,1);
      uVar6 = uVar6 | 1;
      break;
    case 2: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,1);
      uVar6 = uVar6 | 1;
      break;
    default: ;
      if ((*(int *)(gen_frame + 0x0)) < (*((int *)GEN_TOP((iVar1 + 0x14))) - *((int *)GEN_TOP((iVar1 + 0x10)))) / 0x54) {
        uVar4 = F_00a4cf70(*((int *)GEN_TOP((iVar1 + 0x10))) + iVar5,10);
        if (uVar4 == 0xc) {
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x18) break;
          uVar7 = 0;
        }
        F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar7,1);
        uVar6 = uVar6 | 4;
      }
      break;
    case 0xb4: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0,1);
      uVar6 = uVar6 | 2;
      break;
    case 0xb6: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1,1);
      uVar6 = uVar6 | 2;
    }
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    param_1 = param_1 + 1;
    iVar5 = iVar5 + 0x54;
  } while (iVar5 < 0xfc);
  param_1 = ((uint *)GEN_TOP(0x3));
  if (3 < (*((int *)GEN_TOP((iVar1 + 0x14))) - *((int *)GEN_TOP((iVar1 + 0x10)))) / 0x54) {
    iVar5 = 0xfc;
    do {
      bVar2 = F_0043da00(param_2,*((int *)GEN_TOP((iVar1 + 0x10))) + iVar5,&(*(int *)(gen_frame + 0x0)));
      if (bVar2 == 0) {
        uVar4 = F_00a4cf70(*((int *)GEN_TOP((iVar1 + 0x10))) + iVar5,10);
        if (uVar4 == 0xc) {
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x18) goto switchD_0047862f_caseD_0;
          uVar7 = 0;
        }
        F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar7,1);
        uVar6 = uVar6 | 4;
      }
      else {
        switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x0)))) {
        case 1: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,1);
          uVar6 = uVar6 | 1;
          break;
        case 0xb3: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0,1);
          uVar6 = uVar6 | 2;
          break;
        case 0xb5: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1,1);
          uVar6 = uVar6 | 2;
          break;
        case -1: ;
                    
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1,1);
          uVar6 = uVar6 | 1;
        }
      }
switchD_0047862f_caseD_0: ;
      param_1 = ((uint *)GEN_TOP(((int)param_1 + 1)));
      iVar5 = iVar5 + 0x54;
    } while ((int)param_1 < (*((int *)GEN_TOP((iVar1 + 0x14))) - *((int *)GEN_TOP((iVar1 + 0x10)))) / 0x54);
  }
  if (uVar6 == 0) {
    F_00414a40((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14))) == 0),1);
  }
  return 0;
}

/* ref: FUN_00478890 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00478890(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x14d)));
  if (1 < (uint)((*((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10)))) / 0x54)) {
    uVar1 = F_00a4cf70(*((int *)GEN_TOP((param_1 + 0x10))) + 0x54,10);
    if ((-1 < (int)uVar1) && ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8))))) {
      F_00414a40(this GEN_EDX_ARG,uVar1,1);
      return 0;
    }
  }
  return 7;
}

/* ref: FUN_00478900 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00478900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  undefined * this;
  
  if (1 < (uint)((*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10)))) / 0x54)) {
    (*(uint *)&gen_args[0]) = F_00a4cf70(*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10))) + 0x54,10);
    bVar1 = F_00817480(&(*(uint *)&gen_args[0]));
    if (bVar1 != 0) {
      this = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x144)));
      F_00414a40(this GEN_EDX_ARG,(*(uint *)&gen_args[0]),1);
      return 0;
    }
  }
  return 7;
}

/* ref: FUN_00478980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00478980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x151)));
  uVar1 = *((uint *)GEN_TOP((param_1 + 8))) & 0xfffffffe;
  if (uVar1 == 0) {
    F_00414a40(this GEN_EDX_ARG,1,1);
    return 0;
  }
  if (uVar1 != 2) {
    F_00414a40(this GEN_EDX_ARG,(uint)(*((int *)GEN_TOP(((int)this + 0x14))) == 0),1);
    return 0;
  }
  F_00414a40(this GEN_EDX_ARG,0,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatlog::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004789e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4789e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe) - 0xac;
  if (uVar1 < 7) {
                    
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_004784b0(this GEN_EDX_FWD,param_1,param_2);
      return uVar1;
    case 2: ;
      uVar1 = F_00478980(param_1,param_2);
      return uVar1;
    case 4: ;
      uVar1 = F_00478890(param_1,param_2);
      return uVar1;
    case 6: ;
      uVar1 = F_00478900(param_1,param_2);
      return uVar1;
    }
  }
  return 7;
}

/* ref: FUN_00478a80 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00478a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x478a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = param_2 * 3 + 0x39;
  iVar1 = param_1 + iVar2 * 8;
  if (*((int *)GEN_TOP((param_1 + 0x10 + iVar2 * 8))) == 0) {
    if (((byte)*((undefined4 *)GEN_TOP((param_1 + 0x2130 + param_2 * 8))) & 0xf) == 3) {
      uVar4 = *((uint *)GEN_TOP((param_1 + 0x2134 + param_2 * 8)));
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(*((int *)GEN_TOP((iVar1 + 0x14))) + param_1,param_2,iVar1,1,0,0);
  }
  switch((unsigned int)(uintptr_t)(param_3 & 0xfffffffe)) {
  case 0: ;
  case 0x46: ;
  case 0xbe: ;
    bVar3 = F_00447870(param_1 GEN_EDX_ARG,param_2,0,0,1,1);
    return bVar3;
  case 2: ;
    bVar3 = F_00447870(param_1 GEN_EDX_ARG,param_2,2,0,1,1);
    return bVar3;
  default: ;
    bVar3 = F_00447870(param_1 GEN_EDX_ARG,param_2,-(uint)(uVar4 != 2) & 2,0,1,1);
    return bVar3;
  case 0xc0: ;
    bVar3 = F_00447870(param_1 GEN_EDX_ARG,param_2,1,0,1,1);
    return bVar3;
  }
}

/* ref: Client::UI::Shell::ShellCommandBattleEffect::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x478c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
    if (uVar1 == 0xb8) {
      uVar3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
      uVar2 = 0xa1;
    }
    else {
      if (uVar1 == 0xba) {
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
        uVar2 = 0xa2;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_FWD);
        F_00478a80(uVar1,uVar2,uVar3);
        return 0;
      }
      if (uVar1 != 0xbc) {
        return 7;
      }
      uVar3 = *((undefined4 *)GEN_TOP((param_1 + 8)));
      uVar2 = 0xa3;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x3c))))(param_2 GEN_EDX_ARG);
    F_00478a80(uVar1,uVar2,uVar3);
  }
  return 0;
}

/* ref: FUN_00478cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
  return (uint)in_ecx;
}

/* ref: std::runtime_error::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00478cf0(void)
{
  GEN_ENTER(0x478cf0u, 0u, 0u, 0u, 0u);
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: FUN_00478d00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00478d00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  return;
}

/* ref: FUN_00478d10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00478d10(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x478d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  wchar_t * pwVar1;
  undefined * p_Var2;
  
  p_Var2 = F_00c45a9d(((undefined *)(gen_frame + 0x0)));
  *param_1 = (*(uint *)((char *)(p_Var2)));
  param_1[1] = (uint)(*(short * PTR32 *)(((char *)(p_Var2) + 4)));
  pwVar1 = (*(wchar_t * PTR32 *)(((char *)(p_Var2) + 12)));
  param_1[2] = (*(int *)(((char *)(p_Var2) + 8)));
  param_1[3] = (uint)pwVar1;
  return (uint)param_1;
}

/* ref: std::locale::id::operator_unsigned_int */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  if (*(int *)this == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
    if (*(int *)this == 0) {
      REFG(int, 0x15d6788) = REFG(int, 0x15d6788) + 1;
      *(int *)this = REFG(int, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return *(uint *)this;
}

/* ref: FUN_00478d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP(((int)this + 4))) != -1) {
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  }
  uVar1 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00478dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 - 1;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return ~-(uint)(iVar1 != 0) & (uint)this;
}

/* ref: FUN_00478e10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00478e10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return;
}

/* ref: FUN_00478e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478e20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00478e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x478e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  *(int *)this = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((iVar1 + 4))) != -1) {
    *((int *)GEN_TOP((iVar1 + 4))) = *((int *)GEN_TOP((iVar1 + 4))) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00478e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * p_Var1;
  uint uVar2;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  p_Var1 = F_00c46017();
  *(undefined * PTR32 *)this = p_Var1;
  uVar2 = F_00c45d58();
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP((uVar2 + 4))) != -1) {
    *((int *)GEN_TOP((uVar2 + 4))) = *((int *)GEN_TOP((uVar2 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00478ec0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00478ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x478ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
    iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar1 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar1)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00478f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478f10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *in_ecx;
  if ((param_2 < *((uint *)GEN_TOP((iVar1 + 0xc)))) &&
     (uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + param_2 * 4))), uVar2 != 0)) {
    return uVar2;
  }
  if ((*((char *)GEN_TOP((iVar1 + 0x14))) != '\0') &&
     (uVar2 = F_00c45d58(), param_2 < *((uint *)GEN_TOP((uVar2 + 0xc))))) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + param_2 * 4)));
  }
  return 0;
}

/* ref: std::locale::facet::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478f50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00478f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478f80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109104c));
  return (uint)in_ecx;
}

/* ref: std::ctype_base::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x478fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00478fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x478fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00478ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00478ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x478ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * p_Var1;
  
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 8))) = (*(uint *)((char *)(p_Var1)));
  *((short * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(short * PTR32 *)(((char *)(p_Var1) + 4)));
  *((int *)GEN_TOP(((int)this + 0x10))) = (*(int *)(((char *)(p_Var1) + 8)));
  *((wchar_t * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(wchar_t * PTR32 *)(((char *)(p_Var1) + 12)));
  return (uint)p_Var1;
}

/* ref: FUN_00479030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x479030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00479050 */
GEN_OWN GEN_FRAME uint F_00479050(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c46280();
  *param_1 = param_2;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004790a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004790a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4790a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
  *(*(int * PTR32 *)&gen_args[0]) = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((iVar1 + 4))) != -1) {
    *((int *)GEN_TOP((iVar1 + 4))) = *((int *)GEN_TOP((iVar1 + 4))) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return (uint)piVar2;
}

/* ref: std::ios_base::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479110(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: std::basic_streambuf<char,std::char_traits<char>_>::setg */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004791c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4791c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  
  **(undefined4 * PTR32 *)(this + 0x10) = param_1;
  **(int * PTR32 *)(this + 0x20) = param_2;
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *piVar1 = param_3 - param_2;
  return (uint)piVar1;
}

/* ref: std::basic_streambuf<char,std::char_traits<char>_>::setp */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004791f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4791f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  
  **(int * PTR32 *)(this + 0x14) = param_1;
  **(int * PTR32 *)(this + 0x24) = param_1;
  piVar1 = *(int * PTR32 *)(this + 0x34);
  *piVar1 = param_2 - param_1;
  return (uint)piVar1;
}

/* ref: FUN_00479210 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  *((int *)GEN_TOP(((int)this + 0x20))) = (int)this + 0x18;
  *((int *)GEN_TOP(((int)this + 0x24))) = (int)this + 0x1c;
  *((int *)GEN_TOP(((int)this + 0x10))) = (int)this + 8;
  *((int *)GEN_TOP(((int)this + 0x30))) = (int)this + 0x28;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 0x34))) = (int)this + 0x2c;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = 0;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30)));
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00479270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479270(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)param_1;
  uVar1 = *param_1;
  if (uVar1 != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
    iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *((int *)GEN_TOP((uVar1 + 4))) = iVar2 - 1;
    }
    iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar1)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: basic_ios_DU_char_traits_D_std_std::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004792e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4792e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479330 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    uVar1 = extraout_EAX;
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00479360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * _Dst;
  int * piVar1;
  
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  *piVar1 = (int)this + (0xcf - (int)_Dst);
  return (uint)piVar1;
}

/* ref: std::runtime_error::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004793a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4793a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004793e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004793e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4793e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * p_Var1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 8))) = (*(uint *)((char *)(p_Var1)));
  *((short * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(short * PTR32 *)(((char *)(p_Var1) + 4)));
  *((int *)GEN_TOP(((int)this + 0x10))) = (*(int *)(((char *)(p_Var1) + 8)));
  *((wchar_t * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(wchar_t * PTR32 *)(((char *)(p_Var1) + 12)));
  return (uint)this;
}

/* ref: ctype_D_std::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00479460(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c45990((uint)param_2,((undefined *)GEN_TOP((param_1 + 8))));
  return (byte)iVar1;
}

/* ref: ctype_D_std::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x479480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  int iVar1;
  byte * pbVar2;
  
  pbVar2 = param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = F_00c45990((uint)*pbVar2,((undefined *)GEN_TOP(((int)this + 8))));
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != param_2);
  }
  return (uint)pbVar2;
}

/* ref: ctype_D_std::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004794b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4794b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c46491((uint)param_2,((undefined *)GEN_TOP((param_1 + 8))));
  return (byte)iVar1;
}

/* ref: ctype_D_std::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004794d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4794d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  int iVar1;
  byte * pbVar2;
  
  pbVar2 = param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = F_00c46491((uint)*pbVar2,((undefined *)GEN_TOP(((int)this + 8))));
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != param_2);
  }
  return (uint)pbVar2;
}

/* ref: ctype_D_std::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00479500(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return param_2;
}

/* ref: ctype_D_std::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x479510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c46aa0(param_3,param_1,param_2 - param_1);
  return param_2;
}

/* ref: ctype_D_std::vf8 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00479540(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x479540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return param_2;
}

/* ref: ctype_D_std::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x479550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c46aa0(param_4,param_1,param_2 - param_1);
  return param_2;
}

/* ref: FUN_00479580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  if (0 < (int)uVar1) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))));
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
    return extraout_EAX;
  }
  if ((int)uVar1 < 0) {
    uVar2 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    uVar1 = (uint)uVar2;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return uVar1;
}

/* ref: ctype_D_std::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004795c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4795c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  if ((int)param_1[5] < 1) {
    if ((int)param_1[5] < 0) {
      F_00406b30(param_1[4]);
    }
  }
  else {
    F_00c4c68f(((undefined *)GEN_TOP(param_1[4])));
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x479610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1091094));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return (uint)this;
}

/* ref: std::system_error::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00479640(void)
{
  GEN_ENTER(0x479640u, 0u, 0u, 0u, 0u);
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: std::system_error::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479650(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x479680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
  return (uint)this;
}

/* ref: std::ios_base::failure::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_004796b0(void)
{
  GEN_ENTER(0x4796b0u, 0u, 0u, 0u, 0u);
                    
  F_00c4c299(0,0,0,0,0);
}

/* ref: FUN_004796c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004796c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4796c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2 & 0x17;
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x10))) & param_2 & 0x17;
  if ((uVar1 != 0) && (param_3 == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
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
  return 0;
}

/* ref: FUN_00479730 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00479730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2 & 0x17;
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x10))) & param_2 & 0x17;
  if (uVar1 != 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
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
  return 0;
}

/* ref: FUN_004797a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004797a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4797a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  undefined * p_Var2;
  uint uVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x201;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    p_Var2 = F_00c46017();
    *puVar1 = p_Var2;
    uVar3 = F_00c45d58();
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    if (*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 4))) != -1) {
      *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 4))) = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 4))) + 1;
    }
    uVar3 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = puVar1;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return 0;
}

/* ref: std::ios_base::failure::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479830(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    uVar1 = extraout_EAX;
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00479880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined * p_Var2;
  uint uVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = (int)this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
  F_00c465a3(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    p_Var2 = F_00c46017();
    *puVar1 = p_Var2;
    uVar3 = F_00c45d58();
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    if (*((int *)GEN_TOP((uVar3 + 4))) != -1) {
      *((int *)GEN_TOP((uVar3 + 4))) = *((int *)GEN_TOP((uVar3 + 4))) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38))) = puVar1;
  *((int *)GEN_TOP(((int)this + 0x10))) = (int)this + 8;
  *((int *)GEN_TOP(((int)this + 0x20))) = (int)this + 0x18;
  *((int *)GEN_TOP(((int)this + 0x24))) = (int)this + 0x1c;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 0x30))) = (int)this + 0x28;
  *((int *)GEN_TOP(((int)this + 0x34))) = (int)this + 0x2c;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: FUN_00479940 */
GEN_OWN GEN_FRAME byte F_00479940(GEN_P(byte * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x479940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00479950 */
GEN_OWN GEN_FRAME uint F_00479950(GEN_P(byte * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x479950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  return (uint)*param_1;
}

/* ref: FUN_00479960 */
GEN_OWN GEN_FRAME byte F_00479960(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00479990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c465d4(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  return;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004799a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4799a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c465dd(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_004799c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004799c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4799c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
  *piVar1 = *piVar1 - param_1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + param_1;
  return (uint)piVar1;
}

/* ref: FUN_004799e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004799e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4799e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  *piVar1 = *piVar1 - param_1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + param_1;
  return (uint)piVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x479a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x479a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf5 */
GEN_OWN GEN_NOFRAME uint F_00479a20(void)
{
  GEN_ENTER(0x479a20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf6 */
GEN_OWN GEN_NOFRAME uint F_00479a30(void)
{
  GEN_ENTER(0x479a30u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479a40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x479a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return in_ecx;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf13 */
GEN_OWN GEN_NOFRAME uint F_00479a50(void)
{
  GEN_ENTER(0x479a50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf14 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00479a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x479a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00479a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x479a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00479aa0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00479aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) != 0) {
    return (ulonglong)**((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
  }
  return 0;
}

/* ref: FUN_00479ac0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00479ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) != 0) {
    return (ulonglong)**((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  }
  return 0;
}

/* ref: FUN_00479ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x38)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
      iVar2 = *((int *)GEN_TOP((uVar3 + 4)));
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *((int *)GEN_TOP((uVar3 + 4))) = iVar2 - 1;
      }
      iVar2 = *((int *)GEN_TOP((uVar3 + 4)));
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar3)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      }
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x4));
    F_00406ad0(puVar1);
  }
  uVar3 = F_00c465bd(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return uVar3;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00479b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x479b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - 1;
  pbVar1 = ((byte *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = (int)(pbVar1 + 1);
  return (uint)*pbVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x479b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint local_c;
  
  lVar1 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        local_c = (uint)lVar1;
        uVar4 = F_00479aa0(this GEN_EDX_FWD);
        if (((longlong)uVar4 < 0) || (uVar4 == 0)) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG);
          if (uVar2 == 0xffffffff) {
            return local_c;
          }
          lVar1 = lVar1 + 1;
          *param_1 = (char)uVar2;
          bVar3 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar3;
          param_1 = param_1 + 1;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar4) {
            uVar4 = CONCAT44(param_3,param_2);
          }
          uVar2 = (uint)uVar4;
          F_00c46aa0(param_1,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),uVar2);
          lVar1 = uVar4 + lVar1;
          bVar3 = param_2 < uVar2;
          param_2 = param_2 - uVar2;
          param_3 = (param_3 - (int)(uVar4 >> 0x20)) - (uint)bVar3;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - uVar2;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + uVar2;
          param_1 = param_1 + uVar2;
        }
        local_c = (uint)lVar1;
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return local_c;
      }
    }
    return local_c;
  }
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x479c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint local_c;
  
  lVar1 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        local_c = (uint)lVar1;
        uVar4 = F_00479ac0(this GEN_EDX_FWD);
        if (((longlong)uVar4 < 0) || (uVar4 == 0)) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,(uint)*param_1);
          if (uVar2 == 0xffffffff) {
            return local_c;
          }
          param_1 = param_1 + 1;
          lVar1 = lVar1 + 1;
          bVar3 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar3;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar4) {
            uVar4 = CONCAT44(param_3,param_2);
          }
          uVar2 = (uint)uVar4;
          F_00c46aa0(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))),param_1,uVar2);
          param_1 = param_1 + uVar2;
          lVar1 = uVar4 + lVar1;
          bVar3 = param_2 < uVar2;
          param_2 = param_2 - uVar2;
          param_3 = (param_3 - (int)(uVar4 >> 0x20)) - (uint)bVar3;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - uVar2;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + uVar2;
        }
        local_c = (uint)lVar1;
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return local_c;
      }
    }
    return local_c;
  }
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x479d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x479d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00479d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479d90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479dd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00479ae0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00479e00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00479e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x479e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  uVar1 = param_2;
  if (*((int *)GEN_TOP((in_ecx + 0x38))) == 0) {
    uVar1 = param_2 | 4;
  }
  *((uint *)GEN_TOP((in_ecx + 0xc))) = uVar1 & 0x17;
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x10))) & uVar1 & 0x17;
  if ((uVar1 != 0) && (param_3 == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
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
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandAction::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479e80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandBattleMode::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479eb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandGear::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandAssist::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479f10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandFollow::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479f40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandBattleTarget::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479f70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTarget::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479fa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTargetPc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00479fd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x479fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTargetNpc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a000(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemy::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandRecast::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandMarking::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLoot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a0c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandFaceTarget::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a0f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandAutoMove::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyNext::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyPrev::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandFocus::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLockon::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a1e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandEcho::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatSay::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a240(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatYell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatShout::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a2a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatTell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a2d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatReply::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatParty::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatFC::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatLinkshell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a390(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandSearch::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a3c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandParty::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a3f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyJoin::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a420(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyDecline::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyInvite::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a480(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeave::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a4b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyKick::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a4e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a510(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLinkshell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandFC::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLookParty::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandComment::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a5d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandFaq::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandCheck::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a630(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandTrade::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandMateria::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a690(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandSalute::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a6c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLegacy::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a6f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047a730 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_0047a730(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0047a740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_0047a750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a750(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047a780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047a780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  int * piVar8;
  uint uVar5;
  
  iVar1 = (*(int *)&gen_args[1]);
  iVar7 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[1]) == 0) {
    return 0;
  }
  (*(char *)(gen_frame + 0xb)) = '\0';
  switch((unsigned int)(uintptr_t)(*((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) & 0xfffffffe)) {
  case 0xe: ;
    iVar6 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
    if ((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - iVar6) / 0x54) < 3) goto switchD_0047a7be_caseD_10;
    (*(int *)&gen_args[1]) = -1;
    bVar2 = F_0043da00(iVar1,iVar6 + 0xa8,&(*(int *)&gen_args[1]));
    if (bVar2 == 0) {
      uVar5 = F_00a4cf70(*((int *)GEN_TOP((iVar7 + 0x10))) + 0xa8,10);
      iVar6 = uVar5 - 1;
    }
    else if ((*(int *)&gen_args[1]) - 0x86U < 0x1f) {
      iVar6 = (*(int *)&gen_args[1]) - 0x86 >> 1;
    }
    else {
      iVar6 = (*(int *)&gen_args[1]);
      if ((*(int *)&gen_args[1]) != 0x46) {
        iVar6 = -1;
      }
    }
    iVar7 = *((int *)GEN_TOP((iVar7 + 0x10)));
    (*(int *)&gen_args[1]) = *(int *)this;
    uVar5 = F_00a4cf70(iVar7 + 0x54,10);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))(this,iVar1,uVar5 - 1,iVar6);
    cVar3 = (char)uVar5;
    break;
  default: ;
    goto switchD_0047a7be_caseD_10;
  case 0x76: ;
    iVar6 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
    if ((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - iVar6) / 0x54) < 5) goto switchD_0047a7be_caseD_10;
    (*(int *)(gen_frame + 0x4)) = -1;
    (*(int *)&gen_args[0]) = -1;
    bVar2 = F_0043dac0((*(int *)&gen_args[1]),iVar6 + 0x54,&(*(int *)(gen_frame + 0x4)));
    if ((bVar2 == 0) &&
       (bVar2 = F_0043da00(iVar1,*((int *)GEN_TOP((iVar7 + 0x10))) + 0x54,&(*(int *)(gen_frame + 0x4))), bVar2 != 0)) {
      (*(int *)(gen_frame + 0x4)) = -(uint)((*(int *)(gen_frame + 0x4)) != 0xa6);
    }
    bVar2 = F_0043dac0(iVar1,*((int *)GEN_TOP((iVar7 + 0x10))) + 0xfc,&(*(int *)&gen_args[0]));
    if ((bVar2 == 0) &&
       (bVar2 = F_0043da00(iVar1,*((int *)GEN_TOP((iVar7 + 0x10))) + 0xfc,&(*(int *)&gen_args[0])), bVar2 != 0)) {
      (*(int *)&gen_args[0]) = -(uint)((*(int *)&gen_args[0]) != 0xa6);
    }
    if (((*(int *)(gen_frame + 0x4)) < 0) || ((*(int *)&gen_args[0]) < 0)) goto switchD_0047a7be_caseD_10;
    uVar5 = F_00a4cf70(*((int *)GEN_TOP((iVar7 + 0x10))) + 0xa8,10);
    uVar4 = F_00a4cf70(*((int *)GEN_TOP((iVar7 + 0x10))) + 0x150,10);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(int *)(gen_frame + 0x4)),uVar5 - 1,(*(int *)&gen_args[0]),uVar4 - 1);
    cVar3 = (char)uVar5;
    break;
  case 0x7c: ;
    iVar6 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
    if ((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - iVar6) / 0x54) < 2) goto switchD_0047a7be_caseD_10;
    (*(int *)&gen_args[1]) = -1;
    bVar2 = F_0043da00(iVar1,iVar6 + 0x54,&(*(int *)&gen_args[1]));
    if (bVar2 == 0) {
      uVar5 = F_00a4cf70(*((int *)GEN_TOP((iVar7 + 0x10))) + 0x54,10);
      iVar7 = uVar5 - 1;
    }
    else {
      iVar7 = (*(int *)&gen_args[1]);
      if ((*(int *)&gen_args[1]) != 0xaa) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,iVar1,0xffffffff);
        cVar3 = (char)uVar5;
        break;
      }
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,iVar1,iVar7);
    cVar3 = (char)uVar5;
    break;
  case 0x82: ;
  case 0xf6: ;
    if (*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 8))) < 0) goto switchD_0047a7be_caseD_10;
    F_004481d0(this GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(int *)&gen_args[0]) + 0x10,&(*(int *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x4)));
    (*(int *)&gen_args[0]) = *(int *)(&REFG(undefined, 0x12fe6d4) + ((int)*((uint *)GEN_TOP((iVar7 + 8))) >> 0x18) * 4);
    uVar5 = *((uint *)GEN_TOP((iVar7 + 8))) & 0xffffff;
    if ((*(int *)&gen_args[0]) == 1) {
      (*(int *)&gen_args[1]) = 1;
      uVar5 = F_00ac1b60(uVar5);
    }
    else if ((*(int *)&gen_args[0]) == 5) {
      if (uVar5 == 2) {
        (*(int *)&gen_args[1]) = 1;
        (*(int *)&gen_args[0]) = 1;
        uVar5 = 0x5c;
      }
      else {
        (*(int *)&gen_args[1]) = 10;
      }
    }
    else if ((*(int *)&gen_args[0]) == 9) {
      (*(int *)&gen_args[1]) = 9;
      uVar5 = F_00ac1cb0(uVar5);
    }
    else {
      (*(int *)&gen_args[1]) = -1;
    }
    bVar2 = F_00ac78f0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,(*(int *)&gen_args[0]),uVar5);
    if ((bVar2 == 0) || ((*(int *)&gen_args[1]) < 0)) goto switchD_0047a7be_caseD_10;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,iVar1,(*(int *)&gen_args[1]),uVar5,(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
    cVar3 = (char)uVar5;
    break;
  case 0xa6: ;
    if ((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)))) / 0x54) < 2)
    goto switchD_0047a7be_caseD_10;
    uVar5 = F_00a4cf70(*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10))) + 0x54,10);
    iVar1 = *((int *)GEN_TOP((iVar7 + 0x10)));
    iVar7 = *((int *)GEN_TOP((iVar7 + 0x14)));
    (*(int *)&gen_args[0]) = 2;
    if ((2 < (uint)((iVar7 - iVar1) / 0x54)) &&
       (bVar2 = F_0043da00((*(int *)&gen_args[1]),iVar1 + 0xa8,&(*(int *)(gen_frame + 0x0))), bVar2 != 0)) {
      if ((*(int *)(gen_frame + 0x0)) == 0) {
        (*(int *)&gen_args[0]) = 0;
      }
      else if ((*(int *)(gen_frame + 0x0)) == 2) {
        (*(int *)&gen_args[0]) = 1;
      }
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,(*(int *)&gen_args[1]),uVar5 - 1,(*(int *)&gen_args[0]));
    cVar3 = (char)uVar5;
    break;
  case 0xa8: ;
    if ((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)))) / 0x54) < 2)
    goto switchD_0047a7be_caseD_10;
    uVar5 = F_00a4cf70(*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10))) + 0x54,10);
    (*(int *)(gen_frame + 0x0)) = uVar5 - 1;
    if ((int)(uVar5 - 1) < 0) goto switchD_0047a7be_caseD_10;
    iVar6 = *((int *)GEN_TOP((iVar7 + 0x10)));
    iVar7 = *((int *)GEN_TOP((iVar7 + 0x14)));
    (*(int *)&gen_args[1]) = 2;
    if ((2 < (uint)((iVar7 - iVar6) / 0x54)) &&
       (bVar2 = F_0043da00(iVar1,iVar6 + 0xa8,&(*(int *)&gen_args[0])), bVar2 != 0)) {
      if ((*(int *)&gen_args[0]) == 0) {
        (*(int *)&gen_args[1]) = 0;
      }
      else if ((*(int *)&gen_args[0]) == 2) {
        (*(int *)&gen_args[1]) = 1;
      }
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,iVar1,(*(int *)(gen_frame + 0x0)),(*(int *)&gen_args[1]));
    cVar3 = (char)uVar5;
    break;
  case 0xf8: ;
    piVar8 = ((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
    if (((uint)((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)))) / 0x54) < 2) ||
       (bVar2 = F_0043dc10((*(int *)&gen_args[1]),*piVar8 + 0x54,&(*(int *)(gen_frame + 0x0))), bVar2 == 0))
    goto switchD_0047a7be_caseD_10;
    F_004481d0(this GEN_EDX_ARG,iVar1,piVar8,&(*(int *)&gen_args[0]),&(*(int *)&gen_args[1]));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,iVar1,2,(*(int *)(gen_frame + 0x0)),(*(int *)&gen_args[0]),(*(int *)&gen_args[1]));
    cVar3 = (char)uVar5;
  }
  (*(char *)(gen_frame + 0xb)) = cVar3;
switchD_0047a7be_caseD_10: ;
  return ((*(char *)(gen_frame + 0xb)) != '\0') - 1 & 7;
}

/* ref: Client::UI::Shell::ShellCommandHotbarDisplay::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ad80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ad80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandInventory::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047adb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47adb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ade0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ade0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ae10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ae10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandHud::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ae40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ae40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandChatlog::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ae70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ae70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandBattleEffect::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047aea0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47aea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandEmote::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047aed0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47aed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandGM::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047af00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47af00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905d8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047afa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047afa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47afa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047afc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047afc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47afc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047aff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047aff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47aff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)((*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 0x18;
}

/* ref: FUN_0047b030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b0c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_0047b120 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047b140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047b160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b180 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x71))) == '\0') {
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

/* ref: FUN_0047b260 */
GEN_OWN GEN_FRAME uint F_0047b260(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_0047b2a0 */
GEN_OWN GEN_FRAME uint F_0047b2a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0047b2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b2e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047b340 */
GEN_OWN GEN_FRAME uint F_0047b340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0047b370 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047b370(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_0047b3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x71))) == '\0') {
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

/* ref: FUN_0047b440 */
GEN_OWN GEN_FRAME uint F_0047b440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0047b480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047b480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * _Dst;
  
  F_00479880(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x1091164));
  F_0042b630((int)this + 0x3c GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  return (uint)this;
}

/* ref: FUN_0047b4d0 */
GEN_OWN GEN_FRAME uint F_0047b4d0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  return -(uint)(*param_1 != 0xffffffff) & *param_1;
}

/* ref: FUN_0047b4f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0047b4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  undefined4 * puVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = 0;
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *puVar1 = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  return (uint)puVar1;
}

/* ref: FUN_0047b570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47b570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047b580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47b580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047b5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x41))) == '\0') {
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

/* ref: FUN_0047b640 */
GEN_OWN GEN_FRAME uint F_0047b640(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_0047b680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47b680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047b690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00473080(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047b6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b6a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47b6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b6c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047b6f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047b6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00473110(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047b720 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047b720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47b720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047b760 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047b760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004731e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047b770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47b770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b780 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0047b780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0xe))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0xe))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0xe)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0xe)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0xe)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0xe)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0047b7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *((uint *)GEN_TOP(((int)this + 0x10))) < param_2)) {
    if ((param_2 < *((uint *)GEN_TOP(((int)this + 0x10)))) &&
       (uVar3 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + param_2)));
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = ((undefined *)GEN_TOP(((int)pvVar1 + 1)));
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_0047b8a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047b8a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47b8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0047b8b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0047b8b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x192);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_0047b970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047b970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47b970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00473360(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047b980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b980(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47b980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047b990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047b990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47b990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047bac0 */
GEN_OWN GEN_FRAME uint F_0047bac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47bac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0047bc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047bc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47bc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047bca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_1);
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
  return (uint)puVar2;
}

/* ref: FUN_0047bce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_1);
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
  return (uint)puVar2;
}

/* ref: FUN_0047bd20 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0047bd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x69))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x69))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0047bd70 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0047bd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0047bda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bda0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047bdd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_1);
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
  return (uint)puVar2;
}

/* ref: FUN_0047be20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47be20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
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

/* ref: FUN_0047be70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047be70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47be70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047be90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047be90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47be90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
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

/* ref: FUN_0047bed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x41))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x41))) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0047bf40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_0047bf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bf70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47bf70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047bf80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bf80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47bf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047bf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47bf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047bfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47bfb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047bff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047bff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47bff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c010 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0047c010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47c010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x69))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x69))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x69)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x69)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x69)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x69)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0047c060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047c0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c0a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c0d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047c110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xa8;
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

/* ref: FUN_0047c170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047c1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c1c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47c1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c1d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c1e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x69))) == '\0') {
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

/* ref: FUN_0047c260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x69))) == '\0') {
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

/* ref: FUN_0047c320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00473080(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047c340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00473110(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047c360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_004731e0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047c380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - uVar5;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + iVar3))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + iVar3))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0047c420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x192);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x192);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar5;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (uVar5 < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + param_2))) = 0;
    return uVar4;
  }
  *((undefined1 *)GEN_TOP((uVar4 + param_2))) = 0;
  return uVar4;
}

/* ref: FUN_0047c4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00473360(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047c530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047c550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047c590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047c5d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c5f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0xe))) == '\0') {
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

/* ref: FUN_0047c690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x71))) == '\0') {
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

