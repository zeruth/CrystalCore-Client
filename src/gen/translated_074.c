#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI2::AddonCharaSelectLegacy::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,2,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c1880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c33bc)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c1890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c1890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_0055e1c0(this GEN_EDX_FWD,(float)((float10)*(float *)&REFG(undefined, 0x109feac) * (float10)*(double *)&REFG(undefined, 0x10944e0)),0,
               0,(float)(float10)1,1);
  F_0055e220(this GEN_EDX_ARG,(float)((float10)*(float *)&REFG(undefined, 0x109feac) * (float10)*(double *)&REFG(undefined, 0x10944e0)),0,
               0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  F_005a91d0(this GEN_EDX_ARG,1,2);
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b990(uVar1 GEN_EDX_ARG);
  if ((*((int *)GEN_TOP((uVar1 + 8))) == 0) ||
     (uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 8))) + 0x20))), *((int *)GEN_TOP((uVar1 + 400))) < 1)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf47 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c1940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c1940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 8)));
    if ((**((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) & 8) != 0) {
      **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) = **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) & 0xfffffff7;
      if (((0 < *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 400)))) &&
          (uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar2 != 3)) && (uVar2 != 2)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,0);
      }
    }
  }
  return;
}

/* ref: FUN_007c19a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c19a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d058c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c1a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c33d0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c1a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c1a70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c1a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) == 0) ||
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c1b16;
  uVar1 = F_0055dcb0();
  if ((*((short *)GEN_TOP((uVar1 + 0x1e8))) == 0) && (*((short *)GEN_TOP((uVar1 + 0x1ea))) == 0)) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x184))) != *((char *)GEN_TOP((uVar1 + 0x21d)))) goto LAB_007c1b16;
    uVar1 = F_0055dcb0();
    bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x180)));
    *((bool *)GEN_TOP((param_1 + 0x184))) = bVar2;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c1b16;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x184))) == '\0') goto LAB_007c1b16;
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x180)));
    *((undefined1 *)GEN_TOP((param_1 + 0x184))) = 0;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c1b16;
    iVar3 = 0x66;
  }
  F_0059d640(this GEN_EDX_ARG,iVar3);
LAB_007c1b16: ;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c1b30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x800;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d068c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c1ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c33e4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c1bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055dcb0();
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + 0x238)));
  uVar2 = F_0055dcb0();
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 0x234))),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c1bf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c1bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint in_ecx;
  
  uVar3 = F_0055e2f0(param_1 GEN_EDX_FWD,2);
  if (uVar3 != 0) {
    fVar1 = (float)(int)param_3;
    if ((int)param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a030(uVar3 GEN_EDX_ARG);
    F_00568250(uVar3 GEN_EDX_ARG,(float)((float10)fVar1 / (float10)uVar2));
    F_00559eb0(uVar3 GEN_EDX_ARG,param_2);
  }
  uVar3 = F_0055e2f0(param_1 GEN_EDX_ARG,3);
  if (uVar3 != 0) {
    fVar1 = (float)(int)param_3;
    if ((int)param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a030(uVar3 GEN_EDX_ARG);
    F_00568250(uVar3 GEN_EDX_ARG,(float)((float10)fVar1 / (float10)uVar2));
  }
  in_ecx = F_0055e2f0(param_1 GEN_EDX_ARG,4);
  uVar3 = 0;
  if (in_ecx != 0) {
    fVar1 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a020(in_ecx GEN_EDX_ARG);
    F_00568230(in_ecx GEN_EDX_ARG,(float)((float10)fVar1 / (float10)uVar2));
    uVar3 = F_00559f40(in_ecx GEN_EDX_ARG,param_3);
  }
  return uVar3;
}

/* ref: FUN_007c1cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d078c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectTitle::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c1d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c33f8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectTitle::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c1d70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c1d70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  bool bVar2;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) != 0) &&
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x184))) == *((char *)GEN_TOP((uVar1 + 0x21d)))) {
      uVar1 = F_0055dcb0();
      bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
      *((bool *)GEN_TOP((param_1 + 0x184))) = bVar2;
      if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x180))) != ((undefined *)GEN_TOP(0x0))) {
        F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x180))) GEN_EDX_ARG,!bVar2 + 0x65);
      }
    }
  }
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c1df0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d088c));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x228))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x27c))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x2d0))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x324))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x378))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x37c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x380))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 900))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x388))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x390))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x394))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x398))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x39c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a0))) = 1;
  return (uint)this;
}

/* ref: FUN_007c1ee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c1ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d088c));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x324))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x2d0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x27c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x228))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c1f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c1f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3410)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c1f70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c1f70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) == 0) ||
     ((uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0xf4))) >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2))))
  goto LAB_007c2069;
  if (*((char *)GEN_TOP(((int)param_1 + 0x3a3))) == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0x3a2))) == '\0') {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 900))) + 0x84))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x388))) + 0x84)));
        goto LAB_007c203a;
      }
      goto LAB_007c203c;
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 900))) + 0x84))) == '\0') {
      iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x388)));
      goto LAB_007c1fe4;
    }
  }
  else {
    if (*((char *)GEN_TOP(((int)param_1 + 0x3a2))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x38c))) + 0x84)));
LAB_007c203a: ;
      if (cVar1 == '\0') goto LAB_007c2069;
LAB_007c203c: ;
      uVar2 = F_0055dcb0();
      if (*((char *)GEN_TOP((uVar2 + 0x21d))) == '\0') {
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x3a2))) = 1;
        F_0056b630(param_1 GEN_EDX_ARG,0x11a,7,0,9,0,0);
      }
      goto LAB_007c2069;
    }
    iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x38c)));
LAB_007c1fe4: ;
    if (*((char *)GEN_TOP((iVar3 + 0x84))) == '\0') goto LAB_007c1ffb;
  }
  uVar2 = F_0055dcb0();
  if (*((char *)GEN_TOP((uVar2 + 0x21d))) != '\0') {
LAB_007c1ffb: ;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x3a2))) = 0;
    F_0056b780(param_1 GEN_EDX_ARG,0);
    uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
    return uVar2;
  }
LAB_007c2069: ;
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c2080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if (((char)param_1[1] == '\0') && ((*param_1 == 2 || (*param_1 == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007c20b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c20b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c20b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x378))) = param_2;
  return param_2;
}

/* ref: FUN_007c20c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c20c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c20c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x108, 8);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104);
  if ((*((byte *)GEN_TOP(((int)this + 0xf9))) & 1) == 0) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104);
  }
  if (*((char *)GEN_TOP(((int)this + 0x3a3))) != '\0') {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x38c))) + 0x9c);
    uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),uVar2 != 0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x398))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x398))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    return (uint)uVar5;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 900))) + 0x9c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x388))) + 0x9c);
  uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (((1 < uVar4) && (uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG), 1 < uVar4)) && (uVar2 + uVar3 < 0x15)) {
    (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),1);
    bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,(int)this + 0x228);
    if ((bVar1 == 0) || (bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(int)this + 0x27c), bVar1 == 0)) goto LAB_007c21d9;
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
LAB_007c21d9: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x398))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x398))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP(((int)this + 0x380))) != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    uVar2 = F_00560910(uVar2 + uVar3);
    F_0042e430(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,uVar2);
    F_0042e370(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&REFG(undefined, 0x10c3430));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x380))) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  return (uint)uVar5;
}

/* ref: FUN_007c2270 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c2270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x3a3))) == '\0') {
    uVar1 = F_0055dcb0();
    F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x13a))),1);
  }
  return;
}

/* ref: FUN_007c22a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c22a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c22a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d098c));
  *((undefined2 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2360(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c2360u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) == 0) ||
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c2406;
  uVar1 = F_0055dcb0();
  if ((*((short *)GEN_TOP((uVar1 + 0x1e8))) == 0) && (*((short *)GEN_TOP((uVar1 + 0x1ea))) == 0)) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x1bc))) != *((char *)GEN_TOP((uVar1 + 0x21d)))) goto LAB_007c2406;
    uVar1 = F_0055dcb0();
    bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1a0)));
    *((bool *)GEN_TOP((param_1 + 0x1bc))) = bVar2;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c2406;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x1bc))) == '\0') goto LAB_007c2406;
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1a0)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1bc))) = 0;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c2406;
    iVar3 = 0x66;
  }
  F_0059d640(this GEN_EDX_ARG,iVar3);
LAB_007c2406: ;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c2420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3434)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c2430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 4);
  }
  if ((uVar3 & 2) == 0) {
    if (((uVar3 & 4) != 0) && (-1 < *(int *)(this + 0x1b4))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x54))))(*(int * PTR32 *)(this + 400) GEN_EDX_FWD,*(int *)(this + 0x1b4),0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
                (*(int * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(this + 0x1b4),0,0);
      *(undefined4 *)(this + 0x1b4) = 0xffffffff;
    }
  }
  else {
    piVar1 = *(int * PTR32 *)(this + 400);
    iVar2 = piVar1[0x30];
    *(int *)(this + 0x1b4) = iVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,iVar2,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(this + 0x1b4),0,0);
  }
  if ((uVar3 & 0x20) != 0) {
    piVar1 = *(int * PTR32 *)(this + 400);
    iVar2 = piVar1[0x30];
    *(int *)(this + 0x1b8) = iVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,iVar2,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(this + 0x1b8),0,0);
    return 1;
  }
  if (((uVar3 & 0x40) != 0) && (-1 < *(int *)(this + 0x1b8))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x54))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG,*(int *)(this + 0x1b8),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x6c))))
              (*(int * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(this + 0x1b8),0,0);
    *(undefined4 *)(this + 0x1b8) = 0xffffffff;
  }
  return 1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c2560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined1 AVar1;
  int * piVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  AVar1 = this[0xf9];
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),AVar1);
  if (((byte)AVar1 & 1) != 0) {
    if (((byte)AVar1 & 0x40) == 0) {
      piVar2 = *(int * PTR32 *)(this + 400);
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_FWD);
        if (uVar3 == 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
          *(uint *)(this + 0xa4) = uVar3;
        }
      }
      F_005a89b0(this GEN_EDX_ARG,(undefined1)param_1,1);
    }
    else {
      F_005a89b0(this GEN_EDX_ARG,(undefined1)param_1,1);
      uVar3 = F_0055dcb0();
      F_00587d80(*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x14))) GEN_EDX_ARG,this);
      this[0xf9] = (undefined1)((byte)this[0xf9] & 0xbf);
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c2630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(uint *)(gen_frame + 0x10)) = param_3;
  uVar3 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar3 != 5) && (uVar3 != 4)) {
    uVar3 = (param_1 & 0xffff) - 0xc;
    switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
    case 0xc: ;
      if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
        if (*(int *)(this + 0x1b0) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x88))))(*(int * PTR32 *)(this + 0x1b0) GEN_EDX_FWD,this,0);
        }
        uVar3 = F_0055dcb0();
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar3 = F_00557670((*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
        return uVar3;
      }
      break;
    case 0xd: ;
    case 0xe: ;
    case 0x10: ;
    case 0x11: ;
    case 0x12: ;
    case 0x13: ;
    case 0x14: ;
    case 0x15: ;
    case 0x16: ;
    case 0x18: ;
    case 0x19: ;
    case 0x1a: ;
    case 0x1b: ;
    case 0x1c: ;
    case 0x1d: ;
    case 0x1e: ;
      break;
    case 0xf: ;
      bVar2 = F_00a34970(((undefined *)GEN_TOP(param_4[2])) GEN_EDX_ARG,0x16d);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        if (*(int *)(this + 0x1b0) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x88))))(*(int * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,this,0);
        }
        uVar3 = F_0055dcb0();
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar3 = F_00557670((*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
        return uVar3;
      }
      break;
    case 0x17: ;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x188) + 100)))) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x18)) = 0xd;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
        (*(uint *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x28)) = 0xffffffff;
        uVar3 = F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x14)));
        if ((char)uVar3 != '\0') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x18))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0,0);
        }
        puVar4 = &(*(uint *)(gen_frame + 0x2c));
        iVar5 = 2;
        do {
          puVar4 = puVar4 - 2;
          uVar3 = F_005a2670(puVar4 GEN_EDX_ARG);
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
        return uVar3;
      }
      uVar3 = param_2;
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1ac) + 0x14))))(*(int * PTR32 *)(this + 0x1ac) GEN_EDX_ARG,0);
      }
      break;
    case 0x1f: ;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
      iVar5 = param_4[2];
      (*(uint *)(gen_frame + 0x20)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x28)) = iVar5;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x1c)));
      puVar4 = &(*(uint *)(gen_frame + 0x2c));
      iVar5 = 1;
      do {
        puVar4 = puVar4 - 2;
        uVar3 = F_005a2670(puVar4 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      return uVar3;
    case 0x20: ;
      if (*(int *)(this + 0x1a8) != 0) {
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
        (*(uint *)(gen_frame + 0x20)) = 4;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x28)) = uVar1;
        F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x1c)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x14))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0);
        puVar4 = &(*(uint *)(gen_frame + 0x2c));
        iVar5 = 1;
        do {
          puVar4 = puVar4 - 2;
          uVar3 = F_005a2670(puVar4 GEN_EDX_ARG);
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
        return uVar3;
      }
      break;
    case 0x21: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x58))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG,param_4[2]);
      if ((char)uVar3 == '\0') {
        iVar5 = param_4[4];
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(uint *)(gen_frame + 0x10)) = (uint)((char)iVar5 == '\x01');
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x18)) = 0xd;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
        iVar5 = param_4[2];
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x10));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x28)) = iVar5;
        uVar3 = F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x14)));
        if ((char)uVar3 != '\0') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x18))))(*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0,0);
        }
        puVar4 = &(*(uint *)(gen_frame + 0x2c));
        iVar5 = 2;
        do {
          puVar4 = puVar4 - 2;
          uVar3 = F_005a2670(puVar4 GEN_EDX_ARG);
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
        return uVar3;
      }
      break;
    default: ;
      goto switchD_007c2683_default;
    }
  }
switchD_007c2683_default: ;
  return uVar3;
}

/* ref: FUN_007c2a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c2a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 uVar7;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9a0(uVar6 GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP((uVar5 + 8)));
  iVar3 = *param_3;
  iVar4 = *((int *)GEN_TOP((uVar6 + 4)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 400))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,param_1);
  ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x28))))(param_3,(uint)((char)uVar5 == '\0'));
  if (iVar4 != 0) {
    uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0x140 + param_1 * 4)));
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_ARG)));
    F_00584110(this_00 GEN_EDX_ARG,uVar7);
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x160 + param_1 * 4)));
    if ((uVar1 & 2) != 0) {
      uVar5 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x66);
      return uVar5;
    }
    if ((uVar1 & 8) != 0) {
      uVar5 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x68);
      return uVar5;
    }
    if ((-1 < (char)uVar1) && ((uVar1 & 0x100) == 0)) {
      uVar5 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x65);
      return uVar5;
    }
    uVar5 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x67);
  }
  return uVar5;
}

/* ref: FUN_007c2b00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c2b00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c2b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 == '\0') << 7 | *((byte *)GEN_TOP((param_1 + 0xfb))) & 0x7f;
  *((byte *)GEN_TOP((param_1 + 0xf9))) = *((byte *)GEN_TOP((param_1 + 0xf9))) & 0x7f;
  *((byte *)GEN_TOP((param_1 + 0xfb))) = bVar1;
  return bVar1;
}

/* ref: FUN_007c2b30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c2b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0a8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c2c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,2,0);
  F_005a92d0(this GEN_EDX_ARG,0,1,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c2c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3490)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  if (*(int *)(this + 0x1d4) != 0) {
    uVar1 = F_005b0610(*(int *)(this + 0x1d4) GEN_EDX_ARG,(undefined1)param_1,1,(undefined1)param_2);
  }
  return uVar1;
}

/* ref: FUN_007c2cc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c2cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0b8c));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0xffffffff;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c2d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,2,0);
  F_005a92d0(this GEN_EDX_ARG,0,1,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2d90(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c2d90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c2db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c2db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c34b4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf46 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c2de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: FUN_007c2df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c2e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 7;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c2f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c2f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c2fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c2fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c2fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = param_1 * 5 + 100;
  uVar3 = param_1;
  if (*((int *)GEN_TOP(((int)this + iVar1 * 4))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4))) = 0;
    F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x180))) GEN_EDX_FWD,
                 *(undefined4 *)(&REFG(undefined, 0x10c34ac) + param_1 * 4));
    puVar2 = ((uint *)GEN_TOP(F_00ab36c0(0x39)));
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      pcVar4 = "";
    }
    else {
      pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x18c))) GEN_EDX_ARG,pcVar4);
    uVar3 = F_00560910(0);
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(*((undefined4 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x188))) GEN_EDX_ARG)));
    F_00584110(this_00 GEN_EDX_ARG,uVar3);
    uVar3 = F_0059b3f0(this GEN_EDX_ARG,1,0);
  }
  return uVar3;
}

/* ref: FUN_007c3030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c3030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = param_1 * 5 + 100;
  uVar3 = param_1;
  if (*((int *)GEN_TOP(((int)this + iVar1 * 4))) != -1) {
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4))) = 0xffffffff;
    F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x180))) GEN_EDX_FWD,
                 *(undefined4 *)(&REFG(undefined, 0x10c34ac) + param_1 * 4));
    puVar2 = ((uint *)GEN_TOP(F_00ab36c0(0x3a)));
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      pcVar4 = "";
    }
    else {
      pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x18c))) GEN_EDX_ARG,pcVar4);
    uVar3 = F_00560910(0);
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(*((undefined4 *)GEN_TOP(((int)this + param_1 * 0x14 + 0x188))) GEN_EDX_ARG)));
    F_00584110(this_00 GEN_EDX_ARG,uVar3);
    uVar3 = F_0059b3f0(this GEN_EDX_ARG,1,0);
  }
  return uVar3;
}

/* ref: FUN_007c30c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c30c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  *((int *)GEN_TOP(((int)this + 0x1b0))) = param_1;
  iVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x184)));
  do {
    if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = param_2;
      if (iVar1 != param_1) {
        uVar3 = 0xffffffff;
      }
      in_EAX = F_005623b0(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_FWD,uVar3);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar1 < 2);
  return in_EAX;
}

/* ref: FUN_007c3100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0c8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMake::vf38 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c31a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c31a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((((*(int *)(this + 0x1b8) == 0) && (*(int *)(this + 0x180) != 0)) &&
      ((*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0xf9))) & 1) != 0)) &&
     ((*(int *)(this + 0x184) != 0 && ((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) != 0)))) {
    *(undefined4 *)(this + 0x1b8) = 1;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffec;
    F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeSubMenuBase::vf45 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c3210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((param_2 + 0xe0))) & 0xf;
  if (((uVar2 != 0) && (*((int *)GEN_TOP((param_2 + 0xe4))) == 2)) ||
     ((uVar1 = param_2, uVar2 != 0 && (*((int *)GEN_TOP((param_2 + 0xe4))) == 3)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_007c3250 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0d8c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeTitle::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c32c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c32c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c35fc)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeTitle::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c32d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c32d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  bool bVar2;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) != 0) &&
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x184))) == *((char *)GEN_TOP((uVar1 + 0x21d)))) {
      uVar1 = F_0055dcb0();
      bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
      *((bool *)GEN_TOP((param_1 + 0x184))) = bVar2;
      if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x180))) != ((undefined *)GEN_TOP(0x0))) {
        F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x180))) GEN_EDX_ARG,!bVar2 + 0x65);
      }
    }
  }
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c3350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x800;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0e8c));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c33c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c360c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c33d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c33d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this GEN_EDX_FWD,2);
  *(uint *)(this + 0x180) = uVar2;
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055dcb0();
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + 0x238)));
  uVar2 = F_0055dcb0();
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 0x234))),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf54 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c3420(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c3420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[0x60] != 0) {
    fVar2 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar2 = fVar2 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_FWD,0);
    fVar1 = (float)param_3;
    if (param_3 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG,0);
    F_00568230(param_1[0x60] GEN_EDX_ARG,((float)GEN_TOF(((float10)fVar2 / (float10)(uVar3 & 0xffff)))));
    F_00568250(param_1[0x60] GEN_EDX_ARG,((float)GEN_TOF(((float10)fVar1 / (float10)(uVar4 & 0xffff)))));
  }
  return;
}

/* ref: FUN_007c34c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c34c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c34c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0f8c));
  iVar2 = (int)this + 0x180;
  iVar1 = 2;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x27c;
  iVar1 = 2;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x378))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x37c))) = 0;
  return (uint)this;
}

/* ref: FUN_007c3530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0f8c));
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x378)));
  iVar3 = 2;
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x54)));
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x27c)));
  iVar3 = 2;
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x54)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCity::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c35a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c35a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3620)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeCity::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c35b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c35b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  this_00 = this + 0x27c;
  puVar3 = ((undefined4 *)GEN_TOP((param_2 + 0xe1c)));
  param_2 = 3;
  do {
    if ((*(byte *)(puVar3 + 5) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = puVar3[6];
    }
    F_0042e430(this_00 - 0xfc GEN_EDX_FWD,uVar1);
    if ((*(byte *)(puVar3 - 1) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar3;
    }
    F_0042e430(this_00 GEN_EDX_ARG,uVar1);
    puVar3 = puVar3 + 2;
    this_00 = this_00 + 0x54;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  F_0055e1c0(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),0xffffff9c,0,(float)(float10)1,1);
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = F_0055e360(this GEN_EDX_ARG,3);
  uVar2 = F_0055da10(uVar2);
  *(uint *)(this + 0x378) = uVar2;
  uVar2 = F_0055e340(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x37c) = uVar2;
  uVar2 = F_005b0610(this GEN_EDX_ARG,1,1,0);
  return uVar2;
}

/* ref: FUN_007c3690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c3690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,1)));
  if (((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x378))) != 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x37c))) != 0)) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
    F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
    iVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x37c))) GEN_EDX_ARG,1);
    if (param_1 == 1) {
      F_0059d640(this_00 GEN_EDX_ARG,0x66);
      F_0058f730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x378))) + 4))) GEN_EDX_ARG,0x1edc1,iVar2,6);
      iVar2 = (int)this + 0x180;
    }
    else if (param_1 == 2) {
      F_0059d640(this_00 GEN_EDX_ARG,0x65);
      F_0058f730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x378))) + 4))) GEN_EDX_ARG,0x1edc2,iVar2,6);
      iVar2 = (int)this + 0x1d4;
    }
    else {
      if (param_1 - 3U != 0) {
        return param_1 - 3U;
      }
      F_0059d640(this_00 GEN_EDX_ARG,0x67);
      F_0058f730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x378))) + 4))) GEN_EDX_ARG,0x1edc3,iVar2,6);
      iVar2 = (int)this + 0x228;
    }
    uVar1 = F_0042a990(iVar2 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x37c))) GEN_EDX_ARG,uVar1)));
  }
  return (uint)this_00;
}

/* ref: FUN_007c3790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d108c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c37f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c37f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c3820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3630)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c3830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c3830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007c3880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7c3880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x184))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x184))) + 0x28))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c38a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c38a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) == 0) ||
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c3946;
  uVar1 = F_0055dcb0();
  if ((*((short *)GEN_TOP((uVar1 + 0x1e8))) == 0) && (*((short *)GEN_TOP((uVar1 + 0x1ea))) == 0)) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x188))) != *((char *)GEN_TOP((uVar1 + 0x21d)))) goto LAB_007c3946;
    uVar1 = F_0055dcb0();
    bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x180)));
    *((bool *)GEN_TOP((param_1 + 0x188))) = bVar2;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c3946;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x188))) == '\0') goto LAB_007c3946;
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x180)));
    *((undefined1 *)GEN_TOP((param_1 + 0x188))) = 0;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c3946;
    iVar3 = 0x66;
  }
  F_0059d640(this GEN_EDX_ARG,iVar3);
LAB_007c3946: ;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c3960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d118c));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x230))) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x800;
  *((undefined4 *)GEN_TOP(((int)this + 0x284))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x288))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x29c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2ac))) = 0;
  return (uint)this;
}

/* ref: FUN_007c3a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d118c));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x230))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c3a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3648)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3aa0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c3aa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) == 0) ||
     ((uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0xf4))) >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2))))
  goto LAB_007c3b99;
  if (*((char *)GEN_TOP(((int)param_1 + 0x2ad))) == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0x2ac))) == '\0') {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x28c))) + 0x84))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x290))) + 0x84)));
        goto LAB_007c3b6a;
      }
      goto LAB_007c3b6c;
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x28c))) + 0x84))) == '\0') {
      iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x290)));
      goto LAB_007c3b14;
    }
  }
  else {
    if (*((char *)GEN_TOP(((int)param_1 + 0x2ac))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x294))) + 0x84)));
LAB_007c3b6a: ;
      if (cVar1 == '\0') goto LAB_007c3b99;
LAB_007c3b6c: ;
      uVar2 = F_0055dcb0();
      if (*((char *)GEN_TOP((uVar2 + 0x21d))) == '\0') {
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x2ac))) = 1;
        F_0056b630(param_1 GEN_EDX_ARG,0x11a,7,0,9,0,0);
      }
      goto LAB_007c3b99;
    }
    iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x294)));
LAB_007c3b14: ;
    if (*((char *)GEN_TOP((iVar3 + 0x84))) == '\0') goto LAB_007c3b2b;
  }
  uVar2 = F_0055dcb0();
  if (*((char *)GEN_TOP((uVar2 + 0x21d))) != '\0') {
LAB_007c3b2b: ;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x2ac))) = 0;
    F_0056b780(param_1 GEN_EDX_ARG,0);
    uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
    return uVar2;
  }
LAB_007c3b99: ;
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_007c3bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x108, 8);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104);
  if ((*((byte *)GEN_TOP(((int)this + 0xf9))) & 1) == 0) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104);
  }
  if (*((char *)GEN_TOP(((int)this + 0x2ad))) == '\0') {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x28c))) + 0x9c);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x290))) + 0x9c);
    uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (((uVar3 < 2) || (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG), uVar3 < 2)) || ((*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),1), 0x14 < uVar1 + uVar2)) {
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2a0))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2a0))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
    if (*((int *)GEN_TOP(((int)this + 0x288))) != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
      uVar1 = F_00560910(uVar1 + uVar2);
      F_0042e430(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,uVar1);
      F_0042e370(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,&REFG(undefined, 0x10c3664));
      uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
      F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x288))) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    return (uint)uVar4;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x294))) + 0x9c);
  uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),uVar1 != 0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2a0))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2a0))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c3d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c3d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if (((char)param_1[1] == '\0') && ((*param_1 == 2 || (*param_1 == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007c3d70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c3d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x2ad))) == '\0') {
    uVar1 = F_0055dcb0();
    F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x13a))),1);
  }
  return;
}

/* ref: FUN_007c3da0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d128c));
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c3e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,2,0);
  F_005a92d0(this GEN_EDX_ARG,0,1,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c3e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c3e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3668)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf47 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c3e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7c3e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined * puVar4;
  
  if (*(int *)(this + 0x180) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
    iVar2 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 4)));
    if ((**((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) & 0x20) != 0) {
      **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) = **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) & 0xffffffdf;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x180)));
      if (iVar1 < 1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD,1,0);
        return;
      }
      if (this[0x194] != (undefined1)0x0) {
        uVar3 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
        F_004142d0(&(*(int *)&gen_args[0]) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar3 + 0x14))));
        if (*(int *)(this + 0x180) != 0) {
          F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x180) + 4))) GEN_EDX_ARG,iVar1,(*(int *)&gen_args[0]) + 2,6);
        }
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 400))) {
        case 0: ;
        case 1: ;
        case 5: ;
          F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1e0))));
          this_00 = *(undefined * PTR32 *)(this + 0x188);
          puVar4 = &REFG(undefined, 0x10bed77);
          break;
        case 3: ;
          F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1e0))));
          F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,"");
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,0);
        default: ;
          this[0x194] = (undefined1)0x0;
          return;
        case 4: ;
          F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1e0))));
          F_00584110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1e4))));
          F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,"");
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,0);
          this[0x194] = (undefined1)0x0;
          return;
        case 6: ;
          F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1dc))));
          puVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1e0)));
          this_00 = *(undefined * PTR32 *)(this + 0x184);
        }
        F_00584110(this_00 GEN_EDX_ARG,puVar4);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,0);
        this[0x194] = (undefined1)0x0;
        return;
      }
    }
  }
  return;
}

/* ref: FUN_007c4030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((uint *)GEN_TOP(((int)this + 400))) = param_1;
  uVar1 = param_1;
  if ((*((int *)GEN_TOP(((int)this + 0x184))) != 0) && (*((int *)GEN_TOP(((int)this + 0x188))) != 0)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 3: ;
      uVar1 = F_0059d6a0(this GEN_EDX_FWD,0x13,1,0);
      return uVar1;
    case 4: ;
      uVar1 = F_0059d6a0(this GEN_EDX_ARG,0x66,1,0);
      return uVar1;
    case 5: ;
      uVar1 = F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
      return uVar1;
    case 6: ;
      uVar1 = F_0059d6a0(this GEN_EDX_ARG,0x67,1,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c40c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c40c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  ushort uVar1;
  uint in_ecx;
  uint uVar2;
  float10 fVar3;
  
  in_ecx = F_0055e2f0(param_1 GEN_EDX_FWD,6);
  uVar2 = 0;
  if (in_ecx != 0) {
    fVar3 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    uVar1 = F_0055a030(in_ecx GEN_EDX_ARG);
    uVar2 = F_00568250(in_ecx GEN_EDX_ARG,((float)GEN_TOF((((float10)1 / (float10)*((float *)GEN_TOP(((int)param_1 + 0x11c)))) *
                                       (float10)((float)fVar3 / (float)uVar1)))));
  }
  return uVar2;
}

/* ref: FUN_007c4130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d138c));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c41c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c41c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c41f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c41f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3678)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c4200u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) == 0) ||
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c42a6;
  uVar1 = F_0055dcb0();
  if ((*((short *)GEN_TOP((uVar1 + 0x1e8))) == 0) && (*((short *)GEN_TOP((uVar1 + 0x1ea))) == 0)) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x1b0))) != *((char *)GEN_TOP((uVar1 + 0x21d)))) goto LAB_007c42a6;
    uVar1 = F_0055dcb0();
    bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1a8)));
    *((bool *)GEN_TOP((param_1 + 0x1b0))) = bVar2;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c42a6;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x1b0))) == '\0') goto LAB_007c42a6;
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1a8)));
    *((undefined1 *)GEN_TOP((param_1 + 0x1b0))) = 0;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c42a6;
    iVar3 = 0x66;
  }
  F_0059d640(this GEN_EDX_ARG,iVar3);
LAB_007c42a6: ;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c42c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c42c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c42c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  undefined * this;
  uint uVar2;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = 0x81b;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0x81c;
  puVar1 = ((uint *)GEN_TOP(F_00ab36c0(((undefined4 *)(gen_frame + 0x0))[(int)(param_1)])));
  this = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_ARG)));
  uVar2 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      uVar2 = F_00584110(this GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
      return uVar2;
    }
    uVar2 = F_00584110(this GEN_EDX_ARG,"");
  }
  return uVar2;
}

/* ref: FUN_007c4330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (gen_frame + 0x10);
  if (param_1 < 5) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x180)));
    uVar2 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar2 + 0xc0);
    if ((param_1 == 0) || (param_1 == 4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x198))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,uVar4);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffed;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(uint *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar3 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007c43c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c43c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c43c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x184)));
  iVar2 = 4;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x28))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_FWD,param_1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x194))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x198))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_007c4410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d148c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakePose::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakePose::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c44c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c44c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3690)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakePose::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c44d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c44d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  undefined * this;
  bool bVar2;
  int iVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) == 0) ||
     ((uVar1 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
  goto LAB_007c4576;
  uVar1 = F_0055dcb0();
  if ((*((short *)GEN_TOP((uVar1 + 0x1e8))) == 0) && (*((short *)GEN_TOP((uVar1 + 0x1ea))) == 0)) {
    uVar1 = F_0055dcb0();
    if (*((char *)GEN_TOP((param_1 + 0x19c))) != *((char *)GEN_TOP((uVar1 + 0x21d)))) goto LAB_007c4576;
    uVar1 = F_0055dcb0();
    bVar2 = *((char *)GEN_TOP((uVar1 + 0x21d))) == '\0';
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x198)));
    *((bool *)GEN_TOP((param_1 + 0x19c))) = bVar2;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c4576;
    iVar3 = !bVar2 + 0x65;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x19c))) == '\0') goto LAB_007c4576;
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x198)));
    *((undefined1 *)GEN_TOP((param_1 + 0x19c))) = 0;
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c4576;
    iVar3 = 0x66;
  }
  F_0059d640(this GEN_EDX_ARG,iVar3);
LAB_007c4576: ;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007c4590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 3) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x18c)));
    uVar2 = F_00561390();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar2 + 0xc0);
  }
  return uVar2;
}

/* ref: FUN_007c45d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c45d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff0;
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 0x110)));
  F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c4630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffef;
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 0x110)));
  F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c46d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c46d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c36a0)),0,6);
  return bVar1;
}

/* ref: FUN_007c46e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c46e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c46e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1a4))) = param_2;
  return param_2;
}

/* ref: FUN_007c46f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c46f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7c46f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = F_00ab3660(param_1);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((uVar1 + 0x38)));
  }
  uVar1 = F_00ab21a0(uVar2);
  if (uVar1 != 0) {
    return (uint)*((byte *)GEN_TOP((uVar1 + 0x40)));
  }
  return 0;
}

/* ref: FUN_007c4730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff6;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c47a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c47a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c47a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1a8))) = param_2;
  return param_2;
}

/* ref: FUN_007c47b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c47b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c47b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x194)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  uVar1 = F_00ab3660(*((undefined4 *)GEN_TOP(((int)this + 0x194))));
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((uVar1 + 0x38)));
  }
  uVar1 = F_00ab21a0(uVar2);
  if (uVar1 != 0) {
    uVar3 = (uint)*((byte *)GEN_TOP((uVar1 + 0x40)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar1;
}

/* ref: FUN_007c4860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c48a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c48a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c48a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c4910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d159c));
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  F_0042b630((int)this + 0x1c4 GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_007c49c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c49c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c49c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d159c));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90(uVar1 + 0xe0 GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  F_005a92d0(this GEN_EDX_ARG,1,2,0);
  F_005a92d0(this GEN_EDX_ARG,0,1,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c4a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c36b8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,0xc)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0059d670(this_00 GEN_EDX_ARG,0x65);
  }
  return uVar1;
}

/* ref: FUN_007c4a70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c4a70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < 0) {
    return 0;
  }
  return param_1 * 0x100 + param_2;
}

/* ref: FUN_007c4a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055dcb0();
  F_00560760(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0042a990((int)this + 0x1c4 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1ac)));
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  uVar2 = F_00590ad0(uVar2 + 0xe0 GEN_EDX_ARG,2,(uint)*((byte *)GEN_TOP(((int)this + 0x13a))),
                       *((undefined4 *)GEN_TOP((iVar1 + 0x68))),((uint *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_007c4ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + 0x68))));
  return uVar1;
}

/* ref: FUN_007c4b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1ac))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_FWD,0);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff8;
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((int)this + 400)));
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c4b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d169c));
  return (uint)this;
}

/* ref: FUN_007c4be0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c4be0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c4be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  undefined4 in_ecx;
  undefined * this;
  uint * puVar1;
  char * pcVar2;
  
  ((uint *)(gen_frame + 0x0))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  in_ecx = *param_2;
  ((uint *)(gen_frame + 0x0))[0] = 0x28;
  ((uint *)(gen_frame + 0x0))[1] = 0x29;
  ((uint *)(gen_frame + 0x0))[2] = 0x2a;
  ((uint *)(gen_frame + 0x0))[3] = 0x2b;
  ((uint *)(gen_frame + 0x0))[4] = 0x2c;
  ((uint *)(gen_frame + 0x0))[5] = 0x2d;
  ((uint *)(gen_frame + 0x0))[6] = 0x2e;
  ((uint *)(gen_frame + 0x0))[7] = 0x2f;
  ((uint *)(gen_frame + 0x0))[8] = 0x30;
  ((uint *)(gen_frame + 0x0))[9] = 0x31;
  ((uint *)(gen_frame + 0x0))[10] = 0x32;
  ((uint *)(gen_frame + 0x0))[0xb] = 0x33;
  this = ((undefined *)GEN_TOP(F_00559ba0(in_ecx GEN_EDX_ARG)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (param_1 < 0xc)) {
    puVar1 = ((uint *)GEN_TOP(F_00ab36c0(((uint *)(gen_frame + 0x0))[(int)(param_1)])));
    if (puVar1 == ((uint *)GEN_TOP(0x0))) {
      pcVar2 = "";
    }
    else {
      pcVar2 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
    }
    this = ((undefined *)GEN_TOP(F_00584110(this GEN_EDX_ARG,pcVar2)));
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c4cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c36d0)),0,6);
  return bVar1;
}

/* ref: FUN_007c4cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d179c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c4d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c36ec)),0,6);
  return bVar1;
}

/* ref: FUN_007c4d50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x28c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d189c));
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x298))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x194))),0,0x70);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x21c))),0,0x70);
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c4e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3724)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4e40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c4e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar2 = gen_bits2f(param_1[0x47]);
  fVar5 = (float10)(int)param_3;
  if ((int)param_3 < 0) {
    fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  uVar3 = F_0055a030(param_1[0x86] GEN_EDX_FWD);
  F_00568250(param_1[0x86] GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(float)fVar5 /
                      (float10)((float)GEN_TOF(((float10)uVar3 * (float10)(1.0 / (double)fVar2))))))));
  iVar1 = *param_1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x50))))(param_1,0,param_3);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x4c))))(param_1,uVar4 & 0xffff);
  return uVar4;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf59 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c4ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b1020((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c4ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c4ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,0x24)));
  uVar1 = F_0059d640(this_00 GEN_EDX_ARG,0x65);
  return uVar1;
}

/* ref: FUN_007c4f00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c4f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if (((-1 < param_1) && (param_1 < *((int *)GEN_TOP(((int)this + 0x294))))) &&
     (iVar1 = *((int *)GEN_TOP(((int)this + 0x28c))), param_1 != iVar1)) {
    if ((-1 < iVar1) && (iVar1 < 0x1c)) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + iVar1 * 4 + 0x21c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_FWD);
    }
    *((int *)GEN_TOP(((int)this + 0x28c))) = param_1;
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x21c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,0,0);
  }
  return;
}

/* ref: FUN_007c4f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c4f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c4f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  undefined1 * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_01 = (gen_frame + 0x10);
  if ((-1 < param_1) && (param_1 < *((int *)GEN_TOP(((int)this + 0x294))))) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x28c)));
    if (param_1 == iVar4) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + iVar4 * 4 + 0x21c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_FWD,1);
    }
    else {
      if ((-1 < iVar4) && (iVar4 < 0x1c)) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + iVar4 * 4 + 0x21c)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
        if (*((int *)GEN_TOP(((int)this + 0x28c))) + 1 < *((int *)GEN_TOP(((int)this + 0x294)))) {
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28c))) * 4 + 0x220)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
        }
      }
      *((int *)GEN_TOP(((int)this + 0x28c))) = param_1;
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x194)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))(piVar1 GEN_EDX_ARG);
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      *((uint *)GEN_TOP(((int)this + 0xa4))) = uVar2;
      this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
      F_0059b300(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28c))) * 4 + 0x21c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,1,1);
      if (*((int *)GEN_TOP(((int)this + 0x28c))) + 1 < *((int *)GEN_TOP(((int)this + 0x294)))) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28c))) * 4 + 0x220)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      }
    }
    *((int *)GEN_TOP(((int)this + 0x290))) = param_1;
    iVar4 = 0;
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x194)));
    do {
      F_0059dde0(*puVar3 GEN_EDX_ARG,iVar4 == *((int *)GEN_TOP(((int)this + 0x290))));
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x1c);
    *((undefined4 *)GEN_TOP(((int)this + 0x298))) = *((undefined4 *)GEN_TOP(((int)this + 0x28c)));
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((int)this + 0x28c)));
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff3;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar4 = 1;
    do {
      this_01 = this_01 - 8;
      in_EAX = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return in_EAX;
}

/* ref: FUN_007c50d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c50d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c50d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x28c)));
  if ((-1 < iVar1) && (iVar1 < 0x1c)) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + iVar1 * 4 + 0x21c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_FWD);
    F_0059dde0(*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28c))) * 4 + 0x194))) GEN_EDX_ARG,0);
    if (*((int *)GEN_TOP(((int)this + 0x28c))) + 1 < *((int *)GEN_TOP(((int)this + 0x294)))) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28c))) * 4 + 0x220)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x290))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28c))) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_007c5140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff7;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c5190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int in_ecx;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d199c));
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  in_ecx = (int)this + 0x1c8;
  iVar1 = 8;
  do {
    F_0058d480(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x30;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x378))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x37c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x380))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x388))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x390))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x394))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3b8))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)this + 900))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c5260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c37a8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf45 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c5270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  *(uint *)(this + 0xa4) = uVar1;
  return uVar1;
}

/* ref: FUN_007c5290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7c5290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  *((undefined4 *)GEN_TOP(((int)this + 0x398))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a0))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a4))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a8))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x3ac))) = param_6;
  *((uint *)GEN_TOP(((int)this + 0x3b0))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x3b4))) = param_8;
  return param_7;
}

/* ref: FUN_007c52e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c52e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c52e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x388))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x388))) + 0x194))) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xfffffff1;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    F_005a9110(this GEN_EDX_FWD,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007c5360 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c5360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x388))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x388))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x388))) GEN_EDX_FWD,0,0);
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x388))) + 0x194))) = 0;
  }
  return;
}

/* ref: FUN_007c5390 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c5390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c5390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x388))) != ((undefined *)GEN_TOP(0x0))) {
    F_007c4030(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x388))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_007c5410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  undefined * this_00;
  
  iVar1 = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x378)))) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x1c8)));
    do {
      if (8 < iVar1) {
        return in_EAX;
      }
      F_0056c5f0(this_00 GEN_EDX_FWD);
      F_0056c5f0(this_00 GEN_EDX_ARG);
      F_00588f80(this_00 GEN_EDX_ARG,0x3d,1,this,0);
      in_EAX = F_00588f80(this_00 GEN_EDX_ARG,0x3d,0,this,0);
      iVar1 = iVar1 + 1;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x30)));
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 0x378))));
  }
  return in_EAX;
}

/* ref: FUN_007c5470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c5470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x398)));
  uVar2 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD,0,0);
  }
  return uVar2;
}

/* ref: FUN_007c5490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x37c))) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00861b90(this GEN_EDX_FWD,2,*((undefined4 *)GEN_TOP(((int)this + 0x380))));
    return uVar1;
  default: ;
    return uVar1;
  case 2: ;
    uVar1 = F_00861b90(this GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x380))));
    return uVar1;
  case 3: ;
    *((int *)GEN_TOP(((int)this + 0x380))) = *((int *)GEN_TOP(((int)this + 0x380))) + 1;
    uVar1 = F_00861b90(this GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x380))));
    return uVar1;
  case 4: ;
    *((int *)GEN_TOP(((int)this + 0x380))) = *((int *)GEN_TOP(((int)this + 0x380))) + 1;
    break;
  case 6: ;
    break;
  }
  uVar1 = F_00861b90(this GEN_EDX_ARG,6,*((undefined4 *)GEN_TOP(((int)this + 0x380))));
  return uVar1;
}

/* ref: FUN_007c5520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP(((int)this + 0x378))))) {
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x378))) * 4 + 0x398)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf8))))(piVar1 GEN_EDX_FWD);
    }
  }
  *((int *)GEN_TOP(((int)this + 0x378))) = *((int *)GEN_TOP(((int)this + 0x378))) + 1;
  if ((*((int *)GEN_TOP(((int)this + 0x378))) == 5) && (*((int *)GEN_TOP(((int)this + 0x390))) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x390))) + 400)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
  }
  if (*((int *)GEN_TOP(((int)this + 0x378))) < 8) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x378))) * 4 + 0x180)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))(piVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xa4))) = uVar2;
    return uVar2;
  }
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,10)));
  uVar2 = F_0059d670(this_00 GEN_EDX_ARG,0x65);
  return uVar2;
}

/* ref: FUN_007c55c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c55c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  int iVar5;
  uint uVar6;
  
  if ((*((char *)GEN_TOP((param_1 + 900))) == '\x02') || (*((char *)GEN_TOP((param_1 + 900))) == '\x03')) {
    iVar5 = 0;
    if (param_2 == '\0') {
      piVar4 = ((int *)GEN_TOP((param_1 + 0x180)));
      do {
        piVar1 = ((int *)GEN_TOP(*piVar4));
        if (iVar5 == *((int *)GEN_TOP((param_1 + 0x378)))) {
          F_0055a3c0(piVar1[0x1a] GEN_EDX_FWD,0);
        }
        else {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0);
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < 8);
      goto LAB_007c5739;
    }
    do {
      if (iVar5 != 6) {
        if (iVar5 == 5) {
          if (*((char *)GEN_TOP((param_1 + 0x3b8))) == '\0') goto LAB_007c56ba;
          F_0055a3c0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x194))) + 0x68))) GEN_EDX_ARG,1);
          piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x194)));
        }
        else if (iVar5 == 7) {
          if (*((char *)GEN_TOP((param_1 + 0x3b9))) == '\0') goto LAB_007c56ba;
          F_0055a3c0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x19c))) + 0x68))) GEN_EDX_ARG,1);
          piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x19c)));
        }
        else {
          F_0055a3c0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x180 + iVar5 * 4))) + 0x68))) GEN_EDX_ARG,1);
          piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x180 + iVar5 * 4)));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,1);
      }
LAB_007c56ba: ;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  else {
    if (param_2 == '\0') {
      iVar5 = 0;
      piVar4 = ((int *)GEN_TOP((param_1 + 0x180)));
      do {
        piVar1 = ((int *)GEN_TOP(*piVar4));
        if (iVar5 == *((int *)GEN_TOP((param_1 + 0x378)))) {
          F_0055a3c0(piVar1[0x1a] GEN_EDX_ARG,0);
        }
        else {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0);
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < 8);
LAB_007c5739: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) + 0x28))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) GEN_EDX_ARG,0);
      *((undefined1 *)GEN_TOP((param_1 + 0x10d))) = 1;
      return uVar2;
    }
    piVar4 = ((int *)GEN_TOP((param_1 + 0x180)));
    iVar5 = 8;
    do {
      F_0055a3c0(*((undefined4 *)GEN_TOP((*piVar4 + 0x68))) GEN_EDX_ARG,1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar4)) + 0x28))))(((int *)GEN_TOP(*piVar4)) GEN_EDX_ARG,1);
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) + 0x28))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) GEN_EDX_ARG,1);
  *((undefined1 *)GEN_TOP((param_1 + 0x10d))) = 0;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
  if (uVar2 != 0) {
    return uVar2;
  }
  uVar6 = uVar2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) + 0x3c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x1a0))) GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(F_0055dcb0()));
  uVar2 = F_0059b300(this GEN_EDX_ARG,uVar3,uVar2,uVar6);
  return uVar2;
}

/* ref: FUN_007c5760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x38c)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x180)));
    uVar2 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar2 + 0xc0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x198))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x198))) GEN_EDX_ARG,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffed;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a9110(pvVar3 GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(undefined4 *)(gen_frame + 0x10));
    iVar4 = 1;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 8;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x10)));
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar3 = ((undefined *)GEN_TOP(F_0055dcb0()));
  F_0059b300(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007c5820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d1a9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c58a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c58a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c37bc)),0,6);
  return bVar1;
}

/* ref: FUN_007c58b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c58b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c58b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((-1 < param_1) && (-1 < param_2)) {
    return param_1 + param_2 * 10;
  }
  return 0;
}

/* ref: FUN_007c58e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c58e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c58e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d1b9c));
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c5970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c37d4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c5980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c5980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 uVar1;
  undefined * this_00;
  undefined * this_01;
  uint * puVar2;
  uint in_ecx;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  undefined * pAVar6;
  
  ((int *)(gen_frame + 0x8))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  if ((*(int *)(this + 0x18c) == 0) || (*(int *)(this + 0x180) == 0)) {
    return 0;
  }
  if ((*((byte *)GEN_TOP((param_2 + 0x170))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((uint *)GEN_TOP((param_2 + 0x174)));
  }
  if ((uVar5 & 0xffffff00) == 0) {
    iVar3 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0x398)));
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *((int *)GEN_TOP((iVar3 + 0x1a4)));
    }
    uVar1 = *(undefined4 *)(this + 0x19c);
    ((int *)(gen_frame + 0x8))[0] = 0x78;
    ((int *)(gen_frame + 0x8))[1] = 0x7c;
    ((int *)(gen_frame + 0x8))[2] = 0x80;
    ((int *)(gen_frame + 0x8))[3] = 0x84;
    ((int *)(gen_frame + 0x8))[4] = 0x88;
    (*(int *)(gen_frame + 0x4)) = ((int *)(gen_frame + 0x8))[(int)(iVar3)];
    *(undefined4 *)(this + 0x184) = uVar1;
    (*(int *)(gen_frame + 0x0)) = 0;
    pAVar6 = this + 0x194;
    do {
      F_0059dde0(*(undefined4 *)pAVar6 GEN_EDX_FWD,(*(int *)(gen_frame + 0x0)) == *(int *)(this + 0x19c));
      this_00 = ((undefined *)GEN_TOP(F_00561530(*(undefined * PTR32 *)pAVar6 GEN_EDX_ARG,2)));
      this_01 = ((undefined *)GEN_TOP(F_00561530(*(undefined * PTR32 *)pAVar6 GEN_EDX_ARG,3)));
      puVar2 = ((uint *)GEN_TOP(F_00ab36c0((*(int *)(gen_frame + 0x4)))));
      if (puVar2 == ((uint *)GEN_TOP(0x0))) {
        pcVar4 = "";
      }
      else {
        pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
      }
      F_00584110(this_00 GEN_EDX_ARG,pcVar4);
      puVar2 = ((uint *)GEN_TOP(F_00ab36c0((*(int *)(gen_frame + 0x4)) + 1)));
      if (puVar2 == ((uint *)GEN_TOP(0x0))) {
        pcVar4 = "";
      }
      else {
        pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
      }
      F_00584110(this_01 GEN_EDX_ARG,pcVar4);
      uVar5 = F_00577bc0(this_00 GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
      in_ecx = F_00561490(*(undefined * PTR32 *)pAVar6 GEN_EDX_ARG,5);
      F_0055a060(in_ecx GEN_EDX_ARG,uVar5 + 0x14 & 0xffff);
      F_00559eb0(in_ecx GEN_EDX_ARG,(uint)(ushort)(*(short *)(this + 0x188) - (short)(uVar5 + 0x14)));
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 2;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pAVar6 = pAVar6 + 4;
    } while ((*(int *)(gen_frame + 0x0)) < 2);
    return 1;
  }
  return 1;
}

/* ref: FUN_007c5b50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  F_0042b630((int)this + 0x188 GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  return (uint)this;
}

/* ref: FUN_007c5ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c5be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c37ec)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c5bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c5c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD,0,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x65;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  this_00 = &(*(uint *)(gen_frame + 0x20));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c5ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c5ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x65;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x180))) + 0xc0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007c5d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x48;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1d9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c5df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3828)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c5e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005b0610(this GEN_EDX_FWD,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: FUN_007c5e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x66;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x180))) + 0xc0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar3 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007c5eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x66;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c5f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c5f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 400))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1e9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c5fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c386c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c5fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,0);
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c5ff0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c5ff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) == 0) ||
     ((uVar2 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar2 != 3 && (uVar2 != 2)))) goto LAB_007c60a8;
  if ((char)param_1[100] == '\0') {
    if (*((char *)GEN_TOP((param_1[0x62] + 0x84))) != '\0') {
      uVar2 = F_0055dcb0();
      if (*((char *)GEN_TOP((uVar2 + 0x21d))) == '\0') {
        *(undefined1 *)(param_1 + 100) = 1;
        F_0056b630(param_1 GEN_EDX_ARG,0x11a,7,0,9,0,0);
      }
    }
  }
  else {
    if (*((char *)GEN_TOP((param_1[0x62] + 0x84))) != '\0') {
      uVar2 = F_0055dcb0();
      if (*((char *)GEN_TOP((uVar2 + 0x21d))) == '\0') goto LAB_007c6091;
    }
    *(undefined1 *)(param_1 + 100) = 0;
    F_0056b780(param_1 GEN_EDX_ARG,0);
  }
LAB_007c6091: ;
  bVar1 = F_0055dce0(param_1 GEN_EDX_ARG);
  if (bVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x8c))))(param_1 GEN_EDX_ARG);
  }
LAB_007c60a8: ;
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_007c60c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c60c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c60d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c60d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *((undefined1 *)GEN_TOP((uVar1 + 0x1fa))) = 1;
  uVar1 = F_005a89b0(this GEN_EDX_ARG,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c6100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *((undefined1 *)GEN_TOP((uVar1 + 0x1fa))) = 0;
  uVar1 = F_005b0610(this GEN_EDX_ARG,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c6130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c6130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  uint uVar1;
  
  if ((short)param_1 == 0x17) {
    uVar1 = F_0042a990(*(int *)(this + 0x188) + 0x9c GEN_EDX_FWD);
    this_00 = *(undefined * PTR32 *)(this + 0x18c);
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x180) + 100)))) {
        F_007c5ce0(this_00 GEN_EDX_ARG,uVar1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
        return;
      }
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x184))) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
    }
  }
  return;
}

/* ref: FUN_007c61a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c61a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c61a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1f9c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3888)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,0);
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c6280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c6280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (((((byte)this[0xf9] & 1) != 0) && ((short)param_1 == 0x17)) &&
     (*(undefined * PTR32 *)(this + 400) != ((undefined *)GEN_TOP(0x0)))) {
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x180) + 100)))) {
      F_007c5e40(*(undefined * PTR32 *)(this + 400) GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
      return;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x184) + 100)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
    }
  }
  return;
}

/* ref: FUN_007c62f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c62f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c62f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c6320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD,0);
    uVar2 = F_0055dcb0();
    uVar1 = F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      *(uint *)(this + 8) = uVar1;
      *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x180))) = this;
      *((undefined1 *)GEN_TOP((*(int *)(this + 8) + 0x188))) = 1;
    }
  }
  return;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c6360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  this[0x28] = (undefined1)0x0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_007c6380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x180)));
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else if (*((int *)GEN_TOP((iVar1 + 0x398))) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x398))) + 0x1a4)));
  }
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else if (*((int *)GEN_TOP((iVar1 + 0x39c))) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x39c))) + 0x19c)));
  }
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x398))) != 0) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x398))) + 0x1a8))) + (iVar2 + iVar3 * 2) * 2;
    }
    return (iVar2 + iVar3 * 2) * 2 - 1;
  }
  return (iVar2 + iVar3 * 2) * 2;
}

/* ref: FUN_007c6400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x180)));
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else if (*((int *)GEN_TOP((iVar1 + 0x398))) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x398))) + 0x1a4)));
  }
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x39c))) != 0) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x39c))) + 0x19c))) + 1 + iVar2 * 2;
    }
    return iVar2 * 2;
  }
  return iVar2 * 2 + 1;
}

/* ref: FUN_007c6480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c64e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c64e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  
  this[0xf9] = (undefined1)
               ((byte)this[0xf9] ^ ((param_2 != 0) << 6 ^ (byte)this[0xf9]) & 0x40);
  bVar1 = F_0058ca00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c6540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  
  F_0055e1c0(this GEN_EDX_FWD,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  uVar1 = F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
  uVar2 = CONCAT22(extraout_var,uVar1);
  if (this[0x188] != (undefined1)0x0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,1,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf45 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c65a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c65a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x180);
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x28))) != '\0')) {
    uVar1 = F_0059b340(this GEN_EDX_FWD,*(undefined4 *)(this + 0xa4),1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c65d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c65d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  return uVar1;
}

/* ref: FUN_007c6640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d2234));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c66c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c66c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  uVar3 = 0;
  uVar2 = 4;
  pAVar4 = this;
  this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
  F_00586850(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c66e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c66e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x180);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))))
    ;
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x40))))(*(undefined4 *)(this + 0x180),uVar2);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  }
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007c6760 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c6760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[0]));
  F_0055a170(this_00 GEN_EDX_ARG,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x10 & 0xff);
  F_0055a200(this_00 GEN_EDX_ARG,(char)((uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x18));
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c67c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7c67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))
                    (*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c67d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c67d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorL::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c67e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c67e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c38a4)),0,6);
  return bVar1;
}

/* ref: FUN_007c67f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c67f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c67f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d233c));
  *((undefined1 *)GEN_TOP(((int)this + 0x1a8))) = 1;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c38c0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  if ((uVar1 & 0x80) != 0) {
    uVar1 = (uint)(byte)((char)uVar1 + 0x80);
  }
  return uVar1 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2;
  if (*((char *)GEN_TOP((in_ecx + 0x1a8))) == '\0') {
    uVar1 = param_2 + 0x80;
  }
  return uVar1;
}

/* ref: FUN_007c68b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c68b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c68b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d2444));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c38e4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  if ((uVar1 & 0x80) != 0) {
    uVar1 = (uint)(byte)((char)uVar1 + 0x80);
  }
  return uVar1 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2;
  if (*((int *)GEN_TOP((in_ecx + 0x1ac))) != 0) {
    if (*((int *)GEN_TOP((in_ecx + 0x1ac))) != 1) {
      return param_2;
    }
    uVar1 = param_2 + 0x80;
  }
  return uVar1 | 0x100;
}

/* ref: FUN_007c6980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d254c));
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  uVar3 = 0;
  uVar2 = 4;
  pAVar4 = this;
  this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
  F_00586850(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6a30(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7c6a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))
                      (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x40))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c6ad0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c6ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[0]));
  F_0055a170(this_00 GEN_EDX_ARG,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x10 & 0xff);
  F_0055a200(this_00 GEN_EDX_ARG,(char)((uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x18));
  return;
}

/* ref: FUN_007c6b30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c6b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7c6b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[0]));
  F_0055a170(this_00 GEN_EDX_ARG,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 8 & 0xff,(uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x10 & 0xff);
  F_0055a200(this_00 GEN_EDX_ARG,(char)((uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x18));
  return;
}

/* ref: FUN_007c6bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c6980(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d2664));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3900)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf64 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))
                    (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                     *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf66 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c6c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((int)param_1 < 0) {
    uVar2 = 0;
  }
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = 0;
  }
  return ((uint)(*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') << 8 | uVar1 & 0xff) << 0x10 |
         uVar2 & 0xff;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  if (param_1 == 1) {
    uVar1 = uVar1 >> 0x10;
  }
  return uVar1;
}

/* ref: FUN_007c6c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c6980(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10d277c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3920)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf63 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf64 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))
                    (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))),
                     *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0xc0))));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf66 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c6d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = 0;
  }
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  if (*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') {
    uVar1 = (uVar1 & 0xff | 0x100) << 0x10 | uVar2 & 0xff;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c6d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0') && (param_1 == 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
    return uVar1 >> 0x10;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c6d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2894));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c393c)),0,6);
  return bVar1;
}

/* ref: FUN_007c6e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2994));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) goto LAB_007c6eec;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x40))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  }
LAB_007c6eec: ;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c6f10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2a94));
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3958)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + *((int *)GEN_TOP((in_ecx + 0x184))) * 4)));
}

/* ref: FUN_007c6f80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2b94));
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c6fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3974)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + *((int *)GEN_TOP((in_ecx + 0x184))) * 4)));
}

/* ref: FUN_007c6ff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c6ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c6ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2c94));
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3990)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + *((int *)GEN_TOP((in_ecx + 0x184))) * 4)));
}

/* ref: FUN_007c7070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2d94));
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c70d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c70d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c39ac)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c70e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c70e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + *((int *)GEN_TOP((in_ecx + 0x184))) * 4)));
}

/* ref: FUN_007c70f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c70f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c70f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2e94));
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton6::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c39c8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton6::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + *((int *)GEN_TOP((in_ecx + 0x184))) * 4)));
}

/* ref: FUN_007c7170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d2f94));
  *((undefined1 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 400))),0,0x30);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton12::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c71f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c71f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c39e4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton12::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c7250 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c7250(GEN_P(undefined1 param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  return (uint)CONCAT11(param_2 + '\x01',param_1);
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton12::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7270(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 400 + (*((uint *)GEN_TOP((in_ecx + 0x184))) & 0xff) * 4)));
}

/* ref: FUN_007c7290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d3094));
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  iVar2 = 0x1b;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x194)));
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *((undefined1 *)GEN_TOP(((int)this + 0x274))) = 0;
  F_00c48350(((undefined4 *)GEN_TOP(((int)this + 0x194))),0,0xe0);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x40))))
              (*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0))));
  }
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf62 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c73a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c73a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_005951c0(param_3 GEN_EDX_FWD,*(undefined4 *)(this + param_1 * 8 + 0x194),0,*param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c73d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7c73d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))
                      (*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007c73f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c73f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c73f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x278))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d319c));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3a00)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf62 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c7420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_FWD,0x66);
    return uVar1;
  }
  F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x65);
  uVar1 = F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)(this + param_1 * 8 + 0x194),0,*param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf63 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
    return uVar1 & 0x7f;
  }
  return 0;
}

/* ref: FUN_007c7490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d32a4));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFaceType::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c74b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c74b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3a28)),0,6);
  return bVar1;
}

/* ref: FUN_007c74c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c74c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c74c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d33ac));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconHair::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c74e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c74e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3a4c)),0,6);
  return bVar1;
}

/* ref: FUN_007c74f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d34b4));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTail::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3a6c)),0,6);
  return bVar1;
}

/* ref: FUN_007c7520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d35bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3a8c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c75a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c75a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c75a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007c7290(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10d36c4));
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c75c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3ab0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c75d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c75d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD);
  }
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007c7620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d37cc));
  return (uint)this;
}

/* ref: Client::UI2::AddonSimpleClassSelect::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c7690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD,1,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x14))) GEN_EDX_ARG,((char *)REFP(0x10c3ad4)));
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x14))) GEN_EDX_ARG,((char *)REFP(0x10c3ae8)));
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055dcb0();
  uVar1 = F_0057f860(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x14))) GEN_EDX_ARG,((char *)REFP(0x10c3af4)));
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = *(uint *)(this + 0x180);
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x1a8))) = this;
  this_00 = *(undefined * PTR32 *)(this + 0x184);
  *((undefined4 *)GEN_TOP(((int)this_00 + 400))) = 5;
  if ((*((int *)GEN_TOP(((int)this_00 + 0x184))) != 0) && (*((int *)GEN_TOP(((int)this_00 + 0x188))) != 0)) {
    uVar1 = F_0059d6a0(this_00 GEN_EDX_ARG,0x65,1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSimpleClassSelect::vf38 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c7730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  if ((((this[0x18c] == (undefined1)0x0) && (((byte)this[0xf9] & 1) != 0)) &&
      (piVar1 = *(int * PTR32 *)(this + 0x180), (*((byte *)GEN_TOP(((int)piVar1 + 0xf9))) & 1) != 0)) &&
     (((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) != 0 &&
      ((*((byte *)GEN_TOP((*(int *)(this + 0x188) + 0xf9))) & 1) != 0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,0);
    this[0x18c] = (undefined1)0x1;
  }
  return;
}

/* ref: FUN_007c7790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c7790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP((uVar2 + 8)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar2 = *((uint *)GEN_TOP((uVar2 + 4)));
  if ((((iVar1 != 0) && (uVar2 != 0)) && (*((int *)GEN_TOP(((int)this + 0x184))) != 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x188))) != 0)) {
    uVar3 = F_00ab36c0(param_1 * 2 + 0xb2);
    if (uVar3 != 0) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x180))) != param_1 + 0x1ed5d) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x180))) = param_1 + 0x1ed5d;
        *((undefined1 *)GEN_TOP((iVar1 + 0x1d))) = 1;
      }
      iVar4 = (*((uint *)GEN_TOP((uVar3 + 8))) & 0xffffff) + (int)(uVar3 + 8);
      if (iVar4 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1e0)))) {
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1e0))) = iVar4;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x184))) + 0x194))) = 1;
      **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) = **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20))) | 0x20;
      *((undefined1 *)GEN_TOP((iVar1 + 0x1d))) = 1;
    }
    F_007c3690(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG,param_2);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x188))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG,0);
  }
  return uVar2;
}

/* ref: FUN_007c7880 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c7880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x188))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x188))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x188))) GEN_EDX_FWD,0,0);
  }
  if (*((int *)GEN_TOP(((int)this + 0x184))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x184))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_ARG,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonLicenseViewer::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c78c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c78c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  return uVar1;
}

/* ref: Client::UI2::AddonLicenseViewer::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c78f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c78f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3b00)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLicenseViewer::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonLicenseViewer::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c7940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c7940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_007c7950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c7950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d38cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  F_0042b630((int)this + 0x184 GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) & 0xbf;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x100;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSupportMain::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c79d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c79d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3b14)),0,6);
  return bVar1;
}

/* ref: FUN_007c79e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c79e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c79e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7ae0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c7ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(int *)(gen_frame + 0x4)) = (uint)(param_3 != '\0') * 2 + 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  F_005a9110(param_1 GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this = this - 2;
    uVar1 = F_005a2670(this GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  iVar2 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 7;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 9;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c7d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c7d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined * pvVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x184))) GEN_EDX_FWD,param_2);
  }
  if (param_1 == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x180))) + 0x50)));
    uVar4 = 0;
    pvVar3 = this;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pvVar3,uVar4);
    F_007c7a60(this GEN_EDX_ARG,(int)this + 0x184);
  }
  return 0;
}

/* ref: FUN_007c7dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar3 = F_0055e2f0(this GEN_EDX_FWD,3);
  F_0055e3d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),uVar3);
  F_0056b630(this GEN_EDX_ARG,0xc8e,0,1,4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  uVar3 = F_0055e2f0(this GEN_EDX_ARG,6);
  F_0055e3d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),uVar3);
  uVar2 = F_0055a020(uVar3 GEN_EDX_ARG);
  bVar1 = F_0056b630(this GEN_EDX_ARG,0xc8d,0,2,4,(uint)(ushort)(uVar2 + (short)(*(undefined4 *)(gen_frame + 0x0))),(*(undefined4 *)(gen_frame + 0x4)));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007c7e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    pvVar1 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,8)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
    }
    pvVar1 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,0xe)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
    }
    uVar3 = 0x14;
  }
  else if (param_1 == 1) {
    uVar3 = 0x21;
  }
  else {
    if (param_1 - 3U != 0) {
      return param_1 - 3U;
    }
    uVar3 = 0x32;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,uVar3)));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSupportSubList::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubList::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c7f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3b20)),0,6);
  return bVar1;
}

/* ref: FUN_007c7f10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c7f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c7f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar1 = 1;
  do {
    this_00 = this_00 - 8;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return 1;
}

/* ref: Client::UI2::AddonSupportSubList::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c7f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x17) {
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar1;
    }
  }
  else if (uVar1 != 0x21) {
    return uVar1;
  }
  F_007c7f10(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_4 + 8))));
  uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubList::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c7ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c7ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c8020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c8050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3b30)),0,6);
  return bVar1;
}

/* ref: FUN_007c8060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c8060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_0055aaf0(*((undefined4 *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_0055aaf0(*((undefined4 *)GEN_TOP(((int)this + 0x1bc))) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x1c4))) + 0x9c GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x1c)) = uVar1;
  uVar1 = F_0042a990((int)this + 0x1dc GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 4;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007c8140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c8140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int iVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar3 = *((int *)GEN_TOP((param_3 + 8)));
  if (-1 < iVar3) {
    if (param_1 == 2) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x1a8)));
    }
    else {
      if (param_1 != 3) goto LAB_007c81f0;
      iVar1 = *((int *)GEN_TOP(((int)this + 0x1ac)));
    }
    if (iVar3 != iVar1) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
      (*(int *)(gen_frame + 0x4)) = param_1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = iVar3;
      F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
      F_005a1840(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c4))) GEN_EDX_ARG,1);
      F_005a1840(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c8))) GEN_EDX_ARG,1);
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar3 = 4;
      do {
        this_00 = this_00 - 2;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar3 = iVar3 - 1;
      } while (-1 < iVar3);
    }
  }
LAB_007c81f0: ;
  uVar2 = F_00557670(param_2 GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7c8210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 0x17) {
    uVar1 = param_2;
    if (param_2 < 2) {
      F_007c8060(this GEN_EDX_FWD,param_2,param_3,param_4);
      uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
      return uVar1;
    }
  }
  else if ((short)param_1 == 0x21) {
    uVar1 = F_007c8140(this GEN_EDX_ARG,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubView::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubView::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c82a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c82a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c3b44)),0,6);
  return bVar1;
}

/* ref: FUN_007c82f0 */
GEN_OWN GEN_FRAME uint F_007c82f0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int * in_edx, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c82f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_edx = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_007c8330 */
GEN_OWN GEN_NOFRAME unsigned int F_007c8330(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c8330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::UI2::RaptureAtkHistory::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c83b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c83b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x1c) < *(int *)(this + 0x14) - 1) {
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007c83d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c83d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c83d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  
  if (((param_2 != '\0') && (iVar1 = *((int *)GEN_TOP((param_1 + 0xb8))), iVar1 != 0)) &&
     (*((char *)GEN_TOP((iVar1 + 0xbc))) != '\0')) {
    F_005aa300(iVar1 + 0x3c GEN_EDX_FWD,1,0,9);
  }
  return;
}

/* ref: FUN_007c8420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c8420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00762b10(((undefined *)GEN_TOP(((int)this + 0x23538))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_007c8430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int local_8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,0);
  if (uVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x44))) != *piVar2) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x44))) = *piVar2;
      *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x23208))) != 0) {
    F_00776010(*((int *)GEN_TOP(((int)this + 0x23208))) GEN_EDX_ARG,8,4,100);
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x18))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,6);
  if (uVar1 != 0) {
    iVar4 = 0x10e;
    local_8 = 4;
    do {
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar3 = F_00461bb0(this_00 GEN_EDX_ARG,0x7eb,iVar4 - 0x10d);
      F_00431250(uVar1 GEN_EDX_ARG,iVar4,uVar3,uVar5,uVar6,uVar7);
      iVar4 = iVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x7ec,0,0);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x448)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x448))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
    }
    iVar4 = 0x113;
    local_8 = 6;
    do {
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar3 = F_00461bb0(this_00 GEN_EDX_ARG,0x7ed,iVar4 - 0x112);
      F_00431250(uVar1 GEN_EDX_ARG,iVar4,uVar3,uVar5,uVar6,uVar7);
      iVar4 = iVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0x1e);
  if (uVar1 != 0) {
    iVar4 = 0x2e;
    local_8 = 7;
    do {
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar3 = F_00461bb0(this_00 GEN_EDX_ARG,0x7ee,iVar4 - 0x2d);
      F_00431250(uVar1 GEN_EDX_ARG,iVar4,uVar3,uVar5,uVar6,uVar7);
      iVar4 = iVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,0x7ef,0,0);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0xd4)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0xd4))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0x15);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x4a1,0,0);
    if (uVar1 != **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20)))) {
      **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) = uVar1;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
  }
  return uVar1;
}

/* ref: FUN_007c85f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c85f0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7c85f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined1 gen_out[0x8];
  float fVar1;
  undefined * this;
  uint uVar2;
  undefined4 extraout_ECX = 0;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_5c = 0;
  undefined4 uStack_58 = 0;
  undefined4 uStack_54 = 0;
  undefined4 uStack_50 = 0;
  undefined4 uStack_4c = 0;
  undefined4 uStack_48 = 0;
  undefined4 uStack_44 = 0;
  undefined4 uStack_40 = 0;
  undefined4 uStack_3c = 0;
  undefined4 uStack_38 = 0;
  undefined4 uStack_34 = 0;
  undefined4 uStack_30 = 0;
  undefined4 uStack_2c = 0;
  undefined4 uStack_28 = 0;
  undefined4 uStack_24 = 0;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  float local_14;
  
  if (((int)param_4 < 1) || (((byte)*((undefined4 *)GEN_TOP(param_3)) & 0xf) != 6)) {
LAB_007c87a2: ;
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = 2;
    return (uint)param_2;
  }
  local_14 = -NAN;
  iStack_18 = 0xb5;
  uStack_1c = *((undefined4 *)GEN_TOP((param_3 + 4)));
  uStack_20 = 0x7c862b;
  this = ((undefined *)GEN_TOP(F_00414550(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_3 + 4))),0xb5, 0xffffffff)));
  if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_007c87a2;
  if (param_4 == 2) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        if (((byte)*((undefined4 *)GEN_TOP((param_3 + 8))) & 0xf) == 5) {
          local_14 = gen_bits2f(extraout_ECX);
          local_14 = *((float *)GEN_TOP((param_3 + 0xc)));
          iStack_18 = 0x7c8770;
          F_00414ad0(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_3 + 0xc)))));
          *(undefined1 *)(param_2 + 1) = 1;
          *param_2 = 2;
          return (uint)param_2;
        }
      }
      else {
        if (iVar4 != 4) goto LAB_007c87a2;
        if (((byte)*((undefined4 *)GEN_TOP((param_3 + 8))) & 0xf) == 6) {
          F_0042cc20((gen_out + 0x0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 0xc))),REFG(undefined4, 0x108cc50));
          F_00414b60(this GEN_EDX_ARG,(*(undefined4 *)(gen_out + 0x0)),(*(undefined4 *)(gen_out + 0x4)),uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c, uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30, uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,iStack_18, (undefined4)gen_fl2bits(local_14));
          *(undefined1 *)(param_2 + 1) = 1;
          *param_2 = 2;
          return (uint)param_2;
        }
      }
      goto LAB_007c8682;
    }
    uVar2 = *((uint *)GEN_TOP((param_3 + 8))) & 0xf;
    if ((uVar2 != 4) && (uVar2 != 3)) goto LAB_007c8682;
    iVar4 = *((int *)GEN_TOP((param_3 + 0xc)));
    local_14 = 1.4013e-45;
  }
  else {
    if (param_4 == 3) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 2) {
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 3) {
          if (((byte)*((undefined4 *)GEN_TOP((param_3 + 0x10))) & 0xf) == 5) {
            local_14 = gen_bits2f(extraout_ECX);
            fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_3 + 0x14))) + (float10)*((float *)GEN_TOP(((int)this + 0x14))))));
            local_14 = fVar1;
            iStack_18 = 0x7c86d2;
            F_00414ad0(this GEN_EDX_ARG,fVar1);
          }
          *(undefined1 *)(param_2 + 1) = 1;
          *param_2 = 2;
          return (uint)param_2;
        }
        goto LAB_007c87a2;
      }
      uVar2 = *((uint *)GEN_TOP((param_3 + 0x10))) & 0xf;
      if ((uVar2 != 4) && (uVar2 != 3)) goto LAB_007c8682;
      local_14 = 1.4013e-45;
    }
    else {
      if ((param_4 != 4) || (*((int *)GEN_TOP(((int)this + 0x10))) != 2)) goto LAB_007c87a2;
      uVar2 = *((uint *)GEN_TOP((param_3 + 0x10))) & 0xf;
      if ((uVar2 != 4) && (uVar2 != 3)) goto LAB_007c8682;
      if ((*((byte *)GEN_TOP((param_3 + 0x18))) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((param_3 + 0x1c)));
      }
      local_14 = gen_bits2f(uVar3);
    }
    iVar4 = *((int *)GEN_TOP((param_3 + 0x14))) + *((int *)GEN_TOP(((int)this + 0x14)));
  }
  iStack_18 = iVar4;
  uStack_1c = 0x7c8682;
  F_00414a40(this GEN_EDX_ARG,iVar4,(undefined4)gen_fl2bits(local_14));
LAB_007c8682: ;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = 2;
  return (uint)param_2;
}

/* ref: FUN_007c87c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c87c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c87c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007c87d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c87d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c87d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (0 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 4);
    }
    if ((char)uVar1 < '\0') {
      F_007601d0(this GEN_EDX_FWD,uVar1 & 0xf);
      *param_1 = 0;
      return (uint)param_1;
    }
    F_00760260(this GEN_EDX_ARG,uVar1 & 0xf);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007c8820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c8820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x4b);
  iVar2 = *((int *)GEN_TOP((uVar1 + 0x14)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x48))) != iVar2)) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x48))) = iVar2;
    *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG);
  if (iVar2 == 1) {
    *((byte *)GEN_TOP((uVar1 + 0x2c24c))) = *((byte *)GEN_TOP((uVar1 + 0x2c24c))) | 2;
  }
  else {
    *((byte *)GEN_TOP((uVar1 + 0x2c24c))) = *((byte *)GEN_TOP((uVar1 + 0x2c24c))) & 0xfd;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x3c))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG)));
  uVar1 = F_0043cee0(this_00 GEN_EDX_ARG,iVar2);
  return uVar1;
}

/* ref: FUN_007c8890 */
GEN_OWN GEN_NOFRAME uint F_007c8890(void)
{
  GEN_ENTER(0x7c8890u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x4c);
  uVar1 = F_00424720(REFG(int, 0x137104c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
  return uVar1;
}

/* ref: FUN_007c88b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c88b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c88b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  F_0057fd70(((undefined *)GEN_TOP(((int)this + 0x23330))) GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG);
  F_0043d840(uVar2 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x230e0))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x230e0))) GEN_EDX_ARG,0,0);
  *((undefined1 *)GEN_TOP(((int)this + 0x230e8))) = 0;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x3c))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG)));
  bVar1 = F_00466eb0(this_00 GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x231a8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_0076b230(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x231a8))) GEN_EDX_ARG);
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007c8910 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c8910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x234e0))) & 0x40) != 0) {
    return ~(byte)(*((uint *)GEN_TOP((in_ecx + 0x23528))) >> 4) & 1;
  }
  return 0;
}

/* ref: FUN_007c8930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c8930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00762910(((undefined *)GEN_TOP(((int)this + 0x23330))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_007c8940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8940(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7c8940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined * PTR32 * ppuVar1;
  uint uVar2;
  
  ppuVar1 = &REFG(undefined * PTR32, 0x10bff60);
  while (ppuVar1[1] != param_2) {
    ppuVar1 = ppuVar1 + 3;
    if (0x10c00c7 < (int)ppuVar1) {
      return (uint)ppuVar1;
    }
  }
  uVar2 = 0;
  if (*ppuVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_0057f860(((undefined *)GEN_TOP((param_1 + 0x23330))) GEN_EDX_FWD,*ppuVar1);
    if (uVar2 != 0) {
      if (param_3 == '\0') {
        *((ushort *)GEN_TOP((uVar2 + 0x126))) = *((ushort *)GEN_TOP((uVar2 + 0x126))) | 1;
      }
      else {
        *((ushort *)GEN_TOP((uVar2 + 0x126))) = *((ushort *)GEN_TOP((uVar2 + 0x126))) & 0xfffe;
      }
      if (param_4 == '\0') {
        *((ushort *)GEN_TOP((uVar2 + 0x126))) = *((ushort *)GEN_TOP((uVar2 + 0x126))) | 0x8000;
        return uVar2;
      }
      *((ushort *)GEN_TOP((uVar2 + 0x126))) = *((ushort *)GEN_TOP((uVar2 + 0x126))) & 0x7fff;
    }
  }
  return uVar2;
}

/* ref: FUN_007c89c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c89c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c89c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_007c8940(this GEN_EDX_FWD,param_1,param_2[5] != 0,*param_2 != 0);
  return uVar1;
}

/* ref: FUN_007c89f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c89f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c89f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * puVar1;
  undefined * PTR32 * ppuVar2;
  uint uVar3;
  
  ppuVar2 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar2[1] == param_1) {
      puVar1 = *ppuVar2;
      ppuVar2 = ((undefined * PTR32 *)GEN_TOP(0x0));
      if (puVar1 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_0057f860(((undefined *)GEN_TOP(((int)this + 0x23330))) GEN_EDX_FWD,puVar1);
        ppuVar2 = ((undefined * PTR32 *)GEN_TOP(0x0));
        if (uVar3 != 0) {
          return (byte)~*((byte *)GEN_TOP((uVar3 + 0x126))) & 1;
        }
      }
      break;
    }
    ppuVar2 = ppuVar2 + 3;
  } while ((int)ppuVar2 < 0x10c00c8);
  return CONCAT31((int3)((uint)((int)(uintptr_t)ppuVar2) >> 8),1);
}

/* ref: FUN_007c8a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007c8a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c8a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f4c));
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x14))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,this);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  uVar2 = F_00cb4870(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007c8a90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c8a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c8a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x18))) <= *((uint *)GEN_TOP(((int)this + 0x1c)))) {
    return 0;
  }
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x14))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
      uVar2 = 0;
      if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
        do {
          F_00cb45d0(this GEN_EDX_ARG,0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x18))));
      }
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,this);
    }
    F_00cb4540(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),param_1);
    *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_007c8b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007c8b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c8b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined4 * in_ecx;
  
  if (*((char *)GEN_TOP(((int)this + 0x230e9))) == '\0') {
    uVar1 = 0xcd;
  }
  else {
    uVar1 = (*((int *)GEN_TOP(((int)this + 0x230d4))) - *((int *)GEN_TOP(((int)this + 0x230d0)))) / 0x54;
  }
  if (((param_1 < uVar1) &&
      (param_1 < (uint)(*((int *)GEN_TOP(((int)this + 0x230c4))) - *((int *)GEN_TOP(((int)this + 0x230c0))) >> 5))) &&
     (in_ecx = ((undefined4 *)GEN_TOP((param_1 * 0x54 + *((int *)GEN_TOP(((int)this + 0x230d0)))))),
     *((char *)GEN_TOP(*in_ecx)) != '\0')) {
    uVar1 = F_0042a990(in_ecx GEN_EDX_FWD);
    uVar1 = F_0057f860(((undefined *)GEN_TOP(((int)this + 0x23330))) GEN_EDX_ARG,uVar1);
    if ((uVar1 != 0) && ((*((byte *)GEN_TOP((uVar1 + 0xfb))) & 8) != 0)) {
      return (uint)*((byte *)GEN_TOP((uVar1 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_007c8bb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c8bb0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7c8bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * PTR32 * this;
  uint * this_00;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68);
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  if (param_4 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x18)) = 7;
  }
  else if (param_4 == 2) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0xe;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
  }
  if (param_3 == '\0') {
    iVar6 = 0;
  }
  else {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[3])) + 0xc))))(((int *)GEN_TOP(param_1[3])) GEN_EDX_ARG)));
    iVar6 = *piVar1 + 2;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x20)) = iVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x28)) = param_2;
  if (param_5 < 0) {
    iVar6 = -1;
    iVar5 = 0;
    if (REFG(int, 0x13272f8) != 0) {
      iVar4 = 0;
      iVar2 = REFG(int, 0x13272f8);
      do {
        if ((iVar2 <= param_2) && (param_2 <= *((int *)GEN_TOP(((int)&REFG(undefined4, 0x13272fc) + iVar4))))) {
          iVar6 = 0xf4245;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
          goto LAB_007c8cf6;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar5 * 8;
        iVar2 = (&REFG(int, 0x13272f8))[(int)(iVar5 * 2)];
      } while (iVar2 != 0);
    }
    iVar4 = 0;
    iVar5 = REFG(int, 0x1327240);
    if (REFG(int, 0x1327240) == 0) {
LAB_007c8cda: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
    }
    else {
      do {
        if (iVar5 == param_2) {
          iVar6 = *((int *)GEN_TOP((iVar4 * 8 + 0x1327244))) + 1000000;
          goto LAB_007c8cda;
        }
        iVar5 = (&REFG(undefined4, 0x1327248))[(int)(iVar4 * 2)];
        iVar4 = iVar4 + 1;
      } while (iVar5 != 0);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
    }
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
    iVar6 = param_5 + 1000000;
  }
LAB_007c8cf6: ;
  (*(int *)(gen_frame + 0x58)) = iVar6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x4)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
  iVar6 = 0;
  puVar7 = &(*(undefined4 *)(gen_frame + 0x14));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar6,puVar7);
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar6 < 10);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x58))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x14)),0,0,0);
  this = &(*(int * PTR32 *)(gen_frame + 0x10));
  iVar6 = 1;
  do {
    this = this - 2;
    F_005a2670(this GEN_EDX_ARG);
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  this_00 = &(*(uint *)(gen_frame + 0x64));
  iVar6 = 9;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  return (byte)uVar3;
}

/* ref: FUN_007c8da0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c8da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c8da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x78, 8, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  
  (*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74);
  uVar2 = F_00ab21a0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14)));
  puVar3 = ((undefined4 *)(gen_frame + 0x10));
  iVar6 = 0xb;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  ((undefined4 *)(gen_frame + 0x10))[1] = 0xb;
  uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,(*((char *)GEN_TOP((uVar2 + 0x45))) != '\0') + 0x463,0,0);
  F_005a2710(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  if (*piVar5 == 0) {
    uVar4 = *((uint *)GEN_TOP((uVar2 + 0xc)));
    F_005a2710(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x3c)) = (uVar4 & 0xffffff) + (int)(uVar2 + 0xc);
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,0x3d5,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x4c)) = uVar2;
    iVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,0xc);
    puVar3 = ((undefined4 *)(gen_frame + 0x10));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar6,puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar6 < 0xc);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))
                      (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328070),0xc,((undefined4 *)(gen_frame + 0x10)),0,0,0);
    bVar1 = (byte)uVar2;
    puVar3 = ((undefined4 *)(gen_frame + 0x10));
    iVar6 = 1;
    do {
      puVar3 = puVar3 - 2;
      F_005a2670(puVar3 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    puVar7 = &(*(uint *)(gen_frame + 0x70));
    iVar6 = 0xb;
    do {
      puVar7 = puVar7 - 2;
      F_005a2670(puVar7 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  else {
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,0x3d5,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x3c)) = uVar2;
    iVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
    puVar3 = ((undefined4 *)(gen_frame + 0x10));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar6,puVar3);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar6 < 10);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))
                      (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328070),10,((undefined4 *)(gen_frame + 0x10)),0,0,0);
    bVar1 = (byte)uVar2;
    puVar3 = ((undefined4 *)(gen_frame + 0x10));
    iVar6 = 1;
    do {
      puVar3 = puVar3 - 2;
      F_005a2670(puVar3 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    puVar7 = &(*(uint *)(gen_frame + 0x70));
    iVar6 = 0xb;
    do {
      puVar7 = puVar7 - 2;
      F_005a2670(puVar7 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  return bVar1;
}

/* ref: FUN_007c8fe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c8fe0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7c8fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * PTR32 * this;
  uint * this_00;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  uVar2 = F_00ab1c90(param_2);
  if (((uVar2 != 0) && (iVar4 = *((int *)GEN_TOP((uVar2 + 0xc))), 0 < iVar4)) && (0 < *((int *)GEN_TOP((uVar2 + 0x10)))))
  {
    if (param_3 == '\0') {
      if ((param_1[0xa492] == iVar4) && (param_1[0xa493] == *((int *)GEN_TOP((uVar2 + 0x10))))) {
        return 0;
      }
      param_1[0xa492] = iVar4;
      param_1[0xa493] = *((int *)GEN_TOP((uVar2 + 0x10)));
    }
    (*(int *)(gen_frame + 0x14)) = *param_5;
    if (*param_5 == -1) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[3])) + 0xc))))(((int *)GEN_TOP(param_1[3])) GEN_EDX_ARG)));
      (*(int *)(gen_frame + 0x14)) = *piVar3;
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x1c)) = (uint)(param_4 != '\0') * 4 + 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
    iVar4 = 0;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x14)) + 2;
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      iVar4 = *((int *)GEN_TOP((uVar2 + 0x10))) + 20000;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x2c)) = iVar4;
    uVar1 = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((uVar2 + 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x5c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
    iVar4 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar4,puVar5);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < 10);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x58))))
                      ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
    this = &(*(int * PTR32 *)(gen_frame + 0x10));
    iVar4 = 1;
    do {
      this = this - 2;
      F_005a2670(this GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    this_00 = &(*(uint *)(gen_frame + 0x68));
    iVar4 = 9;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: FUN_007c91c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c91c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7c91c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x74, 12, 4);
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int * PTR32 * this_01;
  uint * this_02;
  undefined4 uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_00ab3fa0(param_2);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if ((uVar1 == 0) || (3 < param_1)) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  iVar5 = *piVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
  if (param_1 == 1) {
    uVar1 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 8)));
  }
  else if (param_1 == 2) {
    uVar1 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 0xc)));
  }
  else {
    if (param_1 != 3) goto LAB_007c926f;
    uVar1 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x18)) + 0x10)));
  }
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x18));
LAB_007c926f: ;
  iVar3 = REFG(undefined1, 0x14ab0d1) + 1;
  uVar6 = 0x33b;
  iVar7 = param_1;
  uVar1 = (*(uint *)(gen_frame + 0x14));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0x8c61])) + 0x18))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0x8c61])) GEN_EDX_ARG)));
  uVar1 = F_00461d60(this_00 GEN_EDX_ARG,uVar6,iVar7,uVar1,iVar3);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x14));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x28)) = iVar5 + 2;
  (*(uint *)(gen_frame + 0x14)) = *(undefined4 *)(&REFG(undefined, 0x132c54c) + param_1 * 8);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x3c)) GEN_EDX_ARG,3);
  uVar6 = *(undefined4 *)(&REFG(undefined, 0x132c550) + param_1 * 8);
  (*(undefined4 *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x14));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4c)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x50)) = uVar6;
  if (((iVar5 == 0) || (iVar5 == 4)) || (iVar5 == 5)) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x58)) = 0x1d4ec;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
  }
  F_0043f8b0(param_3 + 1000000);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x4)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
  iVar5 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x1c));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar5,puVar4);
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar5 < 10);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x58))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x1c)),0,0,0);
  this_01 = &(*(int * PTR32 *)(gen_frame + 0x10));
  iVar5 = 1;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  this_02 = &(*(uint *)(gen_frame + 0x6c));
  iVar5 = 9;
  do {
    this_02 = this_02 - 2;
    F_005a2670(this_02 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  return (byte)uVar1;
}

/* ref: FUN_007c93e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c93e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c93e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2322c))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2322c))) GEN_EDX_FWD));
}

/* ref: FUN_007c93f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c93f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c93f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2328c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_007c9410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c9410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c9410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x2db66))) != (char)param_1) {
    if (*((int *)GEN_TOP(((int)this + 0x231a8))) != 0) {
      F_0076b4f0(*((int *)GEN_TOP(((int)this + 0x231a8))) GEN_EDX_FWD,(char)param_1);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x23330))) + 0x4c)));
    if ((char)param_1 != '\0') {
      (*pcVar1)((int)this + 0x23330,0x16,0,1);
      *((char *)GEN_TOP(((int)this + 0x2db66))) = (char)param_1;
      return;
    }
    (*pcVar1)((int)this + 0x23330,0x16,1,1);
    *((undefined1 *)GEN_TOP(((int)this + 0x2db66))) = 0;
  }
  return;
}

/* ref: FUN_007c9470 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c9470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c9470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x231ac)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x14))) != 0) {
      return 1;
    }
    if (*((int *)GEN_TOP((iVar1 + 8))) != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar1 + 4))) GEN_EDX_FWD)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))));
      return uVar3 == 4;
    }
  }
  return 0;
}

/* ref: FUN_007c94c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c94c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c94c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23298)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_007c9500 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007c9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c9500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x231a4)));
  if ((*((int *)GEN_TOP(((int)this + 0x23530))) == 1) && (iVar1 != 0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar1 + 4))) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0xd0))));
    if (uVar3 == 4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007c9540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c9540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c9540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x231a4)));
  if ((*((int *)GEN_TOP(((int)this + 0x23530))) == 1) && (iVar1 != 0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar1 + 4))) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0xd0))));
    if ((uVar3 == 4) && (*((int *)GEN_TOP(((int)this + 0x23530))) == 1)) {
      piVar2 = ((int *)GEN_TOP(F_0057f860(((undefined *)GEN_TOP(((int)this + 0x23330))) GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328130))));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x104))))(piVar2 GEN_EDX_ARG);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_007c95f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c95f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x7c95f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x23290)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
    piVar1[3] = param_2;
    *(undefined2 *)(piVar1 + 4) = (undefined2)param_3;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x12))) = param_4;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x13))) = param_5;
    *(undefined1 *)(piVar1 + 5) = param_6;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x15))) = param_7;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x16))) = param_8;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x17))) = param_9;
    *(undefined1 *)(piVar1 + 6) = param_10;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007c9650 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007c9650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7c9650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23290)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_007c9670 */
GEN_OWN GEN_FRAME byte F_007c9670(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7c9670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  bool bVar1;
  bool bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this;
  
  pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1)));
  if ((pvVar3 == ((undefined *)GEN_TOP(0x0))) ||
     (pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,param_2))), pvVar3 == ((undefined *)GEN_TOP(0x0)))) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)pvVar3 + 6))) == '\0') {
    uVar4 = *((uint *)GEN_TOP(((int)pvVar3 + 8)));
    if ((*((byte *)GEN_TOP(((int)pvVar3 + 0x14))) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = ((undefined *)GEN_TOP(F_00a3a860(pvVar3 GEN_EDX_ARG)));
    uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
  }
  uVar4 = F_00ab24a0(uVar4);
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = F_007605d0((uint)*((byte *)GEN_TOP((uVar4 + 0xa6))));
  *param_4 = uVar4;
  if ((int)uVar4 < 0) {
    return 0;
  }
  if (*param_3 == 9999) {
    *param_3 = REFG(int, 0x14a4258);
  }
  if (*param_4 != 0xb) {
    return 1;
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*param_3)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
  bVar1 = false;
  this = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,0xb)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (uVar4 = F_0046e5e0(this GEN_EDX_ARG), uVar4 != 0)) {
    bVar1 = true;
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,0xc)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
    bVar2 = true;
    if (uVar4 != 0) goto LAB_007c9759;
  }
  bVar2 = false;
LAB_007c9759: ;
  if ((bVar1) && (!bVar2)) {
    *param_4 = 0xc;
  }
  return 1;
}

/* ref: FUN_007c9780 */
GEN_OWN GEN_FRAME uint F_007c9780(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7c9780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if (uVar2 == 1) {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = F_00a5f290(param_1 GEN_EDX_ARG);
      if (((uVar2 != 0) && ((*((byte *)GEN_TOP((uVar2 + 0x2dd2))) & 0x10) != 0)) && (piVar3 != ((int *)GEN_TOP(0x0)))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
        iVar1 = *((int *)GEN_TOP((uVar4 + 0x18)));
        param_1 = ((int *)GEN_TOP(0x0));
        if (iVar1 != 0) {
          uVar4 = (uint)REFG(undefined1, 0x1338ad4);
          iVar5 = 0;
          if (uVar4 != 0) {
            while ((piVar3 = ((int *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(int)*((char *)GEN_TOP((iVar1 + 0x415 + iVar5)))
                                                ))), piVar3 == ((int *)GEN_TOP(0x0)) ||
                   (*piVar3 != *((int *)GEN_TOP((uVar2 + 0x74)))))) {
              iVar5 = iVar5 + 1;
              if ((int)uVar4 <= iVar5) {
                return 0;
              }
            }
            param_1 = ((int *)GEN_TOP((iVar5 + 1)));
          }
        }
        return (uint)param_1;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = F_00a67fa0(param_1[0x1d]);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_007c9860 */
GEN_OWN GEN_FRAME uint F_007c9860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7c9860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) + 0x10)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  if (param_2 == 1) {
    if (uVar2 == 5) {
      uVar2 = F_0042d000(param_1,&REFG(undefined, 0x10bf75c),param_3);
      return uVar2;
    }
    uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x82,param_3 + 0x90);
  }
  else if (param_2 == 2) {
    if (uVar2 == 5) {
      uVar2 = F_0042d000(param_1,&REFG(undefined, 0x10bf768),param_3 + 0x41);
      return uVar2;
    }
    if (param_3 < 0xf) {
      uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x81,param_3 + 0xb1);
      return uVar2;
    }
    uVar2 = F_0042d000(param_1,"%c%c%c",0xee,0x82,param_3 + 0x71);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_007c9940 */
GEN_OWN GEN_FRAME byte F_007c9940(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7c9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  longlong lVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_4 = 0xffc5e1ee;
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar7 = 0xb;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x44))))(piVar3 GEN_EDX_ARG);
    bVar2 = F_00435480(uVar4 GEN_EDX_ARG,uVar7);
    if ((bVar2 == 0) && ((param_1 & 0x800) != 0)) {
      if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_4 = 0xff999999;
      }
      return 0xb;
    }
  }
  if (param_3 != 0) {
    uVar4 = param_3 >> 4 & 0xf;
    if ((uVar4 == 2) || (uVar4 == 3)) {
      if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_4 = 0xff0099ff;
      }
      return 6;
    }
    uVar4 = param_3 >> 8 & 7;
    if (uVar4 == 4) {
      if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_4 = 0xff0099ff;
      }
      return 7;
    }
    if ((param_3 & 0xf0000000) == 0x20000000) {
      return 0x1e;
    }
    if (((uVar4 != 0) && ((param_3 & 0x800) == 0)) && (param_4 != ((undefined4 *)GEN_TOP(0x0)))) {
      *param_4 = 0xff0099ff;
    }
  }
  iVar6 = 0;
  iVar5 = 9;
  do {
    lVar1 = ((ulonglong)(((ulonglong)(byte)iVar5 < 0x40) ? ((1L << (ulonglong)(byte)iVar5)) : 0));
    if (((uint)lVar1 & param_1) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & param_2) != 0) {
      return (&REFG(undefined1, 0x10bf780))[(int)(iVar6 * 4)];
    }
    iVar5 = (&REFG(undefined4, 0x10bf784))[(int)(iVar6)];
    iVar6 = iVar6 + 1;
  } while (iVar5 != -1);
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_4 = 0xff999999;
  }
  return 10;
}

/* ref: FUN_007c9a80 */
GEN_OWN GEN_FRAME uint F_007c9a80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7c9a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  byte bVar1;
  uint * puVar2;
  
  bVar1 = F_007c9940(param_1,param_2,param_3,param_4);
  puVar2 = ((uint *)GEN_TOP(F_00ab3bd0((uint)bVar1)));
  if (puVar2 != ((uint *)GEN_TOP(0x0))) {
    if (param_5 != ((int *)GEN_TOP(0x0))) {
      *param_5 = (*puVar2 & 0xffffff) + (int)puVar2;
    }
    return puVar2[1];
  }
  return 0xffffffff;
}

/* ref: FUN_007c9ad0 */
GEN_OWN GEN_FRAME uint F_007c9ad0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7c9ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = REFG(int, 0x1379694);
  F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bda7e));
  F_0042e430(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10bda7f));
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  uVar6 = (uint)*((byte *)GEN_TOP((iVar1 + 0x1688)));
  *param_4 = (uint)*((byte *)GEN_TOP((iVar1 + 0x1689)));
  if (uVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = uVar6 + 62000;
  }
  *param_3 = iVar1;
  uVar2 = F_00ab21a0(uVar6);
  if (uVar2 != 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
    if (*piVar4 == 0) {
      F_0042e430(param_1 GEN_EDX_ARG,(*((uint *)GEN_TOP((uVar2 + 0xc))) & 0xffffff) + uVar2 + 0xc);
      uVar7 = 0x7e7;
      uVar2 = uVar6;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
      uVar2 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,uVar2);
      F_0042e430(param_2 GEN_EDX_ARG,uVar2);
      return uVar6;
    }
    uVar7 = 0x7e7;
    uVar2 = uVar6;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,uVar2);
    F_0042e430(param_1 GEN_EDX_ARG,uVar2);
    F_0042e430(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10bda95));
  }
  return uVar6;
}

/* ref: FUN_007c9be0 */
GEN_OWN GEN_FRAME byte F_007c9be0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_2 + 6))) == '\0') {
      uVar2 = *((uint *)GEN_TOP(((int)param_2 + 8)));
      if ((*((byte *)GEN_TOP(((int)param_2 + 0x14))) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      this = ((undefined *)GEN_TOP(F_00a3a860(param_2 GEN_EDX_ARG)));
      uVar2 = F_0046e5e0(this GEN_EDX_ARG);
    }
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      if (*((char *)GEN_TOP((uVar2 + 0xa0))) == '\x0f') {
        bVar1 = *((byte *)GEN_TOP((uVar2 + 0x2c)));
      }
      else {
        if (*((char *)GEN_TOP((uVar2 + 0xba))) != '\x01') {
          return 0;
        }
        bVar1 = F_0046e590(param_2 GEN_EDX_ARG);
      }
      puVar3 = ((undefined4 *)GEN_TOP(F_00ab3c60((uint)bVar1)));
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        *param_1 = 0;
        return 1;
      }
      *param_1 = *puVar3;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007c9c70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007c9c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7c9c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00760a10(param_2);
    if (uVar2 == 1) {
      bVar1 = *((byte *)GEN_TOP(((int)this + 0x235b8)));
    }
    else {
      if (uVar2 == 2) {
        uVar3 = (uint)*((byte *)GEN_TOP(((int)this + 0x235b9)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_ARG);
        F_0043f750(param_1,uVar2,uVar3);
        return 1;
      }
      if (uVar2 != 3) goto LAB_007c9ce6;
      bVar1 = *((byte *)GEN_TOP(((int)this + 0x235ba)));
    }
    uVar3 = (uint)bVar1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_ARG);
    F_0043f750(param_1,uVar2,uVar3);
    return 1;
  }
LAB_007c9ce6: ;
  F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bdab1));
  return 0;
}

/* ref: FUN_007c9d00 */
GEN_OWN GEN_FRAME ulonglong F_007c9d00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7c9d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00760a10(param_1);
  return CONCAT44(*(undefined4 *)(&REFG(undefined, 0x148a074) + uVar1 * 8),
                  *(undefined4 *)(&REFG(undefined, 0x148a070) + uVar1 * 8));
}

/* ref: FUN_007c9d30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007c9d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7c9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  F_00414500(in_ecx GEN_EDX_ARG,param_1);
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,param_2);
  return *((uint *)GEN_TOP((uVar1 + 0x14)));
}

/* ref: FUN_007c9d70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007c9d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7c9d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  char cVar2;
  undefined4 in_ecx;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,6);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,5);
  piVar6 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  if (**((int * PTR32 *)GEN_TOP((uVar4 + 0x20))) != 0) {
    **((int * PTR32 *)GEN_TOP((uVar4 + 0x20))) = 0;
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  bVar3 = F_00446c80();
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4))) != (uint)(bVar3 != 0)) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4))) = (uint)(bVar3 != 0);
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  bVar3 = F_00446cd0();
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d3c))) != (uint)(bVar3 != 0)) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d3c))) = (uint)(bVar3 != 0);
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar7 = F_00414500(in_ecx GEN_EDX_ARG,0xb9);
  local_18 = *((uint *)GEN_TOP((uVar7 + 0x14)));
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2332c))) + 0x1bd48))) != 0) &&
     (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x6c))))(piVar6 GEN_EDX_ARG), (char)uVar7 == '\0')) {
    local_18 = local_18 | 0x40000;
  }
  iVar12 = 0;
  local_14 = 0;
  uVar7 = 1;
  do {
    uVar8 = F_00414500(in_ecx GEN_EDX_ARG,iVar12 + 0xc6);
    if (*((int *)GEN_TOP((uVar8 + 0x14))) != 0) {
      local_14 = local_14 | uVar7;
    }
    iVar12 = iVar12 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  } while (iVar12 < 0x12);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8))) != local_14) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8))) = local_14;
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x10))) != local_18) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x10))) = local_18;
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  uVar7 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0xbb);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d4c))) != *((int *)GEN_TOP((uVar7 + 0x14)))) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d4c))) = *((int *)GEN_TOP((uVar7 + 0x14)));
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  uVar7 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0xd8);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d50))) != *((int *)GEN_TOP((uVar7 + 0x14)))) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d50))) = *((int *)GEN_TOP((uVar7 + 0x14)));
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  uVar7 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0xda);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d54))) != *((int *)GEN_TOP((uVar7 + 0x14)))) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2d54))) = *((int *)GEN_TOP((uVar7 + 0x14)));
    *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
  }
  local_1c = 0;
  local_20 = 0x1c;
  local_24 = 4;
  do {
    local_14 = local_24;
    local_24 = local_24 + 0xc0;
    local_18 = 0;
    iVar12 = local_20;
    do {
      piVar6 = ((int *)GEN_TOP(F_0043aed0(*((undefined4 *)GEN_TOP(((int)this + 0x2332c))) GEN_EDX_ARG,local_1c,local_18)));
      if (((char)piVar6[2] != '\0') || (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 8 + iVar12))) != 0)) {
        uVar7 = F_0044bd50(piVar6 GEN_EDX_ARG);
        cVar2 = (char)piVar6[2];
        uVar8 = F_0043aa60(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 8 + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 8 + iVar12))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar8 = F_004462f0(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 4 + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) - 4 + iVar12))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar8 = F_00446320(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar12))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + iVar12))) != *piVar6) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + iVar12))) = *piVar6;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0xffffffff;
        }
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8 + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 8 + iVar12))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar7 = F_00446690(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0xc + iVar12))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        bVar3 = F_004465b0(piVar6 GEN_EDX_ARG);
        puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x10 + iVar12)));
        if (*puVar1 != (uint)(bVar3 != 0)) {
          *puVar1 = (uint)(bVar3 != 0);
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (((cVar2 == '\x02') || (cVar2 == '\x04')) || (cVar2 == '\x0e')) {
          uVar7 = F_00446790(piVar6 GEN_EDX_ARG,*((byte *)GEN_TOP(((int)this + 0x230bf))) & 1);
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) != uVar7) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
          uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
          bVar9 = (*((byte *)GEN_TOP(((int)this + 0x230bf))) & 3) == 0;
LAB_007ca144: ;
          iVar11 = *((int *)GEN_TOP((uVar5 + 0x20)));
          if (bVar9 == false) {
LAB_007ca14f: ;
            if (uVar7 != *((uint *)GEN_TOP((iVar11 + local_14)))) {
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            *((uint *)GEN_TOP((iVar11 + local_14))) = uVar7;
          }
          else if (uVar7 != *((uint *)GEN_TOP((iVar11 + local_14)))) {
            *((uint *)GEN_TOP((iVar11 + local_14))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
        }
        else {
          if ((cVar2 == '\x01') || (cVar2 == '\t')) {
            uVar7 = F_00446790(piVar6 GEN_EDX_ARG,1);
            if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) != uVar7) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) = uVar7;
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
            }
            uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
            bVar9 = (bool)(~(*((byte *)GEN_TOP(((int)this + 0x230bf))) >> 1) & 1);
            goto LAB_007ca144;
          }
          uVar7 = F_00446790(piVar6 GEN_EDX_ARG,0);
          if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) != uVar7) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x14 + iVar12))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
          bVar3 = *((byte *)GEN_TOP(((int)this + 0x230bf)));
          uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
          iVar11 = *((int *)GEN_TOP((uVar5 + 0x20)));
          if ((~(bVar3 >> 1) & 1) == 0) goto LAB_007ca14f;
          if (uVar7 != *((uint *)GEN_TOP((iVar11 + local_14)))) {
            *((uint *)GEN_TOP((iVar11 + local_14))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
        }
        uVar7 = F_00446760(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x18 + iVar12))) != uVar7) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x18 + iVar12))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar7 = F_004673b0(piVar6 GEN_EDX_ARG);
        if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_14)))) {
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_14))) = uVar7;
      }
      local_14 = local_14 + 0xc;
      local_18 = local_18 + 1;
      iVar12 = iVar12 + 0x24;
    } while ((int)local_18 < 0x10);
    local_1c = local_1c + 1;
    local_20 = local_20 + 0x240;
  } while (local_1c < 0x12);
  local_1c = 0;
  iVar12 = 0x289c;
  local_14 = 0xd84;
  do {
    iVar11 = iVar12 + 0x240;
    iVar13 = local_14 + 0xc0;
    local_24 = 0;
    do {
      iVar10 = *((int *)GEN_TOP(((int)this + 0x2332c))) + 0x190c8;
      if (local_1c != 0) {
        iVar10 = *((int *)GEN_TOP(((int)this + 0x2332c))) + 0x1a708;
      }
      piVar6 = ((int *)GEN_TOP((iVar10 + local_24)));
      if (((char)piVar6[2] != '\0') || (*((int *)GEN_TOP((iVar12 - 8 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != 0)) {
        uVar7 = F_0044bd50(piVar6 GEN_EDX_ARG);
        cVar2 = (char)piVar6[2];
        uVar8 = F_0043aa60(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((iVar12 - 8 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar8) {
          *((uint *)GEN_TOP((iVar12 - 8 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar8 = F_004462f0(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((iVar12 - 4 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar8) {
          *((uint *)GEN_TOP((iVar12 - 4 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar8 = F_00446320(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar12))) != uVar8) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + iVar12))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (*((int *)GEN_TOP((iVar12 + 4 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != *piVar6) {
          *((int *)GEN_TOP((iVar12 + 4 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = *piVar6;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0xffffffff;
        }
        if (*((uint *)GEN_TOP((iVar12 + 8 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 8 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar7 = F_00446690(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((iVar12 + 0xc + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 0xc + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        bVar3 = F_004465b0(piVar6 GEN_EDX_ARG);
        puVar1 = ((uint *)GEN_TOP((iVar12 + 0x10 + *((int *)GEN_TOP((uVar4 + 0x20))))));
        if (*puVar1 != (uint)(bVar3 != 0)) {
          *puVar1 = (uint)(bVar3 != 0);
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        if (((cVar2 == '\x02') || (cVar2 == '\x04')) || (cVar2 == '\x0e')) {
          uVar7 = F_00446790(piVar6 GEN_EDX_ARG,*((byte *)GEN_TOP(((int)this + 0x230bf))) & 1);
          if (*((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
            *((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
          uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
          bVar9 = (*((byte *)GEN_TOP(((int)this + 0x230bf))) & 3) == 0;
LAB_007ca405: ;
          iVar10 = *((int *)GEN_TOP((uVar5 + 0x20)));
          if (bVar9 == false) {
LAB_007ca410: ;
            if (uVar7 != *((uint *)GEN_TOP((iVar10 + local_14)))) {
              *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
            }
            *((uint *)GEN_TOP((iVar10 + local_14))) = uVar7;
          }
          else if (uVar7 != *((uint *)GEN_TOP((iVar10 + local_14)))) {
            *((uint *)GEN_TOP((iVar10 + local_14))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
        }
        else {
          if ((cVar2 == '\x01') || (cVar2 == '\t')) {
            uVar7 = F_00446790(piVar6 GEN_EDX_ARG,1);
            if (*((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
              *((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
              *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
            }
            uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
            bVar9 = (bool)(~(*((byte *)GEN_TOP(((int)this + 0x230bf))) >> 1) & 1);
            goto LAB_007ca405;
          }
          uVar7 = F_00446790(piVar6 GEN_EDX_ARG,0);
          if (*((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
            *((uint *)GEN_TOP((iVar12 + 0x14 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
          }
          bVar3 = *((byte *)GEN_TOP(((int)this + 0x230bf)));
          uVar7 = F_00467410(piVar6 GEN_EDX_ARG);
          iVar10 = *((int *)GEN_TOP((uVar5 + 0x20)));
          if ((~(bVar3 >> 1) & 1) == 0) goto LAB_007ca410;
          if (uVar7 != *((uint *)GEN_TOP((iVar10 + local_14)))) {
            *((uint *)GEN_TOP((iVar10 + local_14))) = uVar7;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
        }
        uVar7 = F_00446760(piVar6 GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((iVar12 + 0x18 + *((int *)GEN_TOP((uVar4 + 0x20)))))) != uVar7) {
          *((uint *)GEN_TOP((iVar12 + 0x18 + *((int *)GEN_TOP((uVar4 + 0x20)))))) = uVar7;
          *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
        }
        uVar7 = F_004673b0(piVar6 GEN_EDX_ARG);
        if (uVar7 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_14)))) {
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_14))) = uVar7;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 0x164;
      iVar12 = iVar12 + 0x24;
    } while (local_24 < 0x1640);
    local_1c = local_1c + 1;
    iVar12 = iVar11;
    local_14 = iVar13;
    if (1 < local_1c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007ca4b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007ca4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7ca4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * this_01;
  undefined * this_02;
  uint uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int * local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x232c8)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD), (char)uVar2 != '\0')) &&
     (this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7da))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    local_c = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0x29);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,0x25);
    local_10 = 0;
    if (0xa0 < local_c) {
      local_c = 0xa0;
    }
    local_14 = 0;
    if (0 < (int)local_c) {
      local_8 = ((int *)GEN_TOP(((int)this + 0x29aac)));
      local_18 = 0x10;
      do {
        this_01 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,local_14)));
        if ((this_01 != ((undefined *)GEN_TOP(0x0))) &&
           ((*((char *)GEN_TOP(((int)this_01 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_01 + 8))) != 0)))) {
          F_00a3a8a0(this_01 GEN_EDX_ARG);
          if (*((char *)GEN_TOP(((int)this_01 + 6))) == '\0') {
            uVar4 = *((uint *)GEN_TOP(((int)this_01 + 8)));
            if ((*((byte *)GEN_TOP(((int)this_01 + 0x14))) & 1) != 0) {
              uVar4 = uVar4 + 1000000;
            }
          }
          else {
            this_02 = ((undefined *)GEN_TOP(F_00a3a860(this_01 GEN_EDX_ARG)));
            uVar4 = F_0046e5e0(this_02 GEN_EDX_ARG);
          }
          uVar5 = F_00ab24a0(uVar4);
          if (uVar5 != 0) {
            if (local_8[-1] != uVar4) {
              ((code *)*((gen_code32 *)GEN_TOP((local_8[-0x17] + 8))))(local_8 - 0x17,uVar4,uVar5);
            }
            uVar4 = F_00a3a8a0(this_01 GEN_EDX_ARG);
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) - 8 + local_18))) != *local_8) {
              *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) - 8 + local_18))) = *local_8;
              *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
            }
            if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) - 4 + local_18))) != uVar4) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) - 4 + local_18))) = uVar4;
              *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
            }
            if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + local_18))) != local_14) {
              *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + local_18))) = local_14;
              *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
            }
            uVar4 = F_0042a990(local_8 - 0x16 GEN_EDX_ARG);
            if (uVar4 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + local_10 * 4)))) {
              *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + local_10 * 4))) = uVar4;
              *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
            }
            local_10 = local_10 + 1;
            local_18 = local_18 + 0xc;
          }
        }
        local_8 = local_8 + 0x1a;
        local_14 = local_14 + 1;
      } while (local_14 < (int)local_c);
    }
    uVar3 = F_00a3a180(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != uVar3) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != local_10) {
      **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = local_10;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return;
}

/* ref: FUN_007ca680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007ca680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x7ca680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  undefined * this_00;
  undefined * puVar5;
  int * piVar6;
  byte * pbVar7;
  byte * pbVar8;
  bool bVar9;
  undefined4 uVar10;
  int local_c;
  
  local_c = 0;
  pbVar8 = &REFG(undefined, 0x10bdacb);
  if (*((char *)GEN_TOP(((int)param_4 + 0x8a))) != '\x02') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 4))))(param_4 GEN_EDX_FWD);
    if (uVar2 == 3) {
      uVar2 = F_00ab2440(param_4[0x20]);
      if (uVar2 == 0) {
        return 0xffffffff;
      }
      pbVar8 = ((byte *)GEN_TOP(((*((uint *)GEN_TOP((uVar2 + 8))) & 0xffffff) + uVar2 + 8)));
    }
    else {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 4))))(param_4 GEN_EDX_ARG);
      if (uVar2 == 9) {
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_4[0xbb6]);
        bVar1 = F_007608a0(uVar2);
        iVar4 = (int)this + 0x22d40;
        if (bVar1 == 0) {
          F_007c9c70(this GEN_EDX_ARG,iVar4,uVar2);
        }
        else {
          F_007608f0(this GEN_EDX_ARG,iVar4,uVar2);
        }
        pbVar8 = ((byte *)GEN_TOP(F_0042a990(iVar4 GEN_EDX_ARG)));
      }
    }
  }
  pbVar3 = ((byte *)GEN_TOP(F_0042a990(param_1 + 0xc4 GEN_EDX_ARG)));
  pbVar7 = pbVar8;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_007ca764: ;
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_007ca769;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_007ca764;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007ca769: ;
  if (iVar4 != 0) {
    F_0042e430(((undefined *)GEN_TOP((param_1 + 0xc4))) GEN_EDX_ARG,pbVar8);
    if (pbVar8 == ((byte *)GEN_TOP(0x0))) {
LAB_007ca7aa: ;
      puVar5 = &REFG(undefined, 0x10bdadb);
    }
    else {
      pbVar7 = pbVar8;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      if (pbVar7 == pbVar8 + 1) goto LAB_007ca7aa;
      uVar10 = 0x25;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x18))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG)));
      puVar5 = ((undefined *)GEN_TOP(F_00460540(this_00 GEN_EDX_ARG,uVar10,pbVar8)));
    }
    F_0042e430(((undefined *)GEN_TOP((param_1 + 0x118))) GEN_EDX_ARG,puVar5);
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x1c0))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x70))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x16c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  piVar6 = ((int *)GEN_TOP(F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG)));
  if (piVar6 != param_4) {
    piVar6 = ((int *)GEN_TOP(F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG)));
    iVar4 = 8;
    if (piVar6 != param_4) goto LAB_007ca80c;
  }
  iVar4 = local_c;
LAB_007ca80c: ;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) != iVar4) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) = iVar4;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return 0;
}

/* ref: FUN_007ca830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007ca830(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x7ca830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  bVar2 = F_00ae18c0(param_4 GEN_EDX_ARG);
  if (bVar2 == 0) {
    if ((*((char *)GEN_TOP((param_4 + 0x1e1))) == '\0') || (*((char *)GEN_TOP((param_4 + 0x1d8))) == '\0'))
    goto LAB_007ca981;
    (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_4 + 0x184)));
    if ((*(float *)(gen_frame + 0x4)) < 0.0) {
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0x8)) = (int)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) - REFG(double, 0x1088108));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x8));
    }
    else {
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0x8)) = (int)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) + REFG(double, 0x1088108));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x8));
    }
LAB_007ca967: ;
    fVar1 = *((float *)GEN_TOP((param_4 + 0x18c)));
  }
  else {
    (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_4 + 0x184)));
    if ((*(float *)(gen_frame + 0x4)) < 0.0) {
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0x8)) = (int)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) - REFG(double, 0x1088108));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x8));
    }
    else {
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0x8)) = (int)(longlong)TRUNC((double)(*(float *)(gen_frame + 0x4)) + REFG(double, 0x1088108));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x8));
    }
    if (*((char *)GEN_TOP((param_4 + 0x1d8))) != '\0') goto LAB_007ca967;
    fVar1 = *((float *)GEN_TOP((param_4 + 0x188)));
  }
  (*(uint *)(gen_frame + 0x0)) = 2;
  uVar4 = F_00906ed0((*(float *)(gen_frame + 0x4)),fVar1);
LAB_007ca981: ;
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x18 + param_5 * 4))) != uVar4) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x18 + param_5 * 4))) = uVar4;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x1c0))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x70))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x16c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0xc4))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x118))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  uVar4 = (*(uint *)(gen_frame + 0x0));
  if ((*(int *)(gen_frame + 0xc)) != 0) {
    uVar4 = (*(uint *)(gen_frame + 0x0)) | 0x20;
  }
  uVar3 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  if ((uVar3 != param_4) && (uVar3 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG), uVar3 != param_4)) {
    uVar4 = uVar4 | 8;
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) != uVar4) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) = uVar4;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return 0;
}

/* ref: FUN_007caa40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007caa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x7caa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  int * piVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined4 uVar9;
  
  bVar3 = F_00ae0f80(param_4 GEN_EDX_FWD);
  bVar4 = F_00ae0f70(param_4 GEN_EDX_ARG);
  if (bVar3 == 0) {
    iVar5 = 0;
  }
  else if (bVar4 < bVar3) {
    dVar2 = GEN_X87((double)((float)GEN_TOF((((float10)bVar4 * (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)bVar3))));
    if (dVar2 < 0.0) {
      iVar5 = (int)(dVar2 - REFG(double, 0x1088108));
    }
    else {
      iVar5 = (int)(dVar2 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar5 = 100;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x18 + param_5 * 4))) != iVar5) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x18 + param_5 * 4))) = iVar5;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x1c0))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x70))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0xc4))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x118))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  bVar3 = F_00ae0f60(param_4 GEN_EDX_ARG);
  uVar8 = (uint)bVar3;
  if (*((uint *)GEN_TOP((param_1 + 0x18))) != uVar8) {
    uVar6 = F_00435340(uVar8);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x22d40))) GEN_EDX_ARG,uVar6);
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23184)));
    uVar6 = F_0042a990(((undefined *)GEN_TOP(((int)this + 0x22d40))) GEN_EDX_ARG);
    uVar9 = 0x7f2;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
    uVar6 = F_00461190(pvVar7 GEN_EDX_ARG,uVar9,uVar6);
    F_0042e430(((undefined *)GEN_TOP((param_1 + 0x16c))) GEN_EDX_ARG,uVar6);
  }
  *((uint *)GEN_TOP((param_1 + 0x18))) = uVar8;
  bVar3 = F_00ae0f70(param_4 GEN_EDX_ARG);
  uVar8 = 0x20;
  if (bVar3 == 0) {
    uVar8 = 0;
  }
  pvVar7 = ((undefined *)GEN_TOP(F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG)));
  if (pvVar7 != param_4) {
    pvVar7 = ((undefined *)GEN_TOP(F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG)));
    if (pvVar7 != param_4) {
      uVar8 = uVar8 | 8;
    }
  }
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) != uVar8) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) = uVar8;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  bVar3 = F_00ae0f60(param_4 GEN_EDX_ARG);
  return (uint)bVar3 << 0x10;
}

/* ref: FUN_007cabf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007cabf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x7cabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  if (uVar1 != param_4) {
    uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (uVar1 != param_4) {
      iVar2 = 8;
    }
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x1c0))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x70))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x16c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0xc4))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0x118))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) != iVar2) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x34 + param_5 * 4))) = iVar2;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  return 0;
}

/* ref: FUN_007cac90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cac90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x5c, 4);
  uint * puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int * piVar11;
  int * piVar12;
  uint uVar13;
  uint uVar14;
  undefined * this_00;
  undefined4 * puVar15;
  float10 fVar16;
  float10 fVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,5);
  (*(uint *)(gen_frame + 0x44)) = uVar10;
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,4);
  uVar2 = *((ushort *)GEN_TOP(((int)this + 0x22d18)));
  uVar3 = *((ushort *)GEN_TOP(((int)this + 0x22d1a)));
  (*(uint *)(gen_frame + 0x18)) = uVar10;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1379694);
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(int *)(gen_frame + 0x30)) = 3;
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP((uVar10 + 0x71bc)));
  (*(char *)(gen_frame + 0x57)) = '\0';
  if ((((*((int *)GEN_TOP(((int)this + 0x235a4))) == -1) && (*((int *)GEN_TOP(((int)this + 0x235a8))) == -1)) &&
      (*((int *)GEN_TOP(((int)this + 0x235ac))) == -1)) && (*((int *)GEN_TOP(((int)this + 0x235b0))) == -1)) {
    (*(char *)(gen_frame + 0x57)) = '\x01';
  }
  F_00761890(this GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (0 < (*(int *)(gen_frame + 0x14))) {
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2;
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar3;
    (*(int *)(gen_frame + 0x4c)) = 0x18;
    (*(int *)(gen_frame + 0x24)) = 0x70f4;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(((int)this + 0x235c0)));
    do {
      *((undefined4 *)GEN_TOP(((int)this + 0x29208))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x2920c))) = 0;
      uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x23184))) GEN_EDX_ARG)
      ;
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar10)));
      piVar5 = ((int *)GEN_TOP(*puVar4));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar4;
      (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar5;
      uVar18 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*piVar5)))(piVar5);
      uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xa8))))(piVar5 GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x1c)) = uVar10;
      if ((*(char *)(gen_frame + 0x57)) == '\0') {
        uVar10 = F_00761e60(this GEN_EDX_ARG,piVar5,(*(undefined4 *)(gen_frame + 0x10)),GEN_ARGF(gen_bits2f(puVar4[0xd])));
        (*(uint *)(gen_frame + 0x38)) = uVar10;
      }
      else {
        (*(uint *)(gen_frame + 0x38)) = 0;
      }
      uVar10 = (*(uint *)(gen_frame + 0x44));
      puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 0xc + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))))));
      (*(char *)(gen_frame + 0x56)) = '\0';
      if (*puVar1 != (uint)*((byte *)GEN_TOP(((int)puVar4 + 0x39)))) {
        *puVar1 = (uint)*((byte *)GEN_TOP(((int)puVar4 + 0x39)));
        *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
      }
      F_00c46e20(&(*(int *)(gen_frame + 0xc)),puVar4 + 6,4);
      fVar16 = (float10)REFG(double, 0x1088108);
      fVar20 = ((float)GEN_TOF((((((float10)GEN_TOD(gen_bits2f(puVar4[4]))) + (float10)1) * (float10)uVar2) * fVar16)));
      (*(float *)(gen_frame + 0x20)) = fVar20;
      fVar17 = (float10)fVar20;
      if (fVar17 < (float10)0) {
        fVar17 = GEN_X87(fVar17 - fVar16);
      }
      else {
        fVar17 = GEN_X87(fVar17 + fVar16);
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 4 + *((int *)GEN_TOP((uVar10 + 0x20)))))) != (int)fVar17) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 4 + *((int *)GEN_TOP((uVar10 + 0x20)))))) = (int)fVar17;
        *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
      }
      fVar20 = ((float)GEN_TOF(((((float10)1 - ((float10)GEN_TOD(gen_bits2f(puVar4[5])))) * (float10)uVar3) * fVar16)));
      (*(float *)(gen_frame + 0x20)) = fVar20;
      fVar17 = (float10)fVar20;
      if (fVar17 < (float10)0) {
        fVar17 = GEN_X87(fVar17 - fVar16);
      }
      else {
        fVar17 = GEN_X87(fVar16 + fVar17);
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar10 + 0x20))) + (*(int *)(gen_frame + 0x4c))))) != (int)fVar17) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar10 + 0x20))) + (*(int *)(gen_frame + 0x4c))))) = (int)fVar17;
        *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 4 + *((int *)GEN_TOP((uVar10 + 0x20)))))) != (*(int *)(gen_frame + 0xc))) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 4 + *((int *)GEN_TOP((uVar10 + 0x20)))))) = (*(int *)(gen_frame + 0xc));
        *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 8 + *((int *)GEN_TOP((uVar10 + 0x20)))))) != (uint)*(byte *)(puVar4 + 0xe)) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 8 + *((int *)GEN_TOP((uVar10 + 0x20)))))) = (uint)*(byte *)(puVar4 + 0xe);
        *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
      }
      (*(int *)(gen_frame + 0x4)) = (int)((ulonglong)uVar18 >> 0x20);
      (*(int *)(gen_frame + 0x0)) = (int)uVar18;
      *(*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x0));
      (*(int * PTR32 *)(gen_frame + 0x2c))[1] = (*(int *)(gen_frame + 0x4));
      piVar11 = ((int *)GEN_TOP(F_00761970(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)))));
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c));
      piVar12 = ((int *)GEN_TOP(F_00a5f290((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x48)) = piVar12;
      (*(char *)(gen_frame + 0x54)) = '\0';
      uVar10 = F_00760a10(piVar5);
      if ((piVar11[3] != uVar10) || ((char)piVar11[0x72] != '\0')) {
        piVar11[4] = *(int *)(&REFG(undefined, 0x148a070) + uVar10 * 8);
        piVar11[5] = *(int *)(&REFG(undefined, 0x148a074) + uVar10 * 8);
        *(undefined1 *)(piVar11 + 0x72) = 0;
        (*(char *)(gen_frame + 0x54)) = '\x01';
      }
      iVar6 = (int)((ulonglong)*(undefined8 *)(piVar11 + 4) >> 0x20);
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x10 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) != iVar6) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x10 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) = iVar6;
        *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x14 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) != piVar11[4]) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x14 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) = piVar11[4];
        *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
      }
      (*(char *)(gen_frame + 0x55)) = '\0';
      if ((((*piVar11 == (*(int *)(gen_frame + 0x0))) && (piVar11[1] == (*(int *)(gen_frame + 0x4)))) &&
          ((piVar11[2] == (*(uint *)(gen_frame + 0x1c)) &&
           (((piVar11[3] == uVar10 || ((*(int * PTR32 *)(gen_frame + 0x48)) == ((int *)GEN_TOP(0x0)))) ||
            (uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 4))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG), uVar13 != 1)))))) &&
         (*((char *)GEN_TOP(((int)piVar11 + 0x1c7))) == '\0')) {
        (*(char *)(gen_frame + 0x56)) = '\x01';
      }
      else {
        if ((*(int * PTR32 *)(gen_frame + 0x48)) == ((int *)GEN_TOP(0x0))) {
LAB_007cb024: ;
          (*(float *)(gen_frame + 0x20)) = 0.0;
LAB_007cb02b: ;
          piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23184)));
          uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          uVar13 = uVar13 & 0xff;
          fVar20 = (*(float *)(gen_frame + 0x20));
          uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          uVar21 = 0x7e8;
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x18))))(piVar5 GEN_EDX_ARG)));
          uVar13 = F_00461390(this_00 GEN_EDX_ARG,uVar21,uVar14,(undefined4)gen_fl2bits(fVar20),uVar13);
          F_0042e430(piVar11 + 7 GEN_EDX_ARG,uVar13);
LAB_007cb070: ;
          *((undefined1 *)GEN_TOP(((int)piVar11 + 0x1c7))) = 0;
        }
        else {
          uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 4))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
          if (((uVar13 != 1) || (bVar9 = F_00a9f620((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG), bVar9 != 0)) ||
             ((bVar9 = F_00a620a0(), bVar9 == 0 ||
              (uVar13 = F_00a62220((*(int * PTR32 *)(gen_frame + 0x48))), (char)uVar13 == '\0')))) {
            uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 4))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
            if (uVar13 != 1) {
              (*(float *)(gen_frame + 0x20)) = 1.4013e-45;
              if (*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x48)) + 0x2ecd))) < 3) goto LAB_007cb024;
              goto LAB_007cb02b;
            }
            F_007c9c70(this GEN_EDX_ARG,piVar11 + 7,(*(int * PTR32 *)(gen_frame + 0x48)));
            goto LAB_007cb070;
          }
          bVar9 = F_007608f0(this GEN_EDX_ARG,piVar11 + 7,(*(int * PTR32 *)(gen_frame + 0x48)));
          *((bool *)GEN_TOP(((int)piVar11 + 0x1c7))) = bVar9 == 0;
        }
        *piVar11 = (*(int *)(gen_frame + 0x0));
        piVar11[1] = (*(int *)(gen_frame + 0x4));
        piVar11[2] = (*(uint *)(gen_frame + 0x1c));
        (*(char *)(gen_frame + 0x55)) = '\x01';
      }
      uVar22 = 0;
      uVar21 = 1;
      uVar19 = 0;
      uVar13 = F_0042a990(piVar11 + 7 GEN_EDX_ARG);
      F_00431250((*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x40)),uVar13,uVar19,uVar21,uVar22);
      uVar13 = (*(uint *)(gen_frame + 0x18));
      piVar11[3] = uVar10;
      *((uint *)GEN_TOP(((int)this + 0x29208))) =
           (uVar10 & 0x1f) << 9 | (*(uint *)(gen_frame + 0x28)) & 0x1ff | *((uint *)GEN_TOP(((int)this + 0x29208))) & 0xffffc000;
      bVar9 = *((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x39)));
      if ((bVar9 < 8) &&
         (uVar10 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + (uint)bVar9 * 8 + 0x23560))))
                             (*((int *)GEN_TOP(((int)this + (uint)bVar9 * 8 + 0x23564))) + (int)this,piVar11,
                              (*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x18)),(*(int * PTR32 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x40))), uVar10 != 0xffffffff))
      {
        uVar22 = 0;
        uVar21 = 1;
        uVar19 = 0;
        uVar10 = F_0042a990(piVar11 + 0x46 GEN_EDX_ARG);
        F_00431250(uVar13 GEN_EDX_ARG,(*(int *)(gen_frame + 0x40)) + 0x32,uVar10,uVar19,uVar21,uVar22);
        uVar22 = 0;
        uVar21 = 1;
        uVar19 = 0;
        uVar10 = F_0042a990(piVar11 + 0x5b GEN_EDX_ARG);
        F_00431250(uVar13 GEN_EDX_ARG,(*(int *)(gen_frame + 0x40)) + 200,uVar10,uVar19,uVar21,uVar22);
        uVar22 = 0;
        uVar21 = 1;
        uVar19 = 0;
        uVar10 = F_0042a990(piVar11 + 0x1c GEN_EDX_ARG);
        F_00431250(uVar13 GEN_EDX_ARG,(*(int *)(gen_frame + 0x40)) + 100,uVar10,uVar19,uVar21,uVar22);
        uVar13 = 0;
        uVar10 = F_00a67fd0((*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
        if (((uVar10 == 0) && (uVar10 = (*(int * PTR32 *)(gen_frame + 0x3c))[0x46], uVar10 == 0)) &&
           ((((uVar10 = uVar13, *((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x39))) == '\x03' ||
              (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x39))) == '\x04')) && ((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0)))) &&
            (bVar9 = F_00a63970(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x48))), bVar9 != 0)))) {
          uVar10 = 0xeabc;
        }
        puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
        puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x18 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))))));
        uVar13 = *puVar1;
        (*(bool *)(gen_frame + 0x53)) = uVar13 != uVar10;
        if (uVar13 != uVar10) {
          *puVar1 = uVar10;
          *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
        }
        puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x20 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))))));
        if (*puVar1 != (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x3a)))) {
          *puVar1 = (uint)*((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x3a)));
          *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
        }
        if ((((*(char *)(gen_frame + 0x56)) != '\0') && (*((char *)GEN_TOP(((int)this + 0x235bb))) == '\0')) &&
           (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x3b))) == '\0')) {
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | 4;
        }
        puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0x30 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))))));
        if (*puVar1 != (*(uint *)(gen_frame + 0x38))) {
          *puVar1 = (*(uint *)(gen_frame + 0x38));
          *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
        }
        puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 8 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar15;
        if (((*((byte *)GEN_TOP(((int)this + 0x230bf))) & 8) == 0) && (*((char *)GEN_TOP(((int)puVar4 + 0x3b))) == '\0'))
        {
          iVar6 = *((int *)GEN_TOP(((int)this + 0x2920c)));
          if ((puVar4[0x12] == *((int *)GEN_TOP(((int)this + 0x29208)))) && (puVar4[0x13] == iVar6)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          puVar4[0x12] = *((undefined4 *)GEN_TOP(((int)this + 0x29208)));
          puVar4[0x13] = iVar6;
          if ((bVar8) || (*((char *)GEN_TOP(((int)piVar11 + 0x1c9))) != *((char *)GEN_TOP(((int)puVar4 + 0x3a)))))
          goto LAB_007cb2ba;
          if ((*(char *)(gen_frame + 0x55)) != '\0') {
            puVar15 = ((undefined4 *)GEN_TOP(((uint)puVar15 | 1)));
          }
          if ((*(char *)(gen_frame + 0x54)) != '\0') {
            puVar15 = ((undefined4 *)GEN_TOP(((uint)puVar15 | 2)));
          }
          if (uVar13 != uVar10) {
            puVar15 = ((undefined4 *)GEN_TOP(((uint)puVar15 | 4)));
          }
        }
        else {
LAB_007cb2ba: ;
          puVar15 = ((undefined4 *)GEN_TOP(((uint)puVar15 | 7)));
          *((undefined1 *)GEN_TOP(((int)piVar11 + 0x1c9))) = *((undefined1 *)GEN_TOP(((int)puVar4 + 0x3a)));
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 8 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) != puVar15) {
          *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) - 8 + *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20)))))) = puVar15;
          *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
        }
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x10;
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 0x40;
        (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x2c)) + 2;
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 4;
      uVar10 = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x28)) = uVar10;
    } while ((int)uVar10 < (*(int *)(gen_frame + 0x14)));
  }
  uVar10 = (*(uint *)(gen_frame + 0x44));
  if (**((int * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))) != (*(int *)(gen_frame + 0x40))) {
    **((int * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x20))) = (*(int *)(gen_frame + 0x40));
    *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + 0x1d))) = 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x235bb))) = 0;
  *((int *)GEN_TOP(((int)this + 0x235bc))) = (*(int *)(gen_frame + 0x40));
  uVar21 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar13 = F_00414500(uVar21 GEN_EDX_ARG,0xf0);
  iVar6 = *((int *)GEN_TOP((uVar13 + 0x14)));
  uVar13 = F_00414500(uVar21 GEN_EDX_ARG,0xf1);
  iVar7 = *((int *)GEN_TOP((uVar13 + 0x14)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar10 + 0x20))) + 4))) != iVar6) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar10 + 0x20))) + 4))) = iVar6;
    *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
  }
  uVar13 = *((uint *)GEN_TOP((uVar10 + 0x20)));
  if (*((int *)GEN_TOP((uVar13 + 8))) != iVar7) {
    *((int *)GEN_TOP((uVar13 + 8))) = iVar7;
    *((undefined1 *)GEN_TOP((uVar10 + 0x1d))) = 1;
  }
  return uVar13;
}

/* ref: FUN_007cb370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cb370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cb370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  undefined1 uVar5;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,0x16);
  if ((uVar1 != 0) && (**((int * PTR32 *)GEN_TOP((uVar1 + 0x20))) != 1)) {
    **((int * PTR32 *)GEN_TOP((uVar1 + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if (iVar2 == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_007cb403;
    piVar3 = ((int *)GEN_TOP(F_00e83c50()));
    uVar5 = 1;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    uVar1 = F_00974740(this_00 GEN_EDX_ARG);
  }
  else {
    if (iVar2 != 1) goto LAB_007cb403;
    uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar1 == 0) goto LAB_007cb403;
    piVar3 = ((int *)GEN_TOP(F_00e83c50()));
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x74)));
    uVar5 = 1;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  }
  F_00a53b70(uVar1,uVar4,uVar5);
LAB_007cb403: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb420 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_007cb420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cb420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  undefined * pvVar1;
  int iVar2;
  undefined1 * puVar3;
  int * piVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if (iVar2 == 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x231a4))) + 0x61))) = 1;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x10bf7e0)),REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23184)));
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))()));
    F_00abefa0(pvVar1 GEN_EDX_ARG,puVar3,piVar4);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
  }
  else {
    if (iVar2 != 1) goto LAB_007cb4cc;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x231a4))) + 0x61))) = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10bf7f0)),REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23184)));
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))()));
    F_00abefa0(pvVar1 GEN_EDX_ARG,puVar3,piVar4);
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
  }
  F_0042c880(puVar3 GEN_EDX_ARG);
LAB_007cb4cc: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cb4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cb4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_2 & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = param_2[0xc];
  }
  uVar3 = 0;
  if ((iVar4 < *((int *)GEN_TOP(((int)this + 0x235bc)))) && (bVar2 != 0)) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x235bc))) - iVar4;
    iVar1 = *((int *)GEN_TOP(((int)this + iVar4 * 8 + 0x235b8)));
    if (iVar1 != -0x20000000) {
      uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,iVar1,*((undefined4 *)GEN_TOP(((int)this + iVar4 * 8 + 0x235bc))));
    }
  }
  F_00533b50(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar3);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cb560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_2 & 0xf;
  if (((uVar4 == 0) || (uVar3 = param_2[1], uVar3 != 0xe)) &&
     ((uVar4 == 0 ||
      ((uVar3 = param_2[1], uVar3 != 0x11 &&
       ((uVar4 == 0 ||
        ((uVar3 != 0x12 &&
         ((uVar4 == 0 ||
          ((uVar3 != 0x13 &&
           ((uVar4 == 0 ||
            ((uVar3 != 0xf &&
             ((uVar4 == 0 ||
              ((uVar3 != 0x10 &&
               ((uVar4 == 0 ||
                ((uVar3 != 0x15 &&
                 ((uVar4 == 0 ||
                  ((uVar3 != 0x14 &&
                   ((uVar4 == 0 ||
                    ((uVar3 != 0x17 &&
                     ((uVar4 == 0 || ((uVar3 != 0x18 && ((uVar4 == 0 || (uVar3 != 0x19))))))))))))))
                 )))))))))))))))))))))))))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x2326c)));
    if (param_3 < 4) {
      uVar3 = 0xffffffff;
    }
    else if ((param_2[6] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2[7];
    }
    if ((param_2[4] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[5];
    }
    if ((param_2[2] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2[3];
    }
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2[1];
    }
    *((uint *)GEN_TOP((iVar1 + 0x34))) = uVar5;
    *((uint *)GEN_TOP((iVar1 + 0x38))) = uVar3;
    *((uint *)GEN_TOP((iVar1 + 0x2c))) = uVar4;
    *((uint *)GEN_TOP((iVar1 + 0x30))) = uVar2;
    *((undefined1 *)GEN_TOP((iVar1 + 0x44))) = 1;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x23270)));
  if ((param_2[4] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_2[5];
  }
  if ((param_2[2] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2[3];
  }
  *((uint *)GEN_TOP((iVar1 + 0x14))) = uVar3;
  *((bool *)GEN_TOP((iVar1 + 0x24))) = -1 < (int)uVar4;
  *((uint *)GEN_TOP((iVar1 + 0x18))) = uVar5;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cb6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cb6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23230)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007cb6d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_007cb6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cb6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xe4, 12, 4);
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0));
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar4 = 0;
  ((byte *)(gen_frame + 0x6c))[0x18] = 2;
  ((byte *)(gen_frame + 0x6c))[0x19] = 0;
  ((byte *)(gen_frame + 0x6c))[0x1a] = 0;
  ((byte *)(gen_frame + 0x6c))[0x1b] = 0;
  ((byte *)(gen_frame + 0xc4))[4] = 2;
  ((byte *)(gen_frame + 0xc4))[5] = 0;
  ((byte *)(gen_frame + 0xc4))[6] = 0;
  ((byte *)(gen_frame + 0xc4))[7] = 0;
  ((byte *)(gen_frame + 0x6c))[8] = 2;
  ((byte *)(gen_frame + 0x6c))[9] = 0;
  ((byte *)(gen_frame + 0x6c))[10] = 0;
  ((byte *)(gen_frame + 0x6c))[0xb] = 0;
  ((byte *)(gen_frame + 0xc4))[0x10] = 2;
  ((byte *)(gen_frame + 0xc4))[0x11] = 0;
  ((byte *)(gen_frame + 0xc4))[0x12] = 0;
  ((byte *)(gen_frame + 0xc4))[0x13] = 0;
  ((undefined4 *)(gen_frame + 0x8c))[2] = 2;
  ((undefined4 *)(gen_frame + 0x8c))[9] = 2;
  ((byte *)(gen_frame + 0x6c))[0x10] = 0;
  ((byte *)(gen_frame + 0x6c))[0x11] = 0;
  ((byte *)(gen_frame + 0x6c))[0x12] = 0;
  ((byte *)(gen_frame + 0x6c))[0x13] = 0;
  ((byte *)(gen_frame + 0x6c))[0x14] = 1;
  ((byte *)(gen_frame + 0x6c))[0x15] = 0;
  ((byte *)(gen_frame + 0x6c))[0x16] = 0;
  ((byte *)(gen_frame + 0x6c))[0x17] = 0;
  ((byte *)(gen_frame + 0x6c))[0x1c] = 3;
  ((byte *)(gen_frame + 0x6c))[0x1d] = 0;
  ((byte *)(gen_frame + 0x6c))[0x1e] = 0;
  ((byte *)(gen_frame + 0x6c))[0x1f] = 0;
  ((byte *)(gen_frame + 0xc4))[0] = 0;
  ((byte *)(gen_frame + 0xc4))[1] = 0;
  ((byte *)(gen_frame + 0xc4))[2] = 0;
  ((byte *)(gen_frame + 0xc4))[3] = 0;
  ((byte *)(gen_frame + 0xc4))[8] = 3;
  ((byte *)(gen_frame + 0xc4))[9] = 0;
  ((byte *)(gen_frame + 0xc4))[10] = 0;
  ((byte *)(gen_frame + 0xc4))[0xb] = 0;
  ((byte *)(gen_frame + 0x6c))[0] = 0;
  ((byte *)(gen_frame + 0x6c))[1] = 0;
  ((byte *)(gen_frame + 0x6c))[2] = 0;
  ((byte *)(gen_frame + 0x6c))[3] = 0;
  ((byte *)(gen_frame + 0x6c))[4] = 1;
  ((byte *)(gen_frame + 0x6c))[5] = 0;
  ((byte *)(gen_frame + 0x6c))[6] = 0;
  ((byte *)(gen_frame + 0x6c))[7] = 0;
  ((byte *)(gen_frame + 0x6c))[0xc] = 3;
  ((byte *)(gen_frame + 0x6c))[0xd] = 0;
  ((byte *)(gen_frame + 0x6c))[0xe] = 0;
  ((byte *)(gen_frame + 0x6c))[0xf] = 0;
  ((byte *)(gen_frame + 0xc4))[0xc] = 0;
  ((byte *)(gen_frame + 0xc4))[0xd] = 0;
  ((byte *)(gen_frame + 0xc4))[0xe] = 0;
  ((byte *)(gen_frame + 0xc4))[0xf] = 0;
  ((byte *)(gen_frame + 0xc4))[0x14] = 3;
  ((byte *)(gen_frame + 0xc4))[0x15] = 0;
  ((byte *)(gen_frame + 0xc4))[0x16] = 0;
  ((byte *)(gen_frame + 0xc4))[0x17] = 0;
  ((undefined4 *)(gen_frame + 0x8c))[0] = 0;
  ((undefined4 *)(gen_frame + 0x8c))[1] = 1;
  ((undefined4 *)(gen_frame + 0x8c))[3] = 3;
  ((undefined4 *)(gen_frame + 0x8c))[4] = 4;
  ((undefined4 *)(gen_frame + 0x8c))[5] = 7;
  ((undefined4 *)(gen_frame + 0x8c))[6] = 8;
  ((undefined4 *)(gen_frame + 0x8c))[7] = 0;
  ((undefined4 *)(gen_frame + 0x8c))[8] = 1;
  ((undefined4 *)(gen_frame + 0x8c))[10] = 3;
  ((undefined4 *)(gen_frame + 0x8c))[0xb] = 4;
  ((undefined4 *)(gen_frame + 0x8c))[0xc] = 5;
  ((undefined4 *)(gen_frame + 0x8c))[0xd] = 6;
  ((undefined4 *)(gen_frame + 0x0))[0xe] = 0xf5;
  ((undefined4 *)(gen_frame + 0x0))[0xf] = 0xfa;
  ((undefined4 *)(gen_frame + 0x0))[0x10] = 0xfe;
  ((undefined4 *)(gen_frame + 0x0))[0x11] = 0x102;
  ((undefined4 *)(gen_frame + 0x0))[0x12] = 0x105;
  ((undefined4 *)(gen_frame + 0x0))[0x13] = 0x110;
  ((undefined4 *)(gen_frame + 0x0))[0x14] = 0x113;
  ((undefined4 *)(gen_frame + 0x0))[7] = 0x117;
  ((undefined4 *)(gen_frame + 0x0))[8] = 0x11b;
  ((undefined4 *)(gen_frame + 0x0))[9] = 0x11f;
  ((undefined4 *)(gen_frame + 0x0))[10] = 0x123;
  ((undefined4 *)(gen_frame + 0x0))[0xb] = 0x127;
  ((undefined4 *)(gen_frame + 0x0))[0xc] = 299;
  ((undefined4 *)(gen_frame + 0x0))[0xd] = 0x12f;
  ((undefined4 *)(gen_frame + 0x0))[0] = 0xf7;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0xfb;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0xff;
  ((undefined4 *)(gen_frame + 0x0))[3] = 0x104;
  ((undefined4 *)(gen_frame + 0x0))[4] = 0x106;
  ((undefined4 *)(gen_frame + 0x0))[5] = 0x112;
  ((undefined4 *)(gen_frame + 0x0))[6] = 0x114;
  ((undefined4 *)(gen_frame + 0x0))[0x15] = 0x118;
  ((undefined4 *)(gen_frame + 0x0))[0x16] = 0x11c;
  ((undefined4 *)(gen_frame + 0x0))[0x17] = 0x120;
  ((undefined4 *)(gen_frame + 0x0))[0x18] = 0x124;
  ((undefined4 *)(gen_frame + 0x0))[0x19] = 0x128;
  ((undefined4 *)(gen_frame + 0x0))[0x1a] = 300;
  *((undefined4 *)GEN_TOP(((int)this + 0x235a4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x235a8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x235ac))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x235b0))) = 0xffffffff;
  do {
    uVar2 = F_00414500(in_ecx GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x0)) + uVar4 + 0x38))));
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x14)));
    if (3 < uVar2) {
      uVar2 = 3;
    }
    bVar1 = (char)*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x8c)) + uVar4))) * '\x02';
    uVar4 = uVar4 + 4;
    *((uint *)GEN_TOP(((int)this + 0x235a4))) =
         (uint)*((byte *)GEN_TOP((((undefined4 *)(gen_frame + 0x8c)) + (uVar2 - 4)))) << GEN_SHC(bVar1, bVar1) |
         ~(3 << GEN_SHC(bVar1, bVar1)) & *((uint *)GEN_TOP(((int)this + 0x235a4)));
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x0)) + uVar4 + 0x1c))));
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x14)));
    if (2 < uVar2) {
      uVar2 = 2;
    }
    bVar1 = (char)*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x8c)) + uVar4 + 0x1c))) * '\x02';
    uVar4 = uVar4 + 4;
    *((uint *)GEN_TOP(((int)this + 0x235a8))) =
         (uint)((byte *)(gen_frame + 0xc4))[(int)(uVar2 * 4)] << GEN_SHC(bVar1, bVar1) |
         ~(3 << GEN_SHC(bVar1, bVar1)) & *((uint *)GEN_TOP(((int)this + 0x235a8)));
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x0)) + uVar4))));
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x14)));
    if (3 < uVar2) {
      uVar2 = 3;
    }
    bVar1 = (char)*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x8c)) + uVar4))) * '\x02';
    uVar4 = uVar4 + 4;
    *((uint *)GEN_TOP(((int)this + 0x235ac))) =
         (uint)((byte *)(gen_frame + 0x6c))[(int)(uVar2 * 4)] << GEN_SHC(bVar1, bVar1) |
         ~(3 << GEN_SHC(bVar1, bVar1)) & *((uint *)GEN_TOP(((int)this + 0x235ac)));
  } while (uVar4 < 0x1c);
  uVar4 = 0;
  do {
    uVar2 = F_00414500(in_ecx GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x0)) + uVar4 + 0x54))));
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x14)));
    if (2 < uVar2) {
      uVar2 = 2;
    }
    bVar1 = (char)*((undefined4 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0x8c)) + uVar4 + 0x1c))) * '\x02';
    uVar4 = uVar4 + 4;
    uVar3 = ~(3 << GEN_SHC(bVar1, bVar1)) & *((uint *)GEN_TOP(((int)this + 0x235b0)));
    *((uint *)GEN_TOP(((int)this + 0x235b0))) = (uint)((byte *)(gen_frame + 0xc4))[(int)(uVar2 * 4 + 0xc)] << GEN_SHC(bVar1, bVar1) | uVar3;
  } while (uVar4 < 0x18);
  *((undefined1 *)GEN_TOP(((int)this + 0x235bb))) = 1;
  return uVar3;
}

/* ref: FUN_007cb9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cb9f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cb9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x74);
  uVar1 = *((uint *)GEN_TOP((uVar1 + 0x14)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x235b4))) = 0;
  if (uVar1 == 0) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x235b4))) = 1;
  }
  return uVar1;
}

/* ref: FUN_007cba20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cba20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cba20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int in_ecx_00;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  in_ecx_00 = *((int *)GEN_TOP((in_ecx + 0x23214)));
  if (in_ecx_00 != 0) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x193);
    iVar2 = 100 - *((int *)GEN_TOP((uVar1 + 0x14)));
    fVar3 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    in_EAX = F_00773fc0(in_ecx_00 GEN_EDX_ARG,(float)(fVar3 / (float10)*(double *)&REFG(undefined, 0x1088118)));
  }
  return in_EAX;
}

/* ref: FUN_007cba80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007cba80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 in_ecx_00;
  char cVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  in_ecx_00 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar2 = F_00414500(in_ecx_00 GEN_EDX_FWD,0xf6);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((uVar2 + 0x14))))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  bVar5 = *((char *)GEN_TOP((in_ecx + 0x235b8))) == cVar1;
  if (!bVar5) {
    *((char *)GEN_TOP((in_ecx + 0x235b8))) = cVar1;
  }
  uVar2 = F_00414500(in_ecx_00 GEN_EDX_ARG,0x103);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((uVar2 + 0x14))))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  bVar6 = *((char *)GEN_TOP((in_ecx + 0x235b9))) == cVar1;
  if (!bVar6) {
    *((char *)GEN_TOP((in_ecx + 0x235b9))) = cVar1;
  }
  uVar2 = F_00414500(in_ecx_00 GEN_EDX_ARG,0x111);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((uVar2 + 0x14))))) {
  default: ;
    cVar1 = '\0';
    break;
  case 1: ;
    cVar1 = '\x01';
    break;
  case 2: ;
    cVar1 = '\x02';
    break;
  case 3: ;
    cVar1 = '\x03';
  }
  if (*((char *)GEN_TOP((in_ecx + 0x235ba))) == cVar1) {
    if (bVar6 && bVar5) {
      return 0;
    }
  }
  else {
    *((char *)GEN_TOP((in_ecx + 0x235ba))) = cVar1;
  }
  puVar3 = ((undefined1 *)GEN_TOP((in_ecx + 0x23917)));
  iVar4 = 0x32;
  do {
    *puVar3 = 1;
    puVar3 = puVar3 + 0x1d0;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_007cbb90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cbb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cbb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x2dba4))) == 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar1 = *((int *)GEN_TOP(((int)this + 0x2dba4))) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2331c))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00784150(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2331c))) GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 1: ;
  case 3: ;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23318))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_007840b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23318))) GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 2: ;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23314))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00784040(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23314))) GEN_EDX_ARG);
      return uVar1;
    }
    break;
  case 4: ;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23320))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_007841c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x23320))) GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_007cbc20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cbc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cbc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = *((int *)GEN_TOP(((int)this + 0x2dba4))) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2331c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2dba4))) = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
    break;
  case 1: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23318)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2dba4))) = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
    break;
  case 2: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23314)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2dba4))) = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
    break;
  case 3: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23318)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2dba4))) = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
    break;
  case 4: ;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x23320)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2dba4))) = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_007cbcf0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007cbcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cbcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x2dba4))) != 0) {
    F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (((*((int *)GEN_TOP(((int)this + 0x2dba4))) == 2) || (*((int *)GEN_TOP(((int)this + 0x2dba4))) == 4)) &&
       (iVar1 = *((int *)GEN_TOP(((int)this + 0x23318))), iVar1 != 0)) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))),0,0);
      return (byte)(uVar3 >> 1) & 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf14 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007cbd50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cbd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((char *)GEN_TOP((REFG(int, 0x1379860) + 0x21d))) == '\0') && (*((int *)GEN_TOP((in_ecx + 0xd4))) != 0)) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xd4))) + 0x1bc)));
  }
  return 0;
}

/* ref: FUN_007cbd80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cbd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cbd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = REFG(undefined * PTR32, 0x1328130);
  if (*((int *)GEN_TOP(((int)this + 0x200))) != 1) {
    puVar1 = REFG(undefined * PTR32, 0x132812c);
  }
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,puVar1)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x100))))(piVar2 GEN_EDX_ARG,0);
    if (uVar3 != 0) {
      F_005aa0f0(REFG(int, 0x1379860) + 0x20c GEN_EDX_ARG,0);
      *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
      if (*((char *)GEN_TOP((REFG(int, 0x1379860) + 0xbc))) != '\0') {
        F_005aa300(REFG(int, 0x1379860) + 0x3c GEN_EDX_ARG,1,0,9);
      }
      return 2;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007cbe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cbe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if (((((byte)this[0x1b0] & 8) != 0) && (iVar1 = (int)*((char *)GEN_TOP((param_1 + 0x10f))), 0 < iVar1)) &&
     (iVar1 < *(int *)(this + 0x1c8) - *(int *)(this + 0x1c4) >> 2)) {
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + iVar1 * 4))) = param_1;
  }
  return;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf26 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007cbe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cbe40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  if ((((((byte)this[0x1b0] & 8) != 0) && (iVar2 = (int)*((char *)GEN_TOP((param_1 + 0x10f))), 0 < iVar2)) &&
      (iVar1 = *(int *)(this + 0x1c4), iVar2 < *(int *)(this + 0x1c8) - iVar1 >> 2)) &&
     (*((int *)GEN_TOP((iVar1 + iVar2 * 4))) == param_1)) {
    *((undefined4 *)GEN_TOP((iVar1 + iVar2 * 4))) = 0;
  }
  return;
}

/* ref: FUN_007cbe90 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007cbe90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7cbe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)param_1 + 0x10f))) < '\x01') || (param_2 == '\0')) {
      if ((((((*((char *)GEN_TOP(((int)param_1 + 0x10f))) == '\0') && (param_2 == '\0')) &&
            ((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) != 0)) &&
           ((bVar1 = F_005b89f0(param_1 GEN_EDX_ARG), bVar1 != 0 &&
            (uVar2 = F_005c0800(param_1 GEN_EDX_ARG), (char)uVar2 != '\0')))) &&
          (((*(byte *)(param_1 + 0x3e) & 0x80) == 0 &&
           (((char)param_1[0x4f] == '\0' || ((*((byte *)GEN_TOP(((int)param_1 + 0xfb))) & 2) != 0)))))) &&
         (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG), (char)uVar2 == '\0')) {
        return 1;
      }
    }
    else if (((((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) != 0) &&
              ((bVar1 = F_005b89f0(param_1 GEN_EDX_ARG), bVar1 != 0 &&
               (uVar2 = F_005c0800(param_1 GEN_EDX_ARG), (char)uVar2 != '\0')))) &&
             (((char)param_1[0x4f] == '\0' || ((*((byte *)GEN_TOP(((int)param_1 + 0xfb))) & 2) != 0)))) &&
            (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG), (char)uVar2 == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007cbf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cbf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7cbf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0xbc))) != '\0') {
    F_005aa300((int)REFG(void * PTR32, 0x1379860) + 0x3c GEN_EDX_FWD,1,0,9);
  }
  F_0059b300(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0xa4))),param_2,0);
  if (param_1 != param_2) {
    F_00580230(this GEN_EDX_ARG,param_1,0);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = param_3;
  uVar1 = F_0043f8b0(0xd);
  return uVar1;
}

/* ref: FUN_007cbfd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cbfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cbfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 < (uint)(*((int *)GEN_TOP(((int)this + 0x1d8))) - *((int *)GEN_TOP(((int)this + 0x1d4))) >> 2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1d4))) + param_1 * 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x84))))(piVar1 GEN_EDX_FWD);
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf17 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_007c8b20(this_00 GEN_EDX_ARG,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_007cc050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_FWD,6,0);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  piVar1 = ((int *)GEN_TOP(F_00513d70(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),((char *)REFP(0x10bf870)),&(*(undefined4 *)(gen_frame + 0x0)),0,0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG);
  F_007629e0(this GEN_EDX_ARG,uVar2);
  F_0050c620(piVar1,0,0);
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 1;
  return 0;
}

/* ref: FUN_007cc100 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007cc100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007cc140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  return *((uint *)GEN_TOP((uVar1 + 0xc + param_1 * 4)));
}

/* ref: FUN_007cc180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0xc)));
  uVar2 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_007cc1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0xc)));
  uVar2 = param_1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
  }
  return uVar2;
}

/* ref: FUN_007cc1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc1d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10c3ed0));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[23])REFP(0x10d3d9c));
  in_ecx[3] = (*(undefined * PTR32 (*)[6])REFP(0x10d3d7c));
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x1e))) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *(undefined2 *)(in_ecx + 0xc) = 1;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cc220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pAVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar3 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043d010(this_00 GEN_EDX_ARG,pAVar3);
  return uVar2;
}

/* ref: FUN_007cc270 */
GEN_OWN GEN_NOFRAME unsigned int F_007cc270(void)
{
  GEN_ENTER(0x7cc270u, 0u, 0u, 0u, 0u);
  if ((REFG(void * PTR32, 0x1370b90) != ((undefined *)GEN_TOP(0x0))) && (REFG(int, 0x1328170) != -1)) {
    F_004dacc0(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,REFG(int, 0x1328170));
    REFG(int, 0x1328170) = -1;
    if (REFG(int, 0x148a114) != 0) {
      *((undefined1 *)GEN_TOP((REFG(int, 0x148a114) + 0x31))) = 1;
      REFG(int, 0x148a114) = 0;
    }
  }
  return;
}

/* ref: FUN_007cc2b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007cc2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7cc2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  if (*((char *)GEN_TOP(((int)this + 0x30))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 1;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    F_0043c630(this_00 GEN_EDX_ARG);
    F_007631c0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cc2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pAVar3;
  
  this[0x38] = (undefined1)0x1;
  F_007631c0(this GEN_EDX_FWD);
  if (*(int *)(this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 100),0);
  }
  piVar1 = *(int * PTR32 *)(this + 0x34);
  *(undefined4 *)(this + 100) = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar3 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043d010(this_00 GEN_EDX_ARG,pAVar3);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 AVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_007632d0((undefined *)this GEN_EDX_FWD,param_1);
  AVar1 = this[0x38];
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,2);
  *((undefined *)GEN_TOP((param_1 + 0x34))) = AVar1;
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x6c))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar4 == '\0') {
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x38))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  }
  else {
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x38))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 1;
  }
  AVar1 = this[0x44];
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x40))) GEN_EDX_ARG,2);
  *((undefined *)GEN_TOP((param_1 + 0x44))) = AVar1;
  uVar2 = *(undefined4 *)(this + 0x48);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x48))) GEN_EDX_ARG,3);
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x50);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x50))) GEN_EDX_ARG,3);
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x4c);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG,3);
  *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x54);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG,3);
  *((undefined4 *)GEN_TOP((param_1 + 100))) = uVar2;
  uVar4 = (uint)(char)this[0x18];
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = F_00764330(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 1: ;
    uVar4 = F_007646d0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 2: ;
    uVar4 = F_007649c0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 3: ;
    uVar4 = F_00765650(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 4: ;
    uVar4 = F_00765940(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 5: ;
    uVar4 = F_007659b0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 6: ;
    uVar4 = F_00765eb0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 8: ;
    uVar4 = F_00765f50(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 9: ;
    uVar4 = F_00766160(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 10: ;
    uVar4 = F_00766500(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 0xb: ;
    uVar4 = F_00766960(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 0xc: ;
    uVar4 = F_007669a0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 0xd: ;
    uVar4 = F_00766bc0(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 0xe: ;
    uVar4 = F_00766f40(this GEN_EDX_ARG,param_1);
    return uVar4;
  case 0xf: ;
    uVar4 = F_007673b0(this GEN_EDX_ARG,param_1);
  }
  return uVar4;
}

/* ref: FUN_007cc560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cc560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  if ((*param_1 & 0xf) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == -1) {
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
    }
    else if ((-1 < iVar1) && (iVar1 < 2)) goto LAB_007cc590;
    return (uint)param_1;
  }
LAB_007cc590: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if ((param_1[8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
  }
  if ((param_1[0x20] & 0xf) == 0) {
    param_1 = ((byte *)GEN_TOP(0x0));
  }
  else {
    param_1 = *(byte * PTR32 *)(param_1 + 0x24);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar3 = F_00762c60(uVar3 + 0x23538 GEN_EDX_ARG,2,uVar5,0);
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  uVar4 = uVar3 >> 0x10;
  uVar9 = 1;
  uVar8 = 1;
  uVar7 = 2;
  uVar4 = (((uVar4 ^ uVar3) & 0xff ^ uVar4) << 8 | uVar3 >> 8 & 0xff) << 8 | uVar4 & 0xff;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  bVar2 = F_00447870(uVar3 GEN_EDX_ARG,uVar6,uVar4,uVar7,uVar8,uVar9);
  if (*((char *)GEN_TOP(((int)this + 0x1c))) == '\0') {
    *((bool *)GEN_TOP(((int)this + 0x1c))) = bVar2 == 0;
  }
  if (param_1 == ((byte *)GEN_TOP(0x2))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    uVar3 = F_00762c60(uVar3 + 0x23538 GEN_EDX_ARG,3,uVar5,0);
    uVar4 = uVar3 >> 0x10;
    F_007633a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x60))),
                 (((uVar4 ^ uVar3) & 0xff ^ uVar4) << 8 | uVar3 >> 8 & 0xff) << 8 | uVar4 & 0xff);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xffffffff;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = 1;
  uVar3 = F_007631c0(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007cc6a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007cc6a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7cc6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a118) + param_1 * 4))) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,*(int *)(&REFG(undefined, 0x148a118) + param_1 * 4))
    ;
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x14)));
  }
  return uVar1 | 0xff000000;
}

/* ref: FUN_007cc6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x3a0, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 100))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x72;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_00767820(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP(((int)this + 0x74))));
    uVar1 = F_0043b840(uVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 100))),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar4 = 0x72;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_007cc7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cc7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cc7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x3ac, 4);
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  int * piVar6;
  int iVar7;
  code * pcVar8;
  uint uVar9;
  uint * this_01;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x3a4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3a8);
  if (*((int *)GEN_TOP(((int)this + 100))) == 0) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3a8);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  iVar7 = 0x72;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_005a2710(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,4);
  ((undefined4 *)(gen_frame + 0xc))[1] = 3;
  uVar11 = *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x110))) * 4 + 0x114)));
  F_005a2710(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG,4);
  iVar7 = *((int *)GEN_TOP(((int)this + 0x110)));
  (*(undefined4 *)(gen_frame + 0x130)) = uVar11;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (*((int *)GEN_TOP(((int)this + iVar7 * 4 + 0x114))) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x238));
    do {
      iVar4 = iVar7 * 0x20 + (*(uint *)(gen_frame + 0x0));
      iVar7 = iVar4 * 0x14;
      uVar11 = *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x148)));
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) |
                  (uint)(*((char *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + iVar4 * 0x14 + 0x13c))) + 0x78))) !=
                        '\0') << GEN_SHC((byte)(*(uint *)(gen_frame + 0x0)), (byte)(*(uint *)(gen_frame + 0x0)));
      F_005a2710(puVar3 - 0x41 GEN_EDX_ARG,6);
      puVar3[-0x40] = uVar11;
      uVar11 = *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x14c)));
      F_005a2710(puVar3 - 1 GEN_EDX_ARG,6);
      *puVar3 = uVar11;
      uVar5 = *((uint *)GEN_TOP(((int)this + iVar7 + 0x140)));
      uVar9 = 0;
      if ((uVar5 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a118) + uVar5 * 4))) {
        uVar5 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,
                             *(int *)(&REFG(undefined, 0x148a118) + uVar5 * 4));
        uVar9 = *((uint *)GEN_TOP((uVar5 + 0x14)));
      }
      F_005a2710(puVar3 - 0x83 GEN_EDX_ARG,4);
      iVar7 = *((int *)GEN_TOP(((int)this + 0x110)));
      puVar3[-0x82] = uVar9 | 0xff000000;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      puVar3 = puVar3 + 2;
    } while ((*(uint *)(gen_frame + 0x0)) < *((uint *)GEN_TOP(((int)this + iVar7 * 4 + 0x114))));
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,4);
  iVar7 = *((int *)GEN_TOP(((int)this + 0x74)));
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar12 = 0;
  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x4));
  uVar11 = 0;
  if (iVar7 == 1) {
    uVar10 = 0x1e85;
  }
  else {
    if (iVar7 != 2) {
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x18)));
      if (iVar7 == 3) {
        uVar10 = 0x1e87;
      }
      else {
        uVar10 = 0x1e84;
      }
      goto override_prt_7cc9a3_776d44d0;
    }
    uVar10 = 0x1e86;
  }
  pcVar8 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x18)));
override_prt_7cc9a3_776d44d0: ;
  this_00 = ((undefined *)GEN_TOP((*pcVar8)(piVar6)));
  uVar5 = F_0043bd00(this_00 GEN_EDX_ARG,uVar10,uVar11,uVar12);
  F_005a2710(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  uVar2 = F_0043b840(uVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,6);
  cVar1 = *((char *)GEN_TOP(((int)this + 0x70)));
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  F_005a2710(((undefined1 *)(gen_frame + 0x39c)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x3a0)) = (uint)(cVar1 != '\0');
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 100))),0x73,((undefined4 *)(gen_frame + 0xc)));
  this_01 = &(*(uint *)(gen_frame + 0x3a4));
  iVar7 = 0x72;
  do {
    this_01 = this_01 - 2;
    uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  return uVar2;
}

/* ref: FUN_007cca50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  if (param_1 < 4) {
    this_00 = ((undefined *)GEN_TOP(F_0045ca60(this_00 GEN_EDX_ARG,param_1)));
  }
  return (uint)this_00;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cca80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pAVar4;
  
  if (this[0xac] != (undefined1)0x0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00424cd0()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar2)) + 0x34))))(((int *)GEN_TOP(*puVar2)) GEN_EDX_ARG,((code *)REFP(0x768450)));
    this[0xac] = (undefined1)0x0;
  }
  if (*(int *)(this + 0x38) != -1) {
    if (REFG(void * PTR32, 0x1370b90) != ((undefined *)GEN_TOP(0x0))) {
      F_004dad10(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,*(int *)(this + 0x38));
    }
    *(undefined4 *)(this + 0x38) = 0xffffffff;
  }
  this[0x3c] = (undefined1)0x0;
  REFG(undefined1, 0x148a112) = 0;
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar1[0x82] == *(int *)(this + 8))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x34) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  pAVar4 = this + 0xc;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043d010(this_00 GEN_EDX_ARG,pAVar4);
  return uVar3;
}

/* ref: FUN_007ccb10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007ccb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7ccb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  if (REFG(int, 0x1370b90) != 0) {
    piVar3 = &REFG(undefined4, 0x13285c8);
    local_8 = 0;
    do {
      uVar2 = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x4c))) != 0) {
        piVar1 = ((int *)GEN_TOP(((int)this + 0x6668)));
        do {
          if ((*piVar1 == *piVar3) && (piVar1[1] == piVar3[1])) {
            *param_1 = *piVar1;
            *param_2 = piVar1[1];
            *param_3 = uVar2;
            return;
          }
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 2;
        } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x4c))));
      }
      local_8 = local_8 + 8;
      piVar3 = piVar3 + 2;
    } while (local_8 < 0x18);
    *param_1 = *((int *)GEN_TOP(((int)this + 0x6668)));
    *param_2 = *((int *)GEN_TOP(((int)this + 0x666c)));
    *param_3 = 0;
  }
  return;
}

/* ref: FUN_007ccbb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007ccbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ccbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *REFG(int * PTR32, 0x1488338);
  if (*((int *)GEN_TOP((iVar1 + 0x34))) != *((int *)GEN_TOP((iVar1 + 0x38)))) {
    uVar2 = 0;
    do {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x738 + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf988))[(int)(uVar2)] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x739 + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf98c))[(int)(uVar2)] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x73a + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf990))[(int)(uVar2)] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x73b + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf994))[(int)(uVar2)] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x73c + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf998))[(int)(uVar2)] * 4 + 0x782c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x73d + uVar2)))
           = *((undefined1 *)GEN_TOP(((int)this + (&REFG(undefined4, 0x10bf99c))[(int)(uVar2)] * 4 + 0x782c)));
      uVar2 = uVar2 + 6;
    } while (uVar2 < 0x18);
  }
  return 0;
}

/* ref: FUN_007cccc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cccc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cccc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  
  iVar1 = *REFG(int * PTR32, 0x1488338);
  if (*((int *)GEN_TOP((iVar1 + 0x34))) != *((int *)GEN_TOP((iVar1 + 0x38)))) {
    uVar2 = 0;
    puVar4 = ((undefined1 *)GEN_TOP(((int)this + 0x7890)));
    do {
      uVar2 = uVar2 + 6;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x732 + uVar2)))
           = puVar4[-4];
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x733 + uVar2)))
           = *puVar4;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x734 + uVar2)))
           = puVar4[4];
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x735 + uVar2)))
           = puVar4[8];
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x736 + uVar2)))
           = puVar4[0xc];
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74dc))) * 0x770 + *((int *)GEN_TOP((iVar1 + 0x34))) + 0x737 + uVar2)))
           = puVar4[0x10];
      puVar4 = puVar4 + 0x18;
    } while (uVar2 < 0x18);
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00424cd0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x18))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74d8))));
  *((undefined4 *)GEN_TOP(((int)this + 0x74dc))) = *((undefined4 *)GEN_TOP(((int)this + 0x74d8)));
  return uVar2;
}

/* ref: FUN_007ccdc0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007ccdc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7ccdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  
  if (REFG(int, 0x1370b90) != 0) {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4)));
    if (param_1 == 2) {
      F_0049c1f0(this GEN_EDX_ARG,2);
      return;
    }
    if (param_1 == 1) {
      F_0049b960(this GEN_EDX_ARG,param_2,param_3,param_4);
      return;
    }
    if (param_1 == 0) {
      F_0049c1f0(this GEN_EDX_ARG,0);
      F_0049b8f0(this GEN_EDX_ARG,param_2,param_3);
    }
  }
  return;
}

/* ref: FUN_007cce30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cce30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cce30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3dfc));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x193c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1940))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1944))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1948))),0,0x97);
  *((undefined4 *)GEN_TOP(((int)this + 0x19e0))) = 0;
  *(undefined4 *)&REFG(undefined, 0x148a2d8) = 0x153;
  *(undefined4 *)&REFG(undefined, 0x148a328) = 0x166;
  *(undefined4 *)&REFG(undefined, 0x148a2dc) = 0x154;
  *(undefined4 *)&REFG(undefined, 0x148a2e0) = 0x155;
  *(undefined4 *)&REFG(undefined, 0x148a2e8) = 0x156;
  *(undefined4 *)&REFG(undefined, 0x148a310) = 0x160;
  *(undefined4 *)&REFG(undefined, 0x148a2f0) = 0x158;
  *(undefined4 *)&REFG(undefined, 0x148a2f4) = 0x159;
  *(undefined4 *)&REFG(undefined, 0x148a2f8) = 0x15a;
  *(undefined4 *)&REFG(undefined, 0x148a2fc) = 0x15b;
  *(undefined4 *)&REFG(undefined, 0x148a300) = 0x15c;
  *(undefined4 *)&REFG(undefined, 0x148a304) = 0x15d;
  *(undefined4 *)&REFG(undefined, 0x148a308) = 0x15e;
  *(undefined4 *)&REFG(undefined, 0x148a30c) = 0x15f;
  *(undefined4 *)&REFG(undefined, 0x148a324) = 0x165;
  *(undefined4 *)&REFG(undefined, 0x148a320) = 0x164;
  *(undefined4 *)&REFG(undefined, 0x148a354) = 0x16a;
  *(undefined4 *)&REFG(undefined, 0x148a358) = 0x16b;
  *(undefined4 *)&REFG(undefined, 0x148a35c) = 0x16c;
  *(undefined4 *)&REFG(undefined, 0x148a360) = 0x16d;
  *(undefined4 *)&REFG(undefined, 0x148a364) = 0x16e;
  *(undefined4 *)&REFG(undefined, 0x148a368) = 0x16f;
  *(undefined4 *)&REFG(undefined, 0x148a36c) = 0x170;
  *(undefined4 *)&REFG(undefined, 0x148a390) = 0x171;
  *(undefined4 *)&REFG(undefined, 0x148a394) = 0x172;
  *(undefined4 *)&REFG(undefined, 0x148a398) = 0x174;
  *(undefined4 *)&REFG(undefined, 0x148a39c) = 0x175;
  *(undefined4 *)&REFG(undefined, 0x148a3a0) = 0x176;
  *(undefined4 *)&REFG(undefined, 0x148a3c4) = 0x173;
  *(undefined4 *)&REFG(undefined, 0x148a3a8) = 0x178;
  *(undefined4 *)&REFG(undefined, 0x148a3b0) = 0x179;
  *(undefined4 *)&REFG(undefined, 0x148a3b4) = 0x17a;
  *(undefined4 *)&REFG(undefined, 0x148a3b8) = 0x17b;
  *(undefined4 *)&REFG(undefined, 0x148a3bc) = 0x17c;
  *(undefined4 *)&REFG(undefined, 0x148a3a4) = 0x177;
  *(undefined4 *)&REFG(undefined, 0x148a3c0) = 0x177;
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
  return (uint)this;
}

/* ref: FUN_007cd010 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007cd010(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7cd010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0x65) && (0 < *(int *)(&REFG(undefined, 0x148a2b0) + param_1 * 4))) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,*(int *)(&REFG(undefined, 0x148a2b0) + param_1 * 4))
    ;
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x14)));
  }
  return uVar1 | 0xff000000;
}

/* ref: FUN_007cd050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cd050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cd050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  if (param_1 < 4) {
    this_00 = ((undefined *)GEN_TOP(F_0045ca60(this_00 GEN_EDX_ARG,param_1)));
  }
  return (uint)this_00;
}

/* ref: FUN_007cd080 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007cd080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007cd0c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cd0c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 in_ecx_00;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  in_ecx_00 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  puVar3 = ((uint *)GEN_TOP((in_ecx + 0x20)));
  iVar2 = 0x22;
  do {
    uVar1 = puVar3[-2];
    if ((uVar1 < 0x65) && (uVar1 = *(uint *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4), -1 < (int)uVar1)) {
      uVar1 = F_00414500(in_ecx_00 GEN_EDX_FWD,uVar1);
      *puVar3 = *((uint *)GEN_TOP((uVar1 + 0x14))) & 0xffffff;
    }
    else {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007cd110 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007cd110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7cd110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    F_0046a630(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return 1;
}

/* ref: FUN_007cd150 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007cd150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7cd150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*param_1 & 0xf) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == -1) goto LAB_007cd1b5;
    if (iVar2 < 0) {
      return 0;
    }
    if (1 < iVar2) {
      return 0;
    }
  }
  if ((param_1[8] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar1 = F_00762c60(uVar1 + 0x23538 GEN_EDX_ARG,1,uVar3,0);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10))) + 2;
  if (uVar1 != *((uint *)GEN_TOP(((int)this + iVar2 * 0x10)))) {
    *((uint *)GEN_TOP(((int)this + iVar2 * 0x10))) = uVar1;
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
    F_007690b0(this GEN_EDX_ARG);
  }
LAB_007cd1b5: ;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return 1;
}

/* ref: FUN_007cd1d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cd1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 in_ecx_00;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  
  in_ecx_00 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  puVar3 = ((uint *)GEN_TOP((in_ecx + 0x20)));
  iVar2 = 0x22;
  do {
    puVar1 = ((uint *)GEN_TOP(puVar3[-2]));
    if ((puVar1 < ((uint *)GEN_TOP(0x65))) &&
       (puVar1 = *(uint * PTR32 *)(&REFG(undefined, 0x148a2b0) + (int)((int)(uintptr_t)puVar1) * 4), -1 < (int)puVar1)) {
      puVar1 = ((uint *)GEN_TOP(F_00414500(in_ecx_00 GEN_EDX_FWD,puVar1)));
      *puVar3 = *puVar1 & 0xffffff;
    }
    else {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)puVar1;
}

/* ref: FUN_007cd220 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007cd220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_ecx;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_8;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  local_8 = 0x22;
  do {
    puVar4 = puVar5 - 2;
    iVar3 = 2;
    do {
      uVar1 = *puVar4;
      if (((-1 < (int)uVar1) && (uVar1 < 0x65)) && (-1 < *(int *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4))) {
        uVar6 = *puVar5;
        uVar7 = 1;
        pvVar2 = ((undefined *)GEN_TOP(F_00414500(in_ecx GEN_EDX_FWD,*(int *)(&REFG(undefined, 0x148a2b0) + uVar1 * 4))));
        F_00414a40(pvVar2 GEN_EDX_ARG,uVar6,uVar7);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    puVar5 = puVar5 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  F_00466080(pvVar2 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  iVar3 = 0;
  do {
    F_0045ca60(pvVar2 GEN_EDX_ARG,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  F_007690b0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007cd2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cd2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7cd2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  undefined * PTR32 * ppuVar7;
  
  pcVar5 = (*(char * PTR32 *)&gen_args[0]);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x154)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x150)));
  if (iVar3 != 0) {
    pcVar1 = (*(char * PTR32 *)&gen_args[0]) + iVar3 * 2;
    (*(char * PTR32 *)&gen_args[0]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[0]), 1, 3),*pcVar1)));
    if (*pcVar1 == '\0') {
      ppuVar7 = &REFG(undefined * PTR32, 0x12fd328);
    }
    else {
      ppuVar7 = ((undefined * PTR32 *)GEN_TOP(F_00769260(this GEN_EDX_FWD,pcVar5[iVar3 * 2 + 1],(*(char * PTR32 *)&gen_args[0]))));
    }
    uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 2) * 0x54 + *((int *)GEN_TOP(((int)this + 0x3c)))))) GEN_EDX_ARG,ppuVar7);
    return uVar6;
  }
  cVar2 = *(*(char * PTR32 *)&gen_args[0]);
  (*(char * PTR32 *)&gen_args[0]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[0]), 1, 3),cVar2)));
  if (cVar2 != '\0') {
    uVar6 = F_00769260(this GEN_EDX_ARG,pcVar5[1],(*(char * PTR32 *)&gen_args[0]));
    uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 1) * 0x54 + *((int *)GEN_TOP(((int)this + 0x3c)))))) GEN_EDX_ARG,uVar6);
    return uVar6;
  }
  uVar6 = F_0042ccf0(((undefined *)GEN_TOP(((iVar4 * 3 + 1) * 0x54 + *((int *)GEN_TOP(((int)this + 0x3c)))))) GEN_EDX_ARG,
                       &REFG(undefined * PTR32, 0x12fd328));
  return uVar6;
}

/* ref: FUN_007cd380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cd380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7cd380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int in_ecx;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3e44));
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  in_ecx = (int)this + 0x84;
  iVar1 = 0xd;
  do {
    F_0042b630(in_ecx GEN_EDX_FWD);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x14))),0,0x38);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x4c))),0,0x38);
  return (uint)this;
}

/* ref: FUN_007cd3e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007cd3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3e44));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x51c)));
  iVar3 = 0xd;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
    uVar4 = F_0042c880(this_00 GEN_EDX_FWD);
    uVar2 = (uint)uVar4;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007cd440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cd440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7cd440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * puVar4;
  
  this_00 = ((undefined *)GEN_TOP((param_1 + 0x80 + param_2 * 8)));
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  param_2 = 0xe;
  do {
    uVar2 = *puVar4;
    F_005a2710(this_00 GEN_EDX_FWD,3);
    *((undefined4 *)GEN_TOP(((int)this_00 + 4))) = uVar2;
    puVar4 = puVar4 + 1;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  cVar1 = *((char *)GEN_TOP(((int)this + 0xc)));
  uVar3 = F_005a2710(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0xc))) = (uint)(cVar1 != '\0');
  return uVar3;
}

/* ref: FUN_007cd4a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007cd4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  undefined4 uVar6;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar6 = 0;
    uVar1 = F_00404270();
    piVar2 = ((int *)GEN_TOP(F_00406c00(0xf4,0,uVar1,uVar6)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      piVar5 = piVar2 + 1;
      *piVar2 = 0x1e;
      iVar4 = 0x1d;
      piVar3 = piVar5;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_005a2710(piVar5 GEN_EDX_ARG,3);
        piVar2[2] = 0;
        F_007cd440(this GEN_EDX_ARG,piVar5,0);
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x1e,piVar5);
        iVar4 = *piVar2;
        piVar5 = piVar5 + iVar4 * 2;
        while (iVar4 = iVar4 - 1, -1 < iVar4) {
          piVar5 = piVar5 - 2;
          F_005a2670(piVar5 GEN_EDX_ARG);
        }
        F_00406b30(piVar2);
      }
    }
  }
  return;
}

/* ref: FUN_007cd570 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007cd570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  iVar6 = 0;
  piVar4 = ((int *)GEN_TOP(((int)this + 0x4c)));
  do {
    uVar1 = F_00447ed0(this_00 GEN_EDX_ARG,iVar6);
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar5 = *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10bfb4c) + uVar3))) + iVar2;
      if ((int)uVar1 < iVar5) {
        iVar2 = uVar1 - iVar2;
        goto LAB_007cd5b8;
      }
      uVar3 = uVar3 + 4;
      iVar2 = iVar5;
    } while (uVar3 < 0x14);
    iVar2 = 0;
LAB_007cd5b8: ;
    *piVar4 = iVar2;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
    if (0xd < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007cd5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007cd5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cd5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  iVar6 = 0;
  piVar4 = ((int *)GEN_TOP(((int)this + 0x4c)));
  do {
    uVar1 = F_0043d160(iVar6);
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar5 = *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10bfb4c) + uVar3))) + iVar2;
      if ((int)uVar1 < iVar5) {
        iVar2 = uVar1 - iVar2;
        goto LAB_007cd618;
      }
      uVar3 = uVar3 + 4;
      iVar2 = iVar5;
    } while (uVar3 < 0x14);
    iVar2 = 0;
LAB_007cd618: ;
    *piVar4 = iVar2;
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
    if (0xd < iVar6) {
      *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 1;
      return (uint)this;
    }
  } while( true );
}

