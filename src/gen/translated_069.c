#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI2::AddonCursor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00785a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x785a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Cursor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCursor::vf44 */
GEN_FRAME uint GEN_THISCALL F_00785a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined2 uVar1;
  uint uVar2;
  float10 fVar3;
  
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x90);
  uVar2 = F_0055e2f0(this GEN_EDX_FWD,2);
  if (uVar2 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x0)),0);
    *(ushort *)(this + 0x1b4) = (ushort)(*(uint *)(gen_frame + 0x4)) >> 1;
    *(ushort *)(this + 0x1b6) = (ushort)(*(uint *)(gen_frame + 0x0)) >> 1;
  }
  else {
    fVar3 = F_0055a750(uVar2 GEN_EDX_ARG);
    (*(ushort *)(gen_frame + 0xa)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
    (*(uint *)(gen_frame + 0x4)) = (int)TRUNC(fVar3);
    (*(uint *)(gen_frame + 0x4)) = (int)TRUNC(fVar3) & 0xffff;
    fVar3 = F_0055a760(uVar2 GEN_EDX_ARG);
    (*(ushort *)(gen_frame + 0xa)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
    *(ushort *)(this + 0x1b4) = (ushort)(*(uint *)(gen_frame + 0x4));
    uVar2 = (uint)TRUNC(fVar3);
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = (ushort)uVar2;
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0x0)) = uVar2 & 0xffff;
    *(undefined2 *)(this + 0x1b6) = uVar1;
  }
  uVar2 = F_0055dcb0();
  F_005aa060((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,0,0);
  uVar2 = F_0055dcb0();
  F_005a9f80((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCursor::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_00785b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_0055dcb0();
  piVar3 = (int *)F_0055b990(uVar2 GEN_EDX_ARG);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)(uVar2 + 0x20c);
    *(bool *)(uVar2 + 0x219) = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x38))) != 0;
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34))) != 0) {
      F_005a9f80(this_00 GEN_EDX_ARG);
      F_005aa060(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x3c))),0);
      return 0;
    }
    F_005a9ff0(this_00 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::UI2::AddonCursor::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00785b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x785b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a89b0(this GEN_EDX_FWD,1,1);
  uVar1 = F_0055dcb0();
  F_005a9f80((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonCursor::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00785bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_005b0610(this GEN_EDX_FWD,1,1,0);
  uVar1 = F_0055dcb0();
  F_005a9ff0((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonCursor::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00785bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x785bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Client::UI2::AddonCursor::vf28 */
GEN_FRAME byte GEN_THISCALL F_00785c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785c00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  short * psVar1;
  short * psVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
    uVar3 = F_0055a2d0(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) GEN_EDX_FWD);
    if ((char)uVar3 != '\0') {
      uVar3 = F_0055dcb0();
      if (*(char *)(uVar3 + 0x218) != '\0') {
        *(*(short * PTR32 *)&gen_args[1]) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
        *(*(short * PTR32 *)&gen_args[2]) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ba)));
        return 1;
      }
      uVar3 = F_0055dcb0();
      psVar2 = (*(short * PTR32 *)&gen_args[2]);
      psVar1 = (*(short * PTR32 *)&gen_args[1]);
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec)));
      if (this_00 != (undefined *)0x0) {
        F_00559fb0(this_00 GEN_EDX_ARG,(*(short * PTR32 *)&gen_args[1]),(*(short * PTR32 *)&gen_args[2]));
        F_0055a000(this_00 GEN_EDX_ARG,&(*(short * PTR32 *)&gen_args[2]),&(*(short * PTR32 *)&gen_args[1]));
        *psVar1 = *psVar1 + ((ushort)(*(short * PTR32 *)&gen_args[2]) >> 1);
        *psVar2 = *psVar2 + ((ushort)(*(short * PTR32 *)&gen_args[1]) >> 1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00785cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00785cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x785cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b830((int)this + 400 GEN_EDX_ARG);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x10;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined2 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 1;
  *(undefined4 *)((int)this + 0x120) = 0x890;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  return (uint)this;
}

/* ref: FUN_00785d80 */
GEN_NOFRAME uint GEN_THISCALL F_00785d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x785d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b840();
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFade::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00785da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x785da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  uVar2 = F_0055b850(this + 400 GEN_EDX_ARG,0x120000);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x284) = uVar1;
  *(undefined4 *)(this + 0x288) = uVar1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  return uVar2;
}

/* ref: Client::UI2::AddonFade::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00785e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x785e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  if ((this[0x2ab] != (undefined1)0x0) && (this[0x2d2] != (undefined1)0x0)) {
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(this + 0x2a4);
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x2a0);
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x2a4);
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x2a0);
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    *(uint *)(this + 0x290) =
         (uint)(ushort)(*(short *)(this + 0x128) << 6) << 9 | *(uint *)(this + 0x290) & 0xfe0001ff;
    uVar1 = *(undefined4 *)(this + 0x2a8);
    *(undefined4 *)(this + 0x1d0) = uVar1;
    *(undefined4 *)(this + 0x1d4) = uVar1;
    *(undefined4 *)(this + 0x1d8) = uVar1;
    *(undefined4 *)(this + 0x1dc) = uVar1;
    uVar2 = F_0055dcb0();
    F_00585cf0(this + 400 GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  }
  return;
}

/* ref: Client::UI2::AddonFade::vf42 */
GEN_NOFRAME byte GEN_THISCALL F_00785ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00785f00 */
GEN_FRAME uint GEN_THISCALL F_00785f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x785f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 * this_00;
  int iVar5;
  
  uVar2 = *(ushort *)((int)this + 0xf6);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,4);
  (*(uint *)(gen_frame + 0x8)) = uVar2 & 0xf;
  uVar3 = *(undefined4 *)((int)this + 0x2ac);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  uVar4 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(*(int * PTR32 *)(uVar4 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x11,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if ((char)param_1 != '\0') {
    if (*(int *)((int)this + 0x2ac) == 1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
      uVar4 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x58))))
                (*(int * PTR32 *)(uVar4 + 0x14) GEN_EDX_ARG,*(ushort *)((int)this + 0xf6) & 0xf,0);
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar4 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(*(int * PTR32 *)(uVar4 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),4,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar5 = 1;
  do {
    this_00 = this_00 - 8;
    uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  return uVar4;
}

/* ref: FUN_00786010 */
GEN_FRAME uint GEN_THISCALL F_00786010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,4);
  (*(uint *)(gen_frame + 0x18)) = (-(uint)((char)param_1 != '\0') & 0xffffff80) + 0x100 | 0x24;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x3a,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00786090 */
GEN_NOFRAME uint GEN_THISCALL F_00786090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c488c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4878));
  *(undefined4 *)((int)this + 0x120) = 0x854;
  return (uint)this;
}

/* ref: Client::UI2::AddonDialogue::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Dialogue",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonDialogue::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00786120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x786120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::UI2::AddonDialogue::vf38 */
GEN_FRAME uint GEN_THISCALL F_00786130(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x786130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((uVar1 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x8c))(param_1 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_0078616d */
GEN_NOFRAME unsigned int GEN_STDCALL F_0078616d(unsigned int gen_a0)
{
  GEN_ENTER(0x78616du, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00786180 */
GEN_NOFRAME uint GEN_THISCALL F_00786180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c498c));
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x67 ^
       *(byte *)((int)this + 0xf9) | 0x18;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonDragDrop::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ResidentDragTarget",0,6);
  return bVar1;
}

/* ref: FUN_00786220 */
GEN_NOFRAME uint GEN_THISCALL F_00786220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b830((int)this + 400 GEN_EDX_ARG);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x10;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return (uint)this;
}

/* ref: FUN_007862c0 */
GEN_NOFRAME uint GEN_THISCALL F_007862c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7862c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b840();
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFilter::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007862f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7862f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  uVar2 = F_0055b850(this + 400 GEN_EDX_ARG,0x120000);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x284) = uVar1;
  *(undefined4 *)(this + 0x288) = uVar1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x2a8) = 0x80000000;
  return uVar2;
}

/* ref: Client::UI2::AddonFilter::vf38 */
GEN_FRAME uint GEN_THISCALL F_00786380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x234);
  if (*(int *)(uVar1 + 0x234) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(in_ecx + 0x2a0) = (float)fVar2;
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x238);
  if (*(int *)(uVar1 + 0x238) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(in_ecx + 0x2a4) = (float)fVar2;
  return uVar1;
}

/* ref: Client::UI2::AddonFilter::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_007863e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7863e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(this + 0x2a4);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x2a0);
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x2a4);
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x2a0);
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(uint *)(this + 0x290) =
       (uint)(ushort)(*(short *)(this + 0x128) << 6) << 9 | *(uint *)(this + 0x290) & 0xfe0001ff;
  uVar1 = *(undefined4 *)(this + 0x2a8);
  *(undefined4 *)(this + 0x1d0) = uVar1;
  *(undefined4 *)(this + 0x1d4) = uVar1;
  *(undefined4 *)(this + 0x1d8) = uVar1;
  *(undefined4 *)(this + 0x1dc) = uVar1;
  uVar2 = F_0055dcb0();
  uVar2 = F_00585cf0(this + 400 GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  return uVar2;
}

/* ref: Client::UI2::AddonFilter::vf42 */
GEN_NOFRAME byte GEN_THISCALL F_00786490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x786490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_007864a0 */
GEN_FRAME byte GEN_THISCALL F_007864a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7864a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      uVar2 = 0;
      piVar3 = (int *)((int)this + 300);
      while (*piVar3 != 0) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        if (3 < uVar2) {
          return 1;
        }
      }
      *(uint *)((int)this + uVar2 * 4 + 300) = (uint)*(byte *)(param_2 + 0x13a);
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x14))))((int)this - 0x180,1);
    return 1;
  }
  if (param_2 != 0) {
    bVar1 = true;
    if (*(uint *)((int)this + 300) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 300) = 0;
    }
    else if (*(uint *)((int)this + 300) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x130) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x130) = 0;
    }
    else if (*(uint *)((int)this + 0x130) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x134) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x134) = 0;
    }
    else if (*(uint *)((int)this + 0x134) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x138) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x138) = 0;
    }
    else if (*(uint *)((int)this + 0x138) != 0) {
      return 1;
    }
    if (bVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x18))))((int)this - 0x180,1,0);
    }
    return 1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x18))))((int)this - 0x180,1,0);
  return 1;
}

/* ref: FUN_007865d0 */
GEN_NOFRAME uint GEN_THISCALL F_007865d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7865d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8a0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4bac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4b98));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonOperationGuide::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007866b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7866b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"OperationGuide",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonOperationGuide::vf38 */
GEN_FRAME uint GEN_THISCALL F_007866c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7866c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00588b50((undefined *)(uVar1 + 0x1ec) GEN_EDX_ARG);
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_007866f0 */
GEN_NOFRAME uint GEN_THISCALL F_007866f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7866f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x60;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4cac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  F_0055e1c0(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x10c4ca4),0,0,(float)(float10)1,1);
  F_0055e220(this GEN_EDX_ARG,REFG(float, 0x1088068),0,0,(float)(float10)1,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonNowLoading::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007867c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7867c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Loading",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNowLoading::vf46 */
GEN_FRAME byte GEN_THISCALL F_007867d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7867d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * pAVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_1 < 3) {
    return 0;
  }
  if (((param_2[0x10] & 0xf) == 0) || (uVar4 = *(uint *)(param_2 + 0x14), uVar4 == 0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar4 = uVar4 & 0xf;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
    }
    if ((uVar5 & 0x180) == 0x80) {
      *(uint *)(this + 0x180) = *(uint *)(this + 0x180) | uVar4;
      iVar2 = *(int *)(this + 0x180);
      if (*(int *)(this + 0x184) != 0) {
        return 0;
      }
      goto LAB_00786824;
    }
    if ((uVar4 & *(uint *)(this + 0x180)) != 0) {
      *(uint *)(this + 0x180) = ~uVar4 & *(uint *)(this + 0x180);
    }
    if (*(int *)(this + 0x180) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      pAVar1 = this + 0x184;
      *(uint *)pAVar1 = *(uint *)pAVar1 & ~(uVar4 >> 1);
      if (*(uint *)pAVar1 != 0) {
        return 0;
      }
      iVar2 = *(int *)(this + 0x180);
LAB_00786824: ;
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = F_005b8a10(this GEN_EDX_FWD);
      if ((char)uVar4 == '\0') {
        return 0;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,0);
      return 0;
    }
    *(uint *)(this + 0x184) = *(uint *)(this + 0x184) | uVar4 >> 1;
  }
  bVar3 = F_005b89f0(this GEN_EDX_ARG);
  if (bVar3 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0);
  }
  return 0;
}

/* ref: FUN_007868d0 */
GEN_NOFRAME uint GEN_THISCALL F_007868d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7868d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4dac));
  return (uint)this;
}

/* ref: Client::UI2::AddonYesNo::vf25 */
GEN_FRAME uint GEN_THISCALL F_00786930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonYesNo::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SelectYesNo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonYesNo::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00786980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007869d0 */
GEN_NOFRAME uint GEN_THISCALL F_007869d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7869d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4eac));
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectOk::vf25 */
GEN_FRAME uint GEN_THISCALL F_00786a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00786a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SelectOk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00786a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00786ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00786ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4fac));
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(undefined2 *)((int)this + 0x19d) = 0;
  *(undefined1 *)((int)this + 0x19f) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf25 */
GEN_FRAME uint GEN_THISCALL F_00786b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf38 */
GEN_FRAME uint GEN_THISCALL F_00786bb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x786bb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)param_1 + 0x19c));
  if (*(char *)((int)param_1 + 0x19c) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x1a0) - (float10)param_2)));
    *(float *)((int)param_1 + 0x1a0) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x1a0) = 0;
    }
    if (*(int *)((int)param_1 + 0x194) != 0) {
      uVar4 = *(undefined4 *)((int)param_1 + 0x198);
      iVar3 = (int)*(float *)((int)param_1 + 0x1a0);
      this = (undefined *)F_0055dcb0();
      uVar2 = F_005b03e0(this GEN_EDX_ARG,iVar3,uVar4);
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x194) GEN_EDX_ARG,uVar2);
    }
    if (*(float *)((int)param_1 + 0x1a0) <= 0.0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x184) + 0x28))))(*(int * PTR32 *)((int)param_1 + 0x184) GEN_EDX_ARG,0);
      *(undefined1 *)((int)param_1 + 0x19c) = 0;
      if (*(char *)((int)param_1 + 0x19f) == '\x01') {
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
        F_005a9110(param_1 GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        return uVar2;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a9110(param_1 GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SelectYesNoCount",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ContextMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf38 */
GEN_FRAME uint GEN_THISCALL F_00786ce0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x786ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((char)param_1[0x6d] != '\0') {
    F_0056a3d0((undefined *)param_1[0x61] GEN_EDX_FWD,3,0,param_1 + 0x60,0,0);
  }
  *(undefined1 *)(param_1 + 0x6d) = 0;
  uVar1 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((uVar1 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    uVar1 = *(uint *)(uVar1 + 0x18);
    if (*(char *)(uVar1 + 0xc6a) == '\0') {
      uVar1 = F_0055dcb0();
      if ((*((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) != param_1) &&
         (*(char *)((int)param_1 + 0x1c1) == '\0')) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 100))(param_1 GEN_EDX_ARG);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00786d80 */
GEN_FRAME byte GEN_THISCALL F_00786d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x1c1) = 1;
  if (*(char *)((int)this + 0x1c0) == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    uVar1 = F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    if ((char)uVar1 != '\0') {
      *(undefined1 *)((int)this + 0x1c0) = 1;
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return 1;
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::vf25 */
GEN_FRAME uint GEN_THISCALL F_00786df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  this[0x1c1] = (undefined1)0x1;
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  uVar1 = F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(this + 0x19c) = 0;
    F_00586850(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,3,0,this + 0x180);
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf53 */
GEN_FRAME unsigned int GEN_THISCALL F_00786e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((char)param_1 == '\0') && (this[0x1c1] == (undefined1)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: Client::UI2::AddonContextMenu::vf52 */
GEN_FRAME byte GEN_THISCALL F_00786e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (*param_1 == 4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x180) + 0xc))))
              (this + 0x180 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0xc0))));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSelectString::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00786eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  undefined * pAVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  bool bVar6;
  
  pcVar5 = "SelectString";
  pAVar2 = this + 4;
  do {
    AVar1 = *(undefined1 *)pAVar2;
    bVar6 = (byte)AVar1 < (byte)*pcVar5;
    if (AVar1 != (undefined1)*pcVar5) {
LAB_00786ee0: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00786ee5;
    }
    if (AVar1 == (undefined1)0x0) break;
    AVar1 = pAVar2[1];
    bVar6 = (byte)AVar1 < (byte)*(undefined *)(pcVar5 + 1);
    if (AVar1 != *(undefined *)(pcVar5 + 1)) goto LAB_00786ee0;
    pAVar2 = pAVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (AVar1 != (undefined1)0x0);
  iVar3 = 0;
LAB_00786ee5: ;
  if (iVar3 != 0) {
    this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
    this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
    *(uint *)(this + 0x120) = *(uint *)(this + 0x120) & 0xffff7fff;
  }
  uVar4 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  return uVar4;
}

/* ref: Client::UI2::AddonSelectString::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00786f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SelectString",0,6);
  return bVar1;
}

/* ref: FUN_00786f20 */
GEN_FRAME byte GEN_THISCALL F_00786f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x786f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::UI2::AddonSelectString::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00786f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Client::UI2::AddonSelectString::vf25 */
GEN_FRAME uint GEN_THISCALL F_00786f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00786fa0 */
GEN_NOFRAME uint GEN_THISCALL F_00786fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x786fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00787020 */
GEN_NOFRAME uint GEN_THISCALL F_00787020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  if (*(int *)((int)this + 0x19c) != 0) {
    F_00406b30(*(int *)((int)this + 0x19c));
    *(undefined4 *)((int)this + 0x19c) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListGrid::vf25 */
GEN_FRAME uint GEN_THISCALL F_00787050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListGrid::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00787090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ListGrid",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListGrid::vf2 */
GEN_FRAME uint GEN_THISCALL F_007870a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7870a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  uint * this_01;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = param_1 & 0xffff;
  uVar4 = uVar3 - 0x17;
  if (0x16 < uVar4) goto switchD_007870d2_caseD_18;
  uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x78726c) + uVar3 + 1)));
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0x17: ;
    F_00557670(param_3 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  default: ;
    goto switchD_007870d2_caseD_18;
  case 0x1f: ;
    *(undefined4 *)(this + 0x1a0) = param_4[2];
    uVar4 = F_00557670(param_3 GEN_EDX_ARG,0);
    this_00 = *(undefined * PTR32 *)(this + 0x184);
    if ((this_00 == (undefined *)0x0) || (*(int *)(this + 0x1a0) < 0)) goto switchD_007870d2_caseD_18;
    puVar6 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 8 + param_4[2] * 0x10)));
    break;
  case 0x20: ;
    uVar4 = F_00557670(param_3 GEN_EDX_ARG,0);
    this_00 = *(undefined * PTR32 *)(this + 0x184);
    if (this_00 == (undefined *)0x0) goto switchD_007870d2_caseD_18;
    puVar6 = &REFG(undefined1, 0x10be67a);
    break;
  case 0x21: ;
    F_00557670(param_3 GEN_EDX_ARG,0);
    bVar1 = *(byte *)(param_4 + 4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + param_4[2] * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + param_4[2] * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 2;
    do {
      this_01 = this_01 - 2;
      uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  case 0x2d: ;
    if (*(int *)(this + 0x188) != 0) {
      F_005ab2b0((undefined *)*param_4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + param_4[2] * 0x10))),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 0xc + param_4[2] * 0x10))),0);
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      uVar3 = F_00557670(param_3 GEN_EDX_ARG,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar3;
    }
    goto switchD_007870d2_caseD_18;
  }
  uVar4 = F_00584110(this_00 GEN_EDX_ARG,puVar6);
switchD_007870d2_caseD_18: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_007872a0 */
GEN_FRAME unsigned int GEN_THISCALL F_007872a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7872a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x19c) != 0) {
    in_ecx = F_00559ba0(*param_2 GEN_EDX_FWD);
    if (in_ecx != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + param_1 * 0x10)));
      this_00 = (undefined *)F_00559ba0(in_ecx GEN_EDX_ARG);
      F_00584110(this_00 GEN_EDX_ARG,uVar1);
    }
  }
  return;
}

/* ref: Client::UI2::AddonListGrid::vf52 */
GEN_FRAME byte GEN_THISCALL F_007872e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7872e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((((*param_1 == 4) && ((char)param_1[1] == '\0')) && (*(int *)(this + 0x19c) != 0)) &&
     (-1 < *(int *)(this + 0x1a0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + *(int *)(this + 0x1a0) * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + *(int *)(this + 0x1a0) * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007873f0 */
GEN_NOFRAME uint GEN_THISCALL F_007873f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7873f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined2 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_007874b0 */
GEN_NOFRAME uint GEN_THISCALL F_007874b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7874b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListIcon::vf25 */
GEN_FRAME uint GEN_THISCALL F_007874e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7874e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListIcon::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00787510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  undefined * pAVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  bool bVar6;
  
  pcVar5 = "ListIcon";
  pAVar2 = this + 4;
  do {
    AVar1 = *(undefined1 *)pAVar2;
    bVar6 = (byte)AVar1 < (byte)*pcVar5;
    if (AVar1 != (undefined1)*pcVar5) {
LAB_00787540: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00787545;
    }
    if (AVar1 == (undefined1)0x0) break;
    AVar1 = pAVar2[1];
    bVar6 = (byte)AVar1 < (byte)*(undefined *)(pcVar5 + 1);
    if (AVar1 != *(undefined *)(pcVar5 + 1)) goto LAB_00787540;
    pAVar2 = pAVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (AVar1 != (undefined1)0x0);
  iVar3 = 0;
LAB_00787545: ;
  if (iVar3 != 0) {
    this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
    this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
    *(uint *)(this + 0x120) = *(uint *)(this + 0x120) & 0xffff7fff;
  }
  uVar4 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  return uVar4;
}

/* ref: Client::UI2::AddonListIcon::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00787580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ListIcon",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListIcon::vf52 */
GEN_FRAME byte GEN_THISCALL F_00787590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x787590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x184);
  if (*param_1 == 0xf) {
    uVar2 = iVar1 + 1;
    if (((char)param_1[1] != '\x02') && (*(uint *)(this + 0x188) < uVar2)) {
      uVar2 = 0;
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      if ((char)param_1[1] != '\x02') {
        uVar2 = *(uint *)(this + 0x188);
      }
    }
    else {
      uVar2 = iVar1 - 1;
    }
  }
  F_00908c60(this GEN_EDX_FWD,uVar2);
  if (*(int *)(this + 0x184) != iVar1) {
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Client::UI2::AddonListIcon::vf2 */
GEN_FRAME uint GEN_THISCALL F_00787620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  byte bVar2;
  undefined1 AVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint * this_00;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar7 = param_1 & 0xffff;
  uVar8 = uVar7 - 0x17;
  if (uVar8 < 0x17) {
    uVar8 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7878e0) + uVar7 + 1)));
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0x17: ;
      uVar8 = param_2 - 100;
      if ((uVar8 < 10) && (uVar8 <= *(uint *)(this + 0x188))) {
        uVar7 = F_00908c60(this GEN_EDX_FWD,uVar8);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar7;
      }
      break;
    case 0x1f: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      iVar4 = *(int *)(this + 0x1a0);
      iVar9 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      uVar10 = *(undefined4 *)(iVar4 + 8 + iVar9 * 0x14);
      iVar11 = iVar4 + iVar9 * 0x14;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar4 + iVar9 * 0x14);
      uVar5 = *(undefined4 *)(iVar11 + 0xc);
      uVar6 = *(undefined4 *)(iVar11 + 0x10);
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar11 + 4);
      (*(undefined4 *)(gen_frame + 0x30)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar6;
      F_00560760(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar7 = *(uint *)(this + 0x18c);
      iVar11 = *param_4;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar10;
      if ((uVar7 & 0x100) != 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x30));
        (*(undefined1 *)(gen_frame + 0xf)) = 0;
        uVar10 = 0;
        if (iVar11 != 0) {
          uVar10 = *(undefined4 *)(iVar11 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar7 = F_0055dcb0();
        uVar7 = F_00588780((undefined *)(uVar7 + 0xe0) GEN_EDX_ARG,6,(uint)(byte)AVar3,uVar10,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar7;
      }
      uVar10 = 0;
      if (iVar11 != 0) {
        uVar10 = *(undefined4 *)(iVar11 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar7 = F_0055dcb0();
      uVar7 = F_00588780((undefined *)(uVar7 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar3,uVar10,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar7;
    case 0x20: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar7 = F_0055dcb0();
      uVar8 = F_00594d90((undefined *)(uVar7 + 0xe0) GEN_EDX_ARG,0);
      break;
    case 0x21: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      if (*(int *)(this + 0x19c) != 0) {
        *((bool *)GEN_TOP((*(int *)(this + 0x19c) + 0x113))) = (*(uint *)(this + 0x18c) & 0x400) != 0x400;
      }
      iVar11 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      bVar2 = *(byte *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x1c)) = iVar11;
      iVar11 = iVar11 * 0x14;
      uVar10 = *((undefined4 *)GEN_TOP((iVar11 + *(int *)(this + 0x1a0))));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar10;
      uVar10 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0xc + iVar11)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar10;
      F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar11 = 4;
      do {
        this_00 = this_00 - 2;
        uVar7 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar11 = iVar11 - 1;
      } while (-1 < iVar11);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar7;
    case 0x2d: ;
      if (*(int *)(this + 0x19c) != 0) {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14)));
        uVar10 = *puVar1;
        (*(undefined4 *)(gen_frame + 0x28)) = puVar1[1];
        (*(undefined4 *)(gen_frame + 0x2c)) = puVar1[2];
        (*(undefined4 *)(gen_frame + 0x34)) = puVar1[4];
        F_005ab2b0((undefined *)*param_4 GEN_EDX_ARG,puVar1[3],uVar10,0);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar7 = F_00557670(param_3 GEN_EDX_ARG,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar7;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_00787910 */
GEN_FRAME unsigned int GEN_THISCALL F_00787910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x787910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)((int)this + 0x1a0);
  if (iVar2 != 0) {
    iVar4 = *(int *)((int)this + 0x184) * 0x19 + param_1;
    uVar3 = *(undefined4 *)(iVar2 + 4 + iVar4 * 0x14);
    puVar1 = (undefined4 *)(iVar2 + iVar4 * 0x14);
    uVar6 = puVar1[4];
    F_005951c0(param_3 GEN_EDX_FWD,*puVar1,0,0);
    if ((((*(uint *)((int)this + 0x18c) & 0x200) != 0) &&
        ((*(byte *)((int)param_3 + 0x220) & 4) != 0)) &&
       (iVar2 = *(int *)((int)param_3 + 0x1e0), iVar2 != 0)) {
      this_00 = *(undefined * PTR32 *)(iVar2 + 0xbc);
      if (this_00 != (undefined *)0x0) {
        F_0055dcb0();
        uVar5 = F_0056a410(uVar6);
        F_00584110(this_00 GEN_EDX_ARG,uVar5);
      }
      F_005618b0(iVar2 GEN_EDX_ARG,(uint)((byte)uVar3 & 1));
    }
  }
  return;
}

/* ref: FUN_007879d0 */
GEN_NOFRAME uint GEN_THISCALL F_007879d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7879d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)((int)this + 0x188) != 0) && (-1 < (int)*(uint *)((int)this + 400))) {
    uVar2 = *(uint *)((int)this + 400) / 0x19;
  }
  uVar1 = F_00908c60(this GEN_EDX_FWD,uVar2);
  if ((uVar2 != 0) && (uVar2 <= *(uint *)((int)this + 0x188))) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1a4) GEN_EDX_ARG,0);
    uVar1 = F_0059dde0(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x1a4) GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00787a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SelectIconString",0,6);
  return bVar1;
}

/* ref: FUN_00787a50 */
GEN_FRAME byte GEN_THISCALL F_00787a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x787a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::UI2::AddonSelectIconString::vf25 */
GEN_FRAME uint GEN_THISCALL F_00787a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00787ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00787ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) & 0xfb;
  bVar2 = bVar1 | 0x80;
  *(byte *)((int)this + 0xf9) = bVar1 | 0xc0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c52bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c52a8));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar2) & 0x77 ^ bVar2 | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonToolTipS::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00787b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ToolTipS",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonToolTipS::vf44 */
GEN_FRAME ushort GEN_THISCALL F_00787b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x787b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e1c0(this GEN_EDX_FWD,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this GEN_EDX_ARG,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e340(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x184) = uVar1;
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,3);
  *(undefined * PTR32 *)(this + 0x188) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_0055a300(this_00 GEN_EDX_ARG,0);
  }
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    F_0055a000(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,((short *)(gen_frame + 0x18)),((undefined2 *)(gen_frame + 0x10)));
  }
  if (*(undefined * PTR32 *)(this + 0x184) != (undefined *)0x0) {
    F_0055a000(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,((short *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc)));
  }
  *(short *)(this + 0x18c) = ((short *)(gen_frame + 0x18))[0] - ((short *)(gen_frame + 0x14))[0];
  *(undefined2 *)(this + 0x18e) = ((undefined2 *)(gen_frame + 0x10))[0];
  return ((short *)(gen_frame + 0x18))[0] - ((short *)(gen_frame + 0x14))[0];
}

/* ref: Client::UI2::AddonToolTipS::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00787c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_00787c60 */
GEN_FRAME byte GEN_THISCALL F_00787c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x787c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  short sVar2;
  code * pcVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  byte * pbVar7;
  undefined4 uVar8;
  int iVar9;
  undefined * puVar10;
  byte * pbVar11;
  uint * this_00;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(bool *)(gen_frame + 0x17)) = true;
  sVar5 = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    if (param_2 != (undefined4 *)0x0) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_FWD,4);
      (*(undefined4 *)(gen_frame + 0x24)) = 0x15e;
      uVar6 = F_0055ab00(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x2c)) = uVar6;
      bVar4 = F_0055ab50(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
      puVar10 = (undefined *)*param_2;
      (*(uint *)(gen_frame + 0x34)) = (uint)bVar4;
      if (puVar10 == (undefined *)0x0) {
        puVar10 = &REFG(undefined, 0x10be682);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = puVar10;
      F_0057eb00(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,1);
      uVar6 = F_0055dcb0();
      pbVar7 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))
                                 (*(int * PTR32 *)(uVar6 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
      if ((*pbVar7 & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(pbVar7 + 4);
      }
      F_00584110(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,uVar8);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      pbVar11 = &REFG(undefined1, 0x10be683);
      pbVar7 = (byte *)F_0055aaf0(*(undefined4 *)((int)this + 4) GEN_EDX_ARG);
      do {
        bVar4 = *pbVar7;
        bVar12 = bVar4 < *pbVar11;
        if (bVar4 != *pbVar11) {
LAB_00787d75: ;
          iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00787d7a;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar7[1];
        bVar12 = bVar4 < pbVar11[1];
        if (bVar4 != pbVar11[1]) goto LAB_00787d75;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar4 != 0);
      iVar9 = 0;
LAB_00787d7a: ;
      (*(bool *)(gen_frame + 0x17)) = iVar9 == 0;
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar9 = 3;
      do {
        this_00 = this_00 - 2;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar9 = iVar9 - 1;
      } while (-1 < iVar9);
    }
    F_00577d20(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)),0,0,REFG(undefined4, 0x108cc50),0);
    uVar6 = F_00584550(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    sVar5 = (short)uVar6;
  }
  if (*(int *)((int)this + 8) != 0) {
    sVar1 = *(short *)((int)this + 0xe);
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x4c)));
    sVar2 = *(short *)((int)this + 0xc);
    (*pcVar3)((int)this - 0x180,(uint)(ushort)(sVar2 + (short)(*(undefined4 *)(gen_frame + 0x10))),
              (uint)(ushort)(sVar1 * sVar5));
    F_0055a300(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,(uint)((*(bool *)(gen_frame + 0x17)) == false));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0x180) + 0x14))))((int)this - 0x180,1);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00787e30 */
GEN_NOFRAME uint GEN_THISCALL F_00787e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c53bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonInputNumeric::vf25 */
GEN_FRAME uint GEN_THISCALL F_00787ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00787ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00787ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"InputNumeric",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00787f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_00557670(param_3 GEN_EDX_FWD,0);
      if (*(int *)(this + 0x198) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x178)));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      F_00557670(param_3 GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00787f80 */
GEN_NOFRAME uint GEN_THISCALL F_00787f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x787f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c54bc));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  return (uint)this;
}

/* ref: Client::UI2::AddonInputString::vf25 */
GEN_FRAME uint GEN_THISCALL F_00788040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "";
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x14)) = "";
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonInputString::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007880e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7880e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"InputString",0,6);
  return bVar1;
}

/* ref: FUN_007880f0 */
GEN_FRAME unsigned int GEN_STDCALL F_007880f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7880f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  ushort * puVar2;
  undefined * this;
  ushort uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  this = (*(undefined * PTR32 *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
    uVar3 = F_0055a030((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
    pbVar6 = &REFG(undefined1, 0x10be6ef);
    pbVar4 = (byte *)F_0055aaf0(this GEN_EDX_ARG);
    puVar2 = (*(ushort * PTR32 *)&gen_args[0]);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00788137: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0078813c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00788137;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0078813c: ;
    if (iVar5 == 0) {
      uVar3 = F_0055a030(this GEN_EDX_ARG);
      *(*(short * PTR32 *)&gen_args[1]) = *(*(short * PTR32 *)&gen_args[1]) + uVar3;
      return;
    }
    F_00559f40(this GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)&gen_args[0]));
    F_00577d20(this GEN_EDX_ARG,&(*(ushort * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
    *puVar2 = *puVar2 + (short)(*(undefined * PTR32 *)&gen_args[2]);
    *(*(short * PTR32 *)&gen_args[1]) = *(*(short * PTR32 *)&gen_args[1]) + (uVar3 - (short)(*(undefined * PTR32 *)&gen_args[2]));
  }
  return;
}

/* ref: FUN_007881a0 */
GEN_NOFRAME uint GEN_STDCALL F_007881a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7881a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_007881b0 */
GEN_NOFRAME uint GEN_THISCALL F_007881b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7881b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 0x198) != 0) {
    if (*(char *)((int)this + 0x188) == '\0') {
      bVar1 = F_00908e50(this GEN_EDX_FWD);
      if (bVar1 == 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,0);
        return uVar2;
      }
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,1);
  }
  return in_EAX;
}

/* ref: FUN_007881f0 */
GEN_NOFRAME uint GEN_THISCALL F_007881f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7881f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  return (uint)this;
}

/* ref: FUN_007882d0 */
GEN_NOFRAME uint GEN_THISCALL F_007882d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7882d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf25 */
GEN_FRAME uint GEN_THISCALL F_00788300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00788340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ListColorChooser",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf52 */
GEN_FRAME byte GEN_THISCALL F_00788350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x788350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if ((char)param_1[1] != '\0') {
    return 0;
  }
  if (*param_1 == 0xf) {
    iVar1 = *(int *)(this + 0x184) + 1;
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      F_00908f10(this GEN_EDX_FWD,*(int *)(this + 0x184) - 1,1);
      return 1;
    }
  }
  F_00908f10(this GEN_EDX_ARG,iVar1,1);
  return 1;
}

/* ref: Client::UI2::AddonListColorChooser::vf2 */
GEN_FRAME uint GEN_THISCALL F_007883a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7883a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    uVar3 = param_2 - 100;
    if ((uVar3 < 10) && (uVar3 <= *(uint *)(this + 0x188))) {
      uVar3 = F_00908f10(this GEN_EDX_ARG,uVar3,0);
    }
  }
  else if (uVar3 == 0x21) {
    F_00557670(param_3 GEN_EDX_ARG,0);
    bVar1 = *(byte *)(param_4 + 0x10);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    iVar4 = *(int *)(this + 0x194) * *(int *)(this + 0x184) + *(int *)(param_4 + 8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x4)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0xc)) = iVar4;
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 * 0xc + *(int *)(this + 0x1a8))));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 8 + iVar4 * 0xc)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x19c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
    *(int *)(this + 0x198) = iVar4;
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 4;
    do {
      this_00 = this_00 - 2;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007884e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007884e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7884e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)((int)this + 0x1a8) != 0) {
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1a8) +
                     (*(int *)((int)this + 0x184) * *(int *)((int)this + 0x194) + param_1) * 0xc)));
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1088100);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
    uVar2 = (int)TRUNC(((float10)(uVar3 & 0xff) / fVar4) * fVar5) & 0xff;
    uVar1 = (int)TRUNC(((float10)(uVar3 >> 8 & 0xff) / fVar4) * fVar5) & 0xff;
    uVar3 = (int)TRUNC(((float10)(uVar3 >> 0x10 & 0xff) / fVar4) * fVar5) & 0xff;
    this_00 = (undefined *)F_00561490(param_3 GEN_EDX_FWD,4);
    F_0055a1d0(this_00 GEN_EDX_ARG,uVar3,uVar1,uVar2);
    if ((*(uint *)((int)this + 0x1a0) == param_1) &&
       (*(uint *)((int)this + 0x1a0) == *(uint *)((int)this + 0x198) % *(uint *)((int)this + 0x194))
       ) {
      if ((*(byte *)((int)this + 0x18c) & 0x10) != 0) {
        F_0059d640((undefined *)*param_2 GEN_EDX_ARG,3);
        return;
      }
      F_0059d640((undefined *)*param_2 GEN_EDX_ARG,3);
    }
  }
  return;
}

/* ref: FUN_00788610 */
GEN_NOFRAME uint GEN_THISCALL F_00788610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  *(undefined4 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x19a) = 0;
  *(undefined2 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  return (uint)this;
}

/* ref: FUN_007886d0 */
GEN_NOFRAME uint GEN_THISCALL F_007886d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7886d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf25 */
GEN_FRAME uint GEN_THISCALL F_00788700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406b30(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00788760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ContextIconMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf53 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00788770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x788770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::UI2::AddonContextIconMenu::vf2 */
GEN_FRAME uint GEN_THISCALL F_00788780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x788780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  byte bVar2;
  undefined1 AVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint * this_00;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0x17;
  if (uVar5 < 0x17) {
    uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7889f0) + uVar4 + 1)));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0x17: ;
      uVar5 = param_2 - 100;
      if ((uVar5 < 10) && (uVar5 <= *(uint *)(this + 0x188))) {
        uVar4 = F_00909050(this GEN_EDX_FWD,uVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar4;
      }
      break;
    case 0x1f: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      iVar8 = *(int *)(this + 0x1a4) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14;
      F_00560760(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      AVar3 = this[0x18c];
      iVar7 = *param_4;
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar8 + 8);
      if (((byte)AVar3 & 0x80) != 0) {
        (*(undefined1 *)(gen_frame + 0xe)) = 2;
        (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(iVar8 + 6);
        (*(undefined1 *)(gen_frame + 0xf)) = *(undefined1 *)(iVar8 + 4);
        uVar6 = 0;
        if (iVar7 != 0) {
          uVar6 = *(undefined4 *)(iVar7 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar4 = F_0055dcb0();
        uVar4 = F_00588780((undefined *)(uVar4 + 0xe0) GEN_EDX_ARG,6,(uint)(byte)AVar3,uVar6,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar4;
      }
      uVar6 = 0;
      if (iVar7 != 0) {
        uVar6 = *(undefined4 *)(iVar7 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar4 = F_0055dcb0();
      uVar4 = F_00588780((undefined *)(uVar4 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar3,uVar6,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar4;
    case 0x20: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar4 = F_0055dcb0();
      uVar5 = F_00594d90((undefined *)(uVar4 + 0xe0) GEN_EDX_ARG,0);
      break;
    case 0x21: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      iVar8 = *(int *)(this + 0x1a4);
      iVar7 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      bVar2 = *(byte *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      puVar1 = (undefined4 *)(iVar8 + iVar7 * 0x14);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x1c)) = iVar7;
      uVar6 = *puVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
      uVar6 = puVar1[3];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar6;
      F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar8 = 4;
      do {
        this_00 = this_00 - 2;
        uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar8 = iVar8 - 1;
      } while (-1 < iVar8);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar4;
    case 0x2d: ;
      if (*(int *)(this + 0x1a0) != 0) {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14)));
        F_005ab2b0((undefined *)*param_4 GEN_EDX_ARG,puVar1[3],*puVar1,puVar1[4]);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar4 = F_00557670(param_3 GEN_EDX_ARG,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar4;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00788a20 */
GEN_FRAME unsigned int GEN_THISCALL F_00788a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x788a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_005951c0(param_3 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) +
                          (*(int *)((int)this + 0x184) * 0x19 + param_1) * 0x14))),0,0);
  }
  return;
}

/* ref: Client::UI2::AddonCreditPlayer::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00788a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 2) {
    F_00579170((undefined *)this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::UI2::AddonCreditPlayer::vf25 */
GEN_NOFRAME unsigned int F_00788a60(void)
{
  GEN_ENTER(0x788a60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00788a70 */
GEN_FRAME uint GEN_THISCALL F_00788a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x788a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != *(uint *)((int)this + 0x200)) {
    *(uint *)((int)this + 0x200) = param_1;
    uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc) GEN_EDX_FWD,*(undefined4 *)(&REFG(undefined, 0x10c0b18) + param_1 * 4))
    ;
  }
  return uVar1;
}

/* ref: FUN_00788aa0 */
GEN_FRAME uint GEN_THISCALL F_00788aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x788aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_ecx;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  in_ecx = F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar2 = (param_1 >> 2) + *(int *)((int)this + 0x22c);
  if (0x15 < uVar2) {
    uVar2 = uVar2 - 0x16;
  }
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + ((param_1 & 3) + uVar2 * 4) * 4 + 0x238)));
    this_00 = (undefined *)F_00559ba0(in_ecx GEN_EDX_ARG);
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar3);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCreditPlayer::vf54 */
GEN_FRAME uint GEN_THISCALL F_00788b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  uint uStack_8;
  
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x208) GEN_EDX_FWD);
  uStack_8 = (uint)uVar4;
  dVar2 = (double)(int)param_2;
  if ((int)param_2 < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar2 = dVar2 * REFG(double, 0x1088108);
  fVar6 = F_0055dfd0(param_1 GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  uVar4 = F_0055a030(*(undefined4 *)(param_1 + 0x208) GEN_EDX_ARG);
  dVar3 = (double)param_3;
  if (param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar7 = F_0055dfd0(param_1 GEN_EDX_ARG);
  uVar5 = F_00559da0(*(undefined4 *)(param_1 + 0x208) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 - (fVar6 * (float10)uStack_8) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 - (fVar7 * (float10)uVar4) * (float10)REFG(double, 0x1088108)))));
  return uVar5;
}

/* ref: Client::UI2::AddonCreditScroll::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00788be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x440) = 1;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00788c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 5) {
    F_00579170((undefined *)this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::UI2::AddonCreditScroll::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00788c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CreditStaff",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_00788c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788c20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(in_ecx + 0x180) == 6);
  if (*(char *)(in_ecx + 0x444) != '\0') {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

/* ref: FUN_00788c40 */
GEN_FRAME byte GEN_THISCALL F_00788c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x788c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 1: ;
  case 4: ;
  case 5: ;
    if (*(char *)(param_1 + 1) == '\0') {
      *(bool *)((int)this + 0x43c) = *(char *)((int)this + 0x43c) == '\0';
      *(undefined4 *)((int)this + 0x440) = 1;
      return 1;
    }
    break;
  case 2: ;
  case 3: ;
    if (*(char *)(param_1 + 1) == '\0') {
      F_005a9130(this GEN_EDX_FWD,0);
      return 1;
    }
    break;
  case 10: ;
    if ((*(char *)(param_1 + 1) == '\0') && (*(char *)((int)this + 0x43c) == '\0')) {
      bVar1 = 1;
      *(int *)((int)this + 0x440) = *(int *)((int)this + 0x440) + 1;
      if (3 < *(int *)((int)this + 0x440)) {
        *(undefined4 *)((int)this + 0x440) = 1;
      }
    }
  }
  return bVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf25 */
GEN_NOFRAME unsigned int F_00788cf0(void)
{
  GEN_ENTER(0x788cf0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonCreditScroll::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00788d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x788d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  
  if (((*(int *)(this + 0x180) == 5) && ((short)param_1 == 0xc)) &&
     (*(char *)(param_4 + 0x14) == '\0')) {
    bVar1 = F_00788c40(this GEN_EDX_FWD,param_4);
    if (bVar1 != 0) {
      F_00557670(param_3 GEN_EDX_ARG,0);
    }
  }
  return;
}

/* ref: Client::UI2::AddonCreditScroll::vf54 */
GEN_FRAME uint GEN_THISCALL F_00788d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  float10 fVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  uint uStack_8;
  
  uVar3 = F_0055a020(*(undefined4 *)(param_1 + 0x3b4) GEN_EDX_FWD);
  uStack_8 = (uint)uVar3;
  fVar5 = F_0055dfd0(param_1 GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x3b4) GEN_EDX_ARG);
  fVar6 = F_0055dfd0(param_1 GEN_EDX_ARG);
  fVar2 = (float10)REFG(double, 0x1088108);
  F_00559eb0(*(undefined4 *)(param_1 + 0x3b4) GEN_EDX_ARG,
               (int)((float10)(param_2 >> 1) - (fVar5 * (float10)uStack_8) * fVar1) & 0xffff);
  uVar4 = F_00559f40(*(undefined4 *)(param_1 + 0x3b4) GEN_EDX_ARG,
                       (int)((float10)(param_3 >> 1) - (fVar6 * (float10)uVar3) * fVar2) & 0xffff);
  return uVar4;
}

/* ref: FUN_00788e00 */
GEN_NOFRAME uint GEN_THISCALL F_00788e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 0x354) == '\0') {
      *(undefined1 *)(uVar1 + 0x354 + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x1d4) GEN_EDX_FWD,1);
      return *(uint *)((int)this + uVar1 * 4 + 0x1d4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return 0;
}

/* ref: FUN_00788e40 */
GEN_NOFRAME uint GEN_THISCALL F_00788e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 0x36c) == '\0') {
      *(undefined1 *)(uVar1 + 0x36c + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x234) GEN_EDX_FWD,1);
      return *(uint *)((int)this + uVar1 * 4 + 0x234);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return 0;
}

/* ref: FUN_00788e80 */
GEN_NOFRAME uint GEN_THISCALL F_00788e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 900) == '\0') {
      *(undefined1 *)(uVar1 + 900 + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x294) GEN_EDX_FWD,1);
      return *(uint *)((int)this + uVar1 * 4 + 0x294);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x30);
  return 0;
}

/* ref: FUN_00788ec0 */
GEN_FRAME uint GEN_THISCALL F_00788ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x788ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x1d4);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 0x354 + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x1d4) GEN_EDX_FWD,0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x234);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 0x36c + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x234) GEN_EDX_ARG,0);
      return CONCAT31(extraout_var_00,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x294);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 900 + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x294) GEN_EDX_ARG,0);
      return CONCAT31(extraout_var_01,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x30);
  return uVar2;
}

/* ref: FUN_00788f70 */
GEN_NOFRAME uint GEN_THISCALL F_00788f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x788f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x841;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c57bc));
  *(undefined2 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x198) = 0xffffffff;
  *(undefined4 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditCast::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00789000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00789020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_0050c620(*(int *)(this + 0x184),0,0);
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_00406b30(*(int *)(this + 0x18c));
    *(undefined4 *)(this + 0x18c) = 0;
  }
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00789080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x19c] != (undefined1)0x0) {
    F_00579170((undefined *)this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::UI2::AddonCreditCast::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00789090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CreditCast",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf48 */
GEN_NOFRAME byte GEN_THISCALL F_007890a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7890a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(int *)(in_ecx + 0x180) == 3;
}

/* ref: Client::UI2::AddonCreditCast::vf25 */
GEN_NOFRAME unsigned int F_007890b0(void)
{
  GEN_ENTER(0x7890b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonCreditCast::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007890c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7890c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_007890d0 */
GEN_FRAME uint GEN_THISCALL F_007890d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7890d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(param_1 + 0x1a4))));
  fVar4 = (float10)fVar1;
  *(float *)(param_1 + 0x1a4) = fVar1;
  if (*(int *)(param_1 + 0x198) != -1) {
    *(undefined1 *)(param_1 + 0x19c) = 1;
  }
  sVar2 = 0;
  if (0 < *(short *)(param_1 + 0x188)) {
    do {
      if (((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + sVar2 * 4))) <= fVar4) &&
         (fVar5 = (float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + sVar2 * 4 + 2))),
         (!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 < fVar4))) {
        iVar3 = (int)sVar2;
        if (*(int *)(param_1 + 0x198) != iVar3) {
          F_0059d640(*(undefined * PTR32 *)(param_1 + 400) GEN_EDX_FWD,0x65);
          F_0059d640(*(undefined * PTR32 *)(param_1 + 0x194) GEN_EDX_ARG,iVar3 + 0x65);
          *(int *)(param_1 + 0x198) = iVar3;
        }
        break;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(param_1 + 0x188));
  }
  if ((*(int *)(param_1 + 0x198) != -1) &&
     ((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + 2 + *(short *)(param_1 + 0x198) * 4))) <
      (float10)*(float *)(param_1 + 0x1a4))) {
    F_0059d640(*(undefined * PTR32 *)(param_1 + 400) GEN_EDX_ARG,0x66);
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  }
  if ((float10)(int)*((short *)GEN_TOP((*(uint *)(param_1 + 0x18c) + 2 +
                              (short)(*(short *)(param_1 + 0x188) - 1) * 4))) +
      (float10)*(double *)&REFG(undefined, 0x10947f0) < (float10)*(float *)(param_1 + 0x1a4)) {
    *(undefined4 *)(param_1 + 0x180) = 3;
  }
  return *(uint *)(param_1 + 0x18c);
}

/* ref: Client::UI2::AddonCreditCast::vf54 */
GEN_FRAME uint GEN_THISCALL F_00789200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789200u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_14;
  
  fVar6 = (float10)(int)param_2;
  if ((int)param_2 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar6;
  local_14 = (uint)(longlong)TRUNC(fVar1 * gen_bits2f(param_1[0x6a]));
  if (param_3 < local_14) {
    fVar6 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_FWD,0);
    fVar6 = (float10)(float)fVar6 / (float10)(uVar4 & 0xffff);
  }
  else {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,0);
    fVar6 = (float10)fVar1 / (float10)(uVar4 & 0xffff);
  }
  F_0056b4b0(param_1 GEN_EDX_ARG,(float)fVar6);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,0);
  dVar2 = (double)fVar1 * REFG(double, 0x1088108);
  fVar7 = F_0055df60(param_1 GEN_EDX_ARG);
  fVar6 = (float10)REFG(double, 0x1088108);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_ARG,0);
  dVar3 = (double)(int)param_3;
  if ((int)param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar8 = F_0055df60(param_1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1 GEN_EDX_ARG,(int)((float10)dVar2 - (fVar7 * (float10)(uVar4 & 0xffff)) * fVar6) &
                             0xffff,
                     (int)((float10)dVar3 -
                          (fVar8 * (float10)(uVar5 & 0xffff)) * (float10)REFG(double, 0x1088108)) & 0xffff);
  return uVar4;
}

/* ref: FUN_00789350 */
GEN_NOFRAME uint GEN_THISCALL F_00789350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x841;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined2 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c58bc));
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditEnd::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007893d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7893d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007893f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7893f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf38 */
GEN_FRAME uint GEN_THISCALL F_00789400(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x789400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar2 == 1) {
    bVar1 = F_00577b50(*(undefined * PTR32 *)(param_1 + 0x188) GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00577b50(*(undefined * PTR32 *)(param_1 + 0x18c) GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        *(undefined4 *)(param_1 + 0x180) = 2;
        return uVar2;
      }
    }
  }
  else if (uVar2 == 2) {
    *(float *)(param_1 + 0x194) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x194) + (float10)param_2)));
    if (*(char *)(param_1 + 0x19c) == '\0') {
      uVar2 = F_0059d640(*(undefined * PTR32 *)(param_1 + 0x184) GEN_EDX_ARG,0x65);
      *(undefined1 *)(param_1 + 0x19c) = 1;
      return uVar2;
    }
    if (*(char *)(param_1 + 0x19d) == '\0') {
      uVar2 = F_00559cf0(*(undefined4 *)(param_1 + 0x184) GEN_EDX_ARG);
      if ((short)uVar2 == 0x66) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
        (*(undefined4 *)(gen_frame + 0x18)) = 0xf425e;
        uVar2 = F_0055dcb0();
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
        F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        *(undefined1 *)(param_1 + 0x19d) = 1;
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCreditEnd::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00789500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 2) {
    F_00579170((undefined *)this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::UI2::AddonCreditEnd::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00789510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CreditEnd",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf44 */
GEN_FRAME uint GEN_THISCALL F_00789520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined * pAVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_0055e2f0(this GEN_EDX_FWD,1);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  uVar2 = F_0055e360(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x18c) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined2 *)(this + 0x19c) = 0;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x14));
  pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 2;
  F_00591c00(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0x1d6b6,pAVar3);
  F_00591c00(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0x1d6b7,pAVar3);
  F_00568380(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,0x41,0,this,0,0);
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCreditEnd::vf48 */
GEN_NOFRAME byte GEN_THISCALL F_00789610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789610u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(int *)(in_ecx + 0x180) == 3;
}

/* ref: Client::UI2::AddonCreditEnd::vf25 */
GEN_NOFRAME unsigned int F_00789620(void)
{
  GEN_ENTER(0x789620u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonCreditEnd::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00789630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x789630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  if ((((short)param_2 == 0x41) && (*(int *)(in_ecx + 0x180) == 2)) &&
     (*(char *)(param_5 + 2) == '\x01')) {
    *(undefined4 *)(in_ecx + 0x180) = 3;
  }
  return;
}

/* ref: Client::UI2::AddonCreditEnd::vf54 */
GEN_FRAME uint GEN_THISCALL F_00789660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789660u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_14;
  
  fVar6 = (float10)(int)param_2;
  if ((int)param_2 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar6;
  local_14 = (uint)(longlong)TRUNC(fVar1 * gen_bits2f(param_1[0x66]));
  if (param_3 < local_14) {
    fVar6 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_FWD,0);
    fVar6 = (float10)(float)fVar6 / (float10)(uVar4 & 0xffff);
  }
  else {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,0);
    fVar6 = (float10)fVar1 / (float10)(uVar4 & 0xffff);
  }
  F_0056b4b0(param_1 GEN_EDX_ARG,(float)fVar6);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,0);
  dVar2 = (double)fVar1 * REFG(double, 0x1088108);
  fVar7 = F_0055df60(param_1 GEN_EDX_ARG);
  fVar6 = (float10)REFG(double, 0x1088108);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_ARG,0);
  dVar3 = (double)(int)param_3;
  if ((int)param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar8 = F_0055df60(param_1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1 GEN_EDX_ARG,(int)((float10)dVar2 - (fVar7 * (float10)(uVar4 & 0xffff)) * fVar6) &
                             0xffff,
                     (int)((float10)dVar3 -
                          (fVar8 * (float10)(uVar5 & 0xffff)) * (float10)REFG(double, 0x1088108)) & 0xffff);
  return uVar4;
}

/* ref: FUN_007897b0 */
GEN_NOFRAME uint GEN_THISCALL F_007897b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7897b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c59bc));
  *(undefined1 *)((int)this + 0x180) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonHud::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00789810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,1,0);
  this[0x180] = (undefined1)0x1;
  return uVar1;
}

/* ref: Client::UI2::AddonHud::vf38 */
GEN_FRAME unsigned int GEN_THISCALL F_00789830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x789830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x180] != (undefined1)0x0) {
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    bVar2 = F_005800a0(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,(uint)(byte)AVar1);
    if (bVar2 != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xf;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
      this[0x180] = (undefined1)0x0;
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00789890 */
GEN_NOFRAME uint GEN_THISCALL F_00789890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5abc));
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 10;
  return (uint)this;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf2 */
GEN_FRAME uint GEN_THISCALL F_007898f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7898f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 6) {
    if (param_2 == 1) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0x11;
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    }
    uVar2 = param_2;
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0x12;
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    }
  }
  else {
    if (uVar2 == 7) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0xffffffff;
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    }
    uVar2 = uVar2 - 9;
    if (uVar2 == 0) {
      if (param_2 == 0) {
        bVar1 = *(byte *)(param_4 + 6);
        (*(undefined4 *)(gen_frame + 0x28)) = 3;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
        (*(undefined4 *)(gen_frame + 0x30)) = 4;
        (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
        F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x28)));
        puVar3 = &(*(uint *)(gen_frame + 0x38));
        iVar4 = 1;
        do {
          puVar3 = puVar3 - 2;
          uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      uVar2 = param_2 - 1;
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 600);
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(this + 0x25c);
        (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)(param_4 + 6);
        iVar4 = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 3;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
        (*(undefined4 *)(gen_frame + 0x20)) = 4;
        (*(undefined4 *)(gen_frame + 0x28)) = 4;
        (*(undefined4 *)(gen_frame + 0x30)) = 4;
        F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar3 = &(*(uint *)(gen_frame + 0x38));
        do {
          puVar3 = puVar3 - 2;
          uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00789ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  pvVar1 = F_00c48350(this + 0x180,0,0xd0);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00789b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,0,8,0);
  F_005a92d0(this GEN_EDX_ARG,1,9,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x13,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x15,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00789b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TargetInfo",0,6);
  return bVar1;
}

/* ref: FUN_00789b60 */
GEN_FRAME byte GEN_THISCALL F_00789b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789b60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x20);
    iVar2 = *piVar1;
    bVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) != iVar2;
    iVar3 = piVar1[2];
    iVar4 = piVar1[0x24];
    uVar5 = **(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x20);
    uVar6 = (*(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x20))[1];
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = iVar2;
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar7);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) GEN_EDX_FWD,uVar5);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) GEN_EDX_ARG,uVar6);
    if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) + 0xe4))) != iVar3) {
      F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) GEN_EDX_ARG,iVar3,(*(int *)&gen_args[1]));
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) GEN_EDX_ARG,(uint)(0 < iVar4));
    F_00591c00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) GEN_EDX_ARG,iVar4,0);
    return bVar7;
  }
  return 0;
}

/* ref: FUN_00789c10 */
GEN_FRAME uint GEN_THISCALL F_00789c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x789c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(uVar5 + 0x88);
    uVar2 = *(uint *)(uVar5 + 0x8c);
    if (*(int *)((int)this + 0x188) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 0x188) GEN_EDX_ARG,uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 0x188) GEN_EDX_ARG,uVar5);
    }
    if (*(int *)((int)this + 0x18c) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,uVar5);
    }
    if (*(int *)((int)this + 400) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 400) GEN_EDX_ARG,uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 400) GEN_EDX_ARG,uVar5);
    }
    if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
      uVar4 = F_0055a170(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,uVar2 & 0xff,(int)uVar2 >> 8 & 0xff,
                           (int)uVar2 >> 0x10 & 0xff);
      uVar5 = CONCAT22(extraout_var,uVar4);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x198);
    if (this_00 != (undefined *)0x0) {
      uVar3 = *(undefined4 *)((int)this + 0x19c);
      F_00561aa0(this_00 GEN_EDX_ARG,uVar1);
      F_00561b40(this_00 GEN_EDX_ARG,uVar1);
      uVar5 = F_00561b90(uVar2,uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00789d40 */
GEN_FRAME uint GEN_THISCALL F_00789d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = param_2;
  if ((param_2 != 0) && ((*(int *)&gen_a2) != 0)) {
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x1c))) == 0) {
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c4) GEN_EDX_FWD,0);
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c0) GEN_EDX_ARG,0);
      bVar3 = F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c8) GEN_EDX_ARG,0);
      return CONCAT31(extraout_var,bVar3);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30)));
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_a2) + 0x20) + 4)));
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c4) GEN_EDX_ARG,1);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c0) GEN_EDX_ARG,1);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c8) GEN_EDX_ARG,1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x1c0) GEN_EDX_ARG,uVar2);
    uVar4 = F_00568230(*(undefined4 *)(param_1 + 0x1c4) GEN_EDX_ARG,
                         (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return uVar4;
}

/* ref: FUN_00789e00 */
GEN_FRAME uint GEN_THISCALL F_00789e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  
  if ((param_1 != 0) && (in_EAX = 0, param_2 != 0)) {
    in_EAX = F_00584110(*(undefined * PTR32 *)((int)this + 0x1d0) GEN_EDX_FWD,
                          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))));
  }
  return in_EAX;
}

/* ref: FUN_00789e30 */
GEN_NOFRAME uint GEN_THISCALL F_00789e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  *(undefined4 *)((int)this + 0x268) = 0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5bbc));
  *(byte *)((int)this + 0xfb) = (bVar1 ^ *(byte *)((int)this + 0xfb)) & 0x5f ^ bVar1 | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this GEN_EDX_ARG,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursor::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00789eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x789eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Client::UI2::AddonTargetCursor::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00789ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  pvVar1 = F_00c48350(this + 0x180,0,0xe8);
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00789ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x17,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00789f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x789f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TargetCursor",0,6);
  return bVar1;
}

/* ref: FUN_00789f10 */
GEN_FRAME byte GEN_THISCALL F_00789f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x789f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if (6 < param_1) {
    return 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x24c);
  if ((puVar1 != (undefined4 *)0x0) && ((puVar1[4] != param_2 || ((char)param_3 != '\0')))) {
    puVar1[4] = param_2;
    if (param_2 == 0) {
      if (puVar1[6] != -1) {
        F_0059d640((undefined *)*puVar1 GEN_EDX_FWD,puVar1[6]);
        return 1;
      }
      F_0055a300((undefined *)*puVar1 GEN_EDX_ARG,0);
    }
    else if (param_2 < 3) {
      if (puVar1[5] == -1) {
        F_0055a300((undefined *)*puVar1 GEN_EDX_ARG,1);
      }
      else {
        F_0059d640((undefined *)*puVar1 GEN_EDX_ARG,puVar1[5]);
      }
      if ((undefined *)puVar1[3] != (undefined *)0x0) {
        F_00559c60((undefined *)puVar1[3] GEN_EDX_ARG,1);
        return 1;
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00789fb0 */
GEN_FRAME uint GEN_THISCALL F_00789fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789fb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((param_2 < 7) &&
     (puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x24c + param_2 * 4), puVar1 != (undefined4 *)0x0)) {
    F_0055a730(*puVar1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
    uVar2 = F_00559da0(*puVar1 GEN_EDX_ARG,((float)GEN_TOF(((float10)((int)param_3 >> 0x10) - (float10)(*(float *)(gen_frame + 0x4))))),
                         ((float)GEN_TOF(((float10)(param_3 & 0xffff) - (float10)(*(float *)(gen_frame + 0x8))))));
  }
  return uVar2;
}

/* ref: FUN_0078a020 */
GEN_FRAME uint GEN_THISCALL F_0078a020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x78a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  ushort uVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  
  uVar3 = param_1;
  if ((param_1 < 7) && (iVar1 = *(int *)((int)this + param_1 * 4 + 0x24c), iVar1 != 0)) {
    F_0055a170(*(undefined * PTR32 *)(iVar1 + 4) GEN_EDX_FWD,(param_2 & 0xff) - 0xa0,(param_2 >> 8 & 0xff) - 0xa0,
                 (param_2 >> 0x10 & 0xff) - 0xa0);
    uVar2 = F_0055a170(*(undefined * PTR32 *)(iVar1 + 8) GEN_EDX_ARG,param_3 & 0xff,param_3 >> 8 & 0xff,
                         param_3 >> 0x10 & 0xff);
    uVar3 = CONCAT22(extraout_var,uVar2);
  }
  return uVar3;
}

/* ref: FUN_0078a0a0 */
GEN_FRAME uint GEN_THISCALL F_0078a0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)((int)this + 0x3a) + *(int *)(uVar1 + 4);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = F_00578ee0((undefined *)((int)this + 0x24) GEN_EDX_FWD,uVar2);
      uVar1 = F_0055a6b0(uVar1 GEN_EDX_ARG,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf28 */
GEN_FRAME byte GEN_THISCALL F_0078a0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 600);
  if (((puVar2 == (undefined4 *)0x0) || (puVar2[4] == 0)) ||
     (uVar1 = F_0055a2d0(*puVar2 GEN_EDX_FWD), (char)uVar1 == '\0')) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x254);
  }
  if (((puVar2 != (undefined4 *)0x0) && (puVar2[4] != 0)) &&
     (uVar1 = F_0055a2d0(*puVar2 GEN_EDX_ARG), (char)uVar1 != '\0')) {
    F_0055a000((undefined *)*puVar2 GEN_EDX_ARG,((short *)(gen_frame + 0x8)),((short *)(gen_frame + 0x4)));
    F_00559fb0((undefined *)*puVar2 GEN_EDX_ARG,param_1,param_2);
    *param_1 = *param_1 + ((short *)(gen_frame + 0x8))[0];
    *param_2 = *param_2 + ((short *)(gen_frame + 0x4))[0];
    return 1;
  }
  return 0;
}

/* ref: FUN_0078a170 */
GEN_NOFRAME uint GEN_THISCALL F_0078a170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5cbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(byte *)((int)this + 0xfb) = (bVar1 ^ *(byte *)((int)this + 0xfb)) & 0x5f ^ bVar1 | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this GEN_EDX_ARG,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_0078a1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return 0;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078a220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x17,0);
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078a240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TargetCursorGrand",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078a250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x18c) = uVar1;
  *(undefined4 *)(this + 0x180) = 0;
  F_0059d640(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,0x66);
  uVar1 = F_005a91d0(this GEN_EDX_ARG,1,0x17);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf47 */
GEN_FRAME uint GEN_THISCALL F_0078a2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  float fVar6;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  uVar5 = param_2;
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x94))) == 0) {
      if (param_1[0x60] == 1) {
        uVar5 = F_0059d640((undefined *)param_1[0x61] GEN_EDX_FWD,4);
        param_1[0x60] = 0;
        return uVar5;
      }
      uVar5 = (uint)param_1[0x3d] >> 0x14 & 0xf;
      if ((uVar5 == 3) || (uVar5 == 2)) {
        uVar4 = F_00559c40(param_1[0x61] GEN_EDX_ARG);
        uVar5 = CONCAT22(extraout_var,uVar4);
        if ((char)uVar4 == '\0') {
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,0,0);
          return uVar5;
        }
      }
    }
    else {
      uVar5 = (uint)param_1[0x3d] >> 0x14 & 0xf;
      if ((uVar5 == 5) || (uVar5 == 4)) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,0);
      }
      if (param_1[0x60] == 0) {
        F_0059d640((undefined *)param_1[0x61] GEN_EDX_ARG,0x65);
        param_1[0x60] = 1;
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      uVar5 = *(uint *)(iVar1 + 0x98);
      uVar2 = *(uint *)(iVar1 + 0xa0);
      uVar3 = *(uint *)(iVar1 + 0x9c);
      uVar4 = F_0055a030(param_1[0x61] GEN_EDX_ARG);
      fVar6 = ((float)GEN_TOF(((float10)(uVar5 & 0xffff) - (float10)uVar4 * (float10)REFG(double, 0x1088108))));
      uVar4 = F_0055a020(param_1[0x61] GEN_EDX_ARG);
      F_00559da0(param_1[0x61] GEN_EDX_ARG,
                   ((float)GEN_TOF(((float10)(uVar5 >> 0x10) - (float10)uVar4 * (float10)REFG(double, 0x1088108)))),fVar6)
      ;
      F_0055a170((undefined *)param_1[0x62] GEN_EDX_ARG,(uVar3 & 0xff) - 0xa0,(uVar3 >> 8 & 0xff) - 0xa0,
                   (uVar3 >> 0x10 & 0xff) - 0xa0);
      uVar4 = F_0055a170((undefined *)param_1[99] GEN_EDX_ARG,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff);
      uVar5 = CONCAT22(extraout_var_00,uVar4);
    }
  }
  return uVar5;
}

/* ref: FUN_0078a4a0 */
GEN_NOFRAME uint GEN_THISCALL F_0078a4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  F_0058d480((int)this + 400 GEN_EDX_ARG);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x82;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined2 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined1 *)((int)this + 0x1d2) = 0;
  F_0055e2a0(this GEN_EDX_ARG,2,1);
  return (uint)this;
}

/* ref: FUN_0078a550 */
GEN_NOFRAME uint GEN_THISCALL F_0078a550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  F_0058d4b0((undefined *)((int)this + 400) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078a580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x25,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x22,0);
  F_0056c5f0(this + 400 GEN_EDX_ARG);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078a5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"BattleTalk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf44 */
GEN_FRAME uint GEN_THISCALL F_0078a5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  F_005a91d0(this GEN_EDX_FWD,1,0x25);
  F_005a91d0(this GEN_EDX_ARG,0,0x22);
  uVar2 = F_0055e340(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e340(this GEN_EDX_ARG,5);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x188) = uVar2;
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,6);
  *(undefined * PTR32 *)(this + 0x18c) = this_00;
  F_0055adf0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((short *)(gen_frame + 0x8)),0);
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  *(ushort *)(this + 0x1d0) = ((short *)(gen_frame + 0x8))[0] - uVar1;
  uVar1 = F_00567f90(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0x65);
  *(uint *)(this + 0x1c0) = (uint)uVar1;
  uVar2 = F_00567ff0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0x65);
  *(uint *)(this + 0x1c4) = uVar2 & 0xffff;
  return uVar2 & 0xffff;
}

/* ref: Client::UI2::AddonBattleTalk::vf54 */
GEN_FRAME uint GEN_THISCALL F_0078a690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x50))(this,0);
  iVar4 = param_1 - (uVar3 & 0xffff);
  dVar2 = (double)iVar4;
  if (iVar4 < 0) {
    dVar2 = dVar2 + *(double *)&REFG(double, 0x10b8de8);
  }
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x30))(this,(int)(dVar2 * REFG(double, 0x1088108)) & 0xffff);
  return uVar3;
}

/* ref: FUN_0078a6e0 */
GEN_FRAME uint GEN_THISCALL F_0078a6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_FWD,0x11);
  uVar1 = *(undefined4 *)((int)this + 0x90);
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00595110((int)this + 400 GEN_EDX_ARG,100,uVar1,&(*(undefined4 *)(gen_frame + 0x4)),1,REFG(float, 0x1088068));
  F_0056c650((undefined *)((int)this + 400) GEN_EDX_ARG,0x3d,0,this,0,0);
  uVar2 = F_0058d530((undefined *)((int)this + 400) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  return uVar2;
}

/* ref: FUN_0078a770 */
GEN_FRAME uint GEN_THISCALL F_0078a770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_FWD,0);
  *(undefined1 *)((int)this + 0x1d2) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenInfo::vf54 */
GEN_FRAME unsigned int GEN_THISCALL F_0078a7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0x22c;
  iVar3 = 0x12;
  do {
    piVar1 = *(int * PTR32 *)pAVar2;
    if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0xf9) & 1) != 0)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x100))(piVar1 GEN_EDX_FWD);
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_0078a850 */
GEN_NOFRAME uint GEN_THISCALL F_0078a850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005609d0((undefined *)((int)this + 0x1c8) GEN_EDX_FWD,0x3a);
  if (bVar1 == 0) {
    F_0056c440((undefined *)((int)this + 0x1c8) GEN_EDX_ARG,0x3a,0,this,0);
    uVar2 = F_00592380((undefined *)((int)this + 0x1c8) GEN_EDX_ARG);
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0078a890 */
GEN_NOFRAME uint GEN_THISCALL F_0078a890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  
  bVar1 = F_005609d0((undefined *)((int)this + 0x1c8) GEN_EDX_FWD,0x3a);
  if (bVar1 != 0) {
    F_00588be0((undefined *)((int)this + 0x1c8) GEN_EDX_ARG,0x3a,0,this);
    F_005609b0((int)this + 0x1c8 GEN_EDX_ARG);
    return extraout_EAX;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0078a8d0 */
GEN_FRAME uint GEN_THISCALL F_0078a8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078a930 */
GEN_FRAME unsigned int GEN_STDCALL F_0078a930(unsigned int gen_a0)
{
  GEN_ENTER(0x78a930u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (param_1 != (undefined *)0x0) {
    F_0058f5b0(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0078a950 */
GEN_NOFRAME uint GEN_THISCALL F_0078a950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c5ebc));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonAreaText::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078a9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78a9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"AreaText",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAreaText::vf63 */
GEN_FRAME uint GEN_THISCALL F_0078a9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (3 < param_1) {
    uVar5 = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    uVar2 = F_0055dcb0();
    bVar1 = *(byte *)(param_2 + 0x18);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if ((bVar1 & 0xf) != 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = 10000;
    uVar3 = F_0055ab00(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x84))) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x84))) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_0058bba0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar7 = (float10)*(int *)(uVar2 + 0x238);
    if (*(int *)(uVar2 + 0x238) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar8 = (float10)*(int *)(uVar2 + 0x234);
    if (*(int *)(uVar2 + 0x234) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))
              (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar8),(undefined4)gen_fl2bits((float)fVar7));
    F_00559c60(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,2);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonAreaText::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078ab50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ab50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonAreaText::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078ab90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ab90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078abd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"GetAction",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGetAction::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078abe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78abe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x188] = (undefined1)0x0;
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078ac10 */
GEN_FRAME uint F_0078ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059d640(*(undefined * PTR32 *)(param_2 + 0x184) GEN_EDX_ARG,0x66);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078ac40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78ac40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078acf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78acf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078ad30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 400) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 400) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(this + 0x194) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
  }
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany0::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ad90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ad90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"GrandCompany0",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompany1::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ada0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ada0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"GrandCompany1",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonScreenText::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078adc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78adc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  this_00 = this + 0x184;
  iVar2 = 10;
  do {
    F_0056c5f0(this_00 GEN_EDX_FWD);
    this_00 = this_00 + 0x70;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenText::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078adf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Text0",1,6);
  return bVar1;
}

/* ref: FUN_0078ae00 */
GEN_FRAME unsigned int GEN_THISCALL F_0078ae00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x3c) == 1) {
    uVar2 = F_0055a020(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_FWD);
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
    F_00559e70(*(undefined4 *)((int)this + 0x50) GEN_EDX_ARG,
                 ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 100) GEN_EDX_ARG);
    uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    iVar5 = uVar4 + uVar2;
    fVar7 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar8 = F_00559d60(*(undefined4 *)((int)this + 0x50) GEN_EDX_ARG);
    fVar1 = (float10)REFG(double, 0x1088108);
    uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    fVar9 = (float10)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00559e70(*(undefined4 *)((int)this + 100) GEN_EDX_ARG,
                 ((float)GEN_TOF((((float10)(double)((float10)uVar2 * fVar1 + fVar8) -
                         fVar9 * (float10)REFG(double, 0x1088108)) - (float10)*(double *)&REFG(undefined, 0x10944d0)))));
    uVar6 = CONCAT22((short)((uint)(int)fVar7 >> 0x10),(short)(int)fVar7 + 0x19);
    F_0055a060(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG,uVar6);
    F_0055a060(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG,uVar6);
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG);
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
    F_00559e70(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG,
                 ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG);
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
    F_00559e70(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG,
                 ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
    return;
  }
  uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
  fVar7 = (float10)(int)uVar4;
  if ((int)uVar4 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_c = CONCAT22((short)((uint)gen_fl2bits((float)(fVar7 + (float10)*(double *)&REFG(undefined, 0x1090718)))
                            >> 0x10),(short)(int)(fVar7 + (float10)*(double *)&REFG(undefined, 0x1090718)));
  F_0055a060(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG,local_c);
  F_0055a060(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG,local_c);
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x50) GEN_EDX_ARG);
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
  F_00559e70(*(undefined4 *)((int)this + 0x50) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
  F_00559e70(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG);
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48) GEN_EDX_ARG);
  F_00559e70(*(undefined4 *)((int)this + 0x60) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  return;
}

/* ref: Client::UI2::AddonScreenText::vf66 */
GEN_NOFRAME unsigned int F_0078b060(void)
{
  GEN_ENTER(0x78b060u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonScreenText::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078b070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78b070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * pAVar2;
  
  if ((short)param_1 == 0x3d) {
    uVar1 = 0;
    pAVar2 = this + 0x180;
    while (pAVar2 != param_2) {
      uVar1 = uVar1 + 1;
      pAVar2 = pAVar2 + 0x70;
      if (9 < uVar1) {
        return;
      }
    }
    *(undefined4 *)(pAVar2 + 0x44) = 0;
    *(undefined4 *)(pAVar2 + 0x34) = 0;
    *(undefined4 *)(pAVar2 + 0x40) = 0xffffffff;
    F_0055a200(*(undefined4 *)(pAVar2 + 0x48) GEN_EDX_FWD,0xff);
    F_0055a300(*(undefined * PTR32 *)(pAVar2 + 0x48) GEN_EDX_ARG,0);
    F_00588f80(pAVar2 + 4 GEN_EDX_ARG,0x3d,pAVar2,this,0);
  }
  return;
}

/* ref: FUN_0078b0f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0078b0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar2 = -1;
  piVar3 = (int *)((int)this + 0x1c0);
  iVar4 = 2;
  do {
    if (((piVar3[-2] == param_1) && (iVar1 = *piVar3, iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x1a] == param_1) && (iVar1 = piVar3[0x1c], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x36] == param_1) && (iVar1 = piVar3[0x38], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x52] == param_1) && (iVar1 = piVar3[0x54], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x6e] == param_1) && (iVar1 = piVar3[0x70], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    piVar3 = piVar3 + 0x8c;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_0078b190 */
GEN_FRAME uint GEN_THISCALL F_0078b190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  puVar3 = (uint *)((int)this + 0x1c0);
  iVar4 = 2;
  do {
    if (((puVar3[-2] == param_1) && (uVar1 = *puVar3, (int)uVar2 < (int)uVar1)) && ((int)uVar1 < 10)
       ) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x1a] == param_1) && (uVar1 = puVar3[0x1c], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x36] == param_1) && (uVar1 = puVar3[0x38], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x52] == param_1) && (uVar1 = puVar3[0x54], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x6e] == param_1) && (uVar1 = puVar3[0x70], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    puVar3 = puVar3 + 0x8c;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: FUN_0078b260 */
GEN_FRAME uint GEN_STDCALL F_0078b260(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b260u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = (*(uint *)&gen_args[0]);
  iVar1 = *(int *)((*(uint *)&gen_args[0]) + 0x38);
  F_00559fe0(*(undefined4 *)((*(uint *)&gen_args[0]) + 0x48) GEN_EDX_ARG,&(*(uint *)&gen_args[0]),&(*(float *)(gen_frame + 0x8)));
  if (iVar1 == 0) {
    dVar4 = (double)(*(float *)&gen_args[1]) * REFG(double, 0x1088108);
    uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
    (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                     (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                     (float10)REFG(double, 0x1088108))));
    F_00559e70(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
    iVar1 = *(int *)(uVar7 + 0x40);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
    fVar8 = (float10)(*(float *)&gen_args[2]);
    fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
    uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
    (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                     (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
    uVar6 = F_00559f00(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
  }
  else {
    if (iVar1 == 1) {
      dVar4 = (double)(*(float *)&gen_args[1]) * *(double *)&REFG(undefined, 0x10919f0);
      uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                       (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                       (float10)REFG(double, 0x1088108))));
      F_00559e70(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
      iVar1 = *(int *)(uVar7 + 0x40);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar8 = (float10)(*(float *)&gen_args[2]);
      fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                       (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
      uVar7 = F_00559f00(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
      return uVar7;
    }
    uVar6 = iVar1 - 2;
    if (uVar6 == 0) {
      dVar4 = (double)(*(float *)&gen_args[1]) * *(double *)&REFG(undefined, 0x1094878);
      uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                       (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                       (float10)REFG(double, 0x1088108))));
      F_00559e70(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
      iVar1 = *(int *)(uVar7 + 0x40);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar8 = (float10)(*(float *)&gen_args[2]);
      fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG);
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                       (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
      uVar7 = F_00559f00(*(undefined4 *)(uVar7 + 0x48) GEN_EDX_ARG,(*(float *)&gen_args[1]));
      return uVar7;
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonImage::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078b480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Image",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImage::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078b490(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b490u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00568210(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,*(float *)(param_1 + 0x1a0),
               *(float *)(param_1 + 0x1a4));
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10c5fd0);
  F_00568230(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(float)((float10)param_2 / fVar1) * (float10)(*(float *)(gen_frame + 0x8))))));
  F_00568250(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(float)((float10)param_2 / fVar1) * (float10)(*(float *)(gen_frame + 0x4))))));
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonImage::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078b5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_FWD);
  }
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  this[0x188] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078b5f0 */
GEN_FRAME uint F_0078b5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184) GEN_EDX_ARG,2);
  iVar1 = *(int *)(param_3 + 0x18c);
  if (-1 < iVar1) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x18)) = iVar1;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078b670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    F_0056c5f0(this + 0x1a8 GEN_EDX_FWD);
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078b690(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b690u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(float *)(gen_frame + 0x18)) = param_2;
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = param_3;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10968c8);
  if (fVar9 < (float10)param_2 / (float10)param_3) {
    (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)param_3);
  }
  else {
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = (float)((float10)param_2 / fVar9);
  }
  uVar3 = *(ushort *)(param_1 + 0x194);
  fVar9 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)uVar3);
  uVar4 = *(ushort *)(param_1 + 0x196);
  pfVar7 = (float *)&(*(float *)(gen_frame + 0x18));
  fVar2 = (float)(fVar9 / (float10)uVar3);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar9 = (float10)(*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)uVar4);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)uVar4);
  fVar10 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = (float)(fVar9 / fVar10);
  if (!((float10)fVar2 < (float10)(float)(fVar9 / fVar10))) {
    pfVar7 = (float *)((int)&(*(longlong *)(gen_frame + 0x10)) + 4);
  }
  fVar2 = *pfVar7;
  uVar5 = *(undefined4 *)(param_1 + 0x180);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = fVar2;
  (*(longlong *)(gen_frame + 0x10)) = CONCAT44((uint)gen_fl2bits(fVar2),(int)(*(longlong *)(gen_frame + 0x10)));
  F_00568210(uVar5 GEN_EDX_FWD,fVar2,fVar2);
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0))));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x196));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(gen_x87_cw | 0xc00);
  lVar1 = (longlong)TRUNC((float10)*(ushort *)(param_1 + 0x196) * (float10)(*(float *)(gen_frame + 0xc)));
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)lVar1;
  iVar6 = (int)(*(longlong *)(gen_frame + 0x10));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(gen_x87_cw | 0xc00);
  (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)param_3);
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)(longlong)TRUNC((float10)param_3);
  fVar9 = (float10)((int)(*(longlong *)(gen_frame + 0x10)) - iVar6);
  if ((int)(*(longlong *)(gen_frame + 0x10)) - iVar6 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(gen_x87_cw | 0xc00);
  lVar1 = (longlong)TRUNC((float10)*(ushort *)(param_1 + 0x194) * (float10)(*(float *)(gen_frame + 0x8)));
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)lVar1;
  iVar6 = (int)(*(longlong *)(gen_frame + 0x10));
  (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)param_2);
  lVar1 = (*(longlong *)(gen_frame + 0x10));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)(longlong)TRUNC((float10)param_2);
  fVar10 = (float10)((int)(*(longlong *)(gen_frame + 0x10)) - iVar6);
  if ((int)(*(longlong *)(gen_frame + 0x10)) - iVar6 < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  uVar8 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,(float)(fVar10 * (float10)REFG(double, 0x1088108)),
                       (float)(fVar9 * (float10)REFG(double, 0x1088108)));
  return uVar8;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078b830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x188))) {
    case 1: ;
    case 3: ;
    case 4: ;
    case 5: ;
      return 0;
    case 2: ;
      uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
      uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
      return uVar1 <= uVar2;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078b890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG);
  }
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078b8e0 */
GEN_FRAME uint F_0078b8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  F_0056a7a0(param_2 + 4 GEN_EDX_ARG);
  F_0056a7e0(param_2 + 4 GEN_EDX_ARG);
  *(int *)((int)param_3 + 0x18c) = *(int *)((int)param_3 + 0x18c) - 1;
  uVar1 = *(uint *)((int)param_3 + 0x18c);
  if ((int)uVar1 < 1) {
    F_00559c60(*(undefined * PTR32 *)((int)param_3 + 0x184) GEN_EDX_ARG,2);
    uVar1 = *(uint *)((int)param_3 + 400);
    if (-1 < (int)uVar1) {
      uVar1 = F_0078a8d0(param_3 GEN_EDX_ARG,uVar1);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078b930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78b930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if ((short)param_2 == 0x3d) {
    *(undefined4 *)(in_ecx + 0x188) = 0;
  }
  return;
}

/* ref: Client::UI2::AddonImageLocationTitle::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078b950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78b950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ImageLocationTitle",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImageLocationTitle::vf44 */
GEN_NOFRAME ushort GEN_THISCALL F_0078b960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,5);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
  *(ushort *)(this + 0x194) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
  *(ushort *)(this + 0x196) = uVar1;
  *(undefined4 *)(this + 0x1ea) = 0x670068;
  *(undefined2 *)(this + 0x1e8) = 0x65;
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleShort::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ba20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ImageLocationTitleShort",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleShort::vf44 */
GEN_NOFRAME ushort GEN_THISCALL F_0078ba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e360(this GEN_EDX_ARG,5);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
  *(ushort *)(this + 0x194) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x180) GEN_EDX_ARG);
  *(ushort *)(this + 0x196) = uVar1;
  *(undefined4 *)(this + 0x1ea) = 0x670068;
  *(undefined2 *)(this + 0x1e8) = 0x65;
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078bb10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78bb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LevelUp",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078bb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078bb90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78bb90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar1 = (double)param_2 * REFG(double, 0x1088108);
  uVar2 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar5 = (float10)REFG(double, 0x1088108);
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar4 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar1 -
                              (float10)(float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0x8))) * fVar5))),
                       ((float)GEN_TOF(((float10)(double)(fVar5 * (float10)param_3) -
                              (float10)(float)((float10)uVar3 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar4;
}

/* ref: Client::UI2::AddonLevelUp::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078bc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78bc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonLevelUp::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078bc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_FWD);
  }
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078bcb0 */
GEN_FRAME uint F_0078bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184) GEN_EDX_ARG,2);
  iVar1 = *(int *)(param_3 + 0x188);
  if (-1 < iVar1) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x18)) = iVar1;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonWideText::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078bd40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78bd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Text1",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonWideText::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078bd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonWideText::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078bdd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78bdd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109ca50);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonWideText::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078be80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78be80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  this[0x19c] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078beb0 */
GEN_FRAME uint GEN_THISCALL F_0078beb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78beb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined4 in_ecx;
  ushort uVar1;
  undefined2 extraout_var = 0;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x188);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  F_00577d20(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x4)),0,0,REFG(undefined4, 0x108cc50),0);
  in_ecx = *(undefined4 *)((int)this + 0x180);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 0x28;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 0x10;
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_00559e70(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(int)((uint)uVar1 - ((*(uint *)(gen_frame + 0x8)) & 0xffff)) * (float10)REFG(double, 0x1088108)))));
  uVar1 = F_0055a030(*(undefined4 *)((int)this + 0x180) GEN_EDX_ARG);
  F_00559f00(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,
               ((float)GEN_TOF(((float10)(int)((uint)uVar1 - ((*(uint *)(gen_frame + 0x4)) & 0xffff)) * (float10)REFG(double, 0x1088108)))));
  F_0055a060(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)));
  uVar1 = F_0055a080(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
  return CONCAT22(extraout_var,uVar1);
}

/* ref: FUN_0078bf80 */
GEN_FRAME uint GEN_THISCALL F_0078bf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  undefined4 uVar6;
  uint * this_00;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = F_0055dcb0();
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = 10000;
  uVar4 = F_0055ab00(*(undefined4 *)((int)this + 0x188) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  bVar1 = F_0055ab50(*(undefined4 *)((int)this + 0x188) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
  pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                             (*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
  if ((*pbVar5 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar5 + 4);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,uVar6);
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0078beb0(this GEN_EDX_ARG);
  fVar8 = (float10)*(int *)(uVar3 + 0x238);
  if (*(int *)(uVar3 + 0x238) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar9 = (float10)*(int *)(uVar3 + 0x234);
  if (*(int *)(uVar3 + 0x234) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))
            (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar9),(undefined4)gen_fl2bits((float)fVar8));
  if (param_2 == 1) {
    uVar6 = 0x68;
  }
  else {
    uVar6 = 0x67;
  }
  uVar2 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar6);
  F_00559c60(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,uVar2 + 1);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0078c0d0 */
GEN_NOFRAME byte GEN_THISCALL F_0078c0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_FWD,0x66);
  uVar2 = F_00559cd0(*(undefined4 *)((int)this + 0x184) GEN_EDX_ARG);
  return uVar2 == uVar1;
}

/* ref: FUN_0078c100 */
GEN_NOFRAME uint GEN_THISCALL F_0078c100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c5fdc));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextChain::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078c190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextChain",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextChain::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextChain::vf63 */
GEN_FRAME unsigned int GEN_THISCALL F_0078c220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    F_0055dcb0();
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
    }
    F_0057eb30(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar1,0,0,0,0);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,2);
  }
  return;
}

/* ref: Client::UI2::AddonTextChain::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078c2c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c2c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextChain::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078c370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextChain::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078c3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078c3d0 */
GEN_NOFRAME uint GEN_THISCALL F_0078c3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c60ec));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextError::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078c460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextError",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextError::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078c470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x188) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextError::vf63 */
GEN_FRAME uint GEN_THISCALL F_0078c4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (3 < param_1) {
    uVar5 = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    uVar2 = F_0055dcb0();
    bVar1 = *(byte *)(param_2 + 0x18);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if ((bVar1 & 0xf) != 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = 10000;
    uVar3 = F_0055ab00(*(undefined4 *)(this + 0x188) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(*(undefined4 *)(this + 0x188) GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar7 = (float10)*(int *)(uVar2 + 0x238);
    if (*(int *)(uVar2 + 0x238) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar8 = (float10)*(int *)(uVar2 + 0x234);
    if (*(int *)(uVar2 + 0x234) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))
              (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar8),(undefined4)gen_fl2bits((float)fVar7));
    F_00559c60(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,2);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonTextError::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078c630(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c630u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = REFG(float, 0x1088068);
  (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = REFG(float, 0x10c61f8);
  if (((((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_1 + 0x80) & 4) != 0)) &&
      (*(char *)(param_1 + 0x3c) == '\x02')) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != -0xc)) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x10) / (float10)*(double *)&REFG(undefined, 0x1088118))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x14) / (float10)*(double *)&REFG(undefined, 0x1088118))))
    ;
  }
  (*(double *)(gen_frame + 0x14)) = (double)(*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) * (double)param_2;
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0x14)) -
                 (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = fVar1;
  (*(double *)(gen_frame + 0xc)) = (double)(*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) * (double)param_3;
  uVar3 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x14)) + 0));
  uVar4 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar5 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,(*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)),
                       ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0xc)) -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar5;
}

/* ref: Client::UI2::AddonTextError::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078c720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextError::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078c760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078c780 */
GEN_NOFRAME uint GEN_THISCALL F_0078c780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c6204));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextClassChange::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078c810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78c810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextClassChange",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextClassChange::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078c820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,7);
  *(uint *)(this + 400) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextClassChange::vf63 */
GEN_FRAME unsigned int GEN_THISCALL F_0078c8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar1);
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar1);
    if (param_1 < 0xb) {
      F_0055a300(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,0);
    }
    else if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,0);
    }
    else {
      F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x3c));
    }
    F_0055dcb0();
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,2);
  }
  return;
}

/* ref: Client::UI2::AddonTextClassChange::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078c9a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c9a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6310);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextClassChange::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078ca50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ca50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextClassChange::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078ca90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ca90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf63 */
GEN_FRAME unsigned int GEN_THISCALL F_0078cad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (5 < param_1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x4c);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,uVar4,uVar2,uVar1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x110))(this GEN_EDX_ARG,uVar3 & 0xff);
  }
  return;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078cb50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78cb50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078cc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078cc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184) GEN_EDX_FWD);
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar1);
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  }
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: FUN_0078cc90 */
GEN_FRAME uint F_0078cc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184) GEN_EDX_ARG,2);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ccb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ccb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextMonsterNote0",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078ccc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ccc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,6);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,7);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,8);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar1);
  return;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078cd60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextMonsterNote1",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf68 */
GEN_FRAME unsigned int GEN_THISCALL F_0078cd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78cd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_FWD,param_1 + 0x65);
  }
  return;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078cd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextMonsterNote2",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf68 */
GEN_FRAME unsigned int GEN_THISCALL F_0078cda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_FWD,param_1 + 0x65);
  }
  return;
}

/* ref: FUN_0078cdc0 */
GEN_NOFRAME uint GEN_THISCALL F_0078cdc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c6324));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ce50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ce50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextTargetCircle",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf63 */
GEN_FRAME unsigned int GEN_THISCALL F_0078ce60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,0);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_0058bba0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,uVar1);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,2);
  }
  return;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078ceb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78ceb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf65 */
GEN_NOFRAME byte GEN_THISCALL F_0078cf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cf60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184) GEN_EDX_FWD);
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184) GEN_EDX_ARG);
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078cfa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078cfd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78cfd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"TextAchievementUnlocked",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078cfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this GEN_EDX_FWD,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,5);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,7);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184) GEN_EDX_ARG);
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar1);
  return;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf64 */
GEN_FRAME uint GEN_THISCALL F_0078d080(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78d080u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG);
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180) GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0078d130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184) GEN_EDX_FWD);
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar1);
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    uVar1 = F_0058f5b0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  }
  this[0x1b0] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078d180 */
GEN_FRAME uint F_0078d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0x36;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar1 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184) GEN_EDX_ARG,2);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078d230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_FWD);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078d250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"MainCommand",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf52 */
GEN_NOFRAME byte GEN_THISCALL F_0078d260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonMainCommand::vf53 */
GEN_FRAME unsigned int GEN_THISCALL F_0078d270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (((char)param_2 == '\0') && (*(char *)(in_ecx + 0xff0) != '\0')) {
    *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) | 1;
    *(undefined1 *)(in_ecx + 0xff0) = 0;
  }
  return;
}

/* ref: FUN_0078d2a0 */
GEN_FRAME uint GEN_STDCALL F_0078d2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x78d2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x37,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078d2f0 */
GEN_FRAME uint GEN_THISCALL F_0078d2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,param_1);
  uVar1 = F_00559c20(uVar1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078d310 */
GEN_FRAME uint GEN_STDCALL F_0078d310(unsigned int gen_a0)
{
  GEN_ENTER(0x78d310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return 0xffffffff;
}

/* ref: Client::UI2::AddonMainCommand::vf62 */
GEN_NOFRAME uint GEN_THISCALL F_0078d340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x4000002,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf63 */
GEN_NOFRAME uint GEN_THISCALL F_0078d360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,0x4000002,0);
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf65 */
GEN_NOFRAME uint GEN_THISCALL F_0078d390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,this,0);
  return uVar1;
}

/* ref: FUN_0078d3b0 */
GEN_NOFRAME uint GEN_THISCALL F_0078d3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6654));
  *(undefined4 *)((int)this + 0x180) = 0xff;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonParameter::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078d420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonParameter::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078d450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"parameter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonParameter::vf40 */
GEN_FRAME uint GEN_THISCALL F_0078d460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonParameter::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078d470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78d470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_0078d480 */
GEN_FRAME uint GEN_THISCALL F_0078d480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_FWD,0x65);
  }
  else {
    if (param_1 == 2) {
      uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_ARG,0x66);
      return uVar1;
    }
    uVar1 = param_1 - 4;
    if (uVar1 == 0) {
      uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90) GEN_EDX_ARG,0x67);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0078d4d0 */
GEN_FRAME uint GEN_THISCALL F_0078d4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x78d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_005a28a0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x188) GEN_EDX_FWD,
               *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *(int *)(&REFG(undefined, 0x10c1014) + param_1 * 0x10) * 4))));
  uVar1 = F_005a04e0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x188) GEN_EDX_ARG,
                       *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *(int *)(&REFG(undefined, 0x10c1010) + param_1 * 0x10) * 4))),
                       param_3);
  return uVar1;
}

/* ref: FUN_0078d530 */
GEN_NOFRAME uint GEN_THISCALL F_0078d530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6754));
  *(undefined4 *)((int)this + 0x180) = 0xff;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_0056c400((undefined *)((int)this + 0x198) GEN_EDX_ARG,0,0);
  in_ecx = (int)this + 0x1d8;
  iVar1 = 1;
  do {
    F_0058d480(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x30;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xfb) =
       *(byte *)((int)this + 0xfb) & 0x37 | *(byte *)((int)this + 0xf9) & 200 | 0x48;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonExp::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078d620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonExp::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078d650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,(*(undefined * PTR32 (*)[1])REFP(0x10c1064)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonExp::vf40 */
GEN_FRAME uint GEN_THISCALL F_0078d660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonExp::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078d670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78d670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x3a) {
    F_005609b0(this + 0x198 GEN_EDX_FWD);
    F_00588be0(this + 0x198 GEN_EDX_ARG,0x3a,param_2,this);
    F_0055a300(*(undefined * PTR32 *)(this + 0x1c0) GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_0078d6c0 */
GEN_FRAME uint GEN_THISCALL F_0078d6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if (*(short *)((int)this + 6) != (short)param_1) {
    uVar3 = 9;
    *(short *)((int)this + 6) = (short)param_1;
    pvVar1 = (undefined *)F_00559c20(*(undefined4 *)this GEN_EDX_FWD);
    pvVar1 = (undefined *)F_00561490(pvVar1 GEN_EDX_ARG,uVar3);
    uVar2 = F_0059d640(pvVar1 GEN_EDX_ARG,(uint)*(ushort *)((int)this + 6));
  }
  return uVar2;
}

/* ref: FUN_0078d700 */
GEN_NOFRAME uint GEN_THISCALL F_0078d700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  F_005903f0(this GEN_EDX_FWD);
  uVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6854));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 8;
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406c00(0x20,0,uVar1,uVar3);
  *(undefined4 * PTR32 *)((int)this + 0x180) = puVar2;
  *puVar2 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 8))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x1c))) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 2;
  F_0055e2a0(this GEN_EDX_ARG,0x14000002,1);
  return (uint)this;
}

/* ref: FUN_0078d7c0 */
GEN_NOFRAME uint GEN_THISCALL F_0078d7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6854));
  if (*(int *)((int)this + 0x180) != 0) {
    F_00406b30(*(int *)((int)this + 0x180));
    *(undefined4 *)((int)this + 0x180) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonEnemyList::vf41 */
GEN_FRAME byte GEN_THISCALL F_0078d800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78d800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 7;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"EnemyList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonEnemyList::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_0078d850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78d850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)(this + 0x184) != 0) {
    F_005a89b0(this GEN_EDX_FWD,param_1,1);
  }
  return;
}

/* ref: FUN_0078d870 */
GEN_FRAME uint GEN_THISCALL F_0078d870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_8;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  uVar2 = *(uint *)(uVar2 + 0x50);
  iVar6 = 0;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  uVar3 = uVar2;
  if (0 < *(int *)((int)this + 0x184)) {
    local_8 = 0x1c;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + iVar6 * 4)));
      uVar3 = F_0055a2d0(*puVar1 GEN_EDX_ARG);
      if ((char)uVar3 != '\0') {
        uVar7 = 9;
        pvVar4 = (undefined *)F_00559c20(*puVar1 GEN_EDX_ARG);
        F_00561490(pvVar4 GEN_EDX_ARG,uVar7);
        uVar3 = *((uint *)GEN_TOP((local_8 + *(int *)(uVar2 + 0x20))));
        if ((uVar3 == param_1) && (uVar3 != 0xe0000000)) {
          if (*(short *)((int)puVar1 + 6) != 0x66) {
            uVar7 = 9;
            *(undefined2 *)((int)puVar1 + 6) = 0x66;
            pvVar4 = (undefined *)F_00559c20(*puVar1 GEN_EDX_ARG);
            pvVar4 = (undefined *)F_00561490(pvVar4 GEN_EDX_ARG,uVar7);
            uVar3 = F_0059d640(pvVar4 GEN_EDX_ARG,(uint)*(ushort *)((int)puVar1 + 6));
          }
          *(int *)((int)this + 0x18c) = iVar6;
        }
        else if (((uVar3 == param_2) || (iVar6 == *(int *)((int)this + 0x188))) &&
                (uVar3 != 0xe0000000)) {
          if (*(short *)((int)puVar1 + 6) != 0x65) {
            uVar5 = 0x65;
LAB_0078d952: ;
            uVar7 = 9;
            *(undefined2 *)((int)puVar1 + 6) = uVar5;
            pvVar4 = (undefined *)F_00559c20(*puVar1 GEN_EDX_ARG);
            pvVar4 = (undefined *)F_00561490(pvVar4 GEN_EDX_ARG,uVar7);
            uVar3 = F_0059d640(pvVar4 GEN_EDX_ARG,(uint)*(ushort *)((int)puVar1 + 6));
          }
        }
        else if (*(short *)((int)puVar1 + 6) != 0x11) {
          uVar5 = 0x11;
          goto LAB_0078d952;
        }
        local_8 = local_8 + 0x10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0x184));
  }
  return uVar3;
}

/* ref: FUN_0078d990 */
GEN_FRAME uint GEN_THISCALL F_0078d990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  cVar1 = *(char *)(param_2 + 6);
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 9;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  F_005a9110(this GEN_EDX_FWD,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0078da20 */
GEN_FRAME uint GEN_THISCALL F_0078da20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78da20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(int *)(gen_frame + 0x18)) = param_1 + 8;
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  *(int *)((int)this + 0x188) = param_1;
  if ((*(int *)((int)this + 0x18c) != param_1) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + param_1 * 4))),
     *(short *)((int)puVar1 + 6) != 0x65)) {
    *(undefined2 *)((int)puVar1 + 6) = 0x65;
    uVar4 = 9;
    pvVar3 = (undefined *)F_00559c20(*puVar1 GEN_EDX_ARG);
    pvVar3 = (undefined *)F_00561490(pvVar3 GEN_EDX_ARG,uVar4);
    F_0059d640(pvVar3 GEN_EDX_ARG,(uint)*(ushort *)((int)puVar1 + 6));
  }
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0078dab0 */
GEN_FRAME uint GEN_THISCALL F_0078dab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78dab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (((*(int *)((int)this + 0x18c) < 0) ||
      (*(int *)((int)this + 0x18c) != *(int *)((int)this + 0x188))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + *(int *)((int)this + 0x188) * 4))),
     *(short *)((int)puVar1 + 6) != 0x11)) {
    uVar4 = 9;
    *(undefined2 *)((int)puVar1 + 6) = 0x11;
    pvVar2 = (undefined *)F_00559c20(*puVar1 GEN_EDX_FWD);
    pvVar2 = (undefined *)F_00561490(pvVar2 GEN_EDX_ARG,uVar4);
    F_0059d640(pvVar2 GEN_EDX_ARG,(uint)*(ushort *)((int)puVar1 + 6));
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  uVar3 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonStatus::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078db60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78db60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,3,0);
  F_005a92d0(this GEN_EDX_ARG,0,2,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonStatus::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078db90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78db90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Status",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonStatus::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078dba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78dba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (((short)param_1 == 0x37) && (*param_4 == '\x01')) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_0078dc00 */
GEN_NOFRAME uint GEN_THISCALL F_0078dc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78dc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6954));
  *(undefined4 *)((int)this + 400) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonBagStatus::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078dc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78dc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"BagStatus",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBagStatus::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078dc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78dc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x2c);
  if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      (*(int *)(gen_frame + 0x28)) = 2;
      uVar1 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x37,1,&(*(undefined4 *)(gen_frame + 0x24)));
      F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_00557670(param_3 GEN_EDX_ARG,0);
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    }
    else if (param_2 < 5) {
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      (*(undefined4 *)(gen_frame + 0x20)) = 3;
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      (*(int *)(gen_frame + 0x28)) = param_2 - 1;
      uVar1 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x22,2,&(*(undefined4 *)(gen_frame + 0x1c)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      F_00557670(param_3 GEN_EDX_ARG,0);
      iVar2 = 1;
      do {
        this_00 = this_00 - 8;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar2 = iVar2 - 1;
      } while (-1 < iVar2);
      return;
    }
  }
  return;
}

/* ref: FUN_0078dd60 */
GEN_NOFRAME uint GEN_THISCALL F_0078dd60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78dd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6a54));
  *(undefined1 *)((int)this + 0x188) = 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  return (uint)this;
}

/* ref: Client::UI2::AddonMoney::vf37 */
GEN_FRAME uint GEN_THISCALL F_0078dde0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78dde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  F_005b0510((undefined *)this GEN_EDX_ARG);
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonMoney::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078de50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78de50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Money",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMoney::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0078de60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x13;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0078deb0 */
GEN_FRAME unsigned int GEN_THISCALL F_0078deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78deb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    F_00568630(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: Client::UI2::AddonNotification::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078df00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78df00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  
  F_005a92d0(this GEN_EDX_FWD,1,9,0);
  F_005a92d0(this GEN_EDX_ARG,0,8,0);
  pAVar3 = this + 0x198;
  iVar2 = 8;
  do {
    if (*(int *)pAVar3 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x10))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG,1);
    }
    F_0056c5f0(pAVar3 + 4 GEN_EDX_ARG);
    pAVar3 = pAVar3 + 0x40;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078df50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78df50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Notification",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNotification::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0078df60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78df60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  F_005a91d0(this GEN_EDX_FWD,1,9);
  uVar1 = F_005a91d0(this GEN_EDX_ARG,0,8);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf17 */
GEN_FRAME uint GEN_THISCALL F_0078dfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78dfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0058cad0((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078dfc0 */
GEN_FRAME byte GEN_THISCALL F_0078dfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x78dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  code * pcVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int * PTR32 *)(param_1 * 0x40 + 0x198 + (int)this);
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_FWD);
  sVar3 = (short)uVar5;
  (*(int *)(gen_frame + 0xc)) = -1;
  (*(int *)(gen_frame + 0x14)) = -1;
  (*(int *)(gen_frame + 0x4)) = -1;
  (*(int *)(gen_frame + 0x1c)) = -1;
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)((int)this + 0x198);
  (*(short *)(gen_frame + 0x10)) = sVar3;
  (*(short *)(gen_frame + 0x18)) = sVar3;
  (*(short *)(gen_frame + 0x8)) = sVar3;
  (*(short *)(gen_frame + 0x20)) = sVar3;
  iVar7 = 0;
  do {
    if (((*(*(int * PTR32 *)(gen_frame + 0x28)) != 0) && ((*(int * PTR32 *)(gen_frame + 0x28))[-1] != 0)) && (iVar7 != param_1)) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x24))((int *)*(*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      sVar4 = (short)uVar5;
      if (sVar4 < (*(short *)(gen_frame + 0x10))) {
        (*(int *)(gen_frame + 0xc)) = iVar7;
        (*(short *)(gen_frame + 0x10)) = sVar4;
      }
      if ((sVar4 < sVar3) && (((*(int *)(gen_frame + 0x14)) == -1 || ((*(short *)(gen_frame + 0x18)) < sVar4)))) {
        (*(int *)(gen_frame + 0x14)) = iVar7;
        (*(short *)(gen_frame + 0x18)) = sVar4;
      }
      if ((*(short *)(gen_frame + 0x8)) < sVar4) {
        (*(int *)(gen_frame + 0x4)) = iVar7;
        (*(short *)(gen_frame + 0x8)) = sVar4;
      }
      if ((sVar3 < sVar4) && (((*(int *)(gen_frame + 0x1c)) == -1 || (sVar4 < (*(short *)(gen_frame + 0x20)))))) {
        (*(int *)(gen_frame + 0x1c)) = iVar7;
        (*(short *)(gen_frame + 0x20)) = sVar4;
      }
    }
    iVar7 = iVar7 + 1;
    (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x10;
  } while (iVar7 < 8);
  iVar7 = (*(int *)(gen_frame + 0x4));
  iVar6 = (*(int *)(gen_frame + 0x14));
  if ((((param_2 == 9) || (iVar7 = (*(int *)(gen_frame + 0xc)), iVar6 = (*(int *)(gen_frame + 0x1c)), param_2 == 10)) &&
      ((iVar6 != -1 || (((char)param_3 == '\0' && (iVar6 = iVar7, iVar7 != -1)))))) &&
     (piVar1 = *(int * PTR32 *)(iVar6 * 0x40 + 0x198 + (int)this), piVar1 != (int *)0x0)) {
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x8c);
    *(byte *)(piVar1 + 0x3e) = *(byte *)(piVar1 + 0x3e) & 0x7f;
    (*pcVar2)(piVar1);
    if (piVar1 != (*(int * PTR32 *)(gen_frame + 0x24))) {
      uVar5 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 8))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),0);
      F_005a2670(&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonNotification::vf5 */
GEN_FRAME uint GEN_THISCALL F_0078e120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78e120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0x198;
  iVar3 = 8;
  do {
    if ((*(int *)pAVar2 != 0) && (*(int *)(pAVar2 - 4) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0x14))))(*(int * PTR32 *)pAVar2 GEN_EDX_FWD,param_1);
    }
    pAVar2 = pAVar2 + 0x40;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf6 */
GEN_FRAME uint GEN_THISCALL F_0078e170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pAVar2;
  int local_8;
  
  pAVar2 = this + 0x198;
  local_8 = 8;
  do {
    if ((*(int *)pAVar2 != 0) && (*(int *)(pAVar2 - 4) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0x18))))(*(int * PTR32 *)pAVar2 GEN_EDX_FWD,param_1,param_2);
    }
    pAVar2 = pAVar2 + 0x40;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_0078e1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pAVar2;
  
  iVar1 = 0;
  pAVar2 = this + 0x194;
  while ((*(int *)(pAVar2 + 4) == 0 || (*(int *)pAVar2 == 0))) {
    iVar1 = iVar1 + 1;
    pAVar2 = pAVar2 + 0x40;
    if (7 < iVar1) {
      return 0;
    }
  }
  return *(uint *)(this + iVar1 * 0x40 + 0x198);
}

/* ref: FUN_0078e200 */
GEN_NOFRAME uint GEN_THISCALL F_0078e200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(in_ecx + 0x198) != 0) && (*(int *)(in_ecx + 0x194) != 0)) {
    uVar1 = 1;
  }
  if ((*(int *)(in_ecx + 0x1d8) != 0) && (*(int *)(in_ecx + 0x1d4) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 0x218) != 0) && (*(int *)(in_ecx + 0x214) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 600) != 0) && (*(int *)(in_ecx + 0x254) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 0x298) != 0) && (*(int *)(in_ecx + 0x294) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 0x2d8) != 0) && (*(int *)(in_ecx + 0x2d4) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 0x318) != 0) && (*(int *)(in_ecx + 0x314) != 0)) {
    uVar1 = uVar1 + 1;
  }
  if ((*(int *)(in_ecx + 0x358) != 0) && (*(int *)(in_ecx + 0x354) != 0)) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_0078e2c0 */
GEN_NOFRAME uint GEN_THISCALL F_0078e2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x42;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 6;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 1;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6c54));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x10f) = 0xd;
  return (uint)this;
}

/* ref: Client::UI2::AddonNotificationItem::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078e320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"NotificationItem",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNotificationItem::vf32 */
GEN_NOFRAME byte F_0078e330(void)
{
  GEN_ENTER(0x78e330u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::AddonNotificationItem::vf44 */
GEN_FRAME unsigned int GEN_THISCALL F_0078e340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78e340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined * puVar6;
  
  if (1 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 4);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x180) = uVar1;
    uVar2 = F_0055dcb0();
    uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,*(undefined4 *)(this + 0x180));
    puVar6 = (&REFG(undefined * PTR32, 0x10c6d4c))[(int)(iVar5)];
    uVar1 = 7;
    uVar3 = F_0055e2f0(this GEN_EDX_ARG,2);
    pvVar4 = (undefined *)F_00559c20(uVar3 GEN_EDX_ARG);
    pvVar4 = (undefined *)F_00561490(pvVar4 GEN_EDX_ARG,uVar1);
    F_0059d670(pvVar4 GEN_EDX_ARG,puVar6);
    puVar6 = (&REFG(undefined * PTR32, 0x10c6d4c))[(int)(iVar5)];
    uVar1 = 7;
    uVar3 = F_0055e2f0(this GEN_EDX_ARG,3);
    pvVar4 = (undefined *)F_00559c20(uVar3 GEN_EDX_ARG);
    pvVar4 = (undefined *)F_00561490(pvVar4 GEN_EDX_ARG,uVar1);
    F_0059d670(pvVar4 GEN_EDX_ARG,puVar6);
    pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,4);
    if (pvVar4 != (undefined *)0x0) {
      F_0055a3c0(pvVar4 GEN_EDX_ARG,1);
      F_00568380(pvVar4 GEN_EDX_ARG,9,iVar5,uVar2,0,0);
      F_00568380(pvVar4 GEN_EDX_ARG,0xc,iVar5,uVar2,0,0);
    }
  }
  return;
}

/* ref: Client::UI2::AddonNotificationItem::vf45 */
GEN_FRAME uint GEN_THISCALL F_0078e420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78e420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,4);
  *(uint *)(this + 0xa4) = uVar1;
  if (1 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 4);
    }
    uVar1 = F_0055dcb0();
    piVar2 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,*(undefined4 *)(this + 0x180));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x88))(piVar2 GEN_EDX_ARG,this,iVar3 + 1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonNotificationItem::vf53 */
GEN_FRAME unsigned int GEN_THISCALL F_0078e480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78e480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_0055dcb0();
    piVar2 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,*(undefined4 *)(this + 0x180));
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x88))(piVar2 GEN_EDX_ARG,this,0);
    }
  }
  return;
}

/* ref: FUN_0078e4c0 */
GEN_NOFRAME uint GEN_THISCALL F_0078e4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6d74));
  *(undefined4 *)((int)this + 0x198) = 0;
  F_00c49908((int)this + 0x19c,0x100,"");
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  F_0055e2a0(this GEN_EDX_ARG,0x4000020,1);
  F_0055e2a0(this GEN_EDX_ARG,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonDTR::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_0078e530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonDTR::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078e550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,1);
  F_005a92d0(this GEN_EDX_ARG,1,9,0);
  F_005a92d0(this GEN_EDX_ARG,0,8,0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonDTR::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078e5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,(*(undefined * PTR32 (*)[1])REFP(0x10c1278)),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonDTR::vf2 */
GEN_FRAME uint GEN_THISCALL F_0078e5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78e5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 == 6) {
    F_00560760(((undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD);
    uVar2 = *(undefined4 *)(param_3 + 4);
    AVar1 = this[0x13a];
    ((undefined * PTR32 *)(gen_frame + 0xc))[0] = this + 0x19c;
    uVar3 = F_0055dcb0();
    uVar3 = F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar1,uVar2,((undefined * PTR32 *)(gen_frame + 0xc)),0,0);
  }
  else {
    if (uVar3 == 7) {
      uVar3 = F_0055dcb0();
      uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar3;
    }
    uVar3 = uVar3 - 0x17;
    if (uVar3 == 0) {
      F_00557670(param_3 GEN_EDX_ARG,0);
      iVar4 = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 6;
      (*(char * PTR32 *)(gen_frame + 0x1c)) = "TimeMode";
      (*(undefined4 *)(gen_frame + 0x20)) = 3;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 3;
      (*(undefined4 *)(gen_frame + 0x2c)) = 1;
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(undefined4 *)(gen_frame + 0x34)) = 2;
      uVar3 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x2b,4,&(*(undefined4 *)(gen_frame + 0x18)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      this_00 = &(*(uint *)(gen_frame + 0x38));
      do {
        this_00 = this_00 - 2;
        uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar3;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0078e6e0 */
GEN_NOFRAME uint GEN_THISCALL F_0078e6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6e74));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x1b0) = 0;
  F_0042cc20((undefined *)((int)this + 0x1b4) GEN_EDX_ARG,&REFG(undefined, 0x10be755),REFG(undefined4, 0x108cc50));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 2;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined2 *)((int)this + 0x20c) = 0;
  *(undefined1 *)((int)this + 0x20e) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  return (uint)this;
}

/* ref: FUN_0078e790 */
GEN_NOFRAME uint GEN_THISCALL F_0078e790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6e74));
  F_0042c880((undefined *)((int)this + 0x1b4) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCastBar::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078e7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"CastBar",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCastBar::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078e7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78e7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_0078e800 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078e800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  
  in_ecx = *(int *)((int)this + 400);
  if (in_ecx == 0) {
    return;
  }
  if (*(int *)((int)this + 0x194) == 0) {
    return;
  }
  if (*(int *)((int)this + 0x198) == 0) {
    return;
  }
  if (*(int *)((int)this + 0x208) == 0) {
    uVar1 = F_0055a2d0(in_ecx GEN_EDX_FWD);
    if (((char)uVar1 == '\0') ||
       (uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 0x194) GEN_EDX_ARG), (char)uVar1 == '\0')) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,1);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,1);
    }
    uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 0x198) GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,1);
    }
    return;
  }
  if (*(int *)((int)this + 0x208) != 1) {
    return;
  }
  uVar1 = F_0055a2d0(in_ecx GEN_EDX_ARG);
  if (((char)uVar1 != '\0') ||
     (uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 0x194) GEN_EDX_ARG), (char)uVar1 != '\0')) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,0);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,0);
  }
  uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 0x198) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    return;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,0);
  return;
}

/* ref: FUN_0078e8e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078e8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78e8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x1b1) == '\0') {
    *(undefined1 *)((int)this + 0x1b1) = 1;
    F_0059d640(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_FWD,0x67);
    *(undefined1 *)((int)this + 0x20c) = 0;
    *(undefined1 *)((int)this + 0x20e) = 1;
  }
  return;
}

/* ref: FUN_0078e910 */
GEN_FRAME uint GEN_THISCALL F_0078e910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78e910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (*(int *)((int)this + 400) != 0) {
    uVar1 = F_0055a2d0(*(int *)((int)this + 400) GEN_EDX_FWD);
    if (((char)uVar1 != '\0') && (*(int *)((int)this + 0x194) != 0)) {
      uVar1 = F_0055a2d0(*(int *)((int)this + 0x194) GEN_EDX_ARG);
      if ((char)uVar1 != '\0') {
        iVar4 = param_1 / 100;
        iVar2 = param_1 % 100;
        F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if (iVar4 < 10) {
          F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x10c1290));
          F_0055dcb0();
          uVar1 = F_0056a410(iVar4);
          F_0042e370(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        }
        else {
          F_0055dcb0();
          uVar1 = F_0056a410(iVar4);
        }
        F_00584110(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,uVar1);
        if (iVar2 < 10) {
          F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x10c1294));
          F_0055dcb0();
          uVar1 = F_0056a410(iVar2);
          F_0042e370(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        }
        else {
          F_0055dcb0();
          uVar1 = F_0056a410(iVar2);
        }
        F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,uVar1);
        uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        uVar1 = (uint)uVar3;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078ea40 */
GEN_FRAME uint GEN_THISCALL F_0078ea40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ea40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  undefined * this_00;
  ushort uVar3;
  uint uVar4;
  undefined2 extraout_var = 0;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(gen_x87_cw | 0xc00);
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)(longlong)TRUNC((double)fVar1 * *(double *)&REFG(undefined, 0x1088118)));
  *(int *)((int)this + 0x19c) = *(int *)((int)this + 0x19c) + (int)gen_fl2bits((*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x8));
  iVar2 = *(int *)((int)this + 0x1a0);
  if (iVar2 < *(int *)((int)this + 0x19c)) {
    *(int *)((int)this + 0x19c) = iVar2;
  }
  uVar4 = F_0078e910(this GEN_EDX_FWD,iVar2 - *(int *)((int)this + 0x19c));
  this_00 = *(undefined * PTR32 *)((int)this + 0x188);
  if (this_00 != (undefined *)0x0) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a8) * (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x14))) +
                   (float10)*(float *)((int)this + 0x1a4))));
    (*(float *)(gen_frame + 0x14)) = fVar1;
    *(float *)((int)this + 0x1a4) = fVar1;
    if (*(double *)&REFG(undefined, 0x1088118) < (double)fVar1) {
      *(undefined4 *)((int)this + 0x1a4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x1a4), REFG(float, 0x10916ec));
    }
    F_0055a000(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x10)));
    uVar3 = *(ushort *)((int)this + 0x210);
    (*(uint *)(gen_frame + 0x18)) = (uint)uVar3;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22(gen_x87_cw,uVar3);
    uVar3 = F_0055a040(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,
                         (int)TRUNC((float10)uVar3 *
                                    ((float10)*(float *)((int)this + 0x1a4) /
                                    (float10)*(double *)&REFG(undefined, 0x1088118))) & 0xffff,(*(undefined4 *)(gen_frame + 0x10)));
    uVar4 = CONCAT22(extraout_var,uVar3);
  }
  return uVar4;
}

/* ref: FUN_0078eb50 */
GEN_NOFRAME uint GEN_THISCALL F_0078eb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78eb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6f74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b50) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b44) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  F_0055c5b0((int)this + 0x1b3c GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonNaviMap::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078eb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78eb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x18,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x15,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x34,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x30,0);
  F_0056a8a0(this + 0x1b3c GEN_EDX_ARG);
  F_00c48350(this + 0xe68,0,0xcd4);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonNaviMap::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078ebf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ebf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"NaviMap",1,6);
  return bVar1;
}

/* ref: FUN_0078ec00 */
GEN_FRAME uint GEN_THISCALL F_0078ec00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ec00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = param_1;
  if (iVar2 != 0) {
    uVar3 = CONCAT22((short)(param_1 >> 0x10),(short)param_2);
    if ((short)param_2 == 6) {
      if (*(int *)((int)this + 0x1c60) != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
        bVar1 = *(byte *)((int)this + 0x13a);
        ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1c60);
        uVar3 = F_0055dcb0();
        uVar3 = F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)bVar1,iVar2,((undefined4 *)(gen_frame + 0x0)),0,1);
        return uVar3;
      }
    }
    else if ((short)param_2 == 7) {
      bVar1 = *(byte *)((int)this + 0x13a);
      uVar3 = F_0055dcb0();
      uVar3 = F_00596cb0((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,(uint)bVar1,0);
    }
  }
  return uVar3;
}

/* ref: FUN_0078ec90 */
GEN_FRAME uint GEN_THISCALL F_0078ec90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ec90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xd;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078ece0 */
GEN_FRAME uint GEN_THISCALL F_0078ece0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ece0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined * this;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  float10 fVar12;
  
  uVar11 = *(uint *)(param_2 * 0x20 + 0x1c8 + param_1);
  iVar1 = param_2 * 0x20 + 0x1c8 + param_1;
  (*(int *)(gen_frame + 0x28)) = *(int *)(iVar1 + 4);
  puVar2 = (undefined4 *)(param_1 + 0xe9c + param_2 * 0xc);
  this = *(undefined * PTR32 *)(param_1 + 0x1358 + param_2 * 0x14);
  iVar3 = param_1 + 0x1358 + param_2 * 0x14;
  this_00 = *(undefined * PTR32 *)(iVar1 + 8);
  if ((((char)param_3 == '\0') && (uVar9 = F_0055a2d0(this_00 GEN_EDX_FWD), (char)uVar9 == '\0')) &&
     (uVar9 = F_0055a2d0(this GEN_EDX_ARG), (char)uVar9 == '\0')) {
    return uVar9;
  }
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),(char)(uVar11 >> 6)) & 0xffffff01;
  uVar8 = (*(uint *)(gen_frame + 0xc)) >> 8;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
  uVar9 = (*(uint *)(gen_frame + 0x10)) >> 8;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffffff00;
  uVar7 = (*(uint *)(gen_frame + 0x18)) >> 8;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffffff00;
  fVar4 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10c7070) /
                 ((float10)*(float *)(param_1 + 0x1c8c) * (float10)*(float *)(param_1 + 0x198)))));
  if ((uVar11 >> 5 & 1) == 0) {
LAB_0078ef02: ;
    F_0055a300((undefined *)*puVar2 GEN_EDX_ARG,(uint)((*(int *)(gen_frame + 0x28)) != 0));
    F_0055a300((undefined *)puVar2[1] GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      F_00591c00((undefined *)*puVar2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),0);
    }
    if ((uVar11 >> 7 & 1) != 0) {
      (*(uint *)(gen_frame + 0xc)) = CONCAT31((int3)uVar8,1);
    }
  }
  else {
    fVar5 = ((float)GEN_TOF(((float10)(int)*(short *)(iVar1 + 0x18) - (float10)*(float *)(param_1 + 0x188))));
    fVar6 = ((float)GEN_TOF(((float10)(int)*(short *)(iVar1 + 0x1a) - (float10)*(float *)(param_1 + 0x18c))));
    if (*(float *)&REFG(undefined, 0x1088114) < *(float *)(iVar1 + 0x10)) {
      fVar12 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) *
                                (float10)*(double *)&REFG(undefined, 0x1094568) + (float10)fVar4)));
      if (!(fVar12 * fVar12 < (float10)fVar5 * (float10)fVar5 + (float10)fVar6 * (float10)fVar6))
      goto LAB_0078ef02;
      (*(int *)(gen_frame + 0x28)) = 0;
    }
    else {
      fVar12 = (float10)fVar4;
      if (!(fVar12 * fVar12 < (float10)fVar5 * (float10)fVar5 + (float10)fVar6 * (float10)fVar6))
      goto LAB_0078ef02;
    }
    uVar10 = 0x65;
    if ((uVar11 & 0x1f) == 2) {
      uVar10 = 0x66;
    }
    F_0059d670(*(undefined * PTR32 *)(iVar3 + 4) GEN_EDX_ARG,uVar10);
    fVar12 = ((float10)GEN_TOD(atan2((float10)fVar6,(float10)fVar5)));
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF((((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1080220))
                                        / (float10)*(double *)&REFG(undefined, 0x1080228) +
                                       (float10)*(double *)&REFG(undefined, 0x10920c0)))));
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1a4) +
                                         ((float10)GEN_TOD(gen_bits2f(param_2)))))));
    }
    F_00568350(this GEN_EDX_ARG,GEN_TOF(gen_bits2f(param_2)));
    F_0055a300(*(undefined * PTR32 *)(iVar3 + 8) GEN_EDX_ARG,(uint)((*(int *)(gen_frame + 0x28)) != 0));
    F_00568350(*(undefined4 *)(iVar3 + 8) GEN_EDX_ARG,GEN_TOF(gen_bits2f(param_2 ^ REFG(uint, 0x10920d0))));
    F_0055a300(*(undefined * PTR32 *)(iVar3 + 0xc) GEN_EDX_ARG,1);
    if ((*(int *)(gen_frame + 0x28)) == 0) {
      fVar12 = (float10)0;
    }
    else {
      F_00591c00(*(undefined * PTR32 *)(iVar3 + 8) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),0);
      fVar12 = (float10)*(float *)(param_1 + 0x1c90);
    }
    F_00559f00(*(undefined4 *)(iVar3 + 0xc) GEN_EDX_ARG,(float)fVar12);
    if ((uVar11 >> 7 & 1) != 0) {
      (*(uint *)(gen_frame + 0x10)) = CONCAT31((int3)uVar9,1);
    }
    (*(uint *)(gen_frame + 0x18)) = CONCAT31((int3)uVar7,1);
  }
  F_0055a300(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)));
  F_0055a3c0(*(undefined4 *)(iVar3 + 0x10) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)));
  F_0055a300(this_00 GEN_EDX_ARG,(uint)((char)(*(uint *)(gen_frame + 0x18)) == '\0'));
  uVar11 = F_0055a3c0(puVar2[2] GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
  return uVar11;
}

/* ref: FUN_0078ef90 */
GEN_FRAME byte F_0078ef90(unsigned int gen_a0)
{
  GEN_ENTER(0x78ef90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 < 0x65;
}

/* ref: Client::UI2::AddonNaviMap::vf32 */
GEN_NOFRAME byte F_0078efa0(void)
{
  GEN_ENTER(0x78efa0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0078efb0 */
GEN_NOFRAME uint GEN_THISCALL F_0078efb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78efb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  short sVar3;
  float10 fVar4;
  uint uVar5;
  int iVar6;
  float * pfVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x38)) = 0.0;
  if (*(char *)((int)this + 0x3c) == '\0') {
    (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x24);
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1c) * (float10)*(float *)((int)this + 0x18))));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar1;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = (float)((float10)fVar1 * (float10)0);
  (*(float *)(gen_frame + 0x40)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar2;
  fVar1 = (float)((float10)fVar1 * (float10)0);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x38)) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  F_005b7670(&(*(float *)(gen_frame + 0x44)) GEN_EDX_FWD,fVar1);
  (*(float *)(gen_frame + 0x40)) = 0.0;
  if (*(short *)((int)this + 0x34) != 0) {
    pfVar7 = (float *)((int)this + 0x5c);
    do {
      uVar5 = F_0055a2d0((undefined4)gen_fl2bits(pfVar7[-3]) GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        (*(float *)(gen_frame + 0x28)) = 0.0;
        if (*(char *)(pfVar7 + 2) != '\0') {
          (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)*pfVar7);
        }
        F_00568350((undefined4)gen_fl2bits(pfVar7[-3]) GEN_EDX_ARG,(*(float *)(gen_frame + 0x28)));
        sVar3 = *(short *)((int)pfVar7 + 6);
        (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)*(short *)(pfVar7 + 1));
        (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)sVar3);
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(int)*(short *)(pfVar7 + 1) -
                          (float10)*(float *)((int)this + 0x10))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(int)sVar3 - (float10)*(float *)((int)this + 0x14))));
        F_00560d80(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x44)));
        (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
        fVar1 = pfVar7[-1];
        (*(float *)(gen_frame + 0x2c)) = fVar1;
        if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF((((float10)fVar1 * (float10)*(float *)((int)this + 0x1c)) *
                            (float10)*(float *)((int)this + 0x18))));
        }
        (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)*(short *)((int)this + 0x32));
        fVar1 = ((float)GEN_TOF((((float10)(int)*(short *)((int)this + 0x32) + (float10)(*(float *)(gen_frame + 0x4))) -
                       (float10)*(float *)((int)this + 0x2c))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)*(short *)((int)this + 0x30));
        fVar2 = ((float)GEN_TOF((((float10)(int)*(short *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x0))) -
                       (float10)*(float *)((int)this + 0x28))));
        (*(float *)(gen_frame + 0x3c)) = fVar2;
        F_00559da0((undefined4)gen_fl2bits(pfVar7[-3]) GEN_EDX_ARG,fVar2,fVar1);
        F_00568210((undefined4)gen_fl2bits(pfVar7[-3]) GEN_EDX_ARG,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x34)));
      }
      iVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 1;
      pfVar7 = pfVar7 + 8;
      (*(float *)(gen_frame + 0x40)) = gen_bits2f(iVar6);
    } while (iVar6 < (int)(uint)*(ushort *)((int)this + 0x34));
  }
  F_00559e00(*(undefined4 *)this GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x3e),
               (uint)*(ushort *)((int)this + 0x40));
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) - (float10)*(float *)((int)this + 0x20))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  F_00568350(*(undefined4 *)this GEN_EDX_ARG,fVar1);
  fVar4 = (float10)(*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - fVar4);
  F_00568350(*(undefined4 *)((int)this + 4) GEN_EDX_ARG,(float)((float10)(*(float *)(gen_frame + 0x38)) - fVar4));
  uVar5 = F_00568350(*(undefined4 *)((int)this + 0x38) GEN_EDX_ARG,(*(float *)(gen_frame + 0x38)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0078f1e0 */
GEN_FRAME uint GEN_THISCALL F_0078f1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78f1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_0078f1f0 */
GEN_FRAME uint GEN_THISCALL F_0078f1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78f1f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: Client::UI2::AddonNaviMap::MaskRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_0078f200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78f200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xe98))) != param_1) {
    uVar1 = F_005849f0((undefined *)this GEN_EDX_FWD,param_1,param_2)
    ;
    return uVar1;
  }
  uVar1 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar1 + 4);
  puVar2 = &REFG(undefined4, 0x1375a5c);
  uVar1 = F_0055c5f0(*(int *)(this + 0xc) + 0x1b3c GEN_EDX_ARG);
  F_00567740(this_00 GEN_EDX_ARG,0,uVar1,puVar2);
  uVar1 = F_005849f0((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarBase::vf2 */
GEN_FRAME uint GEN_THISCALL F_0078f270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78f270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((short)param_1 == 0x2d) || ((short)param_1 == 0x30)) || ((short)param_1 == 0x34)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_4 + 0xc))((int *)*param_4 GEN_EDX_FWD);
    in_EAX = F_0055a2d0(uVar1 GEN_EDX_ARG);
    if ((char)in_EAX == '\0') {
      return in_EAX;
    }
  }
  if ((short)param_1 == 0x2d) {
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x110))(this GEN_EDX_ARG,param_2,param_3,param_4);
  }
  else {
    if ((short)param_1 == 0x30) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    }
    if ((short)param_1 == 0x34) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x108))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonActionBarBase::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_0078f310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78f310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0078f320 */
GEN_NOFRAME uint GEN_THISCALL F_0078f320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78f320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_ecx + 0x180);
  iVar3 = 10;
  if (iVar1 != 0x12) {
    iVar3 = iVar1 - 1;
  }
  iVar3 = iVar3 * 8;
  if ((iVar1 != 0) && (*(char *)(in_ecx + 0x19e) == '\0')) {
    F_0055dda0(in_ecx GEN_EDX_FWD,7,(float)*(int *)(&REFG(undefined, 0x10c12e0) + iVar3),
                 (float)*(int *)(&REFG(undefined, 0x10c12e4) + iVar3));
  }
  uVar2 = F_0055dde0(in_ecx GEN_EDX_ARG,7,(float)*(int *)(&REFG(undefined, 0x10c12e0) + iVar3),
                       (float)*(int *)(&REFG(undefined, 0x10c12e4) + iVar3));
  return uVar2;
}

/* ref: Client::UI2::AddonActionBarBase::vf55 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0078f3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78f3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x19e) = 1;
  return;
}

/* ref: Client::UI2::AddonActionBarBase::vf42 */
GEN_FRAME uint GEN_THISCALL F_0078f3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00572ec0((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarBase::vf62 */
GEN_FRAME uint GEN_THISCALL F_0078f3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 AVar1;
  code * pcVar2;
  uint uVar3;
  undefined1 AVar4;
  
  if ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) &
      1 << ((byte)*(undefined4 *)(this + 0x184) & 0x1f)) == 0) {
    if ((char)param_2 == '\0') {
      F_0055e2a0(this GEN_EDX_FWD,0x10,0);
      F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x18);
      this[0x10d] = (undefined1)0x1;
      uVar3 = (*pcVar2)(this,1,0);
    }
    else {
      F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
    }
  }
  else {
    uVar3 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
    if ((uVar3 == 5) || (uVar3 == 4)) {
      if ((char)param_2 == '\0') {
        if ((*(uint *)(this + 0x108) >> 4 & 1) != 0) goto LAB_0078f48f;
        this[0x10e] = (undefined1)0x0;
        F_0055e2a0(this GEN_EDX_ARG,0x10,1);
        this[0x10d] = (undefined1)0x1;
      }
      else if (this[0x10e] != (undefined1)0x0) goto LAB_0078f48f;
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
      *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x2000;
      uVar3 = (*pcVar2)(this,1);
    }
  }
LAB_0078f48f: ;
  AVar1 = this[0x19d];
  AVar4 = (undefined1)
          ((*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) &
           1 << ((byte)*(undefined4 *)(this + 0x180) & 0x1f)) != 0);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),AVar4);
  this[0x19d] = AVar4;
  if (AVar4 != AVar1) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonActionBarBase::vf69 */
GEN_FRAME uint GEN_THISCALL F_0078f4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  if (param_1 != 0x12) {
    (*(int *)(gen_frame + 0x14)) = param_1;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 *)(gen_frame + 0x24)) = 0x14;
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x18,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    puVar2 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 2;
    do {
      puVar2 = puVar2 - 2;
      uVar1 = F_005a2670(puVar2 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  }
  (*(int *)(gen_frame + 0x14)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x15;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x18,3,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 2;
  do {
    puVar2 = puVar2 - 2;
    uVar1 = F_005a2670(puVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078f5b0 */
GEN_FRAME uint GEN_THISCALL F_0078f5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  bVar1 = *(byte *)((int)this + 0x13a);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  uVar2 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 4;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBarBase::vf70 */
GEN_FRAME uint GEN_THISCALL F_0078f650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78f650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if (*(int *)(this + 0x180) != 0x12) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    AVar1 = this[0x13a];
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x14)) = (uint)(byte)AVar1;
    uVar2 = *(undefined4 *)(this + 0x180);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_1;
    F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 4;
    do {
      this_00 = this_00 - 2;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0078f710 */
GEN_FRAME uint GEN_THISCALL F_0078f710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  bVar1 = *(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  uVar3 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  uVar2 = *(undefined1 *)((int)this + 0x19c);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x24)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 4;
  do {
    this_00 = this_00 - 2;
    uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_0078f7d0 */
GEN_FRAME uint GEN_THISCALL F_0078f7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78f7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  bVar1 = *(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  uVar3 = *(undefined4 *)((int)this + 0x180);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  uVar2 = *(undefined1 *)((int)this + 0x19c);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x24)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 4;
  do {
    this_00 = this_00 - 2;
    uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_0078f890 */
GEN_FRAME uint GEN_THISCALL F_0078f890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78f890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
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
  (*(undefined4 *)(gen_frame + 0x4)) = 0x17;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 4;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078f910 */
GEN_FRAME uint GEN_THISCALL F_0078f910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78f910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x19,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078f9c0 */
GEN_FRAME uint GEN_STDCALL F_0078f9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78f9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_004352e0(param_1 + 1);
    return uVar1;
  }
  uVar1 = F_00435340(param_1 + 1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078fa00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78fa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionBar",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionBar::vf40 */
GEN_FRAME uint GEN_THISCALL F_0078fa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonActionBar::vf46 */
GEN_FRAME byte GEN_THISCALL F_0078fa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    *(undefined4 *)(this + 0x180) = uVar2;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_FWD);
    iVar1 = *(int *)this;
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b990(uVar4 GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar4,uVar3);
  }
  return 1;
}

/* ref: FUN_0078fa80 */
GEN_FRAME uint GEN_THISCALL F_0078fa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78fa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_0078f710(this GEN_EDX_FWD);
    return uVar1;
  }
  uVar1 = F_0078f5b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0078faa0 */
GEN_NOFRAME uint GEN_THISCALL F_0078faa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78faa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c707c));
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x200) = 0xffffffff;
  *(undefined4 *)((int)this + 0x204) = 0xffffffff;
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  *(undefined2 *)((int)this + 0x210) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x14000002,1);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined2 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonPartyList::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0078fbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78fbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,1);
  F_005a92d0(this GEN_EDX_ARG,0,3,0);
  F_005a92d0(this GEN_EDX_ARG,1,4,0);
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonPartyList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0078fc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78fc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"PartyList",0,6);
  return bVar1;
}

/* ref: FUN_0078fc30 */
GEN_FRAME uint GEN_THISCALL F_0078fc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  byte bVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined * pvVar4;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar5;
  int iVar6;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18)));
  uVar3 = uVar1;
  if (*(uint *)((int)this + 0x200) != uVar1) {
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)this + 0x180);
    do {
      if (iVar6 < 8) {
        pvVar4 = (undefined *)*puVar5;
      }
      else {
        pvVar4 = *(undefined * PTR32 *)((int)this + 0x1a0);
      }
      in_ecx = F_00561530(pvVar4 GEN_EDX_FWD,3);
      uVar3 = 0;
      if (in_ecx != 0) {
        F_0055ab90(in_ecx GEN_EDX_ARG,0xff004986);
        bVar2 = F_0055abd0(in_ecx GEN_EDX_ARG,1);
        uVar3 = CONCAT31(extraout_var,bVar2);
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 9);
    if (-1 < (int)uVar1) {
      if ((int)uVar1 < *(int *)((int)this + 0x1fc)) {
        pvVar4 = *(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x180);
      }
      else {
        pvVar4 = *(undefined * PTR32 *)((int)this + 0x1a0);
      }
      pvVar4 = (undefined *)F_00561530(pvVar4 GEN_EDX_ARG,3);
      uVar3 = 0;
      if (pvVar4 != (undefined *)0x0) {
        F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x260))));
        F_0055ab90(pvVar4 GEN_EDX_ARG,0xffa10d0d);
        bVar2 = F_0055abd0(pvVar4 GEN_EDX_ARG,1);
        uVar3 = CONCAT31(extraout_var_00,bVar2);
      }
    }
    *(uint *)((int)this + 0x200) = uVar1;
  }
  return uVar3;
}

/* ref: FUN_0078fd10 */
GEN_FRAME uint GEN_STDCALL F_0078fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x78fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (0 < param_4) {
    if ((char)param_6 != '\0') {
      F_0057eb30(param_1 GEN_EDX_ARG,param_5,0,0,0,0);
    }
    F_0055a300(param_2 GEN_EDX_ARG,1);
    uVar2 = F_00568230(param_3 GEN_EDX_ARG,(float)((float10)param_4 / (float10)*(double *)&REFG(undefined, 0x1088118)));
    return uVar2;
  }
  if ((char)param_6 != '\0') {
    F_00584110(param_1 GEN_EDX_ARG,"");
  }
  bVar1 = F_0055a300(param_2 GEN_EDX_ARG,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0078fd80 */
GEN_FRAME uint GEN_THISCALL F_0078fd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78fd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = param_1;
  if (*(int *)((int)this + param_1 * 4 + 0x1d8) != param_2) {
    if ((param_3 != (undefined *)0x0) && (uVar2 = 0, param_4 != 0)) {
      if (param_2 != 0) {
        F_0058f730((undefined *)(param_4 + 4) GEN_EDX_FWD,param_2,0,6);
      }
      else {
        F_0058c5d0((undefined *)(param_4 + 4) GEN_EDX_ARG);
      }
      bVar1 = F_0055a300(param_3 GEN_EDX_ARG,(uint)(param_2 != 0));
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
    *(int *)((int)this + param_1 * 4 + 0x1d8) = param_2;
  }
  return uVar2;
}

/* ref: FUN_0078fde0 */
GEN_FRAME uint GEN_STDCALL F_0078fde0(unsigned int gen_a0)
{
  GEN_ENTER(0x78fde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this;
  int iVar2;
  
  uVar1 = param_1;
  if (7 < param_1) {
    uVar1 = 0x13;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined1 *)(gen_frame + 0x10)) = 1;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x2f,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  this = ((undefined1 *)(gen_frame + 0x14));
  iVar2 = 1;
  do {
    this = this - 8;
    uVar1 = F_005a2670(this GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0078fe50 */
GEN_FRAME byte GEN_THISCALL F_0078fe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78fe50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  undefined4 uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(char *)(param_1 + 6) != '\x01') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_FWD);
    return 0;
  }
  F_0078fde0(param_2);
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b990(uVar1 GEN_EDX_ARG);
  if (param_2 < 8) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x10) + 0x20))) + 0x6c + param_2 * 0x4c)));
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x10) + 0x20))) + 0x790)));
  }
  (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)this + 0x13a);
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x16;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::UI2::AddonPartyList::vf57 */
GEN_NOFRAME uint GEN_THISCALL F_0078ff20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x78ff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  uVar2 = F_00596b90((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,1);
  this[0x210] = (undefined1)0x0;
  return uVar2;
}

/* ref: FUN_0078ff50 */
GEN_FRAME uint GEN_THISCALL F_0078ff50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x78ff50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int iVar2;
  uint in_ecx;
  
  if ((param_1 < 0) || (iVar2 = param_1, 2 < param_1)) {
    iVar2 = 0;
  }
  in_ecx = F_0055e2f0(this GEN_EDX_FWD,iVar2 + 0x16);
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0078ff80 */
GEN_FRAME uint GEN_THISCALL F_0078ff80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ff80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  uint in_ecx;
  undefined2 extraout_var = 0;
  undefined * this_01;
  undefined4 uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) < 8) {
    this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4 + 0x180)));
    this_00 = (undefined *)F_00561490(this_01 GEN_EDX_FWD,0x1c);
    F_00559fb0(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar1 = (short)uVar2 + ((short)(*(undefined4 *)&gen_args[2]) - (short)(*(uint *)&gen_args[1]));
    uVar3 = 0x1b;
  }
  else {
    if ((*(uint *)&gen_args[1]) != 8) {
      return (*(uint *)&gen_args[1]);
    }
    this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0)));
    this_00 = (undefined *)F_00561490(this_01 GEN_EDX_ARG,0x18);
    F_00559fb0(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar1 = (short)uVar2 + ((short)(*(undefined4 *)&gen_args[2]) - (short)(*(uint *)&gen_args[1]));
    uVar3 = 0x17;
  }
  uVar2 = (uint)uVar1;
  in_ecx = F_00561490(this_01 GEN_EDX_ARG,uVar3);
  F_0055a060(in_ecx GEN_EDX_ARG,uVar2);
  uVar1 = F_0055a060(this_00 GEN_EDX_ARG,(uint)uVar1);
  return CONCAT22(extraout_var,uVar1);
}

/* ref: FUN_0079006c */
GEN_NOFRAME unsigned int GEN_STDCALL F_0079006c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x79006cu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: Client::UI2::AddonToDoList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00790080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ToDoList",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonToDoList::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_00790090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonToDoList::vf50 */
GEN_NOFRAME uint GEN_THISCALL F_007900a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7900a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e4b0((undefined *)this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  *(short *)(this + 0x19c) = (short)uVar1;
  if (this[0x3a4] != (undefined1)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
    this[0x3a4] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonToDoList::vf54 */
GEN_NOFRAME uint GEN_THISCALL F_007900e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7900e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_FWD);
  F_0056b300(this GEN_EDX_ARG,0);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  *(short *)(this + 0x19c) = (short)uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonToDoList::vf27 */
GEN_FRAME uint GEN_THISCALL F_00790110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4 GEN_EDX_ARG);
  iVar1 = *(int *)(uVar4 + 0x6c);
  uVar4 = F_0055dcb0();
  F_0055b9a0(uVar4 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  *(short *)(this + 0x19c) = (short)uVar4;
  uVar5 = F_0055dcb0();
  dVar3 = (double)*(int *)(uVar5 + 0x234);
  if (*(int *)(uVar5 + 0x234) < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  this[0x3a5] = (undefined1)((short)(int)(dVar3 * REFG(double, 0x1088108)) <= (short)uVar4);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar2 + 4) == 1) {
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = *(int *)this;
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar5,uVar4);
    uVar4 = *(uint *)(iVar1 + 0x20);
    *(undefined4 *)(uVar4 + 4) = 1;
    return uVar4;
  }
  if (*(int *)(iVar2 + 0x19c) == 1) {
    *(undefined4 *)(iVar2 + 0x19c) = 0;
    iVar2 = *(int *)this;
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar5,uVar4);
    uVar4 = *(uint *)(iVar1 + 0x20);
    *(undefined4 *)(uVar4 + 0x19c) = 1;
    return uVar4;
  }
  iVar1 = *(int *)this;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4 GEN_EDX_ARG);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar5,uVar4);
  return uVar4;
}

/* ref: Client::UI2::AddonToDoList::vf51 */
GEN_FRAME uint GEN_THISCALL F_00790250(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x790250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_FWD,(int)param_2 & 0xffff,(int)param_3 & 0xffff);
  *(undefined1 *)(param_1 + 0xe9) = 1;
  return uVar1;
}

/* ref: FUN_00790280 */
GEN_FRAME uint GEN_THISCALL F_00790280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x790280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = param_1;
    this_00 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,*(undefined4 *)((int)&REFG(undefined4, 0x10c7174) + uVar2));
    bVar1 = F_0055a300(this_00 GEN_EDX_ARG,uVar3);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007902c0 */
GEN_FRAME uint GEN_THISCALL F_007902c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7902c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  
  this_00 = (undefined *)F_00578f50((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1,param_2,param_3);
  if ((this_00 != (undefined *)0x0) && ((char)param_4 != '\0')) {
    F_0055a300(this_00 GEN_EDX_ARG,param_4);
  }
  return (uint)this_00;
}

/* ref: FUN_00790300 */
GEN_FRAME uint GEN_THISCALL F_00790300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00790370 */
GEN_FRAME uint GEN_THISCALL F_00790370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  cVar1 = *(char *)(param_3 + 6);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar1 != '\0');
  bVar2 = *(byte *)((int)this + 0x13a);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar2;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00790420 */
GEN_FRAME uint GEN_THISCALL F_00790420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  cVar1 = *(char *)(param_3 + 6);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar1 != '\0');
  bVar2 = *(byte *)((int)this + 0x13a);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar2;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

