#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005d42e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d42e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d42e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005d4590((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005d42f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d42f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d42f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005d4590((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005d4300 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005d46c0((int)this - 0x16c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005d4310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005d46c0((int)this - 0x170 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005d4320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint * this_00;
  uint * puVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  puVar1 = param_1 + 4;
  this_00 = ((uint *)GEN_TOP(((int)this + 0x10)));
  *this_00 = param_1[4];
  if ((*puVar1 & 0xf) == 9) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  else {
    *this_00 = *puVar1 & 0xf;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  }
  if ((*puVar1 >> 5 & 1) != 0) {
    F_00594f30(this_00 GEN_EDX_FWD,puVar1);
  }
  return (uint)this;
}

/* ref: FUN_005d4380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 1;
  return uVar1;
}

/* ref: FUN_005d43a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d43a0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d43a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(param_1 GEN_EDX_FWD);
    *(undefined1 *)(param_1 + 1) = param_2;
    *param_1 = 2;
    return uVar1;
  }
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = 2;
  return uVar1 >> 5;
}

/* ref: FUN_005d43e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d43e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d43e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 *)this = 4;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 4;
  return uVar1 >> 5;
}

/* ref: FUN_005d4420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4420(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d4420u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1 >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(param_1 GEN_EDX_FWD);
  }
  *param_1 = 5;
  param_1[1] = (uint)gen_fl2bits(param_2);
  return uVar1;
}

/* ref: FUN_005d4450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 *)this = 7;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 7;
  return uVar1 >> 5;
}

/* ref: FUN_005d4490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 *)this = 8;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 8;
  return uVar1 >> 5;
}

/* ref: FUN_005d44d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d44d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d44d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * this_00;
  uint * puVar1;
  
  this_00 = ((uint *)GEN_TOP(((int)this + 4)));
  puVar1 = &(*(uint *)&gen_args[0]);
  if (this_00 != puVar1) {
    if ((*this_00 >> 5 & 1) != 0) {
      F_005a0260(this_00 GEN_EDX_FWD);
    }
    puVar1 = ((uint *)GEN_TOP(((*(uint *)&gen_args[0]) & 0xf)));
    if (puVar1 != ((uint *)GEN_TOP(0x9))) {
      *this_00 = (uint)puVar1;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = (*(undefined4 *)&gen_args[1]);
    }
    if (((*(uint *)&gen_args[0]) >> 5 & 1) != 0) {
      puVar1 = ((uint *)GEN_TOP(F_00594f30(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[0]))));
    }
  }
  if (((*(uint *)&gen_args[0]) >> 5 & 1) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_005a0260(&(*(uint *)&gen_args[0]) GEN_EDX_ARG)));
  }
  return (uint)puVar1;
}

/* ref: FUN_005d4530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5d4530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint * this_00;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  this_00 = ((uint *)GEN_TOP(((int)this + 0x10)));
  *this_00 = *param_5;
  if ((*param_5 & 0xf) == 9) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  else {
    *this_00 = *param_5 & 0xf;
    *((uint *)GEN_TOP(((int)this + 0x14))) = param_5[1];
  }
  if ((*param_5 >> 5 & 1) != 0) {
    F_00594f30(this_00 GEN_EDX_FWD,param_5);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4590(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_005a1d20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005d45c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d45c0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d45c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * this;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  if ((param_2 & 2) != 0) {
    uVar1 = param_1[-1];
    iVar2 = uVar1 - 1;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = param_1 - 1;
    if (-1 < iVar2) {
      puVar3 = param_1 + uVar1 * 2 + 1;
      do {
        puVar4 = puVar3 - 2;
        if ((puVar3[-3] >> 5 & 1) != 0) {
          this = ((undefined4 *)GEN_TOP(*puVar4));
          if (this != ((undefined4 *)GEN_TOP(0x0))) {
            uVar1 = puVar3[-3] & 0xf;
            if (uVar1 == 9) {
              F_00488040(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),*this,this[1]);
              F_00488dc0(this GEN_EDX_ARG);
              F_00406ad0(this);
            }
            else if ((uVar1 == 6) || (uVar1 == 7)) {
              F_00406ad0(this);
              *puVar4 = 0;
            }
          }
          *puVar4 = 0;
        }
        iVar2 = iVar2 - 1;
        puVar3[-3] = 0;
        puVar3 = puVar4;
      } while (-1 < iVar2);
    }
    if ((param_2 & 1) != 0) {
      F_00406b30((*(uint * PTR32 *)(gen_frame + 0x4)));
    }
    return (uint)(*(uint * PTR32 *)(gen_frame + 0x4));
  }
  if ((*param_1 >> 5 & 1) != 0) {
    F_005a0260(param_1 GEN_EDX_ARG);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d46c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d46c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_005a3b50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005d46f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d46f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5d46f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x184,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_00786090(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_005d4760 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005d4760(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_005d4320(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_005d4780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4780(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((*((uint *)GEN_TOP((param_1 + 0x10))) >> 5 & 1) != 0) {
    F_005a0260(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_005d47c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d47c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d47c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((char *)GEN_TOP(((int)this + 0x80))) != '\0') {
    in_EAX = F_005aa300(this GEN_EDX_FWD,1,(undefined1)param_1,9);
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkUnitBase::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d47e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d47e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Component::GUI2::AtkStage::vf1 */
GEN_OWN GEN_NOFRAME byte F_005d4800(void)
{
  GEN_ENTER(0x5d4800u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_005d4810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 600))) GEN_EDX_FWD);
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x240))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x240))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x23c)));
  while (iVar3 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar3 + 0x10)));
    F_00406ad0(iVar3);
    iVar3 = iVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x23c))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x220)));
  if (iVar3 != 0) {
    F_00429760(iVar3,(*((int *)GEN_TOP(((int)this + 0x228))) - iVar3 >> 2) * 4,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  if ((*((uint *)GEN_TOP(((int)this + 0x1c8))) >> 5 & 1) != 0) {
    F_005a0260(((undefined *)GEN_TOP(((int)this + 0x1c8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  F_0058d1f0(((undefined *)GEN_TOP(((int)this + 0xe0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  F_00588690(((undefined *)GEN_TOP(((int)this + 0xc4))));
  F_00588690(((undefined *)GEN_TOP(((int)this + 0xd0))));
  F_005c87d0(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG);
  F_005c87d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  if (*((int *)GEN_TOP(((int)this + 0xa8))) != 0) {
    F_00583770(*((int *)GEN_TOP(((int)this + 0xa8))) + 0x23c GEN_EDX_ARG,0x49,0,puVar1,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  }
  uVar4 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return (uint)uVar4;
}

/* ref: Component::GUI2::AtkDialogue::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  if (((uint)param_1[1] >> 5 & 1) != 0) {
    F_005a0260(param_1 + 1 GEN_EDX_FWD);
  }
  param_1[1] = 0;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005d49c0 */
GEN_OWN GEN_FRAME unsigned int F_005d49c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d49c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_005d4320(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_005d49e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005d49e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d49e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x10))) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d4a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,0);
  return uVar1;
}

/* ref: Component::GUI2::AtkStage::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_005d4810(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005d4a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_005d0180(this GEN_EDX_FWD,1);
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x18,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + uVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_005d4320(this_00 GEN_EDX_ARG,param_1);
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar1;
}

/* ref: FUN_005d4af0 */
GEN_OWN GEN_FRAME uint F_005d4af0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_2 + 0x10))) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP((param_2 + 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_005d4b20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d4b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    if ((*((uint *)GEN_TOP((iVar2 + 0x10))) >> 5 & 1) != 0) {
      F_005a0260(((undefined *)GEN_TOP((iVar2 + 0x10))) GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = 0;
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return;
}

/* ref: FUN_005d4b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
    uVar3 = *((uint *)GEN_TOP((iVar2 + 0x10))) >> 5;
    if ((uVar3 & 1) != 0) {
      uVar3 = F_005a0260(((undefined *)GEN_TOP((iVar2 + 0x10))) GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = 0;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_005d4bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar6 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar6 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar5 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar5) {
        uVar5 = uVar5 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar5 * 4)));
      if ((*((uint *)GEN_TOP((iVar6 + 0x10))) >> 5 & 1) != 0) {
        this_00 = *((undefined4 * PTR32 *)GEN_TOP((iVar6 + 0x14)));
        if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar5 = *((uint *)GEN_TOP((iVar6 + 0x10))) & 0xf;
          if (uVar5 == 9) {
            uVar2 = this_00[1];
            uVar3 = *this_00;
            F_00488040(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar3,uVar2);
            F_00488dc0(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
          else if ((uVar5 == 6) || (uVar5 == 7)) {
            F_00406ad0(this_00);
            *((undefined4 *)GEN_TOP((iVar6 + 0x14))) = 0;
          }
        }
        *((undefined4 *)GEN_TOP((iVar6 + 0x14))) = 0;
      }
      *((undefined4 *)GEN_TOP((iVar6 + 0x10))) = 0;
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar6 != 0) {
    iVar6 = iVar6 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar6 * 4))) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar6 * 4)));
      F_00429760(uVar2,0x18,400);
    }
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 4)));
  uVar5 = 0;
  if (iVar6 != 0) {
    iVar4 = *((int *)GEN_TOP(((int)this + 8)));
    uVar7 = F_00429760(iVar6,iVar4 * 4,400);
    uVar5 = (uint)uVar7;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar5;
}

/* ref: FUN_005d4cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_005d4bc0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkMessageBoxManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d4cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[0xc]));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a1dd8));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,param_1);
  }
  F_005d4bc0(param_1 + 5 GEN_EDX_ARG);
  F_00429760(param_1[5],8,400);
  param_1[5] = 0;
  F_00cb4870(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005d4d60 */
GEN_OWN GEN_FRAME float10 F_005d4d60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x5d4d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_005d4d80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005d4d80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d4d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b79ee0(param_1);
  F_00549810(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
  F_00a819c0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  F_00a4aa50(&REFG(undefined, 0x14a7394) GEN_EDX_ARG);
  uVar1 = F_00ab8440(&REFG(undefined, 0x14b5180) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005d4dc0 */
GEN_OWN GEN_NOFRAME unsigned int F_005d4dc0(void)
{
  GEN_ENTER(0x5d4dc0u, 0u, 0u, 0u, 0u);
  F_00a4aa30(&REFG(undefined, 0x14a7394) GEN_EDX_ARG);
  F_00ab5620(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
  F_00ac2010(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
  return;
}

/* ref: FUN_005d4de0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d4de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005ecf90();
  F_00ab6700();
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return 0;
}

/* ref: FUN_005d4e10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d4e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d4e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((REFG(int, 0x1379694) != 0) && (*((int *)GEN_TOP((in_ecx + 4))) == 2)) &&
     ((REFG(int, 0x14bcc80) == 0 || (REFG(int, 0x14bcc80) == 1)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005d4e40 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005d4e40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d4e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ab2a20(param_1);
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x10))) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d4e70 */
GEN_OWN GEN_NOFRAME byte F_005d4e70(void)
{
  GEN_ENTER(0x5d4e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005d4e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d4e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0xc))) != 0xd4) goto LAB_005d4ec1;
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14)));
  if (uVar1 < 0x1683f) {
    if (uVar1 == 0x1683e) goto LAB_005d4ef5;
    if ((0x1683d < uVar1) || ((uVar1 < 0x1683a && ((uVar1 < 0x160e2 || (0x160e4 < uVar1))))))
    goto LAB_005d4ec1;
  }
  else if (uVar1 != 0x1683f) {
    if (uVar1 != 0x16840) goto LAB_005d4ec1;
LAB_005d4ef5: ;
    if (param_3 == 0x50) {
      return 0x6b;
    }
    goto LAB_005d4ec1;
  }
  if (param_3 == 0x50) {
    return 0x5e;
  }
LAB_005d4ec1: ;
  if (((param_2 != 0x40fd9b) && (param_2 != 0x4203fb)) && (param_2 != 0x42122e)) {
    return param_3;
  }
  if (param_3 == 0x50) {
    return 0x5e;
  }
  return param_3;
}

/* ref: FUN_005d4f10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005d4f10(GEN_P(char param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d4f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = REFG(int, 0x137104c);
  uVar2 = 0;
  if (param_1 == '\0') {
    uVar3 = param_2 * 0x3c + param_3;
    iVar4 = ((((((int)param_2 >> 0x1f) << 4 | param_2 >> 0x1c) - ((int)param_2 >> 0x1f)) -
             (uint)(param_2 * 0x10 < param_2)) * 4 | param_2 * 0xf >> 0x1e) + ((int)param_3 >> 0x1f)
            + (uint)CARRY4(param_2 * 0x3c,param_3);
    uVar2 = uVar3 * 0x3c;
    *((undefined1 *)GEN_TOP((REFG(int, 0x137104c) + 0x1240))) = 1;
    *((uint *)GEN_TOP((iVar1 + 0x1238))) = uVar2;
    *((uint *)GEN_TOP((iVar1 + 0x123c))) =
         (((iVar4 * 0x10 | uVar3 >> 0x1c) - iVar4) - (uint)(uVar3 * 0x10 < uVar3)) * 4 |
         uVar3 * 0xf >> 0x1e;
  }
  else {
    *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1238))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x123c))) = 0;
    if (*((char *)GEN_TOP((iVar1 + 0x1230))) != '\0') {
      *((undefined1 *)GEN_TOP((iVar1 + 0x1230))) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005d4fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5d4fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint local_c;
  undefined4 local_8;
  
  local_c = CONCAT22((undefined2)param_2,(undefined2)param_1);
  local_8 = CONCAT22((undefined2)param_4,(undefined2)param_3);
  *((uint *)GEN_TOP(((int)this + 0x34))) = local_c;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = local_8;
  return local_c;
}

/* ref: FUN_005d4fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d4fe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x5d4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  undefined4 uVar4;
  
  uVar1 = F_00ab1c90(param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00ab6670((uint)*((ushort *)GEN_TOP((uVar1 + 0x24))));
    F_005f9ab0((*((uint *)GEN_TOP((uVar1 + 4))) & 0xffffff) + uVar1 + 4,~-(uint)(param_3 != 0) & param_2,
                 param_4,param_3,param_1 + 0x34);
    *((int *)GEN_TOP((param_1 + 0x20))) = param_3;
    *((undefined1 *)GEN_TOP((param_1 + 0x28))) = param_5;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
    *((uint *)GEN_TOP((param_1 + 0x1c))) = param_2;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 0x10))) = *((undefined1 *)GEN_TOP((uVar1 + 0x2a)));
    *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 1;
    uVar2 = (uint)*((ushort *)GEN_TOP((uVar1 + 0x22)));
    *((uint *)GEN_TOP((param_1 + 0x24))) = uVar2;
    if (param_6 != '\0') {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar4 = 0x1f;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
        this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar4)));
        uVar2 = 0;
        if (this != ((undefined *)GEN_TOP(0x0))) {
          uVar2 = F_008decc0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x1c))),*((undefined4 *)GEN_TOP((param_1 + 0x24))))
          ;
        }
      }
      uVar1 = 0;
      do {
        if ((((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) != ((undefined *)GEN_TOP(0x0))) &&
           (uVar2 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) GEN_EDX_ARG), uVar2 != 0)) {
          F_00b76ca0(uVar2 + 0x1340 GEN_EDX_ARG);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x158);
    }
  }
  return uVar2;
}

/* ref: FUN_005d50e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d50e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = REFG(int, 0x137104c);
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) != '\x01') {
    uVar3 = F_00424810(REFG(int, 0x137104c) GEN_EDX_FWD);
    if (uVar3 != 0) {
      uVar3 = F_00424810(iVar5 GEN_EDX_ARG);
      uVar3 = F_00974710(uVar3 GEN_EDX_ARG);
      *(bool *)this = (char)uVar3 != '\0';
    }
    if (*((int *)GEN_TOP(((int)this + 4))) == 1) {
      bVar2 = F_005d99e0();
      if (bVar2 != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
      }
    }
    F_005424f0(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
    F_00b75760(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    F_00a64810(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
    F_005368d0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    F_00ab6180(&REFG(undefined1, 0x14b5220) GEN_EDX_ARG);
    F_00a4af10(&REFG(undefined, 0x14a7394) GEN_EDX_ARG);
    F_00ab7ac0(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
    F_00ac8d80(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
    F_00ae0b60();
    F_00a47c20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    F_00a63370(&REFG(undefined, 0x14a9728) GEN_EDX_ARG);
    F_00a357a0(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG);
    F_00ab8420(&REFG(undefined, 0x14b5180) GEN_EDX_ARG);
    F_00a4fea0();
    F_00a643d0(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
    if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
      F_00542f00(&REFG(undefined, 0x1305d00) GEN_EDX_ARG,REFG(int * PTR32, 0x1379694));
    }
    F_00ae0cc0();
    F_00ae12a0();
    F_00b7a5b0(&REFG(undefined, 0x14c5798) GEN_EDX_ARG);
    F_00ae3d00(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
    F_00b70d80(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    F_00a64400();
    F_00a64740(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
    F_00a64420(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
    if (REFG(int, 0x1488344) != 0) {
      this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
      F_007103a0(this_00 GEN_EDX_ARG);
    }
    F_00a806e0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    F_00ab04d0(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG);
    F_00a66dc0(&REFG(undefined, 0x14aa74c) GEN_EDX_ARG);
    F_00a63780(&REFG(undefined, 0x14a9718) GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar4 = REFG(int * PTR32, 0x1379694);
    }
    if ((*(char *)this != '\0') || (*((int *)GEN_TOP((REFG(int, 0x1375b00) + 0x28))) != 0)) {
      F_00b7c2f0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
      F_00b7c3b0();
    }
    F_00ab8e60();
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xd4))))(piVar4 GEN_EDX_ARG);
      F_00b7add0();
    }
    fVar6 = GEN_X87((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)*((float *)GEN_TOP(((int)this + 0x2c))));
    fVar1 = (float)fVar6;
    *((float *)GEN_TOP(((int)this + 0x2c))) = fVar1;
    if ((float10)1 <= (float10)fVar1) {
      iVar5 = (int)fVar6;
      *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + iVar5;
      *((float *)GEN_TOP(((int)this + 0x2c))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x2c))) - (float10)iVar5)))
      ;
    }
  }
  return;
}

/* ref: FUN_005d5310 */
GEN_OWN GEN_FRAME uint F_005d5310(void)
{
  GEN_ENTER(0x5d5310u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar2 = F_00aaffb0();
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = F_00ab2a20(uVar4);
      if ((uVar3 != 0) && (*((char *)GEN_TOP((uVar3 + 0x10))) != '\0')) {
        uVar3 = F_0068eb90(uVar4);
        (*(uint *)(gen_frame + 0x0)) = uVar3;
        (*(uint *)(gen_frame + 0x4)) = uVar4;
        F_00b5a800(&(*(uint *)(gen_frame + 0x0)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar4 = F_00ab0030();
  uVar3 = 0;
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = F_0068ebc0(uVar3);
      (*(uint *)(gen_frame + 0x4)) = uVar3 + 0x20000;
      (*(uint *)(gen_frame + 0x0)) = uVar2;
      bVar1 = F_00b5a800(&(*(uint *)(gen_frame + 0x0)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return uVar2;
}

/* ref: FUN_005d53a0 */
GEN_OWN GEN_FRAME uint F_005d53a0(void)
{
  GEN_ENTER(0x5d53a0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00aaffb0();
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ab2a20(uVar3);
      if ((uVar2 != 0) && (*((char *)GEN_TOP((uVar2 + 0x10))) != '\0')) {
        uVar2 = F_0068eb90(uVar3);
        (*(uint *)(gen_frame + 0x0)) = uVar2;
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00b5a620(&(*(uint *)(gen_frame + 0x0)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar3 = F_00ab0030();
  uVar2 = 0;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = F_0068ebc0(uVar2);
      (*(uint *)(gen_frame + 0x4)) = uVar2 + 0x20000;
      (*(uint *)(gen_frame + 0x0)) = uVar1;
      uVar1 = F_00b5a620(&(*(uint *)(gen_frame + 0x0)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: FUN_005d5430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  REFG(undefined4, 0x14a31e5) = 0;
  F_00a35600();
  F_00aaf7b0(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
  uVar1 = F_00aaf7d0(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
  uVar1 = CONCAT31((int3)(uVar1 >> 8),param_2);
  *((undefined1 *)GEN_TOP((param_1 + 0x2a))) = param_2;
  uVar2 = 0;
  do {
    if ((((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) != ((undefined *)GEN_TOP(0x0))) &&
       (uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) GEN_EDX_ARG), uVar1 != 0)) {
      F_00b76ca0(uVar1 + 0x1340 GEN_EDX_ARG);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return uVar1;
}

/* ref: FUN_005d54a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d54a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d54a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = F_005d4fe0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),*((undefined4 *)GEN_TOP(((int)this + 0x20))),0,0,
                       0);
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    uVar2 = F_005f4a00(uVar2);
  }
  uVar4 = 0;
  do {
    pvVar3 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar4)]));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00a5f290(pvVar3 GEN_EDX_ARG);
      if (uVar2 != 0) {
        pvVar3 = ((undefined *)GEN_TOP(F_00a5f290(pvVar3 GEN_EDX_ARG)));
        uVar2 = F_00aa1b00(pvVar3 GEN_EDX_ARG);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x158);
  uVar4 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar4)]));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x88))))(piVar1 GEN_EDX_ARG);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x158);
  REFG(undefined4, 0x14a31e5) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0;
  return uVar2;
}

/* ref: FUN_005d5550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x2b))) = 1;
  uVar1 = F_005d5430(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: FUN_005d5560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x2b))) = 0;
  F_005d54a0(this GEN_EDX_FWD,0);
  REFG(undefined4, 0x14b0ee0) = 1;
  F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005d55a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d55a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d55a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != param_1) &&
     (*((int *)GEN_TOP(((int)this + 0x20))) = param_1, *((char *)GEN_TOP(((int)this + 0x2a))) == '\0')) {
    F_00b7a240(&REFG(undefined, 0x14c5798) GEN_EDX_FWD);
    F_005d4fe0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),param_1,0,0,0);
  }
  return;
}

/* ref: FUN_005d55e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d55e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d55e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0071cbd0();
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *(undefined1 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x29))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  F_00a63f00(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
  F_005497c0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
  F_00aaf810(&REFG(undefined1, 0x14b5220) GEN_EDX_ARG);
  F_00a4a9e0(&REFG(undefined, 0x14a7394) GEN_EDX_ARG);
  F_00ab5570(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
  F_00ac2010(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
  F_00ae07b0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG);
  F_00a37e70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  F_00a63320(&REFG(undefined, 0x14a9728) GEN_EDX_ARG);
  F_00a352d0(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG);
  F_00aaf920(&REFG(undefined, 0x14b5180) GEN_EDX_ARG);
  F_00a4fa10(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG);
  F_00ae0c90(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
  F_00ae11e0(&REFG(undefined, 0x14c0878) GEN_EDX_ARG);
  F_00b79d80(&REFG(undefined, 0x14c5798) GEN_EDX_ARG);
  F_00ae33e0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
  F_00a84610(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  F_00a62780(&REFG(undefined, 0x14a9718) GEN_EDX_ARG);
  F_00aadde0(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG);
  F_00b7c040(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
  F_00ab9130();
  F_00ab51d0();
  F_00a4ffe0();
  uVar1 = F_005d5310();
  return uVar1;
}

/* ref: FUN_005d5710 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d5710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 3) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 3;
    F_00a64700(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD);
    F_00b6b2b0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    F_00aaf820();
    F_00a4aa10();
    F_00aaf6a0(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
    F_00ac4a50(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
    F_00ae0800(&REFG(undefined, 0x1336e40) GEN_EDX_ARG);
    F_00a36c80(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    F_00a62930();
    F_00a35320();
    F_00ab1c70(&REFG(undefined, 0x14b5180) GEN_EDX_ARG);
    F_00a53940(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG);
    F_00ae23b0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
    F_00ae3210(&REFG(undefined, 0x14c0878) GEN_EDX_ARG);
    F_00b7a360(&REFG(undefined, 0x14c5798) GEN_EDX_ARG);
    F_00a82f00(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    F_00aade30();
    F_00ab9170();
    F_00ab0d10();
    F_00a50030();
    F_005d53a0();
    F_00710bc0();
    return;
  }
  return;
}

/* ref: FUN_005d5800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d5800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 5))) = param_2;
  return param_2;
}

/* ref: FUN_005d5840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d5840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (param_2 + param_1 * 0x3c) * 0x3c - (int)(*((ulonglong *)GEN_TOP(((int)this + 8))) % 0x15180);
}

/* ref: FUN_005d5890 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005d5890(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5d5890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return (param_1 * 0x3c + param_3) * 0x3c;
}

/* ref: FUN_005d58e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d58e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d58e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((byte *)GEN_TOP((in_ecx + 0x20))) != param_2) {
    *((byte *)GEN_TOP((in_ecx + 0x20))) = param_2;
  }
  return param_2;
}

/* ref: FUN_005d5900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d5900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  return param_1;
}

/* ref: FUN_005d5920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5d5920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *((char *)GEN_TOP((param_1 + 0x30))) = param_4;
  if (param_4 != '\0') {
    uVar2 = param_2 * 0x3c + param_3;
    iVar3 = ((((((int)param_2 >> 0x1f) << 4 | param_2 >> 0x1c) - ((int)param_2 >> 0x1f)) -
             (uint)(param_2 * 0x10 < param_2)) * 4 | param_2 * 0xf >> 0x1e) + ((int)param_3 >> 0x1f)
            + (uint)CARRY4(param_2 * 0x3c,param_3);
    uVar1 = (((iVar3 * 0x10 | uVar2 >> 0x1c) - iVar3) - (uint)(uVar2 * 0x10 < uVar2)) * 4 |
            uVar2 * 0xf >> 0x1e;
    *((uint *)GEN_TOP((param_1 + 0x28))) = uVar2 * 0x3c;
    *((uint *)GEN_TOP((param_1 + 0x2c))) = uVar1;
    return uVar1;
  }
  uVar2 = (param_3 + param_2 * 0x3c) * 0x3c;
  uVar1 = (uint)(*((ulonglong *)GEN_TOP((param_1 + 8))) % 0x15180);
  *((uint *)GEN_TOP((param_1 + 0x2c))) = ((int)uVar2 >> 0x1f) - (uint)(uVar2 < uVar1);
  *((uint *)GEN_TOP((param_1 + 0x28))) = uVar2 - uVar1;
  return uVar1;
}

/* ref: FUN_005d59d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d59d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5d59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = (undefined2)param_4;
  return (uint)this;
}

/* ref: Client::LayoutEngine::IManagerBase::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
  }
  return uVar1;
}

/* ref: FUN_005d5a90 */
GEN_OWN GEN_NOFRAME unsigned int F_005d5a90(void)
{
  GEN_ENTER(0x5d5a90u, 0u, 0u, 0u, 0u);
  if (REFG(int * PTR32, 0x1379cb0) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 8))))(REFG(int * PTR32, 0x1379cb0) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d5ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x20);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (REFG(undefined4 * PTR32, 0x1379cb0) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1379cb0))))(REFG(undefined4 * PTR32, 0x1379cb0) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x1379cb0) = ((undefined4 *)GEN_TOP(0x0));
  }
  return;
}

/* ref: FUN_005d5b00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    }
  }
  return;
}

/* ref: FUN_005d5b50 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005d5b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x4c + (uint)param_2 * 4)));
}

/* ref: FUN_005d5b70 */
GEN_OWN GEN_FRAME float10 F_005d5b70(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x5d5b70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_005d5b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x5d5b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_4;
  if (param_7 != ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x32))) = *param_7;
    *((undefined4 *)GEN_TOP(((int)this + 0x36))) = param_7[1];
  }
  uVar1 = F_00513dc0(param_2,(int)this + 0x94,0,0);
  *((uint *)GEN_TOP(((int)this + 0xd8))) = uVar1;
  uVar1 = F_0050b6c0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  return uVar1;
}

/* ref: FUN_005d5c10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d5c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) == 7;
}

/* ref: FUN_005d5c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 0x10))) == 4) && (*((int *)GEN_TOP(((int)this + 0x90))) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x90))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x90))) GEN_EDX_FWD);
    return uVar1;
  }
  return (int)this + 0x70;
}

/* ref: FUN_005d5c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x48))) + 8)));
}

/* ref: FUN_005d5c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5c60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 + 0x1b4 + (uint)param_2 * 0xc;
  uVar2 = (uint)*((ushort *)GEN_TOP((iVar1 + 8)));
  *((ushort *)GEN_TOP((iVar1 + 8))) = *((ushort *)GEN_TOP((iVar1 + 8))) + 1;
  uVar3 = 0;
  switch((unsigned int)(uintptr_t)((uint)param_2)) {
  case 1: ;
  case 3: ;
    uVar3 = *((int *)GEN_TOP((iVar1 + 4))) + uVar2 * 0x48;
    goto LAB_005d5cef;
  default: ;
    goto switchD_005d5c8c_caseD_2;
  case 4: ;
  case 0x29: ;
  case 0x2b: ;
    iVar4 = uVar2 * 0xa0;
    break;
  case 5: ;
  case 0x33: ;
  case 0x44: ;
  case 0x45: ;
    iVar4 = uVar2 * 0x60;
    break;
  case 6: ;
  case 0xf: ;
    iVar4 = uVar2 * 0xf0;
    break;
  case 7: ;
    iVar4 = uVar2 * 0xc0;
    break;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x48: ;
    iVar4 = uVar2 << 7;
    break;
  case 0xd: ;
  case 0x27: ;
  case 0x2f: ;
    uVar3 = *((int *)GEN_TOP((iVar1 + 4))) + uVar2 * 0x38;
    goto LAB_005d5cef;
  case 0x28: ;
  case 0x39: ;
  case 0x3b: ;
  case 0x43: ;
  case 0x47: ;
    iVar4 = uVar2 * 0x90;
    break;
  case 0x2c: ;
  case 0x3a: ;
  case 0x41: ;
  case 0x42: ;
  case 0x46: ;
    iVar4 = uVar2 * 0x70;
  }
  uVar3 = iVar4 + *((int *)GEN_TOP((iVar1 + 4)));
LAB_005d5cef: ;
  if (uVar3 != 0) {
    *((uint *)GEN_TOP((uVar3 + 0x1c))) = uVar2;
  }
switchD_005d5c8c_caseD_2: ;
  return uVar3;
}

/* ref: FUN_005d5d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0xa0 + *((int *)GEN_TOP((in_ecx + 0x538)));
}

/* ref: FUN_005d5d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d5d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d5d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x80 + *((int *)GEN_TOP((in_ecx + 0x53c)));
}

/* ref: FUN_005d5db0 */
GEN_OWN GEN_FRAME byte F_005d5db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP((param_1 + uVar1))) != (&REFG(undefined1, 0x10a2a28))[(int)(uVar1)]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5de0 */
GEN_OWN GEN_FRAME byte F_005d5de0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP((param_1 + uVar1))) != (&REFG(undefined1, 0x10a2a30))[(int)(uVar1)]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e10 */
GEN_OWN GEN_FRAME byte F_005d5e10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP((param_1 + uVar1))) != (&REFG(undefined1, 0x10a2a38))[(int)(uVar1)]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e40 */
GEN_OWN GEN_FRAME byte F_005d5e40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP((param_1 + uVar1))) != (&REFG(undefined1, 0x10a2a20))[(int)(uVar1)]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5e70 */
GEN_OWN GEN_FRAME byte F_005d5e70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP((param_1 + uVar1))) != (&REFG(undefined1, 0x10a2a18))[(int)(uVar1)]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 1;
}

/* ref: FUN_005d5ea0 */
GEN_OWN GEN_FRAME uint F_005d5ea0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d5ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG);
  uVar3 = 0;
  do {
    if (*((char *)GEN_TOP((uVar1 + uVar3))) != (&REFG(undefined1, 0x10a2a38))[(int)(uVar3)]) {
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  uVar3 = 0;
  iVar4 = uVar1 + 0xc;
  if (*((uint *)GEN_TOP((uVar1 + 8))) != 0) {
    do {
      uVar2 = 0;
      while (*((char *)GEN_TOP((iVar4 + uVar2))) == (&REFG(undefined1, 0x10a2a18))[(int)(uVar2)]) {
        uVar2 = uVar2 + 1;
        if (3 < uVar2) {
          return iVar4 + 8;
        }
      }
      iVar4 = iVar4 + *((int *)GEN_TOP((iVar4 + 4)));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((uint *)GEN_TOP((uVar1 + 8))));
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d5fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d5fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_005d5fb0(void)
{
  GEN_ENTER(0x5d5fb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_005d5fe0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d5fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d5fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: FUN_005d6000 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 4)));
  }
  return 0;
}

/* ref: FUN_005d6060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_005d60a0 */
GEN_OWN GEN_FRAME uint F_005d60a0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d60a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return param_2 << (('\x04' - param_1) * '\b' & 0x1fU) | param_3;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d60c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d60f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d60f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = REFG(undefined4, 0x1302cf0);
  param_1[1] = REFG(undefined4, 0x1302cf4);
  param_1[2] = REFG(undefined4, 0x1302cf8);
  param_1[3] = REFG(undefined4, 0x1302cfc);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c60));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d6150u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf19 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6160(void)
{
  GEN_ENTER(0x5d6160u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6180(void)
{
  GEN_ENTER(0x5d6180u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d61a0(void)
{
  GEN_ENTER(0x5d61a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf31 */
GEN_OWN GEN_NOFRAME unsigned int F_005d61b0(void)
{
  GEN_ENTER(0x5d61b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf32 */
GEN_OWN GEN_NOFRAME unsigned int F_005d61c0(void)
{
  GEN_ENTER(0x5d61c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf34 */
GEN_OWN GEN_NOFRAME uint F_005d61d0(void)
{
  GEN_ENTER(0x5d61d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf33 */
GEN_OWN GEN_NOFRAME uint F_005d61e0(void)
{
  GEN_ENTER(0x5d61e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf35 */
GEN_OWN GEN_NOFRAME byte F_005d61f0(void)
{
  GEN_ENTER(0x5d61f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf36 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d6210u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xdc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf49 */
GEN_OWN GEN_NOFRAME byte F_005d6220(void)
{
  GEN_ENTER(0x5d6220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_005d6240 */
GEN_OWN GEN_FRAME byte F_005d6240(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d6240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  if (((param_1 != '\r') && (param_1 != '/')) && (param_1 != 'A')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005d6260 */
GEN_OWN GEN_FRAME byte F_005d6260(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d6260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 5: ;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x33: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x42: ;
  case 0x43: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x47: ;
  case 0x48: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005d62e0 */
GEN_OWN GEN_FRAME uint F_005d62e0(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d62e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
  case 3: ;
    return 0x48;
  case 4: ;
  case 0x29: ;
  case 0x2b: ;
    return 0xa0;
  case 5: ;
  case 0x33: ;
  case 0x44: ;
  case 0x45: ;
    return 0x60;
  case 6: ;
  case 0xf: ;
    uVar1 = 0xf0;
    break;
  case 7: ;
    return 0xc0;
  case 8: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
  case 0x31: ;
  case 0x48: ;
    return 0x80;
  case 0xd: ;
  case 0x27: ;
  case 0x2f: ;
    return 0x38;
  case 0x28: ;
  case 0x39: ;
  case 0x3b: ;
  case 0x43: ;
  case 0x47: ;
    return 0x90;
  case 0x2c: ;
  case 0x3a: ;
  case 0x41: ;
  case 0x42: ;
  case 0x46: ;
    return 0x70;
  }
  return uVar1;
}

/* ref: FUN_005d63b0 */
GEN_OWN GEN_FRAME byte F_005d63b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d63b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if ((*param_1 != 0) && (*((short *)GEN_TOP((*param_1 + 0x12))) != 0)) {
    return 0;
  }
  if (param_2 == '\0') {
    if (param_1[6] != 0) {
      return 0;
    }
    if ((char)param_1[2] == '\0') {
      return 0;
    }
    if (param_1[3] != 0) {
      return 0;
    }
  }
  else {
    if (param_1[6] != 2) {
      return 0;
    }
    if ((char)param_1[2] == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_005d63f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d63f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d63f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6420(void)
{
  GEN_ENTER(0x5d6420u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_005d6450 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
  }
  return;
}

/* ref: FUN_005d6480 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d6480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    F_00c9f290(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(undefined1)param_1);
    return;
  }
  return;
}

/* ref: FUN_005d64a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d64a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d64a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar2;
}

/* ref: FUN_005d6530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x60))) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d6540(void)
{
  GEN_ENTER(0x5d6540u, 0u, 0u, 0u, 0u);
  return 0x10a256d;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6560(void)
{
  GEN_ENTER(0x5d6560u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6570(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  
  pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf4))))(param_1 GEN_EDX_FWD)));
  fVar1 = pfVar4[1];
  fVar2 = *pfVar4;
  fVar3 = pfVar4[2];
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe4))))(param_1 GEN_EDX_ARG)));
  *((undefined4 *)GEN_TOP(param_2)) = *puVar5;
  *((undefined4 *)GEN_TOP((param_2 + 4))) = puVar5[1];
  *((undefined4 *)GEN_TOP((param_2 + 8))) = puVar5[2];
  *((float *)GEN_TOP((param_2 + 0xc))) =
       ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                                   ((float10)fVar2 * (float10)fVar2 +
                                   (float10)fVar1 * (float10)fVar1))))))));
  return param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d65e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d65e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)pfVar7[2] * (float10)pfVar7[2] +
                                      ((float10)*pfVar7 * (float10)*pfVar7 +
                                      (float10)pfVar7[1] * (float10)pfVar7[1]))))))));
  pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  fVar2 = *pfVar7;
  fVar8 = (float10)fVar1;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  fVar5 = *pfVar7;
  fVar9 = (float10)fVar1;
  fVar1 = pfVar7[1];
  fVar6 = pfVar7[2];
  *param_1 = (float)((float10)fVar2 - fVar8);
  param_1[1] = (float)((float10)fVar3 - fVar8);
  param_1[2] = (float)((float10)fVar4 - fVar8);
  param_1[4] = (float)(fVar9 + (float10)fVar5);
  param_1[5] = (float)((float10)fVar1 + fVar9);
  param_1[6] = (float)(fVar9 + (float10)fVar6);
  return (uint)param_1;
}

/* ref: FUN_005d66c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d66c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d66c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0xa0))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0xc0))) = 0;
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d66f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d66f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf42 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf44 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  F_005fec10(param_1 GEN_EDX_ARG,&REFG(float, 0x1302d00),uVar1);
  return (uint)param_1;
}

/* ref: FUN_005d6770 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d6770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if ((((*((byte *)GEN_TOP((in_ecx + 0x20))) & 1) == 0) && (bVar1 = *((byte *)GEN_TOP((in_ecx + 0x28))) & 0xf, bVar1 != 9)
      ) && (bVar1 != 8)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d6860 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x9c))) == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,param_1,param_2);
  return (byte)uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_005d68a0(void)
{
  GEN_ENTER(0x5d68a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf21 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d69a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d69a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)((*((uint *)GEN_TOP((in_ecx + 0x30))) & 0xc0000000) != 0);
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d69b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d69b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*(uint *)(this + 0x30) & 0xc0000000) != 0) {
    bVar1 = F_00b5b5c0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,this + 0x30);
    return bVar1;
  }
  return 1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf57 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d69d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xe4))))
                    (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf59 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d69e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d69e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xec))))
                    (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf61 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d69f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d69f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xf4))))
                    (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d6a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xfc))))
                    (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_005d6a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6a10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005d6a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_005d6ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if (4 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 1;
  }
  return param_1;
}

/* ref: FUN_005d6b20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d6b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x5c)));
  iVar2 = 4;
  do {
    if (*piVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 0x90))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_FWD,param_1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return;
}

/* ref: FUN_005d6b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6b50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
  return (uint)in_ecx;
}

/* ref: FUN_005d6b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
  return (uint)this;
}

/* ref: FUN_005d6be0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1c))),0,0x34);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
  *((uint *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = REFG(undefined4, 0x1302cf0);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = REFG(undefined4, 0x1302cf4);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = REFG(undefined4, 0x1302cf8);
  *((uint *)GEN_TOP(((int)this + 0x6c))) = REFG(undefined4, 0x1302cfc);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = REFG(undefined4, 0x1302cf0);
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = REFG(undefined4, 0x1302cf4);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = REFG(undefined4, 0x1302cf8);
  uVar1 = REFG(undefined4, 0x1302cfc);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = REFG(undefined4, 0x1302cfc);
  return uVar1;
}

/* ref: FUN_005d6c60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d6c60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 5;
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 3;
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  *((float *)GEN_TOP((param_1 + 0x24))) = ((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((param_2 + 8))))));
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *((bool *)GEN_TOP((param_1 + 0x35))) = *((char *)GEN_TOP((param_2 + 0x11))) != '\0';
  *((bool *)GEN_TOP((param_1 + 0x36))) = *((char *)GEN_TOP((param_2 + 0x16))) != '\0';
  if (0.0 < *((float *)GEN_TOP((param_2 + 8)))) {
    *((undefined1 *)GEN_TOP((param_1 + 0x34))) = 1;
    return 1;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x34))) = 0;
  return 0;
}

/* ref: FUN_005d6cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
  return (uint)in_ecx;
}

/* ref: FUN_005d6d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf8 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d6da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  bool bVar1;
  
  if (param_2 == 8) {
    bVar1 = REFG(float, 0x1087f04) <= *((float *)GEN_TOP((in_ecx + 0x24)));
    *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 8;
    if (bVar1) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = 0;
    }
    return 1;
  }
  if (param_2 != 9) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 9;
  return 1;
}

/* ref: FUN_005d6e10 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005d6e10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6e10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 8)));
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 / (float10)*((float *)GEN_TOP((param_1 + 0xc)))))) +
                 (float10)*((float *)GEN_TOP(param_1)))));
  fVar4 = (float10)fVar2;
  *((float *)GEN_TOP(param_1)) = fVar2;
  fVar3 = (float10)1;
  if (fVar3 <= fVar4) {
    *((undefined4 *)GEN_TOP(param_1)) = 0;
  }
  fVar5 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)*((float *)GEN_TOP(param_1)) *
                                         (float10)*(float *)&REFG(undefined, 0x131f3dc) -
                                        (float10)*(double *)&REFG(undefined, 0x1080228)))));
  *((float *)GEN_TOP((param_1 + 4))) = (float)((float10)(float)fVar5 * (float10)fVar1);
  return (!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar3)) && !(fVar4 < fVar3);
}

/* ref: FUN_005d6e90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x90))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x94))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc4))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0xffff;
  *((undefined2 *)GEN_TOP((in_ecx + 0x10))) = 0xffff;
  return 0xffff;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d6f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d6f80(void)
{
  GEN_ENTER(0x5d6f80u, 0u, 0u, 0u, 0u);
  return 0x10a257a;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5d6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6fb0(void)
{
  GEN_ENTER(0x5d6fb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d6fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d6fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d6fd0(void)
{
  GEN_ENTER(0x5d6fd0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_005d6fe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d6fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 0xf0)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf21 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d7010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  return uVar1 != 0xffffffff;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d7030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf53 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7040(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d7040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x11c))))(param_1 GEN_EDX_ARG);
  if ((uVar2 != 0xffffffff) && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1[0xc] + 0xf0))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d70a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d70a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if (uVar1 != 0xffffffff) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x40))))
                      (*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,*param_1,param_1[1],param_1[2]);
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d70f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5d70f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x11c))))(param_1 GEN_EDX_FWD);
  uVar1 = (*(uint *)&gen_args[0]);
  if (uVar2 != 0xffffffff) {
    F_00a1e160(&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xc])) + 0x48))))(((int *)GEN_TOP(param_1[0xc])) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
  }
  param_1[0x14] = *((int *)GEN_TOP(uVar1));
  param_1[0x15] = *((int *)GEN_TOP((uVar1 + 4)));
  uVar2 = *((uint *)GEN_TOP((uVar1 + 8)));
  param_1[0x16] = uVar2;
  param_1[0x17] = *((int *)GEN_TOP((uVar1 + 0xc)));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf62 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,param_1 + 0x10);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_ARG,param_1 + 0x20);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf71 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d71a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d71a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    uVar1 = F_00a1b740(*((int *)GEN_TOP((in_ecx + 0x30))));
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d71f0(void)
{
  GEN_ENTER(0x5d71f0u, 0u, 0u, 0u, 0u);
  return 0x10a257b;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d7200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5d7210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf69 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5d7220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_005d7230(void)
{
  GEN_ENTER(0x5d7230u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d7240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d7250(void)
{
  GEN_ENTER(0x5d7250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d7260u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,param_1 + 0x10);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_ARG,param_1 + 0x20);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
        return;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf36 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d7330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*(int *)(this + 0x34) != 0) {
    F_00c9f290(*(int *)(this + 0x34) GEN_EDX_FWD,(undefined1)param_1);
    return;
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d7350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d7350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x30))) + 0x68))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return;
}

/* ref: FUN_005d7370 */
GEN_OWN GEN_NOFRAME uint F_005d7370(void)
{
  GEN_ENTER(0x5d7370u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x1379d40) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379d40) = *(uint *)&REFG(undefined, 0x1379d40) | 1;
    REFG(float, 0x1379d30) = 0;
    REFG(float, 0x1379d34) = 0;
    REFG(float, 0x1379d38) = 0;
    REFG(float, 0x1379d3c) = 0;
  }
  return 0x1379d30;
}

/* ref: FUN_005d73b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d73b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d73b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2c3c));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068fad0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x48))) + 8))) GEN_EDX_FWD,*(int *)(this + 0x30));
    uVar1 = F_00a1b5f0(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d7450 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2d54));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d74c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d74c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068b500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x48))) + 8))) GEN_EDX_FWD,*(int *)(this + 0x30));
    uVar1 = F_00a1b620(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d74f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2e6c));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = REFG(undefined4, 0x1302e54);
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = REFG(undefined4, 0x1302e58);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = REFG(undefined4, 0x1302e5c);
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d7580(void)
{
  GEN_ENTER(0x5d7580u, 0u, 0u, 0u, 0u);
  return 0x10a2696;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
        return;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    uVar1 = F_00690020(*((int *)GEN_TOP((in_ecx + 0x30))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf19 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x30) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 200))))(*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG);
      this[0x8c] = (undefined1)((byte)this[0x8c] | 8);
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d7690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((byte)this[0x8c] & 8) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xcc))))(piVar1 GEN_EDX_FWD);
    this[0x8c] = (undefined1)((byte)this[0x8c] & 0xf7);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d76c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d76c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  code * pcVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  if ((*((char *)GEN_TOP((uVar2 + 0x55))) == '\0') && (((byte)this[0x20] & 2) != 0)) {
    uVar2 = F_00a1e4c0(*param_2,((char *)REFP(0x10a2764)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x100)));
    *(uint *)(this + 0x30) = uVar2;
    uVar2 = (*pcVar1)(this,param_1);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  return;
}

/* ref: FUN_005d7740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7740(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  float10 fVar2;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x88))) = *((undefined4 *)GEN_TOP(param_2));
  uVar1 = param_2;
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = (uint)*((byte *)GEN_TOP(param_2));
    F_0068b780(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,(float)((float10)uVar1 / fVar2),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_2 + 1))) / fVar2))),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_2 + 2))) / fVar2))),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_2 + 3))) / fVar2))));
  }
  return uVar1;
}

/* ref: FUN_005d77c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d77c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5d77c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_2);
  *((undefined1 *)GEN_TOP((param_1 + 0x8a))) = (undefined1)param_4;
  *((undefined1 *)GEN_TOP((param_1 + 0x88))) = (undefined1)param_2;
  *((byte *)GEN_TOP((param_1 + 0x89))) = param_3;
  *((byte *)GEN_TOP((param_1 + 0x8b))) = param_5;
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = param_2 & 0xff;
    F_0068b780(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,(float)((float10)uVar1 / fVar2),
                 (float)((float10)param_3 / fVar2),((float)GEN_TOF(((float10)(param_4 & 0xff) / fVar2))),
                 (float)((float10)param_5 / fVar2));
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7860(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  float10 fVar5;
  
  piVar1 = ((int *)GEN_TOP((param_1 + 0x30)));
  if (*piVar1 != 0) {
    pbVar2 = ((byte *)GEN_TOP((param_1 + 0x8b)));
    pbVar3 = ((byte *)GEN_TOP((param_1 + 0x8a)));
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
    pbVar4 = ((byte *)GEN_TOP((param_1 + 0x89)));
    param_1 = (uint)*((byte *)GEN_TOP((param_1 + 0x88)));
    F_0068b780(*piVar1 GEN_EDX_FWD,((float)GEN_TOF((((float10)param_1 / fVar5) * (float10)*((float *)GEN_TOP(param_2))))),
                 ((float)GEN_TOF((((float10)*pbVar4 / fVar5) * (float10)*((float *)GEN_TOP((param_2 + 4)))))),
                 ((float)GEN_TOF((((float10)*pbVar3 / fVar5) * (float10)*((float *)GEN_TOP((param_2 + 8)))))),
                 ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0xc))) * ((float10)*pbVar2 / fVar5)))));
  }
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x2b] & 8) != 0) && (*(undefined * PTR32 *)(this + 0x30) != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  this[0x8c] = (undefined1)((byte)this[0x8c] ^ ((byte)this[0x8c] ^ (byte)param_1) & 1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_FWD,param_1);
  if (*(undefined * PTR32 *)(this + 0x30) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_ARG);
    if ((byte)param_1 == 0) {
      if ((char)uVar1 != '\0') {
        uVar1 = F_0068b730(*(undefined4 *)(this + 0x30) GEN_EDX_ARG,(float)(float10)0);
      }
    }
    else if ((char)uVar1 == '\0') {
      uVar1 = F_00699cb0(*(undefined4 *)(this + 0x30) GEN_EDX_ARG,(float)(float10)0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7990(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d7990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int in_ecx;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_8;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 != *(float *)&REFG(undefined, 0x1088114);
  bVar3 = param_2 < *(float *)&REFG(undefined, 0x1088114);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),(!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 200))))(param_1 GEN_EDX_FWD,local_8);
  in_ecx = param_1[0xc];
  if (in_ecx != 0) {
    if ((!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2)) {
      F_0068b7c0(in_ecx GEN_EDX_ARG,param_2);
      return uVar4;
    }
    F_0068b7c0(in_ecx GEN_EDX_ARG,(float)(float10)1);
  }
  return uVar4;
}

/* ref: FUN_005d79f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d79f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d79f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0xe0)));
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
  uVar2 = (*pcVar1)(param_1,1);
  if (param_1[0xc] != 0) {
    F_0068b7c0(param_1[0xc] GEN_EDX_FWD,(float)(float10)1);
    if (param_3 != '\0') {
      uVar2 = F_00699b70(((undefined *)GEN_TOP(param_1[0xc])) GEN_EDX_ARG);
      return uVar2;
    }
    uVar2 = F_00699cb0(param_1[0xc] GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_005d7a50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d7a50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d7a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if ((*((int *)GEN_TOP((param_1 + 0x30))) != 0) && ((*((byte *)GEN_TOP((param_1 + 0x8c))) & 1) != 0)) {
    F_0068b730(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,param_2);
  }
  *((byte *)GEN_TOP((param_1 + 0x8c))) = *((byte *)GEN_TOP((param_1 + 0x8c))) & 0xfe;
  return;
}

/* ref: FUN_005d7a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_1 == 1) {
    *((byte *)GEN_TOP(((int)this + 0x8c))) = *((byte *)GEN_TOP(((int)this + 0x8c))) & 0xfe;
  }
  uVar1 = param_1;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
    F_0068b6f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,0,param_1);
    uVar1 = 0xffffffff;
  }
  *((short *)GEN_TOP(((int)this + 0x8e))) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_005d7ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a309c));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d7b30(void)
{
  GEN_ENTER(0x5d7b30u, 0u, 0u, 0u, 0u);
  return 0x10a26f9;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d7b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d7b70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d7b80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d7b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x30))) + 0x68))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d7bb0(void)
{
  GEN_ENTER(0x5d7bb0u, 0u, 0u, 0u, 0u);
  return 0x10a26fa;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint F_005d7bc0(void)
{
  GEN_ENTER(0x5d7bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf35 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d7bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d7bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x54)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7be0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5d7be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  float fVar1;
  uint uVar2;
  
  fVar1 = (*(float *)&gen_args[0]);
  (*(float *)&gen_args[0]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[0]), 1, 3),1));
  if (!(*(float *)&REFG(undefined, 0x1088114) < fVar1)) {
    (*(float *)&gen_args[0]) = gen_bits2f((uint)GEN_PIECE(&(*(float *)&gen_args[0]), 1, 3) << 8);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe0))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x90))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf56 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d7c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0x2b)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0x2b))) = *((byte *)GEN_TOP((in_ecx + 0x2b))) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf58 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d7c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x30) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)));
  }
  *(undefined4 *)(this + 0x50) = *param_1;
  *(undefined4 *)(this + 0x54) = param_1[1];
  *(undefined4 *)(this + 0x58) = param_1[2];
  uVar2 = param_1[3];
  *(uint *)(this + 0x5c) = uVar2;
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((((*(int *)(this + 0x74) << 0x1c) >> 0x1c) - 1)));
  switch((unsigned int)(uintptr_t)(puVar2)) {
  case 0x0: ;
  case 0x4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    puVar2 = param_1;
    break;
  case 0x1: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
    break;
  case 0x2: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
    break;
  case 0x3: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
  }
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x8));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x14)))));
  }
  *(undefined4 *)(this + 0x60) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(this + 100) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(this + 0x68) = (*(undefined4 *)(gen_frame + 0x8));
  return (uint)puVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,param_1 + 0x10);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_ARG,param_1 + 0x20);
  return uVar1;
}

/* ref: FUN_005d7ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d7ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[1];
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x74))) & 0xfffffff1 | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint F_005d7ed0(void)
{
  GEN_ENTER(0x5d7ed0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_005d7ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x74))) = *((uint *)GEN_TOP(((int)this + 0x74))) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint F_005d7f20(void)
{
  GEN_ENTER(0x5d7f20u, 0u, 0u, 0u, 0u);
  return 0x22;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d7fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d7fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint F_005d7fc0(void)
{
  GEN_ENTER(0x5d7fc0u, 0u, 0u, 0u, 0u);
  return 10;
}

/* ref: FUN_005d7fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d7fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d7fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x74))) = *((uint *)GEN_TOP(((int)this + 0x74))) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint F_005d8010(void)
{
  GEN_ENTER(0x5d8010u, 0u, 0u, 0u, 0u);
  return 0x12;
}

/* ref: FUN_005d8030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x74))) = *((uint *)GEN_TOP(((int)this + 0x74))) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (((byte)*(undefined4 *)(this + 0x74) & 0xf) == 5) {
    if (*(int *)(this + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    uVar2 = F_00507260(((undefined *)GEN_TOP((iVar1 + 0x14c))) GEN_EDX_FWD,this + 0x88);
    return uVar2;
  }
  return 0x10a26fb;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d80a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d80a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (-(uint)(*((char *)GEN_TOP((in_ecx + 0x8c))) != '\0') & 0x42) + 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d80c0(void)
{
  GEN_ENTER(0x5d80c0u, 0u, 0u, 0u, 0u);
  return 0x10a275e;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d80d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d80d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d80e0(void)
{
  GEN_ENTER(0x5d80e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf62 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d80f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d80f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_SUSPECT(0x5d80f0u, "local_20, local_1c, local_18");
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = local_18;
  uVar2 = local_1c;
  uVar3 = local_20;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((in_ecx + 0x60))))) {
  case 1: ;
    uVar3 = *param_2;
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    break;
  case 2: ;
    uVar1 = *param_2;
    uVar2 = uVar1;
    uVar3 = uVar1;
    break;
  case 3: ;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = uVar1;
    break;
  case 4: ;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
    uVar2 = param_2[1];
    uVar3 = *param_2;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = uVar3;
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = uVar1;
  return 0;
}

/* ref: FUN_005d81a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d81a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d81a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  uVar1 = param_2[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d81d0(void)
{
  GEN_ENTER(0x5d81d0u, 0u, 0u, 0u, 0u);
  return 0x10a275f;
}

/* ref: FUN_005d81f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d81f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d81f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  return uVar1;
}

/* ref: FUN_005d8210 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
  F_009945a0(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d82b0(void)
{
  GEN_ENTER(0x5d82b0u, 0u, 0u, 0u, 0u);
  return 0x10a27bf;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d82c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d82c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00984a00(this + 0x74 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_005d82e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d82e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d82e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  return uVar1;
}

/* ref: FUN_005d8310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  return uVar1;
}

/* ref: FUN_005d8340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  return uVar1;
}

/* ref: FUN_005d8370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d8390(void)
{
  GEN_ENTER(0x5d8390u, 0u, 0u, 0u, 0u);
  return 0x10a27c0;
}

/* ref: FUN_005d83a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d83a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d83a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a32cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = (undefined4)REFG(float, 0x1375ad0);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (undefined4)REFG(float, 0x1375ad8);
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d8430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d8440(void)
{
  GEN_ENTER(0x5d8440u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = (undefined4)gen_fl2bits((float)extraout_ST0);
  return (uint)param_1;
}

/* ref: FUN_005d84a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d84a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d84a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005d83a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_005d84d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d84d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  uVar1 = param_2[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d8500(void)
{
  GEN_ENTER(0x5d8500u, 0u, 0u, 0u, 0u);
  return 0x10a27c1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  float fVar2;
  undefined4 * puVar3;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
  fVar2 = gen_bits2f(puVar3[1]);
  uVar1 = puVar3[2];
  *param_1 = *puVar3;
  param_1[2] = uVar1;
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)(float)extraout_ST0 + (float10)fVar2));
  param_1[3] = (undefined4)gen_fl2bits((float)extraout_ST0);
  return (uint)param_1;
}

/* ref: FUN_005d8590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005d83a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_005d85c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d85c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d85c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d85f0(void)
{
  GEN_ENTER(0x5d85f0u, 0u, 0u, 0u, 0u);
  return 0x10a27c2;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf68 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_005d8600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*(float *)(&REFG(undefined, 0x10a27c4) + *((int *)GEN_TOP((in_ecx + 0x50))) * 4);
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf61 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  *(float *)&REFG(undefined, 0x1379d28) = (float)extraout_ST0;
  *(float *)&REFG(undefined, 0x1379d20) = *(float *)&REFG(undefined, 0x1379d28);
  *(undefined4 *)&REFG(undefined, 0x1379d24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d24), REFG(float, 0x10a27e4));
  return 0x1379d20;
}

/* ref: FUN_005d8650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005d83a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3614));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_005d8680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 4;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d86a0(void)
{
  GEN_ENTER(0x5d86a0u, 0u, 0u, 0u, 0u);
  return 0x10a27c3;
}

/* ref: FUN_005d86b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d86b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005d83a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a372c));
  *((undefined1 *)GEN_TOP(((int)this + 0x50))) = 1;
  return (uint)this;
}

/* ref: FUN_005d86e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d86e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d86e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 3;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d8700(void)
{
  GEN_ENTER(0x5d8700u, 0u, 0u, 0u, 0u);
  return 0x10a27e8;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_005d8710(void)
{
  GEN_ENTER(0x5d8710u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d8720(void)
{
  GEN_ENTER(0x5d8720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d8730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a1e160(this + 0x3c,param_1);
  return;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005d8750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0x94)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0x94))) = *((byte *)GEN_TOP((in_ecx + 0x94))) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d8770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x34))) != 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d8780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5d8780u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x34) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x7c))))
                      (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d87a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5d87a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_8;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 != *(float *)&REFG(undefined, 0x1088114);
  bVar3 = param_2 < *(float *)&REFG(undefined, 0x1088114);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),(!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 200))))(param_1 GEN_EDX_FWD,local_8);
  if (param_1[0xd] != 0) {
    if ((!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2)) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 0x24))))((undefined4)gen_fl2bits(param_2),0);
      return uVar4;
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 0x24))))((undefined4)gen_fl2bits((float)(float10)1),0)
    ;
  }
  return uVar4;
}

/* ref: FUN_005d8820 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d8820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((in_ecx + 0x90))))) {
  case 8: ;
  case 9: ;
  case 0xb: ;
  case 0xc: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005d88c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d88c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d88c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  *((uint *)GEN_TOP(((int)this + 0x88))) = uVar1;
  return uVar1;
}

/* ref: FUN_005d88f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d88f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d88f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x88))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x88))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  return uVar1;
}

/* ref: FUN_005d8930 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x60)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return;
}

/* ref: FUN_005d8960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8960(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5d8960u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  undefined4 * puVar1;
  float10 fVar2;
  
  if (*((int *)GEN_TOP((param_1 + 0x60))) != 0) {
    fVar2 = (float10)param_3;
    if (param_4 != '\0') {
      fVar2 = GEN_X87((float10)1 - fVar2);
    }
    (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(F_00b66e50(*((int *)GEN_TOP((param_1 + 0x60))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(float)fVar2)));
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_005d89f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d89f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5d89f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  float10 fVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x60))) != 0) {
    fVar1 = (float10)param_3;
    if (param_4 != '\0') {
      fVar1 = GEN_X87((float10)1 - fVar1);
    }
    (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
    F_00b66f40(*((int *)GEN_TOP((param_1 + 0x60))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),(float)fVar1);
    F_004bd580(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (param_4 != '\0') {
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) ^ REFG(uint, 0x10920d0);
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) ^ REFG(uint, 0x10920d0);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) ^ REFG(uint, 0x10920d0);
    }
    F_004bdda0(param_2 GEN_EDX_ARG,&REFG(float, 0x1302c90),&(*(uint *)(gen_frame + 0x0)));
    return (uint)param_2;
  }
  *param_2 = REFG(undefined4, 0x1302cf0);
  param_2[1] = REFG(undefined4, 0x1302cf4);
  param_2[2] = REFG(undefined4, 0x1302cf8);
  param_2[3] = REFG(undefined4, 0x1302cfc);
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint F_005d8b50(void)
{
  GEN_ENTER(0x5d8b50u, 0u, 0u, 0u, 0u);
  return 0x10a27ea;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf27 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5d8b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005d8b70(void)
{
  GEN_ENTER(0x5d8b70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar1 = puVar3[2];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  if (*(int *)(this + 0x60) != 0) {
    iVar5 = 0;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG);
    if (0 < (int)uVar4) {
      (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a27e4)));
      do {
        puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 4))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),iVar5)));
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
        F_005ff0f0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
        iVar5 = iVar5 + 1;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG);
      } while (iVar5 < (int)uVar4);
    }
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  F_005fede0(param_1 GEN_EDX_ARG,&REFG(float, 0x1302d00),uVar1);
  return (uint)param_1;
}

/* ref: FUN_005d8cb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x60)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return;
}

/* ref: FUN_005d8ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_005d8d00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005d8d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d8d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x60)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return;
}

/* ref: FUN_005d8d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_005d8d70 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005d8d70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d8d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_005d8e00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d8e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  short sVar2;
  
  sVar2 = 0;
  *(undefined4 *)this = 0;
  *((short *)GEN_TOP(((int)this + 4))) = (short)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  uVar1 = param_1;
  if (1 < param_1) {
    do {
      uVar1 = uVar1 >> 1;
      sVar2 = sVar2 + 1;
    } while (1 < uVar1);
    *((short *)GEN_TOP(((int)this + 6))) = sVar2;
  }
  return 0;
}

/* ref: FUN_005d8e30 */
GEN_OWN GEN_FRAME uint F_005d8e30(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d8e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if ((uint)param_1 == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar1)))) {
      return (uint)(&REFG(undefined4, 0x10a2810) + iVar2 * 10);
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return 0x10a2810;
}

/* ref: FUN_005d8e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d8e70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    if ((uint)*((byte *)GEN_TOP((param_1 + 0x10))) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      puVar4 = &REFG(undefined4, 0x10a2810) + iVar3 * 10;
      goto LAB_005d8e98;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  puVar4 = &REFG(undefined4, 0x10a2810);
LAB_005d8e98: ;
  uVar2 = (uint)(param_2 == '\0');
  uVar1 = puVar4[uVar2 + 4];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar4[uVar2 + 6];
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = puVar4[uVar2 + 8];
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = puVar4[3];
  return uVar2;
}

/* ref: FUN_005d8ee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d8ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d8ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  *((float *)GEN_TOP(((int)this + 0x40))) = *param_1;
  *((float *)GEN_TOP(((int)this + 0x44))) = param_1[1];
  *((float *)GEN_TOP(((int)this + 0x48))) = param_1[2];
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*((float *)GEN_TOP(((int)this + 0x54)))))));
  fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)*param_1 - (float10)*((float *)GEN_TOP(((int)this + 0x50)))))));
  fVar3 = GEN_X87((float10)((float)GEN_TOF(((float10)param_1[2] - (float10)*((float *)GEN_TOP(((int)this + 0x58)))))));
  if ((float10)*((float *)GEN_TOP(((int)this + 0x20))) <
      (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 + (fVar2 * fVar2 + fVar1 * fVar1))))))))) {
    *((float *)GEN_TOP(((int)this + 0x50U))) = *param_1;
    *((float *)GEN_TOP(((int)this + 0x54))) = param_1[1];
    *((float *)GEN_TOP(((int)this + 0x58))) = param_1[2];
    in_EAX = F_00a1b3d0((int)this + 0x50U,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x20)))));
    *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 1;
  }
  return in_EAX;
}

/* ref: FUN_005d8fa0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_005d8fa0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5d8fa0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  code * pcVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = param_2[1];
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = param_2[2];
  (*(float *)(gen_frame + 0x8)) = fVar3;
  pcVar4 = *((gen_code32 *)GEN_TOP((*param_1 + 0x34)));
  fVar1 = (float)((float10)fVar1 - (float10)*param_3);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)param_3[1]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_3[2]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  *param_5 = ((float)GEN_TOF(((fVar6 * fVar6 + fVar7 * fVar7) + fVar8 * fVar8)));
  (*pcVar4)(param_1,&(*(float *)(gen_frame + 0x0)));
  fVar1 = ((float)GEN_TOF((((float10)param_4 + (float10)(*(float *)(gen_frame + 0xc))) * ((float10)param_4 + (float10)(*(float *)(gen_frame + 0xc))))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (((float10)*param_5 < (float10)fVar1) &&
     (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))
                        (param_1 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),param_5),
     (char)uVar5 != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d9070 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005d9070(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d9070u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  byte bVar1;
  
  bVar1 = F_005d8fa0((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[2]),&(*(float *)&gen_args[2]));
  *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) =
       (*((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) & 2 | bVar1 & 1) * '\x02' | *((byte *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) & 0xf9;
  return bVar1 & 1;
}

/* ref: FUN_005d90f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d90f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d90f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  in_ecx[1] = param_2;
  in_ecx[2] = 0xffffffff;
  *(undefined1 *)(in_ecx + 3) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005d9120 */
GEN_OWN GEN_FRAME uint F_005d9120(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d9120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0') && (REFG(int * PTR32, 0x1379cb0) != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 0xc))))(REFG(int * PTR32, 0x1379cb0) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_005d9150 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005d9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00c472af((*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((char *)REFP(0x10a2570)),(*(undefined4 *)&gen_args[0]));
  F_004ff470(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG,uVar1,0,0);
  *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(undefined4 *)&gen_args[0]);
  return 1;
}

/* ref: FUN_005d9190 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_005d9190(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d9190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  uVar2 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  F_004fe9f0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  if (3 < uVar1) {
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    if (*((char *)GEN_TOP((uVar1 + 2))) == 't') {
      uVar2 = 1;
    }
    else if (*((char *)GEN_TOP((uVar1 + 2))) == 'f') {
      uVar2 = 2;
    }
  }
  F_004e8550(REFG(void * PTR32, 0x1375a64) GEN_EDX_ARG,uVar2);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_005d92a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d92a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d92a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*((char *)GEN_TOP(((int)this + 0x52))) == '\0') && (5 < *((int *)GEN_TOP(((int)this + 0x10))))) {
    bVar1 = F_00550ff0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_FWD);
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_005d9330 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d9330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0xdc))) == *((int *)GEN_TOP(((int)this + 0xe0)))) {
    return 1;
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xe0))) - *((int *)GEN_TOP(((int)this + 0xdc))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + uVar3 * 4))) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if (iVar1 != 2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 1;
}

/* ref: FUN_005d9380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d9380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short * psVar1;
  
  psVar1 = param_1;
  if (((((*((short *)GEN_TOP(((int)this + 0x32))) != *param_1) || (*((short *)GEN_TOP(((int)this + 0x34))) != param_1[1]))
       || (*((short *)GEN_TOP(((int)this + 0x36))) != param_1[2])) ||
      (*((short *)GEN_TOP(((int)this + 0x38))) != param_1[3])) &&
     ((*((int *)GEN_TOP(((int)this + 0x14))) != 6 &&
      ((*((int *)GEN_TOP(((int)this + 0x2c))) == 0 || (*((int *)GEN_TOP(((int)this + 0x2c))) == 5)))))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x32))) = *(undefined4 *)param_1;
    psVar1 = *(short * PTR32 *)(param_1 + 2);
    *((short * PTR32 *)GEN_TOP(((int)this + 0x36))) = psVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  return (uint)psVar1;
}

/* ref: FUN_005d93f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005d93f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d93f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint3 uVar2;
  uint uVar1;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if ((*((short *)GEN_TOP((param_2 + 0x18))) != 0) || (*((char *)GEN_TOP((param_2 + 0x1c))) != '\0')) {
    return param_2 & 0xffffff00;
  }
  uVar2 = (uint3)(param_2 >> 8);
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return CONCAT31(uVar2,1);
  }
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x14))) + param_2)));
  iVar3 = *((int *)GEN_TOP((param_2 + 0x14))) + param_2;
  uVar1 = (uint)uVar2 << 8;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      iVar5 = 0;
      if (*((int *)GEN_TOP((iVar3 + 8))) < 1) {
        return uVar1;
      }
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + iVar3)));
      while (*piVar4 != *param_1) {
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        if (*((int *)GEN_TOP((iVar3 + 8))) <= iVar5) {
          return uVar1;
        }
      }
    }
    else {
      if (iVar5 != 2) {
        return uVar1;
      }
      iVar5 = 0;
      if (*((int *)GEN_TOP((iVar3 + 8))) < 1) {
        return uVar1;
      }
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + iVar3)));
      while (*piVar4 == *param_1) {
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        if (*((int *)GEN_TOP((iVar3 + 8))) <= iVar5) {
          return uVar1;
        }
      }
    }
  }
  return CONCAT31(uVar2,1);
}

/* ref: FUN_005d9480 */
GEN_OWN GEN_NOFRAME unsigned int F_005d9480(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  F_004f4130(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  *param_2 = (float)fVar3;
  return 0;
}

/* ref: FUN_005d9500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 400))) - *((int *)GEN_TOP(((int)this + 0x18c))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18c))) + uVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_FWD,*param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005d9550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005d9550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ushort * puVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  local_8 = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 0x1ca)));
  local_c = 0x4a;
  do {
    uVar1 = (uint)*puVar2;
    if (*puVar2 == 0) goto LAB_005d97a1;
    switch((unsigned int)(uintptr_t)(local_8)) {
    case 0: ;
      F_00604550(*(undefined4 *)(puVar2 - 5),uVar1);
      F_006045a0(*((undefined4 *)GEN_TOP(((int)this + 0x540))),(uint)*puVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0x540))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x538))) = 0;
      break;
    case 2: ;
      F_00604690(*(undefined4 *)(puVar2 - 5),uVar1);
      F_006046e0(*((undefined4 *)GEN_TOP(((int)this + 0x544))),(uint)*puVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0x544))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x53c))) = 0;
      break;
    case 3: ;
      F_00604780(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 4: ;
      F_00604aa0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 5: ;
      uVar3 = *(undefined4 *)(puVar2 - 5);
      goto LAB_005d9790;
    case 6: ;
      F_00604af0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 7: ;
      F_006045f0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 8: ;
      F_00604640(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0xb: ;
      F_006047d0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0xc: ;
      F_00604910(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0xd: ;
      F_00604870(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0xe: ;
      uVar3 = *(undefined4 *)(puVar2 - 5);
LAB_005d9790: ;
      F_00604fa0(uVar3,uVar1);
      break;
    case 0xf: ;
      F_00604820(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x26: ;
      F_00604730(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x27: ;
      F_006049b0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x28: ;
      F_00604a00(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x2a: ;
      F_00604b40(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x2b: ;
      F_00604b90(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x2c: ;
      F_006048c0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x2e: ;
      F_00604960(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x30: ;
      F_00604be0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x32: ;
      F_00604c30(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x38: ;
      F_00604cd0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x39: ;
      F_00604d20(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x3a: ;
      F_00604c80(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x40: ;
      F_00604f00(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x41: ;
      F_00604f50(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x42: ;
      F_00604d70(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x43: ;
      F_00604dc0(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x44: ;
      F_00604e10(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x45: ;
      F_00604e60(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x46: ;
      F_00604a50(*(undefined4 *)(puVar2 - 5),uVar1);
      break;
    case 0x47: ;
      F_00604eb0(*(undefined4 *)(puVar2 - 5),uVar1);
    }
    puVar2[-0xffffffff00000005] = 0;
    puVar2[-0xffffffff00000004] = 0;
    puVar2[-0xffffffff00000003] = 0;
    puVar2[-0xffffffff00000002] = 0;
LAB_005d97a1: ;
    local_8 = local_8 + 1;
    puVar2 = puVar2 + 6;
    local_c = local_c - 1;
    if (local_c == 0) {
      return;
    }
  } while( true );
}

/* ref: FUN_005d9890 */
GEN_OWN GEN_FRAME uint F_005d9890(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5d9890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG);
  if (((undefined *)GEN_TOP(param_1[2])) == &REFG(undefined, 0x6c7662)) {
    uVar3 = 0;
    do {
      if (*((char *)GEN_TOP((uVar2 + uVar3))) != (&REFG(undefined1, 0x10a2a28))[(int)(uVar3)]) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  else if ((((undefined *)GEN_TOP(param_1[2])) != ((undefined *)GEN_TOP(0x736762))) ||
          (bVar1 = F_005d5de0(uVar2), bVar1 == 0)) {
    return 0;
  }
  iVar5 = uVar2 + 0xc;
  uVar3 = 0;
  if (*((uint *)GEN_TOP((uVar2 + 8))) == 0) {
    return 0;
  }
  do {
    uVar4 = 0;
    while (*((char *)GEN_TOP((iVar5 + uVar4))) == (&REFG(undefined1, 0x10a2a20))[(int)(uVar4)]) {
      uVar4 = uVar4 + 1;
      if (3 < uVar4) {
        uVar2 = iVar5 + 8;
        if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x10))) + 0x3b + uVar2))) != '\0') {
          return 0;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x10))) + 0x44 + uVar2))) != 0) {
          return 0;
        }
        return uVar2;
      }
    }
    iVar5 = iVar5 + *((int *)GEN_TOP((iVar5 + 4)));
    uVar3 = uVar3 + 1;
    if (*((uint *)GEN_TOP((uVar2 + 8))) <= uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_005d9950 */
GEN_OWN GEN_FRAME uint F_005d9950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5d9950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP((param_4 + 0xc)))) {
    iVar4 = *((int *)GEN_TOP((param_4 + 8))) + param_4;
    do {
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar4 + iVar5 * 4))) + iVar4)));
      if (((ushort)param_2 == 0) || (*puVar1 == (uint)(ushort)param_2)) {
        iVar3 = 0;
        if (0 < (int)puVar1[3]) {
          do {
            uVar2 = (int)puVar1 + *((int *)GEN_TOP(((int)puVar1 + iVar3 * 4 + puVar1[2]))) + puVar1[2];
            if (*((int *)GEN_TOP((uVar2 + 4))) == param_3) {
              return uVar2;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)puVar1[3]);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *((int *)GEN_TOP((param_4 + 0xc))));
  }
  return 0;
}

/* ref: FUN_005d99c0 */
GEN_OWN GEN_NOFRAME byte F_005d99c0(void)
{
  GEN_ENTER(0x5d99c0u, 0u, 0u, 0u, 0u);
  if (*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) != 0) {
    return 4 < *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) + 0x10)));
  }
  return 0;
}

/* ref: FUN_005d99e0 */
GEN_OWN GEN_NOFRAME byte F_005d99e0(void)
{
  GEN_ENTER(0x5d99e0u, 0u, 0u, 0u, 0u);
  if (*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) != 0) {
    return *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) + 0x10))) == 7;
  }
  return 0;
}

/* ref: FUN_005d9a00 */
GEN_OWN GEN_NOFRAME unsigned int F_005d9a00(void)
{
  GEN_ENTER(0x5d9a00u, 0u, 0u, 0u, 0u);
  if (*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x28))) != 1) {
    *((undefined4 *)GEN_TOP((REFG(int, 0x1379cb0) + 0x28))) = 1;
    *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) & 0xfffffffe;
    F_00516740(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,4);
  }
  return;
}

/* ref: FUN_005d9a30 */
GEN_OWN GEN_NOFRAME uint F_005d9a30(void)
{
  GEN_ENTER(0x5d9a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (*((int *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x28))) != 2) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x28))) = 2;
    *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) | 1;
    F_004ff5f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    uVar1 = F_0050fb20(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    return uVar1;
  }
  return REFG(undefined4, 0x1379cb0);
}

/* ref: FUN_005d9a70 */
GEN_OWN GEN_NOFRAME uint F_005d9a70(void)
{
  GEN_ENTER(0x5d9a70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (*((int *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x28))) != 2) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x28))) = 2;
    *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) | 1;
    F_004ff5f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    F_0050fb20(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
  }
  uVar1 = REFG(undefined4, 0x1379cb0);
  *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x28))) = 0;
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: FUN_005d9b60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d9b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (((*((byte *)GEN_TOP((in_ecx + 0x2b))) & 0x40) != 0) &&
     ((iVar1 = *((int *)GEN_TOP((in_ecx + 8))), iVar1 == 0 ||
      (((*((int *)GEN_TOP((iVar1 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 0x50))) != '\0')) &&
       ((iVar1 == 0 || ((*((byte *)GEN_TOP((iVar1 + 0x16))) & 1) != 0)))))))) {
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return *((uint *)GEN_TOP((uVar1 + 0x20)));
  }
  return 0;
}

/* ref: FUN_005d9bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d9bb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5d9bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return param_3 << (('\x04' - param_2) * '\b' & 0x1fU) | *((uint *)GEN_TOP((param_1 + 0x18)));
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf17 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005d9be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: FUN_005d9c60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d9c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 0x11)));
  switch((unsigned int)(uintptr_t)(*((byte *)GEN_TOP(((int)this + 0x28))) & 0xf)) {
  case 4: ;
    return cVar1 != '\f';
  case 5: ;
    return cVar1 != '\x10';
  case 6: ;
    return cVar1 != '-';
  case 7: ;
    return cVar1 != '\x0e';
  case 8: ;
    return cVar1 != '\t';
  case 9: ;
    return cVar1 != '\b';
  case 10: ;
    return cVar1 != '\x0f';
  default: ;
    return 0;
  }
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005d9cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x04')) {
    return *((char *)GEN_TOP((uVar1 + 0x65))) == '\x03';
  }
  return 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf57 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return uVar1 + 0x30;
  }
  return 0x1375ac0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf59 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return uVar1 + 0x40;
  }
  return 0x1302cf0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf61 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return uVar1 + 0x50;
  }
  return 0x1302c60;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5d9d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return uVar1 + 0x30;
  }
  return 0x1302df0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005d9d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5d9d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  undefined4 * puVar5;
  float * pfVar6;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD)));
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\x03')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_ARG,param_1);
    return (uint)param_1;
  }
  pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
  fVar2 = *pfVar4;
  fVar1 = pfVar4[2];
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = pfVar4[1];
  pfVar6 = ((float *)(gen_frame + 0x0)) + 1;
  if (!((float10)fVar2 < (float10)pfVar4[1])) {
    pfVar6 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar6 < (float10)fVar1) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 2;
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  param_1[2] = puVar5[2];
  param_1[3] = (undefined4)gen_fl2bits(*pfVar6);
  return (uint)param_1;
}

/* ref: FUN_005d9ec0 */
GEN_OWN GEN_FRAME uint F_005d9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9ec0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  undefined * this;
  uint uVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar5 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,3)));
  }
  else {
    this = ((undefined *)GEN_TOP(F_00406b90(0x48,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar5 = ((int *)GEN_TOP(F_005d74f0(this GEN_EDX_ARG)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,piVar4,0);
  if (((undefined *)GEN_TOP(piVar4[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *piVar5;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar4[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(piVar5,uVar6);
    return (uint)piVar5;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
  iVar1 = piVar4[5];
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x6c)));
  (*pcVar3)(piVar5,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar5;
}

/* ref: FUN_005d9f70 */
GEN_OWN GEN_FRAME uint F_005d9f70(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9f70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  undefined * this;
  uint uVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar5 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x27)));
  }
  else {
    this = ((undefined *)GEN_TOP(F_00406b90(0x38,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar5 = ((int *)GEN_TOP(F_005d7ac0(this GEN_EDX_ARG)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,piVar4,0);
  if (((undefined *)GEN_TOP(piVar4[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *piVar5;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar4[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(piVar5,uVar6);
    return (uint)piVar5;
  }
  (*(undefined1 *)(gen_frame + 0x8)) = 1;
  F_00a1bd10(((undefined1 *)(gen_frame + 0x0)),iVar2 + 0x30);
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x6c)));
  (*(int * PTR32 *)&gen_args[0]) = (int *)((undefined1 *)(gen_frame + 0x0));
  iVar1 = piVar4[5];
  (*pcVar3)(piVar5,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar5;
}

/* ref: FUN_005da030 */
GEN_OWN GEN_FRAME uint F_005da030(unsigned int gen_a0)
{
  GEN_ENTER(0x5da030u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  undefined * this;
  uint uVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar5 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0xd)));
  }
  else {
    this = ((undefined *)GEN_TOP(F_00406b90(0x38,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar5 = ((int *)GEN_TOP(F_005d73b0(this GEN_EDX_ARG)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,piVar4,0);
  if (((undefined *)GEN_TOP(piVar4[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *piVar5;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar4[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(piVar5,uVar6);
    return (uint)piVar5;
  }
  iVar1 = piVar4[5];
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x6c)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x30))) + iVar2)));
  (*pcVar3)(piVar5,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar5;
}

/* ref: FUN_005da0e0 */
GEN_OWN GEN_FRAME uint F_005da0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5da0e0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar4 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x2f)));
  }
  else {
    this = ((undefined *)GEN_TOP(F_00406b90(0x38,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar4 = ((int *)GEN_TOP(F_005d7450(this GEN_EDX_ARG)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,piVar3,0);
  if (((undefined *)GEN_TOP(piVar3[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0(((undefined *)GEN_TOP(piVar3[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(piVar4,uVar5);
    return (uint)piVar4;
  }
  iVar1 = piVar3[5];
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x6c)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  (*pcVar2)(piVar4,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar4;
}

/* ref: FUN_005da190 */
GEN_OWN GEN_FRAME uint F_005da190(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5da190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,5)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005d83a0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
    piVar2[0x14] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da240 */
GEN_OWN GEN_FRAME uint F_005da240(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5da240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x33)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005d83a0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
    piVar2[0x14] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da2f0 */
GEN_OWN GEN_FRAME uint F_005da2f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5da2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x44)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005d83a0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a3614));
    piVar2[0x14] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da3a0 */
GEN_OWN GEN_FRAME uint F_005da3a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5da3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x45)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005d83a0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a372c));
    *(undefined1 *)(piVar2 + 0x14) = 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da450 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005da450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5da450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = *((undefined4 *)GEN_TOP((param_1 + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = *((undefined4 *)GEN_TOP((param_1 + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((param_1 + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP((param_1 + 100)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP((param_1 + 0x68)));
  return 0;
}

/* ref: FUN_005da4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005da4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5da4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c472af(param_1,param_2,
                     ((char *)REFP(0x10a2620))
                     ,*((undefined4 *)GEN_TOP(((int)this + 8))),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x10))),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x20)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x20)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x24)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x24)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x28)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x28)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x30)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x30)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x34)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x34)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x38)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x38)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x3c)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x3c)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x40)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x40)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x44)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x44)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x48)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x48)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x50)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x50)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x54)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x54)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x58)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x58)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x60)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x60)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 100)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 100)))) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x68)))),
                     (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP(((int)this + 0x68)))) >> 0x20));
  return uVar1;
}

/* ref: FUN_005da590 */
GEN_OWN_GS GEN_FRAME byte F_005da590(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5da590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte * pbVar8;
  float10 fVar9;
  double dVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if (param_1 == 0) {
    return 0;
  }
  ((float *)(gen_frame + 0x8))[0] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x8)) + 1,0,0x7c);
  bVar6 = 0;
  ((byte *)(gen_frame + 0x87))[1] = 0;
  ((byte *)(gen_frame + 0x87))[2] = 0;
  ((byte *)(gen_frame + 0x87))[3] = 0;
  ((byte *)(gen_frame + 0x87))[4] = 0;
  ((byte *)(gen_frame + 0x87))[5] = 0;
  ((byte *)(gen_frame + 0x87))[6] = 0;
  ((byte *)(gen_frame + 0x87))[7] = 0;
  ((byte *)(gen_frame + 0x87))[8] = 0;
  ((byte *)(gen_frame + 0x87))[9] = 0;
  ((byte *)(gen_frame + 0x87))[10] = 0;
  ((byte *)(gen_frame + 0x87))[0xb] = 0;
  ((byte *)(gen_frame + 0x87))[0xc] = 0;
  ((byte *)(gen_frame + 0x87))[0xd] = 0;
  ((byte *)(gen_frame + 0x87))[0xe] = 0;
  ((byte *)(gen_frame + 0x87))[0xf] = 0;
  ((byte *)(gen_frame + 0x87))[0x10] = 0;
  ((byte *)(gen_frame + 0x87))[0x11] = 0;
  ((byte *)(gen_frame + 0x87))[0x12] = 0;
  ((byte *)(gen_frame + 0x87))[0x13] = 0;
  ((byte *)(gen_frame + 0x87))[0x14] = 0;
  ((byte *)(gen_frame + 0x87))[0x15] = 0;
  ((byte *)(gen_frame + 0x87))[0x16] = 0;
  ((byte *)(gen_frame + 0x87))[0x17] = 0;
  ((byte *)(gen_frame + 0x87))[0x18] = 0;
  ((byte *)(gen_frame + 0x87))[0x19] = 0;
  ((byte *)(gen_frame + 0x87))[0x1a] = 0;
  ((byte *)(gen_frame + 0x87))[0x1b] = 0;
  ((byte *)(gen_frame + 0x87))[0x1c] = 0;
  ((byte *)(gen_frame + 0x87))[0x1d] = 0;
  ((byte *)(gen_frame + 0x87))[0x1e] = 0;
  ((byte *)(gen_frame + 0x87))[0x1f] = 0;
  ((byte *)(gen_frame + 0x87))[0x20] = 0;
  uVar7 = 1;
  pbVar8 = ((byte *)GEN_TOP((param_1 + 0x2d)));
  (*(float *)(gen_frame + 0x0)) = 5.60519e-45;
  do {
    bVar2 = pbVar8[-1];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = *pbVar8;
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[1];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[2];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[3];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[4];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[5];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[6];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if ((param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    pbVar8 = pbVar8 + 8;
    fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) - 1);
    (*(float *)(gen_frame + 0x0)) = fVar1;
  } while (fVar1 != 0.0);
  dVar10 = F_004a4fe0();
  bVar2 = ((byte *)(gen_frame + 0x87))[(int)(uVar7)];
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)bVar2);
  fVar1 = (float)((float10)bVar2 * (float10)dVar10);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  if ((param_2 != '\0') && (uVar5 = 1, 1 < uVar7)) {
    fVar9 = (float10)fVar1;
    do {
      if ((!GEN_ISNAN((float10)((float *)(gen_frame + 0x8))[(int)(uVar5)]) && !GEN_ISNAN(fVar9)) && !((float10)((float *)(gen_frame + 0x8))[(int)(uVar5)] <= fVar9)) {
        return ((byte *)(gen_frame + 0x87))[(int)(uVar5 + 1)];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  return bVar6;
}

/* ref: FUN_005da920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005da920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5da920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  float fVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined * pvVar6;
  uint uVar7;
  char * pcVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined1 * puVar11;
  undefined4 * puVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  
  iVar5 = *((int *)GEN_TOP((param_1 + 8))) + param_1;
  (*(int *)(gen_frame + 0x34)) = iVar5;
  if (8 < *((int *)GEN_TOP((iVar5 + 0xc)))) {
    return 0;
  }
  pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x5b0,0,0)));
  if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
    pvVar6 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar6 = ((undefined *)GEN_TOP(F_00698050(pvVar6 GEN_EDX_ARG)));
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar6;
  puVar10 = &REFG(undefined4, 0x1322a14);
  puVar12 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  ((undefined4 *)(gen_frame + 0x0))[0] = 0x100;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0x20;
  bVar4 = F_006989e0(pvVar6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)));
  if (bVar4 == 0) {
    puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar10 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    return 0;
  }
  lVar3 = (ulonglong)*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc))) * 4;
  *((uint *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc)));
  uVar7 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar7;
  (*(uint *)(gen_frame + 0x30)) = 0;
  iVar5 = (*(int *)(gen_frame + 0x34));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    (*(int *)(gen_frame + 0x38)) = 0;
    do {
      iVar5 = (*(int *)(gen_frame + 0x34));
      iVar13 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 8))) + (*(int *)(gen_frame + 0x38));
      uVar7 = *((uint *)GEN_TOP((iVar13 + 4 + (*(int *)(gen_frame + 0x34)))));
      iVar14 = iVar13 + (*(int *)(gen_frame + 0x34));
      pcVar8 = ((char *)GEN_TOP((*((int *)GEN_TOP((iVar13 + (*(int *)(gen_frame + 0x34))))) + iVar14)));
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
      (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0xc))) + iVar14)));
      uVar9 = (*(uint *)(gen_frame + 0x30));
      if (uVar7 < 8) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + (*(uint *)(gen_frame + 0x30)) * 4))) = *((undefined4 *)GEN_TOP((iVar14 + 8)));
        if ((((pcVar8 != ((char *)GEN_TOP(0x0))) && (*pcVar8 != '\0')) &&
            (bVar4 = F_006a4d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar7,pcVar8), bVar4 == 0)) ||
           ((((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0)) && (*(*(char * PTR32 *)(gen_frame + 0x28)) != '\0')) &&
            (bVar4 = F_006a4d90(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar7,(*(char * PTR32 *)(gen_frame + 0x28))), bVar4 == 0)))) {
          F_0068fa50(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
          puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
          if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          }
          if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
            return 0;
          }
          F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
          return 0;
        }
        *((undefined4 *)GEN_TOP((uVar7 * 0xa0 + 0x10c + *((int *)GEN_TOP(((int)this + 8)))))) =
             *((undefined4 *)GEN_TOP((iVar14 + 0x10)));
        *((undefined4 *)GEN_TOP((uVar7 * 0xa0 + 0x110 + *((int *)GEN_TOP(((int)this + 8)))))) =
             *((undefined4 *)GEN_TOP((iVar14 + 0x14)));
        uVar9 = (*(uint *)(gen_frame + 0x30));
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x18;
      (*(uint *)(gen_frame + 0x30)) = uVar9 + 1;
    } while (uVar9 + 1 < *((uint *)GEN_TOP(((int)this + 0x10))));
  }
  *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x4c))) = (float)*((int *)GEN_TOP((iVar5 + 0x10)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x50))) = *((undefined4 *)GEN_TOP((iVar5 + 0x1c)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x54))) = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x58))) = *((undefined4 *)GEN_TOP((iVar5 + 0x18)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x5c))) = *((undefined4 *)GEN_TOP((iVar5 + 0x24)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x60))) = *((undefined4 *)GEN_TOP((iVar5 + 0x28)));
  iVar13 = *((int *)GEN_TOP((iVar5 + 0x30)));
  bVar4 = *((byte *)GEN_TOP((iVar13 + 1 + iVar5)));
  bVar2 = *((byte *)GEN_TOP((iVar13 + 2 + iVar5)));
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1088100);
  iVar14 = *((int *)GEN_TOP(((int)this + 8)));
  fVar1 = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((iVar13 + iVar5))) / fVar15)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  *((float *)GEN_TOP((iVar14 + 100))) = fVar1;
  fVar1 = (float)((float10)bVar4 / fVar15);
  (*(float *)(gen_frame + 0x20)) = fVar1;
  *((float *)GEN_TOP((iVar14 + 0x68))) = fVar1;
  fVar1 = (float)((float10)bVar2 / fVar15);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  *((float *)GEN_TOP((iVar14 + 0x6c))) = fVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x70))) = *((undefined4 *)GEN_TOP((iVar5 + 0x2c)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x74))) = *((undefined4 *)GEN_TOP((iVar5 + 0x3c)));
  *((bool *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) = *((char *)GEN_TOP((iVar5 + 2))) != '\0';
  *((bool *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x79))) = *((char *)GEN_TOP((iVar5 + 0x3a))) != '\0';
  *((bool *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x7a))) = *((char *)GEN_TOP((iVar5 + 0x38))) != '\0';
  *((bool *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x7b))) = *((char *)GEN_TOP((iVar5 + 0x39))) != '\0';
  uVar7 = 0;
  puVar11 = ((undefined1 *)GEN_TOP((iVar5 + *((int *)GEN_TOP((iVar5 + 0x40))) + 4)));
  do {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2c + uVar7))) = puVar11[-4];
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2d + uVar7))) = puVar11[-2];
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2e + uVar7))) = *puVar11;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2f + uVar7))) = puVar11[2];
    uVar7 = uVar7 + 4;
    puVar11 = puVar11 + 8;
  } while (uVar7 < 0x20);
  return 1;
}

/* ref: FUN_005dac00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dac00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a39e0));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x18))),0,0x104);
  return (uint)this;
}

/* ref: FUN_005dac60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dac60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    F_00c9f290(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0);
    F_00c9da30(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0);
    F_00551ae0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return;
}

/* ref: FUN_005daca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005daca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5daca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    do {
      if (*((int *)GEN_TOP((*((uint *)GEN_TOP((*piVar1 + 0x10))) + 0x18))) == param_1) {
        return *((uint *)GEN_TOP((*piVar1 + 0x10)));
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005dace0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dace0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dace0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005dad10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dad10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dad10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xfc))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar4 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8))) + uVar4 * 4)));
      (*(int *)(gen_frame + 0x34)) = iVar1;
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,(*(uint *)(gen_frame + 0x38)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x10))) + 0x100))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_005dada0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dada0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(uint *)(gen_frame + 0x38)) = uVar3;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8))) + uVar4 * 4)));
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,param_1);
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x100))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)(gen_frame + 0x38)));
  }
  return 0;
}

/* ref: FUN_005dae20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dae20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dae20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  uVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8))) + uVar5 * 4)));
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,param_1);
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x100))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8))) + uVar5 * 4))) + 0x10)));
      (*(int *)(gen_frame + 0x38)) = *piVar2;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xfc))))(piVar2 GEN_EDX_ARG);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x48))))(piVar2,uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)(gen_frame + 0x34)));
  }
  return uVar4;
}

/* ref: FUN_005daec0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005daec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5daec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005daef0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005daef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5daef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_FWD,param_1,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005daf30 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005daf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5daf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar4 * 4))) + 0x10)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_005daf70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005daf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5daf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar4 * 4))) + 0x10)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 1;
}

/* ref: FUN_005dafb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005dafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dafb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x90))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005daff0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005daff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5daff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd0))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005db030 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe0))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005db070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005db070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x20))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x24))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x28))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302e18));
  return (uint)this;
}

/* ref: FUN_005db100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005db100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5db100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_1[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = param_1[10];
  F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x100))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_005db190 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005db190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a39fc));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x34))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x38))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x54))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x58))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf5 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 8) = param_1;
  uVar2 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar3 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005db2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005db2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  int local_8;
  
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xa0))));
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0xc0))) = 0;
  cVar1 = *((char *)GEN_TOP((param_1 + 0x3c)));
  uVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  *((char *)GEN_TOP(((int)this + 0xc0))) = cVar1;
  if (cVar1 != '\0') {
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)(uint)(int)cVar1 * 0x28 >> 0x20) != 0) |
                         (uint)((ulonglong)(uint)(int)cVar1 * 0x28),0,0);
    *((uint *)GEN_TOP(((int)this + 0xa0))) = uVar2;
    local_8 = 0;
    if ('\0' < *((char *)GEN_TOP(((int)this + 0xc0)))) {
      iVar6 = 0;
      do {
        iVar3 = *((int *)GEN_TOP((param_1 + 0x38))) + param_1;
        iVar5 = *((int *)GEN_TOP((iVar3 + local_8 * 4)));
        piVar7 = ((int *)GEN_TOP((iVar5 + iVar3)));
        *((uint *)GEN_TOP((iVar6 + *((int *)GEN_TOP(((int)this + 0xa0)))))) =
             CONCAT31(CONCAT21(CONCAT11((char)piVar7[1],*((undefined1 *)GEN_TOP((iVar5 + 5 + iVar3)))),
                               *((undefined1 *)GEN_TOP(((int)piVar7 + 6)))),*((undefined1 *)GEN_TOP(((int)piVar7 + 7))));
        *((char *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0xa0)))))) = (char)*piVar7;
        iVar5 = *piVar7;
        if (iVar5 == 1) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP(((int)this + 0xa0))))));
LAB_005db39b: ;
          *piVar4 = *piVar7;
          piVar4[1] = piVar7[1];
          piVar4[2] = piVar7[2];
          piVar4[3] = piVar7[3];
        }
        else if (iVar5 == 3) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP(((int)this + 0xa0))))));
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
            *piVar4 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        else if (iVar5 == 4) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *((int *)GEN_TOP(((int)this + 0xa0))))));
          goto LAB_005db39b;
        }
        uVar2 = (uint)*((char *)GEN_TOP(((int)this + 0xc0)));
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x28;
      } while (local_8 < (int)uVar2);
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005db3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a256e;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_FWD,this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,this + 0x38);
  return uVar1;
}

/* ref: FUN_005db410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5db410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar2 = *((ushort *)GEN_TOP((param_1 + 2)));
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  (*(uint *)(gen_frame + 0xc)) = (uint)uVar2;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 0x6fe;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 2)) = uVar2;
  (*(uint *)(gen_frame + 0x0)) = CONCAT22(uVar2,0x6fe);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
  *((uint *)GEN_TOP(((int)this + 0x10))) = (*(uint *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
  uVar4 = *((int *)GEN_TOP(((int)this + 0x7c))) - *((int *)GEN_TOP(((int)this + 0x78))) >> 2;
  param_1 = 0;
  if (uVar4 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + param_1 * 4))) + 0x10)));
      bVar1 = *((byte *)GEN_TOP(((int)this_00 + 0x11)));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = (ushort)bVar1 << 8 | 0xfe;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 2)) = (undefined2)(*(uint *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x0)) = (uint)CONCAT21((undefined2)(*(uint *)(gen_frame + 0xc)),bVar1) << 8 | 0xfe;
      (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x8));
      if (bVar1 == 6) {
        F_005db410(this_00 GEN_EDX_FWD,(uint)&(*(uint *)(gen_frame + 0x0)),param_2);
      }
      else {
        *((uint *)GEN_TOP(((int)this_00 + 0x10))) = (*(uint *)(gen_frame + 0x0));
        *((byte *)GEN_TOP(((int)this_00 + 0x28))) =
             *((byte *)GEN_TOP(((int)this_00 + 0x28))) ^ (*((byte *)GEN_TOP(((int)this_00 + 0x28))) ^ (byte)param_2) & 0xf
        ;
        *((undefined4 *)GEN_TOP(((int)this_00 + 0x14))) = (*(undefined4 *)(gen_frame + 0x8));
      }
      param_1 = param_1 + 1;
    } while (param_1 < uVar4);
  }
  return 0;
}

/* ref: FUN_005db4d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005db4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9c))) + 0xc))) == 8;
    }
  }
  return 0;
}

/* ref: FUN_005db510 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005db510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x9c))) + 0x40);
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005db550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  bool bVar2;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_FWD),
      (char)uVar1 == '\0')) ||
     (bVar2 = *((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) == 8,
     uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x9c) >> 8),bVar2), !bVar2)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,param_1);
    uVar1 = F_005dae20(this + 0x70 GEN_EDX_ARG,param_1);
    if ((*(int *)(this + 0x9c) != 0) &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG),
       (char)uVar1 != '\0')) {
      uVar1 = *(uint *)(this + 0x9c);
      *((undefined4 *)GEN_TOP((uVar1 + 0x40))) = *param_1;
      *((undefined4 *)GEN_TOP((uVar1 + 0x44))) = param_1[1];
      *((undefined4 *)GEN_TOP((uVar1 + 0x48))) = param_1[2];
      *((undefined4 *)GEN_TOP((uVar1 + 0x50))) = param_1[4];
      *((undefined4 *)GEN_TOP((uVar1 + 0x54))) = param_1[5];
      *((undefined4 *)GEN_TOP((uVar1 + 0x58))) = param_1[6];
      *((undefined4 *)GEN_TOP((uVar1 + 0x5c))) = param_1[7];
      *((undefined4 *)GEN_TOP((uVar1 + 0x60))) = param_1[8];
      *((undefined4 *)GEN_TOP((uVar1 + 100))) = param_1[9];
      *((undefined4 *)GEN_TOP((uVar1 + 0x68))) = param_1[10];
    }
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf19 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005db600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_FWD),
      (char)uVar2 == '\0')) || (*((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) != 8)) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5db660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_FWD),
      (char)uVar2 == '\0')) || (*((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) != 8)) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,param_1,param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf21 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005db6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(this + 0xa8) << 0x1c) >> 0x1c;
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      return 1;
    }
    if (iVar2 == 2) {
      bVar1 = F_005daf30(this + 0x70 GEN_EDX_FWD);
      return bVar1;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005db700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(this + 0xa8) << 0x1c) >> 0x1c;
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      return 0;
    }
    if (iVar2 == 2) {
      bVar1 = F_005daf70(this + 0x70 GEN_EDX_FWD);
      return bVar1;
    }
  }
  return 1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf46 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db730(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5db730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x9c))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x9c))) + 0x14))) = param_2;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005db770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5db770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar4 * 4))) + 0x10)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc0))))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 != '\0') {
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005db7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(int *)(this + 0x90) - *(int *)(this + 0x8c) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + uVar5 * 4)));
      if (((iVar1 != 0) && (puVar3 = ((uint *)GEN_TOP((iVar1 + 0x30))), (*puVar3 & 0xc0000000) != 0)) &&
         (bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar3), bVar2 != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return (byte)uVar4;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar3 * 4))) + 0x10)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 200))))(piVar1 GEN_EDX_FWD,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf52 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 4 ^ (byte)this[0x2b]) & 0x10);
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd0))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db8b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5db8b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP((param_1 + 0x7c))) - *((int *)GEN_TOP((param_1 + 0x78))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x78))) + uVar3 * 4))) + 0x10)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf54 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db900(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5db900u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP((param_1 + 0x7c))) - *((int *)GEN_TOP((param_1 + 0x78))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x78))) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd8))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf56 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005db940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 * '\b' ^ (byte)this[0x2b]) & 8);
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe0))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005db9a0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005db9a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5db9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((*((char *)GEN_TOP((param_1 + 0x11))) != '\x03') && (*((char *)GEN_TOP((param_1 + 0x11))) != '\a')) {
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005db9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5db9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  float * pfVar2;
  undefined4 * puVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  
  pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)pfVar2[2] +
                    ((float10)*pfVar2 * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)pfVar2[1]))))
  ;
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  fVar7 = (float10)(*(float *)(gen_frame + 0x1c));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(GEN_X87(SQRT(fVar7))));
  param_1[3] = (undefined4)gen_fl2bits(((float)GEN_TOF(GEN_X87(SQRT(fVar7)))));
  (*(float *)(gen_frame + 0x1c)) = 0.0;
  uVar6 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar6 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) * 4))) + 0x10)));
      fVar5 = (*(float *)(gen_frame + 0x1c));
      if ((*((char *)GEN_TOP(((int)piVar1 + 0x11))) != '\x03') && (*((char *)GEN_TOP(((int)piVar1 + 0x11))) != '\a')) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x104))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_005ff0f0(param_1 GEN_EDX_ARG,uVar4);
        fVar5 = (*(float *)(gen_frame + 0x1c));
      }
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)gen_fl2bits(fVar5) + 1U);
    } while ((int)gen_fl2bits(fVar5) + 1U < uVar6);
  }
  return (uint)param_1;
}

/* ref: FUN_005dba90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dba90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dba90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
  uVar2 = 0;
  uVar1 = *((int *)GEN_TOP(((int)this + 0x7c))) - (int)((int)(uintptr_t)piVar3) >> 2;
  if (uVar1 != 0) {
    do {
      if ((*((int *)GEN_TOP((param_1 + 4))) <<
           (('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b' & 0x1f) |
          *((uint *)GEN_TOP(((int)this + 0x18)))) == *((uint *)GEN_TOP((*((uint *)GEN_TOP((*piVar3 + 0x10))) + 0x18)))) {
        return *((uint *)GEN_TOP((*piVar3 + 0x10)));
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_005dbaf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005dbaf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5dbaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool local_5;
  
  if (*((int *)GEN_TOP((param_1 + 0x78))) != *((int *)GEN_TOP((param_1 + 0x7c)))) {
    local_5 = false;
    *((uint *)GEN_TOP((param_1 + 0xb0))) =
         *((uint *)GEN_TOP((param_1 + 0xb0))) ^ (((param_2 == 0) + 1) * 8 ^ *((uint *)GEN_TOP((param_1 + 0xb0)))) & 0x38;
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x9c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
      bVar4 = (char)uVar3 != '\0';
      if (bVar4) {
        *((uint *)GEN_TOP((param_1 + 0xa8))) =
             *((uint *)GEN_TOP((param_1 + 0xa8))) ^
             (((param_2 != 0) + 2) * 0x10 ^ *((uint *)GEN_TOP((param_1 + 0xa8)))) & 0xff0;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG,(*((int *)GEN_TOP((param_1 + 0xa8))) << 0x14) >> 0x18,param_3);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG);
      bVar5 = (char)uVar3 != '\0';
      if (bVar5) {
        *((uint *)GEN_TOP((param_1 + 0xa8))) =
             *((uint *)GEN_TOP((param_1 + 0xa8))) ^
             (((param_2 == 0) + 4) * 0x1000 ^ *((uint *)GEN_TOP((param_1 + 0xa8)))) & 0xff000;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG,(*((int *)GEN_TOP((param_1 + 0xa8))) << 0xc) >> 0x18,param_3);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG);
      bVar6 = (char)uVar3 != '\0';
      if (bVar6) {
        bVar2 = ((byte)param_3 & 1) * '\x02' | *((byte *)GEN_TOP((param_1 + 0xac))) & 0xfc | param_2 & 1;
        *((byte *)GEN_TOP((param_1 + 0xac))) = bVar2;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG,(byte)~bVar2 & 1 | 6,param_3);
      }
      local_5 = bVar6 || (bVar5 || bVar4);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG);
      if ((char)uVar3 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((param_1 + 0x9c))) GEN_EDX_ARG,(param_2 == 0) + 8,param_3);
      }
    }
    return local_5;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0xd8))) = 1;
  *((byte *)GEN_TOP((param_1 + 0xdc))) =
       ((byte)param_3 & 1) * '\x02' | *((byte *)GEN_TOP((param_1 + 0xdc))) & 0xfc | param_2 & 1;
  return 1;
}

/* ref: FUN_005dbc90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005dbc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dbc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((param_1 < 0x10) && (*((int *)GEN_TOP(((int)this + 0x78))) != *((int *)GEN_TOP(((int)this + 0x7c))))) {
    return *((char *)GEN_TOP((param_1 + 0xc5 + (int)this))) != '\0';
  }
  return 0;
}

/* ref: FUN_005dbcc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005dbcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dbcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x7c))) - *((int *)GEN_TOP(((int)this + 0x78))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + uVar3 * 4))) + 0x10)));
      if ((*((byte *)GEN_TOP(((int)piVar1 + 0x2b))) & 2) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_FWD,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: FUN_005dbd00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dbd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dbd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a3b14));
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x44))) = *((byte *)GEN_TOP(((int)this + 0x44))) & 0xfc;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x48))) = *((uint *)GEN_TOP(((int)this + 0x48))) & 0xc00000ff;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005dbd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dbd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * pTVar2;
  
  if ((*(uint *)(this + 0x30) & 0xc0000000) != 0) {
    F_00b5b550(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,this + 0x30);
    *(undefined4 *)(this + 0x30) = 0;
  }
  pTVar2 = this + 0x38;
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) != 0) {
      bVar1 = F_00507740(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_ARG,pTVar2);
      return bVar1;
    }
    bVar1 = F_00507740(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,pTVar2);
    pTVar2 = ((undefined *)GEN_TOP((uint)bVar1));
  }
  return (byte)pTVar2;
}

/* ref: FUN_005dbde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dbde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dbde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  uint * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int * piVar9;
  int iVar10;
  ulonglong uVar11;
  int local_10;
  
  iVar10 = (*(int *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)this + 0x34))) == 0) {
    puVar2 = ((uint *)GEN_TOP(F_00b5bee0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]))));
    uVar5 = *puVar2;
    *((uint *)GEN_TOP(((int)this + 0x30))) = uVar5;
    return uVar5;
  }
  uVar5 = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 8),0,0)));
  puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 8))) + iVar10)));
  local_10 = 0;
  puVar6 = puVar3;
  if (0 < (int)uVar5) {
    do {
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
      piVar9 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x78)));
      uVar7 = 0;
      uVar4 = *((int *)GEN_TOP((iVar1 + 0x7c))) - (int)((int)(uintptr_t)piVar9) >> 2;
      iVar10 = (*(int *)&gen_args[0]);
      if (uVar4 == 0) goto LAB_005dbebe;
      while ((puVar8[1] << GEN_SHC(('\x04' - ((*((byte *)GEN_TOP((iVar1 + 0x28))) >> 4) + 1)) * '\b', ('\x04' - ((*((byte *)GEN_TOP((iVar1 + 0x28))) >> 4) + 1)) * '\b') |
             *((uint *)GEN_TOP((iVar1 + 0x18)))) != *((uint *)GEN_TOP((*((int *)GEN_TOP((*piVar9 + 0x10))) + 0x18)))) {
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 1;
        if (uVar4 <= uVar7) goto LAB_005dbebe;
      }
      puVar8[1] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*piVar9 + 0x10))) + 0x18)));
      local_10 = local_10 + 1;
      puVar8 = puVar8 + 2;
      puVar6 = puVar6 + 2;
    } while (local_10 < (int)uVar5);
  }
  puVar6 = ((undefined4 *)GEN_TOP(F_00b5bee0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,&(*(int *)&gen_args[0]),iVar10,(*(undefined4 *)&gen_args[1]))));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *puVar6;
LAB_005dbebe: ;
  uVar11 = F_00c46aa0(*((int *)GEN_TOP((iVar10 + 8))) + iVar10,puVar3,uVar5 * 8);
  uVar5 = (uint)uVar11;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar11 = F_00406b30(puVar3);
    uVar5 = (uint)uVar11;
  }
  return uVar5;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dbf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dbf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a256f;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_FWD,this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,this + 0x38);
  return uVar1;
}

/* ref: FUN_005dbf70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005dbf70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5dbf70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  uint * puVar2;
  float10 fVar3;
  
  *((byte *)GEN_TOP(((int)param_1 + 0x44))) = *((byte *)GEN_TOP(((int)param_1 + 0x44))) & 0xfe;
  if ((*((char *)GEN_TOP(((int)param_1 + 0x48))) == '\x05') || (*((char *)GEN_TOP(((int)param_1 + 0x48))) == '\x06')) {
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x30))) & 0xc0000000) != 0) {
      F_00b5b550(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,((undefined4 *)GEN_TOP(((int)param_1 + 0x30))));
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x30))) = 0;
    }
    F_005dbde0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x3c))),*((undefined4 *)GEN_TOP(((int)param_1 + 0x40))));
  }
  uVar1 = param_2;
  if (param_2 == 0xffffffff) {
    uVar1 = ~(uint)(*((byte *)GEN_TOP(((int)param_1 + 0x44))) >> 1) & 1;
  }
  *((char *)GEN_TOP(((int)param_1 + 0x48))) = (uVar1 == 0) + '\x01';
  puVar2 = ((uint *)GEN_TOP(((int)param_1 + 0x30)));
  if ((*puVar2 & 0xc0000000) != 0) {
    F_00b5b3e0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar2,uVar1,0xffffffff);
    if (param_3 != 0) {
      fVar3 = (float10)param_3;
      if (param_3 < 0) {
        fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      F_00b5bcc0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar2,
                   ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1088070)) /
                          (float10)*(double *)&REFG(undefined, 0x10912a8)))));
    }
  }
  return;
}

/* ref: FUN_005dc030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dc030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dc030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP(((int)this + 4))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
    do {
      if (*((int *)GEN_TOP((*puVar1 + 0x18))) == param_1) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005dc070 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dc070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dc070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP(((int)this + 4))) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: FUN_005dc0a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dc0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5dc0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  undefined * this_00;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x78))) +
                          (uint)*((byte *)GEN_TOP(((int)param_1 + 0x2a))) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x20)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x24)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x28)));
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x30)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x34)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x38)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c)));
      (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x40)));
      (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x44)));
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x48)));
      (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))(piVar1 GEN_EDX_FWD);
      uVar2 = F_005db100(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
      return uVar2;
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe8))))(param_1 GEN_EDX_ARG,param_2);
  }
  return in_EAX;
}

/* ref: FUN_005dc190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dc190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5dc190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x78))) +
                          (uint)*((byte *)GEN_TOP(((int)param_1 + 0x2a))) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x20)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x24)));
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x28)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x30)));
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x34)));
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x38)));
      (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x3c)));
      (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x40)));
      (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x44)));
      (*(undefined4 *)(gen_frame + 0x10)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x14)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_2[3];
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x48)));
      (*(undefined4 *)(gen_frame + 0x18)) = param_2[2];
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xfc))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      uVar1 = F_005db100(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
      return uVar1;
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf0))))(param_1 GEN_EDX_ARG,param_2);
  }
  return in_EAX;
}

/* ref: FUN_005dc350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dc350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5dc350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar1[0x1e] + (uint)*((byte *)GEN_TOP(((int)param_1 + 0x2a))) * 4)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))(piVar1 GEN_EDX_FWD);
      uVar2 = F_005db100(this_00 GEN_EDX_ARG,param_2,uVar2);
      return uVar2;
    }
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x100))))(param_1 GEN_EDX_ARG,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_005dc3a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dc3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dc3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  int * piVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x104))))(piVar2 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)*param_1);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_1[1]);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_1[2]);
    fVar4 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_1[1]));
    fVar5 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)*param_1));
    fVar6 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_1[2]));
    fVar1 = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    pfVar3 = &(*(float *)(gen_frame + 0x28));
    fVar1 = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar3 = &(*(float *)(gen_frame + 0x2c));
    }
    *((float *)GEN_TOP(((int)this + 0x18))) = *pfVar3;
  }
  return;
}

/* ref: FUN_005dc450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dc450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dc450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c28));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x6c))),0,0x48);
  return (uint)this;
}

/* ref: FUN_005dc4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dc4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dc4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c28));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x6c))),0,0x48);
  return (uint)this;
}

/* ref: FUN_005dc4f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dc4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dc4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  int in_ecx;
  int iVar2;
  
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1c))),0,0x50);
  in_ecx = (int)this + 0x6c;
  iVar2 = 4;
  do {
    F_006036d0(in_ecx GEN_EDX_ARG,REFG(float, 0x1302df0),REFG(float, 0x1302df4),REFG(float, 0x1302df8));
    F_00a1e0f0(&(*(float *)(gen_frame + 0x0)),&REFG(undefined4, 0x1302e00));
    F_00603830(in_ecx GEN_EDX_ARG,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)));
    uVar1 = F_00603920(in_ecx GEN_EDX_ARG,REFG(float, 0x1302e10),REFG(float, 0x1302e14),REFG(float, 0x1302e18));
    in_ecx = in_ecx + 0x12;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_005dc5c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dc5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5dc5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xfc))))(param_2 GEN_EDX_FWD)));
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x78))) +
                    (uint)*((byte *)GEN_TOP(((int)param_2 + 0x2a))) * 4)));
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x3c)));
    (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
    (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
    puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  uVar3 = F_006039f0(((undefined *)GEN_TOP(((int)this + (param_1 * 9 + 0x36) * 2))) GEN_EDX_ARG,puVar2);
  return uVar3;
}

/* ref: FUN_005dc670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dc670(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5dc670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0xf0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  undefined4 * puVar11;
  byte * pbVar12;
  byte * pbVar13;
  int iVar14;
  ushort * puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float fVar20;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x24)));
  if (iVar14 == 2) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8)));
    (*(float *)(gen_frame + 0x84)) = 0.0;
    goto LAB_005dc714;
  }
  fVar20 = REFG(float, 0x1088138);
  if (iVar14 == 3) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8)));
    if (param_2 == '\0') {
LAB_005dc6ee: ;
      fVar20 = REFG(float, 0x10a3c50);
    }
  }
  else {
    if (iVar14 != 4) {
      (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 1;
      (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3),1)));
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1088138);
      goto LAB_005dc714;
    }
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8)));
    if (param_2 != '\0') goto LAB_005dc6ee;
  }
  (*(float *)(gen_frame + 0x84)) = fVar20;
  if (*((char *)GEN_TOP(((int)param_1 + 0x2c))) != '\0') {
    (*(float *)(gen_frame + 0x84)) = gen_bits2f((uint)gen_fl2bits(fVar20) ^ REFG(uint, 0x10920d0));
  }
LAB_005dc714: ;
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x80));
  iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x20)));
  if (iVar14 == 0) {
    iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x28)));
    fVar20 = *((float *)GEN_TOP(((int)param_1 + 0x34)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar20)));
    if (iVar14 == 0) {
      F_0054cf80(&(*(float *)(gen_frame + 0x70)) GEN_EDX_FWD,fVar20);
    }
    else if (iVar14 == 1) {
      F_005fe650(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,fVar20);
    }
    else if (iVar14 == 2) {
      (*(float *)(gen_frame + 0x70)) = 0.0;
      (*(float *)(gen_frame + 0x74)) = 0.0;
      fVar20 = (float)((float10)fVar20 * (float10)REFG(double, 0x1088108));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar20)));
      fVar17 = ((float10)GEN_TOD(fsin((float10)fVar20)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      (*(float *)(gen_frame + 0x78)) = (float)fVar17;
      fVar17 = ((float10)GEN_TOD(fcos((float10)fVar20)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
    }
    pfVar9 = ((float *)GEN_TOP(F_00a1dab0(((undefined1 *)(gen_frame + 0x40)),&REFG(undefined4, 0x1302cf0),&(*(float *)(gen_frame + 0x70)),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x10)))),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x30)))),(*(float *)(gen_frame + 0x84)),(uint)(*(float * PTR32 *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0xb0)) = *pfVar9;
    fVar20 = pfVar9[1];
    (*(float *)(gen_frame + 0xb4)) = fVar20;
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x131f3dc) - (float10)*((float *)GEN_TOP(((int)param_1 + 0x34)))))))));
    fVar1 = pfVar9[2];
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    fVar2 = pfVar9[3];
    iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x3c)));
    (*(float *)(gen_frame + 0xbc)) = fVar2;
    ((float *)(gen_frame + 0x90))[0] = *pfVar9;
    ((float *)(gen_frame + 0x90))[1] = fVar20;
    ((float *)(gen_frame + 0x90))[2] = fVar1;
    ((float *)(gen_frame + 0x90))[3] = fVar2;
    if (((iVar14 != 0) && (*((int *)GEN_TOP(((int)param_1 + 0x40))) != 0)) &&
       (*((int *)GEN_TOP(((int)param_1 + 0x28))) == 2)) {
      (*(int * PTR32 *)(gen_frame + 0x8c)) = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x3c)));
      pbVar12 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x40))) + 0x1c))))
                                  (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x40))) GEN_EDX_ARG)));
      pbVar13 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar13;
        bVar16 = bVar4 < *pbVar12;
        if (bVar4 != *pbVar12) {
LAB_005dcb64: ;
          iVar14 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_005dcb69;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar13[1];
        bVar16 = bVar4 < pbVar12[1];
        if (bVar4 != pbVar12[1]) goto LAB_005dcb64;
        pbVar13 = pbVar13 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar4 != 0);
      iVar14 = 0;
LAB_005dcb69: ;
      if (iVar14 == 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)param_1 + 0x34))))));
      }
    }
    iVar14 = *((int *)GEN_TOP(((int)param_1 + 0x28)));
    if (iVar14 == 0) {
      F_0054cf80(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))));
    }
    else if (iVar14 == 1) {
      F_005fe650(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))));
    }
    else if (iVar14 == 2) {
      (*(float *)(gen_frame + 0x70)) = 0.0;
      (*(float *)(gen_frame + 0x74)) = 0.0;
      fVar20 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))) * (float10)REFG(double, 0x1088108));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar20)));
      fVar17 = ((float10)GEN_TOD(fsin((float10)fVar20)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      (*(float *)(gen_frame + 0x78)) = (float)fVar17;
      fVar17 = ((float10)GEN_TOD(fcos((float10)fVar20)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
      (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
    }
    puVar11 = ((undefined4 *)GEN_TOP(F_00a1dab0(((undefined1 *)(gen_frame + 0x20)),&REFG(undefined4, 0x1302cf0),&(*(float *)(gen_frame + 0x70)),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x10)))),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x30)))),(*(float *)(gen_frame + 0x84)),(uint)(*(float * PTR32 *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0xc0)) = gen_bits2f(*puVar11);
    (*(float *)(gen_frame + 0xc4)) = gen_bits2f(puVar11[1]);
    (*(float *)(gen_frame + 0xc8)) = gen_bits2f(puVar11[2]);
    (*(undefined4 *)(gen_frame + 0xcc)) = puVar11[3];
    (*(undefined4 *)(gen_frame + 0xac)) = puVar11[3];
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0xa8)) = gen_bits2f(puVar11[2]);
    ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar11);
    ((float *)(gen_frame + 0x90))[5] = gen_bits2f(puVar11[1]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)GEN_TOP(((int)param_1 + 0x3c)));
    puVar15 = ((ushort *)GEN_TOP(((int)param_1 + 0x74)));
    (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
    do {
      fVar19 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar18 = (float10)*(double *)&REFG(undefined, 0x10a3968);
      fVar17 = (float10)*(double *)&REFG(undefined, 0x1080228);
      uVar5 = *puVar15;
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)puVar15[-1]));
      uVar6 = puVar15[1];
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar5));
      (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((float10)puVar15[-1] * fVar18) * fVar19 - fVar17)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar6));
      (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((float10)uVar5 * fVar18) * fVar19 - fVar17)));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((float10)uVar6 * fVar18) * fVar19 - fVar17)));
      F_00a1e0d0(((undefined1 *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x60)));
      F_004f6eb0((*(float * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x50)));
      uVar8 = F_005dc190(param_1 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x88)),(*(float * PTR32 *)(gen_frame + 0x80)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x80)) = (*(float * PTR32 *)(gen_frame + 0x80)) + 4;
      puVar15 = puVar15 + 9;
      iVar14 = (int)gen_fl2bits((*(float *)(gen_frame + 0x84))) - 1;
      (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar14);
    } while (iVar14 != 0);
  }
  else if (iVar14 == 1) {
    (*(float *)(gen_frame + 0x74)) = gen_bits2f(REFG(float, 0x1375ac4));
    fVar20 = *((float *)GEN_TOP(((int)param_1 + 0x30)));
    fVar1 = *((float *)GEN_TOP(((int)param_1 + 0x10)));
    (*(float *)(gen_frame + 0x78)) = gen_bits2f(REFG(float, 0x1375ac8));
    (*(float *)(gen_frame + 0x70)) = gen_bits2f(*((uint *)GEN_TOP(((int)param_1 + 0x38))) ^ REFG(uint, 0x10920d0));
    pfVar10 = ((float *)GEN_TOP(F_00a1da10(((undefined1 *)(gen_frame + 0x30)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x70)),fVar1,fVar20,(*(float *)(gen_frame + 0x84)),(*(float * PTR32 *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0xb0)) = *pfVar10;
    fVar20 = pfVar10[1];
    fVar2 = *((float *)GEN_TOP(((int)param_1 + 0x30)));
    fVar3 = *((float *)GEN_TOP(((int)param_1 + 0x10)));
    (*(float *)(gen_frame + 0xb4)) = fVar20;
    fVar1 = pfVar10[2];
    ((float *)(gen_frame + 0x90))[0] = *pfVar10;
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    ((float *)(gen_frame + 0x90))[1] = fVar20;
    ((float *)(gen_frame + 0x90))[2] = fVar1;
    (*(float *)(gen_frame + 0x70)) = *((float *)GEN_TOP(((int)param_1 + 0x38)));
    puVar11 = ((undefined4 *)GEN_TOP(F_00a1da10(((undefined1 *)(gen_frame + 0x10)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x70)),fVar3,fVar2,(*(float *)(gen_frame + 0x84)),pfVar9)));
    (*(float *)(gen_frame + 0xc0)) = gen_bits2f(*puVar11);
    (*(float *)(gen_frame + 0xc4)) = gen_bits2f(puVar11[1]);
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((int)param_1 + 0x70)));
    (*(float *)(gen_frame + 0xc8)) = gen_bits2f(puVar11[2]);
    ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar11);
    ((float *)(gen_frame + 0x90))[5] = gen_bits2f(puVar11[1]);
    (*(float *)(gen_frame + 0xa8)) = gen_bits2f(puVar11[2]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)GEN_TOP(((int)param_1 + 0x3c)));
    pfVar9 = ((float *)(gen_frame + 0x90)) + 2;
    (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
    do {
      fVar19 = (float10)*(double *)&REFG(undefined, 0x10a3960);
      fVar18 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar17 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      uVar5 = *((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 2)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 4)))));
      uVar6 = *(ushort *)(*(float * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar5));
      pfVar10 = pfVar9 - 2;
      fVar20 = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 4))) * fVar19) * fVar18 - fVar17)));
      (*(float *)(gen_frame + 0x60)) = fVar20;
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar6));
      fVar1 = ((float)GEN_TOF((((float10)uVar5 * fVar19) * fVar18 - fVar17)));
      (*(float *)(gen_frame + 0x64)) = fVar1;
      fVar2 = ((float)GEN_TOF((((float10)uVar6 * fVar19) * fVar18 - fVar17)));
      (*(float *)(gen_frame + 0x68)) = fVar2;
      *pfVar10 = (float)((float10)*pfVar10 + (float10)fVar20);
      uVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x88));
      pfVar9[-1] = (float)((float10)pfVar9[-1] + (float10)fVar1);
      *pfVar9 = (float)((float10)*pfVar9 + (float10)fVar2);
      uVar8 = F_005dc0a0(param_1 GEN_EDX_ARG,uVar7,pfVar10);
      (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) + 0x12)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
      pfVar9 = pfVar9 + 4;
      iVar14 = (int)gen_fl2bits((*(float *)(gen_frame + 0x84))) - 1;
      (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar14);
    } while (iVar14 != 0);
  }
  else {
    uVar8 = iVar14 - 2;
    if (uVar8 == 0) {
      fVar20 = *((float *)GEN_TOP(((int)param_1 + 0x30)));
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x68)) = gen_bits2f(REFG(float, 0x1375ac8));
      (*(float *)(gen_frame + 0x64)) = gen_bits2f(*((undefined4 *)GEN_TOP(((int)param_1 + 0x38))));
      pfVar9 = ((float *)GEN_TOP(F_00a1da10(((undefined1 *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x60)),GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x10)))),fVar20,(*(float *)(gen_frame + 0x84)),(*(float * PTR32 *)(gen_frame + 0x80)))));
      fVar20 = *pfVar9;
      (*(float *)(gen_frame + 0xc0)) = fVar20;
      fVar1 = pfVar9[1];
      (*(float *)(gen_frame + 0xc4)) = fVar1;
      fVar2 = pfVar9[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)GEN_TOP(((int)param_1 + 0x3c)));
      (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((int)param_1 + 0x70)));
      (*(float *)(gen_frame + 0xc8)) = fVar2;
      (*(float *)(gen_frame + 0xb0)) = fVar20;
      (*(float *)(gen_frame + 0xb4)) = fVar1;
      (*(float *)(gen_frame + 0xb8)) = fVar2;
      ((float *)(gen_frame + 0x90))[4] = fVar20;
      ((float *)(gen_frame + 0x90))[5] = fVar1;
      (*(float *)(gen_frame + 0xa8)) = fVar2;
      ((float *)(gen_frame + 0x90))[0] = fVar20;
      ((float *)(gen_frame + 0x90))[1] = fVar1;
      ((float *)(gen_frame + 0x90))[2] = fVar2;
      pfVar9 = ((float *)(gen_frame + 0x90)) + 2;
      (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
      do {
        fVar19 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        fVar18 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar17 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        uVar5 = *((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 2)));
        (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 4)))));
        uVar6 = *(ushort *)(*(float * PTR32 *)(gen_frame + 0x80));
        (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar5));
        uVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x88));
        fVar20 = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) - 4))) * fVar19) * fVar18 - fVar17)));
        (*(float *)(gen_frame + 0x70)) = fVar20;
        (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)GEN_TOP((uint)uVar6));
        pfVar10 = pfVar9 - 2;
        fVar1 = ((float)GEN_TOF((((float10)uVar5 * fVar19) * fVar18 - fVar17)));
        (*(float *)(gen_frame + 0x74)) = fVar1;
        fVar2 = ((float)GEN_TOF((((float10)uVar6 * fVar19) * fVar18 - fVar17)));
        (*(float *)(gen_frame + 0x78)) = fVar2;
        *pfVar10 = (float)((float10)fVar20 + (float10)*pfVar10);
        pfVar9[-1] = (float)((float10)fVar1 + (float10)pfVar9[-1]);
        *pfVar9 = (float)((float10)fVar2 + (float10)*pfVar9);
        uVar8 = F_005dc0a0(param_1 GEN_EDX_ARG,uVar7,pfVar10);
        (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x80)) + 0x12)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
        pfVar9 = pfVar9 + 4;
        iVar14 = (int)gen_fl2bits((*(float *)(gen_frame + 0x84))) - 1;
        (*(float *)(gen_frame + 0x84)) = gen_bits2f(iVar14);
      } while (iVar14 != 0);
    }
  }
  return uVar8;
}

/* ref: FUN_005dcd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dcd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5dcd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x78))) +
                    (uint)*((byte *)GEN_TOP(((int)param_2 + 0x2a))) * 4)));
    puVar3 = ((undefined4 *)GEN_TOP(((param_1 + 5) * 0x10 + (int)this)));
    *puVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    puVar3[1] = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
    puVar3[2] = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    puVar3[3] = *((undefined4 *)GEN_TOP((iVar1 + 0x3c)));
    return (uint)puVar3;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xec))))(param_2 GEN_EDX_FWD)));
  puVar4 = ((undefined4 *)GEN_TOP(((param_1 + 5) * 0x10 + (int)this)));
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  puVar4[2] = puVar3[2];
  uVar2 = puVar3[3];
  puVar4[3] = uVar2;
  return uVar2;
}

/* ref: FUN_005dcd90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dcd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dcd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x30)));
  bVar3 = GEN_ISNAN(fVar1);
  bVar5 = bVar3 || fVar1 == 0.0;
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if (bVar3 != bVar5) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    CONCAT11(bVar5 << 6 | bVar3 << 2 | 2U | !(0.0 <= fVar1),(char)in_EAX));
  }
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*((float *)GEN_TOP(((int)this + 0x2c))))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar1;
  if ((float10)*(float *)&REFG(undefined, 0x131f3dc) < (float10)fVar1) {
    *((float *)GEN_TOP(((int)this + 0x2c))) = (float)((float10)fVar1 - (float10)*(float *)&REFG(undefined, 0x131f3dc));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar2 == 0) {
    (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP(((int)this + 0x2c)));
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x2c))) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x10)) = (float)fVar6;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  else if (iVar2 == 1) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x2c)));
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x14)) = (float)fVar6;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  else {
    if (iVar2 != 2) goto LAB_005dcec0;
    fVar1 = *((float *)GEN_TOP(((int)this + 0x2c)));
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x18)) = (float)fVar6;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
LAB_005dcec0: ;
  F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x50);
  uVar4 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x38))),((undefined1 *)(gen_frame + 0x0)));
  if (*((char *)GEN_TOP(((int)this + 0x35))) != '\0') {
    F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x60);
    uVar4 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),((undefined1 *)(gen_frame + 0x0)));
  }
  if (*((char *)GEN_TOP(((int)this + 0x36))) != '\0') {
    F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x70);
    uVar4 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x40))),((undefined1 *)(gen_frame + 0x0)));
  }
  return uVar4;
}

/* ref: FUN_005dcf40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dcf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dcf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  uVar1 = F_005dc190(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x38))),(int)this + 0x50);
  if (*((char *)GEN_TOP(((int)this + 0x35))) != '\0') {
    uVar1 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),(int)this + 0x60);
  }
  if (*((char *)GEN_TOP(((int)this + 0x36))) != '\0') {
    uVar1 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x40))),(int)this + 0x70);
  }
  return uVar1;
}

/* ref: FUN_005dcf90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005dcf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dcf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined1 * puVar2;
  uint uVar3;
  uint _Size;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  bVar1 = *((byte *)GEN_TOP((param_1 + 8)));
  *((byte *)GEN_TOP(((int)this + 0x21))) = bVar1;
  if (8 < bVar1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 8;
  }
  bVar1 = 0;
  uVar3 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x21))) != '\0') {
    do {
      puVar2 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar3 * 2 + param_1)));
      (*(int *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3),*puVar2);
      _Size = (byte)puVar2[1] / 10;
      if (_Size < 0xb) {
        if (_Size != 0) goto LAB_005dd005;
      }
      else {
        _Size = 10;
LAB_005dd005: ;
        F_00c48350(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x28 + (int)this))),(*(int *)(gen_frame + 0x0)),_Size);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + _Size;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((byte *)GEN_TOP(((int)this + 0x21))));
    bVar1 = (byte)(*(int *)(gen_frame + 0x4));
  }
  *((byte *)GEN_TOP(((int)this + 0x22))) = bVar1;
  return bVar1;
}

/* ref: FUN_005dd040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c58));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  F_005d6e90(this GEN_EDX_FWD);
  return ((uint)(uint)(this));
}

/* ref: FUN_005dd120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005dd120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x5dd120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_00427e30();
  uVar2 = F_00c4f2cb((int)uVar4);
  param_1[1] = 0;
  *param_1 = 0;
  if ((float10)param_2 < (float10)param_3) {
    uVar3 = F_00c4f2dd();
    iVar1 = (int)(((float10)param_3 - (float10)param_2) * (float10)*(double *)&REFG(undefined, 0x10912a8));
    uVar2 = (int)uVar3 / iVar1;
    param_1[2] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)param_2 +
                                    (float10)((int)uVar3 % iVar1) /
                                    (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  }
  else {
    param_1[2] = (undefined4)gen_fl2bits(param_3);
  }
  if ((float10)param_4 < (float10)param_5) {
    uVar2 = F_00c4f2dd();
    iVar1 = (int)(((float10)param_5 - (float10)param_4) * (float10)*(double *)&REFG(undefined, 0x10912a8));
    param_1[3] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)param_4 +
                                    (float10)((int)uVar2 % iVar1) /
                                    (float10)*(double *)&REFG(undefined, 0x10912a8)))));
    return (int)uVar2 / iVar1;
  }
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  return uVar2;
}

/* ref: FUN_005dd1f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dd1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3c84));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined2 *)GEN_TOP(((int)this + 0x3a))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x36))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *(uint *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return uVar1;
}

