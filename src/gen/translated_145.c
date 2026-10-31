#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  if (param_1[0x20] != 0) {
    F_00a1b5a0(param_1 + 0x20);
    param_1[0x20] = 0;
  }
  F_00bf0db0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bee4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a1e3e0((undefined1)param_1,((char *)REFP(0x110d140)),0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf11 */
GEN_OWN GEN_NOFRAME uint F_00bee570(void)
{
  GEN_ENTER(0xbee570u, 0u, 0u, 0u, 0u);
  return 0x110d16d;
}

/* ref: FUN_00bee580 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x80)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee5e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x20]));
  *param_1 = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = ((undefined4 *)GEN_TOP(param_1[0x20]));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      param_1[0x20] = 0;
    }
  }
  F_00b61c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bee640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a1e4c0(param_1,((char *)REFP(0x110d228)));
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee6e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf11 */
GEN_OWN GEN_NOFRAME uint F_00bee6f0(void)
{
  GEN_ENTER(0xbee6f0u, 0u, 0u, 0u, 0u);
  return 0x110d253;
}

/* ref: FUN_00bee700 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x80)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee760(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x20]));
  *param_1 = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = ((undefined4 *)GEN_TOP(param_1[0x20]));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      param_1[0x20] = 0;
    }
  }
  F_00b61c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bee7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_00bee7f0(void)
{
  GEN_ENTER(0xbee7f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a1e520(param_1,((char *)REFP(0x110d310)),0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bee890 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bee890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x80)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee8d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  uint * puVar2;
  
  if (*((int *)GEN_TOP((in_ecx + 0x80))) == 0) {
    puVar2 = (uint *)&REFG(undefined, 0x110d33a);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x80))) + 0x70)));
    puVar2 = ((uint *)GEN_TOP((iVar1 + 0x3c)));
    if (0xf < *((uint *)GEN_TOP((iVar1 + 0x50)))) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee8f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bee900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x20]));
  *param_1 = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = ((undefined4 *)GEN_TOP(param_1[0x20]));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      param_1[0x20] = 0;
    }
  }
  F_00b61c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bee970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bee970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbee970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 6 ^ *((byte *)GEN_TOP((in_ecx + 0x8f)))) & 0x40;
  *((byte *)GEN_TOP((in_ecx + 0x8f))) = *((byte *)GEN_TOP((in_ecx + 0x8f))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00bee990 */
GEN_OWN GEN_FRAME float10 F_00bee990(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbee990u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bee9b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bee9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbee9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bef000(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  *((undefined1 *)GEN_TOP(((int)this + 0xb0))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf47 */
GEN_OWN GEN_NOFRAME uint F_00beea10(void)
{
  GEN_ENTER(0xbeea10u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a64110(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
  uVar3 = F_00ae0d90(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
  if ((int)uVar2 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0xffffffff) {
    F_00a64860(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,0,uVar2);
    iVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(uVar2)];
    *(int *)(&REFG(undefined, 0x14c0928) + uVar2 * 4) = iVar1;
    if (iVar1 != 0) {
      *((byte *)GEN_TOP((iVar1 + 0x8f))) = *((byte *)GEN_TOP((iVar1 + 0x8f))) & 0xbf;
    }
  }
  return uVar2;
}

/* ref: FUN_00beea60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00beea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeea60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x80))) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *((int *)GEN_TOP(((int)this + 0x80))) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xffffffff;
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf36 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00beeaa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbeeaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xb0))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beeab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeeab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * this_00;
  
  F_00bef8a0(this GEN_EDX_FWD,param_1,0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG)));
    uVar1 = 0;
    if (this_00 != ((int *)GEN_TOP(0x0))) {
      F_00aaa5b0(this_00 GEN_EDX_ARG,1);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x24))))(this_00 GEN_EDX_ARG,8,0);
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf25 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00beeb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * this_00;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    bVar1 = F_00befb70((undefined *)this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG)));
    if (this_00 != ((int *)GEN_TOP(0x0))) {
      F_00aaa5b0(this_00 GEN_EDX_ARG,1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x24))))(this_00 GEN_EDX_ARG,8,0);
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00beeb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)(this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beeb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeeb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x64, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(float *)(this + 0x20) = *param_1;
  *(float *)(this + 0x24) = param_1[1];
  *(float *)(this + 0x28) = param_1[2];
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD)));
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this_00;
  uVar5 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined1 *)(gen_frame + 0x27)) = this[0xb0];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(float *)(gen_frame + 0x4)) = gen_bits2f(REFG(float, 0x110d434));
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined2 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)(gen_frame + 0x26)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 1;
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    fVar1 = *param_1;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar1 - (float10)*pfVar4);
    fVar2 = param_1[2];
    (*(float *)(gen_frame + 0x50)) = fVar2;
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar2 - (float10)pfVar4[2]);
    fVar6 = GEN_X87((float10)(float)((float10)fVar2 - (float10)pfVar4[2]));
    fVar7 = GEN_X87((float10)(float)((float10)fVar1 - (float10)*pfVar4));
    fVar3 = (float)(fVar7 * fVar7 + fVar6 * fVar6);
    (*(float *)(gen_frame + 0x48)) = fVar3;
    fVar3 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar3))));
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x4)) = fVar3;
    uVar5 = F_00a9f7c0((*(undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,fVar1,param_1[1],fVar2,GEN_ARGF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0xb0)))),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)))
    ;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf35 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: FUN_00beed40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00beed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeed40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (*((int *)GEN_TOP(((int)this + 0x80))) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *((int *)GEN_TOP(((int)this + 0x80))) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xffffffff;
  }
  F_00bef590(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf45 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beed90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeed90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf46 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beeda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbeeda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x88))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf26 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00beedb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeedb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x90)));
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf48 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00beedc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbeedc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x98))) = param_2;
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf32 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00beede0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeede0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beedf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbeedf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (param_1[0x20] != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + param_1[0x20] * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,param_1[0x20]);
    param_1[0x20] = 0xffffffff;
  }
  F_00bef590(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00beee50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beee50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeee50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beee80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeee80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a1e5a0(param_1,((char *)REFP(0x110d548)));
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00beeeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beeef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbeeef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbeef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf11 */
GEN_OWN GEN_NOFRAME uint F_00beef10(void)
{
  GEN_ENTER(0xbeef10u, 0u, 0u, 0u, 0u);
  return 0x110d576;
}

/* ref: FUN_00beef20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00beef20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x80)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beef60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beef70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00beef80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbeef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x20]));
  *param_1 = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = ((undefined4 *)GEN_TOP(param_1[0x20]));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      param_1[0x20] = 0;
    }
  }
  F_00b61c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00beefe0 */
GEN_OWN GEN_FRAME float10 F_00beefe0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbeefe0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bef000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (this[0x90] != (undefined1)0x0)) {
    return *((uint *)GEN_TOP((uVar1 + 0xec)));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbef0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbef0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbef0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf47 */
GEN_OWN GEN_NOFRAME uint F_00bef0d0(void)
{
  GEN_ENTER(0xbef0d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0xffffffff);
  return uVar1;
}

/* ref: FUN_00bef0e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x80)));
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,uVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xffffffff;
    *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)(this + 0x94);
  }
  uVar2 = F_00b62660((undefined *)this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbef130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x94))) = param_2;
  return param_2;
}

/* ref: FUN_00bef140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbef140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x84))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x90))) = 1;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf11 */
GEN_OWN GEN_NOFRAME uint F_00bef160(void)
{
  GEN_ENTER(0xbef160u, 0u, 0u, 0u, 0u);
  return 0x110d6b4;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf21 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bef170(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbef170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  *(char *)(param_1 + 0x1a) = param_2;
  if (((char)param_1[0x24] != '\0') &&
     (piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,5,0);
      *((byte *)GEN_TOP(((int)piVar1 + 0x8f))) = *((byte *)GEN_TOP(((int)piVar1 + 0x8f))) | 0x10;
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,5,0);
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf33 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bef1c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbef1c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_ecx;
  
  if ((char)param_1[0x24] != '\0') {
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD);
    if (in_ecx != 0) {
      F_00aa1a50(in_ecx GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf43 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x80);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,uVar1);
    *(undefined4 *)(this + 0x80) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x84)));
  if (uVar1 == 0xffffffff) {
    if (*((int *)GEN_TOP((in_ecx + 0x80))) != -1) {
      uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,*((int *)GEN_TOP((in_ecx + 0x80))));
      return uVar1;
    }
  }
  else if (uVar1 < 0x158) {
    return (&REFG(undefined4, 0x14a31f0))[(int)(uVar1)];
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x84);
  if (uVar1 == 0xffffffff) {
    if (*(int *)(this + 0x80) != -1) {
      this_00 = ((undefined *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,*(int *)(this + 0x80))));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar1 = F_00a5f290(this_00 GEN_EDX_ARG);
        return uVar1;
      }
    }
  }
  else if ((uVar1 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  int * this_00;
  uint uVar1;
  
  this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD)));
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00a9fa50(this_00 GEN_EDX_ARG,REFG(float, 0x1094834),REFG(float, 0x110d66c));
    uVar1 = F_00a5feb0(this_00 GEN_EDX_ARG);
    uVar1 = F_00b62a60((undefined *)this GEN_EDX_ARG,uVar1);
    return uVar1;
  }
  uVar1 = F_00b626d0((undefined *)this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1 + 4);
  puVar1 = param_1 + 8;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,puVar1);
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  *(undefined4 *)(this + 0x3c) = param_1[7];
  *(undefined4 *)(this + 0x40) = *puVar1;
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbef3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  uVar3 = (*pcVar1)(this);
  bVar2 = F_00b61df0(param_1,uVar3,param_2);
  if (bVar2 == 0) {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG)));
    *param_1 = *puVar4;
    param_1[1] = puVar4[1];
    param_1[2] = puVar4[2];
    param_1[4] = puVar4[4];
    param_1[5] = puVar4[5];
    param_1[6] = puVar4[6];
    param_1[7] = puVar4[7];
    param_1[8] = puVar4[8];
    param_1[9] = puVar4[9];
    param_1[10] = puVar4[10];
  }
  return (uint)param_1;
}

/* ref: FUN_00bef4c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bef4c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbef4c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x4c, 4);
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  undefined * PTR32 * PTR32 * pppuVar6;
  
  fVar4 = F_00aeb260(param_2);
  fVar5 = (float)fVar4;
  F_00a1e0f0(((undefined1 *)(gen_frame + 0x1c)),param_1 + 0xc);
  (*(float *)(gen_frame + 0x20)) = fVar5;
  F_00a1e0d0(&(*(int *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x1c)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d66c)));
  param_1[0xc] = (*(int *)(gen_frame + 0x2c));
  param_1[0xd] = (*(int *)(gen_frame + 0x30));
  param_1[0xe] = (*(int *)(gen_frame + 0x34));
  pppuVar6 = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0));
  param_1[0xf] = (*(int *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x4c)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(float *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  uVar3 = (*pcVar1)(param_1);
  uVar3 = F_00a9f850(uVar3 GEN_EDX_ARG,fVar5,pppuVar6);
  return uVar3;
}

/* ref: FUN_00bef590 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bef590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  if (*((int *)GEN_TOP(((int)this + 0x80))) != -1) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xffffffff;
    *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bef5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  if ((this[0x90] != (undefined1)0x0) &&
     (piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1],param_1[2]);
    iVar1 = piVar2[0x3b];
    if (iVar1 != 0) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = *param_1;
      *((undefined4 *)GEN_TOP((iVar1 + 0x34))) = param_1[1];
      *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = param_1[2];
      *((uint *)GEN_TOP((iVar1 + 0x24))) = *((uint *)GEN_TOP((iVar1 + 0x24))) | 2;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bef650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef650u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  float10 fVar6;
  volatile float fVar7;
  
  uVar3 = (*(uint *)&gen_args[0]);
  param_1[0xc] = *((int *)GEN_TOP((*(uint *)&gen_args[0])));
  param_1[0xd] = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
  uVar5 = *((uint *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
  param_1[0xe] = uVar5;
  param_1[0xf] = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0xc)));
  if ((char)param_1[0x24] != '\0') {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD)));
    uVar5 = 0;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      F_00a1e160(&(*(uint *)&gen_args[0]),uVar3);
      iVar1 = *piVar4;
      fVar6 = F_00aeb260(GEN_ARGF(gen_bits2f((*(uint *)&gen_args[0]))));
      fVar7 = (float)fVar6;
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x48))))(piVar4);
      uVar5 = piVar4[0x3b];
      if (uVar5 != 0) {
        *((undefined4 *)GEN_TOP((uVar5 + 0x40))) = *((undefined4 *)GEN_TOP(uVar3));
        *((undefined4 *)GEN_TOP((uVar5 + 0x44))) = *((undefined4 *)GEN_TOP((uVar3 + 4)));
        *((undefined4 *)GEN_TOP((uVar5 + 0x48))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
        uVar2 = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
        *((uint *)GEN_TOP((uVar5 + 0x24))) = *((uint *)GEN_TOP((uVar5 + 0x24))) | 2;
        *((undefined4 *)GEN_TOP((uVar5 + 0x4c))) = uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf6 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bef6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbef6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  float10 fVar5;
  
  *(float *)(this + 0x40) = *param_1;
  *(float *)(this + 0x44) = param_1[1];
  *(float *)(this + 0x48) = param_1[2];
  if (this[0x90] != (undefined1)0x0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))
                (piVar4 GEN_EDX_ARG,(undefined4)
                        gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(this + 0x98) * (float10)*param_1)))));
      iVar3 = piVar4[0x3b];
      if (iVar3 != 0) {
        fVar5 = (float10)*(float *)(this + 0x98);
        fVar1 = param_1[1];
        fVar2 = param_1[2];
        *((float *)GEN_TOP((iVar3 + 0x50))) = (float)(fVar5 * (float10)*param_1);
        *((float *)GEN_TOP((iVar3 + 0x54))) = (float)(fVar5 * (float10)fVar1);
        *((float *)GEN_TOP((iVar3 + 0x58))) = (float)(fVar5 * (float10)fVar2);
        *((uint *)GEN_TOP((iVar3 + 0x24))) = *((uint *)GEN_TOP((iVar3 + 0x24))) | 2;
      }
    }
  }
  return;
}

/* ref: FUN_00bef7a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bef7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  undefined4 local_8;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 0x71)));
  this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD)));
  if (cVar1 == '\b') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x7c))))(this_00 GEN_EDX_ARG);
    if ((char)uVar3 == '\0') {
      return 0;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  *((int *)GEN_TOP(((int)this + 0x98))) = this_00[0x2d];
  *(undefined1 *)(this_00 + 0x4d8) = 0;
  cVar1 = *((char *)GEN_TOP(((int)this + 0x68)));
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),cVar1);
  if ((*((byte *)GEN_TOP(((int)this_00 + 0x8f))) & 0x40) != 0) {
    *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xef;
    F_00aaa5b0(this_00 GEN_EDX_ARG,0);
  }
  iVar2 = this_00[0x3b];
  if (iVar2 != 0) {
    *((byte *)GEN_TOP((iVar2 + 100))) = cVar1 != '\0' | *((byte *)GEN_TOP((iVar2 + 100))) & 0xfe;
  }
  *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) | 2;
  F_00a9fa40(this_00 GEN_EDX_ARG,1);
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    F_00aa39d0(this_00 GEN_EDX_ARG,(uint)(*((int *)GEN_TOP(((int)this + 0x9c))) == 1));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,(int)this + 0x20);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,(int)this + 0x30);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,(int)this + 0x40);
  this_00[0x31] = 0;
  F_00a60de0(this_00 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,local_8);
  return 1;
}

/* ref: FUN_00bef8a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bef8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbef8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  char cVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * this_00;
  int * piVar5;
  int iVar6;
  int * local_c;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 0x71)));
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  if (((cVar1 == '\b') || (cVar1 == '\t')) && (param_1 == 0)) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
    }
  }
  else {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xbc)));
    *((int *)GEN_TOP(((int)this + 0x88))) = param_1;
    uVar4 = (*pcVar2)(this);
    *((uint *)GEN_TOP(((int)this + 0x80))) = uVar4;
    if (uVar4 != 0xffffffff) {
      this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG)));
      F_00a5f430(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
      F_00a5f450(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case '\b': ;
        bVar3 = F_00aaa870(this_00 GEN_EDX_ARG,param_1);
        if (bVar3 == 0) {
          *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
        }
        else {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x2c))))(this_00 GEN_EDX_ARG);
        }
        if (param_2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
          bVar3 = F_00bef7a0(this GEN_EDX_ARG);
          return bVar3;
        }
        break;
      case '\t': ;
        local_c = &REFG(undefined4, 0x14a9a1c);
        do {
          piVar5 = ((int *)GEN_TOP(*local_c));
          if (((piVar5 != ((int *)GEN_TOP(0x0))) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG), uVar4 == 2))
             && ((*((char *)GEN_TOP(((int)piVar5 + 0x2ecd))) == '\x02' && (piVar5[0x20] == param_1)))) {
            *(char *)(this_00 + 0xbbb) = (char)piVar5[0xbbb];
            *((undefined1 *)GEN_TOP(((int)this_00 + 0x2eed))) = *((undefined1 *)GEN_TOP(((int)piVar5 + 0x2eed)));
            *((undefined1 *)GEN_TOP(((int)this_00 + 0x2eee))) = *((undefined1 *)GEN_TOP(((int)piVar5 + 0x2eee)));
            *((undefined1 *)GEN_TOP(((int)this_00 + 0x2eef))) = *((undefined1 *)GEN_TOP(((int)piVar5 + 0x2eef)));
            break;
          }
          local_c = local_c + 1;
        } while ((int)local_c < 0x14a9bac);
        F_00aaa6d0(this_00 GEN_EDX_ARG,param_1,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x2c))))(this_00 GEN_EDX_ARG);
        if (param_2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
          bVar3 = F_00bef7a0(this GEN_EDX_ARG);
          return bVar3;
        }
        break;
      case '%': ;
      case 'I': ;
        if (param_2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x38))))(this_00 GEN_EDX_ARG,param_2);
        }
        if (cVar1 == '%') {
          F_00aa8ef0(this_00 GEN_EDX_ARG,REFG(int, 0x1379694));
          *(undefined1 *)(this_00 + 0x5a2) = *((undefined1 *)GEN_TOP((REFG(int, 0x1379694) + 0x1688)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x2c))))(this_00 GEN_EDX_ARG);
          bVar3 = F_00bef7a0(this GEN_EDX_ARG);
          return bVar3;
        }
        piVar5 = ((int *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0xa0))))));
        if (piVar5 == ((int *)GEN_TOP(0x0))) {
          iVar6 = -0x20000000;
        }
        else {
          iVar6 = *piVar5;
        }
        if ((iVar6 != -0x20000000) && (uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,iVar6), uVar4 != 0)) {
          F_00aa8ef0(this_00 GEN_EDX_ARG,uVar4);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x2c))))(this_00 GEN_EDX_ARG);
        bVar3 = F_00bef7a0(this GEN_EDX_ARG);
        return bVar3;
      case '&': ;
      case '.': ;
        if (param_2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x38))))(this_00 GEN_EDX_ARG,param_2);
        }
      }
      bVar3 = F_00bef7a0(this GEN_EDX_ARG);
      return bVar3;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf25 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00befb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbefb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[0x90] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bef7a0(this GEN_EDX_FWD);
  return bVar1 != 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf42 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00befb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbefb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00bef8a0(this GEN_EDX_FWD,param_1,0);
  return bVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf44 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00befbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbefbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00bef8a0(this GEN_EDX_FWD,*(undefined4 *)(this + 0x88),param_1);
  return bVar1;
}

/* ref: FUN_00befbd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00befbd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbefbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00befbe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00befbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbefbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 0x2eec + in_ecx)));
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00befc00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbefc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  if (param_1[0x20] != -1) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,param_1[0x20]);
    param_1[0x20] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  F_00b61c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00befcb0 */
GEN_OWN GEN_FRAME float10 F_00befcb0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbefcb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00befcd0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00befcd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbefcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  undefined4 * puVar1;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[4] = puVar1[4];
    param_1[5] = puVar1[5];
    param_1[6] = puVar1[6];
    param_1[7] = puVar1[7];
    param_1[8] = puVar1[8];
    param_1[9] = puVar1[9];
    param_1[10] = puVar1[10];
    return 1;
  }
  return 0;
}

/* ref: FUN_00befd60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00befd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbefd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this GEN_EDX_FWD);
  if (uVar1 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this GEN_EDX_ARG);
  }
  else {
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0xec)));
  }
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 200))) != 0)) {
    F_006b2f70(((undefined *)GEN_TOP((uVar1 + 0x90))) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00befda0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00befda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbefda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  undefined4 * puVar9;
  undefined * this_00;
  
  pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this GEN_EDX_FWD)));
  if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this GEN_EDX_ARG)));
    this_00 = pvVar7;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0xec)));
  }
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this_00 + 200))) != 0)) {
    bVar6 = F_00befcd0(&(*(float *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 4))),
                         (uint)*((ushort *)GEN_TOP(((int)this + 0xa6))));
    if (bVar6 == 0) {
      bVar6 = F_00befcd0(&(*(float *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 8))),
                           (uint)*((ushort *)GEN_TOP(((int)this + 0xa8))));
      if (bVar6 == 0) {
        return CONCAT31(extraout_var,bVar6);
      }
      iVar8 = (int)this + 0x70;
    }
    else {
      iVar8 = (int)this + 0x40;
    }
    F_006001e0(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG,iVar8);
    uVar4 = *((uint *)GEN_TOP(((int)this + 0xa0)));
    if ((uVar4 >> 1 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
    }
    if ((uVar4 >> 2 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = gen_bits2f((*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x74)) = gen_bits2f((*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x78)) = gen_bits2f((*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x60)) = gen_bits2f((*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x64)) = gen_bits2f((*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0));
      (*(undefined4 *)(gen_frame + 0x7c)) = (*(undefined4 *)(gen_frame + 0x1c));
      (*(float *)(gen_frame + 0x68)) = gen_bits2f((*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0));
      (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0x1c));
      puVar9 = ((undefined4 *)GEN_TOP(F_004f6d80(&(*(float *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x60)))));
      uVar5 = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x40)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x44)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x48)) = puVar9[2];
      (*(undefined4 *)(gen_frame + 0x4c)) = puVar9[3];
    }
    if ((uVar4 >> 3 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = (float)((float10)REFG(float, 0x1302c60) / (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)REFG(float, 0x1302c64) / (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)REFG(float, 0x1302c68) / (float10)(*(float *)(gen_frame + 0x28)));
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x50)) *
                     (float10)(float)((float10)REFG(float, 0x1302c60) / (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x60)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x54)) *
                     (float10)(float)((float10)REFG(float, 0x1302c64) / (float10)(*(float *)(gen_frame + 0x24))))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) *
                     (float10)(float)((float10)REFG(float, 0x1302c68) / (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x68)) = fVar3;
      (*(float *)(gen_frame + 0x50)) = fVar1;
      (*(float *)(gen_frame + 0x54)) = fVar2;
      (*(float *)(gen_frame + 0x58)) = fVar3;
    }
    pvVar7 = ((undefined *)GEN_TOP(F_006b13d0(this_00 GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x30)))));
  }
  return (uint)pvVar7;
}

/* ref: FUN_00beff80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00beff80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int * param_6, unsigned int gen_a6), GEN_P(undefined4 * param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xbeff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_FRAME_DECL(0xb0, 0);
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(int * PTR32 *)(gen_frame + 0x40)) = param_3;
  (*(int * PTR32 *)(gen_frame + 0x48)) = param_6;
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_3;
  *(int * PTR32 *)this = param_1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_7;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_4[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_4[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_4[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_4[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_4[8];
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_4[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_4[10];
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_7[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_7[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_7[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_7[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_7[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = param_7[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = param_7[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = param_7[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = param_7[10];
  *((undefined2 *)GEN_TOP(((int)this + 0xa4))) = (undefined2)param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_9;
  *((ushort *)GEN_TOP(((int)this + 0xa8))) = (ushort)param_8;
  *((ushort *)GEN_TOP(((int)this + 0xa6))) = (ushort)param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar1;
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x3c))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x48));
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar1;
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      return (uint)this;
    }
    if ((*(int * PTR32 *)(gen_frame + 0x40)) == ((int *)GEN_TOP(0x0))) {
      if ((*(int * PTR32 *)(gen_frame + 0x48)) == ((int *)GEN_TOP(0x0))) {
        return (uint)this;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
      if (uVar2 == 0) {
        return (uint)this;
      }
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x44)));
      uVar2 = (uint)(ushort)param_8;
      puVar6 = ((undefined1 *)(gen_frame + 0x50));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x34))))(piVar5 GEN_EDX_ARG);
      F_00bf0870((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar4,uVar2,puVar6);
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
    else {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      if (uVar2 == 0) {
        return (uint)this;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0))) {
        return (uint)this;
      }
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,param_4);
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x40));
      uVar4 = (uint)(ushort)param_5;
      puVar6 = ((undefined1 *)(gen_frame + 0x50));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      F_00bf0870((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar2,uVar4,puVar6);
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
  }
  else {
    F_00a9fa40(pvVar1 GEN_EDX_ARG,1);
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x48));
    if ((*(int * PTR32 *)(gen_frame + 0x40)) != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      if (uVar2 == 0) {
        return (uint)this;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0))) {
        return (uint)this;
      }
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,param_4);
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x40));
      (*(int * PTR32 *)(gen_frame + 0x48)) = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec)));
      puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar3;
      F_005fe8d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)));
      F_0069b460((undefined *)((*(int * PTR32 *)(gen_frame + 0x48)) + 0x24) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x48)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)),(uint)(ushort)param_5,((undefined1 *)(gen_frame + 0x0)));
      pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec)));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x34))))(piVar5 GEN_EDX_ARG)));
      goto LAB_00bf026a;
    }
    if ((*(int * PTR32 *)(gen_frame + 0x48)) == ((int *)GEN_TOP(0x0))) {
      return (uint)this;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
    if (uVar2 == 0) {
      return (uint)this;
    }
    F_0054fa20(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x44)));
    (*(int * PTR32 *)(gen_frame + 0x40)) = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec)));
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x34))))(piVar5 GEN_EDX_ARG)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar3;
    F_005fe8d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)));
    F_0069b460((undefined *)((*(int * PTR32 *)(gen_frame + 0x40)) + 0x24) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x40)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)),(uint)(ushort)param_8,((undefined1 *)(gen_frame + 0x0)));
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec)));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x34))))(piVar5 GEN_EDX_ARG)));
LAB_00bf026a: ;
  F_0068bd00(this_00 GEN_EDX_ARG,pvVar1);
  F_00befda0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00bf0290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbf0290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL(0xa0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float10 fVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(uint *)(gen_frame + 0x3c)) = param_3;
  puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this GEN_EDX_FWD)));
  *param_1 = *puVar9;
  param_1[1] = puVar9[1];
  param_1[2] = puVar9[2];
  param_1[4] = puVar9[4];
  param_1[5] = puVar9[5];
  param_1[6] = puVar9[6];
  param_1[7] = puVar9[7];
  param_1[8] = puVar9[8];
  param_1[9] = puVar9[9];
  param_1[10] = puVar9[10];
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0)));
  if ((uVar6 >> 1 & 1) != 0) {
    fVar1 = *param_2;
    fVar7 = param_2[5];
    (*(float *)(gen_frame + 0x14)) = param_2[9];
    (*(float *)(gen_frame + 0x18)) = param_2[10];
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    (*(float *)(gen_frame + 0x0)) = param_2[4];
    (*(float *)(gen_frame + 0x4)) = fVar7;
    (*(float *)(gen_frame + 0x10)) = param_2[8];
    (*(float *)(gen_frame + 0x8)) = param_2[6];
    (*(float *)(gen_frame + 0xc)) = param_2[7];
    if ((uVar6 >> 3 & 1) == 0) {
      (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c60);
      (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1302c64);
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1302c68);
    }
    fVar8 = (float10)0;
    (*(float *)(gen_frame + 0x70)) = (float)fVar8;
    ((float *)(gen_frame + 0x40))[0] = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x74)) = (float)fVar8;
    (*(float *)(gen_frame + 0x78)) = (float)fVar8;
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x18));
    F_004efe70(((float *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x70)) + (float10)fVar1);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x74)) + (float10)fVar2);
    (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x78)) + (float10)fVar3);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee670(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x3c)),(uint)((float *)(gen_frame + 0x40)))));
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    *param_1 = *puVar9;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0))) >> 2 & 1) != 0) {
    puVar9 = ((undefined4 *)GEN_TOP(F_004f6d80(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x3c)) + 0x10,(uint)(param_2 + 4))));
    param_1[4] = *puVar9;
    param_1[5] = puVar9[1];
    param_1[6] = puVar9[2];
    param_1[7] = puVar9[3];
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0))) >> 3 & 1) != 0) {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((*(uint *)(gen_frame + 0x3c)) + 0x20))) * (float10)param_2[8])));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)param_2[9] * (float10)*((float *)GEN_TOP(((*(uint *)(gen_frame + 0x3c)) + 0x24))))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)param_2[10] * (float10)*((float *)GEN_TOP(((*(uint *)(gen_frame + 0x3c)) + 0x28))))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    param_1[8] = (undefined4)gen_fl2bits(fVar1);
    param_1[9] = (undefined4)gen_fl2bits(fVar2);
    param_1[10] = (undefined4)gen_fl2bits(fVar3);
  }
  return (uint)param_1;
}

/* ref: FUN_00bf04f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf04f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf04f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x170, 0);
  float fVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this GEN_EDX_FWD);
  if (uVar4 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this GEN_EDX_ARG);
  }
  else {
    uVar4 = *((uint *)GEN_TOP((uVar4 + 0xec)));
  }
  if ((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 200))) != 0)) {
    uVar4 = F_00befda0(this GEN_EDX_ARG);
    return uVar4;
  }
  (*(float *)(gen_frame + 0x120)) = REFG(float, 0x1302df0);
  (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1302df4);
  (*(float *)(gen_frame + 0x134)) = REFG(float, 0x1302e04);
  (*(float *)(gen_frame + 0x130)) = REFG(float, 0x1302e00);
  (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1302df8);
  (*(float *)(gen_frame + 0x13c)) = REFG(float, 0x1302e0c);
  (*(float *)(gen_frame + 0x140)) = REFG(float, 0x1302e10);
  (*(float *)(gen_frame + 0x138)) = REFG(float, 0x1302e08);
  (*(float *)(gen_frame + 0x144)) = REFG(float, 0x1302e14);
  (*(float *)(gen_frame + 0x148)) = REFG(float, 0x1302e18);
  bVar3 = F_00befcd0(&(*(float *)(gen_frame + 0xc0)),*((undefined4 *)GEN_TOP(((int)this + 4))),(uint)*((ushort *)GEN_TOP(((int)this + 0xa6))))
  ;
  (*(byte *)(gen_frame + 0x15f)) = bVar3;
  bVar3 = F_00befcd0(((undefined1 *)(gen_frame + 0x60)),*((undefined4 *)GEN_TOP(((int)this + 8))),(uint)*((ushort *)GEN_TOP(((int)this + 0xa8))))
  ;
  if ((*(byte *)(gen_frame + 0x15f)) == 0) {
    if (bVar3 != 0) {
      uVar4 = F_00bf0290(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x60)),(int)this + 0x70);
      F_006001e0(&(*(float *)(gen_frame + 0x120)) GEN_EDX_ARG,uVar4);
      goto LAB_00bf0765;
    }
    (*(float *)(gen_frame + 0x120)) = REFG(float, 0x1302df0);
    (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1302df4);
    (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1302df8);
    (*(float *)(gen_frame + 0x140)) = REFG(float, 0x1302e10);
    (*(float *)(gen_frame + 0x130)) = REFG(float, 0x1302e00);
    (*(float *)(gen_frame + 0x144)) = REFG(float, 0x1302e14);
    (*(float *)(gen_frame + 0x134)) = REFG(float, 0x1302e04);
    (*(float *)(gen_frame + 0x138)) = REFG(float, 0x1302e08);
    (*(float *)(gen_frame + 0x13c)) = REFG(float, 0x1302e0c);
    fVar7 = REFG(float, 0x1302e18);
  }
  else {
    if (bVar3 == 0) {
      pfVar6 = ((float *)GEN_TOP(F_00bf0290(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x40)));
    }
    else {
      fVar7 = *((float *)GEN_TOP(((int)this + 0xac)));
      uVar9 = 0;
      (*(float *)(gen_frame + 0x11c)) = fVar7;
      fVar8 = (float)(float10)0;
      uVar4 = F_00bf0290(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x60)),(int)this + 0x70);
      uVar5 = F_00bf0290(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x40);
      pfVar6 = ((float *)GEN_TOP(F_00a1db10(((undefined1 *)(gen_frame + 0x90)),uVar5,uVar4,fVar7,fVar8,uVar9)));
    }
    (*(float *)(gen_frame + 0x120)) = *pfVar6;
    (*(float *)(gen_frame + 0x124)) = pfVar6[1];
    (*(float *)(gen_frame + 0x128)) = pfVar6[2];
    (*(float *)(gen_frame + 0x130)) = pfVar6[4];
    (*(float *)(gen_frame + 0x134)) = pfVar6[5];
    (*(float *)(gen_frame + 0x138)) = pfVar6[6];
    (*(float *)(gen_frame + 0x13c)) = pfVar6[7];
    (*(float *)(gen_frame + 0x140)) = pfVar6[8];
    (*(float *)(gen_frame + 0x144)) = pfVar6[9];
    fVar7 = pfVar6[10];
  }
  (*(float *)(gen_frame + 0x148)) = fVar7;
LAB_00bf0765: ;
  if (*((ushort *)GEN_TOP(((int)this + 0xa4))) != 0) {
    F_00befcd0(&(*(float *)(gen_frame + 0xc0)),*(undefined4 *)this,(uint)*((ushort *)GEN_TOP(((int)this + 0xa4))));
    pfVar6 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xc0)) - (float10)*pfVar6);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) - (float10)pfVar6[1]);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xc8)) - (float10)pfVar6[2]);
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x120)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc0)) - (float10)*pfVar6))));
    (*(float *)(gen_frame + 0x100)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x124)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) - (float10)pfVar6[1]))));
    (*(float *)(gen_frame + 0x104)) = fVar8;
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x128)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc8)) - (float10)pfVar6[2]))));
    (*(float *)(gen_frame + 0x108)) = fVar1;
    (*(float *)(gen_frame + 0x120)) = fVar7;
    (*(float *)(gen_frame + 0x124)) = fVar8;
    (*(float *)(gen_frame + 0x128)) = fVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))(*(int * PTR32 *)this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x120)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x34))))(*(int * PTR32 *)this GEN_EDX_ARG);
  if (uVar4 != 0) {
    *((float *)GEN_TOP((uVar4 + 0x30))) = (*(float *)(gen_frame + 0x120));
    *((float *)GEN_TOP((uVar4 + 0x34))) = (*(float *)(gen_frame + 0x124));
    *((float *)GEN_TOP((uVar4 + 0x38))) = (*(float *)(gen_frame + 0x128));
    *((float *)GEN_TOP((uVar4 + 0x40))) = (*(float *)(gen_frame + 0x130));
    *((float *)GEN_TOP((uVar4 + 0x44))) = (*(float *)(gen_frame + 0x134));
    *((float *)GEN_TOP((uVar4 + 0x48))) = (*(float *)(gen_frame + 0x138));
    *((float *)GEN_TOP((uVar4 + 0x4c))) = (*(float *)(gen_frame + 0x13c));
    *((float *)GEN_TOP((uVar4 + 0x50))) = (*(float *)(gen_frame + 0x140));
    *((float *)GEN_TOP((uVar4 + 0x54))) = (*(float *)(gen_frame + 0x144));
    *((float *)GEN_TOP((uVar4 + 0x58))) = (*(float *)(gen_frame + 0x148));
    *((uint *)GEN_TOP((uVar4 + 0x24))) = *((uint *)GEN_TOP((uVar4 + 0x24))) | 2;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xb0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x114))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this);
  }
  return uVar4;
}

/* ref: FUN_00bf0870 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf0870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbf0870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  
  F_005fe8d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3);
  bVar1 = F_0069b460(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG,this,param_1,param_2,((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: FUN_00bf08e0 */
GEN_OWN GEN_FRAME float10 F_00bf08e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbf08e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bf0900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf0900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bf0ba0(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  return uVar1;
}

/* ref: FUN_00bf0920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbf0920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[4];
  uVar1 = param_2[5];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return uVar1;
}

/* ref: FUN_00bf0960 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bf0960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbf0960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = F_00b767a0(param_1);
  return (byte)iVar1;
}

/* ref: FUN_00bf0980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bf0980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if (param_1 == param_2) {
    return 1;
  }
  iVar1 = F_00b767a0(param_1);
  if (((char)iVar1 != '\0') && (iVar1 = F_00b767a0(param_2), (char)iVar1 != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bf09c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bf09c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf09c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int CVar1;
  int iVar2;
  
  CVar1 = param_2[1];
  if (param_1[1] != CVar1) {
    iVar2 = F_00b767a0(param_1[1]);
    if ((char)iVar2 == '\0') {
      return 0;
    }
    iVar2 = F_00b767a0(CVar1);
    if ((char)iVar2 == '\0') {
      return 0;
    }
  }
  if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bf0a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0a20(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf0a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  uint in_ecx_00;
  int iVar1;
  
  iVar1 = 0x10;
  in_ecx_00 = in_ecx;
  do {
    F_00bf0ba0(in_ecx_00 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP((in_ecx_00 + 0x18))) = 0;
    in_ecx_00 = in_ecx_00 + 0x1c;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c0))) = 0;
  return in_ecx;
}

/* ref: FUN_00bf0a60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf0a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int CVar1;
  int * piVar2;
  byte bVar3;
  int iVar4;
  int * piVar5;
  
  piVar2 = param_1;
  bVar3 = 0;
  if (*param_1 != -0x20000000) {
    piVar5 = ((int *)GEN_TOP(((int)this + 8)));
    param_1 = ((int *)GEN_TOP(0x10));
    bVar3 = 0;
    do {
      CVar1 = piVar2[1];
      if ((((piVar5[-1] == CVar1) ||
           ((iVar4 = F_00b767a0(piVar5[-1]), (char)iVar4 != '\0' &&
            (iVar4 = F_00b767a0(CVar1), (char)iVar4 != '\0')))) && (piVar5[-2] == *piVar2)) &&
         ((*piVar5 == piVar2[2] && (piVar5[1] == piVar2[3])))) {
        bVar3 = 1;
      }
      piVar5 = piVar5 + 7;
      param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  return bVar3;
}

/* ref: FUN_00bf0ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP(0x10));
  puVar3 = ((undefined4 *)GEN_TOP(0x2));
  do {
    if ((((puVar5 < ((undefined4 *)GEN_TOP(0x10))) ||
         (puVar5 = ((undefined4 *)GEN_TOP(((int)puVar3 - 2U))),
         ((undefined4 *)GEN_TOP(((int)puVar3 - 2U))) < ((undefined4 *)GEN_TOP(0x10)))) ||
        (puVar5 = ((undefined4 *)GEN_TOP(((int)puVar3 - 1U))),
        ((undefined4 *)GEN_TOP(((int)puVar3 - 1U))) < ((undefined4 *)GEN_TOP(0x10)))) ||
       (puVar5 = puVar3, puVar3 < ((undefined4 *)GEN_TOP(0x10)))) goto LAB_00bf0b22;
    puVar5 = ((undefined4 *)GEN_TOP(((int)puVar3 + 1)));
    puVar4 = puVar3 + 1;
    uVar1 = (int)puVar3 + 2;
    puVar3 = puVar4;
  } while (uVar1 < 0x10);
  if (puVar5 < ((undefined4 *)GEN_TOP(0x10))) {
LAB_00bf0b22: ;
    *((int *)GEN_TOP(((int)this + 0x1c0))) = *((int *)GEN_TOP(((int)this + 0x1c0))) + 1;
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1c0)));
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)puVar5) * 0x1c)));
    *puVar4 = *param_1;
    puVar4[1] = param_1[1];
    puVar4[2] = param_1[2];
    puVar4[3] = param_1[3];
    puVar4[4] = param_1[4];
    puVar4[5] = param_1[5];
    puVar4[6] = uVar2;
  }
  return (uint)puVar4;
}

/* ref: FUN_00bf0b70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bf0b70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = 0x10;
  do {
    if (*in_ecx == param_2) {
      F_00bf0ba0(in_ecx GEN_EDX_FWD);
      in_ecx[6] = 0;
    }
    in_ecx = in_ecx + 7;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return;
}

/* ref: FUN_00bf0ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf0ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0xe0000000;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_00bf0bc0 */
GEN_OWN GEN_FRAME float10 F_00bf0bc0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbf0bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::Game::Object::Aetheryte::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a5f970((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined2 *)(this + 0x184) = 0;
  return 0;
}

/* ref: Client::Game::Object::Aetheryte::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x180);
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

/* ref: Client::Game::Object::Aetheryte::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf0c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a61d10((undefined *)this GEN_EDX_FWD);
  if (this[0x185] != (undefined1)0x0) {
    if (((&REFG(undefined1, 0x14b4ed0))[(int)(*(uint *)(this + 0x80) >> 3)] &
        (byte)(1 << ((byte)*(uint *)(this + 0x80) & 7))) != 0) {
      uVar1 = F_00a5f860(this GEN_EDX_ARG,0,0);
      return uVar1;
    }
    uVar1 = F_00a5f860(this GEN_EDX_ARG,1,0);
  }
  return uVar1;
}

/* ref: FUN_00bf0cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbf0cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  code * pcVar1;
  float10 fVar2;
  byte bVar3;
  uint uVar4;
  uint * puVar5;
  undefined * this_00;
  uint uVar6;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x80)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x8a))) = 5;
  (*pcVar1)(this);
  uVar4 = F_00ab2690(param_1);
  uVar6 = 0;
  if (uVar4 != 0) {
    fVar2 = (float10)0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))
              (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar2),(undefined4)gen_fl2bits((float)fVar2),
               (undefined4)gen_fl2bits((float)fVar2));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
    F_00a5f430(this GEN_EDX_ARG,param_3);
    *((undefined1 *)GEN_TOP(((int)this + 0x184))) = *((undefined1 *)GEN_TOP((uVar4 + 0x35)));
    *((undefined1 *)GEN_TOP(((int)this + 0x185))) = *((undefined1 *)GEN_TOP((uVar4 + 0x32)));
    puVar5 = ((uint *)GEN_TOP(F_00ab2690((uint)(*((char *)GEN_TOP((uVar4 + 0x35))) == '\0'))));
    F_00a5f8c0(this GEN_EDX_ARG,(*puVar5 & 0xffffff) + (int)puVar5);
    if (((param_4 != 0) && (*((int *)GEN_TOP(((int)this + 0x7c))) = param_4, REFG(char, 0x1379c96) == '\0')) &&
       (bVar3 = F_005d99c0(), bVar3 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG);
    }
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar6 = F_00718ff0(this_00 GEN_EDX_ARG,this,uVar4);
  }
  return uVar6;
}

/* ref: FUN_00bf0d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  return (uint)this;
}

/* ref: FUN_00bf0db0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bf0db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf0db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  F_00b61c10(this GEN_EDX_FWD);
  return;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf46 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bf0dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf0dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf0df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0x110dfdc;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf0e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xac)));
  this[0x68] = SUB41(param_1,0);
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xe0))))(piVar2 GEN_EDX_FWD,param_1);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 200))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf0e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf0e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xdc))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return (byte)this[0x68];
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf0e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf0eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))(this GEN_EDX_ARG)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x2a))) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x20)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x24)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x28)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x30)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x34)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x38)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c)));
      (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x40)));
      (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x44)));
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x48)));
      (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG);
      F_005db100(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xe4))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe8))))(piVar1 GEN_EDX_ARG,param_1);
    }
  }
  *(undefined4 *)(this + 0x20) = *puVar4;
  *(undefined4 *)(this + 0x24) = puVar4[1];
  *(undefined4 *)(this + 0x28) = puVar4[2];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf0fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf0fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe4))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))(this GEN_EDX_ARG)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x2a))) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x20)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x24)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x28)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x30)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x34)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x38)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c)));
      (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x40)));
      (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x44)));
      (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_1[3];
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x48)));
      (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG);
      F_005db100(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xec))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf0))))(piVar1 GEN_EDX_ARG,param_1);
    }
  }
  *(undefined4 *)(this + 0x30) = *puVar4;
  *(undefined4 *)(this + 0x34) = puVar4[1];
  *(undefined4 *)(this + 0x38) = puVar4[2];
  *(undefined4 *)(this + 0x3c) = puVar4[3];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf1120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xec))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x30);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))(this GEN_EDX_ARG)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x2a))) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x20)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x24)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x28)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x30)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x34)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x38)));
      (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c)));
      (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG);
      F_005db100(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xf4))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf8))))(piVar1 GEN_EDX_ARG,param_1);
    }
  }
  *(undefined4 *)(this + 0x40) = *puVar4;
  *(undefined4 *)(this + 0x44) = puVar4[1];
  *(undefined4 *)(this + 0x48) = puVar4[2];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbf1250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf4))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x40);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf1280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    *(undefined4 *)(this + 0x20) = *param_1;
    *(undefined4 *)(this + 0x24) = param_1[1];
    *(undefined4 *)(this + 0x28) = param_1[2];
    *(undefined4 *)(this + 0x30) = param_1[4];
    *(undefined4 *)(this + 0x34) = param_1[5];
    *(undefined4 *)(this + 0x38) = param_1[6];
    *(undefined4 *)(this + 0x3c) = param_1[7];
    *(undefined4 *)(this + 0x40) = param_1[8];
    *(undefined4 *)(this + 0x44) = param_1[9];
    *(undefined4 *)(this + 0x48) = param_1[10];
    return (uint)param_1;
  }
  if (*(int *)(this + 0x6c) == 8) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))(this GEN_EDX_ARG)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x2a))) * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG);
    F_005db100(this_00 GEN_EDX_ARG,param_1,uVar3);
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))(piVar1 GEN_EDX_ARG)));
    *(undefined4 *)(this + 0x20) = *puVar4;
    *(undefined4 *)(this + 0x24) = puVar4[1];
    *(undefined4 *)(this + 0x28) = puVar4[2];
    *(undefined4 *)(this + 0x30) = puVar4[4];
    *(undefined4 *)(this + 0x34) = puVar4[5];
    *(undefined4 *)(this + 0x38) = puVar4[6];
    *(undefined4 *)(this + 0x3c) = puVar4[7];
    *(undefined4 *)(this + 0x40) = puVar4[8];
    *(undefined4 *)(this + 0x44) = puVar4[9];
    *(undefined4 *)(this + 0x48) = puVar4[10];
    return (uint)puVar4;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x100))))(piVar1 GEN_EDX_ARG,param_1);
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  uVar3 = param_1[7];
  *(uint *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return uVar3;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf13b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf13b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x104))))(piVar3 GEN_EDX_ARG,param_1);
    return (uint)param_1;
  }
  fVar2 = *(float *)(this + 0x40);
  fVar1 = *(float *)(this + 0x48);
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  pfVar4 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = *(float *)(this + 0x44);
  if (!((float10)fVar2 < (float10)*(float *)(this + 0x44))) {
    pfVar4 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar4 < (float10)fVar1) {
    pfVar4 = ((float *)(gen_frame + 0x0)) + 2;
  }
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = *(undefined4 *)(this + 0x24);
  param_1[2] = *(undefined4 *)(this + 0x28);
  param_1[3] = (undefined4)gen_fl2bits(*pfVar4);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf38 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x108))))(piVar1 GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  float10 fVar2;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_FWD)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    fVar2 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x44);
    (*(float *)(gen_frame + 0x30)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x40);
    (*(float *)(gen_frame + 0x34)) = (float)fVar2;
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x48);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(this + 0x30));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x20) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_005feb80(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(float, 0x1302c60));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10c))))(piVar3 GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf1600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf1600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  F_00b61c10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollisionSphere */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf1640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00c246b0(in_ecx GEN_EDX_FWD,4);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0a4));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  *(undefined2 *)(in_ecx + 0x2c) = 0xffff;
  in_ecx[0x2d] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionSphere::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf1710(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbf1710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  code * pcVar1;
  byte bVar2;
  
  bVar2 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xb0) = (undefined2)param_4;
  *(undefined4 *)(param_1 + 0x80) = *param_5;
  *(undefined4 *)(param_1 + 0x84) = param_5[1];
  *(undefined4 *)(param_1 + 0x88) = param_5[2];
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x14)));
  *(float *)(param_1 + 0xb4) = param_6;
  (*pcVar1)(param_1);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::ResetToBone */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf1780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf1780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x100, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pCVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  puVar4 = ((undefined4 *)GEN_TOP(F_00623320(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,(uint)*(ushort *)(this + 0xb0))));
  puVar6 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x60)))));
  pCVar3 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  puVar6 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x80,((undefined4 *)(gen_frame + 0xa0)))));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x90) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x94) = uVar1;
  *(undefined4 *)(pCVar3 + 0x98) = uVar2;
  *(undefined4 *)(pCVar3 + 0xa0) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa0), REFG(float, 0x1375ac0));
  *(undefined4 *)(pCVar3 + 0xa4) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)(pCVar3 + 0xa8) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa8), REFG(float, 0x1375ac8));
  puVar4 = ((undefined4 *)(gen_frame + 0xa0));
  pCVar7 = pCVar3 + 0x30;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *(undefined4 *)pCVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(pCVar3 + 0x60) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x90);
  *(undefined4 *)(pCVar3 + 100) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x94);
  *(undefined4 *)(pCVar3 + 0x68) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x98);
  return (uint)(pCVar3 + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionSphere::UpdateFromBone */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf18b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf18b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined * pCVar10;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x10)),(uint)*(ushort *)(this + 0xb0));
  pfVar7 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x0)),this + 0x80,((undefined4 *)(gen_frame + 0x10)))));
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0x90))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) + (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 0x98))));
  fVar4 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x90))));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x4)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(this + 0x98))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  *(float *)(this + 0xa0) = fVar4;
  *(float *)(this + 0xa4) = fVar5;
  *(float *)(this + 0xa8) = fVar6;
  puVar9 = ((undefined4 *)(gen_frame + 0x10));
  pCVar10 = this + 0x30;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
    *(undefined4 *)pCVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pCVar10 = pCVar10 + 4;
  }
  *(float *)(this + 0x60) = fVar1;
  *(float *)(this + 100) = fVar2;
  *(float *)(this + 0x68) = fVar3;
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionSphere::GetDirectionTo */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf19d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbf19d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  fVar1 = *(float *)(this + 0x94);
  fVar2 = *(float *)(this + 0xa4);
  fVar3 = *(float *)(this + 0x98);
  fVar4 = *(float *)(this + 0xa8);
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_1 = ((float)GEN_TOF(((float10)*param_2 -
                    (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x90) +
                                    (float10)*(float *)(this + 0xa0)))))));
  param_1[1] = ((float)GEN_TOF(((float10)fVar5 - (float10)(float)((float10)fVar1 + (float10)fVar2))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar6 - (float10)(float)((float10)fVar3 + (float10)fVar4))));
  uVar7 = F_0046f390(param_1 GEN_EDX_FWD);
  return uVar7;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideParticle */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf1a60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbf1a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar7 = (float10)param_6;
  fVar1 = *((float *)GEN_TOP(((int)param_1 + 0xb4)));
  fVar2 = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xa0))))));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(byte *)(gen_frame + 0x5f)) = 0;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa4))) * fVar7)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xa8))))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x90))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x94))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x98))) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  fVar2 = (float)((float10)fVar4 - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar1 = (float)((float10)param_2[1] - (float10)fVar1);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar3 = (float)((float10)param_2[2] - (float10)fVar3);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x40)) = fVar2;
  (*(float *)(gen_frame + 0x44)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1) +
                    (float10)fVar3 * (float10)fVar3)));
  bVar6 = F_00c24d00(param_1 GEN_EDX_FWD,param_3,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
  if (bVar6 == 0) {
    (*(byte *)(gen_frame + 0x5f)) = 1;
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x38)) +
                   ((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x30))))));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar7 = (float10)fVar1;
    fVar1 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x4)));
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x8)) * fVar7);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar7 = (float10)fVar1;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x30)) - fVar7);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar8 = (float10)fVar2;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x34)) - fVar8);
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar9 = (float10)fVar3;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x38)) - fVar9);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar1 = (float)((float10)fVar1 - fVar7);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)((float10)fVar2 - fVar8);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = (float)((float10)fVar3 - fVar9);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = fVar2;
    (*(float *)(gen_frame + 0x48)) = fVar3;
  }
  fVar7 = (float10)(*(float *)(gen_frame + 0x54));
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      fVar8 = (float10)(*(float *)(gen_frame + 0x58));
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar8 - (float10)param_2[0x14]);
    fVar8 = GEN_X87((float10)(float)(fVar8 - (float10)param_2[0x14]));
    if (fVar8 * fVar8 < fVar7) {
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
  }
  else {
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)param_2[0x14] + fVar8);
    fVar8 = GEN_X87((float10)(float)((float10)param_2[0x14] + fVar8));
    if (fVar7 < fVar8 * fVar8) {
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
  }
  if ((*(byte *)(gen_frame + 0x5f)) == 0) {
    return 0;
  }
LAB_00bf1c39: ;
  if ((*(float *)(gen_frame + 0x54)) <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x40)) = 0.0;
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x48)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(GEN_X87(SQRT(fVar7))));
    fVar1 = (float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar7)))));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar7 = (float10)fVar1;
    (*(float *)(gen_frame + 0x40)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar7);
    (*(float *)(gen_frame + 0x48)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x48)));
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
  }
  fVar7 = (float10)(*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * fVar8);
  fVar9 = (float10)(*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar9 * fVar8);
  fVar10 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar10 * fVar8);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar8) + (float10)(*(float *)(gen_frame + 0x20)))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar8) + (float10)(*(float *)(gen_frame + 0x24)))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar8) + (float10)(*(float *)(gen_frame + 0x28)))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar1 = (float)((float10)fVar1 - (float10)*param_2);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_2[2]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = param_4[2];
  fVar8 = (float10)param_4[2];
  fVar1 = (float)(fVar8 * (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar8);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar8 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar1 = (float)((float10)*param_2 + (float10)fVar1);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  *param_2 = fVar1;
  fVar2 = (float)((float10)param_2[1] + (float10)fVar2);
  (*(float *)(gen_frame + 0x50)) = fVar2;
  param_2[1] = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)param_2[2]);
  (*(float *)(gen_frame + 0x50)) = fVar3;
  param_2[2] = fVar3;
  fVar4 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar4);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)param_2[5]);
  fVar3 = (float)((float10)fVar3 - (float10)param_2[6]);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar8 = GEN_X87((float10)(float)((float10)fVar2 - (float10)param_2[5]));
  fVar11 = GEN_X87((float10)(float)((float10)fVar1 - (float10)fVar4));
  fVar1 = ((float)GEN_TOF(((float10)fVar3 * fVar10 + (fVar11 * fVar7 + fVar8 * fVar9))));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar12 = (float10)fVar1;
  fVar2 = (float)(fVar12 * fVar7);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar4 = (float)(fVar12 * fVar9);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = (float)(fVar10 * fVar12);
  (*(float *)(gen_frame + 0x8)) = fVar5;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar2 = (float)(fVar11 - (float10)fVar2);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar4 = (float)(fVar8 - (float10)fVar4);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x50)) = (float)((float10)1 - (float10)*param_4);
  fVar7 = GEN_X87((float10)(float)((float10)1 - (float10)*param_4));
  fVar2 = (float)(fVar7 * (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar4 = (float)((float10)fVar4 * fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)fVar3 - (float10)fVar5))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  if ((param_3 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1375ac8);
  }
  fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = param_4[1];
  fVar7 = (float10)param_4[1];
  fVar1 = (float)(fVar7 * (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar7 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  param_2[8] = fVar1;
  param_2[9] = fVar2;
  param_2[10] = fVar3;
  return (*(byte *)(gen_frame + 0x5f));
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideLink */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf1e80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbf1e80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar15 = (float10)param_8;
  fVar1 = *param_3;
  fVar5 = ((float)GEN_TOF((fVar15 * (float10)*((float *)GEN_TOP((param_1 + 0xa0))))));
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  (*(float *)(gen_frame + 0x6c)) = gen_bits2f(param_1);
  fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xa4))) * fVar15)));
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar7 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar7 = (float)(fVar15 * (float10)fVar7);
  (*(float *)(gen_frame + 0x18)) = fVar7;
  (*(float *)(gen_frame + 0x4)) = param_3[1];
  fVar8 = *((float *)GEN_TOP((param_1 + 0x90)));
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar1 = (float)((float10)fVar8 + (float10)fVar5);
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x94))) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x24)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x98))) + (float10)fVar7)));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x7c)) = 0.0;
  F_00c262e0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x7c)));
  (*(float *)(gen_frame + 0x70)) = REFG(float, 0x1087f04);
  if (param_6 != '\0') {
    (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10ac168);
    pfVar14 = &(*(float *)(gen_frame + 0x7c));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x7c)))) {
      pfVar14 = &(*(float *)(gen_frame + 0x70));
    }
    (*(float *)(gen_frame + 0x70)) = (float)((float10)1 / (float10)*pfVar14);
  }
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x48)));
  if (param_6 == '\0') {
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
    (*(float *)(gen_frame + 0x74)) = 0.0;
    F_00c262e0(param_2 + 0x10,param_3 + 0x10,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x58));
    F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
    F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
    pfVar14 = &(*(float *)(gen_frame + 0x74));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0x74)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    fVar1 = ((float)GEN_TOF(-(float10)fVar1));
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar14 = &(*(float *)(gen_frame + 0x7c));
    }
    fVar1 = *pfVar14;
    fVar2 = *param_2;
    (*(float *)(gen_frame + 0x74)) = fVar2;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar15 = (float10)fVar2;
    fVar2 = (float)((float10)param_2[0x10] - fVar15);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar3 = param_2[1];
    (*(float *)(gen_frame + 0x74)) = fVar3;
    fVar16 = (float10)fVar3;
    fVar3 = (float)((float10)param_2[0x11] - fVar16);
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar4 = param_2[2];
    (*(float *)(gen_frame + 0x74)) = fVar4;
    fVar17 = (float10)fVar4;
    fVar4 = (float)((float10)param_2[0x12] - fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar4;
    fVar18 = (float10)fVar1;
    fVar1 = (float)(fVar18 * (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar3 * fVar18);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar4 * fVar18);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    *param_2 = (float)((float10)fVar1 + fVar15);
    param_2[1] = (float)((float10)fVar2 + fVar16);
    param_2[2] = (float)(fVar17 + (float10)fVar3);
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0x74)) = fVar1;
    fVar15 = (float10)fVar1;
    fVar1 = (float)((float10)param_3[0x10] - fVar15);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = param_3[1];
    (*(float *)(gen_frame + 0x74)) = fVar2;
    fVar16 = (float10)fVar2;
    fVar2 = (float)((float10)param_3[0x11] - fVar16);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = param_3[2];
    (*(float *)(gen_frame + 0x74)) = fVar3;
    fVar17 = (float10)fVar3;
    fVar3 = (float)((float10)param_3[0x12] - fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar1 = (float)((float10)fVar1 * fVar18);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar18);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar3 * fVar18);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    *param_3 = (float)((float10)fVar1 + fVar15);
    param_3[1] = (float)(fVar16 + (float10)fVar2);
    param_3[2] = (float)(fVar17 + (float10)fVar3);
  }
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x58)) +
                 ((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x50))))));
  (*(float *)(gen_frame + 0x74)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + 0xb4))) + (float10)param_4)));
  (*(float *)(gen_frame + 0x78)) = fVar2;
  fVar15 = (float10)fVar1;
  if (!(fVar15 < (float10)fVar2 * (float10)fVar2)) {
    return 0;
  }
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT(fVar15))));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  (*(float *)(gen_frame + 0x74)) = fVar1;
  fVar3 = (float)((float10)1 / (float10)fVar1);
  (*(float *)(gen_frame + 0x6c)) = fVar3;
  fVar15 = (float10)fVar3;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar15);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x58)));
  fVar3 = (float)((float10)1 - (float10)*param_5);
  (*(float *)(gen_frame + 0x6c)) = fVar3;
  fVar4 = param_3[8];
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = param_3[9];
  fVar5 = param_3[10];
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar16 = (float10)fVar4;
  fVar17 = GEN_X87((float10)(float)(fVar15 * (float10)(*(float *)(gen_frame + 0x50))));
  fVar18 = (float10)param_3[9];
  fVar19 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x54)) * fVar15));
  fVar15 = GEN_X87((float10)(float)(fVar15 * (float10)(*(float *)(gen_frame + 0x58))));
  fVar4 = ((float)GEN_TOF(((fVar17 * fVar16 + fVar19 * fVar18) + fVar15 * (float10)fVar5)));
  (*(float *)(gen_frame + 0x7c)) = fVar4;
  fVar20 = (float10)fVar4;
  fVar6 = (float)(fVar20 * fVar17);
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar7 = (float)(fVar19 * fVar20);
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar8 = (float)(fVar20 * fVar15);
  (*(float *)(gen_frame + 0x28)) = fVar8;
  (*(float *)(gen_frame + 0x40)) = fVar6;
  (*(float *)(gen_frame + 0x44)) = fVar7;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  fVar6 = (float)(fVar16 - (float10)fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar6;
  fVar7 = (float)(fVar18 - (float10)fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar7;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar5 - (float10)fVar8);
  fVar16 = (float10)fVar3;
  fVar3 = (float)(fVar16 * (float10)fVar6);
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar6 = (float)((float10)fVar7 * fVar16);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar8) * fVar16)));
  (*(float *)(gen_frame + 0x18)) = fVar5;
  if (fVar4 <= 0.0) {
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
  }
  fVar4 = param_5[1];
  (*(float *)(gen_frame + 0x6c)) = fVar4;
  (*(float *)(gen_frame + 0x7c)) = fVar4;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x24)) = fVar6;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar18 = (float10)fVar4;
  fVar3 = (float)(fVar18 * (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar6 = (float)((float10)fVar6 * fVar18);
  (*(float *)(gen_frame + 0x4)) = fVar6;
  fVar5 = (float)(fVar18 * (float10)fVar5);
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar1 = ((float)GEN_TOF(((((float10)fVar2 - (float10)fVar1) * (float10)param_5[2]) * (float10)(*(float *)(gen_frame + 0x70)))));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  fVar18 = (float10)fVar1;
  fVar1 = (float)(fVar18 * fVar17);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar7 = (float)(fVar18 * fVar15);
  (*(float *)(gen_frame + 0x58)) = fVar7;
  if (param_6 == '\0') {
    fVar8 = param_2[8];
    (*(float *)(gen_frame + 0x30)) = fVar8;
    fVar9 = param_2[9];
    (*(float *)(gen_frame + 0x34)) = fVar9;
    fVar10 = param_2[10];
    (*(float *)(gen_frame + 0x38)) = fVar10;
    fVar18 = (float10)fVar8;
    fVar8 = ((float)GEN_TOF(((float10)fVar10 * fVar15 + ((float10)fVar9 * fVar19 + fVar18 * fVar17))));
    (*(float *)(gen_frame + 0x70)) = fVar8;
    fVar20 = (float10)fVar8;
    fVar11 = (float)(fVar20 * fVar17);
    (*(float *)(gen_frame + 0x10)) = fVar11;
    fVar12 = (float)(fVar20 * fVar19);
    (*(float *)(gen_frame + 0x14)) = fVar12;
    fVar13 = (float)(fVar15 * fVar20);
    (*(float *)(gen_frame + 0x18)) = fVar13;
    (*(float *)(gen_frame + 0x40)) = fVar11;
    (*(float *)(gen_frame + 0x44)) = fVar12;
    (*(float *)(gen_frame + 0x48)) = fVar13;
    fVar11 = (float)(fVar18 - (float10)fVar11);
    (*(float *)(gen_frame + 0x10)) = fVar11;
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar9 - (float10)fVar12);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar10 - (float10)fVar13);
    fVar11 = (float)((float10)fVar11 * fVar16);
    (*(float *)(gen_frame + 0x20)) = fVar11;
    fVar9 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 - (float10)fVar12) * fVar16)));
    (*(float *)(gen_frame + 0x24)) = fVar9;
    fVar10 = ((float)GEN_TOF((fVar16 * (float10)(float)((float10)fVar10 - (float10)fVar13))));
    (*(float *)(gen_frame + 0x28)) = fVar10;
    if (fVar8 <= 0.0) {
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
    }
    fVar8 = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x10)) = fVar8;
    fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x14)) = fVar9;
    fVar10 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x18)) = fVar10;
    (*(float *)(gen_frame + 0x6c)) = fVar4;
    fVar15 = (float10)fVar4;
    fVar4 = (float)(fVar15 * (float10)fVar8);
    (*(float *)(gen_frame + 0x20)) = fVar4;
    fVar8 = (float)((float10)fVar9 * fVar15);
    (*(float *)(gen_frame + 0x24)) = fVar8;
    fVar9 = (float)(fVar15 * (float10)fVar10);
    (*(float *)(gen_frame + 0x28)) = fVar9;
    *param_2 = (float)((float10)fVar1 + (float10)*param_2);
    param_2[1] = (float)((float10)param_2[1] + (float10)fVar2);
    param_2[2] = (float)((float10)fVar7 + (float10)param_2[2]);
    param_2[8] = fVar4;
    param_2[9] = fVar8;
    param_2[10] = fVar9;
  }
  *param_3 = (float)((float10)*param_3 + (float10)fVar1);
  param_3[1] = (float)((float10)param_3[1] + (float10)fVar2);
  param_3[2] = (float)((float10)fVar7 + (float10)param_3[2]);
  param_3[8] = fVar3;
  param_3[9] = fVar6;
  param_3[10] = fVar5;
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideParticleSwept */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf24b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xbf24b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0xa0)));
  fVar12 = (float10)*((float *)GEN_TOP((param_1 + 0xa0)));
  fVar13 = (float10)param_4;
  fVar1 = (float)(fVar13 * fVar12);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0xa4)));
  fVar14 = (float10)*((float *)GEN_TOP((param_1 + 0xa4)));
  fVar2 = (float)(fVar14 * fVar13);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0xa8)));
  fVar15 = (float10)*((float *)GEN_TOP((param_1 + 0xa8)));
  fVar3 = (float)(fVar15 * fVar13);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0x90)));
  fVar13 = (float10)*((float *)GEN_TOP((param_1 + 0x90)));
  fVar4 = (float)(fVar13 + (float10)fVar1);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0x94)));
  fVar16 = (float10)*((float *)GEN_TOP((param_1 + 0x94)));
  fVar5 = (float)(fVar16 + (float10)fVar2);
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x64)) = *((float *)GEN_TOP((param_1 + 0x98)));
  fVar17 = (float10)*((float *)GEN_TOP((param_1 + 0x98)));
  fVar6 = (float)(fVar17 + (float10)fVar3);
  (*(float *)(gen_frame + 0x28)) = fVar6;
  fVar18 = (float10)param_5;
  fVar1 = (float)(fVar18 * fVar12);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)(fVar18 * fVar14);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)(fVar15 * fVar18);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar7 = (float)((float10)fVar1 + fVar13);
  (*(float *)(gen_frame + 0x10)) = fVar7;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  fVar8 = (float)(fVar16 + (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = fVar8;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  fVar1 = param_2[4];
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = param_2[5];
  fVar9 = (float)(fVar17 + (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar9;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar3 = param_2[6];
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar4 = (float)((float10)fVar7 - (float10)fVar4);
  (*(float *)(gen_frame + 0x40)) = fVar4;
  fVar5 = (float)((float10)fVar8 - (float10)fVar5);
  (*(float *)(gen_frame + 0x44)) = fVar5;
  fVar6 = (float)((float10)fVar9 - (float10)fVar6);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x30)) = fVar4;
  (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = fVar5;
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar1 = (float)((float10)*param_2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)param_2[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)((float10)param_2[2] - (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xb4))) + (float10)param_2[0x14])));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  bVar11 = F_00c246f0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x40)),fVar1,&(*(float *)(gen_frame + 0x68)));
  if (bVar11 != 0) {
    fVar12 = (float10)(*(float *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x10)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar12);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar12);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x30))) + (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar12) + (float10)(*(float *)(gen_frame + 0x4)))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar12) + (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar12);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar12);
    (*(float *)(gen_frame + 0x8)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x48)));
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x40)) * fVar12) + (float10)(*(float *)(gen_frame + 0x50)))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar12) + (float10)(*(float *)(gen_frame + 0x54)))));
    (*(float *)(gen_frame + 0x14)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x48))) + (float10)(*(float *)(gen_frame + 0x58)))));
    (*(float *)(gen_frame + 0x18)) = fVar6;
    fVar1 = (float)((float10)fVar4 - (float10)fVar1);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)fVar5 - (float10)fVar2);
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = (float)((float10)fVar6 - (float10)fVar3);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
    fVar12 = (float10)(*(float *)(gen_frame + 0x20));
    fVar13 = (float10)(*(float *)(gen_frame + 0x40));
    fVar14 = (float10)(*(float *)(gen_frame + 0x24));
    fVar15 = (float10)(*(float *)(gen_frame + 0x44));
    fVar16 = (float10)(*(float *)(gen_frame + 0x48));
    fVar1 = ((float)GEN_TOF(((fVar13 * fVar12 + fVar15 * fVar14) + fVar16 * (float10)(*(float *)(gen_frame + 0x28)))));
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    fVar17 = (float10)fVar1;
    fVar2 = (float)(fVar17 * fVar12);
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar3 = (float)(fVar14 * fVar17);
    (*(float *)(gen_frame + 0x44)) = fVar3;
    fVar4 = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x48)) = fVar4;
    (*(float *)(gen_frame + 0x50)) = fVar2;
    (*(float *)(gen_frame + 0x54)) = fVar3;
    (*(float *)(gen_frame + 0x58)) = fVar4;
    (*(float *)(gen_frame + 0x0)) = (float)(fVar13 - (float10)fVar2);
    fVar3 = (float)(fVar15 - (float10)fVar3);
    (*(float *)(gen_frame + 0x4)) = fVar3;
    fVar4 = (float)(fVar16 - (float10)fVar4);
    (*(float *)(gen_frame + 0x8)) = fVar4;
    fVar5 = (float)((float10)(*(float *)(gen_frame + 0x30)) - fVar13);
    (*(float *)(gen_frame + 0x40)) = fVar5;
    fVar6 = (float)((float10)(*(float *)(gen_frame + 0x34)) - fVar15);
    (*(float *)(gen_frame + 0x44)) = fVar6;
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x38)) - fVar16);
    (*(float *)(gen_frame + 0x48)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)fVar7 * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)fVar6 * fVar14 + (float10)fVar5 * fVar12))));
    (*(float *)(gen_frame + 0x64)) = fVar8;
    fVar17 = (float10)fVar8;
    fVar8 = (float)(fVar17 * fVar12);
    (*(float *)(gen_frame + 0x30)) = fVar8;
    fVar9 = (float)(fVar17 * fVar14);
    (*(float *)(gen_frame + 0x34)) = fVar9;
    fVar10 = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar17);
    (*(float *)(gen_frame + 0x38)) = fVar10;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar5 - (float10)fVar8);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar6 - (float10)fVar9);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar7 - (float10)fVar10);
    fVar12 = GEN_X87((float10)(float)(fVar13 - (float10)fVar2));
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar8) - fVar12)));
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar9) - (float10)fVar3)));
    (*(float *)(gen_frame + 0x44)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar10) - (float10)fVar4)));
    (*(float *)(gen_frame + 0x48)) = fVar6;
    (*(float *)(gen_frame + 0x64)) = *param_3;
    fVar14 = (float10)*param_3;
    fVar2 = (float)(fVar14 * (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar5 = (float)((float10)fVar5 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar5;
    fVar6 = (float)(fVar14 * (float10)fVar6);
    (*(float *)(gen_frame + 0x28)) = fVar6;
    fVar2 = (float)(fVar12 + (float10)fVar2);
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar3 = (float)((float10)fVar5 + (float10)fVar3);
    (*(float *)(gen_frame + 0x44)) = fVar3;
    fVar4 = (float)((float10)fVar6 + (float10)fVar4);
    (*(float *)(gen_frame + 0x48)) = fVar4;
    if (fVar1 <= 0.0) {
      (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
      (*(float *)(gen_frame + 0x6c)) = 0.0;
    }
    if ((float10)(*(float *)(gen_frame + 0x6c)) < fVar17) {
      (*(float *)(gen_frame + 0x50)) = fVar8;
      (*(float *)(gen_frame + 0x54)) = fVar9;
      (*(float *)(gen_frame + 0x58)) = fVar10;
    }
    fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x64)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x68)));
    fVar12 = (float10)fVar1;
    fVar14 = GEN_X87((float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x68))));
    fVar1 = (float)(fVar14 * fVar12);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar17 = (float10)fVar2;
    fVar2 = (float)(fVar17 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar3 * fVar14);
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar14) + (float10)(*(float *)(gen_frame + 0x18)))));
    (*(float *)(gen_frame + 0x38)) = fVar4;
    fVar5 = *param_2;
    (*(float *)(gen_frame + 0x68)) = fVar5;
    fVar1 = (float)((float10)fVar1 - (float10)fVar5);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar6 = param_2[1];
    (*(float *)(gen_frame + 0x6c)) = fVar6;
    fVar2 = (float)((float10)fVar2 - (float10)fVar6);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar7 = param_2[2];
    (*(float *)(gen_frame + 0x64)) = fVar7;
    fVar4 = (float)((float10)fVar4 - (float10)fVar7);
    (*(float *)(gen_frame + 0x18)) = fVar4;
    (*(float *)(gen_frame + 0x60)) = param_3[2];
    fVar14 = (float10)param_3[2];
    fVar1 = (float)(fVar14 * (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar4 = (float)(fVar14 * (float10)fVar4);
    (*(float *)(gen_frame + 0x28)) = fVar4;
    *param_2 = (float)((float10)fVar5 + (float10)fVar1);
    param_2[1] = (float)((float10)fVar2 + (float10)fVar6);
    param_2[2] = (float)((float10)fVar4 + (float10)fVar7);
    fVar1 = (float)(fVar12 - fVar13);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)(fVar17 - fVar15);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 - fVar16);
    param_2[8] = (float)((float10)param_2[8] + (float10)fVar1);
    param_2[9] = (float)((float10)fVar2 + (float10)param_2[9]);
    param_2[10] = ((float)GEN_TOF(((float10)param_2[10] + (float10)(float)((float10)fVar3 - fVar16))));
    (*(float *)(gen_frame + 0x60)) = param_3[1];
    fVar12 = (float10)param_3[1];
    param_2[8] = (float)(fVar12 * (float10)param_2[8]);
    param_2[9] = (float)(fVar12 * (float10)param_2[9]);
    param_2[10] = (float)(fVar12 * (float10)param_2[10]);
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideLinkSwept */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf29d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbf29d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  float * pfVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar4 = *((float *)GEN_TOP((param_1 + 0xa0)));
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  fVar20 = (float10)fVar4;
  fVar4 = param_2[5];
  (*(float *)(gen_frame + 0xa4)) = fVar4;
  fVar21 = (float10)param_7;
  fVar1 = param_2[6];
  (*(float *)(gen_frame + 0xa8)) = fVar1;
  fVar2 = param_3[4];
  fVar5 = (float)(fVar21 * fVar20);
  (*(float *)(gen_frame + 0xd0)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar6 = *((float *)GEN_TOP((param_1 + 0xa4)));
  fVar3 = param_3[5];
  (*(float *)(gen_frame + 0xe8)) = fVar6;
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar22 = (float10)fVar6;
  fVar6 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0xd4)) = fVar6;
  fVar7 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0xe8)) = fVar7;
  fVar23 = (float10)fVar7;
  fVar7 = (float)(fVar23 * fVar21);
  (*(float *)(gen_frame + 0xd8)) = fVar7;
  fVar8 = *((float *)GEN_TOP((param_1 + 0x90)));
  (*(float *)(gen_frame + 0xe8)) = fVar8;
  fVar21 = (float10)fVar8;
  fVar8 = (float)(fVar21 + (float10)fVar5);
  (*(float *)(gen_frame + 0x80)) = fVar8;
  fVar5 = *((float *)GEN_TOP((param_1 + 0x94)));
  (*(float *)(gen_frame + 0xe8)) = fVar5;
  fVar24 = (float10)fVar5;
  fVar6 = (float)(fVar24 + (float10)fVar6);
  (*(float *)(gen_frame + 0x84)) = fVar6;
  fVar5 = *((float *)GEN_TOP((param_1 + 0x98)));
  (*(float *)(gen_frame + 0xe8)) = fVar5;
  fVar25 = (float10)fVar5;
  fVar7 = (float)(fVar25 + (float10)fVar7);
  (*(float *)(gen_frame + 0x88)) = fVar7;
  fVar26 = (float10)param_8;
  fVar5 = (float)(fVar26 * fVar20);
  (*(float *)(gen_frame + 0xd0)) = fVar5;
  fVar9 = (float)(fVar26 * fVar22);
  (*(float *)(gen_frame + 0xd4)) = fVar9;
  fVar10 = (float)(fVar23 * fVar26);
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  fVar11 = (float)((float10)fVar5 + fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar11;
  fVar9 = (float)(fVar24 + (float10)fVar9);
  (*(float *)(gen_frame + 0x74)) = fVar9;
  fVar10 = (float)(fVar25 + (float10)fVar10);
  (*(float *)(gen_frame + 0x78)) = fVar10;
  fVar12 = param_2[4];
  (*(float *)(gen_frame + 0xa0)) = fVar12;
  fVar5 = param_3[6];
  (*(float *)(gen_frame + 0x68)) = fVar5;
  fVar12 = (float)((float10)*param_2 - (float10)fVar12);
  (*(float *)(gen_frame + 0xd0)) = fVar12;
  fVar13 = param_2[1];
  (*(float *)(gen_frame + 0x30)) = fVar8;
  fVar4 = (float)((float10)fVar13 - (float10)fVar4);
  (*(float *)(gen_frame + 0xd4)) = fVar4;
  (*(float *)(gen_frame + 0x34)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  fVar1 = (float)((float10)param_2[2] - (float10)fVar1);
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x20)) = fVar12;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar4 = (float)((float10)*param_3 - (float10)fVar2);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)param_3[1] - (float10)fVar3);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)((float10)param_3[2] - (float10)fVar5);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar4 = (float)((float10)fVar11 - (float10)fVar8);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar9 - (float10)fVar6);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)((float10)fVar10 - (float10)fVar7);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xb4))) + (float10)param_4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  bVar17 = F_00c26b40(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),fVar4,
                        &(*(float *)(gen_frame + 0x48)));
  if (bVar17 == 0) {
    return 0;
  }
  fVar4 = *param_2;
  fVar20 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar20);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x20))) + (float10)(*(float *)(gen_frame + 0xa0)))));
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar20) + (float10)(*(float *)(gen_frame + 0xa4)))));
  (*(float *)(gen_frame + 0xb4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20) + (float10)(*(float *)(gen_frame + 0xa8)))));
  (*(float *)(gen_frame + 0xb8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar3;
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar20);
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar20);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar20);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) * fVar20) + (float10)(*(float *)(gen_frame + 0x60)))));
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar20) + (float10)(*(float *)(gen_frame + 0x64)))));
  (*(float *)(gen_frame + 0xb4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x18)) * fVar20) + (float10)(*(float *)(gen_frame + 0x68)))));
  (*(float *)(gen_frame + 0xb8)) = fVar3;
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  (*(float *)(gen_frame + 0xd8)) = fVar3;
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar20);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar20);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0xb0)) = fVar4;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) * fVar20) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  (*(float *)(gen_frame + 0xb4)) = param_2[1];
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar20) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  (*(float *)(gen_frame + 0xb8)) = param_2[2];
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  (*(float *)(gen_frame + 0x80)) = fVar4;
  (*(float *)(gen_frame + 0x84)) = fVar1;
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(float *)(gen_frame + 0xec)) = 0.0;
  F_00c262e0(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xd0)),&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xec)));
  (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x1087f04);
  if (param_6 != '\0') {
    (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x10ac168);
    pfVar18 = &(*(float *)(gen_frame + 0xec));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0xec)))) {
      pfVar18 = &(*(float *)(gen_frame + 0xe8));
    }
    (*(float *)(gen_frame + 0xe8)) = (float)((float10)1 / (float10)*pfVar18);
  }
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x84)));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x88)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  (*(float *)(gen_frame + 0xa0)) = fVar4;
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  (*(float *)(gen_frame + 0xa8)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar4 * (float10)fVar4))));
  (*(float *)(gen_frame + 0xec)) = fVar4;
  fVar4 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar4))));
  (*(float *)(gen_frame + 0xec)) = fVar4;
  bVar19 = GEN_ISNAN((float10)fVar4) || GEN_ISNAN((float10)0);
  if (bVar19 != (bVar19 || (float10)fVar4 == (float10)0)) {
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xa8)) = 0.0;
  }
  fVar4 = *param_5;
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  (*(float *)(gen_frame + 0x9c)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0xec)));
  fVar21 = (float10)(*(float *)(gen_frame + 0xa0));
  fVar22 = GEN_X87((float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0xec))));
  (*(float *)(gen_frame + 0xa0)) = (float)(fVar22 * fVar21);
  fVar23 = (float10)(*(float *)(gen_frame + 0xa4));
  (*(float *)(gen_frame + 0xa4)) = (float)(fVar23 * fVar22);
  fVar20 = (float10)(*(float *)(gen_frame + 0xa8));
  (*(float *)(gen_frame + 0xa8)) = (float)(fVar22 * fVar20);
  fVar21 = GEN_X87((float10)(float)(fVar22 * fVar21));
  fVar23 = GEN_X87((float10)(float)(fVar23 * fVar22));
  fVar20 = GEN_X87((float10)(float)(fVar22 * fVar20));
  fVar1 = ((float)GEN_TOF((fVar20 * (float10)(*(float *)(gen_frame + 0x18)) +
                 ((float10)(*(float *)(gen_frame + 0x10)) * fVar21 + (float10)(*(float *)(gen_frame + 0x14)) * fVar23))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  fVar22 = (float10)fVar1;
  fVar2 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar3 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar5 = (float)(fVar20 * fVar22);
  (*(float *)(gen_frame + 0x68)) = fVar5;
  (*(float *)(gen_frame + 0xa0)) = fVar2;
  (*(float *)(gen_frame + 0xa4)) = fVar3;
  (*(float *)(gen_frame + 0xa8)) = fVar5;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar2);
  (*(float *)(gen_frame + 0xb0)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar3);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)fVar5);
  (*(float *)(gen_frame + 0xb8)) = fVar5;
  if (fVar1 <= 0.0) {
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    fVar22 = (float10)0.0;
    (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x80)));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x84)));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x88)));
  (*(float *)(gen_frame + 0x68)) = fVar6;
  fVar24 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x80))));
  fVar7 = ((float)GEN_TOF(((float10)fVar6 * fVar20 + ((float10)fVar1 * fVar23 + fVar24 * fVar21))));
  (*(float *)(gen_frame + 0x9c)) = fVar7;
  fVar25 = (float10)fVar7;
  fVar8 = (float)(fVar25 * fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar8;
  fVar9 = (float)(fVar23 * fVar25);
  (*(float *)(gen_frame + 0x74)) = fVar9;
  fVar10 = (float)(fVar20 * fVar25);
  (*(float *)(gen_frame + 0x78)) = fVar10;
  fVar11 = (float)(fVar24 - (float10)fVar8);
  (*(float *)(gen_frame + 0x80)) = fVar11;
  fVar1 = (float)((float10)fVar1 - (float10)fVar9);
  (*(float *)(gen_frame + 0x84)) = fVar1;
  fVar6 = (float)((float10)fVar6 - (float10)fVar10);
  (*(float *)(gen_frame + 0x88)) = fVar6;
  if (fVar22 < fVar25) {
    (*(float *)(gen_frame + 0xa0)) = fVar8;
    (*(float *)(gen_frame + 0xa4)) = fVar9;
    (*(float *)(gen_frame + 0xa8)) = fVar10;
  }
  pfVar18 = &(*(float *)(gen_frame + 0x4c));
  fVar22 = (float10)fVar2;
  fVar2 = (float)((float10)fVar11 - fVar22);
  (*(float *)(gen_frame + 0xf0)) = fVar2;
  fVar24 = (float10)fVar3;
  fVar3 = (float)((float10)fVar1 - fVar24);
  (*(float *)(gen_frame + 0xf4)) = fVar3;
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar6 - (float10)fVar5);
  fVar25 = (float10)fVar4;
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  fVar4 = (float)(fVar25 * (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar2 = (float)((float10)fVar3 * fVar25);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar5) * fVar25)));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar4 = (float)((float10)fVar4 + fVar22);
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar2 = (float)(fVar24 + (float10)fVar2);
  (*(float *)(gen_frame + 0xf4)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)fVar5);
  (*(float *)(gen_frame + 0xf8)) = fVar3;
  fVar4 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xa0)));
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0xa4)));
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xa8)));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar22 = (float10)(*(float *)(gen_frame + 0x4c));
  (*(float *)(gen_frame + 0x4c)) = (float)(fVar22 - (float10)(*(float *)(gen_frame + 0xec)));
  if (!((float10)0 < (float10)(float)(fVar22 - (float10)(*(float *)(gen_frame + 0xec))))) {
    pfVar18 = &(*(float *)(gen_frame + 0xcc));
  }
  fVar5 = ((float)GEN_TOF((((float10)param_5[2] * (float10)*pfVar18) * (float10)(*(float *)(gen_frame + 0xe8)))));
  (*(float *)(gen_frame + 0xcc)) = fVar5;
  fVar22 = (float10)fVar5;
  fVar5 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar12 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x74)) = fVar12;
  (*(float *)(gen_frame + 0x78)) = (float)(fVar22 * fVar20);
  fVar22 = GEN_X87((float10)(float)(fVar22 * fVar20));
  if (param_6 == '\0') {
    fVar13 = ((float)GEN_TOF((fVar20 * (float10)(*(float *)(gen_frame + 0x28)) +
                    (fVar23 * (float10)(*(float *)(gen_frame + 0x24)) + fVar21 * (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0xec)) = fVar13;
    fVar24 = (float10)fVar13;
    fVar14 = (float)(fVar24 * fVar21);
    (*(float *)(gen_frame + 0xf0)) = fVar14;
    fVar15 = (float)(fVar24 * fVar23);
    (*(float *)(gen_frame + 0xf4)) = fVar15;
    fVar16 = (float)(fVar24 * fVar20);
    (*(float *)(gen_frame + 0xf8)) = fVar16;
    (*(float *)(gen_frame + 0xa0)) = fVar14;
    (*(float *)(gen_frame + 0xa4)) = fVar15;
    (*(float *)(gen_frame + 0xa8)) = fVar16;
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar15);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar16);
    if (fVar13 <= 0.0) {
      (*(float *)(gen_frame + 0xec)) = 0.0;
      fVar24 = (float10)0.0;
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
    }
    if (fVar24 < (float10)fVar7) {
      (*(float *)(gen_frame + 0xa0)) = fVar8;
      (*(float *)(gen_frame + 0xa4)) = fVar9;
      (*(float *)(gen_frame + 0xa8)) = fVar10;
    }
    fVar20 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14));
    fVar7 = (float)((float10)fVar11 - fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar21 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar15));
    fVar1 = (float)((float10)fVar1 - fVar21);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar23 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar16));
    fVar6 = (float)((float10)fVar6 - fVar23);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar7 = (float)((float10)fVar7 * fVar25);
    (*(float *)(gen_frame + 0xf0)) = fVar7;
    fVar1 = (float)((float10)fVar1 * fVar25);
    (*(float *)(gen_frame + 0xf4)) = fVar1;
    fVar6 = (float)((float10)fVar6 * fVar25);
    (*(float *)(gen_frame + 0xf8)) = fVar6;
    fVar7 = (float)((float10)fVar7 + fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar1 = (float)(fVar21 + (float10)fVar1);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar6 = (float)(fVar23 + (float10)fVar6);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0xf0)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xa4)));
    (*(float *)(gen_frame + 0xf4)) = fVar1;
    fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0xa8)));
    (*(float *)(gen_frame + 0xf8)) = fVar6;
    (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
    fVar20 = (float10)fVar7;
    fVar21 = GEN_X87((float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48))));
    fVar7 = (float)(fVar21 * fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar23 = (float10)fVar1;
    fVar1 = (float)(fVar23 * fVar21);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar24 = (float10)fVar6;
    fVar6 = (float)(fVar24 * fVar21);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar8 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0xf0)) = fVar8;
    fVar9 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0xf4)) = fVar9;
    (*(float *)(gen_frame + 0xf8)) = (float)(fVar22 + (float10)(*(float *)(gen_frame + 0x58)));
    fVar7 = (float)((float10)fVar8 + (float10)fVar7);
    (*(float *)(gen_frame + 0x50)) = fVar7;
    fVar1 = (float)((float10)fVar9 + (float10)fVar1);
    (*(float *)(gen_frame + 0x54)) = fVar1;
    fVar6 = ((float)GEN_TOF(((float10)(float)(fVar22 + (float10)(*(float *)(gen_frame + 0x58))) + (float10)fVar6)));
    (*(float *)(gen_frame + 0x58)) = fVar6;
    *param_2 = fVar7;
    param_2[1] = fVar1;
    param_2[2] = fVar6;
    fVar1 = (float)(fVar20 - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0xf0)) = fVar1;
    fVar6 = (float)(fVar23 - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0xf4)) = fVar6;
    fVar7 = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0xf8)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)fVar5);
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar6 = (float)((float10)fVar6 + (float10)fVar12);
    (*(float *)(gen_frame + 0x54)) = fVar6;
    fVar7 = (float)((float10)fVar7 + fVar22);
    (*(float *)(gen_frame + 0x58)) = fVar7;
    param_2[8] = (float)((float10)fVar1 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar6 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar7 + (float10)param_2[10]);
    fVar1 = param_5[1];
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    fVar20 = (float10)fVar1;
    param_2[8] = (float)(fVar20 * (float10)param_2[8]);
    param_2[9] = (float)((float10)param_2[9] * fVar20);
    param_2[10] = (float)(fVar20 * (float10)param_2[10]);
  }
  (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
  fVar20 = GEN_X87((float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48))));
  fVar21 = (float10)fVar4;
  fVar4 = (float)(fVar21 * fVar20);
  (*(float *)(gen_frame + 0x50)) = fVar4;
  fVar23 = (float10)fVar2;
  fVar1 = (float)(fVar23 * fVar20);
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar24 = (float10)fVar3;
  fVar2 = (float)(fVar24 * fVar20);
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0xd0)));
  (*(float *)(gen_frame + 0xf0)) = fVar3;
  fVar6 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0xd4)));
  (*(float *)(gen_frame + 0xf4)) = fVar6;
  (*(float *)(gen_frame + 0xf8)) = (float)(fVar22 + (float10)(*(float *)(gen_frame + 0xd8)));
  fVar4 = (float)((float10)fVar3 + (float10)fVar4);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar6 + (float10)fVar1);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar22 + (float10)(*(float *)(gen_frame + 0xd8))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  *param_3 = fVar4;
  param_3[1] = fVar1;
  param_3[2] = fVar2;
  fVar4 = (float)(fVar21 - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar1 = (float)(fVar23 - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  fVar2 = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar4 = (float)((float10)fVar5 + (float10)fVar4);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar12 + (float10)fVar1);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)(fVar22 + (float10)fVar2);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  param_3[8] = (float)((float10)fVar4 + (float10)param_3[8]);
  param_3[9] = (float)((float10)fVar1 + (float10)param_3[9]);
  param_3[10] = (float)((float10)fVar2 + (float10)param_3[10]);
  fVar4 = param_5[1];
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar20 = (float10)fVar4;
  param_3[8] = (float)(fVar20 * (float10)param_3[8]);
  param_3[9] = (float)(fVar20 * (float10)param_3[9]);
  param_3[10] = (float)(fVar20 * (float10)param_3[10]);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideParticleDispatch */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf34a0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xbf34a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte bVar1;
  
  if ((param_4 != '\0') && (param_3 == 1)) {
    bVar1 = F_00bf24b0(param_1 GEN_EDX_FWD,param_2,param_5,param_6,param_7);
    return bVar1;
  }
  bVar1 = F_00bf1a60(param_1 GEN_EDX_ARG,param_2,param_3,param_5,(undefined4)gen_fl2bits(param_6),param_7);
  return bVar1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::CollideLinkDispatch */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf3500(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbf3500u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  byte bVar1;
  
  if ((param_5 & 1) == 0) {
    return 0;
  }
  if (param_6 != '\0') {
    bVar1 = F_00bf29d0(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_7,(undefined1)param_8,param_9,
                             param_10);
    return bVar1;
  }
  bVar1 = F_00bf1e80(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_7,(undefined1)param_8,
                      (undefined4)gen_fl2bits(param_9),param_10);
  return bVar1;
}

/* ref: Global::PhysicsFree */
GEN_OWN GEN_FRAME uint F_00bf3560(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbf3560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf3580(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf3580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bf35b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf35b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbf35b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar1 == 0) {
    return 0;
  }
  *(float *)(param_1 + 0xc0) = param_4;
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionPlane::CollisionPlane */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf3600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf3600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00c246b0(in_ecx GEN_EDX_FWD,(undefined1)param_2);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0d0));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1375ac0));
  in_ecx[0x2d] = GEN_FLT_TO(in_ecx[0x2d], REFG(float, 0x1375ac4));
  in_ecx[0x2e] = GEN_FLT_TO(in_ecx[0x2e], REFG(float, 0x1375ac8));
  in_ecx[0x30] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::CollisionNormalPlane */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf36f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf36f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00bf3600(in_ecx GEN_EDX_FWD,2);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0fc));
  *(undefined2 *)(in_ecx + 0x34) = 0xffff;
  in_ecx[0x38] = GEN_FLT_TO(in_ecx[0x38], REFG(float, 0x1375ac0));
  in_ecx[0x39] = GEN_FLT_TO(in_ecx[0x39], REFG(float, 0x1375ac4));
  in_ecx[0x3a] = GEN_FLT_TO(in_ecx[0x3a], REFG(float, 0x1375ac8));
  in_ecx[0x3c] = GEN_FLT_TO(in_ecx[0x3c], REFG(float, 0x1375ac0));
  in_ecx[0x3d] = GEN_FLT_TO(in_ecx[0x3d], REFG(float, 0x1375ac4));
  in_ecx[0x3e] = GEN_FLT_TO(in_ecx[0x3e], REFG(float, 0x1375ac8));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::CollisionThreePointPlane */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf3780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bf3600(this GEN_EDX_FWD,3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x110e128));
  *(undefined4 *)(this + 0xd2) = 0xffffffff;
  *(undefined2 *)(this + 0xd0) = 0xffff;
  *(undefined4 *)(this + 0x100) = GEN_FLT_TO(*(undefined4 *)(this + 0x100), REFG(float, 0x1375ac0));
  *(undefined4 *)(this + 0x104) = GEN_FLT_TO(*(undefined4 *)(this + 0x104), REFG(float, 0x1375ac4));
  *(undefined4 *)(this + 0x108) = GEN_FLT_TO(*(undefined4 *)(this + 0x108), REFG(float, 0x1375ac8));
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0x100);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0x104);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xf8);
  return (uint)this;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf3840(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xbf3840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte bVar1;
  
  bVar1 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar1 != 0) {
    *(undefined2 *)(param_1 + 0xd0) = (undefined2)param_4;
    *(float *)(param_1 + 0xc0) = param_7;
    *(undefined4 *)(param_1 + 0xe0) = *param_5;
    *(undefined4 *)(param_1 + 0xe4) = param_5[1];
    *(undefined4 *)(param_1 + 0xe8) = param_5[2];
    *(undefined4 *)(param_1 + 0xf0) = *param_6;
    *(undefined4 *)(param_1 + 0xf4) = param_6[1];
    *(undefined4 *)(param_1 + 0xf8) = param_6[2];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf38d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbf38d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  byte bVar1;
  
  bVar1 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar1 != 0) {
    *(undefined2 *)(param_1 + 0xd2) = (undefined2)param_5;
    *(undefined2 *)(param_1 + 0xd0) = (undefined2)param_4;
    *(undefined2 *)(param_1 + 0xd4) = (undefined2)param_6;
    *(float *)(param_1 + 0xc0) = param_10;
    *(undefined4 *)(param_1 + 0xe0) = *param_7;
    *(undefined4 *)(param_1 + 0xe4) = param_7[1];
    *(undefined4 *)(param_1 + 0xe8) = param_7[2];
    *(undefined4 *)(param_1 + 0xf0) = *param_8;
    *(undefined4 *)(param_1 + 0xf4) = param_8[1];
    *(undefined4 *)(param_1 + 0xf8) = param_8[2];
    *(undefined4 *)(param_1 + 0x100) = *param_9;
    *(undefined4 *)(param_1 + 0x104) = param_9[1];
    *(undefined4 *)(param_1 + 0x108) = param_9[2];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::ResetToBone */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf3990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf3990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x100, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pCVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  puVar4 = ((undefined4 *)GEN_TOP(F_00623320(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,(uint)*(ushort *)(this + 0xd0))));
  puVar6 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x60)))));
  pCVar3 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  puVar6 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xe0,((undefined4 *)(gen_frame + 0xa0)))));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x80) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x84) = uVar1;
  *(undefined4 *)(pCVar3 + 0x88) = uVar2;
  puVar4 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),pCVar3 + 0xf0,((undefined4 *)(gen_frame + 0xa0)))));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x90) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x94) = uVar1;
  *(undefined4 *)(pCVar3 + 0x98) = uVar2;
  F_0046f390(pCVar3 + 0x90 GEN_EDX_ARG);
  *(undefined4 *)(pCVar3 + 0xa0) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa0), REFG(float, 0x1375ac0));
  *(undefined4 *)(pCVar3 + 0xa4) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)(pCVar3 + 0xa8) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xa8), REFG(float, 0x1375ac8));
  *(undefined4 *)(pCVar3 + 0xb0) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xb0), REFG(float, 0x1375ac0));
  *(undefined4 *)(pCVar3 + 0xb4) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xb4), REFG(float, 0x1375ac4));
  *(undefined4 *)(pCVar3 + 0xb8) = GEN_FLT_TO(*(undefined4 *)(pCVar3 + 0xb8), REFG(float, 0x1375ac8));
  puVar4 = ((undefined4 *)(gen_frame + 0xa0));
  pCVar7 = pCVar3 + 0x30;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *(undefined4 *)pCVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(pCVar3 + 0x60) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x80);
  *(undefined4 *)(pCVar3 + 100) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x84);
  *(undefined4 *)(pCVar3 + 0x68) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x88);
  return (uint)(pCVar3 + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::UpdateTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf3b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf3b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float * pfVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0xd0));
  pfVar2 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xe0,((undefined4 *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x10)) = *pfVar2;
  (*(float *)(gen_frame + 0x14)) = pfVar2[1];
  (*(float *)(gen_frame + 0x18)) = pfVar2[2];
  pfVar2 = ((float *)GEN_TOP(F_004ee9d0(&(*(float *)(gen_frame + 0x20)),this + 0xf0,((undefined4 *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x0)) = *pfVar2;
  (*(float *)(gen_frame + 0x4)) = pfVar2[1];
  (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *(float *)(this + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x80) + (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0x84) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x84) + (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x88) + (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb4) + (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) + (float10)*(float *)(this + 0xb8))));
  fVar1 = *(float *)(this + 0x80);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x84))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0xa0) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  *(float *)(this + 0xa4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x84))));
  *(float *)(this + 0xa8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x88))));
  fVar1 = *(float *)(this + 0x90);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0x98))));
  *(float *)(this + 0xb0) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)fVar1);
  *(float *)(this + 0xb4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0xb8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0x98))));
  puVar4 = ((undefined4 *)(gen_frame + 0x30));
  pCVar5 = this + 0x30;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pCVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar5 = pCVar5 + 4;
  }
  *(float *)(this + 0x60) = (*(float *)(gen_frame + 0x10));
  *(float *)(this + 100) = (*(float *)(gen_frame + 0x14));
  *(float *)(this + 0x68) = (*(float *)(gen_frame + 0x18));
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::ResetTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf3d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf3d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x240, 0);
  undefined * this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * this_01;
  undefined * pCVar6;
  undefined4 * puVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x22c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x230);
  this_01 = *(undefined * PTR32 *)(this + 0x28);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  puVar7 = ((undefined4 *)GEN_TOP(F_00623320(this_01 GEN_EDX_FWD,(uint)*(ushort *)(this + 0xd0))));
  puVar11 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0xa0)))));
  puVar11 = ((undefined4 *)(gen_frame + 0x160));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_00623320(this_01 GEN_EDX_ARG,(uint)*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xd2))))
  ;
  puVar11 = ((undefined4 *)(gen_frame + 0x120));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0x120)))));
  puVar11 = ((undefined4 *)(gen_frame + 0xe0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_00623320(this_01 GEN_EDX_ARG,(uint)*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xd4))))
  ;
  puVar11 = ((undefined4 *)(gen_frame + 0x1a0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0x1a0)))));
  pCVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  puVar11 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xe0,((undefined4 *)(gen_frame + 0x160)))));
  (*(float *)(gen_frame + 0x44)) = pfVar8[1];
  (*(float *)(gen_frame + 0x40)) = *pfVar8;
  (*(float *)(gen_frame + 0x48)) = pfVar8[2];
  pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x0)),pCVar6 + 0xf0,((undefined4 *)(gen_frame + 0xe0)))));
  (*(float *)(gen_frame + 0x50)) = *pfVar8;
  (*(float *)(gen_frame + 0x54)) = pfVar8[1];
  (*(float *)(gen_frame + 0x58)) = pfVar8[2];
  pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x0)),pCVar6 + 0x100,((undefined4 *)(gen_frame + 0x60)))));
  fVar1 = *pfVar8;
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = pfVar8[1];
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = pfVar8[2];
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar12 = (float10)fVar1;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) + fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x48)));
  fVar13 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)((float10)fVar1 * fVar13);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44))) * fVar13)));
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x48))) * fVar13)));
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar14 = (float10)(*(float *)(gen_frame + 0x50));
  fVar1 = (float)(fVar14 + (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar15 = (float10)(*(float *)(gen_frame + 0x54));
  fVar4 = (float)(fVar15 + (float10)fVar4);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar16 = (float10)(*(float *)(gen_frame + 0x58));
  fVar5 = (float)(fVar16 + (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar1 = (float)((float10)fVar1 * fVar13);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar4 = (float)((float10)fVar4 * fVar13);
  (*(float *)(gen_frame + 0x54)) = fVar4;
  fVar5 = (float)((float10)fVar5 * fVar13);
  (*(float *)(gen_frame + 0x58)) = fVar5;
  *(float *)(pCVar6 + 0x80) = fVar1;
  *(float *)(pCVar6 + 0x84) = fVar4;
  *(float *)(pCVar6 + 0x88) = fVar5;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - fVar14);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - fVar15);
  this_00 = pCVar6 + 0x90;
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - fVar16);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - fVar16);
  fVar1 = (float)(fVar12 - fVar14);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar2 - fVar15);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar3 - fVar16);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar2 - fVar15);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar3 - fVar16);
  F_0054ce40(this_00,(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x50)));
  F_0046f390(this_00 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  *(undefined4 *)(pCVar6 + 0xa0) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xa0), REFG(float, 0x1375ac0));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x48));
  *(undefined4 *)(pCVar6 + 0xa4) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)(pCVar6 + 0xa8) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xa8), REFG(float, 0x1375ac8));
  *(undefined4 *)(pCVar6 + 0xb0) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xb0), REFG(float, 0x1375ac0));
  *(undefined4 *)(pCVar6 + 0xb4) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xb4), REFG(float, 0x1375ac4));
  *(undefined4 *)(pCVar6 + 0xb8) = GEN_FLT_TO(*(undefined4 *)(pCVar6 + 0xb8), REFG(float, 0x1375ac8));
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x40));
  uVar9 = F_0046f390(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG);
  fVar1 = *(float *)this_00;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = *(float *)(pCVar6 + 0x94);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = *(float *)(pCVar6 + 0x98);
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x34)) * (float10)fVar3 - (float10)(*(float *)(gen_frame + 0x38)) * (float10)fVar2);
  (*(float *)(gen_frame + 0x50)) = fVar4;
  *(float *)(pCVar6 + 0x30) = (*(float *)(gen_frame + 0x30));
  fVar5 = (float)((float10)fVar1 * (float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x30)) * (float10)fVar3);
  (*(float *)(gen_frame + 0x54)) = fVar5;
  *(float *)(pCVar6 + 0x34) = (*(float *)(gen_frame + 0x34));
  *(float *)(pCVar6 + 0x38) = (*(float *)(gen_frame + 0x38));
  *(float *)(pCVar6 + 0x40) = fVar1;
  *(float *)(pCVar6 + 0x44) = fVar2;
  *(float *)(pCVar6 + 0x48) = fVar3;
  fVar1 = (float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x34)) * (float10)fVar1);
  (*(float *)(gen_frame + 0x58)) = fVar1;
  *(float *)(pCVar6 + 0x50) = fVar4;
  *(float *)(pCVar6 + 0x58) = fVar1;
  *(float *)(pCVar6 + 0x54) = fVar5;
  *(undefined4 *)(pCVar6 + 0x60) = *(undefined4 *)(pCVar6 + 0x80);
  *(undefined4 *)(pCVar6 + 100) = *(undefined4 *)(pCVar6 + 0x84);
  *(undefined4 *)(pCVar6 + 0x68) = *(undefined4 *)(pCVar6 + 0x88);
  return uVar9;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::UpdateTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf4240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf4240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined * this_00;
  float * pfVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  this_00 = *(undefined * PTR32 *)(this + 0x28);
  F_0063a290(this_00 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0xd0));
  F_0063a290(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)),(uint)*(ushort *)(this + 0xd2));
  F_0063a290(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb0)),(uint)*(ushort *)(this + 0xd4));
  pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xe0,((undefined1 *)(gen_frame + 0x30)))));
  fVar1 = pfVar12[1];
  fVar6 = *pfVar12;
  fVar2 = pfVar12[2];
  pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xf0,((undefined1 *)(gen_frame + 0x70)))));
  fVar3 = *pfVar12;
  fVar4 = pfVar12[1];
  fVar5 = pfVar12[2];
  pfVar12 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0x100,((undefined1 *)(gen_frame + 0xb0)))));
  fVar7 = *pfVar12;
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = pfVar12[1];
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = pfVar12[2];
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar14 = (float10)fVar7;
  fVar15 = (float10)REFG(double, 0x1088108);
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + fVar14) * fVar15)));
  (*(float *)(gen_frame + 0x10)) = fVar7;
  fVar10 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 + (float10)fVar1) * fVar15)));
  (*(float *)(gen_frame + 0x14)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 + (float10)fVar2) * fVar15)));
  (*(float *)(gen_frame + 0x18)) = fVar11;
  fVar16 = (float10)fVar3;
  fVar3 = (float)(fVar16 + (float10)fVar7);
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar17 = (float10)fVar4;
  fVar4 = (float)(fVar17 + (float10)fVar10);
  (*(float *)(gen_frame + 0x24)) = fVar4;
  fVar18 = (float10)fVar5;
  fVar5 = (float)(fVar18 + (float10)fVar11);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar3 = (float)((float10)fVar3 * fVar15);
  fVar4 = (float)((float10)fVar4 * fVar15);
  fVar5 = (float)((float10)fVar5 * fVar15);
  fVar6 = (float)((float10)fVar6 - fVar16);
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar1 = (float)((float10)fVar1 - fVar17);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = (float)((float10)fVar2 - fVar18);
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar7 = (float)(fVar14 - fVar16);
  fVar14 = GEN_X87((float10)(float)((float10)fVar9 - fVar18));
  fVar15 = (float10)fVar1;
  fVar16 = GEN_X87((float10)(float)((float10)fVar8 - fVar17));
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * fVar14 - fVar19 * fVar16);
  fVar20 = (float10)fVar7;
  fVar21 = (float10)fVar6;
  (*(float *)(gen_frame + 0x14)) = (float)(fVar20 * fVar19 - fVar21 * fVar14);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar16 * fVar21 - fVar15 * fVar20);
  F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  *(float *)(this + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0x80))));
  fVar1 = *(float *)(this + 0xa4);
  fVar2 = *(float *)(this + 0x84);
  (*(float *)(gen_frame + 0x0)) = fVar7;
  *(float *)(this + 0x84) = (float)((float10)fVar1 + (float10)fVar2);
  *(float *)(this + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x94) + (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) + (float10)*(float *)(this + 0xb8))));
  fVar1 = ((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(this + 0x80))));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar4 - (float10)*(float *)(this + 0x84))));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar6 = ((float)GEN_TOF(((float10)fVar5 - (float10)*(float *)(this + 0x88))));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  *(float *)(this + 0xa0) = fVar1;
  *(float *)(this + 0xa4) = fVar2;
  *(float *)(this + 0xa8) = fVar6;
  fVar1 = *(float *)(this + 0x90);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x98))));
  *(float *)(this + 0xb0) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  *(float *)(this + 0xb4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0xb8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x98))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar8 - fVar17);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar9 - fVar18);
  uVar13 = F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  *(float *)(this + 0x58) = fVar6;
  *(float *)(this + 0x30) = (*(float *)(gen_frame + 0x0));
  *(float *)(this + 0x34) = (*(float *)(gen_frame + 0x4));
  *(float *)(this + 0x38) = (*(float *)(gen_frame + 0x8));
  *(float *)(this + 0x40) = (*(float *)(gen_frame + 0x10));
  *(float *)(this + 0x44) = (*(float *)(gen_frame + 0x14));
  *(float *)(this + 0x48) = (*(float *)(gen_frame + 0x18));
  *(float *)(this + 0x50) = fVar1;
  *(float *)(this + 0x54) = fVar2;
  *(float *)(this + 0x60) = fVar3;
  *(float *)(this + 100) = fVar4;
  *(float *)(this + 0x68) = fVar5;
  return uVar13;
}

/* ref: Client::Graphics::Physics::CollisionPlane::GetNormal */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf4750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbf4750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar1 = *(float *)(this + 0x94);
  fVar2 = *(float *)(this + 0xb4);
  fVar3 = *(float *)(this + 0x98);
  fVar4 = *(float *)(this + 0xb8);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  param_1[1] = (float)((float10)fVar1 + (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 + (float10)fVar4);
  uVar5 = F_0046f390(param_1 GEN_EDX_FWD);
  return uVar5;
}

/* ref: Client::Graphics::Physics::CollisionPlane::CollideParticle */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf47c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xbf47c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0xa0)));
  fVar11 = (float10)param_7;
  fVar2 = *((float *)GEN_TOP((param_1 + 0xa4)));
  fVar3 = *((float *)GEN_TOP((param_1 + 0xa8)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0x80)));
  fVar5 = *((float *)GEN_TOP((param_1 + 0x84)));
  fVar6 = *((float *)GEN_TOP((param_1 + 0x88)));
  fVar7 = *((float *)GEN_TOP((param_1 + 0xb4)));
  fVar8 = *((float *)GEN_TOP((param_1 + 0xb8)));
  fVar9 = *((float *)GEN_TOP((param_1 + 0x94)));
  fVar10 = *((float *)GEN_TOP((param_1 + 0x98)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x90))) +
                    (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xb0))) * fVar11))))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar9 + (float10)(float)((float10)fVar7 * fVar11))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)(fVar11 * (float10)fVar8))));
  F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_FWD);
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2[2] -
                                  (float10)((float)GEN_TOF(((float10)fVar6 +
                                                  (float10)(float)((float10)fVar3 * fVar11))))))) *
                  (float10)(*(float *)(gen_frame + 0x18)) +
                 ((float10)((float)GEN_TOF(((float10)*param_2 -
                                  (float10)((float)GEN_TOF(((float10)fVar4 +
                                                  (float10)(float)(fVar11 * (float10)fVar1))))))) *
                  (float10)(*(float *)(gen_frame + 0x10)) +
                 (float10)((float)GEN_TOF(((float10)param_2[1] -
                                 (float10)((float)GEN_TOF(((float10)fVar5 +
                                                 (float10)(float)((float10)fVar2 * fVar11))))))) *
                 (float10)(*(float *)(gen_frame + 0x14))))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
  if (param_3 != 0) {
    if ((param_3 & 2) != 0) {
      (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
    }
    (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((param_1 + 0xc0)));
    fVar11 = (float10)*((float *)GEN_TOP((param_1 + 0xc0)));
    if (!((float10)(*(float *)(gen_frame + 0x2c)) < fVar11)) {
      return 0;
    }
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x2c)) - (fVar11 + (float10)param_2[0x14]))));
  }
  (*(float *)(gen_frame + 0x28)) = (float)((float10)param_5[2] * (float10)(*(float *)(gen_frame + 0x2c)));
  fVar11 = (float10)(*(float *)(gen_frame + 0x0));
  fVar12 = GEN_X87((float10)(float)((float10)param_5[2] * (float10)(*(float *)(gen_frame + 0x2c))));
  fVar13 = (float10)(*(float *)(gen_frame + 0x4));
  fVar14 = (float10)(*(float *)(gen_frame + 0x8));
  *param_2 = ((float)GEN_TOF(((float10)*param_2 - (float10)(float)(fVar12 * fVar11))));
  param_2[1] = ((float)GEN_TOF(((float10)param_2[1] - (float10)(float)(fVar13 * fVar12))));
  param_2[2] = ((float)GEN_TOF(((float10)param_2[2] - (float10)(float)(fVar14 * fVar12))));
  fVar1 = param_2[8];
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = param_2[9];
  fVar2 = param_2[10];
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar12 = (float10)param_2[9];
  fVar15 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * fVar14 + (fVar15 * fVar11 + fVar12 * fVar13))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar16 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar16 * fVar11);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar14 * fVar16);
  fVar11 = (float10)(*(float *)(gen_frame + 0x0));
  fVar13 = (float10)(*(float *)(gen_frame + 0x4));
  fVar14 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)1 - (float10)*param_5);
  fVar16 = GEN_X87((float10)(float)((float10)1 - (float10)*param_5));
  if (fVar1 <= 0.0) {
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0x28)) = param_5[1];
  fVar17 = (float10)param_5[1];
  param_2[8] = ((float)GEN_TOF((fVar17 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)(fVar15 -
                                                                                           fVar11))))
                                                + (float10)(*(float *)(gen_frame + 0x0))))))));
  param_2[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar12 - fVar13) * fVar16)))
                                       + (float10)(*(float *)(gen_frame + 0x4))))) * fVar17)));
  param_2[10] = ((float)GEN_TOF((fVar17 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)((
                                                  float10)fVar2 - fVar14)))) + (float10)(*(float *)(gen_frame + 0x8))))))));
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionPlane::CollideParticlePair */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf4af0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(char param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbf4af0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(char param_8 = (char)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0xa0)));
  fVar15 = (float10)param_10;
  fVar2 = *((float *)GEN_TOP((param_1 + 0xa4)));
  fVar3 = *((float *)GEN_TOP((param_1 + 0xa8)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0x80)));
  fVar5 = *((float *)GEN_TOP((param_1 + 0x84)));
  fVar6 = *((float *)GEN_TOP((param_1 + 0x88)));
  fVar7 = *((float *)GEN_TOP((param_1 + 0xb0)));
  fVar8 = *((float *)GEN_TOP((param_1 + 0xb4)));
  fVar9 = *((float *)GEN_TOP((param_1 + 0xb8)));
  fVar10 = *((float *)GEN_TOP((param_1 + 0x90)));
  (*(float *)(gen_frame + 0x68)) = fVar10;
  fVar11 = *((float *)GEN_TOP((param_1 + 0x94)));
  (*(float *)(gen_frame + 0x64)) = fVar11;
  fVar12 = *((float *)GEN_TOP((param_1 + 0x98)));
  (*(float *)(gen_frame + 0x60)) = fVar12;
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(float)((float10)fVar7 * fVar15) + (float10)fVar10)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(float)((float10)fVar8 * fVar15) + (float10)fVar11)));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(float)(fVar15 * (float10)fVar9) + (float10)fVar12)));
  F_0046f390(&(*(float *)(gen_frame + 0x30)) GEN_EDX_FWD);
  fVar16 = (float10)(*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x54)) = 0.0;
  pfVar14 = &(*(float *)(gen_frame + 0x60));
  fVar17 = (float10)(*(float *)(gen_frame + 0x30));
  fVar18 = (float10)(*(float *)(gen_frame + 0x38));
  fVar7 = ((float)GEN_TOF((fVar18 * (float10)(*(float *)(gen_frame + 0x60)) +
                 (fVar17 * (float10)(*(float *)(gen_frame + 0x68)) + fVar16 * (float10)(*(float *)(gen_frame + 0x64))))));
  (*(float *)(gen_frame + 0x60)) = fVar7;
  if (!((float10)0 < (float10)fVar7)) {
    pfVar14 = &(*(float *)(gen_frame + 0x54));
  }
  fVar9 = *pfVar14;
  fVar7 = *param_2;
  (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar9 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar7;
  fVar8 = param_2[1];
  fVar19 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)(fVar15 * (float10)fVar1) + (float10)fVar4))));
  (*(float *)(gen_frame + 0x5c)) = fVar8;
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x58)) = fVar1;
  fVar4 = *param_3;
  fVar20 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar5 + (float10)(float)((float10)fVar2 * fVar15)))));
  fVar2 = param_3[1];
  fVar5 = param_3[2];
  fVar15 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar6 + (float10)(float)((float10)fVar3 * fVar15)))));
  bVar13 = false;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - fVar15) * fVar18 +
                 ((float10)(float)((float10)fVar8 - fVar20) * fVar16 +
                 (float10)(float)((float10)fVar7 - fVar19) * fVar17))));
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
  fVar6 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)fVar5 - fVar15) +
                 (fVar17 * (float10)(float)((float10)fVar4 - fVar19) +
                 (float10)(float)((float10)fVar2 - fVar20) * fVar16))));
  (*(float *)(gen_frame + 0x64)) = fVar6;
  fVar10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xc0))) + (float10)param_4)));
  (*(float *)(gen_frame + 0x54)) = fVar10;
  fVar11 = *param_7;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)1 - (float10)fVar11);
  if (param_5 == 0) {
    bVar13 = true;
  }
  else if ((param_5 & 2) != 0) {
    (*(float *)(gen_frame + 0x68)) = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x30))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x38))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x64)) = gen_bits2f((uint)gen_fl2bits(fVar6) ^ REFG(uint, 0x10920d0));
  }
  fVar15 = GEN_X87((float10)(float)((float10)fVar9 * (float10)REFG(double, 0x1088108)));
  (*(byte *)(gen_frame + 0x6f)) = 0;
  fVar16 = GEN_X87((float10)(float)((float10)1 - (float10)fVar11));
  fVar17 = (float10)(*(float *)(gen_frame + 0x28));
  fVar18 = (float10)(*(float *)(gen_frame + 0x24));
  fVar19 = (float10)(*(float *)(gen_frame + 0x20));
  if ((param_8 == '\0') && (((float10)(*(float *)(gen_frame + 0x68)) < (float10)fVar10 || (bVar13)))) {
    (*(byte *)(gen_frame + 0x6f)) = 1;
    (*(float *)(gen_frame + 0x50)) = 0.0;
    pfVar14 = &(*(float *)(gen_frame + 0x60));
    fVar3 = (float)((float10)fVar10 - (float10)(*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x60)) = fVar3;
    if (!((float10)0 < (float10)fVar3)) {
      pfVar14 = &(*(float *)(gen_frame + 0x50));
    }
    fVar3 = param_7[2];
    fVar6 = *pfVar14;
    (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar3 * (float10)fVar6);
    fVar20 = GEN_X87((float10)(float)((float10)fVar3 * (float10)fVar6));
    *param_2 = ((float)GEN_TOF(((float10)fVar7 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar19) + (float10)fVar7))) - (float10)fVar7))) *
                                      fVar15))))));
    param_2[1] = ((float)GEN_TOF(((float10)fVar8 +
                        (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar18 *
                                                                                           fVar20) +
                                                                          (float10)fVar8))) -
                                                         (float10)fVar8))) * fVar15))))));
    param_2[2] = ((float)GEN_TOF(((float10)fVar1 +
                        (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 *
                                                                                           fVar17) +
                                                                          (float10)fVar1))) -
                                                         (float10)fVar1))) * fVar15))))));
    fVar1 = param_2[8];
    fVar3 = param_2[9];
    fVar6 = param_2[10];
    fVar7 = ((float)GEN_TOF(((float10)fVar6 * fVar17 + ((float10)fVar3 * fVar18 + (float10)fVar1 * fVar19))));
    (*(float *)(gen_frame + 0x58)) = fVar7;
    fVar20 = (float10)fVar7;
    (*(float *)(gen_frame + 0x20)) = (float)(fVar20 * fVar19);
    (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x24)) = (float)(fVar18 * fVar20);
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x28)) = (float)(fVar20 * fVar17);
    (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
    fVar21 = (float10)(*(float *)(gen_frame + 0x20));
    fVar22 = (float10)(*(float *)(gen_frame + 0x24));
    fVar20 = (float10)(*(float *)(gen_frame + 0x28));
    if (fVar7 <= 0.0) {
      (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1375ac8);
    }
    fVar7 = param_7[1];
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar23 = (float10)fVar7;
    param_2[8] = ((float)GEN_TOF((fVar23 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1
                                                                                    - fVar21) *
                                                                   fVar16))) + (float10)(*(float *)(gen_frame + 0x20))))))));
    param_2[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar3 - fVar22)
                                                          * fVar16))) + (float10)(*(float *)(gen_frame + 0x24))))) * fVar23)));
    param_2[10] = ((float)GEN_TOF((fVar23 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar6
                                                                                     - fVar20) *
                                                                    fVar16))) + (float10)(*(float *)(gen_frame + 0x28))))))));
  }
  if ((!((float10)(*(float *)(gen_frame + 0x64)) < (float10)fVar10)) && (!bVar13)) {
    return (*(byte *)(gen_frame + 0x6f));
  }
  (*(float *)(gen_frame + 0x4c)) = 0.0;
  pfVar14 = &(*(float *)(gen_frame + 0x54));
  fVar1 = (float)((float10)fVar10 - (float10)(*(float *)(gen_frame + 0x64)));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  if (!((float10)0 < (float10)fVar1)) {
    pfVar14 = &(*(float *)(gen_frame + 0x4c));
  }
  fVar1 = param_7[2];
  fVar3 = *pfVar14;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar1 * (float10)fVar3);
  fVar20 = GEN_X87((float10)(float)((float10)fVar1 * (float10)fVar3));
  fVar1 = *param_3;
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar21 = (float10)fVar1;
  fVar1 = param_3[1];
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar3 = param_3[2];
  (*(float *)(gen_frame + 0x58)) = fVar3;
  *param_3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar19) + (float10)fVar4))) - fVar21))) * fVar15))) +
                    fVar21)));
  param_3[1] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar18 * 
                                                  fVar20) + (float10)fVar2))) - (float10)fVar1))) *
                                       fVar15))) + (float10)fVar1)));
  param_3[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar17) + (float10)fVar5))) - (float10)fVar3))) *
                                       fVar15))) + (float10)fVar3)));
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * fVar17 + ((float10)fVar2 * fVar18 + (float10)fVar1 * fVar19))));
  (*(float *)(gen_frame + 0x54)) = fVar4;
  fVar15 = (float10)fVar4;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar15 * fVar19);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar15 * fVar18);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar17 * fVar15);
  fVar15 = (float10)(*(float *)(gen_frame + 0x0));
  fVar17 = (float10)(*(float *)(gen_frame + 0x4));
  fVar18 = (float10)(*(float *)(gen_frame + 0x8));
  if (fVar4 <= 0.0) {
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1375ac8);
  }
  fVar4 = param_7[1];
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar19 = (float10)fVar4;
  param_3[8] = ((float)GEN_TOF((fVar19 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 -
                                                                                  fVar15) * fVar16)))
                                                + (float10)(*(float *)(gen_frame + 0x0))))))));
  param_3[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 - fVar17) *
                                                        fVar16))) + (float10)(*(float *)(gen_frame + 0x4))))) * fVar19)));
  param_3[10] = ((float)GEN_TOF((fVar19 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)((
                                                  float10)fVar3 - fVar18)))) + (float10)(*(float *)(gen_frame + 0x8))))))));
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionPlane::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf5150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf5150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf5180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf5180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf51b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf51b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf51e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbf51e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  code * pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pCVar5;
  
  bVar2 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x140) = (undefined2)param_4;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x14)));
  puVar4 = param_5;
  pCVar5 = param_1 + 0x80;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pCVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar5 = pCVar5 + 4;
  }
  *(float *)(param_1 + 0x144) = param_6;
  (*pcVar1)(param_1);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::CollisionEllipsoid */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf5250(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf5250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00c246b0(in_ecx GEN_EDX_FWD,1);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e154));
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0x20;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0x30;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(in_ecx + 0x50) = 0xffff;
  in_ecx[0x51] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::ResetTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf52c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf52c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x120, 0);
  ushort uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  this_00 = *(undefined * PTR32 *)(this + 0x28);
  uVar1 = *(ushort *)(this + 0x140);
  pCVar5 = this + 0x80;
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar2 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    puVar2 = puVar2 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00623320(this_00 GEN_EDX_FWD,(uint)uVar1)));
  puVar3 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x80)))));
  puVar3 = ((undefined4 *)(gen_frame + 0x40));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_004ef9d0(((undefined4 *)(gen_frame + 0xc0)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x40)));
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  pCVar5 = this + 0x30;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xc0)))));
  puVar2 = puVar3;
  pCVar5 = this + 0x100;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  pCVar5 = this + 0xc0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  return (uint)puVar3;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::UpdateTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf53c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xe0, 0);
  undefined4 * puVar1;
  int iVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  pCVar3 = this + 0x30;
  pCVar5 = this + 0xc0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar5 = pCVar5 + 4;
  }
  pCVar3 = this + 0x80;
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  F_0063a290(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x40)),(uint)*(ushort *)(this + 0x140));
  F_004ef9d0(((undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x40)));
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  pCVar3 = this + 0x30;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(undefined4 *)pCVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar3 = pCVar3 + 4;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x80)))));
  puVar4 = puVar1;
  pCVar3 = this + 0x100;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(undefined4 *)pCVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar3 = pCVar3 + 4;
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::GetNormal */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf5490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbf5490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x70, 0);
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  uVar1 = *(undefined4 *)(this + 0x110);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x100);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x104);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x108);
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x114);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x118);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x130);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x120);
  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x134);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x124);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x138);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x128);
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  F_004eebf0(param_1 GEN_EDX_ARG,(uint)(this + 0x30));
  uVar2 = F_0046f390(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::CollideParticle */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf55f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xbf55f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xd8, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  (*(uint *)(gen_frame + 0xc4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc8);
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  (*(float *)(gen_frame + 0x18)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x100);
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)(this + 0x104);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(this + 0x108);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x110);
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = *(undefined4 *)(this + 0x114);
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(this + 0x118);
  (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(this + 0x130);
  (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(this + 0x120);
  (*(undefined4 *)(gen_frame + 0xac)) = *(undefined4 *)(this + 0x134);
  (*(undefined4 *)(gen_frame + 0x9c)) = *(undefined4 *)(this + 0x124);
  (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(this + 0x138);
  (*(float * PTR32 *)(gen_frame + 0x34)) = param_4;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(this + 0x128);
  (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(float *)(gen_frame + 0x18)) GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x78)));
  fVar9 = (float10)(*(float *)(gen_frame + 0x18));
  fVar10 = (float10)(*(float *)(gen_frame + 0x1c));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
  fVar11 = (float10)(*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x1c));
  bVar8 = false;
  uVar7 = param_2 >> 2;
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  fVar1 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(byte *)(gen_frame + 0x77)) = 0;
  fVar2 = ((float)GEN_TOF(((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11)));
  (*(float *)(gen_frame + 0x70)) = fVar2;
  if (uVar7 != 0) {
    if ((uVar7 & 1) == 0) {
      if ((uVar7 & 2) == 0) {
        (*(float *)(gen_frame + 0x54)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    }
    if ((param_2 >> 4 & 1) == 0) {
      if ((param_2 >> 4 & 2) == 0) {
        (*(float *)(gen_frame + 0x0)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    }
    if ((param_2 >> 6 & 1) == 0) {
      if ((param_2 >> 6 & 2) == 0) {
        (*(float *)(gen_frame + 0x4)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    }
    fVar12 = (float10)(*(float *)(gen_frame + 0x0));
    fVar13 = (float10)(*(float *)(gen_frame + 0x4));
    fVar14 = (float10)(*(float *)(gen_frame + 0x54));
    fVar3 = ((float)GEN_TOF(((fVar12 * fVar10 + fVar13 * fVar9) + fVar14 * fVar11)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar9 = (float10)fVar3;
    if (fVar9 < (float10)0) {
      (*(byte *)(gen_frame + 0x77)) = 1;
      bVar8 = true;
      fVar3 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar12 * fVar12 + fVar13 * fVar13))));
      (*(float *)(gen_frame + 0x54)) = fVar3;
      fVar3 = (float)(fVar9 / (float10)fVar3);
      (*(float *)(gen_frame + 0x54)) = fVar3;
      fVar9 = (float10)fVar3;
      (*(float *)(gen_frame + 0x38)) = (float)(fVar9 * fVar13);
      (*(float *)(gen_frame + 0x3c)) = (float)(fVar9 * fVar12);
      (*(float *)(gen_frame + 0x40)) = (float)(fVar9 * fVar14);
      fVar10 = GEN_X87((float10)(float)(fVar9 * fVar13));
      fVar3 = (float)((float10)(*(float *)(gen_frame + 0x18)) - fVar10);
      (*(float *)(gen_frame + 0x58)) = fVar3;
      fVar11 = GEN_X87((float10)(float)(fVar9 * fVar12));
      fVar4 = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar11);
      (*(float *)(gen_frame + 0x5c)) = fVar4;
      fVar9 = GEN_X87((float10)(float)(fVar9 * fVar14));
      fVar5 = (float)((float10)(*(float *)(gen_frame + 0x20)) - fVar9);
      (*(float *)(gen_frame + 0x60)) = fVar5;
      fVar3 = (float)((float10)fVar3 - fVar10);
      (*(float *)(gen_frame + 0x38)) = fVar3;
      fVar4 = (float)((float10)fVar4 - fVar11);
      (*(float *)(gen_frame + 0x3c)) = fVar4;
      fVar5 = (float)((float10)fVar5 - fVar9);
      (*(float *)(gen_frame + 0x40)) = fVar5;
      (*(float *)(gen_frame + 0x8)) = fVar3;
      (*(float *)(gen_frame + 0xc)) = fVar4;
      (*(float *)(gen_frame + 0x10)) = fVar5;
    }
  }
  fVar9 = (float10)fVar2;
  if ((param_2 & 1) == 0) {
    if (((param_2 & 2) == 0) ||
       ((*(float *)(gen_frame + 0x50)) = (float)((float10)fVar1 - (float10)param_1[0x14]),
       fVar10 = (float10)(float)((float10)fVar1 - (float10)param_1[0x14]), fVar10 * fVar10 < fVar9))
    {
      (*(byte *)(gen_frame + 0x77)) = 1;
      goto LAB_00bf597e;
    }
  }
  else {
    (*(float *)(gen_frame + 0x50)) = (float)((float10)param_1[0x14] + (float10)fVar1);
    fVar10 = GEN_X87((float10)(float)((float10)param_1[0x14] + (float10)fVar1));
    if (fVar9 < fVar10 * fVar10) {
      (*(byte *)(gen_frame + 0x77)) = 1;
      goto LAB_00bf597e;
    }
  }
  if (!bVar8) {
    return 0;
  }
LAB_00bf597e: ;
  if (fVar2 <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x20)) = 0.0;
  }
  else {
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT(fVar9))));
    (*(float *)(gen_frame + 0x70)) = fVar1;
    fVar9 = (float10)fVar1;
    (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x8)) / fVar9);
    (*(float *)(gen_frame + 0x5c)) = (float)((float10)(*(float *)(gen_frame + 0xc)) / fVar9);
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x10)) / fVar9);
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    fVar1 = ((float)GEN_TOF((fVar10 * (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) / fVar9))));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xc)) / fVar9) * fVar10)));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar10 * (float10)(float)((float10)(*(float *)(gen_frame + 0x10)) / fVar9))));
    (*(float *)(gen_frame + 0x40)) = fVar3;
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x1c)) = fVar2;
    (*(float *)(gen_frame + 0x20)) = fVar3;
  }
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x30);
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)(this + 0x34);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = *(undefined4 *)(this + 0x44);
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(this + 0x60);
  (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0xac)) = *(undefined4 *)(this + 100);
  (*(undefined4 *)(gen_frame + 0x9c)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(this + 0x68);
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(this + 0x58);
  (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(float *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x70)) = *param_1;
  fVar9 = (float10)*param_1;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x18)) - fVar9);
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x70)) = param_1[1];
  fVar10 = (float10)param_1[1];
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar10);
  (*(float *)(gen_frame + 0x5c)) = fVar2;
  (*(float *)(gen_frame + 0x70)) = param_1[2];
  fVar11 = (float10)param_1[2];
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x20)) - fVar11);
  (*(float *)(gen_frame + 0x60)) = fVar3;
  (*(float *)(gen_frame + 0x70)) = (*(float * PTR32 *)(gen_frame + 0x34))[2];
  fVar12 = (float10)(*(float * PTR32 *)(gen_frame + 0x34))[2];
  fVar1 = (float)(fVar12 * (float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar12);
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  fVar3 = (float)(fVar12 * (float10)fVar3);
  (*(float *)(gen_frame + 0x40)) = fVar3;
  *param_1 = (float)((float10)fVar1 + fVar9);
  param_1[1] = (float)(fVar10 + (float10)fVar2);
  param_1[2] = (float)(fVar11 + (float10)fVar3);
  F_004eebf0(&(*(float *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)(this + 0x30));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)*param_1 - (float10)param_1[4]);
  (*(float *)(gen_frame + 0x5c)) = (float)((float10)param_1[1] - (float10)param_1[5]);
  (*(float *)(gen_frame + 0x60)) = (float)((float10)param_1[2] - (float10)param_1[6]);
  fVar9 = GEN_X87((float10)(float)((float10)*param_1 - (float10)param_1[4]));
  fVar10 = GEN_X87((float10)(float)((float10)param_1[1] - (float10)param_1[5]));
  fVar11 = GEN_X87((float10)(float)((float10)param_1[2] - (float10)param_1[6]));
  fVar1 = ((float)GEN_TOF((fVar11 * (float10)(*(float *)(gen_frame + 0x10)) +
                 ((float10)(*(float *)(gen_frame + 0x8)) * fVar9 + (float10)(*(float *)(gen_frame + 0xc)) * fVar10))));
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar12 = (float10)fVar1;
  fVar2 = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0xc)));
  (*(float *)(gen_frame + 0x5c)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar12);
  (*(float *)(gen_frame + 0x60)) = fVar4;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  fVar2 = (float)(fVar9 - (float10)fVar2);
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = (float)(fVar10 - (float10)fVar3);
  (*(float *)(gen_frame + 0x5c)) = fVar3;
  fVar4 = (float)(fVar11 - (float10)fVar4);
  (*(float *)(gen_frame + 0x60)) = fVar4;
  fVar5 = *(*(float * PTR32 *)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x34)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar5))));
  fVar9 = GEN_X87((float10)(float)((float10)1 - (float10)fVar5));
  fVar2 = (float)(fVar9 * (float10)fVar2);
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar3 = (float)((float10)fVar3 * fVar9);
  (*(float *)(gen_frame + 0x3c)) = fVar3;
  fVar4 = (float)(fVar9 * (float10)fVar4);
  (*(float *)(gen_frame + 0x40)) = fVar4;
  if ((param_2 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1375ac8);
  }
  fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x58)) = fVar1;
  fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xc)));
  (*(float *)(gen_frame + 0x5c)) = fVar2;
  fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x60)) = fVar3;
  (*(float * PTR32 *)(gen_frame + 0x34)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar6[1])));
  fVar9 = (float10)pfVar6[1];
  fVar1 = (float)(fVar9 * (float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar9);
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  fVar3 = (float)(fVar9 * (float10)fVar3);
  (*(float *)(gen_frame + 0x40)) = fVar3;
  param_1[8] = fVar1;
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  return (*(byte *)(gen_frame + 0x77));
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::CollideSegment */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf5d30(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(char param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xbf5d30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(char param_8 = (char)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float * pfVar13;
  float * pfVar14;
  float * pfVar15;
  float * PTR32 * ppfVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  (*(float * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_7;
  pfVar15 = param_2;
  if (param_5 == 1) {
    fVar1 = param_2[1];
    fVar2 = *param_3;
    fVar3 = param_2[2];
    pfVar15 = param_1 + 0x40;
    (*(float *)(gen_frame + 0x30)) = *param_2;
    (*(float *)(gen_frame + 0xb0)) = *pfVar15;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0xb4)) = param_1[0x41];
    (*(float *)(gen_frame + 0xb8)) = param_1[0x42];
    (*(float *)(gen_frame + 0xc0)) = param_1[0x44];
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(float *)(gen_frame + 0xc4)) = param_1[0x45];
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(float *)(gen_frame + 0xc8)) = param_1[0x46];
    fVar1 = param_1[0x48];
    (*(float *)(gen_frame + 0xe0)) = param_1[0x4c];
    fVar4 = param_1[0x4d];
    (*(float *)(gen_frame + 0x90)) = fVar2;
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    (*(float *)(gen_frame + 0xe4)) = fVar4;
    (*(float *)(gen_frame + 0x94)) = param_3[1];
    (*(float *)(gen_frame + 0xd4)) = param_1[0x49];
    (*(float *)(gen_frame + 0xe8)) = param_1[0x4e];
    (*(float *)(gen_frame + 0x98)) = param_3[2];
    (*(float *)(gen_frame + 0x38)) = fVar3;
    (*(float *)(gen_frame + 0xd8)) = param_1[0x4a];
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1087f04);
    F_004eeb30(&(*(float *)(gen_frame + 0x30)) GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0xb0)));
    fVar1 = param_1[0x44];
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x98));
    (*(float *)(gen_frame + 0xb0)) = *pfVar15;
    (*(float *)(gen_frame + 0xb4)) = param_1[0x41];
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    (*(float *)(gen_frame + 0xb8)) = param_1[0x42];
    (*(float *)(gen_frame + 0xc4)) = param_1[0x45];
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(float *)(gen_frame + 0xc8)) = param_1[0x46];
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(float *)(gen_frame + 0xd0)) = param_1[0x48];
    (*(float *)(gen_frame + 0xe0)) = param_1[0x4c];
    (*(float *)(gen_frame + 0xd4)) = param_1[0x49];
    (*(float *)(gen_frame + 0xe4)) = param_1[0x4d];
    (*(float *)(gen_frame + 0xd8)) = param_1[0x4a];
    (*(float *)(gen_frame + 0xe8)) = param_1[0x4e];
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1087f04);
    F_004eeb30(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x30));
    (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x34));
    (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x38));
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    F_00c262e0(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x10)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x2c)));
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
    if (param_8 != '\0') {
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ac168);
      pfVar14 = &(*(float *)(gen_frame + 0x2c));
      if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x2c)))) {
        pfVar14 = &(*(float *)(gen_frame + 0x58));
      }
      (*(float *)(gen_frame + 0x58)) = (float)((float10)1 / (float10)*pfVar14);
    }
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x48));
    pfVar14 = (*(float * PTR32 *)(gen_frame + 0x54));
    if (param_8 == '\0') {
      (*(float *)(gen_frame + 0x70)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x10];
      (*(float *)(gen_frame + 0x74)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x11];
      (*(float *)(gen_frame + 0x78)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x12];
      F_004be0e0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,pfVar15);
      F_004eeb30(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0xb0)));
      (*(float *)(gen_frame + 0x0)) = param_3[0x10];
      (*(float *)(gen_frame + 0x4)) = param_3[0x11];
      (*(float *)(gen_frame + 0x8)) = param_3[0x12];
      F_004be0e0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,pfVar15);
      F_004eeb30(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0xb0)));
      (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x78));
      (*(float *)(gen_frame + 0x88)) = 0.0;
      F_00c262e0(&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x88)));
      fVar3 = (*(float *)(gen_frame + 0x98));
      fVar2 = (*(float *)(gen_frame + 0x94));
      fVar1 = (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0x70)) = fVar1;
      (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0x74)) = fVar2;
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x78)) = fVar3;
      F_0046f390(&(*(float *)(gen_frame + 0x90)) GEN_EDX_ARG);
      F_0046f390(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0xac)) = 0.0;
      pfVar15 = &(*(float *)(gen_frame + 0xac));
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x98)) * (float10)(*(float *)(gen_frame + 0x78)) +
                     ((float10)(*(float *)(gen_frame + 0x90)) * (float10)(*(float *)(gen_frame + 0x70)) + (float10)(*(float *)(gen_frame + 0x94)) * (float10)(*(float *)(gen_frame + 0x74)))
                     )));
      (*(float *)(gen_frame + 0x88)) = fVar1;
      fVar1 = ((float)GEN_TOF(-(float10)fVar1));
      (*(float *)(gen_frame + 0x88)) = fVar1;
      if (!((float10)fVar1 < (float10)0)) {
        pfVar15 = &(*(float *)(gen_frame + 0x88));
      }
      fVar1 = *pfVar15;
      fVar2 = *(*(float * PTR32 *)(gen_frame + 0x54));
      (*(float *)(gen_frame + 0xac)) = fVar2;
      (*(float *)(gen_frame + 0x88)) = fVar1;
      fVar17 = (float10)fVar2;
      fVar2 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x10] - fVar17);
      (*(float *)(gen_frame + 0x90)) = fVar2;
      fVar3 = (*(float * PTR32 *)(gen_frame + 0x54))[1];
      (*(float *)(gen_frame + 0xac)) = fVar3;
      fVar18 = (float10)fVar3;
      fVar3 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x11] - fVar18);
      (*(float *)(gen_frame + 0x94)) = fVar3;
      fVar4 = (*(float * PTR32 *)(gen_frame + 0x54))[2];
      (*(float *)(gen_frame + 0xac)) = fVar4;
      fVar19 = (float10)fVar4;
      fVar4 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x12] - fVar19);
      (*(float *)(gen_frame + 0x98)) = fVar4;
      fVar20 = (float10)fVar1;
      fVar1 = (float)(fVar20 * (float10)fVar2);
      (*(float *)(gen_frame + 0x70)) = fVar1;
      fVar2 = (float)((float10)fVar3 * fVar20);
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar3 = (float)((float10)fVar4 * fVar20);
      (*(float *)(gen_frame + 0x78)) = fVar3;
      *(*(float * PTR32 *)(gen_frame + 0x54)) = (float)((float10)fVar1 + fVar17);
      (*(float * PTR32 *)(gen_frame + 0x54))[1] = (float)((float10)fVar2 + fVar18);
      (*(float * PTR32 *)(gen_frame + 0x54))[2] = (float)(fVar19 + (float10)fVar3);
      fVar1 = *param_3;
      (*(float *)(gen_frame + 0xac)) = fVar1;
      fVar17 = (float10)fVar1;
      fVar1 = (float)((float10)param_3[0x10] - fVar17);
      (*(float *)(gen_frame + 0x90)) = fVar1;
      fVar2 = param_3[1];
      (*(float *)(gen_frame + 0xac)) = fVar2;
      fVar18 = (float10)fVar2;
      fVar2 = (float)((float10)param_3[0x11] - fVar18);
      (*(float *)(gen_frame + 0x94)) = fVar2;
      fVar3 = param_3[2];
      (*(float *)(gen_frame + 0xac)) = fVar3;
      fVar19 = (float10)fVar3;
      fVar3 = (float)((float10)param_3[0x12] - fVar19);
      (*(float *)(gen_frame + 0x98)) = fVar3;
      fVar1 = (float)((float10)fVar1 * fVar20);
      (*(float *)(gen_frame + 0x70)) = fVar1;
      fVar2 = (float)((float10)fVar2 * fVar20);
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar3 = (float)((float10)fVar3 * fVar20);
      (*(float *)(gen_frame + 0x78)) = fVar3;
      *param_3 = (float)((float10)fVar1 + fVar17);
      param_3[1] = (float)(fVar18 + (float10)fVar2);
      param_3[2] = (float)(fVar19 + (float10)fVar3);
      pfVar14 = (*(float * PTR32 *)(gen_frame + 0x54));
    }
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x68)) +
                   ((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x60)) + (float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x64))))));
    (*(float *)(gen_frame + 0xac)) = fVar1;
    fVar2 = (*(float * PTR32 *)(gen_frame + 0x5c))[0x51];
    (*(float *)(gen_frame + 0x88)) = (float)((float10)fVar2 + (float10)param_4);
    fVar17 = GEN_X87((float10)(float)((float10)fVar2 + (float10)param_4));
    fVar18 = (float10)fVar1;
    fVar17 = GEN_X87(fVar17 * fVar17);
    pfVar15 = (*(float * PTR32 *)(gen_frame + 0x5c));
    if ((!GEN_ISNAN(fVar17) && !GEN_ISNAN(fVar18)) && !(fVar17 <= fVar18)) {
      fVar1 = ((float)GEN_TOF(GEN_X87(SQRT(fVar18))));
      (*(float *)(gen_frame + 0xac)) = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      (*(float *)(gen_frame + 0xac)) = (float)((float10)1 / (float10)fVar1);
      fVar17 = GEN_X87((float10)(float)((float10)1 / (float10)fVar1));
      (*(float *)(gen_frame + 0x60)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * fVar17);
      (*(float *)(gen_frame + 0x68)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x68)));
      F_004eebf0(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG,(uint)((*(float * PTR32 *)(gen_frame + 0x5c)) + 0xc));
      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x8c));
      fVar1 = *(*(float * PTR32 *)(gen_frame + 0x8c));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar1))));
      fVar2 = param_3[8];
      (*(float *)(gen_frame + 0x90)) = fVar2;
      (*(float *)(gen_frame + 0x94)) = param_3[9];
      fVar3 = param_3[10];
      (*(float *)(gen_frame + 0x98)) = fVar3;
      fVar17 = (float10)param_3[9];
      fVar18 = (float10)(*(float *)(gen_frame + 0x64));
      fVar19 = (float10)fVar2;
      fVar20 = (float10)(*(float *)(gen_frame + 0x60));
      fVar21 = (float10)(*(float *)(gen_frame + 0x68));
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar18 * fVar17 + fVar20 * fVar19) + fVar21 * (float10)fVar3))))));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar15;
      fVar22 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      fVar2 = (float)(fVar22 * fVar20);
      (*(float *)(gen_frame + 0x40)) = fVar2;
      fVar4 = (float)(fVar18 * fVar22);
      (*(float *)(gen_frame + 0x44)) = fVar4;
      fVar5 = (float)(fVar22 * fVar21);
      (*(float *)(gen_frame + 0x48)) = fVar5;
      (*(float *)(gen_frame + 0x60)) = fVar2;
      (*(float *)(gen_frame + 0x64)) = fVar4;
      (*(float *)(gen_frame + 0x68)) = fVar5;
      fVar2 = (float)(fVar19 - (float10)fVar2);
      (*(float *)(gen_frame + 0x70)) = fVar2;
      fVar4 = (float)(fVar17 - (float10)fVar4);
      (*(float *)(gen_frame + 0x74)) = fVar4;
      (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar3 - (float10)fVar5);
      fVar17 = GEN_X87((float10)(float)((float10)1 - (float10)fVar1));
      fVar1 = (float)(fVar17 * (float10)fVar2);
      (*(float *)(gen_frame + 0x90)) = fVar1;
      fVar2 = (float)((float10)fVar4 * fVar17);
      (*(float *)(gen_frame + 0x94)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar5) * fVar17)));
      (*(float *)(gen_frame + 0x98)) = fVar3;
      if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) <= 0.0) {
        (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
        (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1375ac4);
        (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1375ac8);
      }
      (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)GEN_TOP(0x0));
      ppfVar16 = &(*(float * PTR32 *)(gen_frame + 0x5c));
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0x14)) = fVar2;
      fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x68)));
      (*(float *)(gen_frame + 0x18)) = fVar3;
      (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54)))))))));
      if (!((float10)0 < (float10)(float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54)))))))) {
        ppfVar16 = &(*(float * PTR32 *)(gen_frame + 0x8c));
      }
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)pfVar13[2] * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar16)))) *
                                (float10)(*(float *)(gen_frame + 0x58))))))));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar15;
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      fVar4 = (float)(fVar19 * fVar20);
      (*(float *)(gen_frame + 0x30)) = fVar4;
      fVar5 = (float)(fVar18 * fVar19);
      (*(float *)(gen_frame + 0x34)) = fVar5;
      fVar6 = (float)(fVar19 * fVar21);
      (*(float *)(gen_frame + 0x38)) = fVar6;
      if (param_8 == '\0') {
        fVar7 = pfVar14[8];
        (*(float *)(gen_frame + 0x70)) = fVar7;
        fVar8 = pfVar14[9];
        (*(float *)(gen_frame + 0x74)) = fVar8;
        fVar9 = pfVar14[10];
        (*(float *)(gen_frame + 0x78)) = fVar9;
        fVar19 = (float10)fVar7;
        fVar7 = ((float)GEN_TOF(((float10)fVar9 * fVar21 + ((float10)fVar8 * fVar18 + fVar19 * fVar20))));
        (*(float *)(gen_frame + 0x58)) = fVar7;
        fVar22 = (float10)fVar7;
        fVar10 = (float)(fVar22 * fVar20);
        (*(float *)(gen_frame + 0x90)) = fVar10;
        fVar11 = (float)(fVar22 * fVar18);
        (*(float *)(gen_frame + 0x94)) = fVar11;
        fVar12 = (float)(fVar21 * fVar22);
        (*(float *)(gen_frame + 0x98)) = fVar12;
        (*(float *)(gen_frame + 0x60)) = fVar10;
        (*(float *)(gen_frame + 0x64)) = fVar11;
        (*(float *)(gen_frame + 0x68)) = fVar12;
        fVar10 = (float)(fVar19 - (float10)fVar10);
        (*(float *)(gen_frame + 0x90)) = fVar10;
        (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar8 - (float10)fVar11);
        (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar9 - (float10)fVar12);
        fVar10 = (float)((float10)fVar10 * fVar17);
        (*(float *)(gen_frame + 0x40)) = fVar10;
        fVar8 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar17)));
        (*(float *)(gen_frame + 0x44)) = fVar8;
        fVar9 = ((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar9 - (float10)fVar12))));
        (*(float *)(gen_frame + 0x48)) = fVar9;
        if (fVar7 <= 0.0) {
          (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
          (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1375ac4);
          (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1375ac8);
        }
        fVar7 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x60)));
        (*(float *)(gen_frame + 0x90)) = fVar7;
        fVar8 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x64)));
        (*(float *)(gen_frame + 0x94)) = fVar8;
        fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x68)));
        (*(float *)(gen_frame + 0x98)) = fVar9;
        *pfVar14 = (float)((float10)fVar4 + (float10)*pfVar14);
        pfVar14[1] = (float)((float10)pfVar14[1] + (float10)fVar5);
        pfVar14[2] = (float)((float10)fVar6 + (float10)pfVar14[2]);
        pfVar14[8] = fVar7;
        pfVar14[9] = fVar8;
        pfVar14[10] = fVar9;
        pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar13[1])));
        (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar15;
        fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        pfVar14[8] = (float)(fVar17 * (float10)pfVar14[8]);
        pfVar14[9] = (float)((float10)pfVar14[9] * fVar17);
        pfVar14[10] = (float)(fVar17 * (float10)pfVar14[10]);
      }
      *param_3 = (float)((float10)*param_3 + (float10)fVar4);
      param_3[1] = (float)((float10)param_3[1] + (float10)fVar5);
      param_3[2] = (float)((float10)fVar6 + (float10)param_3[2]);
      param_3[8] = fVar1;
      param_3[9] = fVar2;
      param_3[10] = fVar3;
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar13[1])));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar15;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      param_3[8] = (float)(fVar17 * (float10)param_3[8]);
      param_3[9] = (float)((float10)param_3[9] * fVar17);
      param_3[10] = (float)(fVar17 * (float10)param_3[10]);
      return CONCAT31((int3)((uint)((int)(uintptr_t)ppfVar16) >> 8),1);
    }
  }
  return (uint)pfVar15 & 0xffffff00;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf6710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf6710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollisionCapsule */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf6750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf6750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00c246b0(in_ecx GEN_EDX_FWD,0);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e180));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1375ac0));
  in_ecx[0x2d] = GEN_FLT_TO(in_ecx[0x2d], REFG(float, 0x1375ac4));
  in_ecx[0x2e] = GEN_FLT_TO(in_ecx[0x2e], REFG(float, 0x1375ac8));
  in_ecx[0x30] = GEN_FLT_TO(in_ecx[0x30], REFG(float, 0x1375ac0));
  in_ecx[0x31] = GEN_FLT_TO(in_ecx[0x31], REFG(float, 0x1375ac4));
  in_ecx[0x32] = GEN_FLT_TO(in_ecx[0x32], REFG(float, 0x1375ac8));
  in_ecx[0x34] = GEN_FLT_TO(in_ecx[0x34], REFG(float, 0x1375ac0));
  in_ecx[0x35] = GEN_FLT_TO(in_ecx[0x35], REFG(float, 0x1375ac4));
  in_ecx[0x36] = GEN_FLT_TO(in_ecx[0x36], REFG(float, 0x1375ac8));
  in_ecx[0x40] = 0xffffffff;
  in_ecx[0x41] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::Setup */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf68b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbf68b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  code * pcVar1;
  byte bVar2;
  
  bVar2 = F_00c24640(param_1 GEN_EDX_FWD,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x102) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x100) = (undefined2)param_4;
  *(undefined4 *)(param_1 + 0x80) = *param_6;
  *(undefined4 *)(param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x88) = param_6[2];
  *(undefined4 *)(param_1 + 0x90) = *param_7;
  *(undefined4 *)(param_1 + 0x94) = param_7[1];
  *(undefined4 *)(param_1 + 0x98) = param_7[2];
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x14)));
  *(float *)(param_1 + 0x104) = param_8;
  (*pcVar1)(param_1);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::ResetTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf6940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf6940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x210, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  undefined4 * puVar8;
  float * pfVar9;
  float * pfVar10;
  uint uVar11;
  int iVar12;
  float * pfVar13;
  undefined * pCVar14;
  undefined4 * puVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = *(undefined * PTR32 *)(this + 0x28);
  puVar8 = ((undefined4 *)GEN_TOP(F_00623320(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,(uint)*(ushort *)(this + 0x100))));
  puVar15 = ((undefined4 *)(gen_frame + 0xf0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
    *puVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar15 = puVar15 + 1;
  }
  pfVar9 = ((float *)GEN_TOP(F_004f45d0(((undefined4 *)(gen_frame + 0x170)),((undefined4 *)(gen_frame + 0xf0)))));
  pfVar13 = ((float *)(gen_frame + 0x1b0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
    *pfVar13 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar13 = pfVar13 + 1;
  }
  pfVar9 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x80,((float *)(gen_frame + 0x1b0)))));
  pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
  (*(float *)(gen_frame + 0x60)) = *pfVar9;
  (*(float *)(gen_frame + 0x64)) = pfVar9[1];
  uVar7 = *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x102);
  (*(float *)(gen_frame + 0x68)) = pfVar9[2];
  pfVar9 = (float *)&REFG(float, 0x1302d00);
  pfVar13 = ((float *)(gen_frame + 0x0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
    *pfVar13 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar13 = pfVar13 + 1;
  }
  if (*(ushort *)(pCVar14 + 0x100) == uVar7) {
    pfVar9 = ((float *)(gen_frame + 0x1b0));
    pfVar13 = ((float *)(gen_frame + 0x0));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
      *pfVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar13 = pfVar13 + 1;
    }
    pfVar9 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x40)),pCVar14 + 0x90,((float *)(gen_frame + 0x1b0)))));
    pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
  }
  else {
    puVar8 = ((undefined4 *)GEN_TOP(F_00623320((*(undefined * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,(uint)uVar7)));
    puVar15 = ((undefined4 *)(gen_frame + 0x130));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
      *puVar15 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar8 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0xb0)),((undefined4 *)(gen_frame + 0x130)))));
    pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
    puVar15 = ((undefined4 *)(gen_frame + 0x170));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
      *puVar15 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    }
    pfVar9 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x90,((undefined4 *)(gen_frame + 0x170)))));
  }
  fVar1 = *pfVar9;
  fVar16 = (float10)(*(float *)(gen_frame + 0x60));
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar3;
  *(float *)(pCVar14 + 0xa0) = (*(float *)(gen_frame + 0x60));
  fVar4 = (float)((float10)fVar1 + fVar16);
  (*(float *)(gen_frame + 0x70)) = fVar4;
  *(float *)(pCVar14 + 0xa4) = (*(float *)(gen_frame + 0x64));
  fVar17 = (float10)(*(float *)(gen_frame + 0x64));
  *(float *)(pCVar14 + 0xa8) = (*(float *)(gen_frame + 0x68));
  *(float *)(pCVar14 + 0xb0) = fVar1;
  *(float *)(pCVar14 + 0xb4) = fVar2;
  *(float *)(pCVar14 + 0xb8) = fVar3;
  fVar5 = (float)(fVar17 + (float10)fVar2);
  (*(float *)(gen_frame + 0x74)) = fVar5;
  *(undefined4 *)(pCVar14 + 0xc0) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 0xc0), REFG(float, 0x1375ac0));
  *(undefined4 *)(pCVar14 + 0xc4) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 0xc4), REFG(float, 0x1375ac4));
  fVar18 = (float10)(*(float *)(gen_frame + 0x68));
  *(undefined4 *)(pCVar14 + 200) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 200), REFG(float, 0x1375ac8));
  *(undefined4 *)(pCVar14 + 0xd0) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 0xd0), REFG(float, 0x1375ac0));
  fVar6 = (float)(fVar18 + (float10)fVar3);
  (*(float *)(gen_frame + 0x78)) = fVar6;
  *(undefined4 *)(pCVar14 + 0xd4) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 0xd4), REFG(float, 0x1375ac4));
  fVar19 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)(pCVar14 + 0xd8) = GEN_FLT_TO(*(undefined4 *)(pCVar14 + 0xd8), REFG(float, 0x1375ac8));
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar4 * fVar19);
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar5 * fVar19);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar19 * (float10)fVar6);
  fVar1 = (float)((float10)fVar1 - fVar16);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar2 = (float)((float10)fVar2 - fVar17);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar3 = (float)((float10)fVar3 - fVar18);
  (*(float *)(gen_frame + 0x78)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar3;
  pfVar9 = ((float *)GEN_TOP(F_0046f390(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG)));
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = pfVar9[1];
  (*(float *)(gen_frame + 0x98)) = pfVar9[2];
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)pfVar9[2] +
                 ((float10)(*(float *)(gen_frame + 0x20)) * (float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)) * (float10)pfVar9[1]))));
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  if (*(double *)&REFG(undefined, 0x1094818) < (double)fVar1) {
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x18));
    F_0054ce40(&(*(float *)(gen_frame + 0x70)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x60)));
    pfVar9 = &(*(float *)(gen_frame + 0x90));
    pfVar13 = &(*(float *)(gen_frame + 0x70));
    pfVar10 = &(*(float *)(gen_frame + 0x50));
  }
  else {
    F_0054ce40(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x60)),(uint)&(*(float *)(gen_frame + 0x90)));
    pfVar9 = &(*(float *)(gen_frame + 0x50));
    pfVar13 = &(*(float *)(gen_frame + 0x90));
    pfVar10 = &(*(float *)(gen_frame + 0x70));
  }
  F_0054ce40(pfVar10,(uint)pfVar13,(uint)pfVar9);
  F_0046f390(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG);
  uVar11 = F_0046f390(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x70));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x74));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x78));
  *(float *)(pCVar14 + 0xe0) = (*(float *)(gen_frame + 0x50));
  *(float *)(pCVar14 + 0xe4) = (*(float *)(gen_frame + 0x54));
  *(float *)(pCVar14 + 0xe8) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x40));
  *(float *)(pCVar14 + 0xf0) = (*(float *)(gen_frame + 0x90));
  *(float *)(pCVar14 + 0xf4) = (*(float *)(gen_frame + 0x94));
  *(float *)(pCVar14 + 0xf8) = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  ((float *)(gen_frame + 0x0))[0] = (*(float *)(gen_frame + 0x90));
  ((float *)(gen_frame + 0x0))[1] = (*(float *)(gen_frame + 0x94));
  ((float *)(gen_frame + 0x0))[2] = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x48));
  pfVar9 = ((float *)(gen_frame + 0x0));
  pCVar14 = pCVar14 + 0x30;
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 - 1) {
    *(float *)pCVar14 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pCVar14 = pCVar14 + 4;
  }
  return uVar11;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::UpdateTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbf6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  undefined * this_00;
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined * pCVar4;
  float10 fVar5;
  float10 fVar6;
  undefined * pCVar7;
  undefined * pCVar8;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  this_00 = this + 0x30;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = *(undefined * PTR32 *)(this + 0x28);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD,this_00,(uint)*(ushort *)(this + 0x100));
  F_004ee970(&(*(float *)(gen_frame + 0x0)),this + 0x80,this_00);
  if (*(ushort *)(this + 0x100) == *(ushort *)(this + 0x102)) {
    uVar3 = F_004ee970(&(*(float *)(gen_frame + 0x10)),this + 0x90,this_00);
  }
  else {
    F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0x102));
    F_004ee970(&(*(float *)(gen_frame + 0x10)),this + 0x90,((undefined1 *)(gen_frame + 0x30)));
    *(float *)this_00 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x0)));
    *(float *)(this + 0x34) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x4)));
    *(float *)(this + 0x38) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x8)));
    F_0046f390(this_00 GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)(this + 0x34))));
    (*(float *)(gen_frame + 0x2c)) = *(float *)(this + 0x38);
    fVar6 = (float10)*(float *)(this + 0x34);
    fVar5 = (float10)*(float *)(this + 0x38);
    fVar2 = ((float)GEN_TOF((((float10)*(float *)((int)(uintptr_t)this_00) * (float10)*(float *)(this + 0xf0) +
                    fVar6 * (float10)*(float *)(this + 0xf4)) +
                   fVar5 * (float10)*(float *)(this + 0xf8))));
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    fVar1 = ((float)GEN_TOF((((float10)*(float *)(this + 0xe4) * fVar6 +
                    (float10)*(float *)(this + 0xe0) * (float10)*(float *)this_00) +
                   (float10)*(float *)(this + 0xe8) * fVar5)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    if ((float10)fVar1 < (float10)fVar2) {
      F_0054ce40(this + 0x50,(uint)this_00,(uint)(this + 0xe0));
      pCVar4 = this + 0x40;
      pCVar7 = this + 0x50;
      pCVar8 = this_00;
    }
    else {
      F_0054ce40(this + 0x40,(uint)(this + 0xf0),(uint)this_00);
      pCVar8 = this + 0x40;
      pCVar4 = this + 0x50;
      pCVar7 = this_00;
    }
    F_0054ce40(pCVar4,(uint)pCVar7,(uint)pCVar8);
    F_0046f390(this + 0x40 GEN_EDX_ARG);
    uVar3 = F_0046f390(this + 0x50 GEN_EDX_ARG);
  }
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar6 = (float10)REFG(double, 0x1088108);
  *(float *)(this + 0x60) = (float)((float10)fVar2 * fVar6);
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  *(float *)(this + 100) = (float)((float10)fVar2 * fVar6);
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  *(float *)(this + 0x68) = (float)((float10)fVar2 * fVar6);
  *(float *)(this + 0xa0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xc0) + (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0xa4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) + (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 200) + (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0xb0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb0) + (float10)*(float *)(this + 0xd0))));
  *(float *)(this + 0xb4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xd4) + (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0xb8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb8) + (float10)*(float *)(this + 0xd8))));
  *(float *)(this + 0xc0) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) - (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0xc4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 200) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0xd0) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0xd4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0xd8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0xb8))));
  return uVar3;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::GetPushDirection */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bf7140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbf7140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0xc0))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) + (float10)*(float *)(this + 0xc4))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 200))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb0) + (float10)*(float *)(this + 0xd0))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb4) + (float10)*(float *)(this + 0xd4))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb8) + (float10)*(float *)(this + 0xd8))));
  F_00c262e0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),param_2,&(*(float *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x3c)));
  *param_1 = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x8)));
  uVar1 = F_0046f390(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollidePoint */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf7200(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbf7200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar9 = (float10)param_6;
  fVar1 = param_2[2];
  fVar2 = ((float)GEN_TOF((fVar9 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xc0))))));
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xc4))) * fVar9)));
  (*(float *)(gen_frame + 0x44)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  ((float *)(gen_frame + 0x6c))[1] = 0.0;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 200))) * fVar9)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa0))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa4))) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa8))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xd0))) * fVar9)));
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xd4))) * fVar9)));
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = ((float)GEN_TOF((fVar9 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xd8))))));
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb0))) + (float10)fVar4)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb4))) + (float10)fVar5)));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb8))) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar1;
  F_00c262e0(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),((float *)(gen_frame + 0x6c)) + 1);
  (*(byte *)(gen_frame + 0x7f)) = 0;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x28)));
  fVar9 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24))));
  fVar10 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x20))));
  fVar11 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x28))));
  fVar1 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
  ((float *)(gen_frame + 0x6c))[2] = fVar1;
  fVar2 = *((float *)GEN_TOP(((int)param_1 + 0x104)));
  (*(float *)(gen_frame + 0x78)) = fVar2;
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar11 + ((float10)param_2[0x14] + (float10)param_2[0x14]))));
  ((float *)(gen_frame + 0x6c))[0] = fVar2;
  fVar9 = (float10)fVar2;
  fVar10 = (float10)fVar1;
  fVar1 = (float)(fVar9 * fVar9);
  ((float *)(gen_frame + 0x6c))[0] = fVar1;
  if (fVar10 < (float10)fVar1) {
    bVar7 = F_00c24d00(param_1 GEN_EDX_ARG,param_3,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
    if (bVar7 == 0) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x0))
                      ) + (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x8)))));
      ((float *)(gen_frame + 0x6c))[0] = fVar1;
      fVar9 = (float10)fVar1;
      fVar1 = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar2 = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8)));
      fVar10 = (float10)fVar1;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x50)) - fVar10);
      (*(float *)(gen_frame + 0x30)) = fVar1;
      fVar11 = (float10)fVar2;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x54)) - fVar11);
      (*(float *)(gen_frame + 0x34)) = fVar2;
      fVar9 = GEN_X87((float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8))));
      fVar3 = (float)((float10)(*(float *)(gen_frame + 0x58)) - fVar9);
      (*(float *)(gen_frame + 0x38)) = fVar3;
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar1 - fVar10);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar2 - fVar11);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar3 - fVar9);
    }
    fVar11 = (float10)(*(float *)(gen_frame + 0x78));
    fVar10 = (float10)((float *)(gen_frame + 0x6c))[2];
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
    fVar1 = param_2[0x14];
    ((float *)(gen_frame + 0x6c))[0] = 0.0;
    pfVar8 = &(*(float *)(gen_frame + 0x78));
    (*(float *)(gen_frame + 0x78)) = (float)(fVar11 - (float10)fVar1);
    if (!((float10)0 < (float10)(float)(fVar11 - (float10)fVar1))) {
      pfVar8 = ((float *)(gen_frame + 0x6c));
    }
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar11 = (float10)fVar1;
    if (fVar11 * fVar11 < fVar10) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
  }
  else {
    fVar1 = param_2[0x14];
    ((float *)(gen_frame + 0x6c))[0] = 0.0;
    pfVar8 = &(*(float *)(gen_frame + 0x78));
    (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar1 + fVar11);
    if (!((float10)0 < (float10)(float)((float10)fVar1 + fVar11))) {
      pfVar8 = ((float *)(gen_frame + 0x6c));
    }
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar11 = (float10)fVar1;
    if (fVar10 < fVar11 * fVar11) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
  }
  if ((*(byte *)(gen_frame + 0x7f)) == 0) {
    return 0;
  }
LAB_00bf749e: ;
  if (((float *)(gen_frame + 0x6c))[2] <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x50)) = 0.0;
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x58)) = 0.0;
  }
  else {
    ((float *)(gen_frame + 0x6c))[0] = ((float)GEN_TOF(GEN_X87(SQRT(fVar10))));
    fVar1 = (float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT(fVar10)))));
    ((float *)(gen_frame + 0x6c))[0] = fVar1;
    fVar9 = (float10)fVar1;
    (*(float *)(gen_frame + 0x50)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar9);
    (*(float *)(gen_frame + 0x58)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x58)));
    fVar11 = (float10)(*(float *)(gen_frame + 0x78));
  }
  fVar9 = (float10)(*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x40)) = (float)(fVar9 * fVar11);
  fVar10 = (float10)(*(float *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x44)) = (float)(fVar10 * fVar11);
  fVar12 = (float10)(*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar12 * fVar11);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar11) + (float10)(*(float *)(gen_frame + 0x20)))));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar11) + (float10)(*(float *)(gen_frame + 0x24)))));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar12 * fVar11) + (float10)(*(float *)(gen_frame + 0x28)))));
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar4 = *param_2;
  ((float *)(gen_frame + 0x6c))[0] = fVar4;
  fVar11 = (float10)fVar4;
  fVar1 = (float)((float10)fVar1 - fVar11);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar4 = param_2[1];
  ((float *)(gen_frame + 0x6c))[0] = fVar4;
  fVar13 = (float10)fVar4;
  fVar2 = (float)((float10)fVar2 - fVar13);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar4 = param_2[2];
  ((float *)(gen_frame + 0x6c))[2] = fVar4;
  fVar3 = (float)((float10)fVar3 - (float10)fVar4);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar5 = param_4[2];
  ((float *)(gen_frame + 0x6c))[0] = fVar5;
  fVar14 = (float10)fVar5;
  fVar1 = (float)(fVar14 * (float10)fVar1);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar14);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar3 = (float)(fVar14 * (float10)fVar3);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  *param_2 = (float)((float10)fVar1 + fVar11);
  param_2[1] = (float)(fVar13 + (float10)fVar2);
  param_2[2] = (float)((float10)fVar4 + (float10)fVar3);
  fVar1 = param_2[8];
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = param_2[9];
  fVar2 = param_2[10];
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar11 = (float10)param_2[9];
  fVar13 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * fVar12 + (fVar13 * fVar9 + fVar11 * fVar10))));
  ((float *)(gen_frame + 0x6c))[2] = fVar1;
  fVar14 = (float10)fVar1;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar14 * fVar9);
  (*(float *)(gen_frame + 0x54)) = (float)(fVar14 * fVar10);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar12 * fVar14);
  fVar3 = ((float)GEN_TOF((fVar13 - (float10)(float)(fVar14 * fVar9))));
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = ((float)GEN_TOF((fVar11 - (float10)(float)(fVar14 * fVar10))));
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 - (float10)(float)(fVar12 * fVar14))));
  (*(float *)(gen_frame + 0x48)) = fVar2;
  fVar5 = *param_4;
  ((float *)(gen_frame + 0x6c))[0] = (float)((float10)1 - (float10)fVar5);
  fVar9 = GEN_X87((float10)(float)((float10)1 - (float10)fVar5));
  fVar3 = (float)(fVar9 * (float10)fVar3);
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = (float)((float10)fVar4 * fVar9);
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar2 = (float)(fVar9 * (float10)fVar2);
  (*(float *)(gen_frame + 0x48)) = fVar2;
  if ((param_3 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
  }
  param_2[8] = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x50)));
  param_2[9] = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x54)));
  param_2[10] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x58)));
  fVar1 = param_4[1];
  ((float *)(gen_frame + 0x6c))[0] = fVar1;
  fVar9 = (float10)fVar1;
  param_2[8] = (float)(fVar9 * (float10)param_2[8]);
  param_2[9] = (float)((float10)param_2[9] * fVar9);
  param_2[10] = (float)(fVar9 * (float10)param_2[10]);
  return (*(byte *)(gen_frame + 0x7f));
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollideSegment */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf76d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xbf76d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  fVar1 = *((float *)GEN_TOP(((int)param_1 + 0xc0)));
  fVar13 = (float10)param_9;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  fVar1 = (float)(fVar13 * (float10)fVar1);
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x20)) = *param_3;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xc4))) * fVar13)));
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = param_3[1];
  (*(float *)(gen_frame + 0x28)) = param_3[2];
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 200))) * fVar13)));
  (*(float *)(gen_frame + 0xd8)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa0))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  fVar4 = *((float *)GEN_TOP(((int)param_1 + 0xa4)));
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar1 = (float)((float10)fVar4 + (float10)fVar2);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa8))) + (float10)fVar3)));
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xd0))) * fVar13)));
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xd4))) * fVar13)));
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar13 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xd8))))));
  (*(float *)(gen_frame + 0xe8)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb0))) + (float10)fVar1)));
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb4))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0xe4)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xb8))) + (float10)fVar3)));
  (*(float *)(gen_frame + 0xe8)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  F_00c26450(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xbc)),&(*(float *)(gen_frame + 0xcc)));
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x58)));
  if (param_7 == '\0') {
    (*(float *)(gen_frame + 0x70)) = param_2[0x10];
    (*(float *)(gen_frame + 0x74)) = param_2[0x11];
    (*(float *)(gen_frame + 0x78)) = param_2[0x12];
    (*(float *)(gen_frame + 0x80)) = param_3[0x10];
    (*(float *)(gen_frame + 0x84)) = param_3[0x11];
    (*(float *)(gen_frame + 0x88)) = param_3[0x12];
    F_00c26450(&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xfc)),&(*(float *)(gen_frame + 0x9c)))
    ;
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0xe0)));
    (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0xe4)));
    (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0xe8)));
    (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0xd0));
    (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0xd4));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xd8));
    F_0046f390(&(*(float *)(gen_frame + 0xa0)) GEN_EDX_ARG);
    F_0046f390(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xf8)) = 0.0;
    pfVar12 = &(*(float *)(gen_frame + 0xf8));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0x88)) +
                   ((float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0x84)) + (float10)(*(float *)(gen_frame + 0x80)) * (float10)(*(float *)(gen_frame + 0xa0))))));
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    fVar1 = ((float)GEN_TOF(-(float10)fVar1));
    (*(float *)(gen_frame + 0xc4)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar12 = &(*(float *)(gen_frame + 0xc4));
    }
    fVar1 = *pfVar12;
    fVar2 = *param_2;
    (*(float *)(gen_frame + 0xf8)) = fVar1;
    (*(float *)(gen_frame + 0xfc)) = fVar2;
    fVar13 = (float10)fVar2;
    fVar2 = (float)((float10)param_2[0x10] - fVar13);
    (*(float *)(gen_frame + 0xe0)) = fVar2;
    fVar3 = param_2[1];
    (*(float *)(gen_frame + 0xfc)) = fVar3;
    fVar14 = (float10)fVar3;
    fVar3 = (float)((float10)param_2[0x11] - fVar14);
    (*(float *)(gen_frame + 0xe4)) = fVar3;
    fVar4 = param_2[2];
    (*(float *)(gen_frame + 0xfc)) = fVar4;
    fVar15 = (float10)fVar4;
    fVar4 = (float)((float10)param_2[0x12] - fVar15);
    (*(float *)(gen_frame + 0xe8)) = fVar4;
    fVar16 = (float10)fVar1;
    fVar1 = (float)(fVar16 * (float10)fVar2);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = (float)((float10)fVar3 * fVar16);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = (float)((float10)fVar4 * fVar16);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    *param_2 = (float)((float10)fVar1 + fVar13);
    param_2[1] = (float)((float10)fVar2 + fVar14);
    param_2[2] = (float)(fVar15 + (float10)fVar3);
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    fVar13 = (float10)fVar1;
    fVar1 = (float)((float10)param_3[0x10] - fVar13);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = param_3[1];
    (*(float *)(gen_frame + 0xfc)) = fVar2;
    fVar14 = (float10)fVar2;
    fVar2 = (float)((float10)param_3[0x11] - fVar14);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = param_3[2];
    (*(float *)(gen_frame + 0xfc)) = fVar3;
    fVar15 = (float10)fVar3;
    fVar3 = (float)((float10)param_3[0x12] - fVar15);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    fVar1 = (float)((float10)fVar1 * fVar16);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar16);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = (float)((float10)fVar3 * fVar16);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    *param_3 = (float)((float10)fVar1 + fVar13);
    param_3[1] = (float)(fVar14 + (float10)fVar2);
    param_3[2] = (float)(fVar15 + (float10)fVar3);
  }
  pfVar12 = &(*(float *)(gen_frame + 0xc0));
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xd8)) * (float10)(*(float *)(gen_frame + 0xd8)) +
                 ((float10)(*(float *)(gen_frame + 0xd4)) * (float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0xd0)) * (float10)(*(float *)(gen_frame + 0xd0))))));
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = *((float *)GEN_TOP(((int)param_1 + 0x104)));
  (*(float *)(gen_frame + 0xfc)) = fVar2;
  fVar13 = (float10)fVar2;
  (*(float *)(gen_frame + 0xfc)) = 0.0;
  fVar14 = (float10)param_4;
  fVar2 = (float)(fVar14 + fVar13);
  (*(float *)(gen_frame + 0xc0)) = fVar2;
  if (!((float10)0 < (float10)fVar2)) {
    pfVar12 = &(*(float *)(gen_frame + 0xfc));
  }
  (*(float *)(gen_frame + 0xfc)) = *pfVar12;
  (*(char *)(gen_frame + 0xcb)) = '\0';
  fVar2 = ((float)GEN_TOF(((fVar14 + fVar14) + fVar13)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar13 = (float10)fVar2;
  fVar2 = (float)(fVar13 * fVar13);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  if (((float10)fVar1 < (float10)fVar2) &&
     (bVar11 = F_00c24d00(param_1 GEN_EDX_ARG,param_5,&(*(float *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0))), bVar11 == 0)) {
    (*(float *)(gen_frame + 0xd0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0xd4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd4))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0xd8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd8))) ^ REFG(uint, 0x10920d0));
    (*(char *)(gen_frame + 0xcb)) = '\x01';
  }
  else if (!((float10)(*(float *)(gen_frame + 0xc4)) < (float10)(*(float *)(gen_frame + 0xfc)) * (float10)(*(float *)(gen_frame + 0xfc)))) {
    return 0;
  }
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)(*(float *)(gen_frame + 0xc4))))));
  (*(float *)(gen_frame + 0xf8)) = fVar1;
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = (float)((float10)1 / (float10)fVar1);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar15 = (float10)fVar2;
  fVar13 = (float10)(*(float *)(gen_frame + 0xd0));
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar15 * fVar13);
  fVar16 = (float10)(*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar16 * fVar15);
  fVar14 = (float10)(*(float *)(gen_frame + 0xd8));
  (*(float *)(gen_frame + 0xd8)) = (float)(fVar15 * fVar14);
  if ((*(char *)(gen_frame + 0xcb)) != '\0') {
    (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x104))) + (float10)fVar1)));
  }
  fVar1 = (float)((float10)1 - (float10)*param_6);
  (*(float *)(gen_frame + 0xcc)) = fVar1;
  fVar2 = param_3[9];
  (*(float *)(gen_frame + 0x9c)) = fVar2;
  fVar3 = param_3[8];
  (*(float *)(gen_frame + 0xf8)) = fVar3;
  fVar4 = param_3[10];
  (*(float *)(gen_frame + 0xc0)) = fVar4;
  fVar17 = (float10)fVar3;
  fVar13 = GEN_X87((float10)(float)(fVar15 * fVar13));
  fVar18 = (float10)fVar2;
  fVar16 = GEN_X87((float10)(float)(fVar16 * fVar15));
  fVar14 = GEN_X87((float10)(float)(fVar15 * fVar14));
  fVar2 = ((float)GEN_TOF(((fVar13 * fVar17 + fVar16 * fVar18) + fVar14 * (float10)fVar4)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar15 = (float10)fVar2;
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar15 * fVar13);
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar16 * fVar15);
  (*(float *)(gen_frame + 0xd8)) = (float)(fVar15 * fVar14);
  fVar3 = ((float)GEN_TOF((fVar17 - (float10)(float)(fVar15 * fVar13))));
  (*(float *)(gen_frame + 0xe0)) = fVar3;
  fVar5 = ((float)GEN_TOF((fVar18 - (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0xe4)) = fVar5;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 - (float10)(float)(fVar15 * fVar14))));
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  fVar15 = (float10)fVar1;
  fVar1 = (float)(fVar15 * (float10)fVar3);
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  fVar3 = (float)((float10)fVar5 * fVar15);
  (*(float *)(gen_frame + 0xe4)) = fVar3;
  fVar4 = (float)((float10)fVar4 * fVar15);
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  if (fVar2 <= 0.0) {
    (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0xf8)) = REFG(float, 0x1087f04);
  fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xd0)));
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xd4)));
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xd8)));
  (*(float *)(gen_frame + 0x88)) = fVar3;
  fVar4 = param_6[1];
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar17 = (float10)fVar4;
  fVar1 = (float)(fVar17 * (float10)fVar1);
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar17);
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar3 = (float)(fVar17 * (float10)fVar3);
  (*(float *)(gen_frame + 0x88)) = fVar3;
  if (param_7 != '\0') {
    (*(float *)(gen_frame + 0xcc)) = (*(float *)(gen_frame + 0xbc));
    (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x10ac168);
    pfVar12 = &(*(float *)(gen_frame + 0xcc));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0xbc)))) {
      pfVar12 = &(*(float *)(gen_frame + 0x9c));
    }
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)1 / (float10)*pfVar12);
  }
  fVar17 = (float10)(*(float *)(gen_frame + 0xfc));
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  pfVar12 = &(*(float *)(gen_frame + 0xfc));
  (*(float *)(gen_frame + 0xfc)) = (float)(fVar17 - (float10)(*(float *)(gen_frame + 0xc4)));
  if (!((float10)0 < (float10)(float)(fVar17 - (float10)(*(float *)(gen_frame + 0xc4))))) {
    pfVar12 = &(*(float *)(gen_frame + 0xcc));
  }
  fVar4 = ((float)GEN_TOF((((float10)param_6[2] * (float10)*pfVar12) * (float10)(*(float *)(gen_frame + 0xf8)))));
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar17 = (float10)fVar4;
  fVar4 = (float)(fVar17 * fVar13);
  (*(float *)(gen_frame + 0xa0)) = fVar4;
  fVar5 = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0xa4)) = fVar5;
  fVar6 = (float)(fVar17 * fVar14);
  (*(float *)(gen_frame + 0xa8)) = fVar6;
  if (param_7 == '\0') {
    fVar7 = param_2[9];
    (*(float *)(gen_frame + 0xcc)) = fVar7;
    fVar8 = param_2[8];
    (*(float *)(gen_frame + 0xfc)) = fVar8;
    fVar9 = param_2[10];
    (*(float *)(gen_frame + 0xbc)) = fVar9;
    fVar17 = (float10)fVar7;
    fVar7 = ((float)GEN_TOF(((float10)fVar9 * fVar14 + ((float10)fVar8 * fVar13 + fVar17 * fVar16))));
    (*(float *)(gen_frame + 0xf8)) = fVar7;
    fVar18 = (float10)fVar7;
    (*(float *)(gen_frame + 0xd0)) = (float)(fVar18 * fVar13);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar18 * fVar16);
    (*(float *)(gen_frame + 0xd8)) = (float)(fVar14 * fVar18);
    fVar8 = ((float)GEN_TOF(((float10)fVar8 - (float10)(float)(fVar18 * fVar13))));
    (*(float *)(gen_frame + 0xe0)) = fVar8;
    fVar10 = ((float)GEN_TOF((fVar17 - (float10)(float)(fVar18 * fVar16))));
    (*(float *)(gen_frame + 0xe4)) = fVar10;
    fVar9 = ((float)GEN_TOF(((float10)fVar9 - (float10)(float)(fVar14 * fVar18))));
    (*(float *)(gen_frame + 0xe8)) = fVar9;
    fVar8 = (float)((float10)fVar8 * fVar15);
    (*(float *)(gen_frame + 0xe0)) = fVar8;
    fVar10 = (float)((float10)fVar10 * fVar15);
    (*(float *)(gen_frame + 0xe4)) = fVar10;
    fVar9 = (float)(fVar15 * (float10)fVar9);
    (*(float *)(gen_frame + 0xe8)) = fVar9;
    if (fVar7 <= 0.0) {
      (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1375ac8);
    }
    *param_2 = (float)((float10)fVar4 + (float10)*param_2);
    param_2[1] = (float)((float10)fVar5 + (float10)param_2[1]);
    param_2[2] = (float)((float10)fVar6 + (float10)param_2[2]);
    fVar7 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0xd0)));
    (*(float *)(gen_frame + 0x60)) = fVar7;
    fVar8 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0xd4)));
    (*(float *)(gen_frame + 0x64)) = fVar8;
    fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0xd8)));
    (*(float *)(gen_frame + 0x68)) = fVar9;
    fVar10 = param_6[1];
    (*(float *)(gen_frame + 0xcc)) = fVar10;
    fVar13 = (float10)fVar10;
    param_2[8] = (float)(fVar13 * (float10)fVar7);
    param_2[9] = (float)((float10)fVar8 * fVar13);
    param_2[10] = (float)(fVar13 * (float10)fVar9);
  }
  *param_3 = (float)((float10)fVar4 + (float10)*param_3);
  param_3[1] = (float)((float10)param_3[1] + (float10)fVar5);
  param_3[2] = (float)((float10)param_3[2] + (float10)fVar6);
  param_3[8] = fVar1;
  param_3[9] = fVar2;
  param_3[10] = fVar3;
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollideSweptPoint */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf7e80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xbf7e80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL(0xf0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  float * pfVar20;
  bool bVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0xc0)));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar22 = (float10)fVar1;
  fVar23 = (float10)param_4;
  fVar1 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar2 = *((float *)GEN_TOP((param_1 + 0xc4)));
  (*(float *)(gen_frame + 0xdc)) = fVar2;
  fVar24 = (float10)fVar2;
  fVar2 = (float)(fVar24 * fVar23);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar3 = *((float *)GEN_TOP((param_1 + 200)));
  (*(float *)(gen_frame + 0xdc)) = fVar3;
  fVar25 = (float10)fVar3;
  fVar3 = (float)(fVar25 * fVar23);
  (*(float *)(gen_frame + 0x78)) = fVar3;
  fVar4 = *((float *)GEN_TOP((param_1 + 0xa0)));
  (*(float *)(gen_frame + 0xdc)) = fVar4;
  fVar26 = (float10)fVar4;
  fVar4 = (float)(fVar26 + (float10)fVar1);
  (*(float *)(gen_frame + 0x70)) = fVar4;
  fVar1 = *((float *)GEN_TOP((param_1 + 0xa4)));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar27 = (float10)fVar1;
  fVar5 = (float)(fVar27 + (float10)fVar2);
  (*(float *)(gen_frame + 0x74)) = fVar5;
  fVar6 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  fVar7 = (float)((float10)fVar3 + (float10)fVar6);
  (*(float *)(gen_frame + 0x78)) = fVar7;
  fVar8 = *((float *)GEN_TOP((param_1 + 0xd0)));
  (*(float *)(gen_frame + 0x8c)) = fVar8;
  (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar8 * fVar23);
  fVar9 = *((float *)GEN_TOP((param_1 + 0xd4)));
  (*(float *)(gen_frame + 0x88)) = fVar9;
  (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar9 * fVar23);
  fVar1 = *((float *)GEN_TOP((param_1 + 0xd8)));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar28 = (float10)fVar1;
  fVar1 = (float)(fVar28 * fVar23);
  (*(float *)(gen_frame + 0xc8)) = fVar1;
  fVar10 = *((float *)GEN_TOP((param_1 + 0xb0)));
  (*(float *)(gen_frame + 0xbc)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)((float10)fVar8 * fVar23))));
  (*(float *)(gen_frame + 0xc0)) = fVar11;
  fVar12 = *((float *)GEN_TOP((param_1 + 0xb4)));
  (*(float *)(gen_frame + 0xb8)) = fVar12;
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar23) + (float10)fVar12)));
  (*(float *)(gen_frame + 0xc4)) = fVar13;
  fVar14 = *((float *)GEN_TOP((param_1 + 0xb8)));
  (*(float *)(gen_frame + 0xdc)) = fVar14;
  fVar15 = (float)((float10)fVar1 + (float10)fVar14);
  (*(float *)(gen_frame + 0xc8)) = fVar15;
  fVar23 = (float10)param_5;
  fVar1 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = (float)(fVar23 * fVar24);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x60)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = fVar5;
  fVar16 = (float)(fVar23 * fVar25);
  (*(float *)(gen_frame + 0x48)) = fVar16;
  (*(float *)(gen_frame + 0x68)) = fVar7;
  (*(float *)(gen_frame + 0x0)) = fVar11;
  fVar17 = (float)(fVar26 + (float10)fVar1);
  (*(float *)(gen_frame + 0x40)) = fVar17;
  (*(float *)(gen_frame + 0x4)) = fVar13;
  (*(float *)(gen_frame + 0x8)) = fVar15;
  fVar1 = param_2[4];
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar18 = (float)(fVar27 + (float10)fVar2);
  (*(float *)(gen_frame + 0x44)) = fVar18;
  fVar2 = param_2[5];
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = param_2[6];
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar6 = (float)((float10)fVar16 + (float10)fVar6);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0xa0)) = (float)((float10)fVar8 * fVar23);
  (*(float *)(gen_frame + 0xa4)) = (float)((float10)fVar9 * fVar23);
  fVar16 = (float)(fVar28 * fVar23);
  (*(float *)(gen_frame + 0xa8)) = fVar16;
  fVar8 = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)((float10)fVar8 * fVar23))));
  (*(float *)(gen_frame + 0xa0)) = fVar8;
  (*(float *)(gen_frame + 0xb8)) = 0.0;
  fVar9 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar23) + (float10)fVar12)));
  (*(float *)(gen_frame + 0xa4)) = fVar9;
  fVar10 = (float)((float10)fVar16 + (float10)fVar14);
  (*(float *)(gen_frame + 0xa8)) = fVar10;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar17 - (float10)fVar4);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar18 - (float10)fVar5);
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar6 - (float10)fVar7);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar8 - (float10)fVar11);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar9 - (float10)fVar13);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar10 - (float10)fVar15);
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*param_2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_2[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)param_2[2] - (float10)fVar3);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x104))) + (float10)param_2[0x14])));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  pfVar20 = &(*(float *)(gen_frame + 0xdc));
  if (!((float10)0 < (float10)fVar1)) {
    pfVar20 = &(*(float *)(gen_frame + 0xb8));
  }
  fVar1 = *pfVar20;
  (*(float *)(gen_frame + 0xb8)) = fVar1;
  (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x1090708);
  bVar19 = F_00c26b40(&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x40)),fVar1,&(*(float *)(gen_frame + 0x5c)))
  ;
  if (bVar19 != 0) {
    fVar22 = (float10)(*(float *)(gen_frame + 0x5c));
    (*(float *)(gen_frame + 0xa0)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0x94)) * fVar22);
    (*(float *)(gen_frame + 0xdc)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0x98)) * fVar22);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x90))) + (float10)(*(float *)(gen_frame + 0x60)))));
    (*(float *)(gen_frame + 0xa0)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x94)) * fVar22) + (float10)(*(float *)(gen_frame + 0x64)))));
    (*(float *)(gen_frame + 0xa4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x98)) * fVar22) + (float10)(*(float *)(gen_frame + 0x68)))));
    (*(float *)(gen_frame + 0xa8)) = fVar3;
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar22);
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar22);
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar22);
    (*(float *)(gen_frame + 0xc0)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) * fVar22) + (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar22) + (float10)(*(float *)(gen_frame + 0x4)))));
    (*(float *)(gen_frame + 0xc8)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x18)) * fVar22) + (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar22);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar22);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x40)) * fVar22) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar22) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x48))) + (float10)(*(float *)(gen_frame + 0x38)))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_00c262e0(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xdc)));
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x28)));
    fVar22 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x20))));
    fVar23 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x24))));
    fVar24 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x28))));
    fVar1 = ((float)GEN_TOF((fVar24 * fVar24 + (fVar23 * fVar23 + fVar22 * fVar22))));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    bVar21 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)0);
    if (bVar21 != (bVar21 || (float10)fVar1 == (float10)0)) {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1094884);
      (*(float *)(gen_frame + 0x60)) = 0.0;
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1094884);
      (*(float *)(gen_frame + 0x68)) = 0.0;
    }
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0xbc)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x8c)));
    fVar24 = GEN_X87((float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0x8c))));
    fVar22 = (float10)(*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    (*(float *)(gen_frame + 0x60)) = (float)(fVar24 * fVar22);
    fVar25 = (float10)(*(float *)(gen_frame + 0x64));
    (*(float *)(gen_frame + 0x64)) = (float)(fVar25 * fVar24);
    fVar23 = (float10)(*(float *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x68)) = (float)(fVar24 * fVar23);
    fVar22 = GEN_X87((float10)(float)(fVar24 * fVar22));
    fVar25 = GEN_X87((float10)(float)(fVar25 * fVar24));
    fVar23 = GEN_X87((float10)(float)(fVar24 * fVar23));
    fVar2 = ((float)GEN_TOF((fVar23 * (float10)(*(float *)(gen_frame + 0x48)) +
                   ((float10)(*(float *)(gen_frame + 0x40)) * fVar22 + (float10)(*(float *)(gen_frame + 0x44)) * fVar25))));
    (*(float *)(gen_frame + 0x88)) = fVar2;
    fVar24 = (float10)fVar2;
    (*(float *)(gen_frame + 0xa0)) = (float)(fVar24 * fVar22);
    (*(float *)(gen_frame + 0xa4)) = (float)(fVar25 * fVar24);
    (*(float *)(gen_frame + 0xa8)) = (float)(fVar23 * fVar24);
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) - (float10)(float)(fVar24 * fVar22))));
    (*(float *)(gen_frame + 0x30)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) - (float10)(float)(fVar25 * fVar24))));
    (*(float *)(gen_frame + 0x34)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) - (float10)(float)(fVar23 * fVar24))));
    (*(float *)(gen_frame + 0x38)) = fVar5;
    if (fVar2 <= 0.0) {
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x88)) = 0.0;
      fVar24 = (float10)0.0;
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
    }
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x98)));
    fVar26 = (float10)(*(float *)(gen_frame + 0xdc));
    fVar2 = (float)(fVar26 * (float10)fVar2);
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x94))) * fVar26)));
    (*(float *)(gen_frame + 0xc4)) = fVar6;
    fVar7 = ((float)GEN_TOF((fVar26 * (float10)(float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x98))))));
    (*(float *)(gen_frame + 0xc8)) = fVar7;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)fVar2);
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xc4)) = fVar6;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0xc8)) = fVar7;
    fVar26 = (float10)fVar2;
    fVar2 = ((float)GEN_TOF(((float10)fVar7 * fVar23 + ((float10)fVar6 * fVar25 + fVar26 * fVar22))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    fVar27 = (float10)fVar2;
    fVar2 = (float)(fVar27 * fVar22);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar8 = (float)(fVar25 * fVar27);
    (*(float *)(gen_frame + 0x14)) = fVar8;
    fVar9 = (float)(fVar23 * fVar27);
    (*(float *)(gen_frame + 0x18)) = fVar9;
    fVar10 = (float)(fVar26 - (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar10;
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar6 - (float10)fVar8);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar7 - (float10)fVar9);
    fVar10 = (float)((float10)fVar10 - (float10)fVar3);
    (*(float *)(gen_frame + 0x90)) = fVar10;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar8) - (float10)fVar4)));
    (*(float *)(gen_frame + 0x94)) = fVar6;
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar9) - (float10)fVar5)));
    (*(float *)(gen_frame + 0x98)) = fVar7;
    fVar26 = (float10)fVar1;
    fVar1 = (float)(fVar26 * (float10)fVar10);
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar6 = (float)((float10)fVar6 * fVar26);
    (*(float *)(gen_frame + 0x94)) = fVar6;
    fVar7 = (float)(fVar26 * (float10)fVar7);
    (*(float *)(gen_frame + 0x98)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)fVar3);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar3 = (float)((float10)fVar6 + (float10)fVar4);
    (*(float *)(gen_frame + 0x34)) = fVar3;
    fVar4 = (float)((float10)fVar7 + (float10)fVar5);
    (*(float *)(gen_frame + 0x38)) = fVar4;
    if (fVar24 < fVar27) {
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      (*(float *)(gen_frame + 0xa4)) = fVar8;
      (*(float *)(gen_frame + 0xa8)) = fVar9;
    }
    pfVar20 = &(*(float *)(gen_frame + 0xdc));
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xa4)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xa8)));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    fVar24 = (float10)(*(float *)(gen_frame + 0xb8));
    (*(float *)(gen_frame + 0xb8)) = 0.0;
    (*(float *)(gen_frame + 0xdc)) = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x8c)));
    if (!((float10)0 < (float10)(float)(fVar24 - (float10)(*(float *)(gen_frame + 0x8c))))) {
      pfVar20 = &(*(float *)(gen_frame + 0xb8));
    }
    fVar4 = param_3[2];
    fVar5 = *pfVar20;
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)fVar4 * (float10)fVar5);
    fVar24 = GEN_X87((float10)(float)((float10)fVar4 * (float10)fVar5));
    (*(float *)(gen_frame + 0x60)) = (float)(fVar24 * fVar22);
    (*(float *)(gen_frame + 0x64)) = (float)(fVar25 * fVar24);
    (*(float *)(gen_frame + 0x68)) = (float)(fVar23 * fVar24);
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x5c)));
    fVar26 = GEN_X87((float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x5c))));
    fVar27 = (float10)fVar1;
    fVar1 = (float)(fVar27 * fVar26);
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar28 = (float10)fVar2;
    fVar2 = (float)(fVar28 * fVar26);
    (*(float *)(gen_frame + 0x94)) = fVar2;
    fVar29 = (float10)fVar3;
    fVar3 = (float)(fVar29 * fVar26);
    (*(float *)(gen_frame + 0x98)) = fVar3;
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x94)) = fVar2;
    fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x98)) = fVar3;
    *param_2 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar24 * fVar22))));
    param_2[1] = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar25 * fVar24))));
    param_2[2] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar23 * fVar24))));
    fVar1 = (float)(fVar27 - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)(fVar28 - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)(fVar29 - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    param_2[8] = (float)((float10)fVar1 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar2 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar3 + (float10)param_2[10]);
    fVar1 = param_3[1];
    (*(float *)(gen_frame + 0xdc)) = fVar1;
    fVar22 = (float10)fVar1;
    param_2[8] = (float)(fVar22 * (float10)param_2[8]);
    param_2[9] = (float)(fVar22 * (float10)param_2[9]);
    param_2[10] = (float)(fVar22 * (float10)param_2[10]);
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollideSweptSegment */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bf86b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbf86b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL(0x150, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte bVar24;
  float * pfVar25;
  bool bVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  
  fVar2 = *((float *)GEN_TOP((param_1 + 0xc0)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar27 = (float10)fVar2;
  fVar28 = (float10)param_7;
  fVar2 = (float)(fVar28 * fVar27);
  (*(float *)(gen_frame + 0xb0)) = fVar2;
  fVar3 = *((float *)GEN_TOP((param_1 + 0xc4)));
  (*(float *)(gen_frame + 0x13c)) = fVar3;
  fVar29 = (float10)fVar3;
  fVar3 = (float)(fVar29 * fVar28);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar4 = *((float *)GEN_TOP((param_1 + 200)));
  (*(float *)(gen_frame + 0x13c)) = fVar4;
  fVar30 = (float10)fVar4;
  fVar4 = (float)(fVar30 * fVar28);
  (*(float *)(gen_frame + 0xb8)) = fVar4;
  fVar5 = *((float *)GEN_TOP((param_1 + 0xa0)));
  (*(float *)(gen_frame + 0x13c)) = fVar5;
  fVar31 = (float10)fVar5;
  fVar6 = (float)(fVar31 + (float10)fVar2);
  (*(float *)(gen_frame + 0xb0)) = fVar6;
  fVar2 = *((float *)GEN_TOP((param_1 + 0xa4)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar32 = (float10)fVar2;
  fVar7 = (float)(fVar32 + (float10)fVar3);
  (*(float *)(gen_frame + 0xb4)) = fVar7;
  fVar8 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0x7c)) = fVar8;
  fVar9 = (float)((float10)fVar4 + (float10)fVar8);
  (*(float *)(gen_frame + 0xb8)) = fVar9;
  fVar10 = *((float *)GEN_TOP((param_1 + 0xd0)));
  (*(float *)(gen_frame + 0x134)) = fVar10;
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar10 * fVar28);
  fVar11 = *((float *)GEN_TOP((param_1 + 0xd4)));
  (*(float *)(gen_frame + 0xcc)) = fVar11;
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar11 * fVar28);
  fVar2 = *((float *)GEN_TOP((param_1 + 0xd8)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar33 = (float10)fVar2;
  fVar2 = (float)(fVar33 * fVar28);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar12 = *((float *)GEN_TOP((param_1 + 0xb0)));
  (*(float *)(gen_frame + 0x10c)) = fVar12;
  fVar13 = ((float)GEN_TOF(((float10)fVar12 + (float10)(float)((float10)fVar10 * fVar28))));
  (*(float *)(gen_frame + 0xf0)) = fVar13;
  fVar14 = *((float *)GEN_TOP((param_1 + 0xb4)));
  (*(float *)(gen_frame + 0x108)) = fVar14;
  fVar15 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar28) + (float10)fVar14)));
  (*(float *)(gen_frame + 0xf4)) = fVar15;
  fVar16 = *((float *)GEN_TOP((param_1 + 0xb8)));
  (*(float *)(gen_frame + 0x13c)) = fVar16;
  fVar17 = (float)((float10)fVar2 + (float10)fVar16);
  (*(float *)(gen_frame + 0xf8)) = fVar17;
  fVar28 = (float10)param_8;
  fVar18 = (float)(fVar28 * fVar27);
  (*(float *)(gen_frame + 0x110)) = fVar18;
  fVar19 = (float)(fVar28 * fVar29);
  (*(float *)(gen_frame + 0x114)) = fVar19;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = param_2[5];
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar20 = (float)(fVar28 * fVar30);
  (*(float *)(gen_frame + 0x118)) = fVar20;
  fVar4 = param_2[6];
  (*(float *)(gen_frame + 0x48)) = fVar4;
  fVar5 = param_3[4];
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar1 = param_3[5];
  fVar21 = (float)(fVar31 + (float10)fVar18);
  (*(float *)(gen_frame + 0x110)) = fVar21;
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar18 = param_3[6];
  (*(float *)(gen_frame + 0x68)) = fVar18;
  (*(float *)(gen_frame + 0x10)) = fVar6;
  fVar19 = (float)(fVar32 + (float10)fVar19);
  (*(float *)(gen_frame + 0x114)) = fVar19;
  (*(float *)(gen_frame + 0x14)) = fVar7;
  (*(float *)(gen_frame + 0x18)) = fVar9;
  fVar8 = (float)((float10)fVar20 + (float10)fVar8);
  (*(float *)(gen_frame + 0x118)) = fVar8;
  (*(float *)(gen_frame + 0x30)) = fVar13;
  (*(float *)(gen_frame + 0x34)) = fVar15;
  (*(float *)(gen_frame + 0x38)) = fVar17;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar10 * fVar28);
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar11 * fVar28);
  fVar20 = (float)(fVar33 * fVar28);
  (*(float *)(gen_frame + 0x58)) = fVar20;
  fVar10 = ((float)GEN_TOF(((float10)fVar12 + (float10)(float)((float10)fVar10 * fVar28))));
  (*(float *)(gen_frame + 0x50)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar28) + (float10)fVar14)));
  (*(float *)(gen_frame + 0x54)) = fVar11;
  fVar12 = (float)((float10)fVar20 + (float10)fVar16);
  (*(float *)(gen_frame + 0x58)) = fVar12;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_2 - (float10)fVar2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_2[1] - (float10)fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)param_2[2] - (float10)fVar4);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_3[1] - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_3[2] - (float10)fVar18);
  (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar21 - (float10)fVar6);
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar19 - (float10)fVar7);
  (*(float *)(gen_frame + 0x108)) = 0.0;
  pfVar25 = &(*(float *)(gen_frame + 0x13c));
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar8 - (float10)fVar9);
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar10 - (float10)fVar13);
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)fVar11 - (float10)fVar15);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar12 - (float10)fVar17);
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x104))) + (float10)param_4)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  if (!((float10)0 < (float10)fVar2)) {
    pfVar25 = &(*(float *)(gen_frame + 0x108));
  }
  fVar2 = *pfVar25;
  (*(float *)(gen_frame + 0x108)) = fVar2;
  (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x1090708);
  bVar24 = F_00c257a0(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x120)),
                        &(*(float *)(gen_frame + 0xd0)),fVar2,&(*(float *)(gen_frame + 0x7c)));
  if (bVar24 == 0) {
    return 0;
  }
  fVar27 = (float10)(*(float *)(gen_frame + 0x7c));
  (*(float *)(gen_frame + 0x50)) = (float)(fVar27 * (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar27);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar27);
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)(*(float *)(gen_frame + 0x20))) + (float10)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  (*(float *)(gen_frame + 0xe0)) = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar27) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar27) + (float10)(*(float *)(gen_frame + 0x48)))));
  (*(float *)(gen_frame + 0x58)) = fVar2;
  (*(float *)(gen_frame + 0xe8)) = fVar2;
  (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar27);
  (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar27);
  (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x8)) * fVar27);
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) * fVar27) + (float10)(*(float *)(gen_frame + 0x60)))));
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar27) + (float10)(*(float *)(gen_frame + 0x64)))));
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) * fVar27) + (float10)(*(float *)(gen_frame + 0x68)))));
  (*(float *)(gen_frame + 0x88)) = fVar4;
  (*(float *)(gen_frame + 0x110)) = (float)((float10)(*(float *)(gen_frame + 0x120)) * fVar27);
  (*(float *)(gen_frame + 0x114)) = (float)((float10)(*(float *)(gen_frame + 0x124)) * fVar27);
  (*(float *)(gen_frame + 0x118)) = (float)((float10)(*(float *)(gen_frame + 0x128)) * fVar27);
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x120)) * fVar27) + (float10)(*(float *)(gen_frame + 0x10)))));
  (*(float *)(gen_frame + 0x110)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x124)) * fVar27) + (float10)(*(float *)(gen_frame + 0x14)))));
  (*(float *)(gen_frame + 0x114)) = fVar1;
  fVar18 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x128)) * fVar27) + (float10)(*(float *)(gen_frame + 0x18)))));
  (*(float *)(gen_frame + 0x118)) = fVar18;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) * fVar27);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar27);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar27 * (float10)(*(float *)(gen_frame + 0xd8)));
  fVar6 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd0)) * fVar27) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x90)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar27) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x94)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)(*(float *)(gen_frame + 0xd8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0x98)) = fVar8;
  (*(float *)(gen_frame + 0xf0)) = fVar2;
  (*(float *)(gen_frame + 0xf4)) = fVar3;
  (*(float *)(gen_frame + 0xf8)) = fVar4;
  (*(float *)(gen_frame + 0xa0)) = fVar5;
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  (*(float *)(gen_frame + 0xa8)) = fVar18;
  (*(float *)(gen_frame + 0xb0)) = fVar6;
  (*(float *)(gen_frame + 0xb4)) = fVar7;
  (*(float *)(gen_frame + 0xb8)) = fVar8;
  F_00c26450(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x110)),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x13c)),&(*(float *)(gen_frame + 0x138)));
  (*(float *)(gen_frame + 0x10c)) = REFG(float, 0x1087f04);
  if (param_6 != '\0') {
    (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0x13c));
    (*(float *)(gen_frame + 0xcc)) = REFG(float, 0x10ac168);
    pfVar25 = &(*(float *)(gen_frame + 0x10c));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x13c)))) {
      pfVar25 = &(*(float *)(gen_frame + 0xcc));
    }
    (*(float *)(gen_frame + 0x10c)) = (float)((float10)1 / (float10)*pfVar25);
  }
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x114)) - (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0x118)) - (float10)(*(float *)(gen_frame + 0x98)));
  fVar27 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x114)) - (float10)(*(float *)(gen_frame + 0x94))));
  fVar28 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x90))));
  fVar29 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x118)) - (float10)(*(float *)(gen_frame + 0x98))));
  fVar2 = ((float)GEN_TOF((fVar29 * fVar29 + (fVar28 * fVar28 + fVar27 * fVar27))));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  (*(float *)(gen_frame + 0x134)) = fVar2;
  fVar27 = (float10)fVar2;
  bVar26 = GEN_ISNAN(fVar27) || GEN_ISNAN((float10)0);
  if (bVar26 != (bVar26 || fVar27 == (float10)0)) {
    (*(float *)(gen_frame + 0x134)) = REFG(float, 0x1094884);
    fVar27 = (float10)REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xb0)) = 0.0;
    (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xb8)) = 0.0;
  }
  fVar2 = *param_5;
  (*(float *)(gen_frame + 0x13c)) = (float)((float10)1 / fVar27);
  fVar29 = GEN_X87((float10)(float)((float10)1 / fVar27));
  fVar28 = (float10)(*(float *)(gen_frame + 0xb0));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar29 * fVar28);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar29);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar4 = (float)(fVar29 * (float10)(*(float *)(gen_frame + 0xb8)));
  (*(float *)(gen_frame + 0xb8)) = fVar4;
  fVar28 = GEN_X87((float10)(float)(fVar29 * fVar28));
  fVar29 = (float10)fVar3;
  fVar30 = (float10)fVar4;
  fVar5 = ((float)GEN_TOF((fVar30 * (float10)(*(float *)(gen_frame + 0x8)) +
                 (fVar29 * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * fVar28))));
  (*(float *)(gen_frame + 0x134)) = fVar5;
  fVar31 = (float10)fVar5;
  (*(float *)(gen_frame + 0x90)) = (float)(fVar31 * fVar28);
  (*(float *)(gen_frame + 0x94)) = (float)(fVar29 * fVar31);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar30 * fVar31);
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) - (float10)(float)(fVar31 * fVar28))));
  (*(float *)(gen_frame + 0x110)) = fVar1;
  fVar18 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)(float)(fVar29 * fVar31))));
  (*(float *)(gen_frame + 0x114)) = fVar18;
  fVar6 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(float)(fVar30 * fVar31))));
  (*(float *)(gen_frame + 0x118)) = fVar6;
  if (fVar5 <= 0.0) {
    (*(float *)(gen_frame + 0x134)) = 0.0;
    fVar31 = (float10)0.0;
    (*(float *)(gen_frame + 0x90)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) - (float10)(*(float *)(gen_frame + 0x120)));
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) - (float10)(*(float *)(gen_frame + 0x124)));
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) - (float10)(*(float *)(gen_frame + 0x128)));
  fVar32 = (float10)(*(float *)(gen_frame + 0x138));
  fVar5 = ((float)GEN_TOF((fVar32 * (float10)(float)((float10)(*(float *)(gen_frame + 0xd0)) - (float10)(*(float *)(gen_frame + 0x120))))));
  (*(float *)(gen_frame + 0xf0)) = fVar5;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) - (float10)(*(float *)(gen_frame + 0x124))) * fVar32)));
  (*(float *)(gen_frame + 0xf4)) = fVar7;
  fVar8 = ((float)GEN_TOF((fVar32 * (float10)(float)((float10)(*(float *)(gen_frame + 0xd8)) - (float10)(*(float *)(gen_frame + 0x128))))));
  (*(float *)(gen_frame + 0xf8)) = fVar8;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x120)));
  (*(float *)(gen_frame + 0xf0)) = fVar5;
  fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x124)));
  (*(float *)(gen_frame + 0xf4)) = fVar7;
  fVar8 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x128)));
  (*(float *)(gen_frame + 0xf8)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)fVar8 * fVar30 + ((float10)fVar5 * fVar28 + (float10)fVar7 * fVar29))));
  (*(float *)(gen_frame + 0xcc)) = fVar9;
  fVar32 = (float10)fVar9;
  fVar10 = (float)(fVar32 * fVar28);
  (*(float *)(gen_frame + 0xd0)) = fVar10;
  fVar11 = (float)(fVar29 * fVar32);
  (*(float *)(gen_frame + 0xd4)) = fVar11;
  fVar12 = (float)(fVar30 * fVar32);
  (*(float *)(gen_frame + 0xd8)) = fVar12;
  fVar5 = (float)((float10)fVar5 - (float10)fVar10);
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar7 = (float)((float10)fVar7 - (float10)fVar11);
  (*(float *)(gen_frame + 0x64)) = fVar7;
  fVar8 = (float)((float10)fVar8 - (float10)fVar12);
  (*(float *)(gen_frame + 0x68)) = fVar8;
  if (fVar31 < fVar32) {
    (*(float *)(gen_frame + 0x90)) = fVar10;
    (*(float *)(gen_frame + 0x94)) = fVar11;
    (*(float *)(gen_frame + 0x98)) = fVar12;
  }
  (*(float *)(gen_frame + 0x138)) = 0.0;
  fVar31 = (float10)fVar1;
  pfVar25 = &(*(float *)(gen_frame + 0x13c));
  fVar1 = (float)((float10)fVar5 - fVar31);
  (*(float *)(gen_frame + 0x120)) = fVar1;
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar7 - (float10)fVar18);
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar8 - (float10)fVar6);
  fVar32 = (float10)fVar2;
  fVar2 = (float)(fVar32 * (float10)fVar1);
  (*(float *)(gen_frame + 0x120)) = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar18) * fVar32)));
  (*(float *)(gen_frame + 0x124)) = fVar1;
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar6) * fVar32)));
  (*(float *)(gen_frame + 0x128)) = fVar13;
  fVar2 = (float)((float10)fVar2 + fVar31);
  (*(float *)(gen_frame + 0x110)) = fVar2;
  fVar1 = (float)((float10)fVar1 + (float10)fVar18);
  (*(float *)(gen_frame + 0x114)) = fVar1;
  fVar18 = (float)((float10)fVar13 + (float10)fVar6);
  (*(float *)(gen_frame + 0x118)) = fVar18;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar18 = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x98)));
  (*(float *)(gen_frame + 0x18)) = fVar18;
  (*(float *)(gen_frame + 0x13c)) = (float)((float10)(*(float *)(gen_frame + 0x108)) - fVar27);
  if (!((float10)0 < (float10)(float)((float10)(*(float *)(gen_frame + 0x108)) - fVar27))) {
    pfVar25 = &(*(float *)(gen_frame + 0x138));
  }
  fVar6 = ((float)GEN_TOF((((float10)param_5[2] * (float10)*pfVar25) * (float10)(*(float *)(gen_frame + 0x10c)))));
  (*(float *)(gen_frame + 0x138)) = fVar6;
  fVar27 = (float10)fVar6;
  fVar6 = (float)(fVar27 * fVar28);
  (*(float *)(gen_frame + 0x40)) = fVar6;
  fVar13 = (float)(fVar29 * fVar27);
  (*(float *)(gen_frame + 0x44)) = fVar13;
  fVar14 = (float)(fVar27 * fVar30);
  (*(float *)(gen_frame + 0x48)) = fVar14;
  fVar15 = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x7c)));
  (*(float *)(gen_frame + 0x13c)) = fVar15;
  (*(float *)(gen_frame + 0x138)) = fVar15;
  fVar27 = (float10)fVar15;
  (*(float *)(gen_frame + 0xf0)) = (float)(fVar27 * (float10)fVar2);
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar1 * fVar27);
  (*(float *)(gen_frame + 0xf8)) = (float)(fVar27 * (float10)fVar18);
  fVar16 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar2) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0xf0)) = fVar16;
  fVar17 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar27) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0xf4)) = fVar17;
  fVar19 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar18) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0xf8)) = fVar19;
  fVar16 = (float)((float10)fVar6 + (float10)fVar16);
  (*(float *)(gen_frame + 0xf0)) = fVar16;
  fVar17 = (float)((float10)fVar13 + (float10)fVar17);
  (*(float *)(gen_frame + 0xf4)) = fVar17;
  fVar19 = (float)((float10)fVar14 + (float10)fVar19);
  (*(float *)(gen_frame + 0xf8)) = fVar19;
  if (param_6 == '\0') {
    fVar20 = ((float)GEN_TOF(((float10)fVar4 * (float10)(*(float *)(gen_frame + 0x28)) +
                    (fVar28 * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x24)) * fVar29))));
    (*(float *)(gen_frame + 0x134)) = fVar20;
    fVar27 = (float10)fVar20;
    (*(float *)(gen_frame + 0x80)) = (float)(fVar27 * fVar28);
    (*(float *)(gen_frame + 0x84)) = (float)((float10)fVar3 * fVar27);
    (*(float *)(gen_frame + 0x88)) = (float)((float10)fVar4 * fVar27);
    fVar21 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x20)) - (float10)(float)(fVar27 * fVar28))));
    (*(float *)(gen_frame + 0x120)) = fVar21;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x24)) - (float10)(float)((float10)fVar3 * fVar27))));
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(float)((float10)fVar4 * fVar27))));
    (*(float *)(gen_frame + 0x128)) = fVar4;
    if (fVar20 <= 0.0) {
      (*(float *)(gen_frame + 0x134)) = 0.0;
      fVar27 = (float10)0.0;
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1375ac8);
    }
    if (fVar27 < (float10)fVar9) {
      (*(float *)(gen_frame + 0x80)) = fVar10;
      (*(float *)(gen_frame + 0x84)) = fVar11;
      (*(float *)(gen_frame + 0x88)) = fVar12;
    }
    fVar9 = param_2[0x15];
    fVar27 = (float10)fVar21;
    (*(float *)(gen_frame + 0x10c)) = fVar9;
    fVar10 = param_3[0x15];
    (*(float *)(gen_frame + 0x108)) = fVar10;
    fVar5 = (float)((float10)fVar5 - fVar27);
    (*(float *)(gen_frame + 0x110)) = fVar5;
    fVar28 = (float10)fVar3;
    fVar3 = (float)((float10)fVar7 - fVar28);
    (*(float *)(gen_frame + 0x114)) = fVar3;
    (*(float *)(gen_frame + 0x118)) = (float)((float10)fVar8 - (float10)fVar4);
    fVar5 = (float)((float10)fVar5 * fVar32);
    (*(float *)(gen_frame + 0x110)) = fVar5;
    fVar3 = (float)((float10)fVar3 * fVar32);
    (*(float *)(gen_frame + 0x114)) = fVar3;
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar4) * fVar32)));
    (*(float *)(gen_frame + 0x118)) = fVar7;
    fVar5 = (float)(fVar27 + (float10)fVar5);
    (*(float *)(gen_frame + 0x120)) = fVar5;
    fVar3 = (float)((float10)fVar3 + fVar28);
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = (float)((float10)fVar7 + (float10)fVar4);
    (*(float *)(gen_frame + 0x128)) = fVar4;
    fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0x60)) = fVar5;
    fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x84)));
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x88)));
    (*(float *)(gen_frame + 0x68)) = fVar4;
    fVar27 = (float10)fVar15;
    (*(float *)(gen_frame + 0xb0)) = (float)(fVar27 * (float10)fVar5);
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar3 * fVar27);
    (*(float *)(gen_frame + 0xb8)) = (float)(fVar27 * (float10)fVar4);
    fVar7 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar5) + (float10)(*(float *)(gen_frame + 0x50)))));
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar27) + (float10)(*(float *)(gen_frame + 0x54)))));
    (*(float *)(gen_frame + 0xb4)) = fVar8;
    fVar11 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar4) + (float10)(*(float *)(gen_frame + 0x58)))));
    (*(float *)(gen_frame + 0xb8)) = fVar11;
    fVar7 = (float)((float10)fVar7 + (float10)fVar6);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar8 = (float)((float10)fVar13 + (float10)fVar8);
    (*(float *)(gen_frame + 0xb4)) = fVar8;
    fVar11 = (float)((float10)fVar14 + (float10)fVar11);
    (*(float *)(gen_frame + 0xb8)) = fVar11;
    fVar12 = (float)((float10)fVar7 - (float10)fVar16);
    (*(float *)(gen_frame + 0xd0)) = fVar12;
    fVar15 = (float)((float10)fVar8 - (float10)fVar17);
    (*(float *)(gen_frame + 0xd4)) = fVar15;
    fVar20 = (float)((float10)fVar11 - (float10)fVar19);
    (*(float *)(gen_frame + 0xd8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((float10)fVar20 * (float10)fVar20 +
                    ((float10)fVar15 * (float10)fVar15 + (float10)fVar12 * (float10)fVar12))));
    (*(float *)(gen_frame + 0x138)) = fVar21;
    fVar21 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar21))));
    (*(float *)(gen_frame + 0x138)) = fVar21;
    (*(float *)(gen_frame + 0x13c)) = fVar21;
    fVar22 = *param_2;
    fVar23 = *param_3;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar22 - (float10)fVar23);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_2[1] - (float10)param_3[1]);
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_2[2] - (float10)param_3[2]);
    fVar27 = GEN_X87((float10)(float)((float10)fVar22 - (float10)fVar23));
    fVar28 = GEN_X87((float10)(float)((float10)param_2[1] - (float10)param_3[1]));
    fVar29 = GEN_X87((float10)(float)((float10)param_2[2] - (float10)param_3[2]));
    fVar22 = ((float)GEN_TOF((fVar29 * fVar29 + (fVar28 * fVar28 + fVar27 * fVar27))));
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar22 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar22))));
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar27 = (float10)fVar10;
    fVar28 = (float10)fVar9;
    fVar9 = ((float)GEN_TOF(((float10)1 / (fVar28 + fVar27))));
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar9 = ((float)GEN_TOF(((float10)fVar9 * (((float10)fVar22 - (float10)fVar21) / (float10)fVar21))));
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar29 = (float10)fVar9;
    fVar9 = (float)(fVar29 * fVar28);
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar28 = (float10)fVar9;
    fVar9 = (float)(fVar28 * (float10)fVar12);
    (*(float *)(gen_frame + 0x30)) = fVar9;
    fVar10 = (float)((float10)fVar15 * fVar28);
    (*(float *)(gen_frame + 0x34)) = fVar10;
    fVar21 = (float)((float10)fVar20 * fVar28);
    (*(float *)(gen_frame + 0x38)) = fVar21;
    fVar22 = (float)(fVar29 * fVar27);
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar27 = (float10)fVar22;
    fVar12 = (float)(fVar27 * (float10)fVar12);
    (*(float *)(gen_frame + 0xd0)) = fVar12;
    fVar15 = (float)(fVar27 * (float10)fVar15);
    (*(float *)(gen_frame + 0xd4)) = fVar15;
    fVar20 = (float)((float10)fVar20 * fVar27);
    (*(float *)(gen_frame + 0xd8)) = fVar20;
    *param_2 = (float)((float10)fVar9 + (float10)fVar7);
    param_2[1] = (float)((float10)fVar10 + (float10)fVar8);
    param_2[2] = (float)((float10)fVar21 + (float10)fVar11);
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar16 - (float10)fVar12);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar17 - (float10)fVar15);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar19 - (float10)fVar20);
    (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar5 - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar4 - (float10)(*(float *)(gen_frame + 0x28)));
    fVar5 = ((float)GEN_TOF(((float10)fVar6 + (float10)(float)((float10)fVar5 - (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0x120)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)fVar13 + (float10)(float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0x24))))));
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar14 + (float10)(float)((float10)fVar4 - (float10)(*(float *)(gen_frame + 0x28))))));
    (*(float *)(gen_frame + 0x128)) = fVar4;
    param_2[8] = (float)((float10)fVar5 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar3 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar4 + (float10)param_2[10]);
    fVar3 = param_5[1];
    (*(float *)(gen_frame + 0x138)) = fVar3;
    fVar27 = (float10)fVar3;
    param_2[8] = (float)(fVar27 * (float10)param_2[8]);
    param_2[9] = (float)((float10)param_2[9] * fVar27);
    param_2[10] = (float)(fVar27 * (float10)param_2[10]);
  }
  *param_3 = (*(float *)(gen_frame + 0xf0));
  param_3[1] = (*(float *)(gen_frame + 0xf4));
  (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0x0)));
  param_3[2] = (*(float *)(gen_frame + 0xf8));
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar18 - (float10)(*(float *)(gen_frame + 0x8)));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0x0))) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x120)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar13 + (float10)(float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x4))))));
  (*(float *)(gen_frame + 0x124)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar14 + (float10)(float)((float10)fVar18 - (float10)(*(float *)(gen_frame + 0x8))))));
  (*(float *)(gen_frame + 0x128)) = fVar4;
  param_3[8] = (float)((float10)param_3[8] + (float10)fVar2);
  param_3[9] = (float)((float10)fVar3 + (float10)param_3[9]);
  param_3[10] = (float)((float10)fVar4 + (float10)param_3[10]);
  fVar2 = param_5[1];
  (*(float *)(gen_frame + 0x138)) = fVar2;
  fVar27 = (float10)fVar2;
  param_3[8] = (float)(fVar27 * (float10)param_3[8]);
  param_3[9] = (float)(fVar27 * (float10)param_3[9]);
  param_3[10] = (float)(fVar27 * (float10)param_3[10]);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollidePoint_00bf9580 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf9580(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xbf9580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte bVar1;
  
  if ((param_4 != '\0') && (param_3 == 1)) {
    bVar1 = F_00bf7e80(param_1 GEN_EDX_FWD,param_2,param_5,param_6,param_7);
    return bVar1;
  }
  bVar1 = F_00bf7200(param_1 GEN_EDX_ARG,param_2,param_3,param_5,(undefined4)gen_fl2bits(param_6),param_7);
  return bVar1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::CollideSegment_00bf95e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bf95e0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbf95e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  byte bVar1;
  
  if ((param_5 & 1) == 0) {
    return 0;
  }
  if (param_6 != '\0') {
    bVar1 = F_00bf86b0(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_7,(undefined1)param_8,param_9,
                                param_10);
    return bVar1;
  }
  bVar1 = F_00bf76d0(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_7,(undefined1)param_8,
                         (undefined4)gen_fl2bits(param_9),param_10);
  return bVar1;
}

/* ref: FUN_00bf9650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf9650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbf9650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bf9680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbf9680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::FloatSelect */
GEN_OWN GEN_FRAME float10 F_00bf96b0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbf96b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_1 < *(float *)&REFG(undefined, 0x1088114))) {
    return (float10)param_2;
  }
  return (float10)param_3;
}

/* ref: Global::InsertMaskBit */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bf96f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf96f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar4 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  iVar3 = 0;
  local_c = 0;
  if (*((short *)GEN_TOP(((int)this + 0xb8))) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x80 + iVar3)));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x84 + iVar3)));
      uVar2 = *puVar1;
      iVar3 = iVar3 + 0xa0;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      local_c = local_c + 1;
    } while (local_c < *((ushort *)GEN_TOP(((int)this + 0xb8))));
  }
  return 0;
}

/* ref: Global::RemoveMaskBit */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bf97a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbf97a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  uVar3 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  iVar2 = 0;
  local_c = 0;
  if (*((short *)GEN_TOP(((int)this + 0xb8))) != 0) {
    do {
      uVar1 = *((uint *)GEN_TOP((iVar2 + 0x80 + *((int *)GEN_TOP(((int)this + 0x1c))))));
      *((uint *)GEN_TOP((iVar2 + 0x80 + *((int *)GEN_TOP(((int)this + 0x1c)))))) =
           (uVar1 & uVar3) >> 1 | ~uVar3 & uVar1 | 0x80000000;
      uVar1 = *((uint *)GEN_TOP((iVar2 + 0x84 + *((int *)GEN_TOP(((int)this + 0x1c))))));
      *((uint *)GEN_TOP((iVar2 + 0x84 + *((int *)GEN_TOP(((int)this + 0x1c)))))) =
           (uVar1 & uVar3) >> 1 | ~uVar3 & uVar1 | 0x80000000;
      local_c = local_c + 1;
      iVar2 = iVar2 + 0xa0;
    } while (local_c < *((ushort *)GEN_TOP(((int)this + 0xb8))));
  }
  return 0;
}

/* ref: Global::RemoveCollider */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bf9850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbf9850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 != 0) && ((ushort)param_3 < *((ushort *)GEN_TOP(((int)this + 0xb8))))) {
    uVar3 = (uint)(ushort)param_3;
    uVar2 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x48 + uVar3 * 0x50)));
    uVar6 = 0xffff;
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x40034 + uVar3 * 0x50))) == param_1) {
          uVar6 = (uint)uVar5;
          goto LAB_00bf98c1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
      uVar6 = 0xffff;
    }
LAB_00bf98c1: ;
    if ((ushort)uVar6 < uVar2) {
      if ((ushort)uVar6 < (ushort)(uVar2 + 0xffff)) {
        uVar7 = (uVar2 + 0xffff) - uVar6 & 0xffff;
        iVar4 = (uVar6 + uVar3 * 0x14) * 4 + 0x38;
        do {
          *((undefined4 *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x20)))))) =
               *((undefined4 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP(((int)this + 0x20))))));
          uVar7 = uVar7 - 1;
          *((undefined4 *)GEN_TOP((iVar4 - 0x10 + *((int *)GEN_TOP(((int)this + 0x20)))))) =
               *((undefined4 *)GEN_TOP((iVar4 - 0xc + *((int *)GEN_TOP(((int)this + 0x20))))));
          iVar4 = iVar4 + 4;
        } while (uVar7 != 0);
      }
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x48 + uVar3 * 0x50)));
      *piVar1 = *piVar1 - 1;
    }
  }
  return;
}

/* ref: Global::LerpFloat_00bfa010 */
GEN_OWN GEN_FRAME float10 F_00bfa010(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbfa010u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1)))));
}

/* ref: Global::ResetFromSkeleton */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfa090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfa090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  float * pfVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  float * pfVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  iVar6 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar7 = *((short *)GEN_TOP(((int)this + 0xb8))) - 1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10)));
  (*(uint *)(gen_frame + 0x5c)) = (uint)uVar7;
  pfVar11 = *((float * PTR32 *)GEN_TOP(((int)this + 0x18)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
  (*(int *)(gen_frame + 0x2c)) = iVar6;
  if (uVar7 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = ((undefined4 *)GEN_TOP((iVar6 + 0x40)));
    (*(ushort * PTR32 *)(gen_frame + 0x54)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 2)));
    pfVar8 = pfVar11 + 6;
    (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
    (*(uint *)(gen_frame + 0x5c)) = (uint)uVar7;
    (*(int *)(gen_frame + 0x2c)) = iVar6 + (uint)uVar7 * 0xa0;
    do {
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x58));
      (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
      F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x60)),(uint)*(*(ushort * PTR32 *)(gen_frame + 0x54)));
      puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x48));
      *pfVar11 = (*(float *)(gen_frame + 0x90));
      (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 0x28;
      (*(ushort * PTR32 *)(gen_frame + 0x54)) = (*(ushort * PTR32 *)(gen_frame + 0x54)) + 1;
      pfVar8[-5] = (*(float *)(gen_frame + 0x94));
      pfVar8[-4] = (*(float *)(gen_frame + 0x98));
      pfVar8[-2] = (*(float *)(gen_frame + 0x90));
      pfVar8[-1] = (*(float *)(gen_frame + 0x94));
      *pfVar8 = (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x94));
      pfVar8[2] = GEN_FLT_TO(pfVar8[2], REFG(float, 0x1375ac0));
      pfVar8[3] = GEN_FLT_TO(pfVar8[3], REFG(float, 0x1375ac4));
      pfVar8[4] = GEN_FLT_TO(pfVar8[4], REFG(float, 0x1375ac8));
      pfVar8[6] = GEN_FLT_TO(pfVar8[6], REFG(float, 0x1375ac0));
      pfVar8[7] = GEN_FLT_TO(pfVar8[7], REFG(float, 0x1375ac4));
      pfVar8[8] = GEN_FLT_TO(pfVar8[8], REFG(float, 0x1375ac8));
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x58)) + 0x18;
      (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
      pfVar8 = (*(float * PTR32 *)(gen_frame + 0x50)) + 0x18;
      (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
      uVar5 = (*(uint *)(gen_frame + 0x5c)) - 1;
      (*(uint *)(gen_frame + 0x5c)) = uVar5;
      puVar9 = ((undefined4 *)(gen_frame + 0x60));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x98));
    } while (uVar5 != 0);
  }
  (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
  F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90,((undefined4 *)(gen_frame + 0x60)));
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x8c))))));
  fVar12 = (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x8c)));
  (*(float *)(gen_frame + 0x10)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar12);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8)));
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar12) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar3;
  pfVar11[2] = fVar3;
  *pfVar11 = fVar1;
  pfVar11[1] = fVar2;
  pfVar11[4] = fVar1;
  pfVar11[6] = fVar3;
  pfVar11[5] = fVar2;
  pfVar11[8] = GEN_FLT_TO(pfVar11[8], REFG(float, 0x1375ac0));
  pfVar11[9] = GEN_FLT_TO(pfVar11[9], REFG(float, 0x1375ac4));
  pfVar11[10] = GEN_FLT_TO(pfVar11[10], REFG(float, 0x1375ac8));
  pfVar11[0xc] = GEN_FLT_TO(pfVar11[0xc], REFG(float, 0x1375ac0));
  pfVar11[0xd] = GEN_FLT_TO(pfVar11[0xd], REFG(float, 0x1375ac4));
  pfVar11[0xe] = GEN_FLT_TO(pfVar11[0xe], REFG(float, 0x1375ac8));
  puVar10 = ((undefined4 *)(gen_frame + 0x60));
  puVar9 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x40)));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c))) + 0x40;
  F_004ee9d0((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x60,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x30,iVar6);
  F_004ee9d0((int)pvVar4 + 0x70,(int)pvVar4 + 0x40,iVar6);
  uVar5 = F_004ee9d0((int)pvVar4 + 0x80,(int)pvVar4 + 0x50,iVar6);
  *((undefined4 *)GEN_TOP(((int)pvVar4 + 0xb4))) = 0;
  return uVar5;
}

/* ref: FUN_00bfa370 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfa370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfa370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  ushort uVar6;
  uint uVar7;
  ushort * puVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10)));
  F_0063a290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x30)),(uint)*((ushort *)GEN_TOP((iVar3 + 2))));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((float *)GEN_TOP((iVar4 + 0x40))) = (*(float *)(gen_frame + 0x60));
  *((float *)GEN_TOP((iVar4 + 0x44))) = (*(float *)(gen_frame + 0x64));
  *((float *)GEN_TOP((iVar4 + 0x48))) = (*(float *)(gen_frame + 0x68));
  F_004ee9d0((int)this + 0x60,(int)this + 0x30,((undefined1 *)(gen_frame + 0x30)));
  F_004ee9d0((int)this + 0x70,(int)this + 0x40,((undefined1 *)(gen_frame + 0x30)));
  F_004ee9d0((int)this + 0x80,(int)this + 0x50,((undefined1 *)(gen_frame + 0x30)));
  uVar6 = *((short *)GEN_TOP(((int)this + 0xb8))) - 1;
  (*(uint *)(gen_frame + 0x20)) = 1;
  if (1 < uVar6) {
    uVar7 = uVar6 - 1 & 0xffff;
    puVar8 = ((ushort *)GEN_TOP((iVar3 + 4)));
    (*(uint *)(gen_frame + 0x24)) = uVar7;
    (*(int *)(gen_frame + 0x28)) = 0x60;
    (*(uint *)(gen_frame + 0x20)) = uVar7 + 1 & 0xffff;
    do {
      F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),(uint)*puVar8);
      pfVar1 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x40 + *((int *)GEN_TOP(((int)this + 0x18))))));
      *pfVar1 = (*(float *)(gen_frame + 0x60));
      pfVar1[1] = (*(float *)(gen_frame + 0x64));
      puVar8 = puVar8 + 1;
      uVar7 = (*(uint *)(gen_frame + 0x24)) - 1;
      (*(uint *)(gen_frame + 0x24)) = uVar7;
      pfVar1[2] = (*(float *)(gen_frame + 0x68));
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x60;
    } while (uVar7 != 0);
  }
  F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)this + 0x90,((undefined1 *)(gen_frame + 0x30)));
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar2 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x20)) & 0xffff) * 0xa0 + 0x8c + *((int *)GEN_TOP(((int)this + 0x1c))))));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
  pfVar1 = ((float *)GEN_TOP((((*(uint *)(gen_frame + 0x20)) & 0xffff) * 0x60 + 0x40 + *((int *)GEN_TOP(((int)this + 0x18))))));
  fVar9 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar9);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8)));
  *pfVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x60)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0))))));
  pfVar1[1] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x64)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar9))));
  pfVar1[2] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8))))));
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  puVar5[4] = *puVar5;
  puVar5[5] = puVar5[1];
  puVar5[6] = puVar5[2];
  return (uint)pfVar1;
}

/* ref: Global::Simulate */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfa530(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbfa530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_FRAME_DECL(0x94, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  pfVar8 = *((float * PTR32 *)GEN_TOP((param_1 + 0x18)));
  (*(float *)(gen_frame + 0x34)) = *pfVar8;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(int *)(gen_frame + 0x30)) = param_1;
  (*(float *)(gen_frame + 0x3c)) = pfVar8[2];
  F_0046f390(&(*(float *)(gen_frame + 0x34)) GEN_EDX_FWD);
  fVar2 = pfVar8[4];
  (*(float *)(gen_frame + 0x78)) = fVar2;
  fVar7 = *pfVar8;
  (*(float *)(gen_frame + 0x44)) = fVar7;
  fVar11 = (float10)fVar2;
  fVar2 = pfVar8[1];
  (*(float *)(gen_frame + 0x48)) = fVar2;
  fVar1 = pfVar8[2];
  fVar12 = (float10)param_8;
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  *pfVar8 = ((float)GEN_TOF((fVar12 * ((float10)pfVar8[0x10] - fVar11) + fVar11)));
  fVar3 = pfVar8[5];
  (*(float *)(gen_frame + 0x78)) = fVar3;
  fVar11 = (float10)fVar3;
  pfVar8[1] = ((float)GEN_TOF((fVar11 + fVar12 * ((float10)pfVar8[0x11] - fVar11))));
  fVar3 = pfVar8[6];
  (*(float *)(gen_frame + 0x78)) = fVar3;
  fVar11 = (float10)fVar3;
  pfVar8[2] = ((float)GEN_TOF((fVar11 + ((float10)pfVar8[0x12] - fVar11) * fVar12)));
  pfVar8 = *((float * PTR32 *)GEN_TOP((param_1 + 0x18)));
  fVar7 = (float)((float10)*pfVar8 - (float10)fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar7;
  fVar2 = (float)((float10)pfVar8[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar1 = (float)((float10)pfVar8[2] - (float10)fVar1);
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar11 = (float10)param_9;
  fVar7 = (float)(fVar11 * (float10)fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar7;
  fVar2 = (float)((float10)fVar2 * fVar11);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar1 = (float)(fVar11 * (float10)fVar1);
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = ((float)GEN_TOF(((float10)param_4[2] * (float10)(*(float *)(gen_frame + 0x3c)) +
                 ((float10)(*(float *)(gen_frame + 0x34)) * (float10)*param_4 + (float10)param_4[1] * (float10)(*(float *)(gen_frame + 0x38))))));
  (*(float *)(gen_frame + 0x78)) = fVar3;
  pfVar8 = &(*(float *)(gen_frame + 0x60));
  fVar3 = ((float)GEN_TOF((((float10)1 - (float10)fVar3) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x60)) = fVar3;
  fVar4 = *((float *)GEN_TOP((param_1 + 0xb4)));
  (*(float *)(gen_frame + 0x7c)) = fVar4;
  if (!((float10)fVar4 < (float10)fVar3)) {
    pfVar8 = &(*(float *)(gen_frame + 0x7c));
  }
  fVar3 = *pfVar8;
  (*(float *)(gen_frame + 0x78)) = REFG(float, 0x1087f04);
  pfVar8 = &(*(float *)(gen_frame + 0x7c));
  (*(float *)(gen_frame + 0x7c)) = (float)((float10)fVar3 + (float10)param_10);
  if (!((float10)(float)((float10)fVar3 + (float10)param_10) < (float10)1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x78));
  }
  uVar5 = *((ushort *)GEN_TOP((param_1 + 0xb8)));
  *((float *)GEN_TOP((param_1 + 0xb4))) = *pfVar8;
  if (1 < uVar5) {
    fVar12 = (float10)fVar1;
    fVar11 = (float10)fVar2;
    iVar10 = 0x60;
    fVar13 = (float10)fVar7;
    (*(float *)(gen_frame + 0x0)) = 2.8026e-45;
    (*(float *)(gen_frame + 0x78)) = gen_bits2f(uVar5 - 1 & 0xffff);
    do {
      iVar6 = *((int *)GEN_TOP((param_1 + 0x18)));
      fVar7 = *((float *)GEN_TOP((iVar10 + 0x54 + iVar6)));
      if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
        fVar7 = gen_bits2f(uVar5 - 1);
        (*(float *)(gen_frame + 0x80)) = fVar7;
        (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x0));
        pfVar8 = &(*(float *)(gen_frame + 0x7c));
        if ((int)gen_fl2bits(fVar7) <= (int)gen_fl2bits((*(float *)(gen_frame + 0x0)))) {
          pfVar8 = &(*(float *)(gen_frame + 0x80));
        }
        iVar9 = (int)gen_fl2bits(*pfVar8) * 0x60;
        fVar7 = ((float)GEN_TOF((((float10)1 - (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + 0xac)))) * (float10)param_6)));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar14 = (float10)fVar7;
        (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((fVar14 * (float10)*((float *)GEN_TOP((iVar10 + 0x20 + iVar6))))));
        (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + 0x24 + iVar6))) * fVar14)));
        (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((fVar14 * (float10)*((float *)GEN_TOP((iVar10 + 0x28 + iVar6))))));
        fVar7 = *((float *)GEN_TOP((iVar10 + 0x5c + iVar6)));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar14 = (float10)fVar7;
        *((float *)GEN_TOP((iVar10 + 0x30 + iVar6))) = (float)(fVar14 * (float10)*param_2);
        *((float *)GEN_TOP((iVar10 + 0x34 + iVar6))) = (float)((float10)param_2[1] * fVar14);
        *((float *)GEN_TOP((iVar10 + 0x38 + iVar6))) = (float)(fVar14 * (float10)param_2[2]);
        fVar7 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 - 0x60 + iVar6))) -
                       (float10)*((float *)GEN_TOP((iVar9 + iVar6))))));
        (*(float *)(gen_frame + 0x44)) = fVar7;
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 - 0x5c + iVar6))) -
                       (float10)*((float *)GEN_TOP((iVar9 + 4 + iVar6))))));
        (*(float *)(gen_frame + 0x48)) = fVar2;
        fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 - 0x58 + iVar6))) -
                       (float10)*((float *)GEN_TOP((iVar9 + 8 + iVar6))))));
        (*(float *)(gen_frame + 0x4c)) = fVar1;
        fVar7 = (float)(fVar13 + (float10)fVar7);
        (*(float *)(gen_frame + 0x44)) = fVar7;
        fVar2 = (float)(fVar11 + (float10)fVar2);
        (*(float *)(gen_frame + 0x48)) = fVar2;
        fVar1 = (float)(fVar12 + (float10)fVar1);
        (*(float *)(gen_frame + 0x4c)) = fVar1;
        fVar3 = param_3[2];
        (*(float *)(gen_frame + 0x80)) = fVar3;
        fVar4 = param_3[1];
        (*(float *)(gen_frame + 0x7c)) = fVar4;
        fVar11 = (float10)fVar3;
        fVar12 = (float10)fVar2;
        fVar13 = (float10)fVar4;
        fVar14 = (float10)fVar1;
        fVar2 = *param_3;
        (*(float *)(gen_frame + 0x7c)) = fVar2;
        fVar15 = (float10)fVar2;
        fVar16 = (float10)fVar7;
        fVar17 = GEN_X87((float10)(float)(fVar15 * fVar14 - fVar16 * fVar11));
        fVar15 = GEN_X87((float10)(float)(fVar16 * fVar13 - fVar15 * fVar12));
        (*(float *)(gen_frame + 0x4)) = (float)(fVar17 * fVar14 - fVar15 * fVar12);
        fVar11 = GEN_X87((float10)(float)(fVar12 * fVar11 - fVar14 * fVar13));
        (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar16 - fVar11 * fVar14);
        (*(float *)(gen_frame + 0xc)) = (float)(fVar12 * fVar11 - fVar17 * fVar16);
        F_0046f390(&(*(float *)(gen_frame + 0x4)) GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x7c)) - (float10)(*(float *)(gen_frame + 0x64)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[1] - (float10)(*(float *)(gen_frame + 0x68)));
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)param_3[2] - (float10)(*(float *)(gen_frame + 0x6c)));
        fVar11 = GEN_X87((float10)(float)((float10)param_3[1] - (float10)(*(float *)(gen_frame + 0x68))));
        fVar12 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x7c)) - (float10)(*(float *)(gen_frame + 0x64))));
        fVar13 = GEN_X87((float10)(float)((float10)param_3[2] - (float10)(*(float *)(gen_frame + 0x6c))));
        fVar7 = ((float)GEN_TOF((fVar13 * (float10)(*(float *)(gen_frame + 0xc)) +
                       ((float10)(*(float *)(gen_frame + 0x8)) * fVar11 + fVar12 * (float10)(*(float *)(gen_frame + 0x4))))));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar14 = (float10)fVar7;
        fVar7 = REFG(float, 0x1090708);
        if ((float10)0 <= fVar14) {
          fVar7 = REFG(float, 0x1087f04);
        }
        (*(float *)(gen_frame + 0x60)) = fVar7;
        fVar15 = (float10)fVar7;
        (*(float *)(gen_frame + 0x4)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0xc)) * fVar15);
        fVar7 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar11 * fVar11) + fVar13 * fVar13)));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar2 = (float)(fVar15 * fVar14);
        (*(float *)(gen_frame + 0x80)) = fVar2;
        (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF((((float10)fVar2 * (float10)*((float *)GEN_TOP((iVar10 + 0x58 + iVar6)))) *
                          (float10)fVar7)));
        F_0046f390(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        fVar7 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + 0xb4)));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar11 = (float10)fVar7;
        fVar7 = (float)((float10)(*(float *)(gen_frame + 0x7c)) * fVar11);
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar12 = (float10)fVar7;
        fVar7 = ((float)GEN_TOF(((fVar11 + (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108))));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar7 = (float)((float10)(*(float *)(gen_frame + 0x7c)) * (float10)fVar7);
        (*(float *)(gen_frame + 0x80)) = fVar7;
        fVar11 = (float10)fVar7;
        *((float *)GEN_TOP((iVar10 + 0x30 + iVar6))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + 0x30 + iVar6))) +
                    (float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x4))))));
        *((float *)GEN_TOP((iVar10 + 0x34 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) * fVar12) +
                    (float10)*((float *)GEN_TOP((iVar10 + 0x34 + iVar6))))));
        *((float *)GEN_TOP((iVar10 + 0x38 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0xc))) +
                    (float10)*((float *)GEN_TOP((iVar10 + 0x38 + iVar6))))));
        *((float *)GEN_TOP((iVar10 + 0x30 + iVar6))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + 0x30 + iVar6))) +
                    (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x34))))));
        *((float *)GEN_TOP((iVar10 + 0x34 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar11) +
                    (float10)*((float *)GEN_TOP((iVar10 + 0x34 + iVar6))))));
        *((float *)GEN_TOP((iVar10 + 0x38 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x3c))) +
                    (float10)*((float *)GEN_TOP((iVar10 + 0x38 + iVar6))))));
        fVar7 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + 0xb0)));
        fVar2 = ((float)GEN_TOF(((float10)param_5 *
                       ((float10)*((float *)GEN_TOP((iVar10 + 0x54 + iVar6))) * (float10)param_7))));
        (*(float *)(gen_frame + 0x80)) = fVar2;
        fVar11 = (float10)fVar2;
        fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)*((float *)GEN_TOP((iVar10 + 0x30 + iVar6)))))) +
                       (float10)(*(float *)(gen_frame + 0x64)))));
        (*(float *)(gen_frame + 0x64)) = fVar2;
        fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + 0x34 + iVar6))) * fVar11))) +
                       (float10)(*(float *)(gen_frame + 0x68)))));
        (*(float *)(gen_frame + 0x68)) = fVar1;
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)*((float *)GEN_TOP((iVar10 + 0x38 + iVar6)))))) +
                       (float10)(*(float *)(gen_frame + 0x6c)))));
        (*(float *)(gen_frame + 0x6c)) = fVar3;
        if (0.0 <= fVar7) {
          fVar4 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                         (float10)fVar3 * (float10)fVar3)));
          (*(float *)(gen_frame + 0x80)) = fVar4;
          fVar4 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar4))));
          (*(float *)(gen_frame + 0x80)) = fVar4;
          fVar11 = (float10)fVar7;
          if (fVar11 < (float10)fVar4) {
            fVar7 = (float)(fVar11 / (float10)fVar4);
            (*(float *)(gen_frame + 0x80)) = fVar7;
            fVar11 = (float10)fVar7;
            (*(float *)(gen_frame + 0x64)) = (float)(fVar11 * (float10)fVar2);
            (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar1 * fVar11);
            (*(float *)(gen_frame + 0x6c)) = (float)(fVar11 * (float10)fVar3);
          }
        }
        fVar14 = (float10)param_5;
        fVar13 = (float10)(*(float *)(gen_frame + 0x14));
        fVar7 = ((float)GEN_TOF((fVar13 + (float10)*((float *)GEN_TOP((iVar10 + iVar6))))));
        (*(float *)(gen_frame + 0x80)) = fVar7;
        *((float *)GEN_TOP((iVar10 + iVar6))) = fVar7;
        fVar11 = (float10)(*(float *)(gen_frame + 0x18));
        *((float *)GEN_TOP((iVar10 + 4 + iVar6))) = ((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((iVar10 + 4 + iVar6))))));
        fVar12 = (float10)(*(float *)(gen_frame + 0x1c));
        *((float *)GEN_TOP((iVar10 + 8 + iVar6))) = ((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((iVar10 + 8 + iVar6))))));
        *((float *)GEN_TOP((iVar10 + 0x10 + iVar6))) = fVar7;
        *((undefined4 *)GEN_TOP((iVar10 + 0x14 + iVar6))) = *((undefined4 *)GEN_TOP((iVar10 + 4 + iVar6)));
        *((undefined4 *)GEN_TOP((iVar10 + 0x18 + iVar6))) = *((undefined4 *)GEN_TOP((iVar10 + 8 + iVar6)));
        *((float *)GEN_TOP((iVar10 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x64)) * fVar14) +
                    (float10)*((float *)GEN_TOP((iVar10 + iVar6))))));
        *((float *)GEN_TOP((iVar10 + 4 + iVar6))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + 4 + iVar6))) +
                    (float10)(float)((float10)(*(float *)(gen_frame + 0x68)) * fVar14))));
        *((float *)GEN_TOP((iVar10 + 8 + iVar6))) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x6c)) * fVar14) +
                    (float10)*((float *)GEN_TOP((iVar10 + 8 + iVar6))))));
        *((undefined4 *)GEN_TOP((iVar10 + 0x30 + iVar6))) = 0;
        *((undefined4 *)GEN_TOP((iVar10 + 0x34 + iVar6))) = 0;
        *((undefined4 *)GEN_TOP((iVar10 + 0x38 + iVar6))) = 0;
      }
      (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) + 1);
      iVar10 = iVar10 + 0x60;
      fVar7 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x78))) - 1);
      (*(float *)(gen_frame + 0x78)) = fVar7;
      param_1 = (*(int *)(gen_frame + 0x30));
    } while (fVar7 != 0.0);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::ApplyLengthConstraints */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfab80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x38, 8);
  float * pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  ushort uVar11;
  float * PTR32 * ppfVar12;
  undefined * pBVar13;
  float * pfVar14;
  float * pfVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  
  uVar11 = *(ushort *)(this + 0xb8);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  if (1 < uVar11) {
    (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
    iVar16 = 0xa0;
    (*(int *)(gen_frame + 0x20)) = 0x60;
    (*(float * PTR32 *)(gen_frame + 0xc)) = ((float *)GEN_TOP((uVar11 - 1 & 0xffff)));
    pBVar13 = this;
    do {
      pfVar14 = ((float *)GEN_TOP((*(int *)(pBVar13 + 0x18) + (*(int *)(gen_frame + 0x20)))));
      *pfVar14 = (float)((float10)pfVar14[0xc] + (float10)*pfVar14);
      pfVar14[1] = (float)((float10)pfVar14[0xd] + (float10)pfVar14[1]);
      fVar3 = (float)((float10)pfVar14[2] + (float10)pfVar14[0xe]);
      (*(float *)(gen_frame + 0x10)) = fVar3;
      pfVar14[2] = fVar3;
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar14[-3])));
      fVar4 = pfVar14[-0x18];
      (*(float * PTR32 *)(gen_frame + 0x0)) = pfVar1;
      (*(float *)(gen_frame + 0x18)) = fVar4;
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar14[0x15])));
      (*(float * PTR32 *)(gen_frame + 0x4)) = pfVar15;
      fVar5 = *pfVar14;
      fVar6 = pfVar14[-0x17];
      (*(float *)(gen_frame + 0x14)) = fVar6;
      fVar7 = pfVar14[1];
      fVar8 = pfVar14[-0x16];
      (*(float *)(gen_frame + 0x10)) = fVar8;
      fVar17 = GEN_X87((float10)(float)((float10)fVar6 - (float10)fVar7));
      fVar18 = GEN_X87((float10)(float)((float10)fVar4 - (float10)fVar5));
      fVar19 = GEN_X87((float10)(float)((float10)fVar8 - (float10)fVar3));
      pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar19 * fVar19 + (fVar18 * fVar18 + fVar17 * fVar17)))))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar9;
      pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))))))))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar9;
      ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x8));
      if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))) < REFG(double, 0x1094438))) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x1c));
      }
      pfVar9 = *ppfVar12;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar9;
      fVar10 = *((float *)GEN_TOP((*(int *)(this + 0x1c) + 0x8c + iVar16)));
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)));
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x60;
      iVar16 = iVar16 + 0xa0;
      pfVar9 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xc)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar9;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)fVar10 - fVar17) / ((fVar19 + fVar18) * fVar17)))))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 * fVar19))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar1;
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      fVar20 = GEN_X87((float10)(float)((float10)fVar4 - (float10)fVar5));
      fVar21 = GEN_X87((float10)(float)((float10)fVar6 - (float10)fVar7));
      fVar22 = GEN_X87((float10)(float)((float10)fVar8 - (float10)fVar3));
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 * fVar18))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar14[-0x18] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar20 * fVar19))));
      pfVar14[-0x17] = ((float)GEN_TOF(((float10)fVar6 + (float10)(float)(fVar21 * fVar19))));
      pfVar14[-0x16] = ((float)GEN_TOF(((float10)fVar8 + (float10)(float)(fVar22 * fVar19))));
      *pfVar14 = ((float)GEN_TOF(((float10)*pfVar14 - (float10)(float)(fVar17 * fVar20))));
      pfVar14[1] = ((float)GEN_TOF(((float10)pfVar14[1] - (float10)(float)(fVar17 * fVar21))));
      pfVar14[2] = ((float)GEN_TOF(((float10)pfVar14[2] - (float10)(float)(fVar17 * fVar22))));
      pfVar14[0xc] = 0.0;
      pfVar14[0xd] = 0.0;
      pfVar14[0xe] = 0.0;
      pBVar13 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    } while (pfVar9 != ((float *)GEN_TOP(0x0)));
  }
  pfVar1 = *(float * PTR32 *)(this + 0x18);
  (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar1;
  if (1 < uVar11) {
    (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(0xa0));
    (*(int *)(gen_frame + 0x20)) = 0x60;
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar11 - 1 & 0xffff);
    do {
      pfVar15 = ((float *)GEN_TOP((*(int *)(this + 0x18) + (*(int *)(gen_frame + 0x20)))));
      fVar3 = pfVar15[0x15];
      if (GEN_ISNAN(fVar3) == (GEN_ISNAN(fVar3) || fVar3 == 0.0)) {
        fVar3 = *pfVar15;
        iVar16 = *(int *)(this + 0x1c);
        fVar4 = *pfVar1;
        (*(float * PTR32 *)(gen_frame + 0x0)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
        fVar5 = pfVar15[1];
        fVar6 = pfVar1[1];
        fVar7 = pfVar15[2];
        fVar8 = pfVar1[2];
        fVar17 = GEN_X87((float10)(float)((float10)fVar5 - (float10)fVar6));
        fVar18 = GEN_X87((float10)(float)((float10)fVar3 - (float10)fVar4));
        fVar19 = GEN_X87((float10)(float)((float10)fVar7 - (float10)fVar8));
        pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar19 * fVar19 +
                                                      (fVar18 * fVar18 + fVar17 * fVar17)))))))))));
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x0));
        (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar9;
        if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))) < REFG(double, 0x1094438))) {
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc));
        }
        pfVar9 = *ppfVar12;
        (*(float * PTR32 *)(gen_frame + 0x4)) = ((float *)GEN_TOP(0x0));
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc));
        pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + iVar16 + 0x90))) -
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)))))))));
        (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar14;
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))) < (float10)0)) {
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x4));
        }
        fVar17 = GEN_X87((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)))));
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar3 - (float10)fVar4))))
                       + (float10)*pfVar15)));
        fVar18 = (float10)fVar3;
        *pfVar15 = fVar3;
        fVar3 = ((float)GEN_TOF(((float10)pfVar15[1] +
                       (float10)((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar6) * fVar17))))))
        ;
        fVar19 = (float10)fVar3;
        pfVar15[1] = fVar3;
        fVar3 = ((float)GEN_TOF(((float10)pfVar15[2] +
                       (float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar7 - (float10)fVar8)))))))
        ;
        fVar17 = (float10)fVar3;
        pfVar15[2] = fVar3;
        fVar20 = (float10)*((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + iVar16 + 0x88)));
        *pfVar15 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar20 * (float10)(float)((float10)pfVar15[0x10] -
                                                                     fVar18)))) + fVar18)));
        pfVar15[1] = ((float)GEN_TOF((fVar19 + (float10)((float)GEN_TOF(((float10)(float)((float10)pfVar15[0x11] -
                                                                       fVar19) * fVar20))))));
        pfVar15[2] = ((float)GEN_TOF((fVar17 + (float10)((float)GEN_TOF((fVar20 * (float10)(float)((float10)pfVar15[
                                                  0x12] - fVar17)))))));
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x60;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + 0x28;
      uVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x10))) - 1;
      (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar2);
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::UpdateVelocities */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfaf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfaf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (1 < *(ushort *)(this + 0xb8)) {
    iVar3 = 0x60;
    uVar4 = *(ushort *)(this + 0xb8) - 1 & 0xffff;
    do {
      pfVar1 = ((float *)GEN_TOP((*(int *)(this + 0x18) + iVar3)));
      iVar2 = *(int *)(this + 0x18) + iVar3;
      iVar3 = iVar3 + 0x60;
      uVar4 = uVar4 - 1;
      *((float *)GEN_TOP((iVar2 + 0x20))) = ((float)GEN_TOF(((float10)*pfVar1 - (float10)*((float *)GEN_TOP((iVar2 + 0x10))))));
      *((float *)GEN_TOP((iVar2 + 0x24))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 4))) - (float10)*((float *)GEN_TOP((iVar2 + 0x14))))));
      *((float *)GEN_TOP((iVar2 + 0x28))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 8))) - (float10)*((float *)GEN_TOP((iVar2 + 0x18))))));
    } while (uVar4 != 0);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::CollidePoints */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bfaf70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbfaf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  undefined4 * puVar1;
  float fVar2;
  ushort uVar3;
  int * piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar3 = *((ushort *)GEN_TOP((param_1 + 0xb8)));
  (*(int *)(gen_frame + 0x28)) = 1;
  if (1 < uVar3) {
    (*(int *)(gen_frame + 0x24)) = 0xa0;
    (*(int *)(gen_frame + 0x18)) = 0x60;
    do {
      iVar11 = *((int *)GEN_TOP((param_1 + 0x18))) + (*(int *)(gen_frame + 0x18));
      fVar2 = *((float *)GEN_TOP((iVar11 + 0x54)));
      (*(int *)(gen_frame + 0x1c)) = iVar11;
      if (GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
        uVar10 = param_2[1] - *param_2 >> 3;
        (*(float *)(gen_frame + 0x10)) = 0.0;
        (*(uint *)(gen_frame + 0x8)) = uVar10;
        (*(uint *)(gen_frame + 0x20)) = 0;
        uVar12 = 1;
        if (uVar10 != 0) {
          (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar10);
          do {
            iVar6 = (*(int *)(gen_frame + 0x1c));
            if (((ushort)(*(int *)(gen_frame + 0x28)) < *((ushort *)GEN_TOP((param_1 + 0xb8)))) &&
               (iVar7 = *((int *)GEN_TOP((param_1 + 0x1c))) + (*(int *)(gen_frame + 0x24)), (*((uint *)GEN_TOP((iVar7 + 0x80))) & uVar12) != 0)
               ) {
              if (param_4 == '\0') {
LAB_00bfb027: ;
                uVar10 = (*(uint *)(gen_frame + 0x14));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x14)) = uVar10 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),1);
                if ((*((uint *)GEN_TOP((iVar7 + 0x84))) & uVar12) == 0) goto LAB_00bfb027;
              }
              puVar1 = ((undefined4 *)GEN_TOP((*param_2 + (*(uint *)(gen_frame + 0x20)) * 8)));
              piVar4 = ((int *)GEN_TOP(*puVar1));
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))
                        (piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),(uint)*(ushort *)(puVar1 + 1),(*(uint *)(gen_frame + 0x14)),param_1 + 0xa0,
                         (undefined4)gen_fl2bits(param_5),(undefined4)gen_fl2bits(param_6));
              uVar10 = (*(uint *)(gen_frame + 0x8));
              iVar11 = iVar6;
            }
            uVar8 = (*(uint *)(gen_frame + 0x20)) + 1;
            uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
            (*(uint *)(gen_frame + 0x20)) = uVar8;
          } while (uVar8 < uVar10);
        }
        uVar12 = *((int *)GEN_TOP((param_1 + 0xc0))) - *((int *)GEN_TOP((param_1 + 0xbc))) >> 3;
        bVar5 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) & 0x1f;
        uVar10 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        (*(uint *)(gen_frame + 0x8)) = uVar12;
        (*(uint *)(gen_frame + 0x20)) = 0;
        if (uVar12 != 0) {
          do {
            iVar6 = (*(int *)(gen_frame + 0x1c));
            uVar8 = (*(uint *)(gen_frame + 0x20));
            if (((ushort)(*(int *)(gen_frame + 0x28)) < *((ushort *)GEN_TOP((param_1 + 0xb8)))) &&
               (iVar7 = *((int *)GEN_TOP((param_1 + 0x1c))) + (*(int *)(gen_frame + 0x24)), iVar11 = iVar6,
               (*((uint *)GEN_TOP((iVar7 + 0x80))) & uVar10) != 0)) {
              if (param_4 == '\0') {
LAB_00bfb0de: ;
                uVar12 = (*(uint *)(gen_frame + 0xc));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
                (*(uint *)(gen_frame + 0xc)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 1;
                (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
                if ((*((uint *)GEN_TOP((iVar7 + 0x84))) & uVar10) == 0) goto LAB_00bfb0de;
              }
              piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xbc))) + (*(uint *)(gen_frame + 0x20)) * 8)));
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))
                        (piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xbc))) + (*(uint *)(gen_frame + 0x20)) * 8 + 4))),(*(uint *)(gen_frame + 0xc)),
                         param_1 + 0xa0,(undefined4)gen_fl2bits(param_5),
                         (undefined4)gen_fl2bits(param_6));
              uVar12 = (*(uint *)(gen_frame + 0x8));
              uVar8 = (*(uint *)(gen_frame + 0x20));
            }
            uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
            (*(uint *)(gen_frame + 0x20)) = uVar8 + 1;
          } while (uVar8 + 1 < uVar12);
        }
        if (param_3 != '\0') {
          fVar2 = *((float *)GEN_TOP((iVar11 + 0x50)));
          (*(float *)(gen_frame + 0x10)) = fVar2;
          if ((float10)*((float *)GEN_TOP((iVar11 + 4))) < (float10)fVar2) {
            *((float *)GEN_TOP((iVar11 + 4))) = fVar2;
            fVar2 = *((float *)GEN_TOP((iVar11 + 0x24)));
            (*(float *)(gen_frame + 0x4)) = fVar2;
            (*(float *)(gen_frame + 0x0)) = 0.0;
            pfVar9 = &(*(float *)(gen_frame + 0x4));
            if (!(0.0 < fVar2)) {
              pfVar9 = &(*(float *)(gen_frame + 0x0));
            }
            *((float *)GEN_TOP((iVar11 + 0x24))) = *pfVar9;
          }
        }
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x60;
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0xa0;
      iVar11 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar11;
    } while ((ushort)iVar11 < uVar3);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::CollideSegments */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfb1a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbfb1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0x8c, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  code * pcVar9;
  byte bVar10;
  int * piVar11;
  uint uVar12;
  int * PTR32 * ppiVar13;
  float * pfVar14;
  int * piVar15;
  int iVar16;
  int * piVar17;
  float * pfVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x14)) = (uint)*((ushort *)GEN_TOP((param_1 + 0xb8)));
  (*(int *)(gen_frame + 0x50)) = 1;
  if (1 < *((ushort *)GEN_TOP((param_1 + 0xb8)))) {
    (*(int *)(gen_frame + 0x54)) = 0xa0;
    (*(int *)(gen_frame + 0x4c)) = 0x60;
    do {
      pfVar18 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + (*(int *)(gen_frame + 0x4c)))));
      fVar1 = pfVar18[0x15];
      if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
        (*(float *)(gen_frame + 0x64)) = gen_bits2f(*((int *)GEN_TOP((param_1 + 0x1c))) + (*(int *)(gen_frame + 0x54)));
        piVar15 = ((int *)GEN_TOP(0x0));
        piVar11 = ((int *)GEN_TOP((param_2[1] - *param_2 >> 3)));
        (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar11;
        (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
        (*(uint *)(gen_frame + 0x70)) = 1;
        if (piVar11 != ((int *)GEN_TOP(0x0))) {
          (*(int * PTR32 *)(gen_frame + 0x74)) = piVar11;
          do {
            if (((ushort)(*(int *)(gen_frame + 0x50)) < *((ushort *)GEN_TOP((param_1 + 0xb8)))) &&
               (iVar16 = (*(int *)(gen_frame + 0x54)) + *((int *)GEN_TOP((param_1 + 0x1c))),
               (*((uint *)GEN_TOP((iVar16 + 0x80))) & (*(uint *)(gen_frame + 0x70))) != 0)) {
              if (param_4 == '\0') {
LAB_00bfb27b: ;
                uVar12 = (*(uint *)(gen_frame + 0x44));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x44)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),1);
                if ((*((uint *)GEN_TOP((iVar16 + 0x84))) & (*(uint *)(gen_frame + 0x70))) == 0) goto LAB_00bfb27b;
              }
              piVar11 = *((int * PTR32 *)GEN_TOP((*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x68))) * 8)));
              uVar8 = *((ushort *)GEN_TOP((*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x68))) * 8 + 4)));
              fVar1 = pfVar18[0x14];
              pcVar9 = *((gen_code32 *)GEN_TOP((*piVar11 + 0x20)));
              (*(int * PTR32 *)(gen_frame + 0x78)) = piVar11;
              uVar12 = (*pcVar9)(piVar11,pfVar18 - 0x18,pfVar18,(undefined4)gen_fl2bits(fVar1),
                                 (uint)uVar8,(*(uint *)(gen_frame + 0x44)),param_1 + 0xa0,1,
                                 (undefined4)gen_fl2bits(param_5),(undefined4)gen_fl2bits(param_6));
              piVar11 = (*(int * PTR32 *)(gen_frame + 0x6c));
              if ((char)uVar12 != '\0') {
                fVar1 = *pfVar18;
                (*(float *)(gen_frame + 0x58)) = fVar1;
                (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
                fVar2 = (float)((float10)fVar1 - (float10)pfVar18[-0x18]);
                (*(float *)(gen_frame + 0x1c)) = fVar2;
                fVar3 = pfVar18[1];
                (*(float *)(gen_frame + 0x60)) = fVar3;
                fVar4 = (float)((float10)fVar3 - (float10)pfVar18[-0x17]);
                (*(float *)(gen_frame + 0x20)) = fVar4;
                fVar5 = pfVar18[2];
                (*(float *)(gen_frame + 0x5c)) = fVar5;
                fVar6 = (float)((float10)fVar5 - (float10)pfVar18[-0x16]);
                (*(float *)(gen_frame + 0x24)) = fVar6;
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                                        ((float10)fVar2 * (float10)fVar2 +
                                        (float10)fVar4 * (float10)fVar4)))))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))))))))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x10));
                if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < REFG(double, 0x1094438))) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x78));
                }
                piVar15 = *ppiVar13;
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                fVar7 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x64))) + 0x8c)));
                (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x78));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar7 - fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < (float10)0)) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x4));
                }
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar13))) / fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                *pfVar18 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * (float10)fVar2))));
                pfVar18[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar4 * fVar19))));
                pfVar18[2] = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar19 * (float10)fVar6))));
              }
            }
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x70)) < 0);
            piVar17 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x68)) + 1)));
            (*(int * PTR32 *)(gen_frame + 0x68)) = piVar17;
            piVar15 = (*(int * PTR32 *)(gen_frame + 0x74));
          } while (piVar17 < piVar11);
        }
        piVar11 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc0))) - *((int *)GEN_TOP((param_1 + 0xbc))) >> 3)));
        bVar10 = (byte)piVar15 & 0x1f;
        (*(uint *)(gen_frame + 0x70)) = 1 << bVar10 | 1U >> 0x20 - bVar10;
        (*(int * PTR32 *)(gen_frame + 0x68)) = piVar11;
        (*(int * PTR32 *)(gen_frame + 0x78)) = ((int *)GEN_TOP(0x0));
        if (piVar11 != ((int *)GEN_TOP(0x0))) {
          do {
            if (((ushort)(*(int *)(gen_frame + 0x50)) < *((ushort *)GEN_TOP((param_1 + 0xb8)))) &&
               (iVar16 = (*(int *)(gen_frame + 0x54)) + *((int *)GEN_TOP((param_1 + 0x1c))), piVar11 = (*(int * PTR32 *)(gen_frame + 0x68)),
               (*((uint *)GEN_TOP((iVar16 + 0x80))) & (*(uint *)(gen_frame + 0x70))) != 0)) {
              if (param_4 == '\0') {
LAB_00bfb462: ;
                uVar12 = (*(uint *)(gen_frame + 0x48));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x48)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x48)), 1, 3),1);
                if ((*((uint *)GEN_TOP((iVar16 + 0x84))) & (*(uint *)(gen_frame + 0x70))) == 0) goto LAB_00bfb462;
              }
              piVar11 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xbc))) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x78))) * 8)));
              (*(int * PTR32 *)(gen_frame + 0x74)) = piVar11;
              uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x20))))
                                 (piVar11 GEN_EDX_ARG,pfVar18 - 0x18,pfVar18,
                                  (undefined4)gen_fl2bits(pfVar18[0x14]),
                                  (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xbc))) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x78))) * 8 + 4))),(*(uint *)(gen_frame + 0x48))
                                  ,param_1 + 0xa0,1);
              piVar11 = (*(int * PTR32 *)(gen_frame + 0x68));
              if ((char)uVar12 != '\0') {
                fVar1 = *pfVar18;
                (*(float *)(gen_frame + 0x58)) = fVar1;
                (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
                fVar2 = (float)((float10)fVar1 - (float10)pfVar18[-0x18]);
                (*(float *)(gen_frame + 0x2c)) = fVar2;
                fVar3 = pfVar18[1];
                (*(float *)(gen_frame + 0x60)) = fVar3;
                fVar4 = (float)((float10)fVar3 - (float10)pfVar18[-0x17]);
                (*(float *)(gen_frame + 0x30)) = fVar4;
                fVar5 = pfVar18[2];
                (*(float *)(gen_frame + 0x5c)) = fVar5;
                fVar6 = (float)((float10)fVar5 - (float10)pfVar18[-0x16]);
                (*(float *)(gen_frame + 0x34)) = fVar6;
                fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                               ((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4))));
                (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar7)));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)fVar7)))))));
                (*(int * PTR32 *)(gen_frame + 0x74)) = piVar15;
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x8));
                (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar15;
                if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < REFG(double, 0x1094438))) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x6c));
                }
                piVar15 = *ppiVar13;
                (*(int * PTR32 *)(gen_frame + 0x74)) = piVar15;
                fVar7 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x64))) + 0x8c)));
                (*(float *)(gen_frame + 0x18)) = 0.0;
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x6c));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar7 - fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar15;
                if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < (float10)0)) {
                  ppiVar13 = (int * PTR32 *)&(*(float *)(gen_frame + 0x18));
                }
                fVar7 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar13))) / fVar19);
                (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar7)));
                fVar19 = (float10)fVar7;
                *pfVar18 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * (float10)fVar2))));
                pfVar18[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar4 * fVar19))));
                pfVar18[2] = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar19 * (float10)fVar6))));
              }
            }
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x70)) < 0);
            piVar15 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x78)) + 1)));
            (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
          } while (piVar15 < piVar11);
        }
        if (param_3 != '\0') {
          fVar1 = pfVar18[0x14];
          (*(float *)(gen_frame + 0x64)) = fVar1;
          if ((float10)pfVar18[1] < (float10)fVar1) {
            pfVar18[1] = fVar1;
            fVar1 = pfVar18[9];
            (*(float *)(gen_frame + 0xc)) = fVar1;
            (*(float *)(gen_frame + 0x0)) = 0.0;
            pfVar14 = &(*(float *)(gen_frame + 0xc));
            if (!(0.0 < fVar1)) {
              pfVar14 = &(*(float *)(gen_frame + 0x0));
            }
            pfVar18[9] = *pfVar14;
          }
        }
      }
      (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 0x60;
      (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 0xa0;
      iVar16 = (*(int *)(gen_frame + 0x50)) + 1;
      (*(int *)(gen_frame + 0x50)) = iVar16;
    } while ((ushort)iVar16 < (ushort)(*(uint *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::SwapCollisionMaskBits */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bfb640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbfb640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_c;
  
  puVar4 = &(*(undefined4 *)&gen_args[0]);
  if ((ushort)(*(undefined4 *)&gen_args[1]) <= (ushort)(*(undefined4 *)&gen_args[0])) {
    puVar4 = &(*(undefined4 *)&gen_args[1]);
  }
  puVar5 = &(*(undefined4 *)&gen_args[0]);
  if ((ushort)(*(undefined4 *)&gen_args[0]) <= (ushort)(*(undefined4 *)&gen_args[1])) {
    puVar5 = &(*(undefined4 *)&gen_args[1]);
  }
  uVar7 = 1 << GEN_SHC((byte)*(undefined2 *)puVar4, (byte)*(undefined2 *)puVar4);
  uVar8 = 1 << GEN_SHC((byte)*(undefined2 *)puVar5, (byte)*(undefined2 *)puVar5);
  local_c = 0;
  if (*(short *)(this + 0xb8) != 0) {
    bVar3 = (byte)*(undefined2 *)puVar5 - (byte)*(undefined2 *)puVar4;
    iVar6 = 0;
    do {
      puVar1 = ((uint *)GEN_TOP((iVar6 + 0x80 + *(int *)(this + 0x1c))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar8) >> GEN_SHC(bVar3, bVar3) | (uVar2 & uVar7) << GEN_SHC(bVar3, bVar3) |
                uVar2 & ~uVar7 & ~uVar8;
      puVar1 = ((uint *)GEN_TOP((iVar6 + 0x84 + *(int *)(this + 0x1c))));
      uVar2 = *puVar1;
      iVar6 = iVar6 + 0xa0;
      *puVar1 = (uVar2 & uVar8) >> GEN_SHC(bVar3, bVar3) | (uVar2 & uVar7) << GEN_SHC(bVar3, bVar3) |
                uVar2 & ~uVar7 & ~uVar8;
      local_c = local_c + 1;
    } while (local_c < *(ushort *)(this + 0xb8));
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::FindCollider_00bfb740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bfb740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbfb740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)(this + 0xbc);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::IsBoneCollidingWith */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bfb7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbfb7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  piVar3 = ((int *)GEN_TOP(*param_1));
  uVar1 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (((*piVar3 == param_2) && ((ushort)param_3 < *(ushort *)(this + 0xb8))) &&
         ((*((uint *)GEN_TOP(((uint)(ushort)param_3 * 0xa0 + 0x80 + *(int *)(this + 0x1c)))) &
          1 << GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2)) != 0)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < uVar1);
  }
  param_1 = *(int * PTR32 *)(this + 0xbc);
  uVar1 = *(int *)(this + 0xc0) - (int)((int)(uintptr_t)param_1) >> 3;
  local_8 = 0;
  if (uVar1 != 0) {
    do {
      if (((*param_1 == param_2) && ((ushort)param_3 < *(ushort *)(this + 0xb8))) &&
         ((*((uint *)GEN_TOP(((uint)(ushort)param_3 * 0xa0 + 0x80 + *(int *)(this + 0x1c)))) &
          1 << GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2)) != 0)) {
        return 1;
      }
      param_1 = param_1 + 2;
      local_8 = local_8 + 1;
      uVar2 = uVar2 + 1;
    } while (local_8 < uVar1);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneSimulator::HasCollider_00bfb890 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bfb890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbfb890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)(this + 0xbc);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bfb8d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfb8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbfb8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL(0x70, 0);
  int iVar1;
  int * piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if ((param_1 != 0) && ((ushort)param_3 < *((ushort *)GEN_TOP(((int)this + 0xb8))))) {
    iVar5 = *((int *)GEN_TOP(((int)this + 0x20)));
    uVar6 = param_3 & 0xffff;
    if (*((int *)GEN_TOP((iVar5 + 0x48 + uVar6 * 0x50))) != 4) {
      iVar1 = (uint)*((ushort *)GEN_TOP((iVar5 + 0x48 + uVar6 * 0x50))) + uVar6 * 0x14;
      *((int *)GEN_TOP((iVar5 + 0x38 + iVar1 * 4))) = param_1;
      (*(int *)(gen_frame + 0x58)) = iVar1;
      F_00bff950(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_3);
      (*(float *)(gen_frame + 0x40)) = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x44)) = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x48)) = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x38)));
      fVar7 = GEN_X87((float10)(float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x34))));
      fVar8 = GEN_X87((float10)(float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x30))));
      fVar9 = GEN_X87((float10)(float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x38))));
      fVar3 = ((float)GEN_TOF((fVar9 * (float10)(*(float *)(gen_frame + 0x18)) +
                     (fVar8 * (float10)(*(float *)(gen_frame + 0x10)) + fVar7 * (float10)(*(float *)(gen_frame + 0x14))))));
      (*(float *)(gen_frame + 0x5c)) = fVar3;
      fVar4 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) * fVar7 + (float10)(*(float *)(gen_frame + 0x20)) * fVar8) +
                     (float10)(*(float *)(gen_frame + 0x28)) * fVar9)));
      (*(float *)(gen_frame + 0x5c)) = fVar4;
      fVar7 = ((float10)GEN_TOD(atan2((float10)fVar3,(float10)fVar4)));
      (*(float *)(gen_frame + 0x5c)) = (float)fVar7;
      *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x28 + (*(int *)(gen_frame + 0x58)) * 4))) = (float)fVar7;
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x48 + uVar6 * 0x50)));
      *piVar2 = *piVar2 + 1;
    }
  }
  return;
}

/* ref: Global::RotateVectorAroundAxis */
GEN_OWN GEN_NOFRAME uint F_00bfb9d0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xbfb9d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar2 = GEN_X87((float10)(float)((float10)param_2[1] - (float10)param_3[1]));
  fVar3 = GEN_X87((float10)(float)((float10)*param_2 - (float10)*param_3));
  fVar4 = GEN_X87((float10)(float)((float10)param_2[2] - (float10)param_3[2]));
  if ((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) <
      (float10)*(float *)&REFG(undefined, 0x110e258)) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return (uint)param_2;
  }
  fVar2 = (float10)param_5;
  fVar3 = (float10)*param_2;
  fVar4 = GEN_X87((float10)(float)((float10)1 - fVar2));
  fVar5 = (float10)param_2[1];
  fVar6 = GEN_X87((float10)(float)(fVar4 * fVar3));
  fVar7 = (float10)param_2[2];
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar3) + fVar2)));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar5) - (float10)(float)(fVar7 * (float10)param_4))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)param_4) + (float10)(float)(fVar7 * fVar6))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar7 * (float10)param_4) + (float10)(float)(fVar6 * fVar5))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar5 * (float10)(float)(fVar5 * fVar4)))) + fVar2)));
  fVar8 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)(fVar5 * fVar4) * fVar7))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar8 - (float10)(float)(fVar3 * (float10)param_4))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar6) - (float10)(float)(fVar5 * (float10)param_4))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(float)(fVar3 * (float10)param_4) + fVar8)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((fVar2 + (float10)((float)GEN_TOF(((fVar4 * fVar7) * fVar7))))));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  uVar1 = F_004ee970(param_1,param_3,&(*(float *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Client::Graphics::Physics::BoneSimulator::ReleaseBuffers */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfbba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfbba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x18) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,*(int *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x10);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Physics::BoneSimulator::ApplyCollisions */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bfbbe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xbfbbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  if (*((char *)GEN_TOP((param_1 + 0xba))) == '\0') {
    F_00bfaf70(param_1 GEN_EDX_FWD,param_2,(undefined1)param_3,(undefined1)param_4,param_5,param_6);
  }
  else if (*((char *)GEN_TOP((param_1 + 0xba))) == '\x01') {
    F_00bfb1a0(param_1 GEN_EDX_ARG,param_2,(undefined1)param_3,(undefined1)param_4,param_5,param_6);
    return;
  }
  return;
}

/* ref: Client::Graphics::Physics::BoneSimulator::SwapColliders */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bfbc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbfbc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ushort)(*(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3);
  if (((ushort)param_1 < uVar4) && ((ushort)param_2 < uVar4)) {
    iVar2 = *(int *)(this + 0xbc);
    iVar5 = (uint)(ushort)param_1 * 8;
    iVar6 = (uint)(ushort)param_2 * 8;
    uVar3 = *((undefined4 *)GEN_TOP((iVar2 + iVar5)));
    *((undefined4 *)GEN_TOP((iVar2 + iVar5))) = *((undefined4 *)GEN_TOP((iVar6 + iVar2)));
    *((undefined4 *)GEN_TOP((iVar6 + *(int *)(this + 0xbc)))) = uVar3;
    iVar2 = *(int *)(this + 0xbc);
    uVar1 = *((undefined2 *)GEN_TOP((iVar2 + 4 + iVar5)));
    *((undefined2 *)GEN_TOP((iVar2 + 4 + iVar5))) = *((undefined2 *)GEN_TOP((iVar6 + 4 + iVar2)));
    *((undefined2 *)GEN_TOP((iVar6 + 4 + *(int *)(this + 0xbc)))) = uVar1;
    F_00bfb640(this GEN_EDX_FWD,param_3,param_4);
  }
  return;
}

/* ref: FUN_00bfbcd0 */
GEN_OWN GEN_FRAME uint F_00bfbcd0(float gen_a0)
{
  GEN_ENTER(0xbfbcd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)pfVar1;
}

/* ref: Global::InitBoneChain */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bfbd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(int * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbfbd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x490, 0);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  float * pfVar7;
  float * pfVar8;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 * puVar14;
  float * pfVar15;
  float * pfVar16;
  int iVar17;
  int iVar18;
  undefined4 * puVar19;
  float * PTR32 * ppfVar20;
  undefined * pvVar21;
  int iVar22;
  undefined4 * puVar23;
  undefined4 * puVar24;
  float * pfVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  (*(uint *)(gen_frame + 0x47c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x480);
  (*(undefined * PTR32 *)(gen_frame + 0x1a0)) = this;
  (*(int * PTR32 *)(gen_frame + 0xb0)) = param_1;
  (*(ushort * PTR32 *)(gen_frame + 0xb8)) = param_3;
  (*(float * PTR32 *)(gen_frame + 0x19c)) = param_4;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x10))) = (*(int * PTR32 *)(gen_frame + 0xb0));
  uVar11 = param_2 + 1U & 0xffff;
  (*(uint *)(gen_frame + 0x98)) = uVar11;
  (*(uint *)(gen_frame + 0x48)) = uVar11;
  uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                     (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,uVar11 * 0x152,0x10);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) = uVar12;
  iVar13 = uVar12 + (int)(uVar11 * 0x60);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))) = iVar13;
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = ((float *)GEN_TOP((uVar11 * 0x60)));
  iVar13 = iVar13 + uVar11 * 0xa0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x20))) = iVar13;
  (*(int *)(gen_frame + 0x78)) = uVar11 * 0xa0;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x14))) = uVar11 * 0x50 + iVar13;
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0xb8))) = (short)(*(uint *)(gen_frame + 0x98));
  iVar13 = *param_5;
  iVar17 = param_5[1];
  (*(uint *)(gen_frame + 0xe0)) = iVar13;
  pfVar15 = ((float *)GEN_TOP(param_5[3]));
  (*(float * PTR32 *)(gen_frame + 0xbc)) = pfVar15;
  pfVar16 = ((float *)GEN_TOP(param_5[4]));
  (*(float * PTR32 *)(gen_frame + 0x174)) = pfVar16;
  pfVar25 = ((float *)GEN_TOP(param_5[5]));
  (*(float * PTR32 *)(gen_frame + 0x194)) = pfVar25;
  pfVar7 = ((float *)GEN_TOP(param_5[6]));
  (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar7;
  iVar18 = param_5[7];
  (*(int *)(gen_frame + 0xec)) = iVar18;
  pfVar8 = ((float *)GEN_TOP(param_5[8]));
  (*(float * PTR32 *)(gen_frame + 0x17c)) = pfVar8;
  (*(int *)(gen_frame + 0x4c)) = iVar17;
  puVar19 = ((undefined4 *)GEN_TOP(param_5[2]));
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar19;
  (*(int *)(gen_frame + 0xe8)) = 0;
  if ((short)(*(uint *)(gen_frame + 0x98)) != 0) {
    (*(uint *)(gen_frame + 0x16c)) = 0;
    (*(int *)(gen_frame + 0x12c)) = 0;
    (*(int *)(gen_frame + 0x128)) = 0;
    (*(int *)(gen_frame + 0xe4)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x170)) = pfVar7;
    (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)GEN_TOP(((int)pfVar7 - (int)pfVar25)));
    (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)GEN_TOP((iVar17 - (int)puVar19)));
    (*(float * PTR32 *)(gen_frame + 0x84)) = ((float *)GEN_TOP(((int)pfVar15 - (int)puVar19)));
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP((iVar13 - (int)puVar19)));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)GEN_TOP((iVar18 - (int)puVar19)));
    (*(float * PTR32 *)(gen_frame + 0x9c)) = ((float *)GEN_TOP(((int)pfVar8 - (int)puVar19)));
    (*(uint *)(gen_frame + 0x88)) = uVar11 - 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x178)) = puVar19;
    (*(float * PTR32 *)(gen_frame + 0xb4)) = pfVar25 + 2;
    (*(int *)(gen_frame + 0x90)) = (int)pfVar16 - (int)puVar19;
    fVar32 = REFG(float, 0x10928e4);
    do {
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x1a0));
      pfVar15 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if ((*(uint *)(gen_frame + 0x16c)) != (*(uint *)(gen_frame + 0x88))) {
        *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x14))) + 2 + (*(uint *)(gen_frame + 0x16c)) * 2))) = (*(ushort * PTR32 *)(gen_frame + 0xb8))[(*(uint *)(gen_frame + 0x16c))];
      }
      iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
      *((undefined4 *)GEN_TOP((iVar13 + (*(int *)(gen_frame + 0xe4))))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + (*(int *)(gen_frame + 0xe4))))), REFG(float, 0x1375ac0));
      iVar13 = iVar13 + (*(int *)(gen_frame + 0xe4));
      *((undefined4 *)GEN_TOP((iVar13 + 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 4))), REFG(float, 0x1375ac4));
      *((undefined4 *)GEN_TOP((iVar13 + 8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 8))), REFG(float, 0x1375ac8));
      *((undefined4 *)GEN_TOP((iVar13 + 0x10))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x10))), REFG(float, 0x1375ac0));
      *((undefined4 *)GEN_TOP((iVar13 + 0x14))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x14))), REFG(float, 0x1375ac4));
      *((undefined4 *)GEN_TOP((iVar13 + 0x18))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x18))), REFG(float, 0x1375ac8));
      *((undefined4 *)GEN_TOP((iVar13 + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x20))), REFG(float, 0x1375ac0));
      *((undefined4 *)GEN_TOP((iVar13 + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x24))), REFG(float, 0x1375ac4));
      *((undefined4 *)GEN_TOP((iVar13 + 0x28))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x28))), REFG(float, 0x1375ac8));
      *((undefined4 *)GEN_TOP((iVar13 + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x30))), REFG(float, 0x1375ac0));
      *((undefined4 *)GEN_TOP((iVar13 + 0x34))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x34))), REFG(float, 0x1375ac4));
      *((undefined4 *)GEN_TOP((iVar13 + 0x38))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((iVar13 + 0x38))), REFG(float, 0x1375ac8));
      *((undefined4 *)GEN_TOP((iVar13 + 0x50))) = 0;
      *((float * PTR32 *)GEN_TOP((iVar13 + 0x54))) = pfVar15;
      *((float * PTR32 *)GEN_TOP((iVar13 + 0x58))) = pfVar15;
      *((float * PTR32 *)GEN_TOP((iVar13 + 0x5c))) = pfVar15;
      if ((*(int *)(gen_frame + 0x4c)) != 0) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xe4)) + 0x50 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)))))) =
             *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (int)(*(float * PTR32 *)(gen_frame + 0x8c)))));
      }
      if (puVar19 != ((undefined4 *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xe4)) + 0x58 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)))))) = *(*(undefined4 * PTR32 *)(gen_frame + 0x178));
      }
      if ((*(float * PTR32 *)(gen_frame + 0xbc)) != ((float *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xe4)) + 0x5c + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)))))) =
             *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (int)(*(float * PTR32 *)(gen_frame + 0x84)))));
      }
      puVar14 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))) + (*(int *)(gen_frame + 0x128)))));
      puVar23 = &REFG(float, 0x1302d00);
      puVar24 = puVar14;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *puVar24 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar24 = puVar24 + 1;
      }
      puVar23 = &REFG(float, 0x1302d00);
      puVar24 = puVar14 + 0x10;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *puVar24 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar24 = puVar24 + 1;
      }
      puVar14[0x20] = 0xffffffff;
      puVar14[0x21] = 0;
      puVar14[0x22] = 0;
      puVar14[0x23] = 0;
      puVar14[0x24] = 0;
      if ((*(uint *)(gen_frame + 0xe0)) != 0) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x128)) + 0x88 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)))))) =
             *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (int)(*(float * PTR32 *)(gen_frame + 0x7c)))));
      }
      if ((*(int *)(gen_frame + 0xec)) != 0) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x128)) + 0x80 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)))))) =
             *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (int)(*(float * PTR32 *)(gen_frame + 0x74)))));
      }
      if ((*(float * PTR32 *)(gen_frame + 0x17c)) != ((float *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x128)) + 0x84 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)))))) =
             *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (int)(*(float * PTR32 *)(gen_frame + 0x9c)))));
      }
      pfVar15 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x20))) + (*(int *)(gen_frame + 0x12c)))));
      *pfVar15 = fVar32;
      pfVar15[1] = fVar32;
      pfVar15[2] = fVar32;
      pfVar15[4] = GEN_FLT_TO(pfVar15[4], REFG(float, 0x1302c70));
      pfVar15[5] = GEN_FLT_TO(pfVar15[5], REFG(float, 0x1302c74));
      pfVar15[6] = GEN_FLT_TO(pfVar15[6], REFG(float, 0x1302c78));
      pfVar15[8] = (float)REFG(float, 0x1090708);
      pfVar15[9] = 0.0;
      pfVar15[0x12] = 0.0;
      pfVar15 = pfVar15 + 10;
      iVar13 = 4;
      do {
        pfVar15[4] = 0.0;
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + 1;
        iVar13 = iVar13 - 1;
      } while (iVar13 != 0);
      fVar31 = fVar32;
      if (((*(float * PTR32 *)(gen_frame + 0x174)) != ((float *)GEN_TOP(0x0))) && ((ushort)(*(int *)(gen_frame + 0xe8)) < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0xb8))))) {
        fVar26 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x178)) + (*(int *)(gen_frame + 0x90))))))));
        fVar32 = (float)fVar26;
        (*(float *)(gen_frame + 0x198)) = fVar32;
        if (((float10)fVar32 < (float10)0) &&
           ((!GEN_ISNAN(fVar32) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x110e254))) && !(fVar32 <= *(float *)&REFG(undefined, 0x110e254)))
           ) {
          (*(float *)(gen_frame + 0x198)) = 0.0;
        }
        *((float *)GEN_TOP(((*(int *)(gen_frame + 0x12c)) + 0x20 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x20)))))) = (*(float *)(gen_frame + 0x198));
        fVar31 = REFG(float, 0x10928e4);
        fVar32 = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x198)) * (float10)(*(float *)(gen_frame + 0x198)));
        (*(float *)(gen_frame + 0x198)) = fVar32;
        fVar32 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar32))));
        (*(float *)(gen_frame + 0x198)) = fVar32;
        *((float *)GEN_TOP(((*(int *)(gen_frame + 0x12c)) + 0x24 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x20)))))) = fVar32;
        puVar19 = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
      }
      if ((*(float * PTR32 *)(gen_frame + 0x194)) != ((float *)GEN_TOP(0x0))) {
        fVar32 = (*(float * PTR32 *)(gen_frame + 0xb4))[-1];
        fVar33 = *(*(float * PTR32 *)(gen_frame + 0xb4));
        if ((ushort)(*(int *)(gen_frame + 0xe8)) < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0xb8)))) {
          (*(float *)(gen_frame + 0xc0)) = (*(float * PTR32 *)(gen_frame + 0xb4))[-2];
          (*(float *)(gen_frame + 0xc4)) = fVar32;
          (*(float *)(gen_frame + 0xc8)) = fVar33;
          F_0046f390(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG);
          fVar31 = REFG(float, 0x10928e4);
          pfVar15 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x12c)) + 0x10 + *((int *)GEN_TOP(((int)pvVar21 + 0x20))))));
          *pfVar15 = (*(float *)(gen_frame + 0xc0));
          pfVar15[1] = (*(float *)(gen_frame + 0xc4));
          pfVar15[2] = (*(float *)(gen_frame + 0xc8));
          puVar19 = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
        }
      }
      fVar32 = fVar31;
      if ((*(float * PTR32 *)(gen_frame + 0x1a4)) != ((float *)GEN_TOP(0x0))) {
        fVar33 = *(*(float * PTR32 *)(gen_frame + 0x170));
        fVar34 = (*(float * PTR32 *)(gen_frame + 0x170))[1];
        fVar1 = *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xb4)) + (int)(*(float * PTR32 *)(gen_frame + 0x1ac)))));
        if ((ushort)(*(int *)(gen_frame + 0xe8)) < *((ushort *)GEN_TOP(((int)pvVar21 + 0xb8)))) {
          (*(float *)(gen_frame + 0x100)) = fVar33;
          (*(float *)(gen_frame + 0x104)) = fVar34;
          (*(float *)(gen_frame + 0x108)) = fVar1;
          if (((GEN_ISNAN(fVar33) == (GEN_ISNAN(fVar33) || fVar33 == 0.0)) ||
              (GEN_ISNAN(fVar34) == (GEN_ISNAN(fVar34) || fVar34 == 0.0))) ||
             (fVar33 = fVar31, fVar34 = fVar31, GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))) {
            F_0046f390(&(*(float *)(gen_frame + 0x100)) GEN_EDX_ARG);
            puVar19 = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
            fVar31 = (*(float *)(gen_frame + 0x108));
            fVar32 = REFG(float, 0x10928e4);
            fVar33 = (*(float *)(gen_frame + 0x104));
            fVar34 = (*(float *)(gen_frame + 0x100));
          }
          pfVar15 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x20))) + (*(int *)(gen_frame + 0x12c)))));
          *pfVar15 = fVar34;
          pfVar15[1] = fVar33;
          pfVar15[2] = fVar31;
        }
      }
      (*(uint *)(gen_frame + 0x16c)) = (*(uint *)(gen_frame + 0x16c)) + 1;
      (*(int *)(gen_frame + 0xe4)) = (*(int *)(gen_frame + 0xe4)) + 0x60;
      (*(int *)(gen_frame + 0x128)) = (*(int *)(gen_frame + 0x128)) + 0xa0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x178)) = (*(undefined4 * PTR32 *)(gen_frame + 0x178)) + 1;
      (*(int *)(gen_frame + 0x12c)) = (*(int *)(gen_frame + 0x12c)) + 0x50;
      (*(float * PTR32 *)(gen_frame + 0xb4)) = (*(float * PTR32 *)(gen_frame + 0xb4)) + 3;
      (*(float * PTR32 *)(gen_frame + 0x170)) = (*(float * PTR32 *)(gen_frame + 0x170)) + 3;
      iVar13 = (*(int *)(gen_frame + 0xe8)) + 1;
      (*(int *)(gen_frame + 0xe8)) = iVar13;
    } while ((ushort)iVar13 < (ushort)(*(uint *)(gen_frame + 0x98)));
  }
  pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x1a0));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0xb0));
  (*(ushort *)(gen_frame + 0x82)) = *(*(ushort * PTR32 *)(gen_frame + 0xb8)) & 0xfff;
  ((byte *)(gen_frame + 0x80))[0] = (byte)(*(*(ushort * PTR32 *)(gen_frame + 0xb8)) >> 0xc);
  uVar10 = F_00623240((*(int * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((byte *)(gen_frame + 0x80)));
  **((ushort * PTR32 *)GEN_TOP(((int)pvVar21 + 0x14))) = uVar10;
  if ((**((short * PTR32 *)GEN_TOP(((int)pvVar21 + 0x14))) == 0) &&
     (uVar10 = F_00623270(piVar6 GEN_EDX_ARG,((byte *)(gen_frame + 0x80))), uVar10 != 0xffff)) {
    **((ushort * PTR32 *)GEN_TOP(((int)pvVar21 + 0x14))) = uVar10;
  }
  uVar11 = F_00623320(piVar6 GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)(gen_frame + 0xb8)));
  (*(uint *)(gen_frame + 0xe0)) = uVar11;
  pfVar16 = ((float *)GEN_TOP(F_004f45d0(((undefined4 *)(gen_frame + 0x230)),uVar11)));
  pfVar15 = *((float * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
  pfVar25 = ((float *)(gen_frame + 0x430));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar25 = *pfVar16;
    pfVar16 = pfVar16 + 1;
    pfVar25 = pfVar25 + 1;
  }
  *pfVar15 = (*(float *)(gen_frame + 0x460));
  pfVar15[1] = (*(float *)(gen_frame + 0x464));
  pfVar15[2] = (*(float *)(gen_frame + 0x468));
  iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
  *((float *)GEN_TOP((iVar13 + 0x10))) = (*(float *)(gen_frame + 0x460));
  *((float *)GEN_TOP((iVar13 + 0x14))) = (*(float *)(gen_frame + 0x464));
  *((float *)GEN_TOP((iVar13 + 0x18))) = (*(float *)(gen_frame + 0x468));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) + 0x54))) = 0;
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x464));
  pfVar15 = ((float *)(gen_frame + 0x430));
  pfVar16 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))) + 0x40)));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
  *((float *)GEN_TOP((iVar13 + 0x40))) = (*(float *)(gen_frame + 0x460));
  *((float *)GEN_TOP((iVar13 + 0x44))) = (*(float *)(gen_frame + 0x464));
  *((float *)GEN_TOP((iVar13 + 0x48))) = (*(float *)(gen_frame + 0x468));
  (*(float *)(gen_frame + 0xa0)) = ((float *)(gen_frame + 0x430))[0];
  (*(float *)(gen_frame + 0xa4)) = ((float *)(gen_frame + 0x430))[1];
  (*(float *)(gen_frame + 0xa8)) = ((float *)(gen_frame + 0x430))[2];
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x440));
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x444));
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x460));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x468));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x448));
  (*(float * PTR32 *)(gen_frame + 0x170)) = ((float *)GEN_TOP(0x1));
  (*(uint *)(gen_frame + 0x88)) = (*(uint *)(gen_frame + 0x48)) - 1;
  if (1 < (int)((*(uint *)(gen_frame + 0x48)) - 1)) {
    (*(uint *)(gen_frame + 0x16c)) = 1;
    do {
      uVar11 = F_00623320((*(int * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,(uint)(*(ushort * PTR32 *)(gen_frame + 0xb8))[(*(uint *)(gen_frame + 0x16c))]);
      pfVar15 = ((float *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x270)),uVar11)));
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x1a0));
      pfVar16 = ((float *)(gen_frame + 0x3f0));
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar16 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar16 + 1;
      }
      fVar32 = (float)((float10)(*(float *)(gen_frame + 0x420)) - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x100)) = fVar32;
      fVar31 = (float)((float10)(*(float *)(gen_frame + 0x424)) - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x104)) = fVar31;
      iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
      fVar33 = (float)((float10)(*(float *)(gen_frame + 0x428)) - (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x108)) = fVar33;
      iVar17 = (*(uint *)(gen_frame + 0x16c)) * 0x60;
      *((float *)GEN_TOP((iVar13 + iVar17))) = (*(float *)(gen_frame + 0x420));
      *((float *)GEN_TOP((iVar13 + 4 + iVar17))) = (*(float *)(gen_frame + 0x424));
      *((float *)GEN_TOP((iVar13 + 8 + iVar17))) = (*(float *)(gen_frame + 0x428));
      pfVar15 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) + 0x10 + iVar17)));
      *pfVar15 = (*(float *)(gen_frame + 0x420));
      pfVar16 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      pfVar15[1] = (*(float *)(gen_frame + 0x424));
      pfVar15[2] = (*(float *)(gen_frame + 0x428));
      *((float * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) + 0x54 + iVar17))) = pfVar16;
      (*(int *)(gen_frame + 0x90)) = iVar17;
      iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)));
      iVar18 = (*(uint *)(gen_frame + 0x16c)) * 0xa0;
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar33 * (float10)fVar33 +
                                ((float10)fVar31 * (float10)fVar31 +
                                (float10)fVar32 * (float10)fVar32)))))));
      (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar15;
      (*(int *)(gen_frame + 0xec)) = iVar18;
      pfVar16 = ((float *)(gen_frame + 0x3f0));
      pfVar25 = ((float *)GEN_TOP((iVar13 + 0x40 + iVar18)));
      for (iVar22 = 0x10; iVar22 != 0; iVar22 = iVar22 - 1) {
        *pfVar25 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar25 = pfVar25 + 1;
      }
      (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))))))))));
      *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))) + 0x8c + iVar18))) =
           ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))));
      iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)));
      *((float *)GEN_TOP((iVar18 + 0x90 + iVar13))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar18 + 0x8c + iVar13))) +
                  (float10)*((float *)GEN_TOP((iVar18 - 0x10 + iVar13))))));
      pfVar16 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) + 0x40 + iVar17)));
      *pfVar16 = (*(float *)(gen_frame + 0x420));
      fVar34 = REFG(float, 0x10905c4);
      pfVar16[1] = (*(float *)(gen_frame + 0x424));
      pfVar16[2] = (*(float *)(gen_frame + 0x428));
      (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar15;
      if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) <= fVar34) {
        (*(float *)(gen_frame + 0x130)) = 0.0;
        (*(float *)(gen_frame + 0x134)) = 0.0;
        (*(float *)(gen_frame + 0x138)) = 0.0;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))))))))));
        fVar34 = (float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))))))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
        fVar26 = (float10)fVar34;
        (*(float *)(gen_frame + 0x130)) = (float)(fVar26 * (float10)fVar32);
        (*(float *)(gen_frame + 0x134)) = (float)(fVar26 * (float10)fVar31);
        (*(float *)(gen_frame + 0x138)) = (float)(fVar26 * (float10)fVar33);
      }
      if ((short)(*(float * PTR32 *)(gen_frame + 0x170)) == 1) {
        fVar32 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x448)) * (float10)(*(float *)(gen_frame + 0x448)) +
                        ((float10)(*(float *)(gen_frame + 0x444)) * (float10)(*(float *)(gen_frame + 0x444)) +
                        (float10)(*(float *)(gen_frame + 0x440)) * (float10)(*(float *)(gen_frame + 0x440))))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
        fVar26 = (float10)fVar32;
        if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
          (*(float *)(gen_frame + 0x150)) = 0.0;
          (*(float *)(gen_frame + 0x154)) = 0.0;
          (*(float *)(gen_frame + 0x158)) = 0.0;
        }
        else {
          fVar32 = ((float)GEN_TOF(GEN_X87(SQRT(fVar26))));
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
          fVar32 = (float)((float10)1 / (float10)fVar32);
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
          fVar26 = (float10)fVar32;
          (*(float *)(gen_frame + 0x150)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x440)));
          (*(float *)(gen_frame + 0x154)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x444)));
          (*(float *)(gen_frame + 0x158)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x448)));
        }
        fVar26 = (float10)(*(float *)(gen_frame + 0x134));
        fVar27 = (float10)(*(float *)(gen_frame + 0x154));
        fVar28 = (float10)(*(float *)(gen_frame + 0x130));
        fVar29 = (float10)(*(float *)(gen_frame + 0x138));
        fVar30 = (float10)(*(float *)(gen_frame + 0x158));
        fVar32 = ((float)GEN_TOF(((fVar27 * fVar26 + fVar28 * (float10)(*(float *)(gen_frame + 0x150))) + fVar30 * fVar29)));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
        fVar32 = ((float)GEN_TOF(ABS((float10)fVar32)));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
        if (*(double *)&REFG(undefined, 0x1094818) < (double)fVar32) {
          (*(float *)(gen_frame + 0x150)) = (*(float *)(gen_frame + 0x450));
          (*(float *)(gen_frame + 0x154)) = (*(float *)(gen_frame + 0x454));
          (*(float *)(gen_frame + 0x158)) = (*(float *)(gen_frame + 0x458));
          F_0046f390(&(*(float *)(gen_frame + 0x150)) GEN_EDX_ARG);
          fVar30 = (float10)(*(float *)(gen_frame + 0x158));
          fVar27 = (float10)(*(float *)(gen_frame + 0x154));
          fVar28 = (float10)(*(float *)(gen_frame + 0x130));
          fVar29 = (float10)(*(float *)(gen_frame + 0x138));
          fVar26 = (float10)(*(float *)(gen_frame + 0x134));
        }
        uVar11 = (*(uint *)(gen_frame + 0xe0));
        fVar32 = (float)(fVar26 * fVar30 - fVar29 * fVar27);
        (*(float *)(gen_frame + 0x180)) = fVar32;
        fVar31 = (float)((float10)(*(float *)(gen_frame + 0x150)) * fVar29 - fVar28 * fVar30);
        (*(float *)(gen_frame + 0x184)) = fVar31;
        fVar33 = (float)(fVar28 * fVar27 - fVar26 * (float10)(*(float *)(gen_frame + 0x150)));
        (*(float *)(gen_frame + 0x188)) = fVar33;
        fVar34 = (float)((float10)fVar31 * fVar29 - (float10)fVar33 * fVar26);
        (*(float *)(gen_frame + 0x140)) = fVar34;
        fVar1 = (float)(fVar28 * (float10)fVar33 - (float10)fVar32 * fVar29);
        (*(float *)(gen_frame + 0x144)) = fVar1;
        fVar4 = (float)((float10)fVar32 * fVar26 - (float10)fVar31 * fVar28);
        (*(float *)(gen_frame + 0x148)) = fVar4;
        fVar5 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                       ((float10)fVar1 * (float10)fVar1 + (float10)fVar34 * (float10)fVar34))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
        fVar26 = (float10)fVar5;
        if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
          (*(float *)(gen_frame + 0x140)) = 0.0;
          (*(float *)(gen_frame + 0x144)) = 0.0;
          (*(float *)(gen_frame + 0x148)) = 0.0;
        }
        else {
          fVar5 = ((float)GEN_TOF(GEN_X87(SQRT(fVar26))));
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
          fVar5 = (float)((float10)1 / (float10)fVar5);
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
          fVar26 = (float10)fVar5;
          (*(float *)(gen_frame + 0x140)) = (float)(fVar26 * (float10)fVar34);
          (*(float *)(gen_frame + 0x144)) = (float)(fVar26 * (float10)fVar1);
          (*(float *)(gen_frame + 0x148)) = (float)(fVar26 * (float10)fVar4);
        }
        fVar34 = ((float)GEN_TOF(((float10)fVar33 * (float10)fVar33 +
                        ((float10)fVar32 * (float10)fVar32 + (float10)fVar31 * (float10)fVar31))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
        fVar26 = (float10)fVar34;
        if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
          (*(float *)(gen_frame + 0x180)) = 0.0;
          (*(float *)(gen_frame + 0x184)) = 0.0;
          (*(float *)(gen_frame + 0x188)) = 0.0;
        }
        else {
          fVar34 = ((float)GEN_TOF(GEN_X87(SQRT(fVar26))));
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
          fVar34 = (float)((float10)1 / (float10)fVar34);
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
          fVar26 = (float10)fVar34;
          (*(float *)(gen_frame + 0x180)) = (float)(fVar26 * (float10)fVar32);
          (*(float *)(gen_frame + 0x184)) = (float)(fVar26 * (float10)fVar31);
          (*(float *)(gen_frame + 0x188)) = (float)(fVar26 * (float10)fVar33);
        }
        puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x130)),(*(uint *)(gen_frame + 0xe0)))));
        uVar2 = puVar19[1];
        uVar3 = puVar19[2];
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x30))) = *puVar19;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x34))) = uVar2;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x38))) = uVar3;
        puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x140)),uVar11)));
        uVar2 = puVar19[1];
        uVar3 = puVar19[2];
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x40))) = *puVar19;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x44))) = uVar2;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x48))) = uVar3;
        puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x180)),uVar11)));
        uVar2 = puVar19[1];
        uVar3 = puVar19[2];
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x50))) = *puVar19;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x54))) = uVar2;
        *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x58))) = uVar3;
      }
      else {
        fVar32 = (float)((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0x134)) -
                        (float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0x138)));
        (*(float *)(gen_frame + 0xc0)) = fVar32;
        fVar31 = (float)((float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0x138)) -
                        (float10)(*(float *)(gen_frame + 0x130)) * (float10)(*(float *)(gen_frame + 0xa8)));
        (*(float *)(gen_frame + 0xc4)) = fVar31;
        fVar33 = (float)((float10)(*(float *)(gen_frame + 0x130)) * (float10)(*(float *)(gen_frame + 0xa4)) -
                        (float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0x134)));
        (*(float *)(gen_frame + 0xc8)) = fVar33;
        fVar26 = (float10)fVar32;
        fVar27 = (float10)fVar31;
        fVar28 = (float10)fVar33;
        fVar32 = ((float)GEN_TOF((fVar28 * fVar28 + (fVar27 * fVar27 + fVar26 * fVar26))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar32)));
        pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)fVar32)))))));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x74)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP(0x0));
        ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a4));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) < (float10)1)) {
          ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x74));
        }
        if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar20))))) {
          ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x7c));
        }
        pfVar15 = *ppfVar20;
        (*(float * PTR32 *)(gen_frame + 0x17c)) = pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x84)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708)));
        ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x84));
        pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x138)) * (float10)(*(float *)(gen_frame + 0xa8)) +
                                  ((float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0x130)) +
                                  (float10)(*(float *)(gen_frame + 0x134)) * (float10)(*(float *)(gen_frame + 0xa4)))))))));
        (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar16;
        if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < REFG(double, 0x1094890))) {
          ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a4));
        }
        pfVar16 = *ppfVar20;
        (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar16;
        (*(float * PTR32 *)(gen_frame + 0xbc)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x8c));
        if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < (float)REFG(float, 0x1087f04))) {
          ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0xbc));
        }
        pfVar16 = *ppfVar20;
        (*(float * PTR32 *)(gen_frame + 0x174)) = pfVar16;
        fVar26 = ((float10)GEN_TOD(GEN_X87MATH((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))),6)));
        pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar15;
        if (0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) {
          (*(float * PTR32 *)(gen_frame + 0x194)) = pfVar15;
        }
        else {
          (*(float * PTR32 *)(gen_frame + 0x194)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))));
        }
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x194)))))))))));
        if ((float10)REFG(float, 0x110e1b8) < (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x194))))))))) {
          F_0046f390(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG);
          F_00bfb9d0(&(*(float *)(gen_frame + 0x140)),&(*(float *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0x60)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x17c))))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x174))))))
          ;
          F_0046f390(&(*(float *)(gen_frame + 0x140)) GEN_EDX_ARG);
        }
        else {
          (*(float *)(gen_frame + 0x140)) = (*(float *)(gen_frame + 0x60));
          (*(float *)(gen_frame + 0x144)) = (*(float *)(gen_frame + 0x64));
          (*(float *)(gen_frame + 0x148)) = (*(float *)(gen_frame + 0x68));
        }
        fVar32 = (float)((float10)(*(float *)(gen_frame + 0x148)) * (float10)(*(float *)(gen_frame + 0x134)) -
                        (float10)(*(float *)(gen_frame + 0x144)) * (float10)(*(float *)(gen_frame + 0x138)));
        (*(float *)(gen_frame + 0x180)) = fVar32;
        fVar31 = (float)((float10)(*(float *)(gen_frame + 0x140)) * (float10)(*(float *)(gen_frame + 0x138)) -
                        (float10)(*(float *)(gen_frame + 0x130)) * (float10)(*(float *)(gen_frame + 0x148)));
        (*(float *)(gen_frame + 0x184)) = fVar31;
        fVar33 = (float)((float10)(*(float *)(gen_frame + 0x130)) * (float10)(*(float *)(gen_frame + 0x144)) -
                        (float10)(*(float *)(gen_frame + 0x140)) * (float10)(*(float *)(gen_frame + 0x134)));
        (*(float *)(gen_frame + 0x188)) = fVar33;
        fVar34 = ((float)GEN_TOF((((float10)fVar32 * (float10)fVar32 + (float10)fVar31 * (float10)fVar31) +
                        (float10)fVar33 * (float10)fVar33)));
        (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
        fVar26 = (float10)fVar34;
        if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
          (*(float *)(gen_frame + 0x180)) = 0.0;
          (*(float *)(gen_frame + 0x184)) = 0.0;
          (*(float *)(gen_frame + 0x188)) = 0.0;
        }
        else {
          fVar34 = ((float)GEN_TOF(GEN_X87(SQRT(fVar26))));
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
          fVar34 = (float)((float10)1 / (float10)fVar34);
          (*(float * PTR32 *)(gen_frame + 0x1ac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar34)));
          fVar26 = (float10)fVar34;
          (*(float *)(gen_frame + 0x180)) = (float)(fVar26 * (float10)fVar32);
          (*(float *)(gen_frame + 0x184)) = (float)(fVar26 * (float10)fVar31);
          (*(float *)(gen_frame + 0x188)) = (float)(fVar26 * (float10)fVar33);
        }
      }
      (*(float *)(gen_frame + 0x370)) = (*(float *)(gen_frame + 0x130));
      (*(float *)(gen_frame + 0x374)) = (*(float *)(gen_frame + 0x134));
      (*(float *)(gen_frame + 0x378)) = (*(float *)(gen_frame + 0x138));
      (*(float *)(gen_frame + 0x380)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x384)) = (*(float *)(gen_frame + 0x144));
      (*(float *)(gen_frame + 0x388)) = (*(float *)(gen_frame + 0x148));
      (*(float *)(gen_frame + 0x390)) = (*(float *)(gen_frame + 0x180));
      (*(float *)(gen_frame + 0x394)) = (*(float *)(gen_frame + 0x184));
      (*(float *)(gen_frame + 0x398)) = (*(float *)(gen_frame + 0x188));
      (*(undefined4 *)(gen_frame + 0x3a0)) = 0;
      (*(undefined4 *)(gen_frame + 0x3a4)) = 0;
      (*(undefined4 *)(gen_frame + 0x3a8)) = 0;
      puVar19 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x370)))));
      puVar23 = ((undefined4 *)(gen_frame + 0x230));
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *puVar23 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar23 = puVar23 + 1;
      }
      pfVar15 = ((float *)(gen_frame + 0x430));
      pfVar16 = ((float *)(gen_frame + 0x330));
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar16 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar16 + 1;
      }
      F_004ef9d0(((float *)(gen_frame + 0x330)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x230)));
      (*(float *)(gen_frame + 0x360)) = 0.0;
      (*(float *)(gen_frame + 0x364)) = 0.0;
      (*(float *)(gen_frame + 0x368)) = 0.0;
      pfVar15 = ((float *)(gen_frame + 0x330));
      pfVar16 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))) - 0xa0 + (*(int *)(gen_frame + 0xec)))));
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar16 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar16 + 1;
      }
      (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x130));
      (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0x134));
      (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0x138));
      (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x144));
      uVar11 = (int)(*(float * PTR32 *)(gen_frame + 0x170)) + 1;
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x148));
      (*(float * PTR32 *)(gen_frame + 0x170)) = ((float *)GEN_TOP(uVar11));
      uVar11 = uVar11 & 0xffff;
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x420));
      (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x424));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x428));
      pfVar15 = ((float *)(gen_frame + 0x3f0));
      pfVar16 = ((float *)(gen_frame + 0x430));
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar16 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar16 + 1;
      }
      (*(uint *)(gen_frame + 0x16c)) = uVar11;
    } while ((int)uVar11 < (int)(*(uint *)(gen_frame + 0x88)));
  }
  pfVar25 = (*(float * PTR32 *)(gen_frame + 0x19c));
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x19c)))));
  fVar32 = (*(float * PTR32 *)(gen_frame + 0x19c))[1];
  (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar15;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x19c))[2] * (float10)(*(float * PTR32 *)(gen_frame + 0x19c))[2] +
                            ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) +
                            (float10)fVar32 * (float10)fVar32)))))));
  (*(float * PTR32 *)(gen_frame + 0x19c)) = pfVar16;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))))))))));
  (*(float * PTR32 *)(gen_frame + 0x19c)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x194)) = pfVar16;
  pfVar16 = ((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x90)));
  *pfVar16 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x94))) = pfVar25[1];
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x98))) = pfVar25[2];
  F_0046f390(pfVar16 GEN_EDX_ARG);
  F_004ee9d0(&(*(float *)(gen_frame + 0xf0)),pfVar16,((float *)(gen_frame + 0x430)));
  pfVar16 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) * (float10)(*(float *)(gen_frame + 0xf8)) +
                            ((float10)(*(float *)(gen_frame + 0xf4)) * (float10)(*(float *)(gen_frame + 0xf4)) +
                            (float10)(*(float *)(gen_frame + 0xf0)) * (float10)(*(float *)(gen_frame + 0xf0)))))))));
  (*(float * PTR32 *)(gen_frame + 0x19c)) = pfVar15;
  fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
  if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0xf0)) = 0.0;
    (*(float *)(gen_frame + 0xf4)) = 0.0;
    (*(float *)(gen_frame + 0xf8)) = 0.0;
  }
  else {
    pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT(fVar26)))))));
    (*(float * PTR32 *)(gen_frame + 0x19c)) = pfVar15;
    pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))));
    (*(float * PTR32 *)(gen_frame + 0x19c)) = pfVar15;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
    (*(float *)(gen_frame + 0xf0)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf0)));
    (*(float *)(gen_frame + 0xf4)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf4)));
    (*(float *)(gen_frame + 0xf8)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf8)));
  }
  fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x194)))));
  (*(float *)(gen_frame + 0xc0)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf0)));
  pfVar15 = ((float *)(gen_frame + 0x430));
  pfVar25 = ((float *)(gen_frame + 0x330));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar25 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar25 = pfVar25 + 1;
  }
  (*(float *)(gen_frame + 0xc4)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf4)));
  (*(float *)(gen_frame + 0xc8)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf8)));
  pfVar15 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) - 0x60)));
  fVar32 = ((float)GEN_TOF(((float10)(float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf0))) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x100)) = fVar32;
  fVar31 = ((float)GEN_TOF(((float10)(float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf4))) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x104)) = fVar31;
  fVar33 = ((float)GEN_TOF(((float10)(float)(fVar26 * (float10)(*(float *)(gen_frame + 0xf8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0x108)) = fVar33;
  (*(float *)(gen_frame + 0x360)) = fVar32;
  (*(float *)(gen_frame + 0x364)) = fVar31;
  (*(float *)(gen_frame + 0x368)) = fVar33;
  *pfVar15 = fVar32;
  pfVar15[1] = fVar31;
  pfVar15[2] = fVar33;
  iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x48))) = fVar33;
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x50))) = fVar32;
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x4c))) = fVar31;
  *((float * PTR32 *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18))) - 0xc))) = pfVar16;
  pfVar15 = ((float *)(gen_frame + 0x330));
  pfVar16 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0x60 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))))));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  *((float * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0x14 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)))))) = (*(float * PTR32 *)(gen_frame + 0x194));
  iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c)));
  *((float *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0x10 + iVar13))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0xb0 + iVar13))) +
              (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0x14 + iVar13))))));
  iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x18)));
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x20))) = fVar32;
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x1c))) = fVar31;
  *((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1a8)) + iVar13 - 0x18))) = fVar33;
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0xf0));
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0xf4));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0xf8));
  fVar32 = (float)((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0xf4)) - (float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0xf8))
                  );
  (*(float *)(gen_frame + 0x150)) = fVar32;
  fVar31 = (float)((float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0xf8)) - (float10)(*(float *)(gen_frame + 0xf0)) * (float10)(*(float *)(gen_frame + 0xa8))
                  );
  (*(float *)(gen_frame + 0x154)) = fVar31;
  fVar33 = (float)((float10)(*(float *)(gen_frame + 0xf0)) * (float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0xf4))
                  );
  (*(float *)(gen_frame + 0x158)) = fVar33;
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar33 * (float10)fVar33 +
                            ((float10)fVar31 * (float10)fVar31 + (float10)fVar32 * (float10)fVar32)))))))
  ;
  (*(float * PTR32 *)(gen_frame + 0x194)) = pfVar15;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))))))))));
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float * PTR32 *)(gen_frame + 0x19c)) = ((float *)GEN_TOP(0x0));
  ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a4));
  if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < (float10)1)) {
    ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a8));
  }
  if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar20))))) {
    ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x19c));
  }
  pfVar16 = *ppfVar20;
  (*(float * PTR32 *)(gen_frame + 0x17c)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708)));
  ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a8));
  pfVar25 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) * (float10)(*(float *)(gen_frame + 0xa8)) +
                            ((float10)(*(float *)(gen_frame + 0xf4)) * (float10)(*(float *)(gen_frame + 0xa4)) +
                            (float10)(*(float *)(gen_frame + 0xf0)) * (float10)(*(float *)(gen_frame + 0xa0)))))))));
  (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar25;
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar25))) < REFG(double, 0x1094890))) {
    ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a4));
  }
  pfVar25 = *ppfVar20;
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar25;
  (*(float * PTR32 *)(gen_frame + 0x19c)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x1a8));
  if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar25))) < (float)REFG(float, 0x1087f04))) {
    ppfVar20 = &(*(float * PTR32 *)(gen_frame + 0x19c));
  }
  pfVar25 = *ppfVar20;
  (*(float * PTR32 *)(gen_frame + 0x174)) = pfVar25;
  fVar26 = ((float10)GEN_TOD(GEN_X87MATH((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))),6)));
  pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar7;
  (*(float * PTR32 *)(gen_frame + 0x1a4)) = pfVar7;
  if (0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar25)))) {
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x1a4)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7)))))));
  }
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1a4)))))))))));
  if ((float10)REFG(float, 0x110e1b8) < (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1a4))))))))) {
    (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
    if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))) <= REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x150)) = 0.0;
      (*(float *)(gen_frame + 0x154)) = 0.0;
      (*(float *)(gen_frame + 0x158)) = 0.0;
    }
    else {
      (*(float * PTR32 *)(gen_frame + 0x1a8)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15))))))))));
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))))))));
      (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      (*(float *)(gen_frame + 0x150)) = (float)(fVar26 * (float10)fVar32);
      (*(float *)(gen_frame + 0x154)) = (float)(fVar26 * (float10)fVar31);
      (*(float *)(gen_frame + 0x158)) = (float)(fVar26 * (float10)fVar33);
    }
    F_00bfb9d0(&(*(float *)(gen_frame + 0x110)),&(*(float *)(gen_frame + 0x150)),&(*(float *)(gen_frame + 0x60)),((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))),((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar25))));
    pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x118)) * (float10)(*(float *)(gen_frame + 0x118)) +
                              ((float10)(*(float *)(gen_frame + 0x114)) * (float10)(*(float *)(gen_frame + 0x114)) +
                              (float10)(*(float *)(gen_frame + 0x110)) * (float10)(*(float *)(gen_frame + 0x110)))))))));
    (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
    if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x110)) = 0.0;
      (*(float *)(gen_frame + 0x114)) = 0.0;
      (*(float *)(gen_frame + 0x118)) = 0.0;
    }
    else {
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT(fVar26)))))));
      (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))));
      (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      (*(float *)(gen_frame + 0x110)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x110)));
      (*(float *)(gen_frame + 0x114)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x114)));
      (*(float *)(gen_frame + 0x118)) = (float)(fVar26 * (float10)(*(float *)(gen_frame + 0x118)));
    }
  }
  else {
    (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x64));
    (*(float *)(gen_frame + 0x118)) = (*(float *)(gen_frame + 0x68));
  }
  fVar32 = (float)((float10)(*(float *)(gen_frame + 0x118)) * (float10)(*(float *)(gen_frame + 0x54)) - (float10)(*(float *)(gen_frame + 0x114)) * (float10)(*(float *)(gen_frame + 0x58))
                  );
  (*(float *)(gen_frame + 0xd0)) = fVar32;
  fVar31 = (float)((float10)(*(float *)(gen_frame + 0x110)) * (float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x118))
                  );
  (*(float *)(gen_frame + 0xd4)) = fVar31;
  fVar33 = (float)((float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x114)) - (float10)(*(float *)(gen_frame + 0x110)) * (float10)(*(float *)(gen_frame + 0x54))
                  );
  (*(float *)(gen_frame + 0xd8)) = fVar33;
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar33 * (float10)fVar33 +
                            ((float10)fVar31 * (float10)fVar31 + (float10)fVar32 * (float10)fVar32)))))))
  ;
  (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
  fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
  if (fVar26 <= (float10)REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0xd0)) = 0.0;
    (*(float *)(gen_frame + 0xd4)) = 0.0;
    (*(float *)(gen_frame + 0xd8)) = 0.0;
  }
  else {
    pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT(fVar26)))))));
    (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
    pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)))))));
    (*(float * PTR32 *)(gen_frame + 0x1a8)) = pfVar15;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
    (*(float *)(gen_frame + 0xd0)) = (float)(fVar26 * (float10)fVar32);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar26 * (float10)fVar31);
    (*(float *)(gen_frame + 0xd8)) = (float)(fVar26 * (float10)fVar33);
  }
  (*(float *)(gen_frame + 0x3b0)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x3b4)) = (*(float *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x3b8)) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x3c0)) = (*(float *)(gen_frame + 0x110));
  (*(float *)(gen_frame + 0x3c4)) = (*(float *)(gen_frame + 0x114));
  (*(float *)(gen_frame + 0x3c8)) = (*(float *)(gen_frame + 0x118));
  (*(float *)(gen_frame + 0x3d0)) = (*(float *)(gen_frame + 0xd0));
  (*(float *)(gen_frame + 0x3d4)) = (*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0x3d8)) = (*(float *)(gen_frame + 0xd8));
  (*(undefined4 *)(gen_frame + 0x3e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x3e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x3e8)) = 0;
  puVar19 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x3b0)))));
  puVar23 = ((undefined4 *)(gen_frame + 0x1f0));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *puVar23 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar23 = puVar23 + 1;
  }
  pfVar15 = ((float *)(gen_frame + 0x430));
  pfVar16 = ((float *)(gen_frame + 0x2b0));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  F_004ef9d0(((float *)(gen_frame + 0x2b0)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x1f0)));
  (*(undefined4 *)(gen_frame + 0x2e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e8)) = 0;
  pfVar15 = ((float *)(gen_frame + 0x2b0));
  pfVar16 = ((float *)GEN_TOP((((*(uint *)(gen_frame + 0x48)) * 5 - 10) * 0x20 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))))));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  puVar19 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x3b0)))));
  puVar23 = ((undefined4 *)(gen_frame + 0x1b0));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *puVar23 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar23 = puVar23 + 1;
  }
  pfVar15 = ((float *)(gen_frame + 0x330));
  pfVar16 = ((float *)(gen_frame + 0x2f0));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  F_004ef9d0(((float *)(gen_frame + 0x2f0)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x1b0)));
  uVar11 = (*(uint *)(gen_frame + 0xe0));
  (*(undefined4 *)(gen_frame + 0x320)) = 0;
  (*(undefined4 *)(gen_frame + 0x324)) = 0;
  (*(undefined4 *)(gen_frame + 0x328)) = 0;
  pfVar15 = ((float *)(gen_frame + 0x2f0));
  pfVar16 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x78)) - 0xa0 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x1c))))));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x1a0));
  if ((ushort)(*(uint *)(gen_frame + 0x98)) == 2) {
    puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0xe0)))));
    pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x1a0));
    uVar2 = puVar19[1];
    uVar3 = puVar19[2];
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x30))) = *puVar19;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x34))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1a0)) + 0x38))) = uVar3;
    puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x110)),uVar11)));
    uVar2 = puVar19[1];
    uVar3 = puVar19[2];
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x40))) = *puVar19;
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x44))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x48))) = uVar3;
    puVar19 = ((undefined4 *)GEN_TOP(F_004ee9d0(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xd0)),uVar11)));
    uVar2 = puVar19[1];
    uVar3 = puVar19[2];
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x50))) = *puVar19;
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x54))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x58))) = uVar3;
  }
  *((float *)GEN_TOP(((int)pvVar21 + 0x60))) = (*(float *)(gen_frame + 0x50));
  *((float *)GEN_TOP(((int)pvVar21 + 100))) = (*(float *)(gen_frame + 0x54));
  *((float *)GEN_TOP(((int)pvVar21 + 0x68))) = (*(float *)(gen_frame + 0x58));
  *((float *)GEN_TOP(((int)pvVar21 + 0x70))) = (*(float *)(gen_frame + 0x110));
  *((float *)GEN_TOP(((int)pvVar21 + 0x74))) = (*(float *)(gen_frame + 0x114));
  *((float *)GEN_TOP(((int)pvVar21 + 0x78))) = (*(float *)(gen_frame + 0x118));
  *((float *)GEN_TOP(((int)pvVar21 + 0x80))) = (*(float *)(gen_frame + 0xd0));
  *((float *)GEN_TOP(((int)pvVar21 + 0x84))) = (*(float *)(gen_frame + 0xd4));
  *((float *)GEN_TOP(((int)pvVar21 + 0x88))) = (*(float *)(gen_frame + 0xd8));
  return 1;
}

/* ref: Global::UpdateBoneChain */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bfdb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfdb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x200, 0);
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  ushort * puVar7;
  int iVar8;
  uint uVar10;
  float * pfVar11;
  float * PTR32 * ppfVar12;
  ushort uVar13;
  float * pfVar14;
  undefined1 * puVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float * pfVar19;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  puVar7 = *((ushort * PTR32 *)GEN_TOP(((int)this + 0x14)));
  (*(float *)(gen_frame + 0x100)) = *((float *)GEN_TOP(((int)this + 0x60)));
  (*(float *)(gen_frame + 0x104)) = *((float *)GEN_TOP(((int)this + 100)));
  (*(float *)(gen_frame + 0x108)) = *((float *)GEN_TOP(((int)this + 0x68)));
  (*(float *)(gen_frame + 0xd0)) = *((float *)GEN_TOP(((int)this + 0x70)));
  (*(float *)(gen_frame + 0xd4)) = *((float *)GEN_TOP(((int)this + 0x74)));
  (*(float *)(gen_frame + 0xd8)) = *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0xe0)) = *((float *)GEN_TOP(((int)this + 0x80)));
  (*(float *)(gen_frame + 0xe4)) = *((float *)GEN_TOP(((int)this + 0x84)));
  (*(float *)(gen_frame + 0xe8)) = *((float *)GEN_TOP(((int)this + 0x88)));
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x140)) = ((undefined1 *)(gen_frame + 0x160));
  F_0063a290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x160)),(uint)*puVar7);
  uVar13 = *((short *)GEN_TOP(((int)this + 0xb8))) - 1;
  if (uVar13 != 0) {
    (*(float * PTR32 *)(gen_frame + 0x9c)) = ((float *)GEN_TOP(0x0));
    (*(float * PTR32 *)(gen_frame + 0x8c)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x84)) = (float)REFG(float, 0x1090708);
    (*(float * PTR32 *)(gen_frame + 0x90)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int *)(gen_frame + 0x14c)) = 0;
    (*(int *)(gen_frame + 0x144)) = 0;
    (*(int *)(gen_frame + 0x148)) = 0;
    (*(uint *)(gen_frame + 0xf4)) = (uint)uVar13;
    do {
      pfVar14 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + (*(int *)(gen_frame + 0x144)))));
      fVar2 = pfVar14[0x18];
      iVar8 = *((int *)GEN_TOP(((int)this + 0x1c)));
      fVar3 = *pfVar14;
      pfVar11 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + (*(int *)(gen_frame + 0x148)))));
      (*(float * PTR32 *)(gen_frame + 0x154)) = pfVar11;
      (*(float *)(gen_frame + 0x1a0)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(uint *)(gen_frame + 0x118)) = iVar8 + (*(int *)(gen_frame + 0x14c));
      (*(float *)(gen_frame + 0x1a4)) = (float)((float10)pfVar14[0x19] - (float10)pfVar14[1]);
      (*(float *)(gen_frame + 0x1a8)) = (float)((float10)pfVar14[0x1a] - (float10)pfVar14[2]);
      fVar16 = GEN_X87((float10)(float)((float10)pfVar14[0x19] - (float10)pfVar14[1]));
      fVar17 = GEN_X87((float10)(float)((float10)fVar2 - (float10)fVar3));
      fVar18 = GEN_X87((float10)(float)((float10)pfVar14[0x1a] - (float10)pfVar14[2]));
      pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar18 * fVar18 + (fVar17 * fVar17 + fVar16 * fVar16)))))));
      (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
      pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))))))))));
      (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
      (*(float * PTR32 *)(gen_frame + 0x138)) = pfVar19;
      pfVar19 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if ((float)REFG(float, 0x1090708) < pfVar11[8]) {
        F_004ee9d0(&(*(float *)(gen_frame + 0xb0)),pfVar11 + 4,(*(undefined1 * PTR32 *)(gen_frame + 0x140)));
        (*(float * PTR32 *)(gen_frame + 0xfc)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar11[8])));
        pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a8)) * (float10)(*(float *)(gen_frame + 0xb8)) +
                                  ((float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0x1a0)) +
                                  (float10)(*(float *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0x1a4)))))))));
        (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        (*(float * PTR32 *)(gen_frame + 0x154)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x138)))))))));
        fVar2 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb0)));
        (*(float *)(gen_frame + 0x120)) = fVar2;
        fVar3 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb4)));
        (*(float *)(gen_frame + 0x124)) = fVar3;
        (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) * fVar16);
        (*(float *)(gen_frame + 0x120)) = (float)((float10)(*(float *)(gen_frame + 0x1a0)) - (float10)fVar2);
        (*(float *)(gen_frame + 0x124)) = (float)((float10)(*(float *)(gen_frame + 0x1a4)) - (float10)fVar3);
        (*(float *)(gen_frame + 0x128)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a8)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xb8)) * fVar16))));
        F_0046f390(&(*(float *)(gen_frame + 0x120)) GEN_EDX_ARG);
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x154))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xfc)))))) {
          (*(float * PTR32 *)(gen_frame + 0x154)) = (*(float * PTR32 *)(gen_frame + 0xfc));
          pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x138))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xfc)))))))));
          (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
          fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
          (*(float *)(gen_frame + 0x30)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb0)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar16);
          (*(float *)(gen_frame + 0x38)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb8)));
          pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x138))))) * (float10)pfVar11[9]))));
          (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
          fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
          (*(float *)(gen_frame + 0x20)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x120)));
          (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x124)) * fVar17);
          (*(float *)(gen_frame + 0x28)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x128)));
          fVar2 = ((float)GEN_TOF(((float10)(float)(fVar17 * (float10)(*(float *)(gen_frame + 0x120))) +
                         (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb0))))));
          (*(float *)(gen_frame + 0x1a0)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x124)) * fVar17) +
                         (float10)(float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar16))));
          (*(float *)(gen_frame + 0x1a4)) = fVar3;
          fVar4 = ((float)GEN_TOF(((float10)(float)(fVar17 * (float10)(*(float *)(gen_frame + 0x128))) +
                         (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0xb8))))));
          (*(float *)(gen_frame + 0x1a8)) = fVar4;
          pfVar14[0x18] = (float)((float10)fVar2 + (float10)*pfVar14);
          pfVar14[0x19] = (float)((float10)pfVar14[1] + (float10)fVar3);
          pfVar14[0x1a] = (float)((float10)pfVar14[2] + (float10)fVar4);
        }
        F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)(pfVar14 + 0x20));
        pfVar19 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        pfVar5 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x128)) +
                                 ((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x124)) +
                                 (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x120)))))))));
        (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar5;
        if ((float10)0 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5)))) {
          (*(float *)(gen_frame + 0x150)) = pfVar11[8];
          fVar16 = (float10)pfVar11[8];
          (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(float * PTR32 *)(gen_frame + 0x88)) = ((float *)GEN_TOP(0x0));
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x154));
          fVar2 = ((float)GEN_TOF(((-fVar16 * fVar16 - (float10)*(double *)&REFG(undefined, 0x110e268)) * fVar16 +
                         (float10)*(double *)&REFG(undefined, 0x110e260))));
          (*(float *)(gen_frame + 0x150)) = fVar2;
          fVar16 = (float10)fVar2;
          fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1094810) * fVar16);
          (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x154)))));
          fVar3 = ((float)GEN_TOF((fVar17 * (-fVar17 * fVar17 - (float10)*(double *)&REFG(undefined, 0x110e268)) +
                         (float10)*(double *)&REFG(undefined, 0x110e260))));
          (*(float *)(gen_frame + 0x150)) = fVar3;
          fVar17 = (float10)fVar2;
          fVar2 = (float)(fVar16 - fVar17);
          (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)fVar3 - fVar17) / (float10)fVar2))))));
          (*(float * PTR32 *)(gen_frame + 0x154)) = pfVar6;
          if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6))) < (float10)1)) {
            ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x80));
          }
          if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))))) {
            ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x88));
          }
          pfVar6 = *ppfVar12;
          (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(0x0));
          fVar16 = (float10)1;
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x154));
          (*(float * PTR32 *)(gen_frame + 0x154)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6)))))));
          if (!((float10)0 < (float10)(float)(fVar16 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6)))))) {
            ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x98));
          }
          pfVar6 = *ppfVar12;
          (*(float * PTR32 *)(gen_frame + 0x13c)) = pfVar6;
          (*(float * PTR32 *)(gen_frame + 0x94)) = pfVar5;
          (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(float * PTR32 *)(gen_frame + 0x78)) = ((float *)GEN_TOP(0x0));
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x94));
          if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5))) < (float)REFG(float, 0x1087f04))) {
            ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
          }
          if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))))) {
            ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x78));
          }
          fVar2 = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6))) - fVar16) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))) + fVar16)));
          (*(float * PTR32 *)(gen_frame + 0x13c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          fVar16 = (float10)fVar2;
          pfVar14[0x20] = (float)(fVar16 * (float10)pfVar14[0x20]);
          pfVar14[0x21] = (float)((float10)pfVar14[0x21] * fVar16);
          pfVar14[0x22] = (float)(fVar16 * (float10)pfVar14[0x22]);
        }
      }
      if (*pfVar11 <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))) {
        F_004ee9d0(&(*(float *)(gen_frame + 0x50)),pfVar11,(*(undefined1 * PTR32 *)(gen_frame + 0x140)));
        fVar2 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x1a4)) +
                        (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x1a0))) +
                       (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x1a8)))));
        (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        fVar16 = (float10)fVar2;
        fVar2 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x50)));
        (*(float *)(gen_frame + 0x10)) = fVar2;
        fVar3 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x54)));
        (*(float *)(gen_frame + 0x14)) = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x58)) * fVar16);
        (*(float *)(gen_frame + 0x18)) = fVar4;
        (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x1a0)) - (float10)fVar2);
        (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x1a4)) - (float10)fVar3);
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x1a8)) - (float10)fVar4);
        F_0046f390(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG);
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x138)))));
        (*(float *)(gen_frame + 0x1a0)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x60)));
        (*(float *)(gen_frame + 0x1a4)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * fVar16);
        (*(float *)(gen_frame + 0x1a8)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x68)));
        pfVar14[0x18] = ((float)GEN_TOF(((float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x60))) + (float10)*pfVar14)));
        pfVar14[0x19] = ((float)GEN_TOF(((float10)pfVar14[1] + (float10)(float)((float10)(*(float *)(gen_frame + 0x64)) * fVar16))))
        ;
        pfVar14[0x1a] = ((float)GEN_TOF(((float10)pfVar14[2] + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x68))))))
        ;
        fVar2 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x54)) * (float10)pfVar14[0x21] +
                        (float10)(*(float *)(gen_frame + 0x50)) * (float10)pfVar14[0x20]) +
                       (float10)(*(float *)(gen_frame + 0x58)) * (float10)pfVar14[0x22])));
        (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        fVar16 = (float10)fVar2;
        fVar2 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x50)));
        (*(float *)(gen_frame + 0x40)) = fVar2;
        fVar3 = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x54)));
        (*(float *)(gen_frame + 0x44)) = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x58)) * fVar16);
        (*(float *)(gen_frame + 0x48)) = fVar4;
        pfVar14[0x20] = (float)((float10)pfVar14[0x20] - (float10)fVar2);
        pfVar14[0x21] = (float)((float10)pfVar14[0x21] - (float10)fVar3);
        pfVar14[0x22] = (float)((float10)pfVar14[0x22] - (float10)fVar4);
      }
      F_0046f390(&(*(float *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x108)) * (float10)(*(float *)(gen_frame + 0x1a4)) - (float10)(*(float *)(gen_frame + 0x104)) * (float10)(*(float *)(gen_frame + 0x1a8)))
      ;
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      fVar3 = (float)((float10)(*(float *)(gen_frame + 0x100)) * (float10)(*(float *)(gen_frame + 0x1a8)) - (float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x108))
                     );
      (*(float *)(gen_frame + 0xa4)) = fVar3;
      fVar4 = (float)((float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x104)) - (float10)(*(float *)(gen_frame + 0x100)) * (float10)(*(float *)(gen_frame + 0x1a4))
                     );
      (*(float *)(gen_frame + 0xa8)) = fVar4;
      fVar16 = (float10)fVar2;
      fVar17 = (float10)fVar3;
      fVar18 = (float10)fVar4;
      fVar2 = ((float)GEN_TOF((fVar18 * fVar18 + (fVar17 * fVar17 + fVar16 * fVar16))));
      (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
      pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2)))))));
      (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar19;
      ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x15c));
      (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < (float10)1)) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x8c));
      }
      if (!(*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))))) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x9c));
      }
      pfVar19 = *ppfVar12;
      (*(float * PTR32 *)(gen_frame + 0xf8)) = pfVar19;
      ppfVar12 = (float * PTR32 *)&(*(float *)(gen_frame + 0x84));
      pfVar11 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a8)) * (float10)(*(float *)(gen_frame + 0x108)) +
                                ((float10)(*(float *)(gen_frame + 0x1a4)) * (float10)(*(float *)(gen_frame + 0x104)) +
                                (float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x100)))))))));
      (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar11;
      if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) < REFG(double, 0x1094890))) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x15c));
      }
      pfVar11 = *ppfVar12;
      (*(float * PTR32 *)(gen_frame + 0x7c)) = pfVar11;
      ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x7c));
      if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) < (float)REFG(float, 0x1087f04))) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x90));
      }
      pfVar11 = *ppfVar12;
      (*(float * PTR32 *)(gen_frame + 0x11c)) = pfVar11;
      fVar16 = ((float10)GEN_TOD(GEN_X87MATH((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))),6)));
      pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
      (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar19;
      (*(float * PTR32 *)(gen_frame + 0x15c)) = pfVar19;
      if (*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) {
        (*(float * PTR32 *)(gen_frame + 0xf0)) = pfVar19;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0xf0)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))))));
      }
      (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xf0)))))))))));
      if ((float10)REFG(float, 0x110e1b8) < (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xf0))))))))) {
        F_0046f390(&(*(float *)(gen_frame + 0xa0)) GEN_EDX_ARG);
        F_00bfb9d0(&(*(float *)(gen_frame + 0x1c0)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xe0)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xf8))))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x11c))))));
        F_0046f390(&(*(float *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x1b0)) = (float)((float10)(*(float *)(gen_frame + 0x1a8)) * (float10)(*(float *)(gen_frame + 0x1c4)) -
                          (float10)(*(float *)(gen_frame + 0x1a4)) * (float10)(*(float *)(gen_frame + 0x1c8)));
        (*(float *)(gen_frame + 0x1b4)) = (float)((float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x1c8)) -
                          (float10)(*(float *)(gen_frame + 0x1c0)) * (float10)(*(float *)(gen_frame + 0x1a8)));
        (*(float *)(gen_frame + 0x1b8)) = (float)((float10)(*(float *)(gen_frame + 0x1c0)) * (float10)(*(float *)(gen_frame + 0x1a4)) -
                          (float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x1c4)));
        F_0046f390(&(*(float *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x1c0)) = (float)((float10)(*(float *)(gen_frame + 0x1a4)) * (float10)(*(float *)(gen_frame + 0x1b8)) -
                          (float10)(*(float *)(gen_frame + 0x1a8)) * (float10)(*(float *)(gen_frame + 0x1b4)));
        (*(float *)(gen_frame + 0x1c4)) = (float)((float10)(*(float *)(gen_frame + 0x1b0)) * (float10)(*(float *)(gen_frame + 0x1a8)) -
                          (float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x1b8)));
        (*(float *)(gen_frame + 0x1c8)) = (float)((float10)(*(float *)(gen_frame + 0x1b4)) * (float10)(*(float *)(gen_frame + 0x1a0)) -
                          (float10)(*(float *)(gen_frame + 0x1a4)) * (float10)(*(float *)(gen_frame + 0x1b0)));
        F_0046f390(&(*(float *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
      }
      else {
        (*(float *)(gen_frame + 0x1b0)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x1b4)) = (*(float *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0x1b8)) = (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0x1c0)) = (*(float *)(gen_frame + 0xe0));
        (*(float *)(gen_frame + 0x1c4)) = (*(float *)(gen_frame + 0xe4));
        (*(float *)(gen_frame + 0x1c8)) = (*(float *)(gen_frame + 0xe8));
      }
      uVar10 = (*(uint *)(gen_frame + 0x118));
      puVar15 = ((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x118)) + 0x40)));
      F_004ef5a0((uint)puVar15,(*(uint *)(gen_frame + 0x118)),(uint)&(*(float *)(gen_frame + 0x1a0)));
      *((float *)GEN_TOP((uVar10 + 0x70))) = *pfVar14;
      (*(int *)(gen_frame + 0x148)) = (*(int *)(gen_frame + 0x148)) + 0x50;
      (*(int *)(gen_frame + 0x144)) = (*(int *)(gen_frame + 0x144)) + 0x60;
      *((float *)GEN_TOP((uVar10 + 0x74))) = pfVar14[1];
      (*(int *)(gen_frame + 0x14c)) = (*(int *)(gen_frame + 0x14c)) + 0xa0;
      uVar1 = (*(uint *)(gen_frame + 0xf4)) - 1;
      (*(uint *)(gen_frame + 0xf4)) = uVar1;
      *((float *)GEN_TOP((uVar10 + 0x78))) = pfVar14[2];
      (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x1a0));
      (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x1a4));
      (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x1a8));
      (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x1b0));
      (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x1b8));
      (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x1c0));
      (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x1c4));
      (*(undefined1 * PTR32 *)(gen_frame + 0x140)) = puVar15;
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x1c8));
      this = (*(undefined * PTR32 *)(gen_frame + 0x74));
    } while (uVar1 != 0);
  }
  return;
}

/* ref: FUN_00bfe5f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfe5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfe5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  undefined4 * puVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar6 = *((int *)GEN_TOP(((int)this + 0xd0))) - *((int *)GEN_TOP(((int)this + 0xcc))) >> 3;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1088068);
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar8 = 0;
  if (uVar6 != 0) {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x18)) = 0.0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xcc))) + (*(uint *)(gen_frame + 0x2c)) * 8)));
      piVar5 = ((int *)GEN_TOP(*puVar1));
      pfVar2 = ((float *)GEN_TOP(((uint)*(ushort *)(puVar1 + 1) * 0xa0 + 0x40 +
                        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1c))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x24))))(piVar5 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),pfVar2 + 0xc);
      pfVar7 = &(*(float *)(gen_frame + 0x28));
      fVar3 = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                     ((float10)(*(float *)(gen_frame + 0x0)) * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)(*(float *)(gen_frame + 0x4)))
                     )));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      fVar3 = ((float)GEN_TOF((((float10)fVar3 - (float10)*(double *)&REFG(undefined, 0x10919f0)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788))));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      if (!((float10)fVar3 < (float10)1)) {
        pfVar7 = &(*(float *)(gen_frame + 0x1c));
      }
      if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x18));
      }
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x28)) = (float)((float10)1 - (float10)fVar3);
      fVar9 = (float10)(*(float *)(gen_frame + 0x24));
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)1 - (float10)fVar3) * fVar9)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar4 = pfVar2[4];
      (*(float *)(gen_frame + 0x28)) = fVar4;
      fVar9 = (float10)fVar4;
      fVar10 = (float10)fVar3;
      pfVar2[4] = ((float)GEN_TOF((fVar10 * ((float10)(*(float *)(gen_frame + 0x0)) - fVar9) + fVar9)));
      (*(float *)(gen_frame + 0x14)) = pfVar2[5];
      fVar9 = (float10)pfVar2[5];
      pfVar2[5] = ((float)GEN_TOF((fVar9 + fVar10 * ((float10)(*(float *)(gen_frame + 0x4)) - fVar9))));
      (*(float *)(gen_frame + 0x14)) = pfVar2[6];
      fVar9 = (float10)pfVar2[6];
      fVar3 = ((float)GEN_TOF((fVar9 + ((float10)(*(float *)(gen_frame + 0x8)) - fVar9) * fVar10)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      pfVar2[6] = fVar3;
      pfVar2[8] = (float)((float10)fVar3 * (float10)pfVar2[1] -
                         (float10)pfVar2[2] * (float10)pfVar2[5]);
      pfVar2[9] = (float)((float10)pfVar2[4] * (float10)pfVar2[2] -
                         (float10)pfVar2[6] * (float10)*pfVar2);
      pfVar2[10] = (float)((float10)pfVar2[5] * (float10)*pfVar2 -
                          (float10)pfVar2[4] * (float10)pfVar2[1]);
      F_0046f390(pfVar2 + 8 GEN_EDX_ARG);
      pfVar2[4] = (float)((float10)pfVar2[9] * (float10)pfVar2[2] -
                         (float10)pfVar2[10] * (float10)pfVar2[1]);
      pfVar2[5] = (float)((float10)pfVar2[10] * (float10)*pfVar2 -
                         (float10)pfVar2[8] * (float10)pfVar2[2]);
      pfVar2[6] = (float)((float10)pfVar2[8] * (float10)pfVar2[1] -
                         (float10)pfVar2[9] * (float10)*pfVar2);
      F_0046f390(pfVar2 + 4 GEN_EDX_ARG);
      uVar8 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar8;
    } while (uVar8 < (*(uint *)(gen_frame + 0x10)));
  }
  return uVar8;
}

/* ref: Global::RemoveChainAttachment */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bfe7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbfe7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((param_1 != 0) && ((int)(uint)(ushort)param_2 < (int)(*((ushort *)GEN_TOP(((int)this + 0xb8))) - 1))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0xcc)));
    if (iVar1 != *((int *)GEN_TOP(((int)this + 0xd0)))) {
      uVar3 = (*((int *)GEN_TOP(((int)this + 0xd0))) - iVar1 >> 3) - 1;
      uVar4 = 0;
      while ((*((int *)GEN_TOP((iVar1 + (uint)uVar4 * 8))) != param_1 ||
             (*((ushort *)GEN_TOP((iVar1 + (uint)uVar4 * 8 + 4))) != (ushort)param_2))) {
        uVar4 = uVar4 + 1;
        if ((ushort)uVar3 < uVar4) {
          return;
        }
      }
      iVar2 = (uVar3 & 0xffff) * 8;
      *((undefined4 *)GEN_TOP((iVar1 + (uint)uVar4 * 8))) = *((undefined4 *)GEN_TOP((iVar1 + iVar2)));
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 4 + (uint)uVar4 * 8))) =
           *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 4 + iVar2)));
      if (*((int *)GEN_TOP(((int)this + 0xcc))) != *((int *)GEN_TOP(((int)this + 0xd0)))) {
        *((int *)GEN_TOP(((int)this + 0xd0))) = *((int *)GEN_TOP(((int)this + 0xd0))) - 8;
      }
    }
  }
  return;
}

/* ref: Client::Graphics::Physics::BoneChain::RemoveCollider */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bfe8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbfe8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  uVar2 = *(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3;
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)(this + 0xbc);
    while ((*piVar4 != param_1 || (*(ushort *)(piVar4 + 1) != param_2))) {
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
      if (uVar2 <= uVar5) {
        return uVar2;
      }
    }
    piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)(this + 0xbc))[uVar5 * 2]));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_FWD);
      *((undefined4 *)GEN_TOP((*(int *)(this + 0xbc) + uVar5 * 8))) = 0;
    }
    uVar3 = uVar5;
    if (uVar5 < (*(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3) - 1U) {
      do {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xbc) + uVar3 * 8)));
        *puVar1 = puVar1[2];
        *((undefined2 *)GEN_TOP((*(int *)(this + 0xbc) + uVar3 * 8 + 4))) =
             *((undefined2 *)GEN_TOP((*(int *)(this + 0xbc) + 0xc + uVar3 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)(this + 0xbc) + uVar3 * 8 + 6))) =
             *((undefined2 *)GEN_TOP((*(int *)(this + 0xbc) + 0xe + uVar3 * 8)));
        uVar3 = uVar3 + 1;
      } while (uVar3 < (*(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3) - 1U);
    }
    F_00bf97a0(this GEN_EDX_ARG,uVar5);
    uVar3 = *(uint *)(this + 0xc0);
    if (*(uint *)(this + 0xbc) != uVar3) {
      uVar3 = uVar3 - 8;
      *(uint *)(this + 0xc0) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bfe990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfe990(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbfe990u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x130, 0);
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x10)));
  pfVar5 = *((float * PTR32 *)GEN_TOP(((int)param_1 + 0x18)));
  (*(float *)(gen_frame + 0x60)) = *pfVar5;
  (*(float *)(gen_frame + 0x64)) = pfVar5[1];
  uVar3 = *((short *)GEN_TOP(((int)param_1 + 0xb8))) - 1;
  (*(float *)(gen_frame + 0x68)) = pfVar5[2];
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = param_1;
  (*(float *)(gen_frame + 0x90)) = 0.0;
  (*(float *)(gen_frame + 0x94)) = 0.0;
  (*(float *)(gen_frame + 0x98)) = 0.0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0xac)) = 0;
    (*(int *)(gen_frame + 0xa4)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0xa8)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x14))) + 2)));
    (*(uint *)(gen_frame + 0x78)) = (uint)uVar3;
    do {
      pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0xac)) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x18))))));
      iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x1c))) + (*(int *)(gen_frame + 0xa4));
      (*(float *)(gen_frame + 0x80)) = *pfVar5;
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x84)) = fVar1;
      fVar16 = pfVar5[2];
      (*(uint *)(gen_frame + 0x7c)) = iVar6 + 0x40;
      (*(float *)(gen_frame + 0x88)) = fVar16;
      if (param_2 != '\0') {
        (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar5[0x18] - (float10)*pfVar5);
        (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar5[0x19] - (float10)fVar1);
        (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar5[0x1a] - (float10)fVar16);
        F_0046f390(&(*(float *)(gen_frame + 0x40)) GEN_EDX_FWD);
        fVar1 = *((float *)GEN_TOP((iVar6 + 0x8c)));
        (*(float *)(gen_frame + 0xcc)) = fVar1;
        fVar7 = (float10)fVar1;
        fVar9 = (float10)(*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x90)) = (float)(fVar7 * fVar9);
        fVar8 = (float10)(*(float *)(gen_frame + 0x94));
        (*(float *)(gen_frame + 0x94)) = (float)(fVar8 * fVar7);
        fVar10 = (float10)(*(float *)(gen_frame + 0x98));
        (*(float *)(gen_frame + 0x98)) = (float)(fVar7 * fVar10);
        (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x40));
        fVar1 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar9) + (float10)(*(float *)(gen_frame + 0x60)))));
        (*(float *)(gen_frame + 0x80)) = fVar1;
        (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x44));
        fVar16 = ((float)GEN_TOF(((float10)(float)(fVar8 * fVar7) + (float10)(*(float *)(gen_frame + 0x64)))));
        (*(float *)(gen_frame + 0x84)) = fVar16;
        (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x48));
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar10) + (float10)(*(float *)(gen_frame + 0x68)))));
        (*(float *)(gen_frame + 0x88)) = fVar2;
        *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x7c)) + 0x30))) = fVar1;
        *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x7c)) + 0x34))) = fVar16;
        *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x7c)) + 0x38))) = fVar2;
        (*(float *)(gen_frame + 0x68)) = fVar2;
        (*(float *)(gen_frame + 0x60)) = fVar1;
        (*(float *)(gen_frame + 0x64)) = fVar16;
      }
      if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))
      {
        F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)),(uint)*(*(ushort * PTR32 *)(gen_frame + 0xa8)));
        uVar4 = (*(uint *)(gen_frame + 0x7c));
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x100));
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x104));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x108));
        (*(float *)(gen_frame + 0x100)) = 0.0;
        (*(float *)(gen_frame + 0x104)) = 0.0;
        (*(float *)(gen_frame + 0x108)) = 0.0;
        F_004eeed0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x7c)));
        F_004eeed0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0xd0)));
        fVar9 = (float10)(*(float *)(gen_frame + 0x4));
        fVar10 = (float10)(*(float *)(gen_frame + 0x0));
        fVar7 = (float10)(*(float *)(gen_frame + 0x8));
        fVar8 = (float10)(*(float *)(gen_frame + 0xc));
        fVar1 = ((float)GEN_TOF((fVar8 * (float10)(*(float *)(gen_frame + 0xbc)) +
                       (fVar7 * (float10)(*(float *)(gen_frame + 0xb8)) +
                       ((float10)(*(float *)(gen_frame + 0xb4)) * fVar9 + fVar10 * (float10)(*(float *)(gen_frame + 0xb0)))))));
        (*(float *)(gen_frame + 0xcc)) = fVar1;
        fVar16 = REFG(float, 0x1090708);
        if ((float10)0 <= (float10)fVar1) {
          fVar16 = REFG(float, 0x1087f04);
        }
        fVar11 = (float10)(*(float *)(gen_frame + 0xb0));
        (*(float *)(gen_frame + 0x70)) = fVar16;
        fVar12 = (float10)fVar16;
        (*(float *)(gen_frame + 0xb0)) = (float)(fVar12 * fVar11);
        fVar1 = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0xb4)));
        (*(float *)(gen_frame + 0xb4)) = fVar1;
        fVar13 = (float10)(*(float *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar13 * fVar12);
        fVar14 = (float10)(*(float *)(gen_frame + 0xbc));
        (*(float *)(gen_frame + 0xbc)) = (float)(fVar14 * fVar12);
        fVar15 = (float10)param_3;
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar15 * ((float10)(float)(fVar12 * fVar11) - fVar10) + fVar10)));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)fVar1 - fVar9) * fVar15 + fVar9)));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(float)(fVar13 * fVar12) - fVar7) * fVar15 + fVar7)));
        (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)(float)(fVar14 * fVar12) - fVar8) * fVar15 + fVar8)));
        (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x80)) + fVar15 * ((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x80))))));
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x84)) + fVar15 * ((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x84))))));
        (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x88)) + ((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x88))) * fVar15)));
        F_004ef0c0(uVar4 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x10)));
        *((float *)GEN_TOP((uVar4 + 0x34))) = (*(float *)(gen_frame + 0x34));
        *((float *)GEN_TOP((uVar4 + 0x30))) = (*(float *)(gen_frame + 0x30));
        *((float *)GEN_TOP((uVar4 + 0x38))) = (*(float *)(gen_frame + 0x38));
        (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)param_3);
        fVar9 = GEN_X87((float10)(float)((float10)1 - (float10)param_3));
        pfVar5[8] = (float)(fVar9 * (float10)pfVar5[8]);
        pfVar5[9] = (float)((float10)pfVar5[9] * fVar9);
        pfVar5[10] = (float)(fVar9 * (float10)pfVar5[10]);
      }
      (*(int *)(gen_frame + 0xa4)) = (*(int *)(gen_frame + 0xa4)) + 0xa0;
      (*(int *)(gen_frame + 0xac)) = (*(int *)(gen_frame + 0xac)) + 0x60;
      (*(ushort * PTR32 *)(gen_frame + 0xa8)) = (*(ushort * PTR32 *)(gen_frame + 0xa8)) + 1;
      uVar4 = (*(uint *)(gen_frame + 0x78)) - 1;
      (*(uint *)(gen_frame + 0x78)) = uVar4;
    } while (uVar4 != 0);
  }
  uVar4 = F_00bfe5f0((*(undefined * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::Graphics::Physics::BoneChain::WriteBoneTransforms */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfedc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfedc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xb0, 0);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ushort * puVar26;
  ushort * puVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  fVar25 = *(float *)&REFG(undefined, 0x110e20c);
  fVar24 = *(float *)&REFG(undefined, 0x110e208);
  fVar23 = *(float *)&REFG(undefined, 0x110e204);
  fVar22 = *(float *)&REFG(undefined, 0x110e200);
  fVar21 = *(float *)&REFG(undefined, 0x110e1fc);
  fVar20 = *(float *)&REFG(undefined, 0x110e1f8);
  fVar19 = *(float *)&REFG(undefined, 0x110e1f4);
  fVar18 = *(float *)&REFG(undefined, 0x110e1f0);
  fVar17 = *(float *)&REFG(undefined, 0x110e1ec);
  fVar16 = *(float *)&REFG(undefined, 0x110e1e8);
  fVar15 = *(float *)&REFG(undefined, 0x110e1e4);
  fVar14 = *(float *)&REFG(undefined, 0x110e1e0);
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined * PTR32 *)(this + 0x10);
  puVar27 = ((ushort *)GEN_TOP((*(int *)(this + 0x14) + 2)));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if ((ushort)(*(short *)(this + 0xb8) - 1U) != 0) {
    iVar28 = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x28)) = puVar27;
    (*(uint *)(gen_frame + 0x2c)) = (uint)(ushort)(*(short *)(this + 0xb8) - 1U);
    do {
      iVar5 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1c);
      fVar29 = *((float *)GEN_TOP((iVar28 + 0x78 + iVar5)));
      fVar31 = *((float *)GEN_TOP((iVar28 + 0x74 + iVar5)));
      puVar1 = ((undefined4 *)GEN_TOP((iVar28 + 0x40 + iVar5)));
      (*(float *)(gen_frame + 0x60)) = *((float *)GEN_TOP((iVar28 + 0x70 + iVar5)));
      (*(float *)(gen_frame + 0x64)) = fVar31;
      (*(float *)(gen_frame + 0x68)) = fVar29;
      (*(float *)(gen_frame + 0x6c)) = 0.0;
      uVar2 = puVar1[0xe];
      uVar3 = puVar1[6];
      uVar11 = puVar1[4];
      uVar12 = puVar1[5];
      uVar13 = puVar1[6];
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar6 = puVar1[8];
      uVar7 = puVar1[9];
      uVar8 = puVar1[10];
      (*(undefined4 *)(gen_frame + 0x30)) = *puVar1;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar9;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar10;
      (*(undefined4 *)(gen_frame + 0x3c)) = uVar3;
      (*(undefined4 *)(gen_frame + 0x40)) = uVar11;
      (*(undefined4 *)(gen_frame + 0x44)) = uVar12;
      (*(undefined4 *)(gen_frame + 0x48)) = uVar13;
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar2;
      (*(undefined4 *)(gen_frame + 0x50)) = uVar6;
      (*(undefined4 *)(gen_frame + 0x54)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x58)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x5c)) = uVar2;
      F_00d991c0(&(*(float *)(gen_frame + 0x70)) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x30)));
      F_005fe770(puVar1 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)));
      puVar26 = (*(ushort * PTR32 *)(gen_frame + 0x28));
      gen_rcpps(&(auVar37), (&(unsigned int[4]){(unsigned int)((uint)gen_fl2bits((*(float *)(gen_frame + 0x8)))), 0, 0, 0}), &(*(gen_v16 *)&REFG(float, 0x1138af0)));
      (*(float *)((char *)&auVar39 + 0)) = (*(float *)((char *)&auVar37 + 0)) * (float)REFG(float, 0x1138af0);
      (*(float *)((char *)&auVar39 + 4)) = (*(float *)((char *)&auVar37 + 4)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 4));
      (*(float *)((char *)&auVar39 + 8)) = (*(float *)((char *)&auVar37 + 8)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 8));
      (*(float *)((char *)&auVar39 + 12)) = (*(float *)((char *)&auVar37 + 12)) * (*(float *)((char *)&REFG(float, 0x1138af0) + 12));
      fVar29 = (fVar14 - (*(float *)((char *)&auVar39 + 0))) * (*(float *)((char *)&auVar37 + 0));
      fVar31 = (fVar15 - (*(float *)((char *)&auVar39 + 4))) * (*(float *)((char *)&auVar37 + 4));
      fVar33 = (fVar16 - (*(float *)((char *)&auVar39 + 8))) * (*(float *)((char *)&auVar37 + 8));
      fVar35 = (fVar17 - (*(float *)((char *)&auVar39 + 12))) * (*(float *)((char *)&auVar37 + 12));
      (*(float *)(gen_frame + 0x60)) = fVar29 * (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0x64)) = fVar31 * (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0x68)) = fVar33 * (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x6c)) = fVar35 * (*(float *)(gen_frame + 0x6c));
      (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x0)) * fVar29;
      (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x4)) * fVar31;
      (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x8)) * fVar33;
      (*(float *)(gen_frame + 0x8c)) = fVar35 * 0.0;
      fVar29 = (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x78)) + (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x70));
      fVar31 = (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x7c)) + (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x74));
      fVar33 = (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x70)) + (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x78));
      fVar35 = (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x74)) + (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x7c));
      fVar30 = fVar31 + fVar29;
      fVar29 = fVar29 + fVar31;
      fVar31 = fVar35 + fVar33;
      fVar33 = fVar33 + fVar35;
      (*(undefined4 *)((char *)&auVar37 + 4)) = (undefined4)gen_fl2bits(fVar29);
      (*(undefined4 *)((char *)&auVar37 + 0)) = (undefined4)gen_fl2bits(fVar30);
      (*(undefined4 *)((char *)&auVar37 + 8)) = (undefined4)gen_fl2bits(fVar31);
      (*(undefined4 *)((char *)&auVar37 + 12)) = (undefined4)gen_fl2bits(fVar33);
      gen_rsqrtps(&(auVar37), &(auVar39), &(auVar37));
      fVar35 = (*(float *)((char *)&auVar37 + 0));
      fVar32 = (*(float *)((char *)&auVar37 + 4));
      fVar34 = (*(float *)((char *)&auVar37 + 8));
      fVar36 = (*(float *)((char *)&auVar37 + 12));
      fVar30 = ((fVar22 * fVar35) * (fVar18 - (fVar35 * fVar30) * fVar35)) * (*(float *)(gen_frame + 0x70));
      fVar32 = ((fVar23 * fVar32) * (fVar19 - (fVar32 * fVar29) * fVar32)) * (*(float *)(gen_frame + 0x74));
      fVar34 = ((fVar24 * fVar34) * (fVar20 - (fVar34 * fVar31) * fVar34)) * (*(float *)(gen_frame + 0x78));
      fVar36 = ((fVar25 * fVar36) * (fVar21 - (fVar36 * fVar33) * fVar36)) * (*(float *)(gen_frame + 0x7c));
      fVar29 = fVar34 * fVar34 + fVar30 * fVar30;
      fVar31 = fVar36 * fVar36 + fVar32 * fVar32;
      fVar33 = fVar30 * fVar30 + fVar34 * fVar34;
      fVar35 = fVar32 * fVar32 + fVar36 * fVar36;
      (*(float *)((char *)&auVar38 + 0)) = fVar31 + fVar29;
      (*(float *)((char *)&auVar38 + 4)) = fVar29 + fVar31;
      (*(float *)((char *)&auVar38 + 8)) = fVar35 + fVar33;
      (*(float *)((char *)&auVar38 + 12)) = fVar33 + fVar35;
      gen_rsqrtps(&(auVar37), &(auVar37), &(auVar38));
      fVar29 = (*(float *)((char *)&auVar37 + 0));
      fVar31 = (*(float *)((char *)&auVar37 + 4));
      fVar33 = (*(float *)((char *)&auVar37 + 8));
      fVar35 = (*(float *)((char *)&auVar37 + 12));
      (*(float *)(gen_frame + 0x70)) = fVar30 * ((fVar18 - (fVar29 * (*(float *)((char *)&auVar38 + 0))) * fVar29) * (fVar22 * fVar29));
      (*(float *)(gen_frame + 0x74)) = fVar32 * ((fVar19 - (fVar31 * (*(float *)((char *)&auVar38 + 4))) * fVar31) * (fVar23 * fVar31));
      (*(float *)(gen_frame + 0x78)) = fVar34 * ((fVar20 - (fVar33 * (*(float *)((char *)&auVar38 + 8))) * fVar33) * (fVar24 * fVar33));
      (*(float *)(gen_frame + 0x7c)) = fVar36 * ((fVar21 - (fVar35 * (*(float *)((char *)&auVar38 + 12))) * fVar35) * (fVar25 * fVar35));
      (*(ushort *)(gen_frame + 0x26)) = *(*(ushort * PTR32 *)(gen_frame + 0x28)) & 0xfff;
      ((byte *)(gen_frame + 0x24))[0] = (byte)(*(*(ushort * PTR32 *)(gen_frame + 0x28)) >> 0xc);
      puVar27 = ((ushort *)GEN_TOP(F_0063a080((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((byte *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0x60)),0)));
      iVar28 = iVar28 + 0xa0;
      uVar4 = (*(uint *)(gen_frame + 0x2c)) - 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar4;
      (*(ushort * PTR32 *)(gen_frame + 0x28)) = puVar26 + 1;
    } while (uVar4 != 0);
  }
  return (uint)puVar27;
}

/* ref: Client::Graphics::Physics::BoneChain::~BoneChain */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bff050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbff050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110e274));
  iVar1 = *(int *)(this + 0xcc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0xd4) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  iVar1 = *(int *)(this + 0xbc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)(this + 0xc4) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Physics::BoneChain::ClearColliders */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bff0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbff0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xbc) + uVar2 * 8)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xbc) + uVar2 * 8))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(this + 0xc0) - *(int *)(this + 0xbc) >> 3));
  }
  if (*(int *)(this + 0xbc) != *(int *)(this + 0xc0)) {
    *(int *)(this + 0xc0) = *(int *)(this + 0xbc);
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneChain::BoneChain */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bff170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbff170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110e274));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = GEN_FLT_TO(*(undefined4 *)(this + 0x30), REFG(float, 0x1302c70));
  *(undefined4 *)(this + 0x34) = GEN_FLT_TO(*(undefined4 *)(this + 0x34), REFG(float, 0x1302c74));
  *(undefined4 *)(this + 0x38) = GEN_FLT_TO(*(undefined4 *)(this + 0x38), REFG(float, 0x1302c78));
  *(undefined4 *)(this + 0x40) = GEN_FLT_TO(*(undefined4 *)(this + 0x40), REFG(float, 0x1302c80));
  *(undefined4 *)(this + 0x44) = GEN_FLT_TO(*(undefined4 *)(this + 0x44), REFG(float, 0x1302c84));
  *(undefined4 *)(this + 0x48) = GEN_FLT_TO(*(undefined4 *)(this + 0x48), REFG(float, 0x1302c88));
  *(undefined4 *)(this + 0x50) = GEN_FLT_TO(*(undefined4 *)(this + 0x50), REFG(float, 0x1302c90));
  *(undefined4 *)(this + 0x54) = GEN_FLT_TO(*(undefined4 *)(this + 0x54), REFG(float, 0x1302c94));
  *(undefined4 *)(this + 0x58) = GEN_FLT_TO(*(undefined4 *)(this + 0x58), REFG(float, 0x1302c98));
  *(undefined4 *)(this + 0x60) = GEN_FLT_TO(*(undefined4 *)(this + 0x60), REFG(float, 0x1302c70));
  *(undefined4 *)(this + 100) = GEN_FLT_TO(*(undefined4 *)(this + 100), REFG(float, 0x1302c74));
  *(undefined4 *)(this + 0x68) = GEN_FLT_TO(*(undefined4 *)(this + 0x68), REFG(float, 0x1302c78));
  *(undefined4 *)(this + 0x70) = GEN_FLT_TO(*(undefined4 *)(this + 0x70), REFG(float, 0x1302c80));
  *(undefined4 *)(this + 0x74) = GEN_FLT_TO(*(undefined4 *)(this + 0x74), REFG(float, 0x1302c84));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x78) = GEN_FLT_TO(*(undefined4 *)(this + 0x78), REFG(float, 0x1302c88));
  *(undefined4 *)(this + 0x80) = GEN_FLT_TO(*(undefined4 *)(this + 0x80), REFG(float, 0x1302c90));
  *(undefined4 *)(this + 0x84) = GEN_FLT_TO(*(undefined4 *)(this + 0x84), REFG(float, 0x1302c94));
  *(undefined4 *)(this + 0x88) = GEN_FLT_TO(*(undefined4 *)(this + 0x88), REFG(float, 0x1302c98));
  *(undefined4 *)(this + 0x90) = GEN_FLT_TO(*(undefined4 *)(this + 0x90), REFG(float, 0x1302c70));
  *(undefined4 *)(this + 0x94) = GEN_FLT_TO(*(undefined4 *)(this + 0x94), REFG(float, 0x1302c74));
  *(undefined4 *)(this + 0x98) = GEN_FLT_TO(*(undefined4 *)(this + 0x98), REFG(float, 0x1302c78));
  *(undefined4 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xa8) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x110e278)));
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xac) = uVar1;
  *(undefined4 *)(this + 0xb0) = GEN_FLT_TO(*(undefined4 *)(this + 0xb0), REFG(float, 0x1090708));
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xba] = (undefined1)0x0;
  *(undefined2 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  return (uint)this;
}

/* ref: FUN_00bff330 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bff330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbff330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if (param_1 != 0) {
    if ((int)(uint)(ushort)param_2 < (int)(*((ushort *)GEN_TOP(((int)this + 0xb8))) - 1)) {
      (*(ushort *)(gen_frame + 0x4)) = (ushort)param_2;
      (*(int *)(gen_frame + 0x0)) = param_1;
      F_00c00210(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Physics::BoneChain::AddCollider */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bff380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbff380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xc, 4);
  int iVar1;
  int iVar2;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  iVar1 = *(int *)(this + 0xc0);
  iVar2 = *(int *)(this + 0xbc);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)param_2;
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  (*(ushort *)(gen_frame + 0x6)) = (short)(iVar1 - iVar2 >> 3) + (short)param_3;
  F_00bc0510(this + 0xbc GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  return (uint)(*(ushort *)(gen_frame + 0x6));
}

/* ref: Client::Graphics::Physics::BoneChain::InsertColliderSorted */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bff3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbff3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  ushort * puVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar6 = (*(uint *)&gen_args[3]);
  uVar3 = (ushort)(*(uint *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  piVar1 = ((int *)GEN_TOP(((int)param_1 + 0xbc)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(uint *)&gen_args[1]);
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(*(uint *)&gen_args[3]);
  F_00bc0510(piVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  uVar4 = (*((int *)GEN_TOP(((int)param_1 + 0xc0))) - iVar2 >> 3) - 1;
  uVar6 = (uVar6 & 0xffff) - ((*(uint *)&gen_args[2]) & 0xffff);
  (*(uint *)&gen_args[1]) = uVar4;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar4));
  (*(uint *)&gen_args[3]) = uVar6;
  puVar5 = &(*(uint *)&gen_args[3]);
  if (uVar4 <= uVar6) {
    puVar5 = (uint *)&(*(int * PTR32 *)&gen_args[0]);
  }
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    puVar7 = ((ushort *)GEN_TOP((iVar2 - 2 + uVar6 * 8)));
    do {
      if (*puVar7 < uVar3) break;
      puVar7 = puVar7 - 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; uVar6 < uVar4; uVar4 = uVar4 - 1) {
    *((undefined4 *)GEN_TOP((*piVar1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((*piVar1 - 8 + uVar4 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar4 * 8 + 4))) = *((undefined2 *)GEN_TOP((*piVar1 - 4 + uVar4 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar4 * 8 + 6))) = *((undefined2 *)GEN_TOP((*piVar1 - 2 + uVar4 * 8)));
  }
  *((int * PTR32 *)GEN_TOP((*piVar1 + uVar6 * 8))) = (*(int * PTR32 *)(gen_frame + 0x0));
  *((undefined2 *)GEN_TOP((*piVar1 + 4 + uVar6 * 8))) = (*(undefined2 *)(gen_frame + 0x4));
  *((ushort *)GEN_TOP((*piVar1 + 6 + uVar6 * 8))) = (*(ushort *)(gen_frame + 0x6));
  uVar6 = ((*(uint *)&gen_args[2]) & 0xffff) + uVar6;
  if ((*(char *)&gen_args[4]) != '\0') {
    F_00bf96f0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar6);
  }
  return uVar6;
}

/* ref: Global::GetEntryAt_00bff510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bff510(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbff510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::IsInRange_00bff520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bff520(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbff520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: Global::DeallocateEntries */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bff5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbff5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,200);
  return (uint)uVar1;
}

/* ref: Global::AllocateEntries_00bff5d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bff5d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbff5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,200);
  return uVar1;
}

/* ref: FUN_00bff610 */
GEN_OWN GEN_FRAME uint F_00bff610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 0x60;
}

/* ref: FUN_00bff620 */
GEN_OWN GEN_FRAME uint F_00bff620(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 0xa0;
}

/* ref: FUN_00bff630 */
GEN_OWN GEN_FRAME uint F_00bff630(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 0x50;
}

/* ref: FUN_00bff640 */
GEN_OWN GEN_FRAME uint F_00bff640(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 2;
}

/* ref: FUN_00bff650 */
GEN_OWN GEN_FRAME uint F_00bff650(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bff660 */
GEN_OWN GEN_FRAME uint F_00bff660(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbff660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bff680 */
GEN_OWN GEN_FRAME byte F_00bff680(void)
{
  GEN_ENTER(0xbff680u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Global::Vector3Lerp */
GEN_OWN GEN_FRAME unsigned int F_00bff6a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbff6a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*((float *)GEN_TOP(param_2))) +
                    (float10)*((float *)GEN_TOP(param_2)))));
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) +
                      fVar1 * ((float10)param_3[1] - (float10)*((float *)GEN_TOP((param_2 + 4)))))));
  param_1[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) +
                      ((float10)param_3[2] - (float10)*((float *)GEN_TOP((param_2 + 8)))) * fVar1)));
  return 0;
}

/* ref: Global::Vector4Scale_00bff700 */
GEN_OWN GEN_FRAME uint F_00bff700(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbff700u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return (uint)param_1;
}

/* ref: Global::Vector4Dot */
GEN_OWN GEN_FRAME float10 F_00bff730(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbff730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xc))) * (float10)param_2[3] +
                         ((float10)*((float *)GEN_TOP((param_1 + 8))) * (float10)param_2[2] +
                         ((float10)*((float *)GEN_TOP(param_1)) * (float10)*param_2 +
                         (float10)*((float *)GEN_TOP((param_1 + 4))) * (float10)param_2[1]))))));
}

/* ref: FUN_00bff760 */
GEN_OWN GEN_FRAME uint F_00bff760(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbff760u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00b67660(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: Global::ColliderEntry */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bff930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbff930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: Client::Graphics::Physics::BoneChain::GetBoneMatrix */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bff950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbff950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x120, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pBVar4;
  float * pfVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar8 = (uint)(ushort)param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if ((ushort)param_2 < *(ushort *)(this + 0xb8)) {
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f(uVar8);
    if (uVar8 == *(ushort *)(this + 0xb8) - 1) {
      puVar9 = ((undefined4 *)GEN_TOP(F_00623320(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_FWD,
                          (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x14) + uVar8 * 2))))));
      puVar6 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)))));
      pBVar4 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      puVar6 = ((undefined4 *)(gen_frame + 0xc0));
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      pfVar5 = ((float *)GEN_TOP(F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90,((undefined4 *)(gen_frame + 0xc0)))));
      (*(float *)(gen_frame + 0x20)) = *pfVar5;
      (*(float *)(gen_frame + 0x24)) = pfVar5[1];
      (*(float *)(gen_frame + 0x28)) = pfVar5[2];
      F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
      fVar1 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) * 0xa0 + 0x8c + *(int *)(pBVar4 + 0x1c))));
      puVar9 = ((undefined4 *)(gen_frame + 0xc0));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar11 = (float10)fVar1;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar11);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0x28)));
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x20)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar11))));
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      (*(float *)(gen_frame + 0xf0)) = fVar1;
      (*(float *)(gen_frame + 0xf4)) = fVar2;
      (*(float *)(gen_frame + 0xf8)) = fVar3;
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      puVar9 = ((undefined4 *)GEN_TOP(F_00623320(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_ARG,
                          (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x14) + 2 + uVar8 * 2))))));
      puVar6 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)))));
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
    }
  }
  else {
    puVar9 = &REFG(float, 0x1302d00);
    puVar6 = param_1;
  }
  puVar10 = puVar6;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  return (uint)puVar6;
}

/* ref: Client::Graphics::Physics::BoneChain::SetBoneAngleLimit */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bffb30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbffb30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  float10 fVar2;
  
  uVar1 = param_2;
  if ((ushort)param_2 < *((ushort *)GEN_TOP((param_1 + 0xb8)))) {
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    param_2 = (uint)gen_fl2bits((float)fVar2);
    if ((((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)0) &&
       ((!GEN_ISNAN(gen_bits2f(param_2)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x110e254))) &&
        !(gen_bits2f(param_2) <= *(float *)&REFG(undefined, 0x110e254)))) {
      param_2 = 0;
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x20 + (uVar1 & 0xffff) * 0x50))) = param_2;
    *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x24 + (uVar1 & 0xffff) * 0x50))) =
         ((float)GEN_TOF(GEN_X87(SQRT((float10)(float)((float10)1 -
                                     ((float10)GEN_TOD(gen_bits2f(param_2))) * ((float10)GEN_TOD(gen_bits2f(param_2))))))));
  }
  return;
}

/* ref: Client::Graphics::Physics::BoneChain::TestBoneFlagA */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bffd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbffd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*(ushort *)(this + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (*((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)(this + 0x1c)))) &
         1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) != 0;
}

/* ref: Client::Graphics::Physics::BoneChain::TestBoneFlagB */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bffd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbffd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*(ushort *)(this + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (*((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)(this + 0x1c)))) &
         1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) != 0;
}

/* ref: Global::MaxThenMin */
GEN_OWN GEN_FRAME float10 F_00bffd90(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbffd90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x4)) = (*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[0]);
  pfVar2 = &(*(float *)(gen_frame + 0x4));
  if (!((float10)(*(float *)&gen_args[0]) < (float10)(*(float *)&gen_args[1]))) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  fVar1 = *pfVar2;
  (*(float *)&gen_args[1]) = fVar1;
  (*(float *)&gen_args[0]) = (*(float *)&gen_args[2]);
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((float10)fVar1 < (float10)(*(float *)&gen_args[2]))) {
    pfVar2 = &(*(float *)&gen_args[0]);
  }
  return (float10)*pfVar2;
}

/* ref: Global::CalculateGrowth_00bffe20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bffe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbffe20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00bffe60 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bffe60(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbffe60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bffeb0 */
GEN_OWN GEN_FRAME unsigned int F_00bffeb0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbffeb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: Global::UninitializedCopyEntries */
GEN_OWN GEN_FRAME unsigned int F_00bffee0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbffee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: Global::Saturate_00bfff10 */
GEN_OWN GEN_FRAME float10 F_00bfff10(float gen_a0)
{
  GEN_ENTER(0xbfff10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  return (float10)*pfVar1;
}

/* ref: Global::UninitializedCopyEntries2 */
GEN_OWN GEN_FRAME unsigned int F_00bfff70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbfff70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::TidyEntryVector */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bfffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbfffa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::UninitializedCopyEntries3 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bfffe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbfffe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::TidyEntryVector2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c00020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc00020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::ReserveEntries_00c00060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c00060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc00060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,200);
    F_00bfffe0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: Global::TidyEntryVector3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c00110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc00110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00c00150 */
GEN_OWN GEN_FRAME uint F_00c00150(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc00150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::VectorReserveForInsert */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c00170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc00170u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00c00060(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c00060(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::BoneChain::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c001e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc001e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bff050(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::VectorPushBack8_00c00210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c00210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc00210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00c00170(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00c00170(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: Global::LuaIntToFloatingByte */
GEN_OWN GEN_NOFRAME uint F_00c00290(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc00290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = param_1; 0xf < uVar2; uVar2 = uVar2 + 1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  if (uVar2 < 8) {
    return uVar2;
  }
  return iVar1 * 8 + 8U | uVar2 - 8;
}

/* ref: Global::LuaFloatingByteToInt */
GEN_OWN GEN_NOFRAME uint F_00c002c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc002c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 3 & 0x1f;
  uVar1 = param_1;
  if (uVar2 != 0) {
    uVar1 = (param_1 & 7) + 8 << ((char)uVar2 - 1U & 0x1f);
  }
  return uVar1;
}

/* ref: Global::luaO_log2 */
GEN_OWN GEN_NOFRAME uint F_00c002e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc002e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  for (uVar1 = param_1; 0xff < uVar1; uVar1 = uVar1 >> 8) {
    iVar2 = iVar2 + 8;
  }
  return (uint)(byte)(&REFG(undefined, 0x110e498))[(int)(uVar1)] + iVar2;
}

/* ref: FUN_00c00310 */
GEN_OWN GEN_NOFRAME uint F_00c00310(GEN_P(double * param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(double * param_1 = (double *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  bool bVar1;
  
  if (*(int *)(param_1 + 1) != *(int *)(param_2 + 1)) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 1))) {
  case 0: ;
    return 1;
  default: ;
    return (uint)(*(int *)param_1 == *(int *)param_2);
  case 3: ;
    break;
  }
  bVar1 = GEN_ISNAN(*param_1) || GEN_ISNAN(*param_2);
  if (bVar1 == (bVar1 || *param_1 == *param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c00370 */
GEN_OWN GEN_NOFRAME uint F_00c00370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  byte * pbVar2;
  double * pdVar3;
  int iVar4;
  double dVar5;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  dVar5 = F_00c52474((*(byte * PTR32 *)&gen_args[0]),&(*(byte * PTR32 *)&gen_args[0]));
  pdVar3 = (*(double * PTR32 *)&gen_args[1]);
  *(*(double * PTR32 *)&gen_args[1]) = dVar5;
  if ((*(byte * PTR32 *)&gen_args[0]) == pbVar2) {
    return 0;
  }
  if ((*(*(byte * PTR32 *)&gen_args[0]) == 0x78) || (*(*(byte * PTR32 *)&gen_args[0]) == 0x58)) {
    (*(double * PTR32 *)&gen_args[1]) = ((double *)GEN_TOP(F_00c4abb6((char *)pbVar2,(char * PTR32 *)&(*(byte * PTR32 *)&gen_args[0]),0x10)));
    dVar5 = (double)(int)(*(double * PTR32 *)&gen_args[1]);
    if ((int)(*(double * PTR32 *)&gen_args[1]) < 0) {
      dVar5 = GEN_X87(dVar5 + *(double *)&REFG(double, 0x10b8de8));
    }
    *pdVar3 = dVar5;
  }
  if (*(*(byte * PTR32 *)&gen_args[0]) == 0) {
    return 1;
  }
  iVar4 = F_00c4873c((uint)*(*(byte * PTR32 *)&gen_args[0]));
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar4 != 0) {
    (*(byte * PTR32 *)&gen_args[0]) = pbVar2 + 1;
    bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
    iVar4 = F_00c4873c((uint)bVar1);
    pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  }
  return (uint)(*pbVar2 == 0);
}

/* ref: Global::pushstr */
GEN_OWN GEN_NOFRAME uint F_00c00420(GEN_P(char * in_edx, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc00420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_edx = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((in_esi + 8)));
  pcVar3 = in_edx;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(in_esi,in_edx,(int)pcVar3 - (int)(in_edx + 1));
  *puVar2 = uVar4;
  puVar2[2] = 4;
  uVar4 = *((int *)GEN_TOP((in_esi + 0x1c))) - *((int *)GEN_TOP((in_esi + 8)));
  if ((int)uVar4 < 0x11) {
    uVar4 = F_00bb8d50(in_esi,1);
  }
  *((int *)GEN_TOP((in_esi + 8))) = *((int *)GEN_TOP((in_esi + 8))) + 0x10;
  return uVar4;
}

/* ref: Global::luaO_pushvfstring */
GEN_OWN_GS GEN_NOFRAME uint F_00c00470(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc00470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x30, 0, 0);
  undefined1 uVar1;
  char cVar2;
  uint * puVar3;
  double * pdVar4;
  undefined4 uVar5;
  uint uVar6;
  char * pcVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0)));
  puVar3 = *((uint * PTR32 *)GEN_TOP((param_1 + 8)));
  (*(int *)(gen_frame + 0x0)) = param_3;
  iVar9 = 1;
  (*(int *)(gen_frame + 0x10)) = 1;
  pcVar7 = &REFG(undefined1, 0x14c5be4);
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  uVar6 = F_00c05a80(param_1,&REFG(undefined1, 0x14c5be4),pcVar8 - 0x14c5be4);
  *puVar3 = uVar6;
  puVar3[2] = 4;
  if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) < 0x11) {
    F_00bb8d50(param_1,1);
  }
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
  (*(uint *)(gen_frame + 0xc)) = F_00c51da0(param_2,0x25);
  pcVar7 = param_2;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    iVar10 = (*(int *)(gen_frame + 0x0)) - 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 8;
    do {
      puVar3 = *((uint * PTR32 *)GEN_TOP((param_1 + 8)));
      uVar6 = F_00c05a80(param_1,pcVar7,(*(uint *)(gen_frame + 0xc)) - (int)pcVar7);
      *puVar3 = uVar6;
      puVar3[2] = 4;
      if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) < 0x11) {
        F_00bb8d50(param_1,1);
      }
      *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
      pdVar4 = *((double * PTR32 *)GEN_TOP((param_1 + 8)));
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 1))))) {
      case 0x25: ;
        F_00c00420(&REFG(undefined, 0x13476bc),param_1);
        break;
      default: ;
        ((char *)(gen_frame + 0x4))[1] = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 1)));
        pcVar7 = ((char *)(gen_frame + 0x4));
        ((char *)(gen_frame + 0x4))[0] = '%';
        ((char *)(gen_frame + 0x4))[2] = 0;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar6 = F_00c05a80(param_1,((char *)(gen_frame + 0x4)),(int)pcVar7 - (int)(((char *)(gen_frame + 0x4)) + 1));
        *(uint *)pdVar4 = uVar6;
        *(uint *)(pdVar4 + 1) = 4;
        iVar9 = *((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8)));
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 - 0x10 < 0;
        bVar11 = iVar9 == 0x10;
        goto LAB_00c0066d;
      case 99: ;
        uVar1 = *((undefined1 *)GEN_TOP((iVar10 + 4)));
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        (*(undefined1 *)(gen_frame + 0x8)) = uVar1;
        (*(undefined1 *)(gen_frame + 0x9)) = 0;
        F_00c00420(&(*(undefined1 *)(gen_frame + 0x8)),param_1);
        break;
      case 100: ;
        iVar9 = *((int *)GEN_TOP((iVar10 + 4)));
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        *pdVar4 = (double)iVar9;
        *(uint *)(pdVar4 + 1) = 3;
        iVar9 = *((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8)));
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 - 0x10 < 0;
        bVar11 = iVar9 == 0x10;
        goto LAB_00c0066d;
      case 0x66: ;
        *pdVar4 = *((double *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8)));
        *(uint *)(pdVar4 + 1) = 3;
        iVar9 = *((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8)));
        iVar10 = iVar10 + 8;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 8;
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 - 0x10 < 0;
        bVar11 = iVar9 == 0x10;
LAB_00c0066d: ;
        if (bVar11 || bVar13 != bVar12) {
          F_00bb8d50(param_1,1);
        }
        *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
        break;
      case 0x70: ;
        uVar5 = *((undefined4 *)GEN_TOP((iVar10 + 4)));
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        F_00c4720f(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x13476b8),uVar5);
        F_00c00420(((undefined1 *)(gen_frame + 0x14)),param_1);
        break;
      case 0x73: ;
        pcVar7 = *((char * PTR32 *)GEN_TOP((iVar10 + 4)));
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        if (pcVar7 == ((char *)GEN_TOP(0x0))) {
          pcVar7 = ((char *)REFP(0x13476b0));
        }
        F_00c00420(pcVar7,param_1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 2;
      pcVar7 = ((char *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 2)));
      (*(uint *)(gen_frame + 0xc)) = F_00c51da0(pcVar7,0x25);
      iVar9 = (*(int *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0xc)) != 0);
  }
  puVar3 = *((uint * PTR32 *)GEN_TOP((param_1 + 8)));
  pcVar8 = pcVar7;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar6 = F_00c05a80(param_1,pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
  *puVar3 = uVar6;
  puVar3[2] = 4;
  if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) < 0x11) {
    F_00bb8d50(param_1,1);
  }
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
  F_00c03460(param_1,iVar9 + 1,(*((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 0xc))) >> 4) - 1);
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + iVar9 * -0x10;
  return *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) - 0x10))) + 0x10;
}

/* ref: Global::luaO_pushfstring */
GEN_OWN GEN_NOFRAME uint F_00c00790(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc00790u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: Global::luaO_chunkid */
GEN_OWN GEN_NOFRAME uint F_00c007b0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc007b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  char cVar1;
  char * pcVar2;
  gen_size32 _Count;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  
  if (*param_2 == '=') {
    pcVar2 = F_00c52620(param_1,param_2 + 1,param_3);
    param_1[param_3 - 1] = '\0';
    return (uint)pcVar2;
  }
  if (*param_2 != '@') {
    _Count = F_00c525d0(param_2,&REFG(undefined, 0x13476c4));
    *(undefined8 *)param_1 = (*(undefined8 *)REFP(0x13476c8));
    if (param_3 - 0x11 < _Count) {
      _Count = param_3 - 0x11;
    }
    *(undefined2 *)(param_1 + 8) = (*(undefined2 *)REFP(0x13476d0));
    pcVar2 = param_2;
    if (param_2[_Count] == '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 - (int)param_2;
      pcVar5 = param_1 - 1;
      do {
        pcVar7 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = param_2;
      } while (*pcVar7 != '\0');
    }
    else {
      F_00c52490(param_1,param_2,_Count);
      pcVar6 = (char *)&REFG(undefined4, 0x13476d4);
      pcVar5 = (char *)&REFG(undefined4, 0x13476d4);
      do {
        pcVar2 = pcVar5;
        pcVar5 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 - 0x13476d3;
      pcVar5 = param_1 - 1;
      do {
        pcVar7 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar7 != '\0');
    }
    for (uVar3 = (uint)((int)(uintptr_t)pcVar2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcVar2 = (char *)&REFG(undefined4, 0x13476d8);
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = pcVar5 - 0x13476d7;
    pcVar2 = param_1 - 1;
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)&REFG(undefined4, 0x13476d8);
    for (uVar3 = (uint)((int)(uintptr_t)pcVar5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = (uint)pcVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    return (uint)pcVar5;
  }
  pcVar5 = param_2 + 1;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *param_1 = REFG(char, 0x14c5be5);
  pcVar7 = pcVar5;
  if (param_3 - 8 < (uint)((int)pcVar2 - (int)(param_2 + 2))) {
    pcVar5 = pcVar5 + (((int)pcVar2 - (int)(param_2 + 2)) - (param_3 - 8));
    pcVar2 = &REFG(undefined1, 0x13476c0);
    do {
      pcVar7 = pcVar2;
      pcVar2 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar2 = param_1 - 1;
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = &REFG(undefined1, 0x13476c0);
    for (uVar3 = (uint)(pcVar7 - 0x13476bf) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = (uint)(pcVar7 - 0x13476bf) & 3; pcVar7 = pcVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar5 - (int)pcVar7;
  pcVar2 = param_1 - 1;
  do {
    pcVar5 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar5 != '\0');
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return uVar3;
}

/* ref: FUN_00c00940 */
GEN_OWN GEN_NOFRAME uint F_00c00940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *((byte *)GEN_TOP((param_2 + 5))) = *((byte *)GEN_TOP((param_2 + 5))) & 0xfc;
  uVar2 = *((byte *)GEN_TOP((param_2 + 4))) - 4;
  iVar3 = param_2;
  if (6 < uVar2) {
    return uVar2;
  }
switchD_00c00960_switchD: ;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    *((undefined4 *)GEN_TOP((iVar3 + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    *((int *)GEN_TOP((param_1 + 0x24))) = iVar3;
    return uVar2;
  case 2: ;
    *((undefined4 *)GEN_TOP((iVar3 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    *((int *)GEN_TOP((param_1 + 0x24))) = iVar3;
    return uVar2;
  case 3: ;
    goto switchD_00c00960_caseD_3;
  case 4: ;
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x24)));
    *((uint *)GEN_TOP((iVar3 + 0x6c))) = uVar2;
    *((int *)GEN_TOP((param_1 + 0x24))) = iVar3;
    return uVar2;
  case 5: ;
    *((undefined4 *)GEN_TOP((iVar3 + 0x44))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    *((int *)GEN_TOP((param_1 + 0x24))) = iVar3;
    break;
  case 6: ;
    if ((3 < (*((int * PTR32 *)GEN_TOP((iVar3 + 8))))[2]) &&
       (iVar1 = **((int * PTR32 *)GEN_TOP((iVar3 + 8))), (*((byte *)GEN_TOP((iVar1 + 5))) & 3) != 0)) {
      F_00c00940(param_1,iVar1);
    }
    uVar2 = iVar3 + 0x10;
    if (*((uint *)GEN_TOP((iVar3 + 8))) == uVar2) {
      *((byte *)GEN_TOP((iVar3 + 5))) = *((byte *)GEN_TOP((iVar3 + 5))) | 4;
      return uVar2;
    }
  }
  return uVar2;
switchD_00c00960_caseD_3: ;
  uVar2 = *((uint *)GEN_TOP((iVar3 + 8)));
  *((byte *)GEN_TOP((iVar3 + 5))) = *((byte *)GEN_TOP((iVar3 + 5))) | 4;
  if ((uVar2 != 0) && ((*((byte *)GEN_TOP((uVar2 + 5))) & 3) != 0)) {
    uVar2 = F_00c00940(param_1,uVar2);
  }
  iVar3 = *((int *)GEN_TOP((iVar3 + 0xc)));
  if ((*((byte *)GEN_TOP((iVar3 + 5))) & 3) == 0) {
    return uVar2;
  }
  *((byte *)GEN_TOP((iVar3 + 5))) = *((byte *)GEN_TOP((iVar3 + 5))) & 0xfc;
  uVar2 = *((byte *)GEN_TOP((iVar3 + 4))) - 4;
  if (6 < uVar2) {
    return uVar2;
  }
  goto switchD_00c00960_switchD;
}

/* ref: FUN_00c00a50 */
GEN_OWN GEN_NOFRAME uint F_00c00a50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  uVar5 = 0;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x70)));
  for (puVar6 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x70))))); puVar6 != ((undefined4 *)GEN_TOP(0x0));
      puVar6 = ((undefined4 *)GEN_TOP(*puVar6))) {
    if ((((*((byte *)GEN_TOP(((int)puVar6 + 5))) & 3) != 0) || (param_2 != 0)) &&
       ((*((byte *)GEN_TOP(((int)puVar6 + 5))) & 8) == 0)) {
      iVar2 = puVar6[2];
      if (((iVar2 == 0) || ((*((byte *)GEN_TOP((iVar2 + 6))) & 4) != 0)) ||
         (uVar4 = F_00c02b30(iVar2,2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xc4)))),
         uVar4 == 0)) {
        *((byte *)GEN_TOP(((int)puVar6 + 5))) = *((byte *)GEN_TOP(((int)puVar6 + 5))) | 8;
      }
      else {
        *((byte *)GEN_TOP(((int)puVar6 + 5))) = *((byte *)GEN_TOP(((int)puVar6 + 5))) | 8;
        iVar2 = puVar6[4];
        *puVar3 = *puVar6;
        uVar5 = uVar5 + 0x18 + iVar2;
        if (*((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) == ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = puVar6;
        }
        else {
          *puVar6 = **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30)));
          **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) = puVar6;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) = puVar6;
        puVar6 = puVar3;
      }
    }
    puVar3 = puVar6;
  }
  return uVar5;
}

/* ref: Global::traversetable */
GEN_OWN GEN_NOFRAME uint F_00c00af0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar5 = *((int *)GEN_TOP((param_2 + 8)));
  bVar6 = false;
  bVar7 = false;
  if ((iVar5 != 0) && ((*((byte *)GEN_TOP((iVar5 + 5))) & 3) != 0)) {
    F_00c00940(param_1,iVar5);
  }
  iVar5 = *((int *)GEN_TOP((param_2 + 8)));
  if ((((iVar5 != 0) && ((*((byte *)GEN_TOP((iVar5 + 6))) & 8) == 0)) &&
      (piVar2 = ((int *)GEN_TOP(F_00c02b30(iVar5,3,*((undefined4 *)GEN_TOP((param_1 + 200)))))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
     (piVar2[2] == 4)) {
    uVar3 = F_00c51da0(*piVar2 + 0x10,0x6b);
    bVar6 = uVar3 != 0;
    uVar3 = F_00c51da0(*piVar2 + 0x10,0x76);
    bVar7 = uVar3 != 0;
    if ((bVar6) || (bVar7)) {
      *((byte *)GEN_TOP((param_2 + 5))) = (bVar7 * '\x02' | bVar6) * '\b' | *((byte *)GEN_TOP((param_2 + 5))) & 0xe7;
      *((undefined4 *)GEN_TOP((param_2 + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
      *((int *)GEN_TOP((param_1 + 0x2c))) = param_2;
    }
    if (bVar6) {
      if (bVar7) {
        return 1;
      }
    }
    else if (bVar7) goto LAB_00c00c05;
  }
  iVar5 = *((int *)GEN_TOP((param_2 + 0x1c)));
  if (iVar5 != 0) {
    iVar4 = iVar5 << 4;
    do {
      iVar4 = iVar4 - 0x10;
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + iVar4)));
      iVar5 = iVar5 - 1;
      if ((3 < piVar2[2]) && (iVar1 = *piVar2, (*((byte *)GEN_TOP((iVar1 + 5))) & 3) != 0)) {
        F_00c00940(param_1,iVar1);
      }
    } while (iVar5 != 0);
  }
LAB_00c00c05: ;
  iVar5 = 1 << GEN_SHC(*((byte *)GEN_TOP((param_2 + 7))), *((byte *)GEN_TOP((param_2 + 7))));
  if (iVar5 != 0) {
    iVar4 = iVar5 << 5;
    do {
      iVar4 = iVar4 - 0x20;
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + iVar4)));
      iVar5 = iVar5 - 1;
      if (piVar2[2] == 0) {
        if (3 < piVar2[6]) {
          piVar2[6] = 0xb;
        }
      }
      else {
        if (((!bVar6) && (3 < piVar2[6])) && ((*((byte *)GEN_TOP((piVar2[4] + 5))) & 3) != 0)) {
          F_00c00940(param_1,piVar2[4]);
        }
        if (((!bVar7) && (3 < piVar2[2])) && ((*((byte *)GEN_TOP((*piVar2 + 5))) & 3) != 0)) {
          F_00c00940(param_1,*piVar2);
        }
      }
    } while (iVar5 != 0);
  }
  if ((!bVar6) && (!bVar7)) {
    return 0;
  }
  return 1;
}

/* ref: Global::traverseproto */
GEN_OWN GEN_NOFRAME uint F_00c00ca0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if (*((int *)GEN_TOP((in_esi + 0x20))) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x20))) + 5)));
    *pbVar1 = *pbVar1 & 0xfc;
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP((in_esi + 0x28)))) {
    iVar5 = 0;
    do {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 8))) + iVar5)));
      if ((3 < piVar4[2]) && (iVar3 = *piVar4, (*((byte *)GEN_TOP((iVar3 + 5))) & 3) != 0)) {
        F_00c00940(param_2,iVar3);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *((int *)GEN_TOP((in_esi + 0x28))));
  }
  piVar4 = ((int *)GEN_TOP(0x0));
  if (0 < *((int *)GEN_TOP((in_esi + 0x24)))) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x1c))) + (int)((int)(uintptr_t)piVar4) * 4))) != 0) {
        pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x1c))) + (int)((int)(uintptr_t)piVar4) * 4))) + 5)));
        *pbVar1 = *pbVar1 & 0xfc;
      }
      piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
    } while ((int)piVar4 < *((int *)GEN_TOP((in_esi + 0x24))));
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP((in_esi + 0x34)))) {
    do {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x10))) + iVar6 * 4)));
      if ((*((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x10))) + iVar6 * 4))) != 0) &&
         (piVar4 = ((int *)GEN_TOP(*piVar4)), (*((byte *)GEN_TOP(((int)piVar4 + 5))) & 3) != 0)) {
        piVar4 = ((int *)GEN_TOP(F_00c00940(param_2,piVar4)));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP((in_esi + 0x34))));
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP((in_esi + 0x38)))) {
    piVar4 = ((int *)GEN_TOP(0x0));
    do {
      if (*((int *)GEN_TOP(((int)piVar4 + *((int *)GEN_TOP((in_esi + 0x18)))))) != 0) {
        piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x18))) + (int)piVar4)));
        *((byte *)GEN_TOP((*piVar2 + 5))) = *((byte *)GEN_TOP((*piVar2 + 5))) & 0xfc;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar6 < *((int *)GEN_TOP((in_esi + 0x38))));
  }
  return (uint)piVar4;
}

/* ref: Global::traverseclosure */
GEN_OWN GEN_NOFRAME uint F_00c00d70(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  int * piVar4;
  
  uVar1 = *((uint *)GEN_TOP((in_esi + 0xc)));
  if ((*((byte *)GEN_TOP((uVar1 + 5))) & 3) != 0) {
    uVar1 = F_00c00940(param_2,uVar1);
  }
  if (*((char *)GEN_TOP((in_esi + 6))) == '\0') {
    uVar1 = *((uint *)GEN_TOP((in_esi + 0x10)));
    if ((*((byte *)GEN_TOP((uVar1 + 5))) & 3) != 0) {
      uVar1 = F_00c00940(param_2,uVar1);
    }
    iVar2 = 0;
    if (*((char *)GEN_TOP((in_esi + 7))) != '\0') {
      puVar3 = ((uint *)GEN_TOP((in_esi + 0x14)));
      do {
        uVar1 = *puVar3;
        if ((*((byte *)GEN_TOP((uVar1 + 5))) & 3) != 0) {
          uVar1 = F_00c00940(param_2,uVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)(uint)*((byte *)GEN_TOP((in_esi + 7))));
    }
  }
  else {
    iVar2 = 0;
    if (*((char *)GEN_TOP((in_esi + 7))) != '\0') {
      piVar4 = ((int *)GEN_TOP((in_esi + 0x18)));
      do {
        if ((3 < piVar4[2]) && ((*((byte *)GEN_TOP((*piVar4 + 5))) & 3) != 0)) {
          F_00c00940(param_2,*piVar4);
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar2 < (int)(uint)*((byte *)GEN_TOP((in_esi + 7))));
      return (uint)*((byte *)GEN_TOP((in_esi + 7)));
    }
  }
  return uVar1;
}

/* ref: Global::traversestack */
GEN_OWN GEN_NOFRAME uint F_00c00e80(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc00e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  if ((3 < *((int *)GEN_TOP((in_edi + 0x50)))) && ((*((byte *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + 5))) & 3) != 0)) {
    F_00c00940(param_2,*((int *)GEN_TOP((in_edi + 0x48))));
  }
  puVar4 = *((uint * PTR32 *)GEN_TOP((in_edi + 8)));
  for (uVar3 = *((uint *)GEN_TOP((in_edi + 0x28))); uVar3 <= *((uint *)GEN_TOP((in_edi + 0x14))); uVar3 = uVar3 + 0x18) {
    if (puVar4 < *((uint * PTR32 *)GEN_TOP((uVar3 + 8)))) {
      puVar4 = *((uint * PTR32 *)GEN_TOP((uVar3 + 8)));
    }
  }
  puVar5 = *((uint * PTR32 *)GEN_TOP((in_edi + 0x20)));
  if (puVar5 < *((uint * PTR32 *)GEN_TOP((in_edi + 8)))) {
    do {
      if ((3 < (int)puVar5[2]) && (uVar3 = *puVar5, (*((byte *)GEN_TOP((uVar3 + 5))) & 3) != 0)) {
        uVar3 = F_00c00940(param_2,uVar3);
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 < *((uint * PTR32 *)GEN_TOP((in_edi + 8))));
  }
  if (puVar5 <= puVar4) {
    uVar3 = 0;
    do {
      puVar5[2] = 0;
      puVar5 = puVar5 + 4;
    } while (puVar5 <= puVar4);
  }
  iVar1 = *((int *)GEN_TOP((in_edi + 0x20)));
  iVar2 = *((int *)GEN_TOP((in_edi + 0x30)));
  if (iVar2 < 0x4e21) {
    if ((((*((int *)GEN_TOP((in_edi + 0x14))) - *((int *)GEN_TOP((in_edi + 0x28)))) / 0x18) * 4 < iVar2) && (0x10 < iVar2)
       ) {
      F_00bb8cd0(in_edi,iVar2 / 2);
    }
    uVar3 = *((uint *)GEN_TOP((in_edi + 0x2c)));
    if ((((int)puVar4 - iVar1 >> 4) * 4 < (int)uVar3) && (0x5a < (int)uVar3)) {
      uVar3 = F_00bb8c70(in_edi,(int)uVar3 / 2);
    }
  }
  return uVar3;
}

/* ref: Global::propagatemark */
GEN_OWN GEN_NOFRAME uint F_00c00f70(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc00f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  int in_esi;
  uint uVar1;
  
  in_esi = *((int *)GEN_TOP((in_eax + 0x24)));
  *((byte *)GEN_TOP((in_esi + 5))) = *((byte *)GEN_TOP((in_esi + 5))) | 4;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((in_esi + 4))))) {
  case 5: ;
    *((undefined4 *)GEN_TOP((in_eax + 0x24))) = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
    uVar1 = F_00c00af0(in_eax,in_esi);
    if (uVar1 != 0) {
      *((byte *)GEN_TOP((in_esi + 5))) = *((byte *)GEN_TOP((in_esi + 5))) & 0xfb;
    }
    return (*((int *)GEN_TOP((in_esi + 0x1c))) + 2 + (1 << GEN_SHC(*((byte *)GEN_TOP((in_esi + 7))), *((byte *)GEN_TOP((in_esi + 7))))) * 2) * 0x10;
  case 6: ;
    break;
  default: ;
    return 0;
  case 8: ;
    *((undefined4 *)GEN_TOP((in_eax + 0x24))) = *((undefined4 *)GEN_TOP((in_esi + 0x6c)));
    *((undefined4 *)GEN_TOP((in_esi + 0x6c))) = *((undefined4 *)GEN_TOP((in_eax + 0x28)));
    *((int *)GEN_TOP((in_eax + 0x28))) = in_esi;
    *((byte *)GEN_TOP((in_esi + 5))) = *((byte *)GEN_TOP((in_esi + 5))) & 0xfb;
    F_00c00e80(in_esi,in_eax);
    return *((int *)GEN_TOP((in_esi + 0x2c))) * 0x10 + (*((int *)GEN_TOP((in_esi + 0x30))) + 5) * 0x18;
  case 9: ;
    *((undefined4 *)GEN_TOP((in_eax + 0x24))) = *((undefined4 *)GEN_TOP((in_esi + 0x44)));
    F_00c00ca0(in_esi,in_eax);
    return (*((int *)GEN_TOP((in_esi + 0x38))) * 3 + *((int *)GEN_TOP((in_esi + 0x28))) * 4 + *((int *)GEN_TOP((in_esi + 0x34))) +
            *((int *)GEN_TOP((in_esi + 0x30))) + *((int *)GEN_TOP((in_esi + 0x2c))) + *((int *)GEN_TOP((in_esi + 0x24)))) * 4 + 0x4c;
  }
  *((undefined4 *)GEN_TOP((in_eax + 0x24))) = *((undefined4 *)GEN_TOP((in_esi + 8)));
  F_00c00d70(in_esi,in_eax);
  if (*((char *)GEN_TOP((in_esi + 6))) != '\0') {
    return (uint)*((byte *)GEN_TOP((in_esi + 7))) * 0x10 + 0x18;
  }
  return (uint)*((byte *)GEN_TOP((in_esi + 7))) * 4 + 0x14;
}

/* ref: Global::cleartable */
GEN_OWN GEN_NOFRAME unsigned int F_00c010d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc010d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte * pbVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1;
  do {
    if (iVar3 == 0) {
      return;
    }
    iVar6 = *((int *)GEN_TOP((iVar3 + 0x1c)));
    if (((*((byte *)GEN_TOP((iVar3 + 5))) & 0x10) != 0) && (iVar6 != 0)) {
      iVar5 = iVar6 << 4;
      do {
        iVar5 = iVar5 - 0x10;
        iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + 8 + iVar5)));
        piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + iVar5)));
        iVar6 = iVar6 - 1;
        if (3 < iVar2) {
          if (iVar2 == 4) {
            *((byte *)GEN_TOP((*piVar4 + 5))) = *((byte *)GEN_TOP((*piVar4 + 5))) & 0xfc;
          }
          else if (((*((byte *)GEN_TOP((*piVar4 + 5))) & 3) != 0) ||
                  ((iVar2 == 7 && ((*((byte *)GEN_TOP((*piVar4 + 5))) & 8) != 0)))) {
            piVar4[2] = 0;
          }
        }
      } while (iVar6 != 0);
    }
    iVar6 = 1 << GEN_SHC(*((byte *)GEN_TOP((iVar3 + 7))), *((byte *)GEN_TOP((iVar3 + 7))));
    if (iVar6 != 0) {
      iVar5 = iVar6 << 5;
      do {
        iVar5 = iVar5 - 0x20;
        piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x10))) + iVar5)));
        iVar6 = iVar6 - 1;
        if (piVar4[2] != 0) {
          if (piVar4[6] < 4) {
LAB_00c01177: ;
            iVar2 = piVar4[2];
            if (3 < iVar2) {
              if (iVar2 == 4) {
                *((byte *)GEN_TOP((*piVar4 + 5))) = *((byte *)GEN_TOP((*piVar4 + 5))) & 0xfc;
              }
              else if (((*((byte *)GEN_TOP((*piVar4 + 5))) & 3) != 0) ||
                      ((iVar2 == 7 && ((*((byte *)GEN_TOP((*piVar4 + 5))) & 8) != 0)))) goto LAB_00c0119c;
            }
          }
          else {
            if (piVar4[6] == 4) {
              pbVar1 = ((byte *)GEN_TOP((piVar4[4] + 5)));
              *pbVar1 = *pbVar1 & 0xfc;
              goto LAB_00c01177;
            }
            if ((*((byte *)GEN_TOP((piVar4[4] + 5))) & 3) == 0) goto LAB_00c01177;
LAB_00c0119c: ;
            piVar4[2] = 0;
            if (3 < piVar4[6]) {
              piVar4[6] = 0xb;
            }
          }
        }
      } while (iVar6 != 0);
    }
    iVar3 = *((int *)GEN_TOP((iVar3 + 0x18)));
  } while( true );
}

/* ref: Global::freeobj */
GEN_OWN GEN_NOFRAME uint F_00c011d0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc011d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((in_eax + 4))))) {
  case 4: ;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 4)));
    *piVar1 = *piVar1 - 1;
    uVar2 = F_00c11930(in_ecx,in_eax,*((int *)GEN_TOP((in_eax + 0xc))) + 0x11,0);
    return uVar2;
  case 5: ;
    uVar2 = F_00c05080(in_ecx,in_eax);
    return uVar2;
  case 6: ;
    uVar2 = F_00c05f50(in_ecx,in_eax);
    return uVar2;
  case 7: ;
    in_eax = F_00c11930(in_ecx,in_eax,*((int *)GEN_TOP((in_eax + 0x10))) + 0x18,0);
    break;
  case 8: ;
    uVar2 = F_00bb88f0(in_ecx,in_eax);
    return uVar2;
  case 9: ;
    uVar2 = F_00c05eb0(in_ecx,in_eax);
    return uVar2;
  case 10: ;
    uVar2 = F_00c05d60(in_ecx,in_eax);
    return uVar2;
  }
  return in_eax;
}

/* ref: Global::sweeplist */
GEN_OWN GEN_NOFRAME uint F_00c01270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  byte bVar1;
  int iVar2;
  undefined4 * in_eax;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x10)));
  bVar1 = *((byte *)GEN_TOP((iVar2 + 0x14)));
  in_eax = ((undefined4 *)GEN_TOP(*param_2));
  puVar4 = param_2;
  iVar3 = param_3;
  while ((in_eax != ((undefined4 *)GEN_TOP(0x0)) && (iVar3 != 0))) {
    if (*(char *)(in_eax + 1) == '\b') {
      F_00c01270(param_1,in_eax + 0x1a,0xfffffffd);
    }
    if ((byte)((bVar1 ^ 3) & (*((byte *)GEN_TOP(((int)in_eax + 5))) ^ 3)) == 0) {
      *puVar4 = *in_eax;
      if (in_eax == *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x1c)))) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x1c))) = *in_eax;
      }
      F_00c011d0(in_eax,param_1);
    }
    else {
      *((byte *)GEN_TOP(((int)in_eax + 5))) = *((byte *)GEN_TOP((iVar2 + 0x14))) & 3 | *((byte *)GEN_TOP(((int)in_eax + 5))) & 0xf8;
      puVar4 = in_eax;
    }
    in_eax = ((undefined4 *)GEN_TOP(*puVar4));
    iVar3 = iVar3 - 1;
  }
  return (uint)puVar4;
}

/* ref: Global::checkSizes */
GEN_OWN GEN_NOFRAME uint F_00c01300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
  if ((*((uint *)GEN_TOP((iVar1 + 4))) < (uint)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) && (0x40 < iVar2)) {
    F_00c05920(param_1,iVar2 / 2);
  }
  uVar3 = *((uint *)GEN_TOP((iVar1 + 0x3c)));
  if (0x40 < uVar3) {
    uVar4 = uVar3 >> 1;
    if (uVar4 + 1 < 0xfffffffe) {
      uVar3 = F_00c11930(param_1,*((undefined4 *)GEN_TOP((iVar1 + 0x34))),uVar3,uVar4);
      *((uint *)GEN_TOP((iVar1 + 0x3c))) = uVar4;
      *((uint *)GEN_TOP((iVar1 + 0x34))) = uVar3;
      return uVar3;
    }
    uVar3 = F_00c11910(param_1);
    *((uint *)GEN_TOP((iVar1 + 0x3c))) = uVar4;
    *((uint *)GEN_TOP((iVar1 + 0x34))) = uVar3;
  }
  return uVar3;
}

/* ref: Global::GCTM */
GEN_OWN GEN_NOFRAME uint F_00c01380(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc01380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  undefined1 uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  iVar2 = *((int *)GEN_TOP((in_esi + 0x10)));
  piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
  piVar4 = ((int *)GEN_TOP(*piVar3));
  if (piVar4 == piVar3) {
    *((undefined4 *)GEN_TOP((iVar2 + 0x30))) = 0;
  }
  else {
    *piVar3 = *piVar4;
  }
  *piVar4 = **((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x70)));
  **((int * PTR32 *)GEN_TOP((iVar2 + 0x70))) = (int)piVar4;
  uVar9 = piVar4[2];
  *((byte *)GEN_TOP(((int)piVar4 + 5))) = *((byte *)GEN_TOP((iVar2 + 0x14))) & 3 | *((byte *)GEN_TOP(((int)piVar4 + 5))) & 0xf8;
  if ((uVar9 != 0) && ((*((byte *)GEN_TOP((uVar9 + 6))) & 4) == 0)) {
    puVar8 = ((undefined4 *)GEN_TOP(F_00c02b30(uVar9,2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x10))) + 0xc4))))));
    uVar9 = 0;
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar5 = *((undefined4 *)GEN_TOP((iVar2 + 0x40)));
      uVar1 = *((undefined1 *)GEN_TOP((in_esi + 0x39)));
      *((undefined1 *)GEN_TOP((in_esi + 0x39))) = 0;
      *((int *)GEN_TOP((iVar2 + 0x40))) = *((int *)GEN_TOP((iVar2 + 0x44))) * 2;
      puVar6 = *((undefined4 * PTR32 *)GEN_TOP((in_esi + 8)));
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      puVar6[2] = puVar8[2];
      iVar7 = *((int *)GEN_TOP((in_esi + 8)));
      *((int * PTR32 *)GEN_TOP((iVar7 + 0x10))) = piVar4;
      *((undefined4 *)GEN_TOP((iVar7 + 0x18))) = 7;
      *((int *)GEN_TOP((in_esi + 8))) = *((int *)GEN_TOP((in_esi + 8))) + 0x20;
      uVar9 = F_00bb9600(in_esi,*((int *)GEN_TOP((in_esi + 8))) - 0x20,0);
      *((undefined1 *)GEN_TOP((in_esi + 0x39))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar2 + 0x40))) = uVar5;
    }
  }
  return uVar9;
}

/* ref: Global::luaC_callGCTM */
GEN_OWN GEN_NOFRAME uint F_00c01440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
  iVar1 = *((int *)GEN_TOP((uVar2 + 0x30)));
  while (iVar1 != 0) {
    uVar2 = F_00c01380(param_1);
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x30)));
  }
  return uVar2;
}

/* ref: Global::luaC_freeall */
GEN_OWN GEN_NOFRAME uint F_00c01460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  *(undefined1 *)(piVar1 + 5) = 0x43;
  uVar2 = F_00c01270(param_1,piVar1 + 7,0xfffffffd);
  iVar3 = 0;
  if (0 < piVar1[2]) {
    do {
      uVar2 = F_00c01270(param_1,*piVar1 + iVar3 * 4,0xfffffffd);
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[2]);
  }
  return uVar2;
}

/* ref: Global::LuaMarkMetatables */
GEN_OWN GEN_NOFRAME uint F_00c014a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc014a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x98)));
  iVar3 = 9;
  do {
    uVar1 = *puVar2;
    if ((uVar1 != 0) && ((*((byte *)GEN_TOP((uVar1 + 5))) & 3) != 0)) {
      uVar1 = F_00c00940(param_1,uVar1);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: Global::LuaMarkRoot */
GEN_OWN GEN_NOFRAME uint F_00c014e0(GEN_P(int in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc014e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((in_edi + 0x10)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = 0;
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x70))) + 5))) & 3) != 0) {
    F_00c00940(iVar1,*((int *)GEN_TOP((iVar1 + 0x70))));
  }
  if ((3 < *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x70))) + 0x50)))) &&
     (iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x70))) + 0x48))), (*((byte *)GEN_TOP((iVar2 + 5))) & 3) != 0)) {
    F_00c00940(iVar1,iVar2);
  }
  if ((3 < *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x10))) + 0x68)))) &&
     (iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x10))) + 0x60))), (*((byte *)GEN_TOP((iVar2 + 5))) & 3) != 0)) {
    F_00c00940(iVar1,iVar2);
  }
  uVar3 = F_00c014a0(iVar1);
  *((undefined1 *)GEN_TOP((iVar1 + 0x15))) = 1;
  return uVar3;
}

/* ref: Global::LuaRemarkUpvalues */
GEN_OWN GEN_NOFRAME unsigned int F_00c01550(GEN_P(int in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc01550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  for (iVar1 = *((int *)GEN_TOP((in_edi + 0x8c))); iVar1 != in_edi + 0x78; iVar1 = *((int *)GEN_TOP((iVar1 + 0x14)))) {
    if ((((*((byte *)GEN_TOP((iVar1 + 5))) & 7) == 0) && (3 < (*((int * PTR32 *)GEN_TOP((iVar1 + 8))))[2])) &&
       (iVar2 = **((int * PTR32 *)GEN_TOP((iVar1 + 8))), (*((byte *)GEN_TOP((iVar2 + 5))) & 3) != 0)) {
      F_00c00940(in_edi,iVar2);
    }
  }
  return;
}

/* ref: Global::LuaGcAtomic */
GEN_OWN GEN_NOFRAME uint F_00c01590(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int in_edi;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  int local_4;
  
  in_edi = *((int *)GEN_TOP((param_1 + 0x10)));
  F_00c01550(in_edi);
  iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  }
  *((undefined4 *)GEN_TOP((in_edi + 0x24))) = *((undefined4 *)GEN_TOP((in_edi + 0x2c)));
  *((undefined4 *)GEN_TOP((in_edi + 0x2c))) = 0;
  if ((*((byte *)GEN_TOP((param_1 + 5))) & 3) != 0) {
    F_00c00940(in_edi,param_1);
  }
  F_00c014a0(in_edi);
  iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  }
  iVar1 = *((int *)GEN_TOP((in_edi + 0x28)));
  *((int *)GEN_TOP((in_edi + 0x24))) = iVar1;
  *((undefined4 *)GEN_TOP((in_edi + 0x28))) = 0;
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  local_4 = 0;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x70)));
  for (puVar4 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x70))))); puVar4 != ((undefined4 *)GEN_TOP(0x0));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar4))) {
    if (((*((byte *)GEN_TOP(((int)puVar4 + 5))) & 3) != 0) && ((*((byte *)GEN_TOP(((int)puVar4 + 5))) & 8) == 0)) {
      iVar6 = puVar4[2];
      if ((iVar6 == 0) ||
         (((*((byte *)GEN_TOP((iVar6 + 6))) & 4) != 0 ||
          (uVar3 = F_00c02b30(iVar6,2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xc4)))), uVar3 == 0)
          ))) {
        *((byte *)GEN_TOP(((int)puVar4 + 5))) = *((byte *)GEN_TOP(((int)puVar4 + 5))) | 8;
      }
      else {
        *((byte *)GEN_TOP(((int)puVar4 + 5))) = *((byte *)GEN_TOP(((int)puVar4 + 5))) | 8;
        local_4 = local_4 + 0x18 + puVar4[4];
        *puVar2 = *puVar4;
        if (*((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) == ((undefined4 *)GEN_TOP(0x0))) {
          *puVar4 = puVar4;
        }
        else {
          *puVar4 = **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30)));
          **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) = puVar4;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x30))) = puVar4;
        puVar4 = puVar2;
      }
    }
    puVar2 = puVar4;
  }
  piVar5 = *((int * PTR32 *)GEN_TOP((in_edi + 0x30)));
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    do {
      piVar5 = ((int *)GEN_TOP(*piVar5));
      *((byte *)GEN_TOP(((int)piVar5 + 5))) = *((byte *)GEN_TOP(((int)piVar5 + 5))) & 0xf8 | *((byte *)GEN_TOP((in_edi + 0x14))) & 3;
      F_00c00940(in_edi,piVar5);
    } while (piVar5 != ((int *)GEN_TOP(*((int *)GEN_TOP((in_edi + 0x30))))));
  }
  iVar6 = 0;
  iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  while (iVar1 != 0) {
    uVar3 = F_00c00f70(in_edi);
    iVar6 = iVar6 + uVar3;
    iVar1 = *((int *)GEN_TOP((in_edi + 0x24)));
  }
  F_00c010d0(*((undefined4 *)GEN_TOP((in_edi + 0x2c))));
  *((byte *)GEN_TOP((in_edi + 0x14))) = *((byte *)GEN_TOP((in_edi + 0x14))) ^ 3;
  *((undefined4 *)GEN_TOP((in_edi + 0x18))) = 0;
  *((uint *)GEN_TOP((in_edi + 0x20))) = in_edi + 0x1cU;
  *((undefined1 *)GEN_TOP((in_edi + 0x15))) = 2;
  *((int *)GEN_TOP((in_edi + 0x48))) = (*((int *)GEN_TOP((in_edi + 0x44))) - iVar6) - local_4;
  return in_edi + 0x1cU;
}

/* ref: Global::LuaGcSingleStep */
GEN_OWN GEN_NOFRAME uint F_00c01710(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc01710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  int * in_eax_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  in_eax_00 = *((int * PTR32 *)GEN_TOP((in_eax + 0x10)));
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)in_eax_00 + 0x15))))) {
  case 0: ;
    F_00c014e0(in_eax);
    return 0;
  case 1: ;
    break;
  case 2: ;
    iVar2 = in_eax_00[6];
    iVar1 = in_eax_00[0x11];
    in_eax_00[6] = iVar2 + 1;
    F_00c01270(in_eax,*in_eax_00 + iVar2 * 4,0xfffffffd);
    if (in_eax_00[2] <= in_eax_00[6]) {
      *((undefined1 *)GEN_TOP(((int)in_eax_00 + 0x15))) = 3;
    }
    in_eax_00[0x12] = in_eax_00[0x12] + (in_eax_00[0x11] - iVar1);
    return 10;
  case 3: ;
    iVar2 = in_eax_00[0x11];
    piVar4 = ((int *)GEN_TOP(F_00c01270(in_eax,in_eax_00[8],0x28)));
    in_eax_00[8] = (int)piVar4;
    if (*piVar4 == 0) {
      F_00c01300(in_eax);
      *((undefined1 *)GEN_TOP(((int)in_eax_00 + 0x15))) = 4;
    }
    in_eax_00[0x12] = in_eax_00[0x12] + (in_eax_00[0x11] - iVar2);
    return 400;
  case 4: ;
    if (in_eax_00[0xc] != 0) {
      F_00c01380(in_eax);
      if (100 < (uint)in_eax_00[0x12]) {
        in_eax_00[0x12] = in_eax_00[0x12] - 100;
      }
      return 100;
    }
    *((undefined1 *)GEN_TOP(((int)in_eax_00 + 0x15))) = 0;
    in_eax_00[0x13] = 0;
  default: ;
    return 0;
  }
  if (in_eax_00[9] == 0) {
    F_00c01590(in_eax);
    return 0;
  }
  uVar3 = F_00c00f70(in_eax_00);
  return uVar3;
}

/* ref: Global::LuaGcStep */
GEN_OWN GEN_NOFRAME uint F_00c01810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  iVar3 = *((int *)GEN_TOP((iVar1 + 0x54))) * 10;
  if (iVar3 == 0) {
    iVar3 = 0x7ffffffe;
  }
  *((int *)GEN_TOP((iVar1 + 0x4c))) =
       *((int *)GEN_TOP((iVar1 + 0x4c))) + (*((int *)GEN_TOP((iVar1 + 0x44))) - *((int *)GEN_TOP((iVar1 + 0x40))));
  do {
    uVar2 = F_00c01710(param_1);
    iVar3 = iVar3 - uVar2;
    if (*((char *)GEN_TOP((iVar1 + 0x15))) == '\0') goto LAB_00c01877;
  } while (0 < iVar3);
  if (*((char *)GEN_TOP((iVar1 + 0x15))) != '\0') {
    uVar2 = *((uint *)GEN_TOP((iVar1 + 0x4c)));
    if (uVar2 < 0x400) {
      *((int *)GEN_TOP((iVar1 + 0x40))) = *((int *)GEN_TOP((iVar1 + 0x44))) + 0x400;
      return uVar2;
    }
    *((uint *)GEN_TOP((iVar1 + 0x4c))) = uVar2 - 0x400;
    *((undefined4 *)GEN_TOP((iVar1 + 0x40))) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
    return uVar2 - 0x400;
  }
LAB_00c01877: ;
  *((uint *)GEN_TOP((iVar1 + 0x40))) = (*((uint *)GEN_TOP((iVar1 + 0x48))) / 100) * *((int *)GEN_TOP((iVar1 + 0x50)));
  return *((uint *)GEN_TOP((iVar1 + 0x48))) * 0x51eb851f;
}

/* ref: Global::LuaGcFullCollect */
GEN_OWN GEN_NOFRAME uint F_00c01890(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x10)));
  if (*((byte *)GEN_TOP((iVar2 + 0x15))) < 2) {
    *((undefined4 *)GEN_TOP((iVar2 + 0x18))) = 0;
    *((int *)GEN_TOP((iVar2 + 0x20))) = iVar2 + 0x1c;
    *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 0x28))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 0x2c))) = 0;
    *((undefined1 *)GEN_TOP((iVar2 + 0x15))) = 2;
  }
  cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
  while (cVar1 != '\x04') {
    F_00c01710(param_1);
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
  }
  F_00c014e0(param_1);
  cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
  while (cVar1 != '\0') {
    F_00c01710(param_1);
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
  }
  *((uint *)GEN_TOP((iVar2 + 0x40))) = (*((uint *)GEN_TOP((iVar2 + 0x48))) / 100) * *((int *)GEN_TOP((iVar2 + 0x50)));
  return *((uint *)GEN_TOP((iVar2 + 0x48))) * 0x51eb851f;
}

/* ref: FUN_00c01900 */
GEN_OWN GEN_NOFRAME uint F_00c01900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  if (*((char *)GEN_TOP((iVar1 + 0x15))) == '\x01') {
    uVar2 = F_00c00940(iVar1,param_3);
    return uVar2;
  }
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*((undefined1 *)GEN_TOP((param_2 + 5)))) & 0xfffffff8;
  *((byte *)GEN_TOP((param_2 + 5))) = *((byte *)GEN_TOP((iVar1 + 0x14))) & 3 | (byte)uVar2;
  return uVar2;
}

/* ref: FUN_00c01940 */
GEN_OWN GEN_NOFRAME uint F_00c01940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc01940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  *((byte *)GEN_TOP((param_2 + 5))) = *((byte *)GEN_TOP((param_2 + 5))) & 0xfb;
  *((undefined4 *)GEN_TOP((param_2 + 0x18))) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
  *((uint *)GEN_TOP((iVar1 + 0x28))) = param_2;
  return param_2;
}

/* ref: Global::LuaGcLink */
GEN_OWN GEN_NOFRAME byte F_00c01960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  int iVar1;
  byte bVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x10)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x1c)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x1c))) = param_2;
  bVar2 = *((byte *)GEN_TOP((iVar1 + 0x14))) & 3;
  *((byte *)GEN_TOP(((int)param_2 + 5))) = bVar2;
  *(undefined1 *)(param_2 + 1) = param_3;
  return bVar2;
}

/* ref: FUN_00c01990 */
GEN_OWN GEN_NOFRAME uint F_00c01990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc01990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x10)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar2 + 0x1c)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x1c))) = param_2;
  bVar1 = *((byte *)GEN_TOP(((int)param_2 + 5)));
  if ((bVar1 & 7) == 0) {
    if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\x01') {
      *((byte *)GEN_TOP(((int)param_2 + 5))) = bVar1 | 4;
      if ((3 < (((int *)GEN_TOP(param_2[2])))[2]) &&
         (iVar2 = *((int *)GEN_TOP(param_2[2])), (*((byte *)GEN_TOP((iVar2 + 5))) & 3) != 0)) {
        uVar3 = F_00c01900(param_1,param_2,iVar2);
        return uVar3;
      }
    }
    else {
      *((byte *)GEN_TOP(((int)param_2 + 5))) = *((byte *)GEN_TOP((iVar2 + 0x14))) & 3 | bVar1 & 0xf8;
    }
  }
  return (uint)param_2;
}

/* ref: Global::currentline */
GEN_OWN GEN_NOFRAME uint F_00c01a30(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc01a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_eax + 4)));
  if ((piVar1[2] == 6) && (*((char *)GEN_TOP((*piVar1 + 6))) == '\0')) {
    if (in_eax == *((int *)GEN_TOP((in_edx + 0x14)))) {
      *((undefined4 *)GEN_TOP((in_eax + 0xc))) = *((undefined4 *)GEN_TOP((in_edx + 0x18)));
    }
    iVar3 = (*((int *)GEN_TOP((in_eax + 0xc))) - *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0xc))) >> 2) - 1;
    if (-1 < iVar3) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0x14)));
      if (iVar2 != 0) {
        return *((uint *)GEN_TOP((iVar2 + iVar3 * 4)));
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c01a80 */
GEN_OWN GEN_NOFRAME uint F_00c01a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc01a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (iVar1 = param_3, iVar2 = param_2, param_3 == 0)) {
    iVar1 = 0;
    iVar2 = 0;
  }
  *((int *)GEN_TOP((param_1 + 0x44))) = iVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_4;
  *((char *)GEN_TOP((param_1 + 0x38))) = (char)iVar1;
  return 1;
}

/* ref: Global::LuaGetHook */
GEN_OWN GEN_NOFRAME uint F_00c01ab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 0x44)));
}

/* ref: Global::LuaGetHookMask */
GEN_OWN GEN_NOFRAME uint F_00c01ac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((param_1 + 0x38)));
}

/* ref: Global::LuaGetHookCount */
GEN_OWN GEN_NOFRAME uint F_00c01ad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 0x3c)));
}

/* ref: FUN_00c01ae0 */
GEN_OWN GEN_NOFRAME uint F_00c01ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x14)));
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (uVar1 <= *((uint *)GEN_TOP((param_1 + 0x28)))) break;
      iVar2 = iVar2 - 1;
      if (*((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 4))) + 6))) == '\0') {
        iVar2 = iVar2 - *((int *)GEN_TOP((uVar1 + 0x14)));
      }
      uVar1 = uVar1 - 0x18;
    } while (0 < iVar2);
  }
  if (iVar2 == 0) {
    if (*((uint *)GEN_TOP((param_1 + 0x28))) < uVar1) {
      *((int *)GEN_TOP((param_3 + 0x60))) = (int)(uVar1 - *((uint *)GEN_TOP((param_1 + 0x28)))) / 0x18;
      return 1;
    }
  }
  else if (iVar2 < 0) {
    *((undefined4 *)GEN_TOP((param_3 + 0x60))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00c01b80 */
GEN_OWN GEN_NOFRAME uint F_00c01b80(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(in_esi[1]));
  if (((piVar1[2] == 6) && (*((char *)GEN_TOP((*piVar1 + 6))) == '\0')) &&
     (iVar3 = *((int *)GEN_TOP((*piVar1 + 0x10))), iVar3 != 0)) {
    if (in_esi == *((int * PTR32 *)GEN_TOP((param_3 + 0x14)))) {
      in_esi[3] = *((int *)GEN_TOP((param_3 + 0x18)));
    }
    uVar2 = F_00c05f90(iVar3,in_edi,(in_esi[3] - *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0xc))) >> 2) - 1
                      );
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  if (in_esi == *((int * PTR32 *)GEN_TOP((param_3 + 0x14)))) {
    iVar3 = *((int *)GEN_TOP((param_3 + 8)));
  }
  else {
    iVar3 = in_esi[7];
  }
  if ((in_edi <= iVar3 - *in_esi >> 4) && (0 < in_edi)) {
    return 0x13476dc;
  }
  return 0;
}

/* ref: FUN_00c01bf0 */
GEN_OWN GEN_NOFRAME uint F_00c01bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * in_esi;
  uint uVar1;
  
  in_esi = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + *((int *)GEN_TOP((param_2 + 0x60))) * 0x18)));
  uVar1 = F_00c01b80(in_esi,param_3,param_1);
  if (uVar1 != 0) {
    F_00b9a5e0(param_1,param_3 * 0x10 - 0x10 + *in_esi);
  }
  return uVar1;
}

/* ref: FUN_00c01c40 */
GEN_OWN GEN_NOFRAME uint F_00c01c40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * in_esi;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  in_esi = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + *((int *)GEN_TOP((param_2 + 0x60))) * 0x18)));
  uVar3 = F_00c01b80(in_esi,param_3,param_1);
  if (uVar3 != 0) {
    iVar2 = *((int *)GEN_TOP((param_1 + 8)));
    puVar1 = ((undefined4 *)GEN_TOP((param_3 * 0x10 - 0x10 + *in_esi)));
    *puVar1 = *((undefined4 *)GEN_TOP((iVar2 - 0x10)));
    puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 - 0xc)));
    puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
  }
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) - 0x10;
  return uVar3;
}

/* ref: Global::funcinfo */
GEN_OWN GEN_NOFRAME uint F_00c01c90(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc01c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  uint uVar1;
  undefined * puVar2;
  
  if (*((char *)GEN_TOP((in_ecx + 6))) != '\0') {
    *((undefined * PTR32 *)GEN_TOP((in_eax + 0x10))) = &REFG(undefined, 0x13476ec);
    *((undefined4 *)GEN_TOP((in_eax + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((in_eax + 0x20))) = 0xffffffff;
    *((undefined * PTR32 *)GEN_TOP((in_eax + 0xc))) = &REFG(undefined, 0x13476f4);
    uVar1 = F_00c007b0(in_eax + 0x24,*((undefined4 *)GEN_TOP((in_eax + 0x10))),0x3c);
    return uVar1;
  }
  *((int *)GEN_TOP((in_eax + 0x10))) = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x20))) + 0x10;
  *((undefined4 *)GEN_TOP((in_eax + 0x1c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x3c)));
  *((undefined4 *)GEN_TOP((in_eax + 0x20))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x40)));
  puVar2 = &REFG(undefined, 0x13476f8);
  if (*((int *)GEN_TOP((in_eax + 0x1c))) != 0) {
    puVar2 = &REFG(undefined, 0x1347700);
  }
  *((undefined * PTR32 *)GEN_TOP((in_eax + 0xc))) = puVar2;
  uVar1 = F_00c007b0(in_eax + 0x24,*((undefined4 *)GEN_TOP((in_eax + 0x10))),0x3c);
  return uVar1;
}

/* ref: Global::collectvalidlines */
GEN_OWN GEN_NOFRAME uint F_00c01d50(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc01d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_2 == 0) || (*((char *)GEN_TOP((param_2 + 6))) != '\0')) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 8))) + 8))) = 0;
  }
  else {
    uVar3 = F_00c05020(in_edi,0,0);
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + 0x14)));
    if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + 0x30)))) {
      do {
        puVar4 = ((undefined4 *)GEN_TOP(F_00c05310(in_edi,uVar3,*((undefined4 *)GEN_TOP((iVar1 + iVar5 * 4))))));
        *puVar4 = 1;
        puVar4[2] = 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + 0x30))));
    }
    puVar2 = *((uint * PTR32 *)GEN_TOP((in_edi + 8)));
    *puVar2 = uVar3;
    puVar2[2] = 5;
  }
  uVar3 = *((int *)GEN_TOP((in_edi + 0x1c))) - *((int *)GEN_TOP((in_edi + 8)));
  if ((int)uVar3 < 0x11) {
    uVar3 = F_00bb8d50(in_edi,1);
  }
  *((int *)GEN_TOP((in_edi + 8))) = *((int *)GEN_TOP((in_edi + 8))) + 0x10;
  return uVar3;
}

/* ref: Global::precheck */
GEN_OWN GEN_NOFRAME uint F_00c01de0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc01de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  byte bVar1;
  int iVar2;
  
  if (*((byte *)GEN_TOP((in_eax + 0x4b))) < 0xfb) {
    bVar1 = *((byte *)GEN_TOP((in_eax + 0x4a)));
    if (((bVar1 & 1) + (uint)*((byte *)GEN_TOP((in_eax + 0x49))) <= (uint)*((byte *)GEN_TOP((in_eax + 0x4b)))) &&
       ((((bVar1 & 4) == 0 || ((bVar1 & 1) != 0)) &&
        (*((int *)GEN_TOP((in_eax + 0x24))) <= (int)(uint)*((byte *)GEN_TOP((in_eax + 0x48))))))) {
      iVar2 = *((int *)GEN_TOP((in_eax + 0x2c)));
      if ((((*((int *)GEN_TOP((in_eax + 0x30))) == iVar2) || (*((int *)GEN_TOP((in_eax + 0x30))) == 0)) && (0 < iVar2)) &&
         (((byte)*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_eax + 0xc))) - 4 + iVar2 * 4))) & 0x3f) == 0x1e)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Global::checkopenop */
GEN_OWN GEN_NOFRAME uint F_00c01e40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc01e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 & 0x3f;
  if ((0x1b < uVar1) && ((uVar1 < 0x1f || (uVar1 == 0x22)))) {
    return (uint)((param_1 & 0xff800000) == 0);
  }
  return 0;
}

/* ref: Global::checkArgMode */
GEN_OWN GEN_NOFRAME uint GEN_FASTCALL F_00c01e70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  bool bVar1;
  
  if (param_3 == 0) {
    if (param_1 != 0) {
      return 0;
    }
  }
  else if (param_3 == 2) {
    if ((int)(uint)*((byte *)GEN_TOP((param_2 + 0x4b))) <= (int)param_1) {
      return 0;
    }
  }
  else if (param_3 == 3) {
    if ((param_1 & 0x100) == 0) {
      bVar1 = (int)param_1 < (int)(uint)*((byte *)GEN_TOP((param_2 + 0x4b)));
    }
    else {
      bVar1 = (int)(param_1 & 0xfffffeff) < *((int *)GEN_TOP((param_2 + 0x28)));
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: Global::symbexec */
GEN_OWN GEN_NOFRAME uint F_00c01ec0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc01ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int local_18;
  uint local_14;
  int local_10;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x2c)));
  local_10 = iVar2 - 1;
  uVar4 = F_00c01de0(param_1);
  if (uVar4 == 0) {
    return 0;
  }
  local_18 = 0;
  if (param_2 < 1) {
LAB_00c022ff: ;
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + local_10 * 4)));
  }
  iVar3 = *((int *)GEN_TOP((param_1 + 0xc)));
LAB_00c01f01: ;
  uVar4 = *((uint *)GEN_TOP((iVar3 + local_18 * 4)));
  uVar6 = uVar4 & 0x3f;
  uVar8 = 0;
  uVar7 = uVar4 >> 6 & 0xff;
  local_14 = 0;
  if (0x25 < uVar6) {
    return 0;
  }
  if (*((byte *)GEN_TOP((param_1 + 0x4b))) <= uVar7) {
    return 0;
  }
  bVar1 = (&REFG(undefined, 0x110f47c))[(int)(uVar6)];
  if ((bVar1 & 3) == 0) {
    uVar8 = uVar4 >> 0x17;
    local_14 = uVar4 >> 0xe & 0x1ff;
    uVar4 = F_00c01e70(uVar8,param_1,bVar1 >> 4 & 3);
    if (uVar4 == 0) {
      return 0;
    }
    uVar4 = F_00c01e70(local_14,param_1,bVar1 >> 2 & 3);
    if (uVar4 == 0) {
      return 0;
    }
  }
  else if ((bVar1 & 3) == 1) {
    uVar8 = uVar4 >> 0xe;
    if (((bVar1 & 0x30) == 0x30) && (*((int *)GEN_TOP((param_1 + 0x28))) <= (int)uVar8)) {
      return 0;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar8 = (uVar4 >> 0xe) - 0x1ffff;
    if ((bVar1 & 0x30) == 0x20) {
      iVar9 = ((uVar4 >> 0xe) - 0x1fffe) + local_18;
      if (iVar9 < 0) {
        return 0;
      }
      if (iVar2 <= iVar9) {
        return 0;
      }
      if (0 < iVar9) {
        uVar4 = 0;
        if (0 < iVar9) {
          puVar5 = ((uint *)GEN_TOP((iVar3 - 4 + iVar9 * 4)));
          do {
            if ((((byte)*puVar5 & 0x3f) != 0x22) || ((*puVar5 & 0x7fc000) != 0)) break;
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 - 1;
          } while ((int)uVar4 < iVar9);
        }
        if ((uVar4 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  if ((((&REFG(undefined, 0x110f47c))[(int)(uVar6)] & 0x40) != 0) && (uVar7 == param_3)) {
    local_10 = local_18;
  }
  if ((char)(&REFG(undefined, 0x110f47c))[(int)(uVar6)] < '\0') {
    if (iVar2 <= local_18 + 2) {
      return 0;
    }
    if (((byte)*((undefined4 *)GEN_TOP((iVar3 + 4 + local_18 * 4))) & 0x3f) != 0x16) {
      return 0;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 2: ;
    if (local_14 == 1) {
      if (iVar2 <= local_18 + 2) {
        return 0;
      }
      uVar4 = *((uint *)GEN_TOP((iVar3 + 4 + local_18 * 4)));
      if ((((byte)uVar4 & 0x3f) == 0x22) && ((uVar4 & 0x7fc000) == 0)) {
        return 0;
      }
    }
    break;
  case 3: ;
    if (((int)uVar7 <= (int)param_3) && ((int)param_3 <= (int)uVar8)) {
      local_10 = local_18;
    }
    break;
  case 4: ;
  case 8: ;
    bVar11 = SBORROW4(uVar8,(uint)*((byte *)GEN_TOP((param_1 + 0x48))));
    bVar10 = (int)(uVar8 - *((byte *)GEN_TOP((param_1 + 0x48)))) < 0;
    goto LAB_00c022e2;
  case 5: ;
  case 7: ;
    if (*((int *)GEN_TOP((uVar8 * 0x10 + 8 + *((int *)GEN_TOP((param_1 + 8)))))) != 4) {
      return 0;
    }
    break;
  case 0xb: ;
    if ((uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= uVar7 + 1) {
      return 0;
    }
    if (param_3 == uVar7 + 1) {
      local_10 = local_18;
    }
    break;
  case 0x15: ;
    bVar11 = SBORROW4(uVar8,local_14);
    bVar10 = (int)(uVar8 - local_14) < 0;
    goto LAB_00c022e2;
  case 0x16: ;
    goto switchD_00c02090_caseD_16;
  case 0x1c: ;
  case 0x1d: ;
    if ((uVar8 != 0) && ((int)(uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= (int)((uVar8 - 1) + uVar7))) {
      return 0;
    }
    if (local_14 == 0) {
      uVar4 = F_00c01e40(*((undefined4 *)GEN_TOP((iVar3 + 4 + local_18 * 4))));
      if (uVar4 == 0) {
        return 0;
      }
    }
    else if ((local_14 != 1) &&
            ((int)(uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= (int)((local_14 - 2) + uVar7))) {
      return 0;
    }
    if ((int)uVar7 <= (int)param_3) {
      local_10 = local_18;
    }
    break;
  case 0x1e: ;
    if (0 < (int)(uVar8 - 1)) goto LAB_00c022d8;
    break;
  case 0x1f: ;
  case 0x20: ;
    if ((uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= uVar7 + 3) {
      return 0;
    }
    goto switchD_00c02090_caseD_16;
  case 0x21: ;
    if (local_14 == 0) {
      return 0;
    }
    if ((uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= local_14 + 2 + uVar7) {
      return 0;
    }
    if ((int)(uVar7 + 2) <= (int)param_3) {
      local_10 = local_18;
    }
    break;
  case 0x22: ;
    if ((0 < (int)uVar8) && ((int)(uint)*((byte *)GEN_TOP((param_1 + 0x4b))) <= (int)(uVar8 + uVar7))) {
      return 0;
    }
    if (local_14 == 0) {
      local_18 = local_18 + 1;
      bVar11 = SBORROW4(local_18,iVar2 - 1);
      bVar10 = local_18 - (iVar2 - 1) < 0;
      goto LAB_00c022e2;
    }
    break;
  case 0x24: ;
    if (*((int *)GEN_TOP((param_1 + 0x34))) <= (int)uVar8) {
      return 0;
    }
    uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar8 * 4))) + 0x48)));
    if (iVar2 <= (int)(uVar4 + local_18)) {
      return 0;
    }
    iVar9 = 1;
    if (uVar4 != 0) {
      puVar5 = ((uint *)GEN_TOP((iVar3 + 4 + local_18 * 4)));
      do {
        if (((*puVar5 & 0x3f) != 4) && ((*puVar5 & 0x3f) != 0)) {
          return 0;
        }
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar9 <= (int)uVar4);
    }
    if (param_3 != 0xff) {
      local_18 = uVar4 + local_18;
    }
    break;
  case 0x25: ;
    if ((*((byte *)GEN_TOP((param_1 + 0x4a))) & 2) == 0) {
      return 0;
    }
    if ((*((byte *)GEN_TOP((param_1 + 0x4a))) & 4) != 0) {
      return 0;
    }
    if ((uVar8 == 0) && (uVar4 = F_00c01e40(*((undefined4 *)GEN_TOP((iVar3 + 4 + local_18 * 4)))), uVar4 == 0)
       ) {
      return 0;
    }
LAB_00c022d8: ;
    iVar9 = (uVar8 - 2) + uVar7;
    bVar11 = SBORROW4(iVar9,(uint)*((byte *)GEN_TOP((param_1 + 0x4b))));
    bVar10 = (int)(iVar9 - (uint)*((byte *)GEN_TOP((param_1 + 0x4b)))) < 0;
LAB_00c022e2: ;
    if (bVar11 == bVar10) {
      return 0;
    }
  }
switchD_00c02090_caseD_6: ;
  local_18 = local_18 + 1;
  if (param_2 <= local_18) goto LAB_00c022ff;
  goto LAB_00c01f01;
switchD_00c02090_caseD_16: ;
  iVar9 = uVar8 + 1 + local_18;
  if (((param_3 != 0xff) && (local_18 < iVar9)) && (iVar9 <= param_2)) {
    local_18 = uVar8 + local_18;
  }
  goto switchD_00c02090_caseD_6;
}

/* ref: Global::luaG_checkcode */
GEN_OWN GEN_NOFRAME uint F_00c02380(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc02380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c01ec0(param_1,*((undefined4 *)GEN_TOP((param_1 + 0x2c))),0xff);
  return (uint)(uVar1 != 0);
}

/* ref: Global::kname */
GEN_OWN GEN_NOFRAME uint F_00c023a0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc023a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  int * piVar1;
  
  if (((in_eax & 0x100) != 0) &&
     (piVar1 = ((int *)GEN_TOP(((in_eax & 0xfffffeff) * 0x10 + *((int *)GEN_TOP((in_ecx + 8)))))), piVar1[2] == 4)) {
    return *piVar1 + 0x10;
  }
  return 0x134771c;
}

/* ref: Global::getobjname */
GEN_OWN GEN_NOFRAME uint F_00c023d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc023d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_3;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 4))) + 8))) == 6) {
    while( true ) {
      piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 4)));
      if (*((char *)GEN_TOP((*piVar1 + 6))) != '\0') break;
      in_ecx = *((int *)GEN_TOP((*piVar1 + 0x10)));
      if (piVar1[2] == 6) {
        if (param_2 == *((int *)GEN_TOP((param_1 + 0x14)))) {
          *((undefined4 *)GEN_TOP((param_2 + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
        }
        iVar4 = (*((int *)GEN_TOP((param_2 + 0xc))) - *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0xc))) >> 2) - 1;
      }
      else {
        iVar4 = -1;
      }
      uVar2 = F_00c05f90(in_ecx,uVar3 + 1,iVar4);
      *param_4 = uVar2;
      if (uVar2 != 0) {
        return 0x1347720;
      }
      uVar2 = F_00c01ec0(in_ecx,iVar4,uVar3);
      switch((unsigned int)(uintptr_t)(uVar2 & 0x3f)) {
      case 0: ;
        uVar3 = uVar2 >> 0x17;
        if ((uVar2 >> 6 & 0xff) <= uVar3) {
          return 0;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 4))) + 8))) != 6) {
          return 0;
        }
        break;
      default: ;
        goto switchD_00c0245f_caseD_1;
      case 4: ;
        if (*((int *)GEN_TOP((in_ecx + 0x1c))) == 0) {
          *param_4 = (uint)&REFG(undefined, 0x1347738);
          return 0x134773c;
        }
        *param_4 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + (uVar2 >> 0x17) * 4))) + 0x10;
        return 0x134773c;
      case 5: ;
        *param_4 = *((int *)GEN_TOP(((uVar2 >> 0xe) * 0x10 + *((int *)GEN_TOP((in_ecx + 8)))))) + 0x10;
        return 0x1347728;
      case 6: ;
        uVar3 = F_00c023a0(uVar2 >> 0xe & 0x1ff,in_ecx);
        *param_4 = uVar3;
        return 0x1347730;
      case 0xb: ;
        uVar3 = F_00c023a0(uVar2 >> 0xe & 0x1ff,in_ecx);
        *param_4 = uVar3;
        return 0x1347744;
      }
    }
  }
switchD_00c0245f_caseD_1: ;
  return 0;
}

/* ref: Global::getfuncname */
GEN_OWN GEN_NOFRAME uint F_00c02550(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((*((int * PTR32 *)GEN_TOP((in_ecx + 4))))[2] != 6) || (*((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP((in_ecx + 4))) + 6))) != '\0')) ||
      (*((int *)GEN_TOP((in_ecx + 0x14))) < 1)) &&
     (((*((int * PTR32 *)GEN_TOP((in_ecx - 0x14))))[2] == 6 && (*((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP((in_ecx - 0x14))) + 6))) == '\0'))))
  {
    piVar1 = *((int * PTR32 *)GEN_TOP((in_ecx - 0x14)));
    if ((piVar1[2] == 6) && (*((char *)GEN_TOP((*piVar1 + 6))) == '\0')) {
      if (in_ecx - 0x18 == *((int *)GEN_TOP((in_edi + 0x14)))) {
        *((undefined4 *)GEN_TOP((in_ecx - 0xc))) = *((undefined4 *)GEN_TOP((in_edi + 0x18)));
      }
      iVar2 = (*((int *)GEN_TOP((in_ecx - 0xc))) - *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0xc))) >> 2) - 1;
    }
    else {
      iVar2 = -1;
    }
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x10))) + 0xc))) + iVar2 * 4)));
    uVar4 = uVar3 & 0x3f;
    if (((uVar4 == 0x1c) || (uVar4 == 0x1d)) || (uVar4 == 0x21)) {
      uVar3 = F_00c023d0(in_edi,in_ecx - 0x18,uVar3 >> 6 & 0xff,param_3);
      return uVar3;
    }
  }
  return 0;
}

/* ref: Global::addinfo */
GEN_OWN_GS GEN_NOFRAME uint F_00c02620(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc02620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 0);
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = *((int *)GEN_TOP((in_edi + 0x14)));
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 4)));
  if ((piVar3[2] == 6) && (*((char *)GEN_TOP((*piVar3 + 6))) == '\0')) {
    uVar1 = F_00c01a30(iVar2,in_edi);
    if (((*((int * PTR32 *)GEN_TOP((iVar2 + 4))))[2] == 6) &&
       (iVar2 = **((int * PTR32 *)GEN_TOP((iVar2 + 4))), *((char *)GEN_TOP((iVar2 + 6))) == '\0')) {
      iVar2 = *((int *)GEN_TOP((iVar2 + 0x10)));
    }
    else {
      iVar2 = 0;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0x4)),*((int *)GEN_TOP((iVar2 + 0x20))) + 0x10,0x3c);
    piVar3 = ((int *)GEN_TOP(F_00c00790(in_edi,((char *)REFP(0x13477f4)),((undefined1 *)(gen_frame + 0x4)),uVar1,(*(undefined4 *)(gen_frame + 0x0)))));
  }
  return (uint)piVar3;
}

/* ref: Global::luaG_errormsg */
GEN_OWN GEN_NOFRAME uint F_00c026b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc026b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (*((int *)GEN_TOP((param_1 + 0x74))) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + *((int *)GEN_TOP((param_1 + 0x74))))));
    if (puVar3[2] != 6) {
                    
      F_00bb93a0(param_1,5);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)));
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    iVar2 = *((int *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP((iVar2 - 0x10))) = *puVar3;
    *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = puVar3[1];
    *((undefined4 *)GEN_TOP((iVar2 - 8))) = puVar3[2];
    if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
    F_00bb9600(param_1,*((int *)GEN_TOP((param_1 + 8))) - 0x20,1);
  }
                    
  F_00bb93a0(param_1,2);
}

/* ref: Global::luaG_runerror */
GEN_OWN GEN_NOFRAME uint F_00c02740(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc02740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  F_00c02620(param_1,uVar1);
  uVar1 = F_00c026b0(param_1);
  return uVar1;
}

/* ref: Global::auxgetinfo */
GEN_OWN GEN_NOFRAME uint F_00c02770(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc02770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint local_4;
  
  local_4 = 1;
  if (param_4 != 0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case 'L': ;
      case 'f': ;
        break;
      default: ;
        local_4 = 0;
        break;
      case 'S': ;
        F_00c01c90(in_esi,param_4);
        break;
      case 'l': ;
        if (param_5 == 0) {
          *((undefined4 *)GEN_TOP((in_esi + 0x14))) = 0xffffffff;
        }
        else {
          uVar2 = F_00c01a30(param_5,param_2);
          *((uint *)GEN_TOP((in_esi + 0x14))) = uVar2;
        }
        break;
      case 'n': ;
        if (param_5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = F_00c02550(param_5,param_2,in_esi + 4);
        }
        *((uint *)GEN_TOP((in_esi + 8))) = uVar2;
        if (uVar2 == 0) {
          *((undefined * PTR32 *)GEN_TOP((in_esi + 8))) = &REFG(undefined, 0x14c5be7);
          *((undefined4 *)GEN_TOP((in_esi + 4))) = 0;
        }
        break;
      case 'u': ;
        *((uint *)GEN_TOP((in_esi + 0x18))) = (uint)*((byte *)GEN_TOP((param_4 + 7)));
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return local_4;
  }
  *((undefined * PTR32 *)GEN_TOP((in_esi + 8))) = &REFG(undefined, 0x14c5be6);
  *((undefined * PTR32 *)GEN_TOP((in_esi + 4))) = &REFG(undefined, 0x14c5be6);
  *((undefined4 *)GEN_TOP((in_esi + 0x14))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((in_esi + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((in_esi + 0x20))) = 0xffffffff;
  *((undefined * PTR32 *)GEN_TOP((in_esi + 0xc))) = &REFG(undefined, 0x1347704);
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = ((char *)REFP(0x134770c));
  F_00c007b0(in_esi + 0x24,((char *)REFP(0x134770c)),0x3c);
  *((undefined4 *)GEN_TOP((in_esi + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00c028c0 */
GEN_OWN GEN_NOFRAME uint F_00c028c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc028c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char * pcVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if (*param_2 == '>') {
    iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) - 0x10)));
    pcVar7 = param_2 + 1;
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) - 0x10;
  }
  else {
    iVar1 = *((int *)GEN_TOP((param_3 + 0x60)));
    pcVar7 = param_2;
    if (iVar1 != 0) {
      iVar6 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 4 + iVar1 * 0x18)));
      iVar5 = *((int *)GEN_TOP((param_1 + 0x28))) + iVar1 * 0x18;
    }
  }
  uVar3 = F_00c02770(param_3,param_1,pcVar7,iVar6,iVar5);
  uVar4 = F_00c51da0(pcVar7,0x66);
  if (uVar4 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
    if (iVar6 == 0) {
      piVar2[2] = 0;
    }
    else {
      *piVar2 = iVar6;
      piVar2[2] = 6;
    }
    if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 0x10;
  }
  uVar4 = F_00c51da0(pcVar7,0x4c);
  if (uVar4 != 0) {
    F_00c01d50(param_1,iVar6);
  }
  return uVar3;
}

/* ref: Global::luaG_typeerror */
GEN_OWN GEN_NOFRAME uint F_00c02970(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x4, 12);
  undefined * puVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[(int)(*((int *)GEN_TOP((param_2 + 8))))];
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 0x14)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  uVar3 = *puVar2;
  do {
    if (puVar2[2] <= uVar3) {
LAB_00c029ab: ;
      uVar3 = F_00c02740(param_1,((char *)REFP(0x1347770)),param_3,puVar1);
      return uVar3;
    }
    if (param_2 == uVar3) {
      uVar3 = F_00c023d0(param_1,puVar2,(int)(param_2 - *((int *)GEN_TOP((param_1 + 0xc)))) >> 4,&(*(undefined4 *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        uVar3 = F_00c02740(param_1,((char *)REFP(0x134774c)),param_3,uVar3,
                              (*(undefined4 *)(gen_frame + 0x0)),puVar1);
        return uVar3;
      }
      goto LAB_00c029ab;
    }
    uVar3 = uVar3 + 0x10;
  } while( true );
}

/* ref: Global::luaG_concaterror */
GEN_OWN GEN_NOFRAME uint F_00c02a00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if ((*((int *)GEN_TOP((param_2 + 8))) == 4) || (iVar2 = param_2, *((int *)GEN_TOP((param_2 + 8))) == 3)) {
    iVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,iVar2,((char *)REFP(0x134778c)));
  return uVar1;
}

/* ref: FUN_00c02a30 */
GEN_OWN GEN_NOFRAME uint F_00c02a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = F_00c02bc0(param_2,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = param_2;
  if (uVar1 != 0) {
    uVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,uVar2,((char *)REFP(0x1347798)));
  return uVar1;
}

/* ref: Global::luaG_ordererror */
GEN_OWN GEN_NOFRAME uint F_00c02a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * puVar1;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[(int)(*((int *)GEN_TOP((param_2 + 8))))];
  if (puVar1[2] == (&REFG(undefined * PTR32, 0x110e598))[(int)(*((int *)GEN_TOP((param_3 + 8))))][2]) {
    F_00c02740(param_1,((char *)REFP(0x13477b0)),puVar1);
    return 0;
  }
  F_00c02740(param_1,((char *)REFP(0x13477d4)),puVar1,
                (&REFG(undefined * PTR32, 0x110e598))[(int)(*((int *)GEN_TOP((param_3 + 8))))]);
  return 0;
}

/* ref: Global::luaT_init */
GEN_OWN GEN_NOFRAME unsigned int F_00c02ad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc02ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0xbc;
  do {
    pcVar3 = *(char * PTR32 *)(&REFG(undefined, 0x110e50c) + iVar6);
    pcVar4 = pcVar3;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = F_00c05a80(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    *((uint *)GEN_TOP((iVar6 + *((int *)GEN_TOP((param_1 + 0x10)))))) = uVar5;
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar6))) + 5)));
    *pbVar1 = *pbVar1 | 0x20;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x100);
  return 0;
}

/* ref: Global::luaT_gettm */
GEN_OWN GEN_NOFRAME uint F_00c02b30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c051b0(param_1,param_3);
  if (*((int *)GEN_TOP((uVar1 + 8))) == 0) {
    *((byte *)GEN_TOP((param_1 + 6))) = *((byte *)GEN_TOP((param_1 + 6))) | '\x01' << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c02b60 */
GEN_OWN GEN_NOFRAME uint F_00c02b60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc02b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[2];
  if (iVar1 == 5) {
    iVar1 = *((int *)GEN_TOP((*param_2 + 8)));
  }
  else if (iVar1 == 7) {
    iVar1 = *((int *)GEN_TOP((*param_2 + 8)));
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x98 + iVar1 * 4)));
  }
  if (iVar1 != 0) {
    uVar2 = F_00c051b0(iVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xbc + param_3 * 4)))
                               );
    return uVar2;
  }
  return 0x110e488;
}

/* ref: FUN_00c02bc0 */
GEN_OWN GEN_NOFRAME uint F_00c02bc0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc02bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_1;
  if (param_1[2] != 3) {
    if (param_1[2] == 4) {
      uVar1 = F_00c00370(*param_1 + 0x10,&(*(undefined8 *)(gen_frame + 0x0)));
      if (uVar1 != 0) {
        *param_2 = (*(undefined8 *)(gen_frame + 0x0));
        *(undefined4 *)(param_2 + 1) = 3;
        return (uint)param_2;
      }
    }
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  return (uint)piVar2;
}

/* ref: Global::LuaVmToString */
GEN_OWN_GS GEN_NOFRAME uint F_00c02c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc02c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 0);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0x0)));
  if (param_2[2] != 3) {
    return 0;
  }
  F_00c4720f(((char *)(gen_frame + 0x0)),((char *)REFP(0x13478f0)),(int)*(undefined8 *)param_2,
           (int)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_2) >> 0x20));
  pcVar2 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,((char *)(gen_frame + 0x0)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x0)) + 1));
  *param_2 = uVar3;
  param_2[2] = 4;
  return 1;
}

/* ref: Global::LuaTraceExec */
GEN_OWN GEN_NOFRAME uint F_00c02ca0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc02ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *((byte *)GEN_TOP((in_esi + 0x38)));
  uVar2 = *((uint *)GEN_TOP((in_esi + 0x18)));
  *((uint *)GEN_TOP((in_esi + 0x18))) = param_2;
  if (((bVar1 & 8) != 0) && (*((int *)GEN_TOP((in_esi + 0x40))) == 0)) {
    *((undefined4 *)GEN_TOP((in_esi + 0x40))) = *((undefined4 *)GEN_TOP((in_esi + 0x3c)));
    in_EAX = F_00bb8d80(in_esi,3,0xffffffff);
  }
  if ((bVar1 & 4) != 0) {
    iVar5 = *((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x14))) + 4))) + 0x10)));
    iVar3 = *((int *)GEN_TOP((iVar5 + 0xc)));
    iVar5 = *((int *)GEN_TOP((iVar5 + 0x14)));
    uVar4 = ((int)(param_2 - iVar3) >> 2) - 1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *((int *)GEN_TOP((iVar5 + uVar4 * 4)));
    }
    if ((uVar4 != 0) && (uVar2 < param_2)) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *((int *)GEN_TOP((iVar5 - 4 + ((int)(uVar2 - iVar3) >> 2) * 4)));
      }
      if (iVar6 == iVar5) {
        return uVar4;
      }
    }
    in_EAX = F_00bb8d80(in_esi,2,iVar6);
  }
  return in_EAX;
}

/* ref: Global::callTMres */
GEN_OWN GEN_NOFRAME uint GEN_FASTCALL F_00c02d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc02d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = *((int *)GEN_TOP((param_3 + 0x20)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_3 + 8)));
  *puVar2 = *param_5;
  puVar2[1] = param_5[1];
  puVar2[2] = param_5[2];
  iVar3 = *((int *)GEN_TOP((param_3 + 8)));
  *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((iVar3 + 0x14))) = param_2[1];
  *((undefined4 *)GEN_TOP((iVar3 + 0x18))) = param_2[2];
  iVar3 = *((int *)GEN_TOP((param_3 + 8)));
  *((undefined4 *)GEN_TOP((iVar3 + 0x20))) = *param_1;
  *((undefined4 *)GEN_TOP((iVar3 + 0x24))) = param_1[1];
  *((undefined4 *)GEN_TOP((iVar3 + 0x28))) = param_1[2];
  if (*((int *)GEN_TOP((param_3 + 0x1c))) - *((int *)GEN_TOP((param_3 + 8))) < 0x31) {
    F_00bb8d50(param_3,3);
  }
  *((int *)GEN_TOP((param_3 + 8))) = *((int *)GEN_TOP((param_3 + 8))) + 0x30;
  F_00bb9600(param_3,*((int *)GEN_TOP((param_3 + 8))) - 0x30,1);
  *((int *)GEN_TOP((param_3 + 8))) = *((int *)GEN_TOP((param_3 + 8))) - 0x10;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_3 + 8)));
  puVar5 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + (param_4 - iVar1))));
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  uVar4 = puVar2[2];
  puVar5[2] = uVar4;
  return uVar4;
}

/* ref: Global::callTM */
GEN_OWN GEN_NOFRAME uint F_00c02de0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0), GEN_P(undefined4 * in_edx, unsigned int gen_a1), GEN_P(int in_esi, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc02de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int in_esi = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_esi + 8)));
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  iVar2 = *((int *)GEN_TOP((in_esi + 8)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = *param_5;
  *((undefined4 *)GEN_TOP((iVar2 + 0x14))) = param_5[1];
  *((undefined4 *)GEN_TOP((iVar2 + 0x18))) = param_5[2];
  iVar2 = *((int *)GEN_TOP((in_esi + 8)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x20))) = *in_edx;
  *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = in_edx[1];
  *((undefined4 *)GEN_TOP((iVar2 + 0x28))) = in_edx[2];
  iVar2 = *((int *)GEN_TOP((in_esi + 8)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x30))) = *in_ecx;
  *((undefined4 *)GEN_TOP((iVar2 + 0x34))) = in_ecx[1];
  *((undefined4 *)GEN_TOP((iVar2 + 0x38))) = in_ecx[2];
  if (*((int *)GEN_TOP((in_esi + 0x1c))) - *((int *)GEN_TOP((in_esi + 8))) < 0x41) {
    F_00bb8d50(in_esi,4);
  }
  *((int *)GEN_TOP((in_esi + 8))) = *((int *)GEN_TOP((in_esi + 8))) + 0x40;
  uVar3 = F_00bb9600(in_esi,*((int *)GEN_TOP((in_esi + 8))) - 0x40,0);
  return uVar3;
}

/* ref: Global::luaV_gettable */
GEN_OWN GEN_NOFRAME uint F_00c02e80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc02e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int local_4;
  
  local_4 = 0;
  piVar5 = param_2;
  do {
    if (piVar5[2] == 5) {
      iVar1 = *piVar5;
      puVar2 = ((undefined4 *)GEN_TOP(F_00c051f0(iVar1,param_3)));
      if (((puVar2[2] != 0) || (iVar1 = *((int *)GEN_TOP((iVar1 + 8))), iVar1 == 0)) ||
         ((*((byte *)GEN_TOP((iVar1 + 6))) & 1) != 0)) {
LAB_00c02edb: ;
        *param_4 = *puVar2;
        param_4[1] = puVar2[1];
        param_4[2] = puVar2[2];
        return (uint)param_4;
      }
      piVar3 = ((int *)GEN_TOP(F_00c02b30(iVar1,0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xbc))))));
      if (piVar3 == ((int *)GEN_TOP(0x0))) goto LAB_00c02edb;
    }
    else {
      piVar3 = ((int *)GEN_TOP(F_00c02b60(param_1,piVar5,0)));
      if (piVar3[2] == 0) {
        F_00c02970(param_1,piVar5,((char *)REFP(0x13478f8)));
      }
    }
    if (piVar3[2] == 6) {
      uVar4 = F_00c02d30(param_3,piVar5,param_1,param_4,piVar3);
      return uVar4;
    }
    local_4 = local_4 + 1;
    piVar5 = piVar3;
    if (99 < local_4) {
      uVar4 = F_00c02740(param_1,((char *)REFP(0x1347900)));
      return uVar4;
    }
  } while( true );
}

/* ref: Global::LuaV_SetTable */
GEN_OWN GEN_NOFRAME uint F_00c02f70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc02f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int local_8;
  
  local_8 = 0;
  piVar6 = param_2;
  do {
    if (piVar6[2] == 5) {
      iVar1 = *piVar6;
      puVar3 = ((uint *)GEN_TOP(F_00c052a0(param_1,iVar1,param_3)));
      if ((((puVar3[2] != 0) || (iVar2 = *((int *)GEN_TOP((iVar1 + 8))), iVar2 == 0)) ||
          ((*((byte *)GEN_TOP((iVar2 + 6))) & 2) != 0)) ||
         (piVar4 = ((int *)GEN_TOP(F_00c02b30(iVar2,1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xc0)))))),
         piVar4 == ((int *)GEN_TOP(0x0)))) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        if ((int)param_4[2] < 4) {
          return (uint)param_4;
        }
        uVar5 = *param_4;
        if ((*((byte *)GEN_TOP((uVar5 + 5))) & 3) == 0) {
          return uVar5;
        }
        if ((*((byte *)GEN_TOP((iVar1 + 5))) & 4) == 0) {
          return uVar5;
        }
        uVar5 = F_00c01940(param_1,iVar1);
        return uVar5;
      }
    }
    else {
      piVar4 = ((int *)GEN_TOP(F_00c02b60(param_1,piVar6,1)));
      if (piVar4[2] == 0) {
        F_00c02970(param_1,piVar6,((char *)REFP(0x1347914)));
      }
    }
    if (piVar4[2] == 6) {
      uVar5 = F_00c02de0(param_4,param_3,param_1,piVar4,piVar6);
      return uVar5;
    }
    local_8 = local_8 + 1;
    piVar6 = piVar4;
  } while (local_8 < 100);
  uVar5 = F_00c02740(param_1,((char *)REFP(0x134791c)));
  return uVar5;
}

/* ref: FUN_00c03090 */
GEN_OWN GEN_NOFRAME uint F_00c03090(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc03090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c02b60(in_esi,param_3,in_edi);
  if (*((int *)GEN_TOP((uVar1 + 8))) == 0) {
    uVar1 = F_00c02b60(in_esi,param_4,in_edi);
    if (*((int *)GEN_TOP((uVar1 + 8))) == 0) {
      return 0;
    }
  }
  F_00c02d30(param_4,param_3,in_esi,param_5,uVar1);
  return 1;
}

/* ref: FUN_00c030e0 */
GEN_OWN GEN_NOFRAME uint F_00c030e0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc030e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((in_edi != 0) &&
      (bVar1 = (byte)(1 << GEN_SHC((byte)in_esi, (unsigned int)(uintptr_t)in_esi)), (*((byte *)GEN_TOP((in_edi + 6))) & bVar1) == 0)) &&
     (uVar2 = F_00c02b30(in_edi,in_esi,
                                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x10))) + 0xbc + in_esi * 4)))),
     uVar2 != 0)) {
    if (in_edi == param_4) {
      return uVar2;
    }
    if (((param_4 != 0) && ((*((byte *)GEN_TOP((param_4 + 6))) & bVar1) == 0)) &&
       (uVar3 = F_00c02b30(param_4,in_esi,
                                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x10))) + 0xbc + in_esi * 4)))),
       uVar3 != 0)) {
      uVar3 = F_00c00310(uVar2,uVar3);
      return -(uint)(uVar3 != 0) & uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c03170 */
GEN_OWN GEN_NOFRAME uint F_00c03170(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc03170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00c02b60(in_eax,param_2,param_4);
  if (*((int *)GEN_TOP((uVar2 + 8))) != 0) {
    uVar3 = F_00c02b60(in_eax,param_3,param_4);
    uVar3 = F_00c00310(uVar2,uVar3);
    if (uVar3 != 0) {
      F_00c02d30(param_3,param_2,in_eax,*((undefined4 *)GEN_TOP((in_eax + 8))),uVar2);
      iVar1 = (*((int * PTR32 *)GEN_TOP((in_eax + 8))))[2];
      if ((iVar1 != 0) && ((iVar1 != 1 || (**((int * PTR32 *)GEN_TOP((in_eax + 8))) != 0)))) {
        return 1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c031f0 */
GEN_OWN GEN_NOFRAME uint F_00c031f0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc031f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char * _Str1;
  char * _Str2;
  
  iVar5 = *((int *)GEN_TOP((in_eax + 0xc)));
  iVar6 = *((int *)GEN_TOP((in_ecx + 0xc)));
  _Str2 = ((char *)GEN_TOP((in_eax + 0x10)));
  _Str1 = ((char *)GEN_TOP((in_ecx + 0x10)));
  uVar2 = F_00c527e2(_Str1,_Str2);
  if (uVar2 == 0) {
    while( true ) {
      pcVar3 = _Str1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - (int)(_Str1 + 1);
      if (iVar4 == iVar5) {
        return (uint)(iVar4 != iVar6);
      }
      if (iVar4 == iVar6) break;
      iVar4 = iVar4 + 1;
      _Str2 = _Str2 + iVar4;
      _Str1 = _Str1 + iVar4;
      iVar6 = iVar6 - iVar4;
      iVar5 = iVar5 - iVar4;
      uVar2 = F_00c527e2(_Str1,_Str2);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c03260 */
GEN_OWN GEN_NOFRAME uint F_00c03260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc03260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  double dVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != *(int *)(param_3 + 1)) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
    return uVar3;
  }
  if (iVar2 == 3) {
    dVar1 = *param_3;
    if ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(*param_2)) && (!(dVar1 < *param_2) && dVar1 != *param_2)) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 4) {
    uVar3 = F_00c031f0(*(undefined4 *)param_3,*(undefined4 *)param_2);
    return (uint)((int)uVar3 < 0);
  }
  uVar3 = F_00c03170(param_1,param_2,param_3,0xd);
  if (uVar3 == 0xffffffff) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
  }
  return uVar3;
}

/* ref: FUN_00c032f0 */
GEN_OWN GEN_NOFRAME uint F_00c032f0(GEN_P(double * in_esi, unsigned int gen_a0), GEN_P(double * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc032f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(double * in_esi = (double *)(uintptr_t)gen_a0;)
  GEN_PIN(double * in_edi = (double *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_edi + 1);
  if (iVar1 == *(int *)(in_esi + 1)) {
    if (iVar1 == 3) {
      if (!(*in_edi <= *in_esi)) {
        return 0;
      }
      return 1;
    }
    if (iVar1 == 4) {
      uVar2 = F_00c031f0(*(undefined4 *)in_esi,*(undefined4 *)in_edi);
      return (uint)((int)uVar2 < 1);
    }
    uVar2 = F_00c03170(param_3,in_edi,in_esi,0xe);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar2 = F_00c03170(param_3,in_esi,in_edi,0xd);
    if (uVar2 != 0xffffffff) {
      return (uint)(uVar2 == 0);
    }
  }
  uVar2 = F_00c02a70(param_3,in_edi,in_esi);
  return uVar2;
}

/* ref: FUN_00c03370 */
GEN_OWN GEN_NOFRAME uint F_00c03370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc03370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 1))) {
  case 0: ;
    goto switchD_00c03384_caseD_0;
  default: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 2: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 3: ;
    bVar3 = GEN_ISNAN(*param_2) || GEN_ISNAN(*param_3);
    if (bVar3 == (bVar3 || *param_2 == *param_3)) {
      return 0;
    }
    return 1;
  case 5: ;
  case 7: ;
    if (*(int *)param_2 != *(int *)param_3) {
      uVar2 = F_00c030e0(4,*((undefined4 *)GEN_TOP((*(int *)param_2 + 8))),param_1,
                           *((undefined4 *)GEN_TOP((*(int *)param_3 + 8))));
      if (uVar2 == 0) {
        return 0;
      }
      F_00c02d30(param_3,param_2,param_1,*((undefined4 *)GEN_TOP((param_1 + 8))),uVar2);
      iVar1 = (*((int * PTR32 *)GEN_TOP((param_1 + 8))))[2];
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 != 1) {
        return 1;
      }
      if (**((int * PTR32 *)GEN_TOP((param_1 + 8))) == 0) {
        return 0;
      }
      return 1;
    }
switchD_00c03384_caseD_0: ;
    return 1;
  }
}

/* ref: Global::LuaV_Concat */
GEN_OWN GEN_NOFRAME unsigned int F_00c03460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc03460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint * puVar6;
  int local_c;
  int local_8;
  
  do {
    iVar5 = (param_3 + 1) * 0x10 + *((int *)GEN_TOP((param_1 + 0xc)));
    iVar3 = 2;
    if (((*((int *)GEN_TOP((iVar5 - 0x18))) == 4) || (*((int *)GEN_TOP((iVar5 - 0x18))) == 3)) &&
       ((*((int *)GEN_TOP((iVar5 - 8))) == 4 || (uVar2 = F_00c02c10(param_1,iVar5 - 0x10), uVar2 != 0))))
    {
      local_c = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 - 0x10))) + 0xc)));
      if (local_c == 0) {
        if (*((int *)GEN_TOP((iVar5 - 0x18))) != 4) {
          F_00c02c10(param_1,iVar5 - 0x20);
        }
      }
      else {
        iVar3 = 1;
        local_8 = 1;
        if (1 < param_2) {
          piVar4 = ((int *)GEN_TOP((iVar5 - 0x20)));
          do {
            if ((piVar4[2] != 4) &&
               (uVar2 = F_00c02c10(param_1,piVar4), local_8 = iVar3, uVar2 == 0)) break;
            uVar2 = *((uint *)GEN_TOP((*piVar4 + 0xc)));
            if (-local_c - 3U <= uVar2) {
              F_00c02740(param_1,((char *)REFP(0x1347930)));
            }
            local_c = local_c + uVar2;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 - 4;
            local_8 = iVar3;
          } while (iVar3 < param_2);
        }
        uVar2 = F_00c06140(param_1,*((int *)GEN_TOP((param_1 + 0x10))) + 0x34,local_c);
        iVar3 = 0;
        if (0 < local_8) {
          piVar4 = ((int *)GEN_TOP((iVar5 + local_8 * -0x10)));
          local_c = local_8;
          do {
            iVar1 = *((int *)GEN_TOP((*piVar4 + 0xc)));
            F_00c46aa0(uVar2 + iVar3,*piVar4 + 0x10,iVar1);
            local_c = local_c - 1;
            iVar3 = iVar3 + iVar1;
            piVar4 = piVar4 + 4;
          } while (0 < local_c);
        }
        puVar6 = ((uint *)GEN_TOP((iVar5 + local_8 * -0x10)));
        uVar2 = F_00c05a80(param_1,uVar2,iVar3);
        *puVar6 = uVar2;
        puVar6[2] = 4;
        iVar3 = local_8;
      }
    }
    else {
      iVar1 = iVar5 - 0x10;
      iVar5 = iVar5 - 0x20;
      uVar2 = F_00c02b60(param_1,iVar5,0xf);
      if ((*((int *)GEN_TOP((uVar2 + 8))) == 0) &&
         (uVar2 = F_00c02b60(param_1,iVar1,0xf), *((int *)GEN_TOP((uVar2 + 8))) == 0)) {
        F_00c02a00(param_1,iVar5,iVar1);
      }
      else {
        F_00c02d30(iVar1,iVar5,param_1,iVar5,uVar2);
      }
    }
    param_3 = param_3 + (1 - iVar3);
    param_2 = param_2 + (1 - iVar3);
    if (param_2 < 2) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c03630 */
GEN_OWN GEN_FRAME uint F_00c03630(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(double * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(double * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc03630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double * in_edi = (double *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(double * param_4 = (double *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  double dVar1;
  double dVar2;
  float10 fVar4;
  uint uVar5;
  double * pdVar6;
  double dVar7;
  double dVar8;
  
  if (in_esi[2] == 3) {
    (*(double * PTR32 *)(gen_frame + 0x0)) = (double *)in_esi;
    *(double *)&(*(double * PTR32 *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((*(undefined4 *)(gen_frame + 0x4)),in_esi));
LAB_00c03694: ;
    pdVar6 = param_4;
    if (*(int *)(param_4 + 1) != 3) {
      if ((*(int *)(param_4 + 1) != 4) ||
         (uVar5 = F_00c00370(*(int *)param_4 + 0x10,&(*(double *)(gen_frame + 0x8))), uVar5 == 0)) goto LAB_00c037d6;
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      pdVar6 = &(*(double *)(gen_frame + 0x8));
    }
    dVar1 = *(*(double * PTR32 *)(gen_frame + 0x0));
    dVar2 = *pdVar6;
    uVar5 = param_5 - 5;
    *(double *)&(*(double * PTR32 *)(gen_frame + 0x0)) = dVar1;
    (*(double *)(gen_frame + 0x8)) = dVar2;
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0: ;
      *in_edi = dVar2 + dVar1;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 1: ;
      *in_edi = dVar1 - dVar2;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 2: ;
      *in_edi = dVar2 * dVar1;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 3: ;
      *in_edi = dVar1 / dVar2;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 4: ;
      dVar8 = dVar1 / dVar2;
      dVar7 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar8));
      dVar7 = (dVar8 + dVar7) - dVar7;
      *in_edi = dVar1 - (dVar7 - gen_bits2d(-(ulonglong)
                                             !(dVar7 - dVar8 <=
                                              gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar8)
                                                        )) & REFG(ulonglong, 0x1088130))) * dVar2;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 5: ;
      fVar4 = ((float10)GEN_TOD(pow((float10)dVar1,(float10)dVar2)));
      *in_edi = (double)fVar4;
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    case 6: ;
      *in_edi = gen_bits2d((ulonglong)gen_d2bits(dVar1) ^ REFG(ulonglong, 0x110e610));
      *(undefined4 *)(in_edi + 1) = 3;
      return uVar5;
    }
  }
  else {
    if ((in_esi[2] == 4) && (uVar5 = F_00c00370(*in_esi + 0x10,(gen_frame + 0x0)), uVar5 != 0)) {
      (*(undefined8 *)(gen_frame + 0x18)) = (undefined8)gen_d2bits(*(double *)&(*(double * PTR32 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x20)) = 3;
      (*(double * PTR32 *)(gen_frame + 0x0)) = (double *)&(*(undefined8 *)(gen_frame + 0x18));
      *(double *)&(*(double * PTR32 *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((*(undefined4 *)(gen_frame + 0x4)),&(*(undefined8 *)(gen_frame + 0x18))));
      goto LAB_00c03694;
    }
LAB_00c037d6: ;
    uVar5 = F_00c02b60(param_3,in_esi,param_5);
    if ((*((int *)GEN_TOP((uVar5 + 8))) != 0) ||
       (uVar5 = F_00c02b60(param_3,param_4,param_5), *((int *)GEN_TOP((uVar5 + 8))) != 0)) {
      uVar5 = F_00c02d30(param_4,in_esi,param_3,in_edi,uVar5);
      return uVar5;
    }
    uVar5 = F_00c02a30(param_3,in_esi,param_4);
  }
  return uVar5;
}

/* ref: FUN_00c03850 */
GEN_OWN GEN_FRAME uint F_00c03850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc03850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x74, 12, 4);
  float10 fVar2;
  uint uVar3;
  int iVar4;
  double * pdVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 * puVar12;
  int iVar13;
  uint * puVar14;
  double * pdVar15;
  double * pdVar16;
  ulonglong * puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  char * pcVar24;
  
LAB_00c0385c: ;
  iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
  iVar11 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 4)));
  iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0x10))) + 8)));
  puVar14 = *((uint * PTR32 *)GEN_TOP((param_1 + 0x18)));
switchD_00c038db_default: ;
  (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
  uVar9 = *(*(uint * PTR32 *)(gen_frame + 0x0));
  puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 1;
  if ((*((byte *)GEN_TOP((param_1 + 0x38))) & 0xc) != 0) {
    piVar7 = ((int *)GEN_TOP((param_1 + 0x40)));
    *piVar7 = *piVar7 - 1;
    if ((*piVar7 == 0) || ((*((byte *)GEN_TOP((param_1 + 0x38))) & 4) != 0)) {
      uVar3 = F_00c02ca0(param_1,puVar14);
      if (*((char *)GEN_TOP((param_1 + 6))) == '\x01') {
        *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = (*(uint * PTR32 *)(gen_frame + 0x0));
        return uVar3;
      }
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
  }
  uVar3 = uVar9 >> 6 & 0xff;
  iVar4 = uVar3 * 0x10;
  pdVar15 = ((double *)GEN_TOP((iVar4 + iVar18)));
  switch((unsigned int)(uintptr_t)(uVar9 & 0x3f)) {
  case 0: ;
    puVar8 = ((undefined4 *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    goto LAB_00c038ea;
  case 1: ;
    puVar8 = ((undefined4 *)GEN_TOP(((uVar9 >> 0xe) * 0x10 + iVar13)));
LAB_00c038ea: ;
    *(undefined4 *)pdVar15 = *puVar8;
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 4))) = puVar8[1];
    *(undefined4 *)(pdVar15 + 1) = puVar8[2];
    goto switchD_00c038db_default;
  case 2: ;
    *(uint *)pdVar15 = uVar9 >> 0x17;
    *(undefined4 *)(pdVar15 + 1) = 1;
    if ((uVar9 & 0x7fc000) != 0) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 2;
    }
    goto switchD_00c038db_default;
  case 3: ;
    pdVar5 = ((double *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    do {
      *(undefined4 *)(pdVar5 + 1) = 0;
      pdVar5 = pdVar5 - 2;
    } while (pdVar15 <= pdVar5);
    goto switchD_00c038db_default;
  case 4: ;
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0x14 + (uVar9 >> 0x17) * 4))) + 8)));
    *(undefined4 *)pdVar15 = *puVar8;
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 4))) = puVar8[1];
    *(undefined4 *)(pdVar15 + 1) = puVar8[2];
    goto switchD_00c038db_default;
  case 5: ;
    ((undefined4 *)(gen_frame + 0x3c))[0] = *((undefined4 *)GEN_TOP((iVar11 + 0xc)));
    (*(undefined4 *)(gen_frame + 0x44)) = 5;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    F_00c02e80(param_1,((undefined4 *)(gen_frame + 0x3c)),(uVar9 >> 0xe) * 0x10 + iVar13,pdVar15);
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    goto switchD_00c038db_default;
  case 6: ;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    uVar3 = uVar9 >> 0xe;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar13;
    }
    F_00c02e80(param_1,(uVar9 >> 0x17) * 0x10 + iVar18,iVar4,pdVar15);
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    goto switchD_00c038db_default;
  case 7: ;
    ((undefined4 *)(gen_frame + 0x4c))[0] = *((undefined4 *)GEN_TOP((iVar11 + 0xc)));
    (*(undefined4 *)(gen_frame + 0x54)) = 5;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    F_00c02f70(param_1,((undefined4 *)(gen_frame + 0x4c)),(uVar9 >> 0xe) * 0x10 + iVar13,pdVar15);
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    goto switchD_00c038db_default;
  case 8: ;
    iVar4 = *((int *)GEN_TOP((iVar11 + 0x14 + (uVar9 >> 0x17) * 4)));
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)));
    *puVar8 = *(undefined4 *)pdVar15;
    puVar8[1] = *((undefined4 *)GEN_TOP(((int)pdVar15 + 4)));
    puVar8[2] = *(undefined4 *)(pdVar15 + 1);
    if (((3 < *(int *)(pdVar15 + 1)) && ((*((byte *)GEN_TOP((*(int *)pdVar15 + 5))) & 3) != 0)) &&
       ((*((byte *)GEN_TOP((iVar4 + 5))) & 4) != 0)) {
      F_00c01900(param_1,iVar4,*(int *)pdVar15);
    }
    goto switchD_00c038db_default;
  case 9: ;
    uVar3 = uVar9 >> 0xe;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      F_00c02f70(param_1,pdVar15,uVar9 * 0x10 + iVar18,iVar4);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    else {
      F_00c02f70(param_1,pdVar15,(uVar9 & 0xff) * 0x10 + iVar13,iVar4);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 10: ;
    uVar3 = F_00c002c0(uVar9 >> 0xe & 0x1ff);
    uVar9 = F_00c002c0(uVar9 >> 0x17);
    uVar9 = F_00c05020(param_1,uVar9,uVar3);
    *(uint *)pdVar15 = uVar9;
    *(undefined4 *)(pdVar15 + 1) = 5;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    bVar21 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x44))) < *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
    goto LAB_00c047c8;
  case 0xb: ;
    iVar4 = (uVar9 >> 0x17) * 0x10;
    iVar19 = iVar4 + iVar18;
    *(undefined4 *)(pdVar15 + 2) = *((undefined4 *)GEN_TOP((iVar4 + iVar18)));
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x14))) = *((undefined4 *)GEN_TOP((iVar19 + 4)));
    *(undefined4 *)(pdVar15 + 3) = *((undefined4 *)GEN_TOP((iVar19 + 8)));
    uVar9 = uVar9 >> 0xe;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = (uVar9 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    F_00c02e80(param_1,iVar19,iVar18,pdVar15);
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    goto switchD_00c038db_default;
  case 0xc: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar16 + *pdVar5;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,5);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0xd: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar5 - *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,6);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0xe: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar16 * *pdVar5;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,7);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0xf: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar5 / *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,8);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0x10: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      dVar23 = GEN_X87(*pdVar5 / *pdVar16);
      dVar22 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar23));
      dVar22 = GEN_X87((dVar23 + dVar22) - dVar22);
      *pdVar15 = *pdVar5 - (dVar22 - gen_bits2d(-(ulonglong)
                                                 !(dVar22 - dVar23 <=
                                                  gen_bits2d(REFG(ulonglong, 0x110e628) &
                                                             (ulonglong)gen_d2bits(dVar23))) &
                                                REFG(ulonglong, 0x1088130))) * *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,9);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0x11: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = ((double *)GEN_TOP((uVar3 * 0x10 + iVar18)));
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      fVar2 = ((float10)GEN_TOD(pow((float10)*pdVar5,(float10)*pdVar16)));
      *pdVar15 = (double)fVar2;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,10);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0x12: ;
    puVar17 = ((ulonglong *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    if ((int)puVar17[1] == 3) {
      *pdVar15 = gen_bits2d(*puVar17 ^ REFG(ulonglong, 0x110e610));
      *(undefined4 *)(pdVar15 + 1) = 3;
      goto switchD_00c038db_default;
    }
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = puVar17;
    if ((int)puVar17[1] == 3) {
LAB_00c03fbd: ;
      if (((int)puVar17[1] == 3) ||
         (((int)puVar17[1] == 4 && (uVar9 = F_00c00370((int)*puVar17 + 0x10,((undefined1 *)(gen_frame + 0x34))), uVar9 != 0)
          ))) {
        *pdVar15 = gen_bits2d(*(*(ulonglong * PTR32 *)(gen_frame + 0x10)) ^ REFG(ulonglong, 0x110e610));
        *(undefined4 *)(pdVar15 + 1) = 3;
        iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
        goto switchD_00c038db_default;
      }
    }
    else if (((int)puVar17[1] == 4) &&
            (uVar9 = F_00c00370((int)*puVar17 + 0x10,&(*(ulonglong *)(gen_frame + 0x1c))), uVar9 != 0)) {
      (*(ulonglong *)(gen_frame + 0x5c)) = (*(ulonglong *)(gen_frame + 0x1c));
      (*(undefined4 *)(gen_frame + 0x64)) = 3;
      (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = &(*(ulonglong *)(gen_frame + 0x5c));
      goto LAB_00c03fbd;
    }
    uVar9 = F_00c02b60(param_1,puVar17,0xb);
    if ((*((int *)GEN_TOP((uVar9 + 8))) == 0) &&
       (uVar9 = F_00c02b60(param_1,puVar17,0xb), *((int *)GEN_TOP((uVar9 + 8))) == 0)) {
      F_00c02a30(param_1,puVar17,puVar17);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    else {
      F_00c02d30(puVar17,puVar17,param_1,pdVar15,uVar9);
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0x13: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *((int *)GEN_TOP((iVar19 + 8 + iVar18)));
    if ((iVar4 == 0) || ((iVar4 == 1 && (*((int *)GEN_TOP((iVar19 + iVar18))) == 0)))) {
      *(undefined4 *)pdVar15 = 1;
      *(undefined4 *)(pdVar15 + 1) = 1;
    }
    else {
      *(undefined4 *)pdVar15 = 0;
      *(undefined4 *)(pdVar15 + 1) = 1;
    }
    goto switchD_00c038db_default;
  case 0x14: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *((int *)GEN_TOP((iVar19 + 8 + iVar18)));
    piVar7 = ((int *)GEN_TOP((iVar19 + iVar18)));
    if (iVar4 == 4) {
      dVar22 = (double)*((int *)GEN_TOP((*piVar7 + 0xc)));
      if (*((int *)GEN_TOP((*piVar7 + 0xc))) < 0) {
        dVar22 = GEN_X87(dVar22 + *(double *)&REFG(double, 0x10b8de8));
      }
      *pdVar15 = dVar22;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else if (iVar4 == 5) {
      uVar9 = F_00c05400(*piVar7);
      *pdVar15 = (double)(int)uVar9;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      uVar9 = F_00c03090(param_1,0xc,piVar7,&REFG(undefined, 0x110e488),pdVar15);
      if (uVar9 == 0) {
        F_00c02970(param_1,piVar7,((char *)REFP(0x1347948)));
      }
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    }
    goto switchD_00c038db_default;
  case 0x15: ;
    uVar3 = uVar9 >> 0xe & 0x1ff;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    F_00c03460(param_1,(uVar3 - (uVar9 >> 0x17)) + 1,uVar3);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x40))) <= *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x44)))) {
      F_00c01810(param_1);
    }
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar20 = iVar19 + iVar18;
    *((undefined4 *)GEN_TOP((iVar4 + iVar18))) = *((undefined4 *)GEN_TOP((iVar19 + iVar18)));
    *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar18))) = *((undefined4 *)GEN_TOP((iVar20 + 4)));
    *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar18))) = *((undefined4 *)GEN_TOP((iVar20 + 8)));
    goto switchD_00c038db_default;
  case 0x16: ;
    goto switchD_00c038db_caseD_16;
  case 0x17: ;
    uVar6 = uVar9 >> 0x17;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = uVar6 * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = (uVar9 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if ((*((int *)GEN_TOP((iVar4 + 8))) == *((int *)GEN_TOP((iVar18 + 8)))) &&
       (uVar9 = F_00c03370(param_1,iVar4,iVar18), uVar9 != 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    puVar14 = puVar14 + 1;
    goto switchD_00c038db_default;
  case 0x18: ;
    uVar6 = uVar9 >> 0xe;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = (uVar6 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = uVar9 * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = F_00c03260(param_1,iVar18,iVar4);
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 1;
    goto switchD_00c038db_default;
  case 0x19: ;
    uVar6 = uVar9 >> 0xe;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = (uVar6 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = uVar9 * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = F_00c032f0(iVar4,iVar18,param_1);
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 1;
    goto switchD_00c038db_default;
  case 0x1a: ;
    if ((*(int *)(pdVar15 + 1) == 0) || ((*(int *)(pdVar15 + 1) == 1 && (*(int *)pdVar15 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar9 >> 0xe & 0x1ff)) {
LAB_00c04601: ;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    break;
  case 0x1b: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *((int *)GEN_TOP((iVar19 + 8 + iVar18)));
    piVar7 = ((int *)GEN_TOP((iVar19 + iVar18)));
    if ((iVar4 == 0) || ((iVar4 == 1 && (*piVar7 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar9 >> 0xe & 0x1ff)) {
      *(int *)pdVar15 = *piVar7;
      *((int *)GEN_TOP(((int)pdVar15 + 4))) = piVar7[1];
      *(int *)(pdVar15 + 1) = piVar7[2];
      goto LAB_00c04601;
    }
    break;
  case 0x1c: ;
    iVar18 = (uVar9 >> 0xe & 0x1ff) - 1;
    if (uVar9 >> 0x17 != 0) {
      *((double * PTR32 *)GEN_TOP((param_1 + 8))) = pdVar15 + (uVar9 >> 0x17) * 2;
    }
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    uVar9 = F_00bb9430(param_1,pdVar15,iVar18);
    if (uVar9 == 0) {
      param_2 = param_2 + 1;
      goto LAB_00c0385c;
    }
    if (uVar9 - 1 != 0) {
      return uVar9 - 1;
    }
    if (-1 < iVar18) {
      *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8)));
    }
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    goto switchD_00c038db_default;
  case 0x1d: ;
    if (uVar9 >> 0x17 != 0) {
      *((double * PTR32 *)GEN_TOP((param_1 + 8))) = pdVar15 + (uVar9 >> 0x17) * 2;
    }
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    uVar9 = F_00bb9430(param_1,pdVar15,0xffffffff);
    if (uVar9 != 0) {
      if (uVar9 - 1 != 0) {
        return uVar9 - 1;
      }
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
      goto switchD_00c038db_default;
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
    puVar8 = ((undefined4 *)GEN_TOP(piVar7[1]));
    iVar18 = piVar7[-5];
    if (*((int *)GEN_TOP((param_1 + 0x68))) != 0) {
      F_00c05da0(param_1,piVar7[-6]);
    }
    iVar11 = piVar7[-5] + (*piVar7 - (int)((int)(uintptr_t)puVar8) >> 4) * 0x10;
    piVar7[-6] = iVar11;
    iVar13 = 0;
    *((int *)GEN_TOP((param_1 + 0xc))) = iVar11;
    (*(uint *)(gen_frame + 0x14)) = 0;
    if (puVar8 < *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)))) {
      iVar11 = 0;
      puVar12 = puVar8;
      do {
        *((undefined4 *)GEN_TOP((iVar11 + iVar18))) = *puVar12;
        *((undefined4 *)GEN_TOP((iVar11 + 4 + iVar18))) = puVar12[1];
        *((undefined4 *)GEN_TOP((iVar11 + 8 + iVar18))) = puVar12[2];
        iVar13 = (*(uint *)(gen_frame + 0x14)) + 1;
        iVar11 = iVar13 * 0x10;
        puVar12 = puVar8 + iVar13 * 4;
        (*(uint *)(gen_frame + 0x14)) = iVar13;
      } while (puVar12 < *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
    }
    iVar18 = iVar13 * 0x10 + iVar18;
    *((int *)GEN_TOP((param_1 + 8))) = iVar18;
    piVar7[-4] = iVar18;
    iVar18 = *((int *)GEN_TOP((param_1 + 0x18)));
    piVar7[-1] = piVar7[-1] + 1;
    piVar7[-3] = iVar18;
    *((int *)GEN_TOP((param_1 + 0x14))) = *((int *)GEN_TOP((param_1 + 0x14))) - 0x18;
    goto LAB_00c0385c;
  case 0x1e: ;
    goto switchD_00c038db_caseD_1e;
  case 0x1f: ;
    dVar22 = GEN_X87(pdVar15[4] + *pdVar15);
    if (*(double *)&REFG(undefined, 0x108bec8) < pdVar15[4]) {
      bVar21 = dVar22 <= pdVar15[2];
    }
    else {
      bVar21 = pdVar15[2] <= dVar22;
    }
    if (bVar21) {
      *pdVar15 = dVar22;
      *(undefined4 *)(pdVar15 + 1) = 3;
      pdVar15[6] = dVar22;
      *(undefined4 *)(pdVar15 + 7) = 3;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((uVar9 >> 0xe) - 0x1fffe);
    }
    goto switchD_00c038db_default;
  case 0x20: ;
    (*(double * PTR32 *)(gen_frame + 0xc)) = pdVar15 + 4;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    if (*(int *)(pdVar15 + 1) == 3) {
LAB_00c044cb: ;
      if (*(int *)(pdVar15 + 3) != 3) {
        if ((*(int *)(pdVar15 + 3) != 4) ||
           (uVar3 = F_00c00370(*(int *)(pdVar15 + 2) + 0x10,&(*(double *)(gen_frame + 0x2c))), uVar3 == 0)) {
          pcVar24 = ((char *)REFP(0x1347980));
          goto LAB_00c0452b;
        }
        pdVar15[2] = (*(double *)(gen_frame + 0x2c));
        *(undefined4 *)(pdVar15 + 3) = 3;
      }
      if ((*(int *)(pdVar15 + 5) != 3) &&
         ((*(double * PTR32 *)(gen_frame + 0xc)) = ((double *)GEN_TOP(F_00c02bc0((*(double * PTR32 *)(gen_frame + 0xc)),(*(double * PTR32 *)(gen_frame + 0xc))))), (*(double * PTR32 *)(gen_frame + 0xc)) == ((double *)GEN_TOP(0x0)))) {
        pcVar24 = ((char *)REFP(0x13479a0));
        goto LAB_00c0452b;
      }
    }
    else {
      if ((*(int *)(pdVar15 + 1) == 4) &&
         (uVar3 = F_00c00370(*(int *)pdVar15 + 0x10,&(*(double *)(gen_frame + 0x24))), uVar3 != 0)) {
        *pdVar15 = (*(double *)(gen_frame + 0x24));
        *(undefined4 *)(pdVar15 + 1) = 3;
        goto LAB_00c044cb;
      }
      pcVar24 = ((char *)REFP(0x1347958));
LAB_00c0452b: ;
      F_00c02740(param_1,pcVar24);
    }
    *pdVar15 = *pdVar15 - *(*(double * PTR32 *)(gen_frame + 0xc));
    *(undefined4 *)(pdVar15 + 1) = 3;
switchD_00c038db_caseD_16: ;
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + ((uVar9 >> 0xe) - 0x1fffe);
    goto switchD_00c038db_default;
  case 0x21: ;
    *(undefined4 *)(pdVar15 + 10) = *(undefined4 *)(pdVar15 + 4);
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x24)));
    *(undefined4 *)(pdVar15 + 0xb) = *(undefined4 *)(pdVar15 + 5);
    *(undefined4 *)(pdVar15 + 8) = *(undefined4 *)(pdVar15 + 2);
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x44))) = *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x14)));
    *(undefined4 *)(pdVar15 + 9) = *(undefined4 *)(pdVar15 + 3);
    *(undefined4 *)(pdVar15 + 6) = *(undefined4 *)pdVar15;
    *((undefined4 *)GEN_TOP(((int)pdVar15 + 0x34))) = *((undefined4 *)GEN_TOP(((int)pdVar15 + 4)));
    *(undefined4 *)(pdVar15 + 7) = *(undefined4 *)(pdVar15 + 1);
    *((double * PTR32 *)GEN_TOP((param_1 + 8))) = pdVar15 + 0xc;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    F_00bb9600(param_1,pdVar15 + 6,uVar9 >> 0xe & 0x1ff);
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    puVar8 = ((undefined4 *)GEN_TOP(((uVar3 + 3) * 0x10 + iVar18)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8)));
    if (puVar8[2] != 0) {
      puVar8[-4] = *puVar8;
      puVar8[-3] = puVar8[1];
      puVar8[-2] = puVar8[2];
      goto LAB_00c04601;
    }
    break;
  case 0x22: ;
    (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = ((ulonglong *)GEN_TOP((uVar9 >> 0x17)));
    uVar9 = uVar9 >> 0xe & 0x1ff;
    if ((*(ulonglong * PTR32 *)(gen_frame + 0x10)) == ((ulonglong *)GEN_TOP(0x0))) {
      (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = ((ulonglong *)GEN_TOP(((*((int *)GEN_TOP((param_1 + 8))) - (int)((int)(uintptr_t)pdVar15) >> 4) - 1)));
      *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8)));
    }
    if (uVar9 == 0) {
      uVar9 = *puVar14;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 2;
    }
    (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0));
    if (*(int *)(pdVar15 + 1) == 5) {
      iVar19 = *(int *)pdVar15;
      iVar4 = uVar9 * 0x32 - 0x32 + (int)(*(ulonglong * PTR32 *)(gen_frame + 0x10));
      if (*((int *)GEN_TOP((iVar19 + 0x1c))) < iVar4) {
        F_00c05640(param_1,iVar19,iVar4);
      }
      if (0 < (int)(*(ulonglong * PTR32 *)(gen_frame + 0x10))) {
        pdVar15 = pdVar15 + (int)((int)(uintptr_t)(*(ulonglong * PTR32 *)(gen_frame + 0x10))) * 2;
        do {
          puVar8 = ((undefined4 *)GEN_TOP(F_00c05310(param_1,iVar19,iVar4)));
          *puVar8 = *(undefined4 *)pdVar15;
          puVar8[1] = *((undefined4 *)GEN_TOP(((int)pdVar15 + 4)));
          iVar4 = iVar4 - 1;
          puVar8[2] = *(undefined4 *)(pdVar15 + 1);
          if (((3 < *(int *)(pdVar15 + 1)) && ((*((byte *)GEN_TOP((*(int *)pdVar15 + 5))) & 3) != 0)) &&
             ((*((byte *)GEN_TOP((iVar19 + 5))) & 4) != 0)) {
            F_00c01940(param_1,iVar19);
          }
          (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = ((ulonglong *)GEN_TOP(((int)(*(ulonglong * PTR32 *)(gen_frame + 0x10)) - 1)));
          pdVar15 = pdVar15 - 2;
        } while (0 < (int)(*(ulonglong * PTR32 *)(gen_frame + 0x10)));
      }
    }
    goto switchD_00c038db_default;
  case 0x23: ;
    F_00c05da0(param_1,pdVar15);
    goto switchD_00c038db_default;
  case 0x24: ;
    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0x10))) + 0x10))) + (uVar9 >> 0xe) * 4)));
    (*(uint *)(gen_frame + 0x14)) = (uint)*((byte *)GEN_TOP((iVar4 + 0x48)));
    uVar9 = F_00c05c10(param_1,(*(uint *)(gen_frame + 0x14)),*((undefined4 *)GEN_TOP((iVar11 + 0xc))));
    *((int *)GEN_TOP((uVar9 + 0x10))) = iVar4;
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = ((ulonglong *)GEN_TOP((uVar9 + 0x14)));
      do {
        uVar3 = *puVar14 >> 0x17;
        if (((byte)*puVar14 & 0x3f) == 4) {
          uVar3 = *((uint *)GEN_TOP((iVar11 + 0x14 + uVar3 * 4)));
        }
        else {
          uVar3 = F_00c05cb0(param_1,uVar3 * 0x10 + iVar18);
        }
        puVar14 = puVar14 + 1;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) - 1;
        *(uint *)(*(ulonglong * PTR32 *)(gen_frame + 0x10)) = uVar3;
        (*(ulonglong * PTR32 *)(gen_frame + 0x10)) = ((ulonglong *)GEN_TOP(((int)(*(ulonglong * PTR32 *)(gen_frame + 0x10)) + 4)));
      } while ((*(uint *)(gen_frame + 0x14)) != 0);
    }
    *(uint *)pdVar15 = uVar9;
    *(undefined4 *)(pdVar15 + 1) = 6;
    *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
    bVar21 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x44))) < *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
LAB_00c047c8: ;
    if (!bVar21) {
      F_00c01810(param_1);
    }
    iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0));
    goto switchD_00c038db_default;
  case 0x25: ;
    piVar7 = *((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
    iVar19 = (uVar9 >> 0x17) - 1;
    iVar20 = ((*piVar7 - piVar7[1] >> 4) - (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0x10))) + 0x49)))) - 1;
    if (iVar19 == -1) {
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
      if (*((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8))) <= iVar20 * 0x10) {
        F_00bb8d50(param_1,iVar20);
      }
      iVar18 = *((int *)GEN_TOP((param_1 + 0xc)));
      pdVar15 = ((double *)GEN_TOP((iVar4 + iVar18)));
      *((double * PTR32 *)GEN_TOP((param_1 + 8))) = pdVar15 + iVar20 * 2;
      iVar19 = iVar20;
    }
    (*(uint *)(gen_frame + 0x14)) = 0;
    if (0 < iVar19) {
      iVar4 = iVar20 * -0x10;
      pdVar15 = pdVar15 + 1;
      do {
        if ((int)(*(uint *)(gen_frame + 0x14)) < iVar20) {
          iVar10 = *piVar7 + iVar4;
          *(undefined4 *)(pdVar15 - 1) = *((undefined4 *)GEN_TOP((*piVar7 + iVar4)));
          *((undefined4 *)GEN_TOP(((int)pdVar15 - 4))) = *((undefined4 *)GEN_TOP((iVar10 + 4)));
          *(undefined4 *)pdVar15 = *((undefined4 *)GEN_TOP((iVar10 + 8)));
        }
        else {
          *(undefined4 *)pdVar15 = 0;
        }
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        iVar4 = iVar4 + 0x10;
        pdVar15 = pdVar15 + 2;
      } while ((int)(*(uint *)(gen_frame + 0x14)) < iVar19);
    }
  default: ;
    goto switchD_00c038db_default;
  }
  (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar14;
  puVar14 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 1;
  goto switchD_00c038db_default;
switchD_00c038db_caseD_1e: ;
  if (uVar9 >> 0x17 != 0) {
    *((double * PTR32 *)GEN_TOP((param_1 + 8))) = pdVar15 + (uVar9 >> 0x17) * 2 - 2;
  }
  if (*((int *)GEN_TOP((param_1 + 0x68))) != 0) {
    F_00c05da0(param_1,iVar18);
  }
  *((uint * PTR32 *)GEN_TOP((param_1 + 0x18))) = puVar14;
  uVar9 = F_00bb90b0(param_1,pdVar15);
  param_2 = param_2 - 1;
  if (param_2 == 0) {
    return uVar9;
  }
  if (uVar9 != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8)));
  }
  goto LAB_00c0385c;
}

/* ref: Global::HashNum */
GEN_OWN GEN_NOFRAME uint F_00c04a40(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc04a40u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  int in_esi = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  if ((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
      ((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || (*(double *)&gen_args[0]) == *(double *)&REFG(undefined, 0x108bec8))) {
    return *((uint *)GEN_TOP((in_esi + 0x10)));
  }
  return ((uint)((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 4)) + (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0))) % ((1 << GEN_SHC(*((byte *)GEN_TOP((in_esi + 7))), *((byte *)GEN_TOP((in_esi + 7))))) - 1U | 1))
         * 0x20 + *((int *)GEN_TOP((in_esi + 0x10)));
}

/* ref: Global::MainPosition */
GEN_OWN GEN_NOFRAME uint F_00c04a80(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(double * in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc04a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(double * in_edx = (double *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_edx + 1))) {
  case 1: ;
    return ((1 << GEN_SHC(*((byte *)GEN_TOP((in_eax + 7))), *((byte *)GEN_TOP((in_eax + 7))))) - 1U & *(uint *)in_edx) * 0x20 +
           *((int *)GEN_TOP((in_eax + 0x10)));
  default: ;
    return (*(uint *)((int)(uintptr_t)in_edx) % ((1 << GEN_SHC(*((byte *)GEN_TOP((in_eax + 7))), *((byte *)GEN_TOP((in_eax + 7))))) - 1U | 1)) * 0x20 +
           *((int *)GEN_TOP((in_eax + 0x10)));
  case 3: ;
    uVar1 = F_00c04a40(in_eax,*in_edx);
    return uVar1;
  case 4: ;
    return ((1 << GEN_SHC(*((byte *)GEN_TOP((in_eax + 7))), *((byte *)GEN_TOP((in_eax + 7))))) - 1U & *((uint *)GEN_TOP((*(int *)in_edx + 8)))) * 0x20 +
           *((int *)GEN_TOP((in_eax + 0x10)));
  }
}

/* ref: Global::ArrayIndex */
GEN_OWN GEN_NOFRAME uint F_00c04b10(GEN_P(double * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc04b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(double * in_eax = (double *)(uintptr_t)gen_a0;)
  double dVar1;
  bool bVar2;
  double dVar3;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar1 = *in_eax;
    dVar3 = (double)(int)ROUND(dVar1);
    bVar2 = GEN_ISNAN(dVar3) || GEN_ISNAN(dVar1);
    if (bVar2 != (bVar2 || dVar3 == dVar1)) {
      return (int)ROUND(dVar1);
    }
  }
  return 0xffffffff;
}

/* ref: Global::FindIndex */
GEN_OWN GEN_NOFRAME uint F_00c04b50(GEN_P(double * in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc04b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(double * in_edi = (double *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_edi + 1) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(in_edi + 1) == 3) {
    dVar2 = *in_edi;
    iVar1 = (int)ROUND(dVar2);
    bVar5 = GEN_ISNAN((double)iVar1) || GEN_ISNAN(dVar2);
    if (((bVar5 != (bVar5 || (double)iVar1 == dVar2)) && (0 < iVar1)) &&
       (iVar1 <= *((int *)GEN_TOP((param_3 + 0x1c))))) {
      return iVar1 - 1;
    }
  }
  uVar3 = F_00c04a80(param_3,in_edi);
  while( true ) {
    uVar4 = F_00c00310(((int *)GEN_TOP((uVar3 + 0x10))),in_edi);
    if ((uVar4 != 0) ||
       (((*((int *)GEN_TOP((uVar3 + 0x18))) == 0xb && (3 < *(int *)(in_edi + 1))) &&
        (*((int *)GEN_TOP((uVar3 + 0x10))) == *(int *)in_edi)))) break;
    uVar3 = *((uint *)GEN_TOP((uVar3 + 0x1c)));
    if (uVar3 == 0) {
      F_00c02740(param_2,((char *)REFP(0x13479bc)));
      return 0;
    }
  }
  return ((int)(uVar3 - *((int *)GEN_TOP((param_3 + 0x10)))) >> 5) + *((int *)GEN_TOP((param_3 + 0x1c)));
}

/* ref: FUN_00c04c10 */
GEN_OWN GEN_NOFRAME uint F_00c04c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc04c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  uVar2 = F_00c04b50(param_3,param_1,param_2);
  iVar6 = *((int *)GEN_TOP((param_2 + 0x1c)));
  iVar3 = uVar2 + 1;
  if (iVar3 < iVar6) {
    piVar5 = ((int *)GEN_TOP((iVar3 * 0x10 + 8 + *((int *)GEN_TOP((param_2 + 0xc))))));
    do {
      if (*piVar5 != 0) {
        *(undefined4 *)(param_3 + 1) = 3;
        *param_3 = (double)(iVar3 + 1);
        puVar4 = ((undefined4 *)GEN_TOP((iVar3 * 0x10 + *((int *)GEN_TOP((param_2 + 0xc))))));
        *(undefined4 *)(param_3 + 2) = *puVar4;
        *((undefined4 *)GEN_TOP(((int)param_3 + 0x14))) = puVar4[1];
        *(undefined4 *)(param_3 + 3) = puVar4[2];
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar3 < iVar6);
  }
  iVar3 = iVar3 - iVar6;
  iVar6 = 1 << GEN_SHC(*((byte *)GEN_TOP((param_2 + 7))), *((byte *)GEN_TOP((param_2 + 7))));
  if (iVar3 < iVar6) {
    iVar1 = *((int *)GEN_TOP((param_2 + 0x10)));
    piVar5 = ((int *)GEN_TOP((iVar3 * 0x20 + 8 + iVar1)));
    do {
      if (*piVar5 != 0) {
        iVar3 = iVar3 * 0x20;
        *(undefined4 *)param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x10 + iVar3)));
        *((undefined4 *)GEN_TOP(((int)param_3 + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 0x14 + iVar3)));
        *(undefined4 *)(param_3 + 1) = *((undefined4 *)GEN_TOP((iVar1 + 0x18 + iVar3)));
        iVar6 = *((int *)GEN_TOP((param_2 + 0x10))) + iVar3;
        *(undefined4 *)(param_3 + 2) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + iVar3)));
        *((undefined4 *)GEN_TOP(((int)param_3 + 0x14))) = *((undefined4 *)GEN_TOP((iVar6 + 4)));
        *(undefined4 *)(param_3 + 3) = *((undefined4 *)GEN_TOP((iVar6 + 8)));
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar3 < iVar6);
  }
  return 0;
}

/* ref: Global::ComputeSizes */
GEN_OWN GEN_NOFRAME uint F_00c04cf0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc04cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_2;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  uVar2 = 1;
  if (0 < (int)*param_2) {
    uVar3 = 0;
    param_2 = (uint *)in_eax;
    do {
      if ((0 < (int)*param_2) && (uVar4 = uVar4 + *param_2, (int)uVar2 / 2 < (int)uVar4)) {
        uVar3 = uVar4;
        uVar5 = uVar2;
      }
      if (uVar4 == *puVar1) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 * 2;
    } while ((int)uVar2 / 2 < (int)*puVar1);
  }
  *puVar1 = uVar5;
  return uVar3;
}

/* ref: Global::CountInt */
GEN_OWN GEN_NOFRAME uint F_00c04d50(GEN_P(double * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc04d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(double * in_eax = (double *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar3 = *in_eax;
    iVar2 = (int)ROUND(dVar3);
    bVar5 = GEN_ISNAN((double)iVar2) || GEN_ISNAN(dVar3);
    if (((bVar5 != (bVar5 || (double)iVar2 == dVar3)) && (0 < iVar2)) && (iVar2 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar2 - 1);
      piVar1 = ((int *)GEN_TOP((param_2 + 4 + uVar4 * 4)));
      *piVar1 = *piVar1 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: Global::NumUseArray */
GEN_OWN GEN_NOFRAME uint F_00c04db0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc04db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint local_4;
  
  iVar6 = 0;
  iVar4 = 1;
  local_4 = 0;
  iVar2 = 1;
  do {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x1c)));
    iVar3 = 0;
    if (iVar1 < iVar2) {
      if (iVar1 < iVar4) {
        return local_4;
      }
LAB_00c04de1: ;
      iVar1 = (iVar1 - iVar4) + 1;
      piVar5 = ((int *)GEN_TOP((iVar4 * 0x10 - 8 + *((int *)GEN_TOP((param_1 + 0xc))))));
      iVar4 = iVar4 + iVar1;
      do {
        if (*piVar5 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar5 = piVar5 + 4;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
    }
    else {
      iVar1 = iVar2;
      if (iVar4 <= iVar2) goto LAB_00c04de1;
    }
    piVar5 = ((int *)GEN_TOP((param_2 + iVar6 * 4)));
    *piVar5 = *piVar5 + iVar3;
    local_4 = local_4 + iVar3;
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 * 2;
    if (0x1a < iVar6) {
      return local_4;
    }
  } while( true );
}

/* ref: Global::NumUseHash */
GEN_OWN GEN_FRAME uint F_00c04e30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc04e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_1c;
  uint local_18;
  
  iVar5 = 1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 7))), *((byte *)GEN_TOP((param_1 + 7))));
  local_18 = 0;
  local_1c = 0;
  if (iVar5 == 0) {
    *param_3 = *param_3;
    return 0;
  }
  iVar6 = iVar5 << 5;
  do {
    iVar6 = iVar6 - 0x20;
    iVar3 = *((int *)GEN_TOP((param_1 + 0x10))) + iVar6;
    iVar5 = iVar5 - 1;
    if (*((int *)GEN_TOP((iVar3 + 8))) != 0) {
      if (*((int *)GEN_TOP((iVar3 + 0x18))) == 3) {
        dVar2 = *((double *)GEN_TOP((iVar3 + 0x10)));
        iVar3 = (int)ROUND(dVar2);
        bVar7 = GEN_ISNAN((double)iVar3) || GEN_ISNAN(dVar2);
        if (((bVar7 == (bVar7 || (double)iVar3 == dVar2)) || (iVar3 < 1)) || (0x4000000 < iVar3))
        goto LAB_00c04ec6;
        uVar4 = F_00c002e0(iVar3 - 1);
        piVar1 = ((int *)GEN_TOP((param_2 + 4 + uVar4 * 4)));
        *piVar1 = *piVar1 + 1;
        iVar3 = 1;
      }
      else {
LAB_00c04ec6: ;
        iVar3 = 0;
      }
      local_1c = local_1c + iVar3;
      local_18 = local_18 + 1;
    }
    if (iVar5 == 0) {
      *param_3 = *param_3 + local_1c;
      return local_18;
    }
  } while( true );
}

/* ref: Global::SetArrayVector */
GEN_OWN GEN_NOFRAME uint F_00c04f00(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc04f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (in_edi + 1U < 0x10000000) {
    uVar1 = F_00c11930(in_eax,*((undefined4 *)GEN_TOP((in_esi + 0xc))),*((int *)GEN_TOP((in_esi + 0x1c))) << 4,
                          in_edi << 4);
  }
  else {
    uVar1 = F_00c11910(in_eax);
  }
  iVar2 = *((int *)GEN_TOP((in_esi + 0x1c)));
  *((uint *)GEN_TOP((in_esi + 0xc))) = uVar1;
  if (iVar2 < in_edi) {
    uVar1 = iVar2 << 4;
    iVar2 = in_edi - iVar2;
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0xc))) + 8 + uVar1))) = 0;
      uVar1 = uVar1 + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  *((int *)GEN_TOP((in_esi + 0x1c))) = in_edi;
  return uVar1;
}

/* ref: Global::SetNodeVector */
GEN_OWN GEN_NOFRAME uint F_00c04f60(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc04f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (in_eax == 0) {
    *((undefined * PTR32 *)GEN_TOP((in_edi + 0x10))) = &REFG(undefined, 0x110e630);
    *((undefined1 *)GEN_TOP((in_edi + 7))) = 0;
    *((undefined4 *)GEN_TOP((in_edi + 0x14))) = *((undefined4 *)GEN_TOP((in_edi + 0x10)));
    return 0;
  }
  uVar1 = F_00c002e0(in_eax - 1);
  if (0x1a < (int)(uVar1 + 1)) {
    F_00c02740(param_3,((char *)REFP(0x13479d4)));
  }
  bVar2 = (byte)(uVar1 + 1);
  iVar5 = 1 << GEN_SHC(bVar2, bVar2);
  if (iVar5 + 1U < 0x8000000) {
    uVar1 = F_00c11930(param_3,0,0,iVar5 << 5);
  }
  else {
    uVar1 = F_00c11910(param_3);
  }
  *((uint *)GEN_TOP((in_edi + 0x10))) = uVar1;
  if (0 < iVar5) {
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      uVar1 = *((int *)GEN_TOP((in_edi + 0x10))) + iVar3;
      iVar3 = iVar3 + 0x20;
      iVar4 = iVar4 - 1;
      *((undefined4 *)GEN_TOP((uVar1 + 0x1c))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 8))) = 0;
    } while (iVar4 != 0);
  }
  *((byte *)GEN_TOP((in_edi + 7))) = bVar2;
  *((int *)GEN_TOP((in_edi + 0x14))) = iVar5 * 0x20 + *((int *)GEN_TOP((in_edi + 0x10)));
  return uVar1;
}

/* ref: Global::LuaH_New */
GEN_OWN GEN_NOFRAME uint F_00c05020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint in_esi;
  
  in_esi = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,in_esi,5);
  *((undefined4 *)GEN_TOP((in_esi + 8))) = 0;
  *((undefined1 *)GEN_TOP((in_esi + 6))) = 0xff;
  *((undefined4 *)GEN_TOP((in_esi + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_esi + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP((in_esi + 7))) = 0;
  *((undefined * PTR32 *)GEN_TOP((in_esi + 0x10))) = &REFG(undefined, 0x110e630);
  F_00c04f00(param_1,in_esi,param_2);
  F_00c04f60(param_3,in_esi,param_1);
  return in_esi;
}

/* ref: Global::LuaH_Free */
GEN_OWN GEN_NOFRAME uint F_00c05080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_2 + 0x10))) != &REFG(undefined, 0x110e630)) {
    F_00c11930(param_1,*((undefined * PTR32 *)GEN_TOP((param_2 + 0x10))),
                  (1 << GEN_SHC(*((byte *)GEN_TOP((param_2 + 7))), *((byte *)GEN_TOP((param_2 + 7))))) << 5,0);
  }
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0xc))),*((int *)GEN_TOP((param_2 + 0x1c))) << 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x20,0);
  return uVar1;
}

/* ref: Global::LuaH_GetNum */
GEN_OWN GEN_NOFRAME uint F_00c05110(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  bool bVar2;
  double dVar3;
  int local_8;
  int uStack_4;
  
  if (param_2 - 1U < *((uint *)GEN_TOP((param_1 + 0x1c)))) {
    return *((int *)GEN_TOP((param_1 + 0xc))) - 0x10 + param_2 * 0x10;
  }
  dVar3 = (double)param_2;
  if ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) ==
      ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar3 == *(double *)&REFG(undefined, 0x108bec8))) {
    local_8 = (int)(ulonglong)gen_d2bits(dVar3);
    uStack_4 = (int)((ulonglong)gen_d2bits(dVar3) >> 0x20);
    uVar1 = ((uint)(uStack_4 + local_8) % ((1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 7))), *((byte *)GEN_TOP((param_1 + 7))))) - 1U | 1)) * 0x20
            + *((int *)GEN_TOP((param_1 + 0x10)));
  }
  else {
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x10)));
  }
  while ((*((int *)GEN_TOP((uVar1 + 0x18))) != 3 ||
         (bVar2 = GEN_ISNAN(*((double *)GEN_TOP((uVar1 + 0x10)))) || GEN_ISNAN(dVar3),
         bVar2 == (bVar2 || *((double *)GEN_TOP((uVar1 + 0x10))) == dVar3)))) {
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x1c)));
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: Global::LuaH_GetStr */
GEN_OWN GEN_NOFRAME uint F_00c051b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc051b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 7))), *((byte *)GEN_TOP((param_1 + 7))))) - 1U & *((uint *)GEN_TOP((param_2 + 8)))) * 0x20 +
          *((int *)GEN_TOP((param_1 + 0x10)));
  while ((*((int *)GEN_TOP((uVar1 + 0x18))) != 4 || (*((int *)GEN_TOP((uVar1 + 0x10))) != param_2))) {
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x1c)));
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: Global::LuaH_Get */
GEN_OWN GEN_NOFRAME uint F_00c051f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc051f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    return 0x110e488;
  }
  if (iVar1 == 3) {
    dVar5 = (double)(int)ROUND(*param_2);
    bVar4 = GEN_ISNAN(dVar5) || GEN_ISNAN(*param_2);
    if (bVar4 != (bVar4 || dVar5 == *param_2)) {
      uVar2 = F_00c05110(param_1,(int)ROUND(*param_2));
      return uVar2;
    }
  }
  else if (iVar1 == 4) {
    uVar2 = F_00c051b0(param_1,*(undefined4 *)param_2);
    return uVar2;
  }
  uVar2 = F_00c04a80(param_1,param_2);
  do {
    uVar3 = F_00c00310(uVar2 + 0x10,param_2);
    if (uVar3 != 0) {
      return uVar2;
    }
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x1c)));
  } while (uVar2 != 0);
  return 0x110e488;
}

/* ref: Global::LuaH_Set */
GEN_OWN GEN_NOFRAME uint F_00c052a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc052a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  
  puVar1 = ((undefined *)GEN_TOP(F_00c051f0(param_2,param_3)));
  *((undefined1 *)GEN_TOP((param_2 + 6))) = 0;
  if (puVar1 != &REFG(undefined, 0x110e488)) {
    return (uint)puVar1;
  }
  if (*(int *)(param_3 + 1) == 0) {
    pcVar3 = ((char *)REFP(0x13479e4));
  }
  else {
    if ((*(int *)(param_3 + 1) != 3) || (!GEN_ISNAN(*param_3))) goto LAB_00c052f3;
    pcVar3 = ((char *)REFP(0x13479f8));
  }
  F_00c02740(param_1,pcVar3);
LAB_00c052f3: ;
  uVar2 = F_00c057c0(param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00c05310 */
GEN_OWN GEN_NOFRAME uint F_00c05310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP(F_00c05110(param_2,param_3)));
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    (*(double *)(gen_frame + 0x0)) = (double)param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    puVar1 = ((undefined *)GEN_TOP(F_00c057c0(param_1,param_2,&(*(double *)(gen_frame + 0x0)))));
  }
  return (uint)puVar1;
}

/* ref: Global::LuaH_GetN */
GEN_OWN GEN_NOFRAME uint F_00c05400(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc05400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x1c)));
  if ((uVar3 == 0) || (*((int *)GEN_TOP((uVar3 * 0x10 - 8 + *((int *)GEN_TOP((param_1 + 0xc)))))) != 0)) {
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) != &REFG(undefined, 0x110e630)) {
      uVar2 = F_00c05110(param_1,uVar3 + 1);
      iVar1 = *((int *)GEN_TOP((uVar2 + 8)));
      uVar2 = uVar3 + 1;
      while( true ) {
        if (iVar1 == 0) {
          uVar5 = uVar2 - uVar3;
          while (1 < uVar5) {
            uVar7 = uVar3 + uVar2 >> 1;
            uVar5 = F_00c05110(param_1,uVar7);
            uVar4 = uVar7;
            if (*((int *)GEN_TOP((uVar5 + 8))) == 0) {
              uVar4 = uVar3;
              uVar2 = uVar7;
            }
            uVar3 = uVar4;
            uVar5 = uVar2 - uVar4;
          }
          return uVar3;
        }
        uVar5 = uVar2 * 2;
        if (0x7ffffffd < uVar5) break;
        uVar3 = F_00c05110(param_1,uVar5);
        iVar1 = *((int *)GEN_TOP((uVar3 + 8)));
        uVar3 = uVar2;
        uVar2 = uVar5;
      }
      iVar6 = 1;
      uVar3 = F_00c05110(param_1,1);
      iVar1 = *((int *)GEN_TOP((uVar3 + 8)));
      while (iVar1 != 0) {
        iVar6 = iVar6 + 1;
        uVar3 = F_00c05110(param_1,iVar6);
        iVar1 = *((int *)GEN_TOP((uVar3 + 8)));
      }
      return iVar6 - 1;
    }
  }
  else {
    uVar2 = uVar3;
    uVar4 = 0;
    uVar5 = uVar3;
    while (uVar3 = uVar4, 1 < uVar5) {
      uVar4 = uVar3 + uVar2 >> 1;
      if (*((int *)GEN_TOP((uVar4 * 0x10 - 8 + *((int *)GEN_TOP((param_1 + 0xc)))))) == 0) {
        uVar2 = uVar4;
        uVar4 = uVar3;
      }
      uVar5 = uVar2 - uVar4;
    }
  }
  return uVar3;
}

/* ref: Global::Resize_00c05460 */
GEN_OWN GEN_NOFRAME uint F_00c05460(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x24, 12);
  byte bVar1;
  undefined * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  double * pdVar9;
  char * pcVar10;
  
  bVar1 = *((byte *)GEN_TOP((in_eax + 7)));
  iVar7 = *((int *)GEN_TOP((in_eax + 0x1c)));
  puVar2 = *((undefined * PTR32 *)GEN_TOP((in_eax + 0x10)));
  if (iVar7 < param_3) {
    F_00c04f00(param_2,in_eax,param_3);
  }
  F_00c04f60(param_4,in_eax,param_2);
  if (param_3 < iVar7) {
    iVar3 = param_3 << 4;
    uVar5 = param_3 + 1;
    (*(int *)(gen_frame + 0x0)) = iVar7 - param_3;
    *((int *)GEN_TOP((in_eax + 0x1c))) = param_3;
    uVar8 = uVar5;
    param_3 = iVar3;
    do {
      puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_eax + 0xc))) + param_3)));
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_eax + 0xc))) + 8 + param_3))) != 0) {
        puVar4 = ((undefined4 *)GEN_TOP(F_00c05110(in_eax,uVar8)));
        if (puVar4 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          (*(double *)(gen_frame + 0x14)) = (double)(int)uVar8;
          (*(undefined4 *)(gen_frame + 0x1c)) = 3;
          puVar4 = ((undefined4 *)GEN_TOP(F_00c057c0(param_2,in_eax,&(*(double *)(gen_frame + 0x14)))));
        }
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
      }
      param_3 = param_3 + 0x10;
      uVar8 = uVar8 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    if (uVar5 < 0x10000000) {
      uVar5 = F_00c11930(param_2,*((undefined4 *)GEN_TOP((in_eax + 0xc))),iVar7 << 4,iVar3);
      *((uint *)GEN_TOP((in_eax + 0xc))) = uVar5;
    }
    else {
      uVar5 = F_00c11910(param_2);
      *((uint *)GEN_TOP((in_eax + 0xc))) = uVar5;
    }
  }
  uVar5 = 1 << GEN_SHC(bVar1, bVar1);
  iVar7 = uVar5 - 1;
  if (-1 < iVar7) {
    pdVar9 = (double *)(puVar2 + iVar7 * 0x20 + 0x10);
    do {
      if (*(int *)(pdVar9 - 1) != 0) {
        puVar6 = ((undefined4 *)GEN_TOP(F_00c051f0(in_eax,pdVar9)));
        *((undefined1 *)GEN_TOP((in_eax + 6))) = 0;
        if (puVar6 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          if (*(int *)(pdVar9 + 1) == 0) {
            pcVar10 = ((char *)REFP(0x13479e4));
LAB_00c055e1: ;
            F_00c02740(param_2,pcVar10);
          }
          else if ((*(int *)(pdVar9 + 1) == 3) && (GEN_ISNAN(*pdVar9))) {
            pcVar10 = ((char *)REFP(0x13479f8));
            goto LAB_00c055e1;
          }
          puVar6 = ((undefined4 *)GEN_TOP(F_00c057c0(param_2,in_eax,pdVar9)));
        }
        *puVar6 = *(undefined4 *)(pdVar9 - 2);
        puVar6[1] = *((undefined4 *)GEN_TOP(((int)pdVar9 - 0xc)));
        puVar6[2] = *(undefined4 *)(pdVar9 - 1);
      }
      iVar7 = iVar7 - 1;
      pdVar9 = pdVar9 - 4;
    } while (-1 < iVar7);
  }
  if (puVar2 != &REFG(undefined, 0x110e630)) {
    uVar5 = F_00c11930(param_2,puVar2,uVar5 << 5,0);
  }
  return uVar5;
}

/* ref: Global::LuaH_ResizeArray */
GEN_OWN GEN_NOFRAME uint F_00c05640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_2 + 0x10))) == &REFG(undefined, 0x110e630)) {
    uVar1 = F_00c05460(param_2,param_1,param_3,0);
    return uVar1;
  }
  uVar1 = F_00c05460(param_2,param_1,param_3,1 << GEN_SHC(*((byte *)GEN_TOP((param_2 + 7))), *((byte *)GEN_TOP((param_2 + 7)))));
  return uVar1;
}

/* ref: Global::Rehash */
GEN_OWN GEN_NOFRAME uint F_00c05690(GEN_P(undefined4 in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x7c, 4);
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  ((int *)(gen_frame + 0x14))[2] = 0;
  ((int *)(gen_frame + 0x14))[3] = 0;
  ((int *)(gen_frame + 0x14))[4] = 0;
  ((int *)(gen_frame + 0x14))[5] = 0;
  ((int *)(gen_frame + 0x14))[6] = 0;
  ((int *)(gen_frame + 0x14))[7] = 0;
  ((int *)(gen_frame + 0x14))[8] = 0;
  ((int *)(gen_frame + 0x14))[9] = 0;
  ((int *)(gen_frame + 0x14))[10] = 0;
  ((int *)(gen_frame + 0x14))[0xb] = 0;
  ((int *)(gen_frame + 0x14))[0xc] = 0;
  ((int *)(gen_frame + 0x14))[0xd] = 0;
  ((int *)(gen_frame + 0x14))[0xe] = 0;
  ((int *)(gen_frame + 0x14))[0xf] = 0;
  ((int *)(gen_frame + 0x14))[0x10] = 0;
  ((int *)(gen_frame + 0x14))[0x11] = 0;
  ((int *)(gen_frame + 0x14))[0x12] = 0;
  ((int *)(gen_frame + 0x14))[0x13] = 0;
  ((int *)(gen_frame + 0x14))[0x14] = 0;
  ((int *)(gen_frame + 0x14))[0x15] = 0;
  ((int *)(gen_frame + 0x14))[0x16] = 0;
  ((int *)(gen_frame + 0x14))[0x17] = 0;
  ((int *)(gen_frame + 0x14))[0x18] = 0;
  ((int *)(gen_frame + 0x14))[0x19] = 0;
  uVar2 = F_00c04db0(in_edi,&(*(undefined4 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  uVar3 = F_00c04e30(in_edi,&(*(undefined4 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x0)));
  if (*(int *)(param_3 + 1) == 3) {
    dVar1 = *param_3;
    (*(double *)(gen_frame + 0x8)) = dVar1;
    iVar5 = (int)ROUND(dVar1);
    (*(int *)(gen_frame + 0x4)) = iVar5;
    bVar6 = GEN_ISNAN((double)iVar5) || GEN_ISNAN(dVar1);
    if (((bVar6 != (bVar6 || (double)iVar5 == dVar1)) && (0 < iVar5)) && (iVar5 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar5 - 1);
      ((int *)(gen_frame + 0x14))[(int)(uVar4)] = ((int *)(gen_frame + 0x14))[(int)(uVar4)] + 1;
      iVar5 = 1;
      goto LAB_00c0577f;
    }
  }
  iVar5 = 0;
LAB_00c0577f: ;
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + iVar5;
  uVar4 = F_00c04cf0(&(*(undefined4 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x0)));
  uVar2 = F_00c05460(in_edi,param_2,(*(uint *)(gen_frame + 0x0)),((uVar2 + uVar3) - uVar4) + 1);
  return uVar2;
}

/* ref: Global::NewKey */
GEN_OWN GEN_NOFRAME uint F_00c057c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc057c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  uint uVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  
  puVar2 = ((undefined8 *)GEN_TOP(F_00c04a80(param_2,param_3)));
  if ((*(int *)(puVar2 + 1) == 0) && (puVar5 = puVar2, puVar2 != (undefined8 *)&REFG(undefined, 0x110e630))) {
LAB_00c05886: ;
    *(int *)(puVar5 + 2) = *param_3;
    *((int *)GEN_TOP(((int)puVar5 + 0x14))) = param_3[1];
    *(int *)(puVar5 + 3) = param_3[2];
    if (((3 < param_3[2]) && ((*((byte *)GEN_TOP((*param_3 + 5))) & 3) != 0)) &&
       ((*((byte *)GEN_TOP((param_2 + 5))) & 4) != 0)) {
      F_00c01940(param_1,param_2);
    }
    return (uint)puVar5;
  }
  if (*((uint *)GEN_TOP((param_2 + 0x10))) < *((uint *)GEN_TOP((param_2 + 0x14)))) {
    do {
      *((int *)GEN_TOP((param_2 + 0x14))) = *((int *)GEN_TOP((param_2 + 0x14))) - 0x20;
      puVar5 = *((undefined8 * PTR32 *)GEN_TOP((param_2 + 0x14)));
      if (*(int *)(puVar5 + 3) == 0) {
        if (puVar5 == ((undefined8 *)GEN_TOP(0x0))) goto LAB_00c05812;
        puVar4 = ((undefined8 *)GEN_TOP(F_00c04a80(param_2,puVar2 + 2)));
        if (puVar4 == puVar2) {
          *((undefined4 *)GEN_TOP(((int)puVar5 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)puVar2 + 0x1c)));
          *((undefined8 * PTR32 *)GEN_TOP(((int)puVar2 + 0x1c))) = puVar5;
        }
        else {
          puVar1 = *((undefined8 * PTR32 *)GEN_TOP(((int)puVar4 + 0x1c)));
          while (puVar1 != puVar2) {
            puVar4 = *((undefined8 * PTR32 *)GEN_TOP(((int)puVar4 + 0x1c)));
            puVar1 = *((undefined8 * PTR32 *)GEN_TOP(((int)puVar4 + 0x1c)));
          }
          *((undefined8 * PTR32 *)GEN_TOP(((int)puVar4 + 0x1c))) = puVar5;
          *puVar5 = *puVar2;
          puVar5[1] = puVar2[1];
          puVar5[2] = puVar2[2];
          puVar5[3] = puVar2[3];
          *((undefined4 *)GEN_TOP(((int)puVar2 + 0x1c))) = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          puVar5 = puVar2;
        }
        goto LAB_00c05886;
      }
    } while (*((undefined8 * PTR32 *)GEN_TOP((param_2 + 0x10))) < puVar5);
  }
  *((int *)GEN_TOP((param_2 + 0x14))) = *((int *)GEN_TOP((param_2 + 0x14))) - 0x20;
LAB_00c05812: ;
  F_00c05690(param_2,param_1,param_3);
  uVar3 = F_00c052a0(param_1,param_2,param_3);
  return uVar3;
}

/* ref: Global::LuaH_SetStr */
GEN_OWN GEN_NOFRAME uint F_00c058d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc058d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP(F_00c051b0(param_2,param_3)));
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    ((undefined4 *)(gen_frame + 0x0))[0] = param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    puVar1 = ((undefined *)GEN_TOP(F_00c057c0(param_1,param_2,((undefined4 *)(gen_frame + 0x0)))));
  }
  return (uint)puVar1;
}

/* ref: Global::LuaS_Resize */
GEN_OWN GEN_NOFRAME uint F_00c05920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_4;
  
  uVar6 = *((uint *)GEN_TOP((param_1 + 0x10)));
  if (*((char *)GEN_TOP((uVar6 + 0x15))) != '\x02') {
    if (param_2 + 1U < 0x40000000) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00c11930(param_1,0,0,param_2 * 4)));
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(F_00c11910(param_1)));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
    iVar5 = param_2;
    puVar7 = puVar3;
    if (0 < param_2) {
      for (; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    local_4 = 0;
    if (0 < piVar1[2]) {
      do {
        piVar4 = *((int * PTR32 *)GEN_TOP((*piVar1 + local_4 * 4)));
        if (piVar4 != ((int *)GEN_TOP(0x0))) {
          do {
            piVar2 = ((int *)GEN_TOP(*piVar4));
            uVar6 = piVar4[2] & param_2 - 1U;
            *piVar4 = puVar3[uVar6];
            puVar3[uVar6] = piVar4;
            piVar4 = piVar2;
          } while (piVar2 != ((int *)GEN_TOP(0x0)));
        }
        local_4 = local_4 + 1;
      } while (local_4 < piVar1[2]);
    }
    uVar6 = F_00c11930(param_1,*piVar1,piVar1[2] * 4,0);
    *piVar1 = (int)puVar3;
    piVar1[2] = param_2;
  }
  return uVar6;
}

/* ref: Global::NewLStr */
GEN_OWN GEN_NOFRAME uint F_00c059e0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc059e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (0xffffffed < in_edi + 1U) {
    F_00c11910(param_2);
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00c11930(param_2,0,0,in_edi + 0x11)));
  puVar2[3] = in_edi;
  puVar2[2] = param_4;
  *((byte *)GEN_TOP(((int)puVar2 + 5))) = *((byte *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + 0x14))) & 3;
  *(undefined1 *)(puVar2 + 1) = 4;
  *((undefined1 *)GEN_TOP(((int)puVar2 + 6))) = 0;
  F_00c46aa0(puVar2 + 4,param_3,in_edi);
  *((undefined1 *)GEN_TOP(((int)puVar2 + in_edi + 0x10))) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 0x10)));
  uVar3 = param_4 & piVar1[2] - 1U;
  *puVar2 = *((undefined4 *)GEN_TOP((*piVar1 + uVar3 * 4)));
  *((undefined4 * PTR32 *)GEN_TOP((*piVar1 + uVar3 * 4))) = puVar2;
  piVar1[1] = piVar1[1] + 1;
  uVar3 = piVar1[2];
  if ((uVar3 < (uint)piVar1[1]) && ((int)uVar3 < 0x3fffffff)) {
    F_00c05920(param_2,uVar3 * 2);
  }
  return (uint)puVar2;
}

/* ref: Global::LuaS_NewLStr */
GEN_OWN GEN_NOFRAME uint F_00c05a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  uVar2 = (param_3 >> 5) + 1;
  uVar5 = param_3;
  for (uVar3 = param_3; uVar2 <= uVar3; uVar3 = uVar3 - uVar2) {
    uVar5 = uVar5 ^ (uint)*((byte *)GEN_TOP(((int)param_2 + (uVar3 - 1)))) + uVar5 * 0x20 + (uVar5 >> 2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x10))) + ((*((int * PTR32 *)GEN_TOP((param_1 + 0x10))))[2] - 1U & uVar5) * 4)));
  do {
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = F_00c059e0(param_3,param_1,param_2,uVar5);
      return uVar3;
    }
    if (puVar1[3] == param_3) {
      piVar4 = puVar1 + 4;
      piVar6 = param_2;
      for (uVar3 = param_3; 3 < uVar3; uVar3 = uVar3 - 4) {
        if (*piVar6 != *piVar4) goto LAB_00c05b20;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      if ((uVar3 == 0) ||
         (((char)*piVar4 == (char)*piVar6 &&
          ((uVar3 < 2 ||
           ((*((char *)GEN_TOP(((int)piVar4 + 1))) == *((char *)GEN_TOP(((int)piVar6 + 1))) &&
            ((uVar3 < 3 || (*((char *)GEN_TOP(((int)piVar4 + 2))) == *((char *)GEN_TOP(((int)piVar6 + 2))))))))))))) {
        if ((*((byte *)GEN_TOP(((int)puVar1 + 5))) & 3 & ~*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x14)))) != 0) {
          *((byte *)GEN_TOP(((int)puVar1 + 5))) = *((byte *)GEN_TOP(((int)puVar1 + 5))) ^ 3;
        }
        return (uint)puVar1;
      }
    }
LAB_00c05b20: ;
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  } while( true );
}

/* ref: Global::LuaS_NewUdata */
GEN_OWN GEN_NOFRAME uint F_00c05b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 * puVar2;
  
  if (0xffffffe5 < param_2) {
    F_00c11910(param_1);
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00c11930(param_1,0,0,param_2 + 0x18)));
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x14)));
  puVar2[4] = param_2;
  *((byte *)GEN_TOP(((int)puVar2 + 5))) = bVar1 & 3;
  *(undefined1 *)(puVar2 + 1) = 7;
  puVar2[2] = 0;
  puVar2[3] = param_3;
  *puVar2 = **((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x70)));
  **((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x70))) = puVar2;
  return (uint)puVar2;
}

/* ref: Global::LuaNewCClosure */
GEN_OWN GEN_NOFRAME uint F_00c05bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,param_2 * 0x10 + 0x18);
  F_00c01960(param_1,uVar1,6);
  *((char *)GEN_TOP((uVar1 + 7))) = (char)param_2;
  *((undefined1 *)GEN_TOP((uVar1 + 6))) = 1;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = param_3;
  return uVar1;
}

/* ref: Global::LuaF_NewCClosure */
GEN_OWN GEN_NOFRAME uint F_00c05c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = param_2 * 4 + 0x14;
  uVar1 = F_00c11930(param_1,0,0,iVar3);
  F_00c01960(param_1,uVar1,6);
  *((undefined1 *)GEN_TOP((uVar1 + 6))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = param_3;
  *((char *)GEN_TOP((uVar1 + 7))) = (char)param_2;
  if (param_2 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP((iVar3 + uVar1)));
    iVar3 = param_2;
    do {
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 1;
      *puVar2 = 0;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: Global::LuaF_NewUpval */
GEN_OWN GEN_NOFRAME uint F_00c05c70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc05c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,uVar1,10);
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1 + 0x10;
  *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = 0;
  return uVar1;
}

/* ref: Global::LuaF_FindUpval */
GEN_OWN GEN_NOFRAME uint F_00c05cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP((param_1 + 0x10)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0x68)));
  piVar4 = ((int *)GEN_TOP((param_1 + 0x68)));
  while (iVar2 != 0) {
    piVar5 = ((int *)GEN_TOP(*piVar4));
    if ((uint)piVar5[2] < param_2) break;
    if (piVar5[2] == param_2) {
      if ((~*((byte *)GEN_TOP((iVar3 + 0x14))) & *((byte *)GEN_TOP(((int)piVar5 + 5))) & 3) == 0) {
        return (uint)piVar5;
      }
      *((byte *)GEN_TOP(((int)piVar5 + 5))) = *((byte *)GEN_TOP(((int)piVar5 + 5))) ^ 3;
      return (uint)piVar5;
    }
    piVar4 = piVar5;
    iVar2 = *piVar5;
  }
  piVar5 = ((int *)GEN_TOP(F_00c11930(param_1,0,0,0x20)));
  *(undefined1 *)(piVar5 + 1) = 10;
  bVar1 = *((byte *)GEN_TOP((iVar3 + 0x14)));
  piVar5[2] = param_2;
  *((byte *)GEN_TOP(((int)piVar5 + 5))) = bVar1 & 3;
  *piVar5 = *piVar4;
  *piVar4 = (int)piVar5;
  piVar5[4] = iVar3 + 0x78;
  iVar2 = *((int *)GEN_TOP((iVar3 + 0x8c)));
  piVar5[5] = iVar2;
  *((int * PTR32 *)GEN_TOP((iVar2 + 0x10))) = piVar5;
  *((int * PTR32 *)GEN_TOP((iVar3 + 0x8c))) = piVar5;
  return (uint)piVar5;
}

/* ref: Global::LuaF_FreeUpval */
GEN_OWN GEN_NOFRAME uint F_00c05d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP((param_2 + 0x10)));
  if (*((int * PTR32 *)GEN_TOP((param_2 + 8))) != piVar1) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x14))) + 0x10))) = *piVar1;
    *((undefined4 *)GEN_TOP((*piVar1 + 0x14))) = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
  }
  uVar2 = F_00c11930(param_1,param_2,0x20,0);
  return uVar2;
}

/* ref: Global::LuaF_Close */
GEN_OWN GEN_NOFRAME unsigned int F_00c05da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x68)));
  iVar3 = *((int *)GEN_TOP((param_1 + 0x10)));
  while ((iVar2 != 0 && (puVar4 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x68))), param_2 <= (uint)puVar4[2]))) {
    *((undefined4 *)GEN_TOP((param_1 + 0x68))) = *puVar4;
    piVar1 = puVar4 + 4;
    if ((~*((byte *)GEN_TOP((iVar3 + 0x14))) & *((byte *)GEN_TOP(((int)puVar4 + 5))) & 3) == 0) {
      *((int *)GEN_TOP((puVar4[5] + 0x10))) = *piVar1;
      *((undefined4 *)GEN_TOP((*piVar1 + 0x14))) = puVar4[5];
      piVar5 = ((int *)GEN_TOP(puVar4[2]));
      *piVar1 = *piVar5;
      puVar4[5] = piVar5[1];
      puVar4[6] = piVar5[2];
      puVar4[2] = piVar1;
      F_00c01990(param_1,puVar4);
    }
    else {
      if (((int *)GEN_TOP(puVar4[2])) != piVar1) {
        *((int *)GEN_TOP((puVar4[5] + 0x10))) = *piVar1;
        *((undefined4 *)GEN_TOP((*piVar1 + 0x14))) = puVar4[5];
      }
      F_00c11930(param_1,puVar4,0x20,0);
    }
    iVar2 = *((int *)GEN_TOP((param_1 + 0x68)));
  }
  return;
}

/* ref: Global::LuaF_NewProto */
GEN_OWN GEN_NOFRAME uint F_00c05e50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc05e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x4c);
  F_00c01960(param_1,uVar1,9);
  *((undefined4 *)GEN_TOP((uVar1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x24))) = 0;
  *((undefined1 *)GEN_TOP((uVar1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP((uVar1 + 0x49))) = 0;
  *((undefined1 *)GEN_TOP((uVar1 + 0x4a))) = 0;
  *((undefined1 *)GEN_TOP((uVar1 + 0x4b))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x20))) = 0;
  return uVar1;
}

/* ref: Global::LuaF_FreeProto */
GEN_OWN GEN_NOFRAME uint F_00c05eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0xc))),*((int *)GEN_TOP((param_2 + 0x2c))) * 4,0);
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((int *)GEN_TOP((param_2 + 0x34))) * 4,0);
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 8))),*((int *)GEN_TOP((param_2 + 0x28))) << 4,0);
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0x14))),*((int *)GEN_TOP((param_2 + 0x30))) * 4,0);
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0x18))),*((int *)GEN_TOP((param_2 + 0x38))) * 0xc,0);
  F_00c11930(param_1,*((undefined4 *)GEN_TOP((param_2 + 0x1c))),*((int *)GEN_TOP((param_2 + 0x24))) * 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x4c,0);
  return uVar1;
}

/* ref: Global::LuaF_FreeClosure */
GEN_OWN GEN_NOFRAME uint F_00c05f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc05f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP((param_2 + 6))) != '\0') {
    uVar1 = F_00c11930(param_1,param_2,(uint)*((byte *)GEN_TOP((param_2 + 7))) * 0x10 + 0x18,0);
    return uVar1;
  }
  uVar1 = F_00c11930(param_1,param_2,(uint)*((byte *)GEN_TOP((param_2 + 7))) * 4 + 0x14,0);
  return uVar1;
}

/* ref: Global::LuaF_GetLocalName */
GEN_OWN GEN_NOFRAME uint F_00c05f90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc05f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x38)))) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 8)));
    iVar3 = param_2;
    do {
      if (param_3 < piVar2[-1]) {
        return 0;
      }
      if ((param_3 < *piVar2) && (iVar3 = iVar3 - 1, iVar3 == 0)) {
        return *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + iVar1 * 0xc))) + 0x10;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < *((int *)GEN_TOP((param_1 + 0x38))));
  }
  return 0;
}

/* ref: Global::LuaZ_Fill */
GEN_OWN GEN_NOFRAME uint F_00c05fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc05fe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != ((byte *)GEN_TOP(0x0))) && ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0)))) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) - 1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    return (uint)bVar1;
  }
  return 0xffffffff;
}

/* ref: Global::LuaZ_Lookahead */
GEN_OWN GEN_NOFRAME uint F_00c06020(unsigned int gen_a0)
{
  GEN_ENTER(0xc06020u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (*(*(int * PTR32 *)&gen_args[0]) != 0) {
LAB_00c06069: ;
    return (uint)*((byte *)GEN_TOP(piVar2[1]));
  }
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != ((byte *)GEN_TOP(0x0))) && ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0)))) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) - 1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    if (bVar1 != 0xffffffff) {
      *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]);
      piVar2[1] = (int)pbVar3;
      goto LAB_00c06069;
    }
  }
  return 0xffffffff;
}

/* ref: Global::LuaZ_Init */
GEN_OWN GEN_NOFRAME uint F_00c06080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc06080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  param_2[4] = param_1;
  param_2[2] = param_3;
  param_2[3] = param_4;
  *param_2 = 0;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: Global::LuaZRead */
GEN_OWN GEN_NOFRAME uint F_00c060b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc060b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  code * pcVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (*(int *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[2]);
  do {
    if (uVar5 == 0) {
      return 0;
    }
    if (*(*(uint * PTR32 *)&gen_args[0]) == 0) {
      uVar7 = (*(uint * PTR32 *)&gen_args[0])[3];
      uVar2 = (*(uint * PTR32 *)&gen_args[0])[4];
      pcVar3 = ((code *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]));
      pbVar4 = ((byte *)GEN_TOP((*pcVar3)(uVar2,uVar7,&(*(uint *)&gen_args[2]))));
      if (pbVar4 == ((byte *)GEN_TOP(0x0))) {
        return uVar5;
      }
      if ((*(uint *)&gen_args[2]) == 0) {
        return uVar5;
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar4;
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]) - 1;
      bVar1 = *pbVar4;
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)(pbVar4 + 1);
      if (bVar1 == 0xffffffff) {
        return uVar5;
      }
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]);
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar4;
    }
    if (*((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) == 0xffffffff) {
      return uVar5;
    }
    uVar7 = *(*(uint * PTR32 *)&gen_args[0]);
    if (uVar5 <= *(*(uint * PTR32 *)&gen_args[0])) {
      uVar7 = uVar5;
    }
    F_00c46aa0(iVar6,((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])),uVar7);
    *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) - uVar7;
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + uVar7;
    iVar6 = iVar6 + uVar7;
    uVar5 = uVar5 - uVar7;
  } while( true );
}

/* ref: Global::LuaZOpenSpace */
GEN_OWN GEN_NOFRAME uint F_00c06140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc06140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  if (param_3 <= param_2[2]) {
    return *param_2;
  }
  uVar2 = param_3;
  if (param_3 < 0x20) {
    uVar2 = 0x20;
  }
  if (uVar2 + 1 < 0xfffffffe) {
    uVar1 = F_00c11930(param_1,*param_2,param_2[2],uVar2);
    param_2[2] = uVar2;
    *param_2 = uVar1;
    return uVar1;
  }
  uVar1 = F_00c11910(param_1);
  param_2[2] = uVar2;
  *param_2 = uVar1;
  return uVar1;
}

/* ref: Global::DumpHeader */
GEN_OWN_GS GEN_NOFRAME uint F_00c061c0(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc061c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x10, 0, 0);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00c072c0(((undefined1 *)(gen_frame + 0x0)),*(undefined1 *)(in_esi + 6));
  if (in_esi[4] == 0) {
    uVar1 = (*((code *)GEN_TOP(in_esi[1])))(*in_esi,((undefined1 *)(gen_frame + 0x0)),0xc,in_esi[2]);
    in_esi[4] = uVar1;
  }
  return uVar1;
}

/* ref: Global::DumpMem */
GEN_OWN_GS GEN_NOFRAME uint GEN_THISCALL F_00c06230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc06230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x214, 12, 0);
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined1 * puVar4;
  uint uVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(uint *)(gen_frame + 0x8)) = param_2;
  if (param_3[5] == 0) {
    puVar2 = param_1;
    if (param_3[4] == 0) {
      puVar2 = ((undefined1 *)GEN_TOP((*((code *)GEN_TOP(param_3[1])))(*param_3,param_1,param_2 * (int)this,param_3[2])));
      param_3[4] = puVar2;
    }
  }
  else {
    uVar6 = param_2 * (int)this;
    (*(uint *)(gen_frame + 0xc)) = uVar6;
    if (uVar6 < 0x201) {
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0x10));
    }
    else {
      puVar2 = ((undefined1 *)GEN_TOP(F_00c11930(*param_3,0,0,uVar6)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = puVar2;
    }
    F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar6);
    (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar6;
    uVar5 = param_2;
    for (puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0x0)); puVar2 < (*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar6; puVar2 = puVar2 + uVar5) {
      iVar3 = 0;
      if (param_2 >> 1 != 0) {
        puVar4 = puVar2 + (uVar5 - 1);
        do {
          uVar1 = *puVar4;
          *puVar4 = puVar2[iVar3];
          puVar2[iVar3] = uVar1;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 - 1;
          uVar5 = (*(uint *)(gen_frame + 0x8));
        } while (iVar3 < (int)(param_2 >> 1));
      }
    }
    if (param_3[4] == 0) {
      uVar6 = (*((code *)GEN_TOP(param_3[1])))(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0xc)),param_3[2]);
      param_3[4] = uVar6;
    }
    puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x0)) != ((undefined1 *)(gen_frame + 0x10))) {
      puVar2 = ((undefined1 *)GEN_TOP(F_00c11930(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1,0)));
    }
  }
  return (uint)puVar2;
}

/* ref: Global::DumpString */
GEN_OWN GEN_NOFRAME uint F_00c06400(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc06400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x4, 12);
  uint uVar1;
  
  if ((in_eax == 0) || (in_eax + 0x10 == 0)) {
    (*(int *)(gen_frame + 0x0)) = 0;
    uVar1 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_esi);
  }
  else {
    (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((in_eax + 0xc))) + 1;
    uVar1 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_esi);
    if (in_esi[4] == 0) {
      uVar1 = (*((code *)GEN_TOP(in_esi[1])))(*in_esi,in_eax + 0x10,(*(int *)(gen_frame + 0x0)),in_esi[2]);
      in_esi[4] = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Global::DumpConstants */
GEN_OWN GEN_FRAME uint F_00c06470(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc06470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x15, 11, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  undefined4 uVar6;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 0x28)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 1)) = iVar1;
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 1)) = iVar1;
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + iVar3)));
      ((undefined1 *)(gen_frame + 0x0))[0] = *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 8 + iVar3)));
      F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1,in_eax);
      iVar1 = *(int *)(puVar4 + 1);
      if (iVar1 == 1) {
        uVar6 = 1;
        puVar5 = (undefined8 *)((undefined1 *)(gen_frame + 0x0));
        ((undefined1 *)(gen_frame + 0x0))[0] = *(undefined1 *)puVar4;
LAB_00c06512: ;
        F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,puVar5,uVar6,in_eax);
      }
      else {
        if (iVar1 == 3) {
          uVar6 = 8;
          puVar5 = &(*(undefined8 *)(gen_frame + 0x5));
          (*(undefined8 *)(gen_frame + 0x5)) = *puVar4;
          goto LAB_00c06512;
        }
        if (iVar1 == 4) {
          F_00c06400(*(undefined4 *)puVar4,in_eax);
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar1 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 1)) - 1;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 1)) = iVar1;
    } while (iVar1 != 0);
  }
  iVar1 = *((int *)GEN_TOP((param_2 + 0x34)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 1)) = iVar1;
  uVar2 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = F_00c06700(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x10))) + iVar3 * 4))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x20))),in_eax);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return uVar2;
}

/* ref: Global::DumpDebug */
GEN_OWN GEN_NOFRAME uint F_00c06580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x4, 12);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * this;
  int iVar5;
  
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]);
  if (in_eax[3] == 0) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  }
  else {
    this = ((undefined *)GEN_TOP(0x0));
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  (*(undefined * PTR32 *)&gen_args[0]) = this;
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  F_00c06230(this GEN_EDX_ARG,uVar1,4,in_eax);
  if (in_eax[3] == 0) {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0x38)));
  }
  else {
    iVar4 = 0;
  }
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(iVar4));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      F_00c06400(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x18))) + iVar5))),in_eax);
      (*(undefined * PTR32 *)&gen_args[0]) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x18))) + 4 + iVar5)));
      F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
      (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x18))) + 8 + iVar5)));
      F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_eax);
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (in_eax[3] == 0) {
    (*(undefined * PTR32 *)&gen_args[0]) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
  }
  else {
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(0x0));
  }
  iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x0)) = (int)(*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_eax);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + iVar5 * 4)));
      if ((iVar4 == 0) || (iVar4 + 0x10 == 0)) {
        (*(int *)(gen_frame + 0x0)) = 0;
        uVar3 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_eax);
      }
      else {
        (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((iVar4 + 0xc))) + 1;
        uVar3 = F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),4,in_eax);
        if (in_eax[4] == 0) {
          uVar3 = (*((code *)GEN_TOP(in_eax[1])))(*in_eax,iVar4 + 0x10,(*(int *)(gen_frame + 0x0)),in_eax[2]);
          in_eax[4] = uVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: Global::DumpFunction */
GEN_OWN GEN_NOFRAME uint F_00c06700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc06700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this;
  undefined4 uVar1;
  int iVar2;
  int in_eax;
  int in_eax_00;
  uint uVar3;
  
  in_eax = (*(int *)&gen_args[2]);
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]);
  in_eax_00 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if ((in_eax_00 == (*(int *)&gen_args[1])) || (*((int *)GEN_TOP(((*(int *)&gen_args[2]) + 0xc))) != 0)) {
    in_eax_00 = 0;
  }
  F_00c06400(in_eax_00,(*(int *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[0]) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x3c)));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x40)));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *((undefined1 *)GEN_TOP((iVar2 + 0x48)));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *((undefined1 *)GEN_TOP((iVar2 + 0x49)));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *((undefined1 *)GEN_TOP((iVar2 + 0x4a)));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),*((undefined1 *)GEN_TOP((iVar2 + 0x4b))))));
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  this = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x2c)));
  uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0xc)));
  (*(undefined * PTR32 *)&gen_args[0]) = this;
  F_00c06230(((undefined *)GEN_TOP(0x1)) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  F_00c06230(this GEN_EDX_ARG,uVar1,4,in_eax);
  F_00c06470(in_eax,iVar2);
  uVar3 = F_00c06580(in_eax,iVar2);
  return uVar3;
}

/* ref: Global::LuaDump */
GEN_OWN_GS GEN_NOFRAME uint F_00c06800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc06800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x2c, 4, 0);
  byte bVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x0)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_5;
  (*(uint *)(gen_frame + 0x10)) = 0;
  bVar1 = F_00c07300();
  (*(byte *)(gen_frame + 0x18)) = (byte)param_6;
  (*(uint *)(gen_frame + 0x14)) = (uint)((byte)param_6 != bVar1);
  F_00c072c0(((undefined1 *)(gen_frame + 0x1c)),(byte)param_6);
  if ((*(uint *)(gen_frame + 0x10)) == 0) {
    uVar2 = (*((code *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),((undefined1 *)(gen_frame + 0x1c)),0xc,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)));
    (*(uint *)(gen_frame + 0x10)) = uVar2;
  }
  F_00c06700(param_2,0,((byte *)(gen_frame + 0x0)));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: Global::LoadInt */
GEN_OWN GEN_NOFRAME uint F_00c06960(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc06960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = in_esi[1];
  uVar2 = F_00c060b0(uVar1,&(*(uint *)(gen_frame + 0x0)),4);
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a38))
                    );
                    
    F_00bb93a0(*in_esi,3);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: Global::LoadString */
GEN_OWN GEN_NOFRAME uint F_00c06a20(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc06a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_esi[1];
  uVar2 = F_00c060b0(uVar1,&(*(int *)(gen_frame + 0x0)),4);
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((*(int *)(gen_frame + 0x0)) == 0) {
    return 0;
  }
  uVar2 = F_00c06140(*in_esi,in_esi[2],(*(int *)(gen_frame + 0x0)));
  uVar3 = F_00c060b0(in_esi[1],uVar2,(*(int *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar2 = F_00c05a80(*in_esi,uVar2,(*(int *)(gen_frame + 0x0)) - 1);
  return uVar2;
}

/* ref: Global::LoadCode */
GEN_OWN GEN_NOFRAME uint F_00c06ad0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc06ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar2;
  *((uint *)GEN_TOP((param_2 + 0x2c))) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_eax,3);
  }
  return 0;
}

/* ref: Global::LoadConstants */
GEN_OWN GEN_NOFRAME uint F_00c06b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0xd, 3);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  
  iVar1 = (*(int *)&gen_args[0]);
  uVar2 = F_00c06960(in_eax);
  if (uVar2 + 1 < 0x10000000) {
    uVar3 = F_00c11930(*in_eax,0,0,uVar2 << 4);
  }
  else {
    uVar3 = F_00c11910(*in_eax);
  }
  iVar5 = 0;
  *((uint *)GEN_TOP((iVar1 + 8))) = uVar3;
  *((uint *)GEN_TOP((iVar1 + 0x28))) = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    uVar3 = uVar2;
    do {
      *((undefined4 *)GEN_TOP((iVar4 + 8 + *((int *)GEN_TOP((iVar1 + 8)))))) = 0;
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (0 < (int)uVar2) {
      (*(uint *)(gen_frame + 0x1)) = uVar2;
      do {
        puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + iVar5)));
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)&gen_args[0]),1);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        switch((unsigned int)(uintptr_t)((undefined1)(*(int *)&gen_args[0]))) {
        case 0: ;
          puVar6[2] = 0;
          break;
        case 1: ;
          uVar2 = F_00c060b0(in_eax[1],&(*(char *)(gen_frame + 0x0)),1);
          if (uVar2 != 0) {
            F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                             ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*in_eax,3);
          }
          puVar6[2] = 1;
          *puVar6 = (uint)((*(char *)(gen_frame + 0x0)) != '\0');
          break;
        default: ;
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a44)));
                    
          F_00bb93a0(*in_eax,3);
        case 3: ;
          uVar2 = F_00c060b0(in_eax[1],&(*(undefined8 *)(gen_frame + 0x5)),8);
          if (uVar2 != 0) {
            F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                             ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*in_eax,3);
          }
          *(undefined8 *)puVar6 = (*(undefined8 *)(gen_frame + 0x5));
          puVar6[2] = 3;
          break;
        case 4: ;
          uVar2 = F_00c06a20(in_eax);
          *puVar6 = uVar2;
          puVar6[2] = 4;
        }
        iVar5 = iVar5 + 0x10;
        uVar2 = (*(uint *)(gen_frame + 0x1)) - 1;
        (*(uint *)(gen_frame + 0x1)) = uVar2;
      } while (uVar2 != 0);
    }
  }
  uVar2 = F_00c060b0(in_eax[1],&(*(int *)&gen_args[0]),4);
  iVar5 = (*(int *)&gen_args[0]);
  if (uVar2 == 0) {
    if ((*(int *)&gen_args[0]) < 0) {
      F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a38)));
                    
      F_00bb93a0(*in_eax,3);
    }
    if ((*(int *)&gen_args[0]) + 1U < 0x40000000) {
      uVar2 = F_00c11930(*in_eax,0,0,(*(int *)&gen_args[0]) * 4);
    }
    else {
      uVar2 = F_00c11910(*in_eax);
    }
    *((uint *)GEN_TOP((iVar1 + 0x10))) = uVar2;
    uVar2 = 0;
    *((int *)GEN_TOP((iVar1 + 0x34))) = iVar5;
    if (0 < iVar5) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x10))) + uVar2 * 4))) = 0;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar5);
    }
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        uVar2 = F_00c070c0(in_eax,*((undefined4 *)GEN_TOP((iVar1 + 0x20))));
        *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x10))) + iVar4 * 4))) = uVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    return uVar2;
  }
  F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                   ((char *)REFP(0x1347a28)));
                    
  F_00bb93a0(*in_eax,3);
}

/* ref: Global::LoadDebug */
GEN_OWN GEN_NOFRAME uint F_00c06e00(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc06e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *((uint *)GEN_TOP((in_edi + 0x14))) = uVar2;
  *((uint *)GEN_TOP((in_edi + 0x30))) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_eax,3);
  }
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x15555556) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 0xc);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *((uint *)GEN_TOP((in_edi + 0x18))) = uVar2;
  *((uint *)GEN_TOP((in_edi + 0x38))) = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    uVar2 = uVar1;
    do {
      *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP((in_edi + 0x18)))))) = 0;
      iVar3 = iVar3 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (0 < (int)uVar1) {
      iVar3 = 0;
      do {
        uVar2 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x18))) + iVar3))) = uVar2;
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0x0)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0x0)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x18))) + 4 + iVar3))) = (*(int *)(gen_frame + 0x0));
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0x4)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0x4)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                           ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x18))) + 8 + iVar3))) = (*(int *)(gen_frame + 0x4));
        iVar3 = iVar3 + 0xc;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  uVar1 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0x4)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_eax,3);
  }
  if (-1 < (*(int *)(gen_frame + 0x4))) {
    if ((*(int *)(gen_frame + 0x4)) + 1U < 0x40000000) {
      uVar1 = F_00c11930(*in_eax,0,0,(*(int *)(gen_frame + 0x4)) * 4);
    }
    else {
      uVar1 = F_00c11910(*in_eax);
    }
    *((uint *)GEN_TOP((in_edi + 0x1c))) = uVar1;
    uVar1 = 0;
    *((int *)GEN_TOP((in_edi + 0x24))) = (*(int *)(gen_frame + 0x4));
    if (0 < (*(int *)(gen_frame + 0x4))) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x1c))) + uVar1 * 4))) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (*(int *)(gen_frame + 0x4)));
    }
    iVar3 = 0;
    if (0 < (*(int *)(gen_frame + 0x4))) {
      do {
        uVar1 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x1c))) + iVar3 * 4))) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (*(int *)(gen_frame + 0x4)));
    }
    return uVar1;
  }
  F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a38)));
                    
  F_00bb93a0(*in_eax,3);
}

/* ref: Global::LoadFunction */
GEN_OWN GEN_NOFRAME uint F_00c070c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc070c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  int iVar2;
  int * in_esi;
  uint in_edi;
  uint uVar3;
  
  in_esi = (*(int * PTR32 *)&gen_args[0]);
  *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) = *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) + 1;
  if (200 < *((ushort *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34)))) {
    F_00c00790(*(*(int * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(int * PTR32 *)&gen_args[0])[3],
                     ((char *)REFP(0x1347a54)));
                    
    F_00bb93a0(*in_esi,3);
  }
  in_edi = F_00c05e50(*(*(int * PTR32 *)&gen_args[0]));
  puVar1 = *((uint * PTR32 *)GEN_TOP((*in_esi + 8)));
  *puVar1 = in_edi;
  puVar1[2] = 9;
  iVar2 = *in_esi;
  if (*((int *)GEN_TOP((iVar2 + 0x1c))) - *((int *)GEN_TOP((iVar2 + 8))) < 0x11) {
    F_00bb8d50(iVar2,1);
  }
  *((int *)GEN_TOP((*in_esi + 8))) = *((int *)GEN_TOP((*in_esi + 8))) + 0x10;
  uVar3 = F_00c06a20(in_esi);
  *((uint *)GEN_TOP((in_edi + 0x20))) = uVar3;
  if (uVar3 == 0) {
    *((undefined4 *)GEN_TOP((in_edi + 0x20))) = (*(undefined4 *)&gen_args[1]);
  }
  uVar3 = F_00c06960(in_esi);
  *((uint *)GEN_TOP((in_edi + 0x3c))) = uVar3;
  uVar3 = F_00c06960(in_esi);
  *((uint *)GEN_TOP((in_edi + 0x40))) = uVar3;
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *((undefined1 *)GEN_TOP((in_edi + 0x48))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *((undefined1 *)GEN_TOP((in_edi + 0x49))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *((undefined1 *)GEN_TOP((in_edi + 0x4a))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *((undefined1 *)GEN_TOP((in_edi + 0x4b))) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  F_00c06ad0(in_esi,in_edi);
  F_00c06b60(in_esi,in_edi);
  F_00c06e00(in_esi,in_edi);
  uVar3 = F_00c02380(in_edi);
  if (uVar3 == 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a64)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *((int *)GEN_TOP((*in_esi + 8))) = *((int *)GEN_TOP((*in_esi + 8))) - 0x10;
  *((short *)GEN_TOP((*in_esi + 0x34))) = *((short *)GEN_TOP((*in_esi + 0x34))) - 1;
  return in_edi;
}

/* ref: Global::MakeHeader */
GEN_OWN GEN_NOFRAME uint F_00c072c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc072c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *param_1 = REFG(undefined4, 0x1347a98);
  *(undefined1 *)(param_1 + 1) = 0x51;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = 0;
  *((bool *)GEN_TOP(((int)param_1 + 6))) = param_2 == 'l';
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 4;
  *(undefined1 *)(param_1 + 2) = 4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 9))) = 4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 10))) = 8;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xb))) = 0;
  return (uint)((int)param_1 + 10);
}

/* ref: FUN_00c07300 */
GEN_OWN GEN_NOFRAME byte F_00c07300(void)
{
  GEN_ENTER(0xc07300u, 0u, 0u, 0u, 0u);
  return 0x6c;
}

/* ref: Global::LoadHeader */
GEN_OWN GEN_NOFRAME uint F_00c07310(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc07310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1c, 4);
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  ((int *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  uVar1 = in_esi[1];
  (*(int *)(gen_frame + 0x0)) = REFG(int, 0x1347a98);
  (*(undefined1 *)(gen_frame + 0x4)) = 0x51;
  (*(undefined1 *)(gen_frame + 0x5)) = 0;
  (*(undefined1 *)(gen_frame + 0x6)) = 1;
  (*(undefined1 *)(gen_frame + 0x7)) = 4;
  (*(undefined1 *)(gen_frame + 0x8)) = 4;
  (*(undefined1 *)(gen_frame + 0x9)) = 4;
  (*(undefined1 *)(gen_frame + 0xa)) = 8;
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  uVar2 = F_00c060b0(uVar1,((int *)(gen_frame + 0xc)),0xc);
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                     ((char *)REFP(0x1347a28)));
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar2 = 0xc;
  iVar3 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x0)) + iVar3))) != *((int *)GEN_TOP(((int)((int *)(gen_frame + 0xc)) + iVar3)))) {
      F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],
                       ((char *)REFP(0x1347a70)));
                    
      F_00bb93a0(*in_esi,3);
    }
    uVar2 = uVar2 - 4;
    iVar3 = iVar3 + 4;
  } while (3 < uVar2);
  return uVar2;
}

/* ref: Global::LuaUndump */
GEN_OWN GEN_NOFRAME uint F_00c073f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc073f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x10, 0);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  cVar1 = *param_4;
  if ((cVar1 == '@') || (cVar1 == '=')) {
    pcVar3 = param_4 + 1;
  }
  else {
    pcVar3 = param_4;
    if (cVar1 == REFG(char, 0x1347a7c)) {
      (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x1347a84));
      goto LAB_00c07418;
    }
  }
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
LAB_00c07418: ;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  F_00c07310(&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00c05a80(param_1,&REFG(undefined, 0x1347a94),2);
  uVar2 = F_00c070c0(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
  return uVar2;
}

/* ref: FUN_00c07460 */
GEN_OWN GEN_FRAME float10 F_00c07460(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xc07460u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00c07480 */
GEN_OWN GEN_NOFRAME unsigned int F_00c07480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc07480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

