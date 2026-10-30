#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079ac90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ac90u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079acd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x79acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  uVar2 = uVar1 - 6;
  if (uVar2 < 0x20) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x79ade0) + uVar1 + 2)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_FWD,param_2,param_3,param_4);
      return uVar1;
    case 7: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x114))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      break;
    case 0x17: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x20: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x21: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x24: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x25: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf62 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf63 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf64 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf65 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf66 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf67 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf68 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf69 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079ae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79ae90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  undefined2 extraout_var = 0;
  
  F_0055e1c0(this GEN_EDX_FWD,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e220(this GEN_EDX_ARG,(float)(float10)0,0,0,(float)(float10)1,0);
  return CONCAT22(extraout_var,uVar1);
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079aed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79aed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x14))) GEN_EDX_ARG,(uint)(byte)AVar1)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x8c))))(piVar4 GEN_EDX_ARG);
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079af20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79af20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP((uVar3 + 0xe8)));
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP((uVar3 + 0xd8)));
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 2 + 1;
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + (param_1 * 3 + 3) * 4))),0,*param_2)
    ;
    pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[1] GEN_EDX_ARG)));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar1 * 4))));
    }
    pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_ARG)));
    uVar5 = 0;
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + iVar1 * 4))));
    }
  }
  return uVar5;
}

/* ref: FUN_0079afc0 */
GEN_OWN GEN_FRAME uint F_0079afc0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x79afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 0xac)));
  uVar3 = param_1;
  if ((*((int *)GEN_TOP((param_1 + 0xbc))) != 0) && (iVar1 != 0)) {
    F_0059d670(((undefined *)GEN_TOP(*param_4)) GEN_EDX_ARG,
                 *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xbc))) + 0x20))) + 8 + param_3 * 4))) + param_5);
    pvVar2 = ((undefined *)GEN_TOP(F_00559ba0(param_4[1] GEN_EDX_ARG)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + param_3 * 8))));
    }
    pvVar2 = ((undefined *)GEN_TOP(F_00559ba0(param_4[2] GEN_EDX_ARG)));
    uVar3 = 0;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00584110(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 4 + param_3 * 8))));
    }
  }
  return uVar3;
}

/* ref: FUN_0079b040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079b040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[72])REFP(0x10c91dc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b0c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x79b0c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) != 0) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x188))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x188))) GEN_EDX_FWD),
     uVar2 != 0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
    if ((*((int *)GEN_TOP((uVar3 + 0xe8))) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xe8))) + 0x20))) + 0x870))),
       *((int *)GEN_TOP((param_1 + 0x1b0))) != iVar1)) {
      uVar3 = 0;
      *((int *)GEN_TOP((param_1 + 0x1b0))) = iVar1;
      if (uVar2 != 0) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x188))) + 0x6c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x188))) GEN_EDX_ARG,uVar3,0,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
    }
  }
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079b150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c19b0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79b160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined4 uVar8;
  undefined3 extraout_var_00 = 0;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0xe8)));
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x20)));
  iVar3 = *((int *)GEN_TOP((param_2 + 0xd8)));
  if (*piVar2 == 0) {
    F_0059ead0(*(undefined4 *)(this + 0x188) GEN_EDX_FWD,0,0,1);
    F_0059ead0(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,0,0,1);
    F_0059d670(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,*(undefined4 *)(this + 0x19c));
    F_0059d670(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*(undefined4 *)(this + 0x1a8));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG);
    return uVar6;
  }
  iVar4 = piVar2[1];
  if (iVar4 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1a0);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x198);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar8);
  F_0059ead0(*(undefined4 *)(this + 0x188) GEN_EDX_ARG,iVar4,0,1);
  F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((iVar3 + 0x20))));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x2c)));
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1ac);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x1a4);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar8);
  F_0059ead0(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,iVar1,0,1);
  uVar6 = F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) + 0x1c))));
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      uVar6 = F_0055dcb0();
      uVar6 = F_0055b9e0(uVar6 GEN_EDX_ARG);
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
      if (uVar6 != uVar7) {
        uVar8 = 0;
        if (*(int *)(this + 0x18c) != 0) {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
        }
        bVar5 = F_005612e0(uVar8,uVar6);
        if (bVar5 == 0) {
          return CONCAT31(extraout_var_00,bVar5);
        }
      }
      uVar6 = F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x188),1,0);
    }
    return uVar6;
  }
  if (iVar1 == 0) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG);
    return uVar6;
  }
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9e0(uVar6 GEN_EDX_ARG);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  if (uVar6 != uVar7) {
    uVar8 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar5 = F_005612e0(uVar8,uVar6);
    if (bVar5 == 0) {
      return CONCAT31(extraout_var,bVar5);
    }
  }
  uVar6 = F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18c),1,0);
  return uVar6;
}

/* ref: FUN_0079b340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79b340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  this_01 = (gen_frame + 0x10);
  if (param_1 == 1) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this_01 = this_01 - 8;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0xc)) = param_2;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar2 = 1;
      do {
        this_00 = this_00 - 8;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar2 = iVar2 - 1;
      } while (-1 < iVar2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0079b400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79b400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP((uVar3 + 0xe8)));
  if (uVar3 != 0) {
    if (param_1 == 1) {
      sVar4 = *((short *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 8 + param_2 * 0xc)));
    }
    else {
      if (param_1 != 2) {
        return uVar3;
      }
      sVar4 = *((short *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + (param_2 * 3 + 0xc) * 4)));
    }
    if (-1 < sVar4) {
      F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
      uVar2 = *((undefined4 *)GEN_TOP((param_3 + 0x1e4)));
      (*(int *)(gen_frame + 0x4)) = (int)sVar4;
      (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,8,(uint)bVar1,uVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf71 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079b4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x79b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  if (uVar3 != uVar4) {
    uVar5 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar2 = F_005612e0(uVar5,uVar3);
    if ((bVar2 == 0) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG),
       uVar3 != uVar4)) {
      uVar5 = 0;
      if (*(int *)(this + 0x18c) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      bVar2 = F_005612e0(uVar5,uVar3);
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
  }
  AVar1 = this[0x13c];
  uVar3 = F_0055dcb0();
  piVar6 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x14))) GEN_EDX_ARG,(uint)(byte)AVar1)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x8c))))
                    (piVar6 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: FUN_0079b560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79b560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP((uVar2 + 0xe8)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar2 = *((uint *)GEN_TOP((uVar2 + 0xd8)));
  if ((iVar1 != 0) && (uVar2 != 0)) {
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x34 + param_1 * 0xc))),0,*param_2);
    pvVar3 = ((undefined *)GEN_TOP(F_00559ba0(param_2[1] GEN_EDX_ARG)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x20 + param_1 * 8))));
    }
    pvVar3 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_ARG)));
    uVar2 = 0;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00584110(pvVar3 GEN_EDX_ARG,"");
    }
  }
  return uVar2;
}

/* ref: FUN_0079b600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079b600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9304));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079b650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c19c4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79b660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xbc)));
  if ((uVar1 != 0) && (*((int *)GEN_TOP((param_2 + 0xac))) != 0)) {
    if (**((int * PTR32 *)GEN_TOP((uVar1 + 0x20))) != 0) {
      uVar1 = (*((int * PTR32 *)GEN_TOP((uVar1 + 0x20))))[1];
      if (100 < uVar1) {
        uVar1 = 100;
      }
      uVar1 = F_0058d980(*(undefined4 *)(this + 0x180) GEN_EDX_FWD,uVar1);
      return uVar1;
    }
    uVar1 = F_0059ead0(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,0,0,1);
  }
  return uVar1;
}

/* ref: FUN_0079b6c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079b6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 100) && (this_00 = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_FWD,4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar3 + 0xac))) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xac))) + 0x20))) + param_1 * 8)));
      bVar2 = F_00584440(this_00 GEN_EDX_ARG,uVar1);
      if (bVar2 != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        bVar2 = *((byte *)GEN_TOP(((int)this + 0x13a)));
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP(((int)param_2 + 0x1e4)));
        uVar3 = F_0055dcb0();
        F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,2,(uint)bVar2,uVar1,((undefined4 *)(gen_frame + 0x0)),0,0);
      }
    }
  }
  return;
}

/* ref: FUN_0079b770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79b770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x65;
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9a0(uVar1 GEN_EDX_ARG);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  uVar1 = F_0079afc0(uVar2,uVar1,param_1,param_2,uVar3);
  return uVar1;
}

/* ref: FUN_0079b7b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079b7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  F_0042b630((int)this + 0x1c0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x214 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  return (uint)this;
}

/* ref: FUN_0079b850 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079b850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x214))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079b890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c19d8)),0,6);
  return bVar1;
}

/* ref: FUN_0079b8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79b8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 400)));
  do {
    uVar1 = F_0059dde0(*puVar3 GEN_EDX_FWD,iVar2 == param_1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 3);
  return uVar1;
}

/* ref: FUN_0079b8f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1 == 0) {
    uVar2 = 0xa2f;
  }
  else {
    if (param_1 != 1) {
      uVar1 = 0x11;
      goto LAB_0079b91d;
    }
    uVar2 = 0xa30;
  }
  uVar1 = 0x65;
LAB_0079b91d: ;
  F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD,uVar1);
  F_005842a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_ARG,uVar2);
  return;
}

/* ref: FUN_0079b940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79b940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  char * pcVar7;
  
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP((uVar4 + 0x9c)));
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
  uVar4 = *((uint *)GEN_TOP((uVar4 + 0x90)));
  if ((iVar1 != 0) && (uVar4 != 0)) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + param_1 * 0x20)));
    F_005951c0(param_3 GEN_EDX_ARG,iVar2,0,param_2[1]);
    F_0055a300(param_2[1] GEN_EDX_ARG,0 < iVar2);
    pvVar5 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_ARG)));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(pvVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + param_1 * 0x14))));
      uVar6 = F_005612d0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x10 + param_1 * 0x20))));
      F_0055aa30(pvVar5 GEN_EDX_ARG,uVar6);
    }
    F_0059d670(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG,0x65);
    F_0055a300(param_2[3] GEN_EDX_ARG,
                 (byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x1c + param_1 * 0x20))) >> 5) & 1);
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 8 + param_1 * 0x20)));
    F_005951c0(param_3 GEN_EDX_ARG,iVar2,0,param_2[4]);
    F_0055a300(param_2[4] GEN_EDX_ARG,0 < iVar2);
    pvVar5 = ((undefined *)GEN_TOP(F_00559ba0(param_2[5] GEN_EDX_ARG)));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 4 + param_1 * 0x20)));
      if (iVar2 < 1) {
        F_00584110(pvVar5 GEN_EDX_ARG,"");
      }
      else {
        F_0057eb30(pvVar5 GEN_EDX_ARG,iVar2,0,0,0,0);
      }
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0xc + param_1 * 0x20)));
    F_005951c0(param_3 GEN_EDX_ARG,iVar2,0,param_2[6]);
    F_0055a300(param_2[6] GEN_EDX_ARG,0 < iVar2);
    pvVar5 = ((undefined *)GEN_TOP(F_00559ba0(param_2[8] GEN_EDX_ARG)));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      F_005842e0(pvVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 4 + param_1 * 0x14))),0);
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x1910 + param_1 * 4)));
    F_0059d670(((undefined *)GEN_TOP(param_2[9])) GEN_EDX_ARG,iVar2 + 0x65);
    pvVar5 = ((undefined *)GEN_TOP(F_00559ba0(param_2[10] GEN_EDX_ARG)));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar4 + 0xa0))) == 0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = *((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0xa0))) + 0x20))) + iVar2 * 4)));
      }
      F_00584110(pvVar5 GEN_EDX_ARG,pcVar7);
    }
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x14 + param_1 * 0x20)));
    bVar3 = (byte)iVar1;
    F_0055a300(param_2[0xc] GEN_EDX_ARG,bVar3 & 1);
    F_0055a300(param_2[0xd] GEN_EDX_ARG,bVar3 >> 1 & 1);
    F_0055a300(param_2[0xe] GEN_EDX_ARG,bVar3 >> 2 & 1);
    F_0055a300(param_2[0xf] GEN_EDX_ARG,bVar3 >> 3 & 1);
    uVar4 = iVar1 >> 0x10 & 0xffff;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = F_0059d670(((undefined *)GEN_TOP(param_2[0xb])) GEN_EDX_ARG,0x65);
      return uVar4;
    case 1: ;
      uVar4 = F_0059d670(((undefined *)GEN_TOP(param_2[0xb])) GEN_EDX_ARG,0x66);
      return uVar4;
    case 2: ;
      uVar4 = F_0059d670(((undefined *)GEN_TOP(param_2[0xb])) GEN_EDX_ARG,0x67);
      return uVar4;
    case 3: ;
      uVar4 = F_0059d670(((undefined *)GEN_TOP(param_2[0xb])) GEN_EDX_ARG,0x68);
      return uVar4;
    case 4: ;
    case 5: ;
      uVar4 = F_0059d670(((undefined *)GEN_TOP(param_2[0xb])) GEN_EDX_ARG,0x69);
    }
  }
  return uVar4;
}

/* ref: FUN_0079bc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79bc10u, gen_a0, gen_a1, gen_a2, 0u);
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
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
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

/* ref: FUN_0079bc90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079bc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79bc90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  byte * pbVar6;
  byte * pbVar7;
  
  if ((param_1 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)param_1 + 0x1e4))) != 0)) {
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP((uVar5 + 0x9c)));
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b9a0(uVar5 GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP((uVar5 + 0x90)));
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1e4))) + 4)));
      if (iVar1 == 6) {
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0xc + param_2 * 0x14)));
      }
      else {
        if (iVar1 == 0x10) {
          pbVar6 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x10 + param_2 * 0x14)));
          if (pbVar6 == ((byte *)GEN_TOP(0x0))) {
            return;
          }
          bVar4 = *pbVar6;
        }
        else {
          if (iVar1 != 0x13) {
            return;
          }
          pbVar6 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 4 + param_2 * 0x14)));
          pbVar7 = pbVar6;
          this_00 = ((undefined *)GEN_TOP(F_00561530(param_1 GEN_EDX_ARG,0x12)));
          bVar4 = F_00584440(this_00 GEN_EDX_ARG,pbVar7);
        }
        if (bVar4 == 0) {
          return;
        }
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = pbVar6;
      }
      uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1e4)));
      bVar4 = *((byte *)GEN_TOP(((int)this + 0x13a)));
      uVar5 = F_0055dcb0();
      F_00588780(uVar5 + 0xe0 GEN_EDX_ARG,2,(uint)bVar4,uVar3,((byte * PTR32 *)(gen_frame + 0x0)),0,0);
    }
  }
  return;
}

/* ref: FUN_0079bd90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079bd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79bd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1e4))) != ((undefined *)GEN_TOP(0x0)))) {
    uVar2 = F_00568410(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1e4))) GEN_EDX_FWD);
    if ((uVar2 != 6) &&
       ((uVar2 = F_00568410(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1e4))) GEN_EDX_ARG), uVar2 != 0x10 &&
        (uVar2 = F_00568410(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1e4))) GEN_EDX_ARG), uVar2 != 0x13)))) {
      return;
    }
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
    uVar2 = F_0055dcb0();
    F_00596cb0(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,(uint)bVar1,0);
  }
  return;
}

/* ref: FUN_0079be00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079be00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79be00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x1a4))) != 0) {
    F_00560760(((uint *)(gen_frame + 0x0)) GEN_EDX_FWD);
    uVar3 = F_0042a990((int)this + 0x1c0 GEN_EDX_ARG);
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
    ((uint *)(gen_frame + 0x0))[0] = uVar3;
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1a4))) + 0x68)));
    uVar3 = F_0055dcb0();
    F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,2,(uint)bVar1,uVar2,((uint *)(gen_frame + 0x0)),0,0);
  }
  return;
}

/* ref: FUN_0079be80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079be80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79be80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
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

/* ref: FUN_0079bf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79bf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  F_0056b780(this GEN_EDX_FWD,0);
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1a4))) + 0x88))) == '\0') {
    if (1 < *((byte *)GEN_TOP(((int)this + 0x1b6)))) {
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ad0,7,0,9,0,0);
      return CONCAT31(extraout_var_01,bVar1);
    }
    bVar1 = F_0056b630(this GEN_EDX_ARG,0x18aba,7,0,9,0,0);
    return CONCAT31(extraout_var_02,bVar1);
  }
  if (1 < *((byte *)GEN_TOP(((int)this + 0x1b6)))) {
    bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ad1,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this GEN_EDX_ARG,0x18abb,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_0079bf80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079bf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79bf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9544));
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079c030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c19ec)),0,6);
  return bVar1;
}

/* ref: FUN_0079c040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x20));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x20));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c160(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x79c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  if (param_3 < 0x10) {
    if (param_2 == '\0') {
      if ((param_4 != '\0') || (*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 400))) + 0xc0))) == param_3)) {
LAB_0079c204: ;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
        bVar1 = *((byte *)GEN_TOP(((int)param_1 + param_3 + 0x1a0)));
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
        (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
        F_005a9110(param_1 GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
        puVar3 = &(*(uint *)(gen_frame + 0x20));
        iVar4 = 3;
        do {
          puVar3 = puVar3 - 2;
          uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
        return uVar2;
      }
    }
    else if (param_2 == '\x01') goto LAB_0079c204;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    bVar1 = *((byte *)GEN_TOP(((int)param_1 + param_3 + 0x1a0)));
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a9110(param_1 GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x20));
    iVar4 = 3;
    do {
      puVar3 = puVar3 - 2;
      uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar2;
}

/* ref: FUN_0079c270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79c270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  if (param_1 < 0x10) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x14)) = (int)(short)((short)uVar2 + (short)uVar3);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    bVar1 = *((byte *)GEN_TOP(((int)this + param_1 + 0x1a0)));
    (*(int *)(gen_frame + 0x1c)) = (int)(short)uVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x20));
    iVar5 = 3;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  return uVar2;
}

/* ref: FUN_0079c350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x20));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x20));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79c430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP((uVar2 + 0xb0)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar2 = *((uint *)GEN_TOP((uVar2 + 0xa0)));
  if ((iVar1 != 0) && (uVar2 != 0)) {
    uVar4 = (uint)*((byte *)GEN_TOP((param_1 + 0x1a0 + (int)this)));
    F_0059d670(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG,*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + uVar4 * 0xc))) + 0x65);
    uVar3 = F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (uVar3 != 0) {
      F_0057eb30(uVar3 GEN_EDX_ARG,*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 4 + uVar4 * 0xc))) + 1,0,0,0,0);
    }
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_ARG)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + uVar4 * 4))));
    }
    uVar3 = F_00559ba0(param_2[3] GEN_EDX_ARG);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_0057eb30(uVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 8 + uVar4 * 0xc))),0,0,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_0079c510 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079c510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9664));
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c19fc)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079c620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79c620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined1 AVar1;
  undefined * this_00;
  undefined * pAVar2;
  uint uVar3;
  
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
    return 1;
  }
  if (param_1 < 1) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    AVar1 = (undefined1)0x0;
  }
  else {
    AVar1 = SUB41(*(undefined4 *)(param_2 + 4),0);
  }
  this[0x1e8] = AVar1;
  if (AVar1 == (undefined1)0x0) {
    F_0059d6a0(this GEN_EDX_FWD,0x65,1,0);
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0x65);
    this_00 = *(undefined * PTR32 *)(this + 400);
  }
  else {
    if (AVar1 != (undefined1)0x1) {
      if (AVar1 == (undefined1)0x2) {
        F_0059d6a0(this GEN_EDX_ARG,0x67,1,0);
      }
      else {
        this[0x1e8] = (undefined1)0x0;
        F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
      }
      goto LAB_0079c6a8;
    }
    F_0059d6a0(this GEN_EDX_ARG,0x66,1,0);
    this_00 = *(undefined * PTR32 *)(this + 0x194);
  }
  F_0059d670(this_00 GEN_EDX_ARG,0x65);
LAB_0079c6a8: ;
  uVar3 = 0;
  pAVar2 = this + 0x180;
  do {
    if (*(int *)pAVar2 != 0) {
      F_0059dde0(*(int *)pAVar2 GEN_EDX_ARG,uVar3 == (byte)this[0x1e8]);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while ((int)uVar3 < 3);
  F_0059b3f0(this GEN_EDX_ARG,1,1);
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79c6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined * pAVar9;
  undefined4 uVar10;
  int local_8;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc4)));
  uVar6 = **((uint * PTR32 *)GEN_TOP((iVar1 + 0x20)));
  iVar2 = *((int *)GEN_TOP((param_2 + 0xb4)));
  if ((uVar6 & 1) == 0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_FWD,0x65);
  }
  else {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0x11);
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 4)));
    local_8 = 0;
    param_2 = 0;
    iVar7 = 8;
    pAVar9 = this + 0x1a0;
    do {
      if (local_8 == iVar3) {
        uVar10 = 0x66;
      }
      else {
        uVar10 = 0x65;
      }
      F_0059d670(*(undefined * PTR32 *)(pAVar9 - 8) GEN_EDX_ARG,uVar10);
      F_00591c00(*(undefined * PTR32 *)(pAVar9 - 4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + iVar7))),0);
      F_00584110(*(undefined * PTR32 *)pAVar9 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + *((int *)GEN_TOP((iVar2 + 0x20)))))));
      F_00568230(*(undefined4 *)(pAVar9 + 4) GEN_EDX_ARG,
                   ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 8 + iVar7))) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8)))));
      F_00584110(*(undefined * PTR32 *)(pAVar9 + 8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 4 + *((int *)GEN_TOP((iVar2 + 0x20)))))));
      param_2 = param_2 + 8;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0xc;
      pAVar9 = pAVar9 + 0x14;
    } while (local_8 < 3);
    F_00584110(*(undefined * PTR32 *)(this + 0x1d4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x18))));
  }
  if ((uVar6 & 2) == 0) {
    uVar10 = 0x65;
  }
  else {
    pcVar4 = *((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1c)));
    if ((pcVar4 != ((char *)GEN_TOP(0x0))) && (*pcVar4 != '\0')) {
      F_0059d670(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,0x11);
      F_00584110(*(undefined * PTR32 *)(this + 0x1d8) GEN_EDX_ARG,pcVar4);
      goto LAB_0079c842;
    }
    uVar10 = 0x66;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,uVar10);
LAB_0079c842: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x28))))
            (*(int * PTR32 *)(this + 0x1dc) GEN_EDX_ARG,(uint)(0 < *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x3c)))));
  *(undefined4 *)(this + 0x1e4) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x2c)));
  if ((uVar6 & 4) == 0) {
    uVar6 = F_0059d670(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,0x65);
  }
  else {
    F_0059d670(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,0x11);
    uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x40)));
    uVar6 = F_0059ead0(*(undefined4 *)(this + 0x1e0) GEN_EDX_ARG,uVar5,0,1);
    uVar8 = 0;
    if (uVar5 != 0) {
      param_1 = 0x4c;
      do {
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x54))))
                          (*(undefined4 *)(this + 0x1e0),uVar8,
                           (uint)(*((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar1 + 0x20)))))) == 1));
        param_1 = param_1 + 0xc;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      return uVar6;
    }
  }
  return uVar6;
}

/* ref: FUN_0079c900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c900(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x79c900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this;
  int iVar2;
  
  this = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = (uint)param_2;
  F_005a9110(param_1 GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this = this - 8;
    uVar1 = F_005a2670(this GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79c960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079c9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP((uVar3 + 0xc4)));
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP((uVar3 + 0xb4)));
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 2 + 0xc;
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x44 + param_1 * 0xc))),0,*param_2);
    pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[1] GEN_EDX_ARG)));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + iVar1 * 4))));
    }
    pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_ARG)));
    uVar5 = 0;
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 4 + iVar1 * 4))));
    }
  }
  return uVar5;
}

/* ref: FUN_0079ca80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079ca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ca80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  F_0042b630((int)this + 0x1a0 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0079caf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079caf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79caf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cb30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x79cb30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*((byte *)GEN_TOP((param_1 + 0xf9))) & 1) != 0) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 400))) + 0x7c))))(*((int * PTR32 *)GEN_TOP((param_1 + 400))) GEN_EDX_FWD), uVar2 != 0)
     ) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
    if ((*((int *)GEN_TOP((uVar3 + 0xe8))) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xe8))) + 0x20))) + 0x870))),
       *((int *)GEN_TOP((param_1 + 500))) != iVar1)) {
      uVar3 = 0;
      *((int *)GEN_TOP((param_1 + 500))) = iVar1;
      if (uVar2 != 0) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 400))) + 0x6c))))(*((int * PTR32 *)GEN_TOP((param_1 + 400))) GEN_EDX_ARG,uVar3,0,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
    }
  }
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079cbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79cbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a10)),0,6);
  return bVar1;
}

/* ref: FUN_0079cbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined4 uVar6;
  
  uVar4 = *((uint *)GEN_TOP((param_1 + 0xe8)));
  iVar1 = *((int *)GEN_TOP((param_2 + 0xd8)));
  if (uVar4 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return uVar4;
  }
  if (**((int * PTR32 *)GEN_TOP((uVar4 + 0x20))) == 0) {
    F_0059ead0(*((undefined4 *)GEN_TOP(((int)this + 400))) GEN_EDX_FWD,0,0,1);
    F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18c))) GEN_EDX_ARG,0x66);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar4 GEN_EDX_ARG);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 400))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG);
    if (uVar4 != uVar5) {
      uVar6 = 0;
      if (*((int *)GEN_TOP(((int)this + 400))) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 400))) + 0x70)));
      }
      bVar3 = F_005612e0(uVar6,uVar4);
      if (bVar3 == 0) {
        return CONCAT31(extraout_var,bVar3);
      }
    }
    uVar4 = F_0059b390(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x198))),1,0);
    return uVar4;
  }
  iVar2 = (*((int * PTR32 *)GEN_TOP((uVar4 + 0x20))))[1];
  if (iVar2 == 0) {
    F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18c))) GEN_EDX_ARG,0x65);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar4 GEN_EDX_ARG);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 400))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG);
    if (uVar4 != uVar5) {
      uVar6 = 0;
      if (*((int *)GEN_TOP(((int)this + 400))) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 400))) + 0x70)));
      }
      bVar3 = F_005612e0(uVar6,uVar4);
      if (bVar3 == 0) goto LAB_0079cce6;
    }
    F_0059b390(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x198))),1,0);
  }
  else {
    F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18c))) GEN_EDX_ARG,0x11);
  }
LAB_0079cce6: ;
  F_0059ead0(*((undefined4 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,iVar2,0,1);
  uVar4 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x20))));
  return uVar4;
}

/* ref: FUN_0079cd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79cd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xbc)));
  if ((uVar1 != 0) && (*((int *)GEN_TOP((param_2 + 0xac))) != 0)) {
    if (**((int * PTR32 *)GEN_TOP((uVar1 + 0x20))) != 0) {
      uVar1 = (*((int * PTR32 *)GEN_TOP((uVar1 + 0x20))))[1];
      if (3 < uVar1) {
        uVar1 = 3;
      }
      uVar1 = F_0058d980(*((undefined4 *)GEN_TOP(((int)this + 0x198))) GEN_EDX_FWD,uVar1);
      return uVar1;
    }
    uVar1 = F_0059ead0(*((undefined4 *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,0,0,1);
  }
  return uVar1;
}

/* ref: FUN_0079cd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79cd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x9c)));
  if ((uVar2 != 0) && (*((int *)GEN_TOP((param_2 + 0x90))) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x1900)));
    if ((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x190c))) != 0) && (0 < (int)uVar1)) {
      F_0058d980(*((undefined4 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_FWD,uVar1);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x19c))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG);
      return uVar2;
    }
    uVar2 = F_0059ead0(*((undefined4 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG,0,0,1);
  }
  return uVar2;
}

/* ref: FUN_0079cdf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79cdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0079ce60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79ce60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 3) && (this_00 = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_FWD,4))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar3 + 0xac))) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xac))) + 0x20))) + param_1 * 8)));
      bVar2 = F_00584440(this_00 GEN_EDX_ARG,uVar1);
      if (bVar2 != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        bVar2 = *((byte *)GEN_TOP(((int)this + 0x13a)));
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP(((int)param_2 + 0x1e4)));
        uVar3 = F_0055dcb0();
        F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,2,(uint)bVar2,uVar1,((undefined4 *)(gen_frame + 0x0)),0,0);
      }
    }
  }
  return;
}

/* ref: FUN_0079cf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cf10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x79cf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this;
  int iVar2;
  
  this = (gen_frame + 0x10);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if ((param_2 == '\0') || (param_2 == '\x01')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = param_3;
    F_005a9110(param_1 GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this = this - 8;
      uVar1 = F_005a2670(this GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_0079cf80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cf80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x79cf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this;
  int iVar2;
  
  this = (gen_frame + 0x10);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if ((param_2 == '\0') || (param_2 == '\x01')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = param_3;
    F_005a9110(param_1 GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this = this - 8;
      uVar1 = F_005a2670(this GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_0079cff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79cff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = F_0055dcb0();
  uVar5 = F_0055b990(uVar4 GEN_EDX_ARG);
  uVar4 = 0;
  if (*((int *)GEN_TOP((uVar5 + 0xe8))) != 0) {
    sVar2 = *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0xe8))) + 0x20))) + 8 + param_1 * 0xc)));
    F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 0x1e4)));
    (*(int *)(gen_frame + 0x4)) = (int)sVar2;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
    uVar4 = F_0055dcb0();
    uVar4 = F_00588780(uVar4 + 0xe0 GEN_EDX_ARG,8,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return uVar4;
}

/* ref: FUN_0079d090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079d090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79d090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x65;
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9a0(uVar1 GEN_EDX_ARG);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  uVar1 = F_0079afc0(uVar2,uVar1,param_1,param_2,uVar3);
  return uVar1;
}

/* ref: FUN_0079d0d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079d0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79d0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP((uVar4 + 0x9c)));
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP((uVar4 + 0x90)));
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + param_1 * 0x20)));
    F_005951c0(param_3 GEN_EDX_ARG,iVar3,0,*param_2);
    F_0055a300(*param_2 GEN_EDX_ARG,0 < iVar3);
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(param_2[1] GEN_EDX_ARG)));
    F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + param_1 * 0x14))));
    uVar4 = F_005612d0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x10 + param_1 * 0x20))));
    F_0055aa30(this_00 GEN_EDX_ARG,uVar4);
  }
  return;
}

/* ref: FUN_0079d190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079d190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c98bc));
  F_00590cc0(((undefined *)GEN_TOP(((int)this + 0x6c0))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6b4))) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x6b4)));
  iVar2 = 0xa0;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079d1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  
  if (this[0xcf8] != (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    piVar3 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)(byte)this[0xcf8])));
    if (((piVar3 != ((int *)GEN_TOP(0x0))) &&
        (((*((byte *)GEN_TOP(((int)piVar3 + 0xf9))) & 4) != 0 || ((*(byte *)(piVar3 + 0x3e) & 1) != 0)))) &&
       ((uVar2 = (uint)piVar3[0x3d] >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
      *(byte *)(piVar3 + 0x3e) = *(byte *)(piVar3 + 0x3e) & 0x7f;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x8c))))(piVar3 GEN_EDX_ARG);
    }
    this[0xcf8] = (undefined1)0x0;
  }
  F_00580fa0(this + 0x6c0 GEN_EDX_ARG);
  bVar1 = F_005a9130(this GEN_EDX_ARG,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonJournal::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_005a92d0(this GEN_EDX_FWD,0,0x17,1);
  F_005a92d0(this GEN_EDX_ARG,1,0x1a,0);
  if (*(int *)(this + 0x188) != 0) {
    F_00588cd0(this + 0x6c0 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(int *)(this + 0x188),0);
    *(undefined4 *)(this + 0x188) = 0;
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079d2d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x79d2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar2 = F_0059d8b0(param_1 + 0x6c0 GEN_EDX_ARG,param_2);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xcf8)));
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  if ((bVar1 != 0) && (uVar2 = (uint)bVar1, uVar2 != 0xffffffff)) {
    uVar2 = F_0055dcb0();
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x14))) + 0xcc)));
    if (uVar2 != param_1) {
      if (uVar2 != 0) {
        if ((*((int *)GEN_TOP((param_1 + 0x188))) != 0) && (uVar2 == *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x188))) + 4)))))
        {
          return uVar2;
        }
        bVar1 = *((byte *)GEN_TOP((uVar2 + 0x13a)));
        uVar2 = F_0055dcb0();
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x14))) + 0x44))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,0x2a);
        if (bVar1 == uVar2) {
          return uVar2;
        }
        uVar2 = F_0055dcb0();
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x14))) + 0x44))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,7);
        if (bVar1 == uVar2) {
          return uVar2;
        }
      }
      *((undefined1 *)GEN_TOP((param_1 + 0xcf8))) = 0;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonJournal::vf39 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079d370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x6c0 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonJournal::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a34)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonJournal::vf49 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79d3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00580f60(this + 0x6c0 GEN_EDX_FWD,0);
  uVar1 = F_005a9190((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  int local_8;
  
  iVar3 = (int)param_2;
  iVar2 = param_1;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x1ac)));
  iVar5 = 0xa1;
  do {
    F_005a2710(this_00 GEN_EDX_FWD,1);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x12e8)));
  uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x4d4))) GEN_EDX_ARG,4);
  *((int *)GEN_TOP(((int)this + 0x4d8))) = iVar5;
  if (0 < iVar5) {
    iVar5 = *((int *)GEN_TOP(((int)this + 0x180)));
    uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1220)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP(((int)this + 0x1b0))) = uVar4 | (-(uint)(iVar5 != 1) & 0x80000000) + 0x80000000;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x20))) + 0xd84)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1228)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1bc))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x20))) + 0xc80)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1c4))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x122c)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x4cc))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x4d0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1230)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1cc))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1234)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x1238)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x4c4))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x4c8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x12ec)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x4dc))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x4e0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x12f8)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x60c))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x610))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x20))) + 0xc88)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x20))) + 0xc84)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1e4))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x20))) + 0xc8c)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1ec))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = uVar1;
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x123c)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x444))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x448))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x450)));
      param_1 = 0xc90;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x5b0 + param_1)));
        F_005a2710(param_2 + 9 GEN_EDX_ARG,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar3 + 0x20))))));
        F_005a2710(param_2 - 1 GEN_EDX_ARG,6);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) + 0x14 + param_1)));
        F_005a2710(param_2 + 0x13 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        param_2[0x14] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1254)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 500))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x1f8))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x228)));
      param_1 = 0x126c;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 - 0x14 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 - 0xb GEN_EDX_ARG,4);
        param_2[-10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 - 1 GEN_EDX_ARG,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x28 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 + 9 GEN_EDX_ARG,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 + 0x1d GEN_EDX_ARG,4);
        param_2[0x1e] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) - 0x5a0 + param_1)));
        F_005a2710(param_2 + 0x27 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        param_2[0x28] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x12a8)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x2ec))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x2f0))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 800)));
      param_1 = 0x12c0;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 - 0x14 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 - 0xb GEN_EDX_ARG,4);
        param_2[-10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 - 1 GEN_EDX_ARG,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 + 9 GEN_EDX_ARG,4);
        param_2[10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 - 0x5e0 + *((int *)GEN_TOP((iVar3 + 0x20))))));
        F_005a2710(param_2 + 0x13 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        param_2[0x14] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x12fc)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x394))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x398))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x3c8)));
      param_1 = 0x1310;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) - 0x10 + param_1)));
        F_005a2710(param_2 - 9 GEN_EDX_ARG,4);
        param_2[-8] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        F_005a2710(param_2 - 1 GEN_EDX_ARG,4);
        *param_2 = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x10 + param_1)));
        F_005a2710(param_2 + 0xf GEN_EDX_ARG,4);
        param_2[0x10] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x20 + param_1)));
        F_005a2710(param_2 + 0x17 GEN_EDX_ARG,4);
        param_2[0x18] = uVar1;
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x20))) - 0x588 + param_1)));
        F_005a2710(param_2 + 7 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        param_2[8] = uVar1;
        param_2 = param_2 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x12f0)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x4fc))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x500))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x504)));
      param_1 = 0xcf4;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar3 + 0x20))))));
        F_005a2710(param_2 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = uVar1;
        param_2 = ((undefined4 *)GEN_TOP(((int)param_2 + 8)));
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x4e4)));
    param_1 = 0xd54;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar3 + 0x20))))));
      F_005a2710(param_2 GEN_EDX_ARG,6);
      *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = uVar1;
      param_1 = param_1 + 4;
      param_2 = ((undefined4 *)GEN_TOP(((int)param_2 + 8)));
    } while (param_1 < 0xd60);
    local_8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x12f4)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x5c4))) GEN_EDX_ARG,4);
    *((int *)GEN_TOP(((int)this + 0x5c8))) = local_8;
    if (0 < local_8) {
      param_2 = ((undefined4 *)GEN_TOP(((int)this + 0x5cc)));
      param_1 = 0xd64;
      do {
        uVar1 = *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((iVar3 + 0x20))))));
        F_005a2710(param_2 GEN_EDX_ARG,6);
        param_1 = param_1 + 4;
        *((undefined4 *)GEN_TOP(((int)param_2 + 4))) = uVar1;
        param_2 = ((undefined4 *)GEN_TOP(((int)param_2 + 8)));
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1340)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x694))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x698))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1344)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x69c))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x6a0))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x1348)));
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x6a4))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x6a8))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + 0x134c)));
    uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)this + 0x6ac))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this + 0x6b0))) = uVar1;
  }
  return uVar4;
}

/* ref: FUN_0079db00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079db00(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x79db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined * this;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_FWD,2)));
    this_00 = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_ARG,4)));
    uVar1 = (int)param_3 >> 0x10 & 0xffff;
    F_0055dcb0();
    uVar1 = F_0056a410(uVar1);
    F_00584110(this GEN_EDX_ARG,uVar1);
    if (param_4 != '\0') {
      uVar1 = param_3 & 0xffff;
      F_0055dcb0();
      uVar1 = F_0056a410(uVar1);
      F_00584110(this_00 GEN_EDX_ARG,uVar1);
      return;
    }
    uVar1 = F_00561530(param_2 GEN_EDX_ARG,3);
    F_0055a300(uVar1 GEN_EDX_ARG,0);
    F_0055a300(this_00 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_0079dbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079dbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_FWD)));
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x6f8))));
  return uVar1;
}

/* ref: FUN_0079dbe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079dbe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x79dbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 unaff_EBX = 0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x198)));
  iVar2 = 2;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x28))))
              (((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG,CONCAT31((int3)((uint)unaff_EBX >> 8),param_2 == '\0'));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_0079dc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079dc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79dc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  (*(uint *)(gen_frame + 0x14)) = *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x2a))) & 0xf;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a9110(this GEN_EDX_FWD,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_0079dc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079dc80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x79dc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != '\0') {
    uVar3 = 0x1c1;
    if (*((int *)GEN_TOP(((int)param_1 + 0x180))) == 1) {
      uVar3 = 0x18ad3;
    }
    uVar4 = 0;
    in_ecx = F_0055e2f0(param_1 GEN_EDX_FWD,0x1e);
    uVar2 = F_0055a020(in_ecx GEN_EDX_ARG);
    bVar1 = F_0056b630(param_1 GEN_EDX_ARG,uVar3,6,0,7,(uint)(uVar2 >> 1),uVar4);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b780(param_1 GEN_EDX_ARG,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_0079dce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079dce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79dce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c99bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalAccept::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079dd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79dd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a3c)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonJournalAccept::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79dd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079ddc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079ddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ddc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x4000;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x188))) = 0;
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9abc));
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalDetail::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079dea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79dea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a4c)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonJournalDetail::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79deb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  if (((char)param_1[1] == '\0') && (*param_1 == 2)) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    piVar3 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)(byte)AVar1)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x8c))))(piVar3 GEN_EDX_ARG);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0079df00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x79df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte * pbVar5;
  int iVar6;
  uint * this_00;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(uint *)(gen_frame + 0x7c)) = uVar3;
  if (param_1 != 0) {
    if ((*((byte *)GEN_TOP((param_3 + param_4 * 8))) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP((param_3 + param_4 * 8 + 4)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,uVar4,REFG(undefined4, 0x108cc50));
    if (1 < param_1) {
      iVar6 = param_1 - 1;
      pbVar5 = ((byte *)GEN_TOP((param_3 + 8 + param_4 * 8)));
      do {
        F_0042d540(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10c1a5c));
        if ((*pbVar5 & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 4);
        }
        F_0042d540(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4);
        iVar6 = iVar6 - 1;
        pbVar5 = pbVar5 + 8;
      } while (iVar6 != 0);
    }
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x1bc)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    (*(uint *)(gen_frame + 0x60)) = uVar3;
    uVar2 = F_0055a020(uVar4 GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x64)) = 4;
    (*(uint *)(gen_frame + 0x68)) = (uint)uVar2;
    uVar3 = F_0055ab00(*((undefined4 *)GEN_TOP(((int)this + 0x1bc))) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x6c)) = 4;
    (*(uint *)(gen_frame + 0x70)) = uVar3;
    bVar1 = F_0055ab50(*((undefined4 *)GEN_TOP(((int)this + 0x1bc))) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x74)) = 4;
    (*(uint *)(gen_frame + 0x78)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) + 4))))
                               (*((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x5c)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar5 + 4);
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1bc))) GEN_EDX_ARG,uVar4);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this_00 = &(*(uint *)(gen_frame + 0x7c));
    iVar6 = 3;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar3 = (uint)uVar7;
  }
  return uVar3;
}

/* ref: FUN_0079e050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1cc)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x180)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
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

/* ref: FUN_0079e0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1d4)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x180)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
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

/* ref: FUN_0079e130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1d0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x180)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
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

/* ref: FUN_0079e1a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9bbc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((undefined1 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalResult::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a60)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonJournalResult::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079e280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ccc));
  F_00590cc0(((undefined *)GEN_TOP(((int)this + 0x714))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x708))) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x6e0)));
  iVar2 = 0xa0;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e2d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x79e2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x714 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf39 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x714 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonGuildLeve::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00580fa0(this + 0x714 GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf36 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  *(undefined2 *)(this + 0x136) = 0x17;
  bVar1 = F_00560e80(this + 0x714 GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 0x180) != 0) {
    F_00588cd0(this + 0x714 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(int *)(this + 0x180),0);
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a70)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeve::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079e3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79e3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  if (*param_1 == 5) {
    uVar1 = *(undefined4 *)(this + 0x700);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonGuildLeve::vf49 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00580f60(this + 0x714 GEN_EDX_FWD,0);
  uVar1 = F_005a9190((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079e460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79e460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = param_1;
  if ((param_1 != *((ushort *)GEN_TOP(((int)this + 0x706)))) && (param_1 < *((ushort *)GEN_TOP(((int)this + 0x704))))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    *((short *)GEN_TOP(((int)this + 0x706))) = (short)param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = 9;
    (*(uint *)(gen_frame + 0xc)) = param_1 & 0xffff;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_0079e4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e4d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x79e4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  byte bVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  this = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_FWD,2)));
  this_00 = ((undefined *)GEN_TOP(F_00561530(param_2 GEN_EDX_ARG,4)));
  uVar2 = param_3 >> 0x10;
  F_0055dcb0();
  uVar2 = F_0056a410(uVar2);
  F_00584110(this GEN_EDX_ARG,uVar2);
  if (param_4 != '\0') {
    uVar2 = param_3 & 0xffff;
    F_0055dcb0();
    uVar2 = F_0056a410(uVar2);
    uVar2 = F_00584110(this_00 GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  F_0055a300(this_00 GEN_EDX_ARG,0);
  uVar2 = F_00561530(param_2 GEN_EDX_ARG,3);
  bVar1 = F_0055a300(uVar2 GEN_EDX_ARG,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0079e570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79e570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x2a))) & 0xf) == 1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x184))) + 0x74))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 8))) + 1,0);
  }
  return uVar1;
}

/* ref: FUN_0079e5a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9dcc));
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1a8c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079e620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79e620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_1 != 0) {
    if ((*((byte *)GEN_TOP((param_2 + 0x20))) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_FWD,0);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x24))));
  }
  return 1;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x79e660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  this_01 = (gen_frame + 0x10);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x17) {
    if (param_2 == 0) {
      uVar2 = F_00557670(param_3 GEN_EDX_FWD,0);
      if (*(int *)(this + 0x180) != 0) {
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xa0)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
        F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar3 = 1;
        do {
          this_01 = this_01 - 8;
          uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
        return uVar2;
      }
    }
    else {
      uVar2 = param_2;
      if (param_2 == 1) {
        F_00557670(param_3 GEN_EDX_ARG,0);
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
        F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x8)));
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
    }
  }
  else if (uVar2 == 0x1b) {
    uVar2 = F_00557670(param_3 GEN_EDX_ARG,0);
    if (*(int *)(this + 0x180) != 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xa0)));
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
  }
  return uVar2;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0,0);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079e7f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ecc));
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1aa0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x79e850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_0079e860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 4;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9fcc));
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonColosseumRecord::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonColosseumRecord::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  F_005a92d0(this GEN_EDX_FWD,2,1,0);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonColosseumRecord::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079e930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79e930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1ab4)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonColosseumRecord::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079e940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79e940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  if ((*((byte *)GEN_TOP((param_2 + 0x4a8))) & 0xf) == 0) {
    F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_FWD,0);
    return 1;
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x4ac))));
  return 1;
}

/* ref: Client::UI2::AddonColosseumRecord::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079e990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x79e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    F_005a9130(this GEN_EDX_ARG,0xffffffff);
  }
  return;
}

/* ref: FUN_0079e9c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  
  ((undefined * PTR32 *)(gen_frame + 0x0))[2] = this;
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = ((undefined *)GEN_TOP(0x65));
  ((undefined * PTR32 *)(gen_frame + 0x0))[1] = ((undefined *)GEN_TOP(0x66));
  if (param_1 < 0x10) {
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + param_1 * 0x24 + 0x188)));
    if (*(byte *)(puVar1 + 8) < 2) {
      F_0059d670(((undefined *)GEN_TOP(*param_2)) GEN_EDX_FWD,((undefined * PTR32 *)(gen_frame + 0x0))[(int)(*(byte *)(puVar1 + 8))]);
    }
    uVar4 = *puVar1;
    pvVar2 = ((undefined *)GEN_TOP(F_00559ba0(param_2[1] GEN_EDX_ARG)));
    F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = puVar1[3];
    uVar9 = 0;
    pvVar2 = ((undefined *)GEN_TOP(F_00559b90(param_2[2] GEN_EDX_ARG)));
    F_00591c00(pvVar2 GEN_EDX_ARG,uVar4,uVar9);
    uVar4 = puVar1[2];
    pvVar2 = ((undefined *)GEN_TOP(F_00559ba0(param_2[3] GEN_EDX_ARG)));
    F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = puVar1[4];
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = F_00559ba0(param_2[5] GEN_EDX_ARG);
    F_0057eb30(uVar3 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
    uVar4 = puVar1[5];
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = F_00559ba0(param_2[6] GEN_EDX_ARG);
    F_0057eb30(uVar3 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
    uVar4 = puVar1[6];
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = F_00559ba0(param_2[7] GEN_EDX_ARG);
    F_0057eb30(uVar3 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
    uVar4 = puVar1[7];
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = F_00559ba0(param_2[8] GEN_EDX_ARG);
    F_0057eb30(uVar3 GEN_EDX_ARG,uVar4,uVar5,uVar6,uVar7,uVar8);
    F_0059d670(((undefined *)GEN_TOP(param_2[9])) GEN_EDX_ARG,(param_1 != *((uint *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0))[2] + 0x3c8)))) + 0x65);
  }
  return;
}

/* ref: FUN_0079eb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79eb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca0cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSell::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079eb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79eb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1ac4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRetainerSell::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79eb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((*((byte *)GEN_TOP((param_2 + 0x38))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x3c)));
    }
    F_0059d070(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_FWD,uVar1,1,1);
    if ((*((byte *)GEN_TOP((param_2 + 0x40))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x44)));
    }
    F_0059cf90(*(undefined4 *)(this + 0x194) GEN_EDX_ARG,uVar1,1,1);
    if ((*((byte *)GEN_TOP((param_2 + 0x28))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x2c)));
    }
    F_0059cf90(*(undefined4 *)(this + 0x198) GEN_EDX_ARG,uVar1,1,1);
    if ((*((byte *)GEN_TOP((param_2 + 0x68))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x6c)));
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar1);
    if ((*((byte *)GEN_TOP((param_2 + 0x70))) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,0);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x74))));
  }
  return 1;
}

/* ref: Client::UI2::AddonRetainerSell::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079ec50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ec50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79ec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x10);
  this_01 = (gen_frame + 0x10);
  uVar2 = F_0055e2f0(this GEN_EDX_FWD,0xd);
  uVar3 = F_0055e2f0(this GEN_EDX_ARG,9);
  if (*((uint *)GEN_TOP((param_1 + 4))) == uVar2) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return uVar2;
  }
  if (*((uint *)GEN_TOP((param_1 + 4))) == uVar3) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar4 = 1;
    do {
      this_01 = this_01 - 8;
      uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar3;
}

/* ref: FUN_0079ed70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079ed70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ed70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079edb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079edb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79edb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079edf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079edf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79edf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079ee50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079ee50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ee50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca1cc));
  iVar3 = 0x92;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x6da8)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar2 - 0x68))) GEN_EDX_FWD);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar2 - 0xbc))) GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0xbc)));
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079eeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79eeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1ad4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf45 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079eec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79eec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x180);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if (uVar2 == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x3c))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
      this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
      *(uint *)(this + 0xa4) = uVar2;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: Client::UI2::AddonRetainerSellList::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079ef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79ef30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  undefined * this_00;
  
  pbVar6 = param_2;
  if ((param_2 != ((byte *)GEN_TOP(0x0))) && (*(int *)(this + 0x180) != 0)) {
    if (((param_2[0x10] & 0xf) != 0) && (0 < *(int *)(param_2 + 0x14))) {
      F_00591c00(*(undefined * PTR32 *)(this + 400) GEN_EDX_FWD,*(int *)(param_2 + 0x14),0);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,uVar3);
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar3);
    F_00562110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,1);
    uVar4 = F_0055dcb0();
    F_00594d90(((undefined *)GEN_TOP((uVar4 + 0xe0))) GEN_EDX_ARG,0);
    pbVar1 = param_2 + 0x30;
    param_2 = ((byte *)GEN_TOP(0x0));
    if (((*pbVar1 & 0xf) == 0) || (iVar2 = *(int *)(pbVar6 + 0x34), iVar2 < 1)) {
      F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
    }
    else {
      F_0059d6a0(this GEN_EDX_ARG,0x11,1,0);
      param_2 = ((byte *)GEN_TOP(0x0));
      if (0 < iVar2) {
        this_00 = this + 0x1b4;
        pbVar6 = pbVar6 + 0x4c;
        iVar5 = iVar2;
        do {
          if ((pbVar6[-0x14] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 - 0x10);
          }
          *(undefined4 *)(this_00 - 0x14) = uVar3;
          if ((pbVar6[-0xc] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 - 8);
          }
          F_0042e430(this_00 GEN_EDX_ARG,uVar3);
          if ((pbVar6[-4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)pbVar6;
          }
          *(undefined4 *)(this_00 - 0x10) = uVar3;
          if ((pbVar6[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 8);
          }
          F_0042e430(this_00 + 0x54 GEN_EDX_ARG,uVar3);
          if ((pbVar6[0xc] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x10);
          }
          *(undefined4 *)(this_00 - 0xc) = uVar3;
          if ((pbVar6[0x14] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x18);
          }
          *(undefined4 *)(this_00 - 8) = uVar3;
          if ((pbVar6[0x1c] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + 0x20);
          }
          *(undefined4 *)(this_00 - 4) = uVar3;
          this_00 = this_00 + 0xbc;
          pbVar6 = pbVar6 + 0x38;
          iVar5 = iVar5 - 1;
          param_2 = ((byte *)GEN_TOP(iVar2));
        } while (iVar5 != 0);
      }
    }
    F_0059ead0(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,param_2,0,1);
  }
  return 1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79f0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pAVar3,uVar4);
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSellList::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f110u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0079f150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79f150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  uVar3 = param_2;
  if (iVar2 != 0) {
    if ((short)param_1 == 0x1f) {
      F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
      bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
      (*(undefined1 *)(gen_frame + 0xa)) = 2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
      (*(undefined1 *)(gen_frame + 0xb)) = *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 8))) * 0xbc + 0x1a8 + (int)this)));
      uVar3 = F_0055dcb0();
      F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,4,(uint)bVar1,iVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
      uVar3 = F_00557670(param_2 GEN_EDX_ARG,0);
      return uVar3;
    }
    uVar3 = F_0055dcb0();
    F_00594d90(((undefined *)GEN_TOP((uVar3 + 0xe0))) GEN_EDX_ARG,0);
    uVar3 = F_00557670(param_2 GEN_EDX_ARG,0);
  }
  return uVar3;
}

/* ref: FUN_0079f200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  if (*((char *)GEN_TOP((param_2 + 0x10))) == '\x01') {
    uVar3 = 1;
  }
  else if (*((char *)GEN_TOP((param_2 + 0x10))) == '\x02') {
    uVar3 = 2;
  }
  else if ((*((byte *)GEN_TOP((param_2 + 0x11))) & 8) != 0) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00557670(param_1 GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_0079f2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x28))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG)));
  uVar1 = *puVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x28))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG);
  uVar1 = *((undefined4 *)GEN_TOP((uVar3 + 4)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x80000;
  *((char *)GEN_TOP((param_1 + 0x15))) = (char)uVar3;
  F_00557670(param_1 GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar3;
}

/* ref: FUN_0079f3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined * this_00;
  char * pcVar2;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2[2] * 0xbc + 0x1a0 + (int)this)));
  this_00 = ((undefined *)GEN_TOP(F_005ab2b0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_FWD,puVar1[2],*puVar1,0x30)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if ((int)puVar1[1] < 2) {
      pcVar2 = "";
    }
    else {
      pcVar2 = ((char *)GEN_TOP(F_00560910(puVar1[1])));
    }
    F_0058ea60(this_00 GEN_EDX_ARG,pcVar2);
    uVar3 = puVar1[4];
    F_00561860(*((undefined4 *)GEN_TOP(((int)this_00 + 0xa4))) GEN_EDX_ARG,*(byte *)(puVar1 + 4) & 1);
    F_005a03c0(*((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0xa4))) GEN_EDX_ARG,uVar3 >> 1);
  }
  *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x80000;
  *((undefined1 *)GEN_TOP((param_1 + 0x15))) = 1;
  uVar3 = F_00557670(param_1 GEN_EDX_ARG,0);
  return uVar3;
}

/* ref: FUN_0079f430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) & 0xdf;
  *((undefined4 *)GEN_TOP(((int)this + 0x40c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca2cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x18c))),0,0x280);
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerHistory::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,0,0x21,0);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1ae8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  undefined * pAVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *((int *)GEN_TOP((param_2 + 0x84)));
  pAVar3 = param_1;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    pAVar3 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20)));
    param_1 = *(undefined * PTR32 *)(pAVar3 + 0x968);
    if (0 < (int)param_1) {
      pAVar3 = this + 0x18c;
      iVar5 = 0x980;
      iVar4 = 0xb08;
      do {
        *(undefined4 *)(pAVar3 + 0x10) = *((undefined4 *)GEN_TOP((iVar4 - 0xc + *((int *)GEN_TOP((iVar2 + 0x20))))));
        *(undefined4 *)(pAVar3 + 0x14) = *((undefined4 *)GEN_TOP((iVar4 - 8 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        *(undefined4 *)(pAVar3 + 0xc) = *((undefined4 *)GEN_TOP((iVar4 - 4 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        *(undefined4 *)(pAVar3 + 0x18) = *((undefined4 *)GEN_TOP((iVar4 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        *(undefined4 *)(pAVar3 + 4) = *((undefined4 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP((iVar2 + 0x20))))));
        pAVar3[0x1d] = (undefined1)(0 < *((int *)GEN_TOP((iVar5 - 0xc + *((int *)GEN_TOP((iVar1 + 0x20)))))));
        pAVar3[0x1c] = *((undefined *)GEN_TOP((iVar5 - 0x10 + *((int *)GEN_TOP((iVar1 + 0x20))))));
        *(undefined4 *)(pAVar3 + 8) = *((undefined4 *)GEN_TOP((iVar5 + *((int *)GEN_TOP((iVar1 + 0x20))))));
        *(undefined4 *)pAVar3 = *((undefined4 *)GEN_TOP((iVar5 - 4 + *((int *)GEN_TOP((iVar1 + 0x20))))));
        iVar5 = iVar5 + 0x18;
        iVar4 = iVar4 + 0x14;
        pAVar3 = pAVar3 + 0x20;
        param_1 = ((undefined *)GEN_TOP(((int)param_1 - 1)));
      } while (param_1 != ((undefined *)GEN_TOP(0x0)));
    }
    if (((byte)this[0xf9] & 1) != 0) {
      pAVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_FWD)));
    }
  }
  return (uint)pAVar3;
}

/* ref: FUN_0079f610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79f610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_1 * 0x20;
  iVar1 = *((int *)GEN_TOP(((int)this + iVar2 + 0x194)));
  if (0 < iVar1) {
    F_005951c0(param_3 GEN_EDX_FWD,iVar1,0,0);
    F_005899e0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + iVar2 + 0x1a0))));
  }
  if (*((char *)GEN_TOP(((int)this + iVar2 + 0x1a8))) == '\0') {
    F_0059d670(((undefined *)GEN_TOP(param_2[2])) GEN_EDX_ARG,7);
  }
  else {
    F_0059d670(((undefined *)GEN_TOP(param_2[2])) GEN_EDX_ARG,0x11);
    uVar5 = (uint)*((byte *)GEN_TOP(((int)this + iVar2 + 0x1a8)));
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar3 = F_00559ba0(param_2[3] GEN_EDX_ARG);
    F_0057eb30(uVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7,uVar8,uVar9);
  }
  uVar10 = *((undefined4 *)GEN_TOP(((int)this + iVar2 + 400)));
  pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_ARG)));
  F_00584110(pvVar4 GEN_EDX_ARG,uVar10);
  uVar10 = *((undefined4 *)GEN_TOP(((int)this + iVar2 + 0x198)));
  pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[4] GEN_EDX_ARG)));
  F_00584110(pvVar4 GEN_EDX_ARG,uVar10);
  uVar10 = *((undefined4 *)GEN_TOP(((int)this + iVar2 + 0x19c)));
  pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[5] GEN_EDX_ARG)));
  F_00584110(pvVar4 GEN_EDX_ARG,uVar10);
  uVar10 = *((undefined4 *)GEN_TOP(((int)this + iVar2 + 0x1a4)));
  pvVar4 = ((undefined *)GEN_TOP(F_00559ba0(param_2[6] GEN_EDX_ARG)));
  uVar3 = F_00584110(pvVar4 GEN_EDX_ARG,uVar10);
  return uVar3;
}

/* ref: FUN_0079f710 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
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
  F_00580ea0(((undefined *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) & 0xbf;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0079f7b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
  F_00590cc0(((undefined *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79f7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  F_0059bc90(this + 0x1ac GEN_EDX_FWD);
  uVar1 = F_00580fd0(this + 0x1ac GEN_EDX_ARG);
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 == 5) || (uVar2 == 4)) && (uVar1 != 0)) &&
     ((*((int *)GEN_TOP((uVar1 + 4))) != 0 && ((*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0xf9))) & 1) != 0)))) {
    this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 4))) + 0x8c))))(*((int * PTR32 *)GEN_TOP((uVar1 + 4))) GEN_EDX_ARG);
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,(undefined1)param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00580f10(this + 0x1ac GEN_EDX_FWD,0,0);
  uVar1 = F_005b0610(this GEN_EDX_ARG,(undefined1)param_1,1,(undefined1)param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf36 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079f870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  bVar1 = F_00560e80(this + 0x1ac GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f890(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x79f890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x1ac GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf39 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0079f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x1ac GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079f8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b1c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x1ec) != 0) {
    uVar1 = F_0055dcb0();
    piVar2 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x14))) GEN_EDX_ARG,*(undefined4 *)(this + 0x1ec))));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x8c))))(piVar2 GEN_EDX_ARG);
    }
    if (this[500] == (undefined1)0x1) {
      uVar1 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79f990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  if ((param_2 != ((byte *)GEN_TOP(0x0))) && ((*param_2 & 0xf) != 0)) {
    if (*(int *)(param_2 + 4) == 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,0);
    }
    else if (*(int *)(param_2 + 4) == 2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0,0);
      return 0;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079f9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x1ac GEN_EDX_FWD);
  if ((uVar1 == 0) ||
     (pAVar2 = *((undefined * PTR32 *)GEN_TOP((uVar1 + 4))),
     *((undefined * PTR32 *)GEN_TOP((uVar1 + 4))) == ((undefined *)GEN_TOP(0x0)))) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_0079f9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79f9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079fa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079fa70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079fa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79fa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 != 7) {
    bVar1 = F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x180))) GEN_EDX_FWD,1);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a300(*((undefined4 *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_0079faa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0079faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79faa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)this + 0x1f5))) != '\0') {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b9a0(uVar1 GEN_EDX_ARG);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
    if (param_1 == 7) {
      F_00560f70(*((undefined4 *)GEN_TOP(((int)this + 0x1e8))),uVar2,uVar1);
      return;
    }
    F_00560f70(*((undefined4 *)GEN_TOP(((int)this + 0x1e4))),uVar2,uVar1);
  }
  return;
}

/* ref: FUN_0079fb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*((int *)GEN_TOP(((int)this + 0x1ec))) != 0) {
    uVar2 = F_0055dcb0();
    piVar3 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1ec))))));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x8c))))(piVar3 GEN_EDX_ARG);
    }
    if (*((char *)GEN_TOP(((int)this + 500))) == '\x01') {
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_0079fbd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079fbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca4cc));
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079fcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b30)),0,6);
  return bVar1;
}

/* ref: FUN_0079fce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13c)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)bVar1);
  if (uVar2 != 0) {
    return *((uint *)GEN_TOP((uVar2 + 0x1f0)));
  }
  return 0;
}

/* ref: FUN_0079fd10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0079fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca5cc));
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0079fd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x79fd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b48)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0079fd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x79fd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined2 uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  char * pcVar5;
  uint uVar6;
  
  (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP((param_1 + 0x84)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((param_2 + 0x78)));
  param_1 = F_0055dcb0();
  if (*((char *)GEN_TOP((param_1 + 0xbc))) == '\0') {
    F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x2e;
    param_2 = 500;
    param_1 = 100;
    do {
      this_00 = *(undefined * PTR32 *)(this + param_1 + 0x11c);
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x84))) + 0x28))))((int)this_00 + 0x84)));
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x84))) + 0xc))))((int)this_00 + 0x84);
        uVar6 = *((uint *)GEN_TOP((param_2 + 4 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20))))));
        uVar3 = *((uint *)GEN_TOP((param_2 + 8 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x20)))))) & 0xffff;
        *((undefined4 *)GEN_TOP(((int)this_00 + 0x98))) = 0x8000;
        *puVar2 = 0x2e;
        puVar2[1] = uVar3;
        if (uVar3 == 0xffff) {
          puVar2[1] = 0xffffffff;
        }
        puVar2[0x19] = uVar6 & 0xffff;
        F_0056e530(this_00 GEN_EDX_ARG,2);
        uVar1 = *(undefined2 *)(puVar2 + 1);
        uVar6 = (int)uVar6 >> 0x10 & 0xffff;
        *((byte *)GEN_TOP(((int)this_00 + 0xaa))) =
             *((byte *)GEN_TOP(((int)this_00 + 0xaa))) ^
             ((uVar6 == 0) * '\x02' ^ *((byte *)GEN_TOP(((int)this_00 + 0xaa)))) & 2;
        *((undefined2 *)GEN_TOP(((int)this_00 + 0x9c))) = uVar1;
        pvVar4 = ((undefined *)GEN_TOP(F_00561530(this_00 GEN_EDX_ARG,3)));
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar4;
        uVar6 = F_00560910(uVar6);
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar6);
        pcVar5 = *((char * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x20))))));
        if (pcVar5 == ((char *)GEN_TOP(0x0))) {
          pcVar5 = "";
        }
        (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar5;
        (*(undefined1 *)(gen_frame + 0xb)) = *((undefined1 *)GEN_TOP(((int)this_00 + 0x9c)));
        F_005916c0(this_00 GEN_EDX_ARG,(uint)(puVar2[1] != -1) * 4 + 2,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x18))[0x13a],&(*(char * PTR32 *)(gen_frame + 0x0)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      param_2 = param_2 + 0xc;
      param_1 = param_1 + 4;
    } while ((int)param_1 < 0xac);
  }
  return param_1;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079fef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x79fef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined1 AVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    this_00 = ((undefined *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)(byte)AVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_0079fb00(this_00 GEN_EDX_ARG);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0079ff30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0079ff30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x79ff30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  ushort uVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined1 * this_00;
  int * piVar7;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(*param_3));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar7 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar7 = piVar2 - 0x21;
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_FWD)));
  if (*piVar4 != 0x26) {
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  uVar3 = *puVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
  uVar1 = *(ushort *)(piVar7 + 0x27);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
  uVar6 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar6 + 0x38))) + 4))))(*((int * PTR32 *)GEN_TOP((uVar6 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),0x2e,2,&(*(undefined4 *)(gen_frame + 0x0)));
  F_005a2670(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  this_00 = ((undefined1 *)(gen_frame + 0x10));
  iVar8 = 1;
  do {
    this_00 = this_00 - 8;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  return 1;
}

/* ref: Client::UI2::AddonMonsterNote::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonMonsterNote::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a0030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b6c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMonsterNote::vf47 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a0040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI2::AddonMonsterNote::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a0073 */
GEN_OWN GEN_NOFRAME unsigned int F_007a0073(void)
{
  GEN_ENTER(0x7a0073u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_007a0080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 1;
  do {
    if (*((int *)GEN_TOP(((int)this + iVar2 * 4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + iVar2 * 4)));
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_FWD,(uint)((param_1 & uVar3) != 0));
    }
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (iVar2 < 4);
  return in_EAX;
}

/* ref: FUN_007a00d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a00d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a00d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  
  iVar3 = 0;
  pbVar4 = ((byte *)GEN_TOP((param_1 + param_2 * 8)));
  do {
    uVar1 = *((uint *)GEN_TOP(((int)this + iVar3 * 4)));
    pbVar5 = pbVar4;
    if (((uVar1 != 0) && (((byte)*(undefined4 *)pbVar4 & 0xf) == 4)) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x108))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
      uVar1 = F_00559b70(this_00 GEN_EDX_FWD);
      if (uVar1 == 2) {
        pbVar5 = pbVar4 + 8;
        if ((*pbVar4 & 0xf) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(pbVar4 + 4);
        }
        uVar1 = F_00591c00(this_00 GEN_EDX_ARG,uVar2,0);
      }
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar5;
  } while (iVar3 < 4);
  return uVar1;
}

/* ref: FUN_007a0140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *((uint *)GEN_TOP(((int)this + iVar2 * 4)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x108)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00559b70(this_00 GEN_EDX_FWD);
      if (uVar1 == 2) {
        uVar1 = F_00591c00(this_00 GEN_EDX_ARG,0xffffffff,0);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a01a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a01a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a01c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a01c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b7c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a01d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a01d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint * puVar5;
  int iVar6;
  undefined * pAVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_10;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  puVar5 = *((uint * PTR32 *)GEN_TOP((iVar1 + 0x20)));
  uVar9 = *puVar5;
  iVar12 = *((int *)GEN_TOP((param_2 + 0x58)));
  if (uVar9 != 0) {
    if ((uVar9 & 0x20) != 0) {
      uVar2 = puVar5[1];
      *(uint *)(this + 0x1a0) = uVar2;
      puVar5 = ((uint *)GEN_TOP(F_007a0080(this + 0x180 GEN_EDX_FWD,uVar2)));
    }
    if ((uVar9 & 8) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
      iVar6 = 8;
      do {
        *(undefined4 *)(this + iVar6 + 0x1a4) = *((undefined4 *)GEN_TOP((iVar6 + *((int *)GEN_TOP((iVar12 + 0x20))))));
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x18);
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xe0)));
      this[0x1bc] = (undefined1)0x1;
      puVar5 = ((uint *)GEN_TOP((*pcVar3)(this)));
    }
    if ((uVar9 & 1) != 0) {
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 8)));
      puVar5 = ((uint *)GEN_TOP(F_0059ead0(*(undefined4 *)(this + 400) GEN_EDX_ARG,iVar6,0,1)));
      if (0 < iVar6) {
        iVar11 = 0;
        if (0 < iVar6) {
          iVar10 = 0x10;
          pAVar7 = this + 0x1ca;
          do {
            uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar12 + 0x20))) + 8 + iVar10)));
            *(short *)(pAVar7 - 2) = (short)iVar11;
            *(undefined4 *)(pAVar7 - 6) = uVar4;
            iVar11 = iVar11 + 1;
            *pAVar7 = (undefined1)(*((int *)GEN_TOP((iVar10 + *((int *)GEN_TOP((iVar1 + 0x20)))))) != 0);
            iVar10 = iVar10 + 4;
            pAVar7 = pAVar7 + 8;
          } while (iVar11 < iVar6);
        }
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0xc)));
        *(undefined4 *)(this + 0x1a4) = uVar4;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x74))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG,uVar4,0);
        puVar5 = ((uint *)GEN_TOP(F_005623b0(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(this + 0x1a4))));
      }
    }
    if ((uVar9 & 2) != 0) {
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0xb0)));
      F_0059ead0(*(undefined4 *)(this + 0x194) GEN_EDX_ARG,iVar6,0,1);
      if (iVar6 < 1) {
        puVar5 = ((uint *)GEN_TOP(F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x66)));
      }
      else {
        uVar4 = **((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x20)));
        F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x65);
        param_2 = 0;
        if (0 < iVar6) {
          iVar11 = 0xb8;
          local_10 = 0xb8;
          pAVar7 = this + 0x310;
          do {
            *(short *)(pAVar7 - 4) = (short)param_2;
            *(undefined4 *)pAVar7 = *((undefined4 *)GEN_TOP((local_10 + *((int *)GEN_TOP((iVar12 + 0x20))))));
            *(undefined4 *)(pAVar7 - 0xc) = *((undefined4 *)GEN_TOP((iVar11 + 4 + *((int *)GEN_TOP((iVar1 + 0x20))))));
            pAVar7[-1] = (undefined1)
                         (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 8 + iVar11))) != 0);
            *(undefined4 *)(pAVar7 - 8) = *((undefined4 *)GEN_TOP((iVar11 + *((int *)GEN_TOP((iVar1 + 0x20))))));
            uVar2 = *((uint *)GEN_TOP((iVar11 + 0xc + *((int *)GEN_TOP((iVar1 + 0x20))))));
            uVar8 = uVar2 & 0xffff;
            pAVar7[-2] = SUB41(uVar2 >> 0x10,0);
            pAVar7[4] = (undefined1)0x0;
            if (uVar8 != 0) {
              F_00c472af(pAVar7 + 4,0x14,&REFG(undefined, 0x10c1b90),uVar4,uVar8);
            }
            local_10 = local_10 + 4;
            param_2 = param_2 + 1;
            iVar11 = iVar11 + 0x10;
            pAVar7 = pAVar7 + 0x24;
          } while (param_2 < iVar6);
        }
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0xb4)));
        *(undefined4 *)(this + 0x1a8) = uVar4;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x194) + 0x74))))(*(int * PTR32 *)(this + 0x194) GEN_EDX_ARG,uVar4,0);
        puVar5 = ((uint *)GEN_TOP(F_005623b0(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,*(undefined4 *)(this + 0x1a8))));
      }
    }
    if ((uVar9 & 4) != 0) {
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x298)));
      if (iVar6 < 1) {
        puVar5 = ((uint *)GEN_TOP(F_00591410(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,0)));
      }
      else {
        puVar5 = ((uint *)GEN_TOP(F_00596e00(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,iVar1,iVar12,0xa7,0x4c,2,2,iVar6,
                                      this + 0x73c)));
        iVar12 = 0;
        if (0 < iVar6) {
          param_2 = 0x2a0;
          do {
            puVar5 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x54))))
                                       (*(undefined4 *)(this + 0x198),iVar12,
                                        (uint)(*((int *)GEN_TOP((param_2 + *((int *)GEN_TOP((iVar1 + 0x20)))))) == 0))));
            param_2 = param_2 + 8;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
        }
        iVar12 = 0;
        if (0 < iVar6) {
          do {
            uVar9 = F_0056dc60(*(undefined4 *)(this + 0x198) GEN_EDX_ARG,iVar12);
            if ((uVar9 != 0) && (*((char *)GEN_TOP((uVar9 + 0x2c))) == '\0')) {
              uVar9 = F_00592870(*(undefined4 *)(this + 0x198) GEN_EDX_ARG,iVar12,0);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
          **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x20))) = 0;
          return uVar9;
        }
      }
    }
    **((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x20))) = 0;
  }
  return (uint)puVar5;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf56 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a0500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined4 * puVar5;
  
  if (this[0x1bc] != (undefined1)0x0) {
    pAVar4 = this + 0x180;
    (*(int *)(gen_frame + 0x10)) = 4;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
      AVar2 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(pAVar4 + 0x2c);
      uVar3 = F_0055dcb0();
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      puVar5 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x38))))(*(int * PTR32 *)pAVar4 GEN_EDX_ARG);
      F_00590ad0((*(uint *)(gen_frame + 0xc)) + 0xe0 GEN_EDX_ARG,2,(uint)(byte)AVar2,uVar3,puVar5);
      pAVar4 = pAVar4 + 4;
      iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
      (*(int *)(gen_frame + 0x10)) = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf57 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  if (this[0x1bc] != (undefined1)0x0) {
    pAVar3 = this + 0x180;
    local_8 = 4;
    do {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
      pAVar3 = pAVar3 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}

/* ref: FUN_007a05c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a05c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a05c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  F_00557670(param_1 GEN_EDX_FWD,0);
  uVar2 = *((uint *)GEN_TOP((param_2 + 8)));
  if ((-1 < (int)uVar2) && (*((uint *)GEN_TOP(((int)this + 0x1a4))) != uVar2)) {
    *((uint *)GEN_TOP(((int)this + 0x1a4))) = uVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007a0650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  F_00557670(param_1 GEN_EDX_FWD,0);
  uVar2 = *((uint *)GEN_TOP((param_2 + 8)));
  if ((-1 < (int)uVar2) && (*((uint *)GEN_TOP(((int)this + 0x1a8))) != uVar2)) {
    *((uint *)GEN_TOP(((int)this + 0x1a8))) = uVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007a06e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a06e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a06e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  F_00557670(param_1 GEN_EDX_FWD,0);
  F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  iVar2 = param_2[2];
  (*(char * PTR32 *)(gen_frame + 0x0)) = "";
  (*(undefined2 *)(gen_frame + 0xa)) = 1;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + iVar2 * 0x24 + 0x308)));
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*param_2 + 0x70)));
  }
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
  uVar3 = F_0055dcb0();
  uVar3 = F_00588780(uVar3 + 0xe0 GEN_EDX_ARG,4,(uint)bVar1,uVar4,&(*(char * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar3;
}

/* ref: FUN_007a0760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  F_00557670(param_1 GEN_EDX_FWD,0);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13a)));
  uVar2 = F_0055dcb0();
  uVar2 = F_00596cb0(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,(uint)bVar1,0);
  return uVar2;
}

/* ref: FUN_007a07a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a07a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_FWD)));
  F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x1c4))));
  if (*((char *)GEN_TOP(((int)this + param_1 * 8 + 0x1ca))) != '\0') {
    uVar1 = F_0059d640(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x65);
    return uVar1;
  }
  uVar1 = F_0059d640(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,0x11);
  return uVar1;
}

/* ref: FUN_007a07f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a07f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a07f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_2;
  while( true ) {
    if (param_3 == '\0') {
      uVar1 = uVar1 + 1;
      if (3 < (int)uVar1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        uVar1 = 3;
      }
    }
    if ((*((uint *)GEN_TOP((param_1 + 0x1a0))) & 1 << GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1)) != 0) break;
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_007a0840 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a0840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x10);
  if (*((int *)GEN_TOP(((int)this + 0x19c))) != param_1) {
    *((int *)GEN_TOP(((int)this + 0x19c))) = param_1;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x180)));
    uVar3 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar3 + 0xc0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x19c)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a08e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a08e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a08e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_0058d480((int)this + 0x188 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x38))),0,0x150);
  return (uint)this;
}

/* ref: FUN_007a0950 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a0950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  char cVar1;
  undefined4 * puVar2;
  undefined1 uVar3;
  undefined * this;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  if (param_2 < 6) {
    puVar2 = ((undefined4 *)GEN_TOP((param_1 + (param_2 + 1) * 0x38)));
    this = ((undefined *)GEN_TOP(*puVar2));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
      (*(undefined4 *)(gen_frame + 0x0)) = uVar4;
      uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x7c)));
      (*(undefined4 *)(gen_frame + 0x4)) = uVar5;
      uVar3 = *((undefined1 *)GEN_TOP(((int)this + 0x80)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (char)uVar4;
      cVar6 = (char)(*(undefined4 *)(gen_frame + 0x0));
      (*(undefined1 *)(gen_frame + 0x8)) = uVar3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = (char)(*(undefined4 *)(gen_frame + 0x0)) + '\x01';
      (*(char *)(gen_frame + 0xf)) = (char)(*(undefined4 *)(gen_frame + 0x4));
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((undefined3)((uint)uVar5 >> 8)));
      cVar1 = (char)(*(undefined4 *)(gen_frame + 0x0)) + '\x02';
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)((undefined3)uVar4));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 3)) = cVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar1,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
      F_00561740(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (*(char *)(gen_frame + 0xf));
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(*(char *)(gen_frame + 0xf)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = cVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 3)) = cVar6;
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar6,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
      if (0 < (int)param_2) {
        if (param_3 == '\0') {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = (*(char *)(gen_frame + 0xf)) - 3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11((*(char *)(gen_frame + 0xf)) - 3,(*(char *)(gen_frame + 0xf)));
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = (*(char *)(gen_frame + 0xf)) - 4;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11((*(char *)(gen_frame + 0xf)) - 4,(*(char *)(gen_frame + 0xf)));
        }
      }
      if ((int)param_2 < 5) {
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = (*(char *)(gen_frame + 0xf)) + '\x03';
        gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12((*(char *)(gen_frame + 0xf)) + '\x03',(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
      }
      F_00561740(((undefined *)GEN_TOP(puVar2[8])) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = cVar6;
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar6);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = cVar1;
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),cVar1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 3)) = (*(char *)(gen_frame + 0xf));
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13((*(char *)(gen_frame + 0xf)),(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
      if (0 < (int)param_2) {
        if (param_3 == '\0') {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = cVar6 - 1;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11(cVar6 - 1,cVar1);
        }
        else {
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = cVar6 - 3;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11(cVar6 - 3,cVar1);
        }
      }
      if ((int)param_2 < 5) {
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = cVar6 + '\x05';
        gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(cVar6 + '\x05',(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
      }
      F_00561740(((undefined *)GEN_TOP(puVar2[9])) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),2);
    }
  }
  return;
}

/* ref: FUN_007a0a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_0058d590(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this GEN_EDX_ARG);
    F_00596b10(((undefined *)GEN_TOP((iVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
    F_00596b10(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 0xe0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    uVar2 = F_00596b10(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 0xe0))) GEN_EDX_ARG,
                         *((undefined4 *)GEN_TOP(((int)this + 0x34))));
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
    local_8 = 2;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x10))) {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x1c4)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x38))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
        F_00596b10(((undefined *)GEN_TOP((iVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
        uVar2 = F_0058d590(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_007a0af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 in_ecx;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x24)));
  do {
    in_ecx = puVar3[-3];
    F_0055a300(in_ecx GEN_EDX_FWD,0);
    F_0055a3c0(in_ecx GEN_EDX_ARG,0);
    F_00596b10(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 0xe0))) GEN_EDX_ARG,*puVar3);
    uVar1 = param_1;
    if ((-1 < (int)param_1) && ((int)param_1 <= iVar2)) {
      F_00584110(((undefined *)GEN_TOP(puVar3[-2])) GEN_EDX_ARG,"");
      uVar1 = F_00584110(((undefined *)GEN_TOP(puVar3[-1])) GEN_EDX_ARG,"");
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar2 < 2);
  return uVar1;
}

/* ref: FUN_007a0b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c4))) != 0) {
    uVar1 = F_0056a410(*((undefined4 *)GEN_TOP(((int)this + 0x1b8))));
    in_EAX = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar1);
  }
  return in_EAX;
}

/* ref: FUN_007a0ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  
  if (((param_1 < 6) && (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), pvVar1 != ((undefined *)GEN_TOP(0x0)))
      ) && (*((char *)GEN_TOP(((int)pvVar1 + 0x35))) != '\0')) {
    return *((uint *)GEN_TOP(((int)pvVar1 + 0x30)));
  }
  return 0;
}

/* ref: FUN_007a0bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  if ((((param_1 < 6) &&
       (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
      (*((char *)GEN_TOP(((int)pvVar1 + 0x35))) != '\0')) && (*((int *)GEN_TOP(((int)pvVar1 + 0x10))) != 0)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x10))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x10))) GEN_EDX_FWD);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_007a0c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (((param_1 < 6) &&
      (pvVar1 = ((undefined *)GEN_TOP(((int)this + (param_1 + 1) * 0x38))), uVar2 = 0, pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
     (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c))), uVar2 = 0, pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
    uVar2 = F_00584110(pvVar1 GEN_EDX_FWD,param_2);
  }
  return uVar2;
}

/* ref: FUN_007a0c50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a0c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined * this;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x260))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_0055e2f0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x260))) GEN_EDX_FWD,0x15)));
    F_0059d670(this GEN_EDX_ARG,(param_2 == '\0') + 0x65);
  }
  return;
}

/* ref: FUN_007a0c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x7c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_FWD,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x78))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007a0cb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a0cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a0cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*((int *)GEN_TOP(((int)this + 0x260))) != 0) {
    F_00584110(*(undefined * PTR32 *)this GEN_EDX_FWD,param_1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_3);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_4);
    uVar1 = F_00568410(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    uVar1 = F_0055e380(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x260))) GEN_EDX_ARG,uVar1);
    F_0058f730(((undefined *)GEN_TOP((uVar1 + 4))) GEN_EDX_ARG,param_2,0,6);
    uVar5 = (uint)*((ushort *)GEN_TOP(((int)this + 0x14)));
    uVar1 = (uint)*((ushort *)GEN_TOP(((int)this + 0x12)));
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)this + 0x10)));
    uVar9 = *(undefined4 *)this;
    uVar2 = F_0055e2f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x260))) GEN_EDX_ARG,2);
    uVar7 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    uVar8 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar3 = F_0055e2f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x260))) GEN_EDX_ARG,4);
    F_007851d0(uVar3,uVar6,uVar7,uVar8,uVar2,uVar9,uVar4,uVar1,uVar5);
  }
  return;
}

/* ref: FUN_007a0d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a0d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 1;
  piVar4 = ((int *)GEN_TOP(((int)this + 0x18)));
  iVar2 = 8;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar4));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_FWD,(uint)((param_1 & uVar3) != 0));
    }
    piVar4 = piVar4 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return in_EAX;
}

/* ref: FUN_007a0da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  uVar2 = param_2;
  iVar1 = param_2 * 8;
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x18)));
  param_2 = 8;
  pbVar3 = ((byte *)GEN_TOP((param_1 + iVar1)));
  do {
    pbVar4 = pbVar3;
    if (((undefined *)GEN_TOP(puVar5[0x10])) != ((undefined *)GEN_TOP(0x0))) {
      pbVar4 = pbVar3 + 8;
      if ((*pbVar3 & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(pbVar3 + 4);
      }
      uVar2 = F_00568410(((undefined *)GEN_TOP(puVar5[0x10])) GEN_EDX_FWD);
      uVar2 = F_00561570(((undefined *)GEN_TOP(*puVar5)) GEN_EDX_ARG,uVar2);
      uVar2 = F_0058f730(((undefined *)GEN_TOP((uVar2 + 4))) GEN_EDX_ARG,uVar6,0,6);
    }
    puVar5 = puVar5 + 1;
    param_2 = param_2 - 1;
    pbVar3 = pbVar4;
  } while (param_2 != 0);
  return uVar2;
}

/* ref: FUN_007a0e20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_0058d4b0(((undefined *)GEN_TOP(((int)this + 0x3a0))) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a0e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1b98)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a0e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    if ((*((byte *)GEN_TOP((param_2 + 0x60))) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP((param_2 + 100)));
    }
    if ((*((byte *)GEN_TOP((param_2 + 0x58))) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((param_2 + 0x5c)));
    }
    if ((*((byte *)GEN_TOP((param_2 + 0x50))) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
    }
    if ((*((byte *)GEN_TOP((param_2 + 0x48))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x4c)));
    }
    F_007a0cb0(this + 0x180 GEN_EDX_FWD,uVar2,uVar1,uVar4,uVar3);
  }
  return 1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a0ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a0ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a0ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  short sVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00557670(param_1 GEN_EDX_FWD,0);
  uVar2 = *((uint *)GEN_TOP((param_2 + 8)));
  if ((-1 < (int)uVar2) && (*((uint *)GEN_TOP(((int)this + 0x1514))) != uVar2)) {
    *((uint *)GEN_TOP(((int)this + 0x1514))) = uVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1fc))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1fc))) GEN_EDX_ARG,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) GEN_EDX_ARG,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    sVar1 = *((short *)GEN_TOP(((int)this + (*((int *)GEN_TOP((param_2 + 8))) * 5 + 0xaa) * 8)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0xc)) = (int)sVar1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007a0fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a0fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  F_00557670(param_1 GEN_EDX_FWD,0);
  iVar3 = *param_2;
  iVar1 = param_2[2] * 0x28;
  bVar5 = F_00584440(*((undefined * PTR32 *)GEN_TOP((iVar3 + 0x104))) GEN_EDX_ARG,
                       *((undefined4 *)GEN_TOP(((int)this + param_2[2] * 0x28 + 0x554))));
  F_00560760(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x554)));
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  bVar2 = *((byte *)GEN_TOP(((int)this + 0x13a)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + iVar1 + 0x548)));
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  uVar4 = *((undefined4 *)GEN_TOP((iVar3 + 0x1e4)));
  uVar6 = F_0055dcb0();
  uVar6 = F_00588780(uVar6 + 0xe0 GEN_EDX_ARG,(uint)(bVar5 != 0) * 2 + 4,(uint)bVar2,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
  return uVar6;
}

/* ref: FUN_007a1050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00557670(param_1 GEN_EDX_FWD,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_007a1080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x1f8))) != 0) {
    F_0059b390(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1f8))),1,0);
  }
  F_00557670(param_1 GEN_EDX_ARG,0);
  bVar1 = F_005a9130(this GEN_EDX_ARG,7);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007a10c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a10c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a10c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  if (5 < param_1) {
    return 1;
  }
  iVar2 = (int)this + param_1 * 0x38 + 0x250;
  if ((iVar2 == 0) || (*((char *)GEN_TOP((iVar2 + 0x35))) == '\0')) {
    (*(int *)(gen_frame + 0x0)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((iVar2 + 0x30)));
    if ((*(int *)(gen_frame + 0x0)) < 0) {
      return 1;
    }
  }
  if ((((iVar2 != 0) && (*((char *)GEN_TOP((iVar2 + 0x35))) != '\0')) && (*((int *)GEN_TOP((iVar2 + 0x10))) != 0)) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar2 + 0x10))) + 0x3c))))(*((int * PTR32 *)GEN_TOP((iVar2 + 0x10))) GEN_EDX_FWD), uVar1 != 0))
  {
    F_0059b340(this GEN_EDX_ARG,uVar1,1,0);
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x10)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x0));
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x4)));
  this_00 = &(*(uint *)(gen_frame + 0x1c));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return 1;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf56 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a11d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a11d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined4 * puVar5;
  
  if (this[0x1518] != (undefined1)0x0) {
    pAVar4 = this + 0x198;
    (*(int *)(gen_frame + 0x10)) = 8;
    do {
      F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
      AVar2 = this[0x13a];
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(pAVar4 + 0x1350);
      uVar3 = F_0055dcb0();
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      puVar5 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x38))))(*(int * PTR32 *)pAVar4 GEN_EDX_ARG);
      F_00590ad0((*(uint *)(gen_frame + 0xc)) + 0xe0 GEN_EDX_ARG,2,(uint)(byte)AVar2,uVar3,puVar5);
      pAVar4 = pAVar4 + 4;
      iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
      (*(int *)(gen_frame + 0x10)) = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf57 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a1250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  if (this[0x1518] != (undefined1)0x0) {
    pAVar3 = this + 0x198;
    local_8 = 8;
    do {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
      pAVar3 = pAVar3 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}

/* ref: FUN_007a12a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a12a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a12a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 1000))));
  }
  uVar1 = F_0059d640(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + param_1 * 8 + 0x3e6))));
  return uVar1;
}

/* ref: FUN_007a12e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a12e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a12e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_FWD)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x528))));
  }
  return uVar1;
}

/* ref: FUN_007a1320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1320(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = param_2;
  while( true ) {
    if (param_3 == '\0') {
      uVar1 = uVar1 + 1;
      if (7 < (int)uVar1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        uVar1 = 7;
      }
    }
    if ((*((uint *)GEN_TOP((param_1 + 0x1508))) & 1 << GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1)) != 0) break;
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_007a1370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1370(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar2;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x14e4))) = param_2;
  if (param_3 != '\0') {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x208)));
      break;
    case 1: ;
      uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x210)));
      break;
    case 2: ;
      uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x20c)));
      break;
    case 3: ;
      uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x1fc)));
      break;
    default: ;
      goto switchD_007a138a_default;
    }
    F_0059b390(param_1 GEN_EDX_FWD,uVar2,1,0);
  }
switchD_007a138a_default: ;
  if ((*((int *)GEN_TOP((param_1 + 0x14e4))) != 0) && (*((int *)GEN_TOP((param_1 + 0x14e4))) != 2)) {
    bVar1 = F_0056b630(param_1 GEN_EDX_ARG,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(param_1 GEN_EDX_ARG,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: Client::UI2::AddonFishingNote::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a1420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1bb8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFishingNote::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a1430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishingNote::vf56 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar3 = F_00560760(((uint *)(gen_frame + 0x0)) GEN_EDX_FWD);
  pAVar5 = this + 0x1a4;
  (*(int *)(gen_frame + 0x10)) = 2;
  do {
    if ((*(int *)pAVar5 != 0) && (uVar3 = *(uint *)(pAVar5 + 0xd2c), uVar3 != 0)) {
      AVar2 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar3;
      uVar3 = F_0055dcb0();
      puVar6 = ((uint *)(gen_frame + 0x0));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5 GEN_EDX_ARG);
      uVar3 = F_00590ad0(uVar3 + 0xe0 GEN_EDX_ARG,2,(uint)(byte)AVar2,uVar4,puVar6);
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    pAVar5 = pAVar5 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
  } while (iVar1 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonFishingNote::vf57 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a14c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a14c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x1a4;
  local_8 = 2;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return;
}

/* ref: FUN_007a1510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (((999 < param_1) && ((char)param_2[1] == '\0')) && (*param_2 == 2)) {
    F_0059b390(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x184))),1,0);
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1580 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    F_0059b390(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x184))),1,0);
    return 1;
  }
  if ((((param_1 == 1) && (iVar2 = *((int *)GEN_TOP((param_2 + 8))), -1 < iVar2)) &&
      (iVar2 < *((int *)GEN_TOP(((int)this + 0xedc))))) &&
     ((bVar1 = *((byte *)GEN_TOP(((int)this + iVar2 * 0xc + 0x2b0))), (~bVar1 & 1) != 0 &&
      ((bVar1 & 0x10) != 0)))) {
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1ac))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1ac))) GEN_EDX_ARG);
    F_0059b340(this GEN_EDX_ARG,uVar3,uVar4,uVar5);
  }
  return 0;
}

/* ref: FUN_007a1600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  
  if ((param_1 == 1) && (*((int *)GEN_TOP(((int)this + 0x180))) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x180)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x74))))(piVar1 GEN_EDX_FWD,piVar1[0x30],0);
    F_0059b390(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x180))),1,0);
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1680 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((((param_1 == 1) && (iVar2 = *((int *)GEN_TOP((param_2 + 8))), -1 < iVar2)) &&
      (iVar2 < *((int *)GEN_TOP(((int)this + 0xedc))))) &&
     ((*((byte *)GEN_TOP(((int)this + iVar2 * 0xc + 0x2b0))) & 1) != 0)) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + (iVar2 * 3 + 0xab) * 4)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1760 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 - 1000U < 10) {
    F_0056b630(this GEN_EDX_FWD,0x18af1,7,0,9,0,0);
    return 1;
  }
  F_0056b630(this GEN_EDX_ARG,0x18af0,7,0,9,0,0);
  return 1;
}

/* ref: FUN_007a17a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a17a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a17a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * this_00;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*((char *)GEN_TOP(((int)this + 0xee2))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0xee2))) = 0;
    uVar1 = F_0055dcb0();
    *((undefined1 *)GEN_TOP((uVar1 + 0x21b))) = 0;
    uVar1 = F_0055dcb0();
    F_005aa060(uVar1 + 0x20c GEN_EDX_ARG,0,0);
    uVar4 = 3;
    uVar3 = 5;
    pvVar2 = this;
    this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
    F_00586850(this_00 GEN_EDX_ARG,uVar3,uVar4,pvVar2);
    uVar4 = 3;
    uVar3 = 4;
    pvVar2 = ((undefined *)GEN_TOP(F_0055dcb0()));
    F_00586850(pvVar2 GEN_EDX_ARG,uVar3,uVar4,this);
  }
  return 1;
}

/* ref: FUN_007a1810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a1810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(*param_2 GEN_EDX_FWD)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x268))));
  }
  return uVar1;
}

/* ref: FUN_007a1840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4)));
  iVar4 = 0;
  *((uint *)GEN_TOP(((int)this + 0xed8))) = uVar2;
  if (0 < (int)uVar2) {
    uVar2 = 0xc;
    puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x26c)));
    do {
      *(undefined4 *)(puVar3 - 2) = *((undefined4 *)GEN_TOP(((uVar2 - 4) + *((int *)GEN_TOP((param_2 + 0x20))))));
      *puVar3 = *((undefined2 *)GEN_TOP((uVar2 + *((int *)GEN_TOP((param_1 + 0x20))))));
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0xed8))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x180))) != 0) {
    F_0059ead0(*((int *)GEN_TOP(((int)this + 0x180))) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 0xed8))),0,1);
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x180))) + 0x74))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,uVar1,0);
    uVar2 = F_005623b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,uVar1);
  }
  return uVar2;
}

/* ref: FUN_007a18d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a18d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a18d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  pbVar3 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x2c)));
  *((byte * PTR32 *)GEN_TOP(((int)this + 0xedc))) = pbVar3;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x30)));
  local_c = 0;
  if (0 < (int)pbVar3) {
    iVar4 = 0x34;
    local_8 = 0x28;
    pbVar3 = ((byte *)GEN_TOP(((int)this + 0x2b0)));
    do {
      *(undefined4 *)(pbVar3 - 8) = *((undefined4 *)GEN_TOP((local_8 + *((int *)GEN_TOP((param_2 + 0x20))))));
      *(undefined4 *)(pbVar3 - 4) = *((undefined4 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP((param_1 + 0x20))))));
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      local_8 = local_8 + 4;
      *pbVar3 = *pbVar3 ^ ((byte)(*((uint *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0x20)))))) >> 4) ^ *pbVar3) & 1;
      uVar2 = *((uint *)GEN_TOP((iVar4 + 8 + *((int *)GEN_TOP((param_1 + 0x20))))));
      *pbVar3 = ((((byte)(uVar2 >> 2) & 1) * '\x04' | (byte)(uVar2 >> 1) & 1) * '\x02' |
                (byte)uVar2 & 1) * '\x02' | *pbVar3 & 0xe1;
      local_c = local_c + 1;
      iVar4 = iVar4 + 0xc;
      pbVar3 = pbVar3 + 0xc;
    } while (local_c < *((int *)GEN_TOP(((int)this + 0xedc))));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x184))) != ((undefined *)GEN_TOP(0x0))) {
    F_00596e00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_FWD,param_1,param_2,0xd,10,3,0,
                 *((undefined4 *)GEN_TOP(((int)this + 0xedc))),(int)this + 0x25c);
    pbVar3 = ((byte *)GEN_TOP(F_00592870(*((undefined4 *)GEN_TOP(((int)this + 0x184))) GEN_EDX_ARG,uVar1,0)));
  }
  return (uint)pbVar3;
}

/* ref: FUN_007a19e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a19e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a19e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) != ((undefined *)GEN_TOP(0x0))) {
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x428))));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) != ((undefined *)GEN_TOP(0x0))) {
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x42c))));
  }
  return;
}

/* ref: FUN_007a1a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  uVar2 = 0x67;
  if ((*((int *)GEN_TOP((uVar1 + 0xc34))) != 0) && (uVar2 = 0x66, *((int *)GEN_TOP((uVar1 + 0xc40))) != 0)) {
    uVar2 = 0x65;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x198))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x198))) GEN_EDX_FWD,
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x430))));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG,
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x434))));
  }
  if (*((ushort *)GEN_TOP(((int)this + 0xee0))) != uVar2) {
    *((short *)GEN_TOP(((int)this + 0xee0))) = (short)uVar2;
    uVar1 = F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_007a1ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a1ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca8f4));
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x300))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x304))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x308))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x234)));
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  iVar3 = 0x19;
  do {
    *puVar2 = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFishGuide::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x1a8;
  local_8 = 0x19;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
  F_005a92d0(this GEN_EDX_ARG,1,0x3f,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x3a,1);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFishGuide::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1bc8)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFishGuide::vf46 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a1c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::UI2::AddonFishGuide::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a1c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonFishGuide::vf56 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a1c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 AVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar3 = F_00560760(((uint *)(gen_frame + 0x0)) GEN_EDX_FWD);
  pAVar5 = this + 0x180;
  (*(int *)(gen_frame + 0x10)) = 2;
  do {
    if ((*(int *)pAVar5 != 0) && (uVar3 = *(uint *)(pAVar5 + 0x178), uVar3 != 0)) {
      AVar2 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar3;
      uVar3 = F_0055dcb0();
      puVar6 = ((uint *)(gen_frame + 0x0));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5 GEN_EDX_ARG);
      uVar3 = F_00590ad0(uVar3 + 0xe0 GEN_EDX_ARG,2,(uint)(byte)AVar2,uVar4,puVar6);
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    pAVar5 = pAVar5 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
  } while (iVar1 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonFishGuide::vf57 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a1d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a1d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x180;
  local_8 = 2;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar1 = F_0055dcb0();
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x38))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      F_00596b10(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,uVar2);
    }
    pAVar3 = pAVar3 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return;
}

/* ref: FUN_007a1d50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a1d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  int iVar2;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((param_1 < 8) && (*((char *)GEN_TOP(((int)this + 0x308))) != '\0')) &&
     (*((uint *)GEN_TOP(((int)this + 0x304))) != param_1)) {
    *((uint *)GEN_TOP(((int)this + 0x304))) = param_1;
    iVar2 = 0;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x188)));
    do {
      if (*piVar1 != 0) {
        F_0059dde0(*piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x304))) == iVar2);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007a1e40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a1e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint * this_00;
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0x19) && (*((char *)GEN_TOP(((int)this + 0x309))) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0xc)) = param_1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar1 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_007a1ed0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a1ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a1ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (0x18 < param_1) {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x1a8)));
  if ((piVar1 == ((int *)GEN_TOP(0x0))) ||
     (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))(piVar1 GEN_EDX_FWD), *((uint *)GEN_TOP(((int)this + 0xa4))) == uVar4)) {
    if (*((int *)GEN_TOP(((int)this + param_1 * 8 + 0x230))) < 1) {
      return 0;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x230)));
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x234)));
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar5 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  else {
    *((uint *)GEN_TOP(((int)this + 0xa4))) = uVar4;
  }
  return 1;
}

/* ref: FUN_007a1fd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a1fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a1fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  int local_8;
  
  iVar2 = 0xc;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  local_8 = 0x19;
  do {
    if (((undefined *)GEN_TOP(*puVar3)) != ((undefined *)GEN_TOP(0x0))) {
      this_00 = ((undefined *)GEN_TOP(F_00561550(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_FWD,5)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4 + iVar2)));
        if (iVar1 < 1) {
          F_0058f5b0(this_00 GEN_EDX_ARG);
        }
        else {
          F_00591c00(this_00 GEN_EDX_ARG,iVar1,0);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x28))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG,(uint)(0 < iVar1));
      }
    }
    iVar2 = iVar2 + 0xc;
    puVar3 = puVar3 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return;
}

/* ref: FUN_007a2050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x20)));
  iVar1 = *((int *)GEN_TOP((uVar3 + 0x138)));
  if (0 < iVar1) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x214))) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x214))) GEN_EDX_FWD,
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0xc))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x218))) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x218))) GEN_EDX_ARG,
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x14))));
    }
    if (*((int *)GEN_TOP(((int)this + 0x21c))) != 0) {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x13c)));
      bVar2 = F_0055a300(*((int *)GEN_TOP(((int)this + 0x21c))) GEN_EDX_ARG,iVar4 != 0);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (0 < iVar4) {
        uVar5 = 5;
        this_00 = ((undefined *)GEN_TOP(F_0055dcb0()));
        uVar3 = F_0055ba90(this_00 GEN_EDX_ARG,iVar4,uVar5);
        uVar3 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x21c))) GEN_EDX_ARG,uVar3);
      }
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x220))) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x220))) GEN_EDX_ARG,
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x18))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x224))) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG,
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x1c))));
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x300))) != iVar1) {
    uVar3 = F_0059d6a0(this GEN_EDX_ARG,(iVar1 < 1) + 0x65,0,0);
    *((int *)GEN_TOP(((int)this + 0x300))) = iVar1;
  }
  return uVar3;
}

/* ref: FUN_007a2140 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x300)))) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x210))) != ((undefined *)GEN_TOP(0x0))) {
      F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x210))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 0x10))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x228))) != ((undefined *)GEN_TOP(0x0))) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0x140)));
      if (0 < iVar1) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x228))) GEN_EDX_ARG,iVar1,0);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x22c))) != ((undefined *)GEN_TOP(0x0))) {
        F_0059d670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x22c))) GEN_EDX_ARG,((iVar1 < 1) - 1 & 0xffffffac) + 0x65);
      }
    }
  }
  return;
}

/* ref: Client::UI2::AddonFishGuide::vf52 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a21b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a21b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x304);
  if (*param_1 == 0xf) {
    iVar4 = iVar1 + 1;
    if (7 < iVar4) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) goto LAB_007a21f6;
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar4 = iVar1 - 1;
    if (iVar4 < 0) {
      iVar4 = 7;
    }
    if (iVar4 < iVar1) goto LAB_007a21f6;
  }
  if ((char)param_1[1] == '\x02') {
    return 1;
  }
LAB_007a21f6: ;
  bVar2 = F_007a1d50(this GEN_EDX_FWD,iVar4);
  if (bVar2 != 0) {
    uVar3 = F_0055dcb0();
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x1c))) + 0x20))) = 1;
    uVar3 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_007a2240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca9f4));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x25c))) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFishRecord::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a22a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a22a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1bd4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFishRecord::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a22b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a22b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined1 AVar1;
  undefined * pAVar2;
  byte * pbVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((((byte)this[0xf9] & 1) != 0) && (param_2 != ((byte *)GEN_TOP(0x0)))) && (*(int *)(this + 0x180) != 0))
  {
    if ((*param_2 & 0xf) == 0) {
      AVar1 = (undefined1)0x0;
    }
    else {
      AVar1 = SUB41(*(undefined4 *)(param_2 + 4),0);
    }
    this[0x25c] = AVar1;
    pAVar2 = this + 0x188;
    pbVar3 = param_2 + 0x1c;
    iVar5 = 6;
    do {
      if ((pbVar3[-0x14] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 - 0x10);
      }
      *(undefined4 *)(pAVar2 - 4) = uVar4;
      if ((pbVar3[-0xc] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 - 8);
      }
      *(undefined4 *)(pAVar2 + 0xc) = uVar4;
      if ((pbVar3[-4] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)pbVar3;
      }
      *(undefined4 *)pAVar2 = uVar4;
      if ((pbVar3[4] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 8);
      }
      *(undefined4 *)(pAVar2 + 0x10) = uVar4;
      if ((pbVar3[0xc] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x10);
      }
      *(undefined4 *)(pAVar2 + 4) = uVar4;
      if ((pbVar3[0x14] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x18);
      }
      *(undefined4 *)(pAVar2 + 8) = uVar4;
      if ((pbVar3[0x1c] & 0xf) == 0) {
        AVar1 = (undefined1)0x0;
      }
      else {
        AVar1 = SUB41((uint)*(undefined4 *)(pbVar3 + 0x20) >> 0x10,0);
      }
      pAVar2[0x19] = AVar1;
      if ((pbVar3[0x1c] & 0xf) == 0) {
        AVar1 = (undefined1)0x0;
      }
      else {
        AVar1 = SUB41(*(undefined4 *)(pbVar3 + 0x20),0);
      }
      pAVar2[0x18] = AVar1;
      if ((pbVar3[0x24] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar3 + 0x28);
      }
      *(undefined4 *)(pAVar2 + 0x14) = uVar4;
      *(undefined4 *)(pAVar2 + 0x1a) = 0;
      pbVar3 = pbVar3 + 0x40;
      pAVar2 = pAVar2 + 0x24;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    if (*(int *)(this + 0x180) != 0) {
      F_0059ead0(*(int *)(this + 0x180) GEN_EDX_FWD,6,0,1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x74))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,0,0);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonFishRecord::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a23e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a23e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a9130(this GEN_EDX_FWD,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonContentsFinder::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00580fa0(this + 0x18c GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinder::vf37 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 AVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(int *)(this + 0x1c4) != 0) {
    F_00588cd0(this + 0x18c GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(int *)(this + 0x1c4),0);
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonContentsFinder::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2500(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7a2500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x18c GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinder::vf39 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a2530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x18c GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonContentsFinder::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1c58)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinder::vf49 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00580f60(this + 0x18c GEN_EDX_FWD,0);
  uVar1 = F_005a9190((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a2580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x218)));
  iVar3 = param_2 + 0x1500;
  iVar2 = 0xa1;
  do {
    uVar1 = F_00596cd0(this_00 GEN_EDX_FWD,iVar3);
    iVar3 = iVar3 + 8;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007a25c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a25c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x10);
  uVar1 = param_1;
  if (*((uint *)GEN_TOP(((int)this + 0x720))) != param_1) {
    *((uint *)GEN_TOP(((int)this + 0x720))) = param_1;
    (*(uint *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007a2630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a2630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a2660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a2660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a2690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a2690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  short sVar1;
  undefined4 uVar2;
  undefined * this_00;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xf8)));
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fc))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 0xf4))));
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG,uVar2);
    sVar1 = *((short *)GEN_TOP(((int)this + 0x734)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x200)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fc)));
    uVar4 = F_00577bc0(this_00 GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    uVar3 = F_00559d70(this_00 GEN_EDX_ARG);
    uVar4 = F_00559eb0(uVar2 GEN_EDX_ARG,(uint)(ushort)((short)uVar4 + uVar3 + sVar1));
  }
  return uVar4;
}

/* ref: FUN_007a2720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined * this_00;
  uint uVar1;
  
  ((uint *)(gen_frame + 0x10))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  if ((*((byte *)GEN_TOP((param_2 + 0x60))) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_2 + 100)));
  }
  if ((*((byte *)GEN_TOP((param_2 + 0x58))) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_2 + 0x5c)));
  }
  if ((*((byte *)GEN_TOP((param_2 + 0x70))) & 0xf) == 0) {
    (*(int *)(gen_frame + 0x0)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((param_2 + 0x74)));
  }
  if ((*((byte *)GEN_TOP((param_2 + 0x78))) & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 + 0x7c)));
  }
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,0xc)));
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,0xe);
  F_0058f730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x214))) + 4))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),0,6);
  if ((*(int *)(gen_frame + 0x0)) == 3) {
    F_0055a300(this_00 GEN_EDX_ARG,0);
  }
  else {
    F_0059d670(this_00 GEN_EDX_ARG,((uint *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x0)))]);
    F_0055a300(this_00 GEN_EDX_ARG,1);
  }
  F_0055a300(uVar1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) != 3);
  F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x204))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)));
  uVar1 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x208))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_007a2830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a2830(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a2830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 == 5) {
    uVar1 = 0x3d;
  }
  else if (param_1 == 6) {
    return 3;
  }
  return uVar1;
}

/* ref: FUN_007a2860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cac04));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a28f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a28f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,0,0x32,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x36,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1c68)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a2970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a29c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a29c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a29c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x43;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cad04));
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a29f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a29f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,0,2,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x32,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x36,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1c80)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a2a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x11;
  if ((*((byte *)GEN_TOP((param_2 + 0x30))) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((param_2 + 0x34)));
  }
  if (iVar1 == 1) {
    uVar2 = 0x66;
  }
  else {
    if (iVar1 == 2) {
      F_0059d6a0(this GEN_EDX_FWD,0x67,1,0);
      return 1;
    }
    if (iVar1 == 3) {
      F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
      return 1;
    }
  }
  F_0059d6a0(this GEN_EDX_ARG,uVar2,1,0);
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a2ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a2ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a2b20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x80;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cae04));
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_007a2b70(void)
{
  GEN_ENTER(0x7a2b70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1c98)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pAVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x4))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  bVar1 = param_2[8];
  ((uint *)(gen_frame + 0x4))[3] = 5;
  ((uint *)(gen_frame + 0x4))[4] = 6;
  ((uint *)(gen_frame + 0x4))[5] = 7;
  ((uint *)(gen_frame + 0x4))[0] = 0x65;
  ((uint *)(gen_frame + 0x4))[1] = 0x66;
  ((uint *)(gen_frame + 0x4))[2] = 0x67;
  if ((bVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  pvVar3 = ((undefined *)GEN_TOP(F_0055e340(this GEN_EDX_FWD,2)));
  F_00584110(pvVar3 GEN_EDX_ARG,uVar2);
  if ((*param_2 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = *(uint *)(param_2 + 4);
  }
  uVar6 = 0;
  pAVar5 = this + 0x180;
  do {
    uVar4 = F_0055e2f0(this GEN_EDX_ARG,((uint *)(gen_frame + 0x4))[(int)(uVar6 + 3)]);
    pvVar3 = ((undefined *)GEN_TOP(F_00559c20(uVar4 GEN_EDX_ARG)));
    *(undefined * PTR32 *)(pAVar5 + 0xc) = pvVar3;
    uVar4 = F_00561530(pvVar3 GEN_EDX_ARG,3);
    *(uint *)pAVar5 = uVar4;
    uVar6 = uVar6 + 1;
    pAVar5 = pAVar5 + 4;
  } while (uVar6 < 3);
  if (((*(uint *)(gen_frame + 0x0)) & 2) == 0) {
    uVar2 = 0x65;
    pvVar3 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,4)));
    F_0059d670(pvVar3 GEN_EDX_ARG,uVar2);
    uVar2 = 0x68;
    *(undefined4 *)(this + 0x198) = 1;
    pvVar3 = ((undefined *)GEN_TOP(F_00561490(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,4)));
    F_0059d670(pvVar3 GEN_EDX_ARG,uVar2);
  }
  else {
    uVar2 = 0x11;
    pvVar3 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,4)));
    F_0059d670(pvVar3 GEN_EDX_ARG,uVar2);
    *(undefined4 *)(this + 0x198) = 3;
    uVar6 = 0;
    pAVar5 = this + 0x18c;
    do {
      uVar4 = ((uint *)(gen_frame + 0x4))[(int)(uVar6)];
      pvVar3 = ((undefined *)GEN_TOP(F_00561490(*(undefined * PTR32 *)pAVar5 GEN_EDX_ARG,4)));
      F_0059d670(pvVar3 GEN_EDX_ARG,uVar4);
      uVar6 = uVar6 + 1;
      pAVar5 = pAVar5 + 4;
    } while (uVar6 < 3);
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_ARG,param_1,param_2);
  return uVar6;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a2d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a2d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_007a2d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10caf04));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1cac)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a2db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a2db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_00557670(param_3 GEN_EDX_FWD,0);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      F_00557670(param_3 GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonMaterialize::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a2e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1cc4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMaterialize::vf47 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a2e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a2e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI2::AddonMaterialize::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a2e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  this_01 = (gen_frame + 0x10);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x1f) {
    uVar1 = F_0055dcb0();
    F_00560760(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xc)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + param_4[2] * 0x10c + 0x288);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xc)) + 3)) = this[param_4[2] * 0x10c + 0x28c];
    (*(int *)(gen_frame + 0xc)) = CONCAT13(this[param_4[2] * 0x10c + 0x28c],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0xc))));
    uVar2 = 0;
    if (*param_4 != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*param_4 + 0x70)));
    }
    uVar1 = F_00588780(uVar1 + 0xe0 GEN_EDX_ARG,4,(uint)(byte)this[0x13a],uVar2,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  }
  else {
    if (uVar1 == 0x20) {
      uVar1 = F_0055dcb0();
      uVar1 = F_00594d90(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,0);
      return uVar1;
    }
    uVar1 = uVar1 - 0x21;
    if (uVar1 == 0) {
      F_00557670(param_3 GEN_EDX_ARG,0);
      if (param_2 == 0) {
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        (*(int *)(gen_frame + 0xc)) = param_4[2];
        (*(undefined4 *)(gen_frame + 0x4)) = 1;
        F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar3 = 1;
        do {
          this_00 = this_00 - 8;
          uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
        return uVar1;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x58))))(*(int * PTR32 *)(this + 0x184) GEN_EDX_ARG,param_4[2]);
      if ((char)uVar1 == '\0') {
        (*(int *)(gen_frame + 0xc)) = param_4[2];
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0x4)) = 2;
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar3 = 1;
        do {
          this_01 = this_01 - 8;
          uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonMaterialize::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a2fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007a2ff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a2ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a2ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb004));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) & 0xdf;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1cdc)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a30a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a30a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a30f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a30f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a30f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xf;
}

/* ref: FUN_007a3100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3110 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3110(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a3110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 >> GEN_SHC((char)param_2 * '\x04' + 8U, (char)param_2 * '\x04' + 8U) & 0xf;
}

/* ref: Client::UI2::AddonMateriaAttach::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00594d90(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttach::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1cf0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMateriaAttach::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a3190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a3190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  
  iVar3 = param_1 * 0xb8 + 0x2a30 + (int)this;
  uVar7 = *((undefined4 *)GEN_TOP((iVar3 + 0xa8)));
  uVar9 = 0;
  pvVar1 = ((undefined *)GEN_TOP(F_00559b90(*param_2 GEN_EDX_FWD)));
  F_00591c00(pvVar1 GEN_EDX_ARG,uVar7,uVar9);
  uVar2 = F_0042a990(iVar3 GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00559ba0(param_2[6] GEN_EDX_ARG)));
  F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  uVar2 = F_0042a990(iVar3 + 0x54 GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00559ba0(param_2[5] GEN_EDX_ARG)));
  F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  iVar3 = (int)*((char *)GEN_TOP((iVar3 + 0xb4)));
  uVar8 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = F_00559ba0(param_2[1] GEN_EDX_ARG);
  uVar2 = F_0057eb30(uVar2 GEN_EDX_ARG,iVar3,uVar4,uVar5,uVar6,uVar8);
  return uVar2;
}

/* ref: FUN_007a3220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3220(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xf;
}

/* ref: FUN_007a3230 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3230(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3240 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3240(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a3240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 >> GEN_SHC((char)param_2 * '\x04' + 8U, (char)param_2 * '\x04' + 8U) & 0xf;
}

/* ref: FUN_007a3260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) & 0xdf;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb104));
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a32b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a32b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a32f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a32f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf41 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a3320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x4)) = 4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,((char *)REFP(0x10c1d0c)),0,6);
  return bVar1;
}

/* ref: FUN_007a3370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a3370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  int iVar6;
  
  uVar5 = F_0055e2f0(this GEN_EDX_FWD,0xd);
  this_00 = ((undefined *)GEN_TOP(F_00559c20(uVar5 GEN_EDX_ARG)));
  uVar5 = F_0055e2f0(this GEN_EDX_ARG,0x14);
  this_01 = ((undefined *)GEN_TOP(F_00559c20(uVar5 GEN_EDX_ARG)));
  uVar5 = F_0055e2f0(this GEN_EDX_ARG,0x24);
  this_02 = ((undefined *)GEN_TOP(F_00559c20(uVar5 GEN_EDX_ARG)));
  if ((*param_2 & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  if ((iVar6 == 0) || (iVar6 == 2)) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this_01 + 0x78)));
    uVar4 = *((undefined4 *)GEN_TOP(((int)this_01 + 0x7c)));
    uVar1 = *((undefined1 *)GEN_TOP(((int)this_01 + 0x80)));
    (*(undefined4 *)(gen_frame + 0x0)) = uVar3;
    uVar2 = *((undefined1 *)GEN_TOP(((int)this_02 + 0x78)));
    (*(undefined4 *)(gen_frame + 0x4)) = uVar4;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 3)) = (undefined1)((uint)uVar3 >> 0x18);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (undefined2)uVar3;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = uVar2;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(uVar2,(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
    (*(undefined1 *)(gen_frame + 0x8)) = uVar1;
    F_00561740(this_01 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    uVar3 = *((undefined4 *)GEN_TOP(((int)this_02 + 0x78)));
    uVar4 = *((undefined4 *)GEN_TOP(((int)this_02 + 0x7c)));
    uVar1 = *((undefined1 *)GEN_TOP(((int)this_02 + 0x80)));
    (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
    uVar2 = *((undefined1 *)GEN_TOP(((int)this_01 + 0x78)));
    (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    (*(undefined1 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (undefined2)((uint)uVar3 >> 0x10);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = uVar2;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = CONCAT11(uVar2,(char)uVar3);
    uVar5 = F_00561740(this_02 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),0);
  }
  else {
    uVar5 = iVar6 - 3;
    if (uVar5 == 0) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x78)));
      uVar1 = *((undefined1 *)GEN_TOP(((int)this_00 + 0x80)));
      (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x7c)));
      (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
      uVar2 = *((undefined1 *)GEN_TOP(((int)this_02 + 0x78)));
      (*(undefined1 *)(gen_frame + 0x14)) = uVar1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 3)) = (undefined1)((uint)uVar3 >> 0x18);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = (undefined2)uVar3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = uVar2;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 0, 3, (unsigned long long)(CONCAT12(uVar2,(undefined2)(*(undefined4 *)(gen_frame + 0xc)))));
      F_00561740(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),0);
      uVar3 = *((undefined4 *)GEN_TOP(((int)this_02 + 0x78)));
      uVar4 = *((undefined4 *)GEN_TOP(((int)this_02 + 0x7c)));
      uVar1 = *((undefined1 *)GEN_TOP(((int)this_02 + 0x80)));
      (*(undefined4 *)(gen_frame + 0x0)) = uVar3;
      uVar2 = *((undefined1 *)GEN_TOP(((int)this_00 + 0x78)));
      (*(undefined4 *)(gen_frame + 0x4)) = uVar4;
      (*(undefined1 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = (undefined2)((uint)uVar3 >> 0x10);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) = uVar2;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11(uVar2,(char)uVar3);
      uVar5 = F_00561740(this_02 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
      return uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_007a3490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3490(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  
  uVar4 = F_0055e2f0(param_1 GEN_EDX_FWD,2);
  uVar2 = F_0055a030(uVar4 GEN_EDX_ARG);
  if (((*((byte *)GEN_TOP((param_3 + 0x40))) & 0xf) == 0) || (*((int *)GEN_TOP((param_3 + 0x44))) == 0)) {
    uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,9);
    uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
    uVar2 = uVar2 - uVar3;
  }
  uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,10);
  fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = (uint)uVar2;
  F_00559f00(uVar4 GEN_EDX_ARG,(float)((float10)(*(uint *)(gen_frame + 0x0)) + fVar6));
  uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
  uVar2 = uVar2 + uVar3;
  if (((*((byte *)GEN_TOP((param_3 + 0x78))) & 0xf) != 0) && (iVar1 = *((int *)GEN_TOP((param_3 + 0x7c))), 0 < iVar1)) {
    uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x10);
    uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
    uVar2 = uVar2 + uVar3 * ((short)iVar1 - 1);
  }
  if (((*((byte *)GEN_TOP(param_3)) & 0xf) == 0) || (*((int *)GEN_TOP((param_3 + 4))) != 3)) {
    uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x11);
    fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x0)) = (uint)uVar2;
    F_00559f00(uVar4 GEN_EDX_ARG,(float)((float10)(*(uint *)(gen_frame + 0x0)) + fVar6));
    uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
    uVar2 = uVar2 + uVar3;
    if (((*((byte *)GEN_TOP((param_3 + 0x128))) & 0xf) == 0) || (*((int *)GEN_TOP((param_3 + 300))) == 0)) {
      uVar4 = F_0055e340(param_1 GEN_EDX_ARG,0x17);
      uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
      uVar2 = uVar2 - uVar3;
    }
  }
  uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x18);
  fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = (uint)uVar2;
  F_00559f00(uVar4 GEN_EDX_ARG,(float)((float10)(*(uint *)(gen_frame + 0x0)) + fVar6));
  uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
  uVar2 = uVar2 + uVar3;
  if (((*((byte *)GEN_TOP(param_3)) & 0xf) != 0) && (*((int *)GEN_TOP((param_3 + 4))) != 0)) {
    uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x1d);
    fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
    F_00559f00(uVar4 GEN_EDX_ARG,(float)((float10)uVar2 + fVar6));
    uVar3 = F_0055a030(uVar4 GEN_EDX_ARG);
    uVar2 = uVar2 + uVar3;
  }
  uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x23);
  fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
  F_00559f00(uVar4 GEN_EDX_ARG,(float)((float10)uVar2 + fVar6));
  uVar2 = F_0055a030(uVar4 GEN_EDX_ARG);
  fVar6 = F_00559d80(uVar4 GEN_EDX_ARG);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x0)));
  uVar5 = (int)TRUNC(fVar6 + (float10)uVar2) & 0xffff;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar4 = F_0055e2f0(param_1 GEN_EDX_ARG,0x27);
  F_0055a080(uVar4 GEN_EDX_ARG,uVar5);
  iVar1 = *param_1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x50))))(param_1,0,uVar5);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x4c))))(param_1,uVar4 & 0xffff);
  return uVar4;
}

/* ref: Client::UI2::AddonMateriaBroker::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a36e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a36e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0x21;
    pAVar5 = this;
    pvVar1 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,3)));
    F_005840a0(pvVar1 GEN_EDX_ARG,uVar3,uVar4,pAVar5,uVar6);
    pvVar1 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,10)));
    F_005840a0(pvVar1 GEN_EDX_ARG,0x21,1,this,0);
    F_005840a0(pvVar1 GEN_EDX_ARG,0x1f,1,this,0);
    F_005840a0(pvVar1 GEN_EDX_ARG,0x20,1,this,0);
  }
  uVar2 = F_0055dcb0();
  F_00594d90(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaBroker::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d20)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMateriaBroker::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007a37b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a37b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a37b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*((byte *)GEN_TOP((param_2 + 0x678))) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((param_2 + 0x67c)));
  }
  *((int *)GEN_TOP(((int)this + 0x4b00))) = iVar1;
  iVar1 = iVar1 + 0x65;
  pvVar2 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,0xb)));
  F_0059d670(pvVar2 GEN_EDX_ARG,iVar1);
  if ((*((byte *)GEN_TOP((param_2 + 0x680))) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((param_2 + 0x684)));
  }
  pvVar2 = ((undefined *)GEN_TOP(F_0055e340(this GEN_EDX_ARG,0xc)));
  uVar3 = F_00584110(pvVar2 GEN_EDX_ARG,uVar4);
  return uVar3;
}

/* ref: FUN_007a3810 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3810(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xf;
}

/* ref: FUN_007a3820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3820(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3830(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 >> GEN_SHC((char)param_2 * '\x04' + 8U, (char)param_2 * '\x04' + 8U) & 0xf;
}

/* ref: FUN_007a3850 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007a3850(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  uVar1 = param_1 & 0xf;
  if (uVar1 < 5) {
    return 0;
  }
  iVar2 = 0;
  if (uVar1 != 0) {
    bVar3 = 8;
    do {
      if ((param_1 >> GEN_SHC(bVar3, bVar3) & 0xf) == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      bVar3 = bVar3 + 4;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: FUN_007a38a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a38a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a38a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) & 0xdf;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb204));
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a38e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a38e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0x17;
    pAVar6 = this;
    pvVar2 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_FWD,0xd)));
    F_005840a0(pvVar2 GEN_EDX_ARG,uVar4,uVar5,pAVar6,uVar7);
    uVar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x17;
    pAVar6 = this;
    pvVar2 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,0xe)));
    F_005840a0(pvVar2 GEN_EDX_ARG,uVar4,uVar5,pAVar6,uVar7);
  }
  AVar1 = this[0x13a];
  uVar3 = F_0055dcb0();
  F_00596b90(uVar3 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar3 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d38)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a3990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a39e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a39e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a39e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xf;
}

/* ref: FUN_007a39f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a39f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a39f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3a00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3a00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a3a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 >> GEN_SHC((char)param_2 * '\x04' + 8U, (char)param_2 * '\x04' + 8U) & 0xf;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d4c)),0,6);
  return bVar1;
}

/* ref: FUN_007a3ad0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3ad0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 & 0xf;
}

/* ref: FUN_007a3ae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3ae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7a3ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 >> 4 & 0xf;
}

/* ref: FUN_007a3af0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007a3af0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7a3af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return param_1 >> GEN_SHC((char)param_2 * '\x04' + 8U, (char)param_2 * '\x04' + 8U) & 0xf;
}

/* ref: Client::UI2::AddonMateriaRepair::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d64)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMateriaRepair::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a3b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a3b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*((byte *)GEN_TOP((param_2 + 0x18))) & 0xf) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *((uint *)GEN_TOP((param_2 + 0x1c)));
  }
  if ((uVar7 & 2) != 0) {
    if ((*((byte *)GEN_TOP((param_2 + 0x28))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x2c)));
    }
    F_0057eb30(*((undefined4 *)GEN_TOP((*(int *)(this + 0x61c) + 0xbc))) GEN_EDX_FWD,uVar1,0,0,0,0);
    if ((*((byte *)GEN_TOP((param_2 + 0x38))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x3c)));
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar1);
    if ((*((byte *)GEN_TOP((param_2 + 0x30))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x34)));
    }
    F_00595190(*(undefined * PTR32 *)(this + 0x61c) GEN_EDX_ARG,uVar1,0,0);
  }
  if ((uVar7 & 1) != 0) {
    if ((*((byte *)GEN_TOP((param_2 + 0x10))) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((param_2 + 0x14)));
    }
    uVar7 = 0;
    *(int *)(this + 0x614) = iVar2;
    if (iVar2 != 0) {
      pAVar4 = this + 0x1b8;
      puVar3 = ((undefined4 *)GEN_TOP((param_2 + 0x18c)));
      do {
        if ((*(byte *)(puVar3 - 0x51) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[-0x50];
        }
        *(undefined4 *)(pAVar4 + 4) = uVar1;
        if ((*(byte *)(puVar3 - 1) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *puVar3;
        }
        *(undefined4 *)pAVar4 = uVar1;
        if ((*(byte *)(puVar3 + 0x4f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x50];
        }
        *(undefined4 *)(pAVar4 + 8) = uVar1;
        if ((*(byte *)(puVar3 + 0x9f) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xa0];
        }
        *(undefined2 *)(pAVar4 + 0xc) = uVar5;
        if ((*(byte *)(puVar3 + 0xef) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined2)puVar3[0xf0];
        }
        *(undefined2 *)(pAVar4 + 0xe) = uVar5;
        if ((*(byte *)(puVar3 + 0x13f) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x140];
        }
        *(undefined4 *)(pAVar4 - 4) = uVar1;
        if ((*(byte *)(puVar3 + 0x1df) & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = puVar3[0x1e0];
        }
        *(undefined4 *)(pAVar4 + 0x10) = uVar1;
        if ((*(byte *)(puVar3 + 399) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar3[400];
        }
        uVar8 = uVar6 & 0xffff;
        *(short *)(pAVar4 + 0x16) = (short)uVar6;
        if ((int)uVar8 < (int)*(short *)(pAVar4 + 0x14)) {
          if ((short)uVar6 == 0) {
            uVar8 = 1;
          }
          *(short *)(pAVar4 + 0x14) = (short)uVar8;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 2;
        pAVar4 = pAVar4 + 0x1c;
      } while (uVar7 < *(uint *)(this + 0x614));
    }
    F_0058d980(*(undefined4 *)(this + 0x1a8) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x614));
  }
  return 1;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00594d90(((undefined *)GEN_TOP((uVar1 + 0xe0))) GEN_EDX_ARG,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d74)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a3d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a3d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  in_ecx = param_1 * 0x60 + 400 + (int)this;
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x54)));
  uVar4 = 0;
  pvVar1 = ((undefined *)GEN_TOP(F_00559b90(*param_2 GEN_EDX_FWD)));
  F_00591c00(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00559ba0(param_2[3] GEN_EDX_ARG)));
  uVar2 = F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_007a3d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int in_ecx;
  int local_8;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb404));
  in_ecx = (int)this + 0x180;
  local_8 = 0x17;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
    *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x60))) = 0;
    in_ecx = in_ecx + 100;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) & 0xdf;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x100;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *((undefined4 *)GEN_TOP(((int)this + 0xae0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xae4))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a3e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1d98)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007a3eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a3eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = param_1 * 100;
  this_00 = ((undefined *)GEN_TOP(F_00559b90(*param_2 GEN_EDX_FWD)));
  F_0055a1d0(this_00 GEN_EDX_ARG,0,0,0);
  uVar2 = *((uint *)GEN_TOP(((int)this + iVar1 + 0x1d8)));
  F_0055a170(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + iVar1 + 0x1da))),(uVar2 & 0xff00) >> 8,uVar2 & 0xff
              );
  uVar2 = F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,*((char *)GEN_TOP(((int)this + iVar1 + 0x1e0))) + 0x65);
  return uVar2;
}

/* ref: FUN_007a3f40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_00581600(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a3f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a3fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x318) != 0) {
    F_00406810(*(int *)(this + 0x318));
    *(undefined4 *)(this + 0x318) = 0;
  }
  F_005b0510((undefined *)this GEN_EDX_ARG);
  uVar2 = F_005a92d0(this GEN_EDX_ARG,0,0x20,0);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a4010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1db4)),1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf47 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a4020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_FWD,
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x80))) + 0x20))) + 4))));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a4090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a4090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint * puVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1f5: ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 800)));
    break;
  case 0x1f6: ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x324)));
    break;
  case 0x1f7: ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x328)));
    break;
  case 0x1f8: ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x32c)));
    break;
  default: ;
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar2 = puVar2 - 2;
      uVar1 = F_005a2670(puVar2 GEN_EDX_FWD);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return uVar1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  iVar4 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  puVar2 = &(*(uint *)(gen_frame + 0x18));
  do {
    puVar2 = puVar2 - 2;
    uVar1 = F_005a2670(puVar2 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar1;
}

/* ref: FUN_007a4170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a4170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x318))) + param_1 * 0x24)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x318))) + param_1 * 0x24;
  this_00 = ((undefined *)GEN_TOP(F_00559ba0(param_2[2] GEN_EDX_FWD)));
  F_00584110(this_00 GEN_EDX_ARG,uVar5);
  F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x14))),0,*param_2);
  F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x18))),0,param_2[1]);
  uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  uVar3 = F_00559ba0(param_2[3] GEN_EDX_ARG);
  F_0057eb30(uVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = F_00559ba0(param_2[4] GEN_EDX_ARG);
  F_0057eb30(uVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7,uVar8,uVar9);
  bVar2 = F_0055a300(param_2[5] GEN_EDX_ARG,1 < *((uint *)GEN_TOP((iVar1 + 0x10))));
  uVar4 = CONCAT31(extraout_var,bVar2);
  uVar3 = *((uint *)GEN_TOP((iVar1 + 0x10)));
  if (1 < uVar3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = F_00559ba0(param_2[5] GEN_EDX_ARG);
    uVar4 = F_0057eb30(uVar4 GEN_EDX_ARG,uVar3,uVar6,uVar7,uVar8,uVar9);
  }
  return uVar4;
}

/* ref: FUN_007a4230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb604));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a42c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a42c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,3,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a42f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a42f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1dcc)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint in_ecx;
  undefined * pvVar2;
  undefined * this_00;
  undefined4 uVar3;
  uint uVar4;
  uint local_8;
  
  if ((*param_2 & 0xf) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(param_2 + 4);
  }
  bVar1 = 0;
  if (local_8 != 0) {
    uVar4 = 0;
    do {
      in_ecx = F_0055e2f0(this GEN_EDX_FWD,uVar4 + 8);
      pvVar2 = ((undefined *)GEN_TOP(F_00559c20(in_ecx GEN_EDX_ARG)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        this_00 = ((undefined *)GEN_TOP(F_00561530(pvVar2 GEN_EDX_ARG,4)));
        pvVar2 = ((undefined *)GEN_TOP(F_00561550(pvVar2 GEN_EDX_ARG,3)));
        if ((param_2[uVar4 * 8 + 0xc0] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + uVar4 * 8 + 0xc4);
        }
        F_00584110(this_00 GEN_EDX_ARG,uVar3);
        if ((param_2[uVar4 * 8 + 0x18] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + uVar4 * 8 + 0x1c);
        }
        F_00591c00(pvVar2 GEN_EDX_ARG,uVar3,0);
      }
      bVar1 = bVar1 + 1;
      uVar4 = (uint)bVar1;
    } while (uVar4 < local_8);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
  }
  pvVar2 = ((undefined *)GEN_TOP(F_0055e340(this GEN_EDX_ARG,3)));
  F_00584110(pvVar2 GEN_EDX_ARG,uVar3);
  F_005a91d0(this GEN_EDX_ARG,0,2);
  F_005a91d0(this GEN_EDX_ARG,1,3);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_ARG,param_1,param_2);
  return uVar4;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x20))) + 0xd0)));
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(F_0055e360(this GEN_EDX_FWD,2)));
  F_00591c00(this_00 GEN_EDX_ARG,uVar2,uVar3);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a4460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a4460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_007a4470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb704));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a44a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a44a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a44d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a44d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a44f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a44f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1de0)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a4500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a4500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(param_2 != 0);
    F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a4550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb804));
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a45d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,(uint)(byte)AVar1,0);
  if (*(int *)(this + 0x180) != 0) {
    F_00406810(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a4670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1df4)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf46 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007a4680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 * puVar4;
  byte bVar5;
  uint uVar6;
  byte * pbVar7;
  uint local_10;
  uint local_8;
  
  pbVar7 = param_2;
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  if ((uVar1 & 2) != 0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_FWD,uVar2);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  if ((param_2[0x18] & 0xf) == 0) {
    param_2 = ((byte *)GEN_TOP(0x0));
  }
  else {
    param_2 = *(byte * PTR32 *)(param_2 + 0x1c);
  }
  uVar1 = local_8 >> 8;
  local_8 = local_8 & 0xffffff00;
  if ((pbVar7[0x10] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pbVar7 + 0x14);
  }
  *(undefined4 *)(this + 0x1ac) = uVar2;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
    piVar3 = *(int * PTR32 *)(this + 400);
    uVar1 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,uVar1 + 0xc0);
    if ((pbVar7[0x28] & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
      break;
    }
    goto LAB_007a474c;
  case 1: ;
    F_0059d6a0(this GEN_EDX_ARG,0x66,1,0);
    piVar3 = *(int * PTR32 *)(this + 0x194);
    uVar1 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,uVar1 + 0xc0);
    if ((pbVar7[0x28] & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
      break;
    }
LAB_007a474c: ;
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,*(undefined4 *)(pbVar7 + 0x2c));
    break;
  case 2: ;
    F_0059d6a0(this GEN_EDX_ARG,0x67,1,0);
    piVar3 = *(int * PTR32 *)(this + 0x198);
    uVar6 = F_00561390();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,uVar6 + 0xc0);
    if ((pbVar7[0x20] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(pbVar7 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar2);
    local_8 = CONCAT31((int3)uVar1,1);
    break;
  case 3: ;
    F_0059d6a0(this GEN_EDX_ARG,0x68,1,0);
  }
  F_0059ead0(*(undefined4 *)(this + 0x188) GEN_EDX_ARG,0,0,1);
  F_0059ead0(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,0,0,1);
  F_00562110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,(uint)((char)local_8 == '\0'));
  F_00562110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,local_8);
  if ((char)local_8 == '\0') {
    piVar3 = *(int * PTR32 *)(this + 0x188);
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x18c);
  }
  *(int * PTR32 *)(this + 0x1a8) = piVar3;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x74))))(piVar3 GEN_EDX_ARG,0xfffffffe,0);
  F_0059ead0(*(undefined4 *)(this + 0x1a8) GEN_EDX_ARG,param_2,0,1);
  F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1a8),1,0);
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
    uVar2 = 0x65;
  }
  else {
    uVar2 = 0x66;
  }
  this_00 = ((undefined *)GEN_TOP(F_0055e2f0(this GEN_EDX_ARG,2)));
  F_0059d670(this_00 GEN_EDX_ARG,uVar2);
  piVar3 = ((int *)GEN_TOP(F_00404270()));
  if (*(uint *)(this + 0x184) < param_2) {
    *(byte * PTR32 *)(this + 0x184) = param_2;
    if (*(int *)(this + 0x180) != 0) {
      F_00406810(*(int *)(this + 0x180));
      *(undefined4 *)(this + 0x180) = 0;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,(int)((int)(uintptr_t)param_2) << 5,0x10);
    *(uint *)(this + 0x180) = uVar1;
  }
  local_10 = 0;
  if (param_2 != ((byte *)GEN_TOP(0x0))) {
    local_8 = 0;
    pbVar7 = pbVar7 + 0x17c;
    do {
      puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + local_8)));
      if ((pbVar7[0x13c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x140);
      }
      *puVar4 = uVar2;
      if ((pbVar7[-4] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)pbVar7;
      }
      puVar4[1] = uVar2;
      if ((pbVar7[0x27c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x280);
      }
      puVar4[2] = uVar2;
      if ((pbVar7[0x3bc] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x3c0);
      }
      puVar4[3] = uVar2;
      if ((pbVar7[0x4fc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(pbVar7 + 0x500);
      }
      puVar4[4] = uVar1;
      if ((pbVar7[0x63c] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar7 + 0x640);
      }
      puVar4[5] = uVar6;
      if ((pbVar7[0x77c] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar7 + 0x780);
      }
      puVar4[6] = uVar2;
      if ((pbVar7[-0x144] & 0xf) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = pbVar7[-0x140];
      }
      *(byte *)(puVar4 + 7) = bVar5;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x54))))
                (*(int * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,local_10,(uint)(uVar1 < uVar6));
      local_8 = local_8 + 0x20;
      local_10 = local_10 + 1;
      pbVar7 = pbVar7 + 8;
    } while (local_10 < param_2);
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a4a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x20, 0);
  undefined1 AVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  int iVar4;
  
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    if (param_2 == 2) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    else if (param_2 == 3) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = 1;
    }
    else if (param_2 == 4) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = 2;
    }
    else if (param_2 == 5) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0xc)) = 3;
    }
    goto LAB_007a4abe;
  case 0x1f: ;
    F_00560760(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(undefined1 *)(gen_frame + 0x1b)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((param_4[2] * 0x20 + 0x18 + *(int *)(this + 0x180))));
    (*(undefined1 *)(gen_frame + 0x1a)) = 7;
    if (*param_4 != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*param_4 + 0x70)));
    }
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00588780(uVar2 + 0xe0 GEN_EDX_ARG,4,(uint)(byte)AVar1,uVar3,((undefined1 *)(gen_frame + 0x10)),0,0);
    break;
  case 0x20: ;
    uVar2 = F_0055dcb0();
    F_00594d90(((undefined *)GEN_TOP((uVar2 + 0xe0))) GEN_EDX_ARG,0);
    break;
  case 0x21: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0xc)) = iVar4;
LAB_007a4abe: ;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3 GEN_EDX_ARG,0);
  }
  this_00 = ((undefined1 *)(gen_frame + 0x10));
  iVar4 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_007a4bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7a4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x180))) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP((param_1 * 0x20 + *((int *)GEN_TOP(((int)this + 0x180))))));
    uVar7 = *puVar2;
    this_00 = ((undefined *)GEN_TOP(F_00559ba0(param_2[3] GEN_EDX_FWD)));
    F_00584110(this_00 GEN_EDX_ARG,uVar7);
    F_005951c0(param_3 GEN_EDX_ARG,puVar2[1],0,param_2[2]);
    if (*(char *)(puVar2 + 7) == '\0') {
      F_0059d670(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG,0x66);
      uVar7 = 0x11;
    }
    else {
      F_0059d670(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG,0x65);
      uVar7 = 0x65;
    }
    F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,uVar7);
    if ((uint)puVar2[4] < (uint)puVar2[5]) {
      F_0059d670(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,7);
    }
    if (param_2[7] != 0) {
      uVar7 = puVar2[2];
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      uVar1 = F_00559ba0(param_2[7] GEN_EDX_ARG);
      F_0057eb30(uVar1 GEN_EDX_ARG,uVar7,uVar3,uVar4,uVar5,uVar6);
    }
    uVar7 = puVar2[3];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = F_00559ba0(param_2[4] GEN_EDX_ARG);
    F_0057eb30(uVar1 GEN_EDX_ARG,uVar7,uVar3,uVar4,uVar5,uVar6);
    uVar7 = puVar2[4];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = F_00559ba0(param_2[5] GEN_EDX_ARG);
    uVar1 = F_0057eb30(uVar1 GEN_EDX_ARG,uVar7,uVar3,uVar4,uVar5,uVar6);
    if (param_2[6] != 0) {
      uVar7 = puVar2[5];
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      uVar1 = F_00559ba0(param_2[6] GEN_EDX_ARG);
      uVar1 = F_0057eb30(uVar1 GEN_EDX_ARG,uVar7,uVar3,uVar4,uVar5,uVar6);
    }
  }
  return uVar1;
}

/* ref: FUN_007a4cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb904));
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90(uVar2 + 0xe0 GEN_EDX_ARG,(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a4d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1e0c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a4d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7a4d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(param_2 != 0);
    F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x0)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007a4dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  F_00580ea0(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0xfb))) = *((byte *)GEN_TOP(((int)this + 0xfb))) | 8;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) & 0xbf;
  *((uint *)GEN_TOP(((int)this + 0x120))) = *((uint *)GEN_TOP(((int)this + 0x120))) | 0x300;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x202))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_007a4e90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a4e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
  F_00590cc0(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf36 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a4eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  bVar1 = F_00560e80(this + 0x1c0 GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonInventory::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a4ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1e28)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventory::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 0x18)));
  uVar2 = param_2;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      if (iVar3 == 4) {
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x448)));
        this_00 = *(undefined * PTR32 *)(this + 0x1a8);
      }
      else {
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x438 + iVar3 * 4)));
        this_00 = *(undefined * PTR32 *)(this + iVar3 * 4 + 0x198);
      }
      F_00589280(this_00 GEN_EDX_FWD,uVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 0x430))));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventory::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a4f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  uVar1 = F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x8)));
  (*(undefined4 *)(gen_frame + 0x0)) = 2;
  (*(char *)(gen_frame + 0x4)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0,0);
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf53 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a4fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a4fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::AddonInventory::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_005a89b0(this GEN_EDX_FWD,(undefined1)param_1,1);
  uVar1 = F_0059bc90(this + 0x1c0 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf6 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007a4ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7a4ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if ((this[0x208] != (undefined1)0x0) &&
     ((uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x18);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(this + 0x18c) != ((undefined *)GEN_TOP(0x0))) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0x11);
    F_00577ad0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
  }
  F_005b0610(this GEN_EDX_ARG,(undefined1)param_1,1,(undefined1)param_2);
  F_00580f10(this + 0x1c0 GEN_EDX_ARG,0,0);
  return;
}

/* ref: FUN_007a5080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a5080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a5080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x198)));
  iVar3 = 5;
  do {
    F_0059dde0(*puVar2 GEN_EDX_FWD,0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar1 = F_0059dde0(*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x198))) GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a50c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7a50c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1b8))) != '\0') {
    if (*((int *)GEN_TOP(((int)param_1 + 0x1b4))) != 0) {
      uVar1 = F_0055dcb0();
      uVar1 = F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1b4))));
      if ((uVar1 == 0) ||
         ((uVar1 = *((uint *)GEN_TOP((uVar1 + 0xf4))) >> 0x14 & 0xf, uVar1 != 3 && (uVar1 != 2))))
      goto LAB_007a5116;
      F_00594790(param_1 GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x1b8))) = 0;
  }
LAB_007a5116: ;
  F_005a2370(param_1 GEN_EDX_ARG,param_2);
  uVar1 = F_0059d8b0((int)param_1 + 0x1c0 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf39 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a5140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x1c0 GEN_EDX_ARG);
  return;
}

/* ref: FUN_007a5160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a5160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5160u, gen_a0, 0u, 0u, 0u);
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
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
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

/* ref: Client::UI2::AddonInventory::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a51d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a51d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x1c0 GEN_EDX_FWD);
  if ((uVar1 == 0) ||
     (pAVar2 = *((undefined * PTR32 *)GEN_TOP((uVar1 + 4))),
     *((undefined * PTR32 *)GEN_TOP((uVar1 + 4))) == ((undefined *)GEN_TOP(0x0)))) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_007a51f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a51f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a51f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x10);
  uVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x202))) != '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007a5260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a5260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7a5260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x204)));
  if (iVar2 == 4) {
    iVar2 = 0x26;
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 0x1bc))) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,4);
    (*(int *)(gen_frame + 0x14)) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 4))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x20,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar2 = 4;
    do {
      puVar3 = puVar3 - 2;
      uVar1 = F_005a2670(puVar3 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return uVar1;
  case 1: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xb;
    break;
  case 2: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xc;
    break;
  case 3: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xd;
    break;
  case 4: ;
    goto switchD_007a5295_caseD_5;
  case 5: ;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x2c)) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x34)) = param_1;
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) + 4))))(*((int * PTR32 *)GEN_TOP((uVar1 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x39,2,&(*(undefined4 *)(gen_frame + 0x28)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar2 = 1;
    do {
      puVar3 = puVar3 - 2;
      uVar1 = F_005a2670(puVar3 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    return uVar1;
  case 6: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xe;
    break;
  case 7: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0xf;
    break;
  case 8: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10;
    break;
  default: ;
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x20)));
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 2;
  do {
    puVar3 = puVar3 - 2;
    uVar1 = F_005a2670(puVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
switchD_007a5295_caseD_5: ;
  return uVar1;
}

/* ref: FUN_007a5470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a5470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  undefined1 * this_00;
  int iVar5;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP(((int)this + 0x1b4))) != 0) {
    uVar2 = F_0055dcb0();
    piVar3 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1b4))))));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar2 = F_0055dcb0();
      piVar4 = ((int *)GEN_TOP(F_0057f930(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,piVar3)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x84))))(piVar3 GEN_EDX_ARG)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x8c))))(piVar4 GEN_EDX_ARG);
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    }
  }
  this_00 = ((undefined1 *)(gen_frame + 0x10));
  iVar5 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  return uVar2;
}

/* ref: FUN_007a5550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a5550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00580fd0(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_FWD);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    uVar2 = F_0055dcb0();
    uVar1 = F_0059b860(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 4))),0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf45 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007a5590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7a5590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x208))) = 1;
  return;
}

/* ref: FUN_007a55a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a55a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a55a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbb04));
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
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((byte *)GEN_TOP(((int)this + 0xf8))) = *((byte *)GEN_TOP(((int)this + 0xf8))) | 0x20;
  *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 0x40;
  *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) | 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGrid::vf41 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007a5710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,((char *)REFP(0x10c1e5c)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInventoryGrid::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007a5720(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x7a5720u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_007a5740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13c)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)bVar1);
  return uVar2;
}

/* ref: FUN_007a5760 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007a5760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7a5760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x13c)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x14))) GEN_EDX_ARG,(uint)bVar1);
  if (uVar2 != 0) {
    return *((uint *)GEN_TOP((uVar2 + 0x204)));
  }
  return 0;
}

