#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b8ce00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8ce00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb8ce00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  uint uVar1;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)GEN_TOP((param_2 * 0x140 + *((int *)GEN_TOP((param_1 + 0x2f8))))));
  *(undefined4 *)(puVar2 + 4) = 3;
  uVar1 = F_0042ccf0(puVar2 + 8 GEN_EDX_FWD,param_3);
  *(undefined4 *)(puVar2 + 0x60) = param_4;
  puVar2[0x5c] = param_5;
  *puVar2 = 1;
  return uVar1;
}

/* ref: FUN_00b8ce40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b8ce40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb8ce40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((param_2 * 0x140 + *((int *)GEN_TOP((param_1 + 0x2f8))))));
  *(undefined4 *)(puVar1 + 4) = 1;
  F_0042ccf0(puVar1 + 8 GEN_EDX_FWD,param_3);
  *(undefined4 *)(puVar1 + 0x60) = param_4;
  *(undefined4 *)(puVar1 + 100) = param_5;
  puVar1[0x5c] = param_6;
  *puVar1 = 1;
  return param_6;
}

/* ref: FUN_00b8ce80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8ce80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb8ce80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((param_2 * 0x140 + *((int *)GEN_TOP((in_ecx + 0x2f8))))));
  *(undefined4 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00b8cea0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8cea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8cea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_006d9cd0(this GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x280))))(this GEN_EDX_ARG);
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x98c)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (&REFG(undefined * PTR32, 0x10f8534))[(int)(bVar1)];
  F_00a69770(&REFG(undefined4, 0x14b119c) GEN_EDX_ARG);
  F_00a69750(&REFG(undefined4, 0x14b119c) GEN_EDX_ARG);
  return (uint)bVar1;
}

/* ref: FUN_00b8cee0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8cee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8cee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_006d9cd0(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  F_00a69780(&REFG(undefined4, 0x14b119c) GEN_EDX_ARG);
  F_00a69750(&REFG(undefined4, 0x14b119c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xb8cf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x284)));
  this[0x9a1] = (undefined1)0x1;
  uVar2 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00b8cf30 */
GEN_OWN GEN_FRAME uint F_00b8cf30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8cf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar3 = ((int *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar2)));
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  if (*(int *)(&REFG(undefined, 0x10f8550) + ((uint)*((byte *)GEN_TOP((iVar1 + 0x98c))) + uVar2 * 6) * 4) != 0) {
    F_006c6500(*(int *)(&REFG(undefined, 0x10f8550) + ((uint)*((byte *)GEN_TOP((iVar1 + 0x98c))) + uVar2 * 6) * 4));
  }
  F_00a01890(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b8cfa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8cfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8cfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006bd080(this GEN_EDX_FWD,0x80000002,param_1,0);
  return uVar1;
}

/* ref: FUN_00b8cfc0 */
GEN_OWN GEN_FRAME uint F_00b8cfc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8cfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1)));
  this = ((undefined *)GEN_TOP(*puVar2));
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  F_006bd080(this GEN_EDX_ARG,0x80000002,uVar1,0);
  F_00a01890(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b8d020 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b8d020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8d020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((*((short *)GEN_TOP(((int)this + 0x98a))) != 0) &&
      (*((short *)GEN_TOP(((int)this + 0x98a))) != *((short *)GEN_TOP(((int)this + 0x988))))) &&
     (*((short *)GEN_TOP(((int)this + 0x988))) != 1)) {
    F_00ab6ad0(1);
    *((undefined2 *)GEN_TOP(((int)this + 0x988))) = 1;
  }
  return;
}

/* ref: FUN_00b8d060 */
GEN_OWN GEN_FRAME uint F_00b8d060(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8d060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar3 = ((int *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar2)));
  iVar1 = *piVar3;
  F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  if (((*((short *)GEN_TOP((iVar1 + 0x98a))) != 0) && (*((short *)GEN_TOP((iVar1 + 0x98a))) != *((short *)GEN_TOP((iVar1 + 0x988)))))
     && (*((short *)GEN_TOP((iVar1 + 0x988))) != 1)) {
    F_00ab6ad0(1);
    *((undefined2 *)GEN_TOP((iVar1 + 0x988))) = 1;
  }
  F_00a01890(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b8d130 */
GEN_OWN GEN_FRAME uint F_00b8d130(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8d130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar4 = ((int *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar3)));
  iVar2 = *piVar4;
  F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  uVar1 = *((ushort *)GEN_TOP((iVar2 + 0x98a)));
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    if (uVar3 == 0) {
      F_00ab6b60();
      *((undefined2 *)GEN_TOP((iVar2 + 0x988))) = 0;
      F_00a01890(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0;
    }
    if (uVar3 != *((ushort *)GEN_TOP((iVar2 + 0x988)))) {
      F_00ab6ad0(uVar3);
      *((ushort *)GEN_TOP((iVar2 + 0x988))) = uVar1;
    }
  }
  F_00a01890(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b8d1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x958)));
  if (iVar1 != 0) {
    F_006df830(this GEN_EDX_FWD,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x958))) = 0;
  }
  uVar2 = F_006e90a0(this GEN_EDX_ARG,param_2,param_3);
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x958))) = uVar2;
  return uVar2;
}

/* ref: FUN_00b8d220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d220(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb8d220u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  int in_ecx;
  int * piVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_2 != 0) {
    local_8 = F_00463610(0,param_2,2);
  }
  if (param_3 < 7) {
    in_ecx = param_3 * 0x54 + 0x6f4 + param_1;
  }
  else {
    in_ecx = (param_3 - *((int *)GEN_TOP((param_1 + 0x97c)))) * 0x54 + *((int *)GEN_TOP((param_1 + 0x94c)));
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  iVar1 = *piVar2;
  uVar3 = F_0042a990(in_ecx GEN_EDX_ARG);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x108))))(piVar2,local_8,uVar3,(undefined4)gen_fl2bits(param_4));
  return uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf153 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b8d2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8d2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a55d60(this + 0x354 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)))));
  return;
}

/* ref: FUN_00b8d2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10f99ac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10f999c));
  return (uint)this;
}

/* ref: FUN_00b8d300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10f9c74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10f9c64));
  return (uint)this;
}

/* ref: FUN_00b8d330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10f9f3c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10f9f2c));
  return (uint)this;
}

/* ref: FUN_00b8d360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fa204));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fa1f4));
  return (uint)this;
}

/* ref: FUN_00b8d390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fa4cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fa4bc));
  return (uint)this;
}

/* ref: FUN_00b8d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fa794));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fa784));
  return (uint)this;
}

/* ref: FUN_00b8d3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10faa5c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10faa4c));
  return (uint)this;
}

/* ref: FUN_00b8d420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fad24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fad14));
  return (uint)this;
}

/* ref: FUN_00b8d450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fafec));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fafdc));
  return (uint)this;
}

/* ref: FUN_00b8d480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fb2b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fb2a4));
  return (uint)this;
}

/* ref: FUN_00b8d4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fb57c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fb56c));
  return (uint)this;
}

/* ref: FUN_00b8d4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fb844));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fb834));
  return (uint)this;
}

/* ref: FUN_00b8d510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fbb0c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fbafc));
  return (uint)this;
}

/* ref: FUN_00b8d540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fbdd4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fbdc4));
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTheOldCastleAmidapool::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8d570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  uVar2 = uVar2 - 2;
  if ((((uVar2 == 0) && (param_1[0x47] == 0)) &&
      (uVar2 = param_1[0x39], uVar2 == *(uint *)(this + 8))) &&
     ((param_1[0x3b] != 0 || (param_1[0x3c] != 0)))) {
    uVar3 = F_00a5f290(param_1 GEN_EDX_ARG);
    uVar2 = uVar3;
    if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,uVar3);
      if (bVar1 == 1) {
        uVar2 = *((uint *)GEN_TOP((uVar3 + 0x78)));
        if ((uVar2 != 0x3cf772) && ((uVar2 < 0x412834 || (0x412836 < uVar2)))) {
          uVar2 = F_00ab4370(0xa3,uVar3,uVar3,0,0);
          return uVar2;
        }
      }
      else {
        uVar2 = F_00ab4370(0xa4,uVar3,uVar3,0,0);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b8d620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte * pbVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  __time64_t _Var4;
  
  this_00 = ((undefined *)GEN_TOP(F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[param_1],0)));
  uVar3 = param_1 * 3;
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9a8))) + param_1 * 0x18)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if ((param_2 == 0) || (param_2 == 2)) {
      uVar3 = F_005f51d0(this_00 GEN_EDX_ARG,(uint)*pbVar1,0);
    }
    if (((param_2 == 1) || (param_2 == 2)) && (*(int *)(pbVar1 + 8) != 7)) {
      _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      iVar2 = *(int *)(pbVar1 + 0x10);
      if (*(int *)(pbVar1 + 4) != 7) {
        F_005e3760(this_00 GEN_EDX_ARG,*(int *)(pbVar1 + 4));
        F_005eb180(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar1 + 4),0);
      }
      F_005e3760(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar1 + 8));
      uVar3 = F_005eb180(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar1 + 8),
                           (*(int *)(pbVar1 + 0xc) + ((int)_Var4 - iVar2)) * 1000);
    }
  }
  return uVar3;
}

/* ref: FUN_00b8d6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc09c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fc08c));
  return (uint)this;
}

/* ref: FUN_00b8d700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
  return (uint)this;
}

/* ref: FUN_00b8d750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc62c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fc61c));
  return (uint)this;
}

/* ref: FUN_00b8d780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc8f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fc8e4));
  return (uint)this;
}

/* ref: FUN_00b8d7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fcbbc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fcbac));
  return (uint)this;
}

/* ref: FUN_00b8d7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fce84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fce74));
  return (uint)this;
}

/* ref: FUN_00b8d810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fd14c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fd13c));
  return (uint)this;
}

/* ref: FUN_00b8d840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fd414));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fd404));
  return (uint)this;
}

/* ref: FUN_00b8d870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fd6dc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fd6cc));
  return (uint)this;
}

/* ref: FUN_00b8d8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fd9a4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fd994));
  return (uint)this;
}

/* ref: FUN_00b8d8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fdc6c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fdc5c));
  return (uint)this;
}

/* ref: FUN_00b8d900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8d900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8d900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9a8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fdf44));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fdf30));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9a8))) = (*(undefined * PTR32 (*)[2])REFP(0x10fdf24));
  *((undefined1 *)GEN_TOP(((int)this + 0x9ac))) = 0xff;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8d950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8d950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = 0x5d;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  REFG(undefined1, 0x14ab2dc) = 0xff;
  uVar2 = F_006ff3a0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b8d990 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b8d990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8d990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  char cVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  uVar9 = (uint)*((byte *)GEN_TOP(((uint)*((byte *)GEN_TOP((param_1 + 0x18))) * 0x40 + 0x35 + param_1)));
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar12 = 0x5d;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar12)));
  uVar5 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    ((undefined4 *)(gen_frame + 0x8))[3] = 0;
    ((undefined4 *)(gen_frame + 0x8))[4] = 0;
    ((undefined4 *)(gen_frame + 0x8))[5] = 0;
    ((undefined4 *)(gen_frame + 0x8))[6] = 0;
    ((undefined4 *)(gen_frame + 0x8))[7] = 0;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    cVar8 = '\0';
    if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x01') {
      cVar8 = '\x02' - (uVar9 != 1);
    }
    else if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x02') {
      cVar8 = (uVar9 != 1) + '\x01';
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    if (this == ((undefined *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)this + 0x9a8;
    }
    F_007ddbc0(piVar4 GEN_EDX_ARG,iVar6,0,8,(uint)*((byte *)GEN_TOP((param_1 + 0x18))),cVar8,
                 *((undefined4 *)GEN_TOP((param_1 + 0x10))),(uint)*((ushort *)GEN_TOP((param_1 + 0x14))),
                 (uint)*((ushort *)GEN_TOP((param_1 + 0x16))),0x78);
    (*(uint *)(gen_frame + 0x0)) = 0;
    puVar7 = ((undefined4 *)GEN_TOP((param_1 + 0x56)));
    do {
      uVar1 = *((undefined1 *)GEN_TOP(((int)puVar7 + 6)));
      (*(undefined4 *)(gen_frame + 0x2c)) = *puVar7;
      uVar12 = *((undefined4 *)GEN_TOP(((int)puVar7 - 0x2a)));
      bVar2 = *((byte *)GEN_TOP(((int)puVar7 - 0x23)));
      puVar10 = puVar7 - 8;
      puVar11 = ((undefined4 *)(gen_frame + 0x8));
      for (iVar6 = 8; uVar3 = (*(undefined4 *)(gen_frame + 0x30)), iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 0)) = *(undefined2 *)(puVar7 + 1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 2)) = uVar1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x30)), 0, 3, (unsigned long long)(CONCAT12(uVar1,*(undefined2 *)(puVar7 + 1))));
      F_007797f0(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x2c)),*((undefined1 *)GEN_TOP(((int)puVar7 - 0x21))),
                   (uint)*(byte *)(puVar7 - 9),(uint)*((ushort *)GEN_TOP(((int)puVar7 - 0x26))),(uint)bVar2,
                   (uint)*((byte *)GEN_TOP(((int)puVar7 - 0x22))),*((undefined4 *)GEN_TOP(((int)puVar7 - 0x2e))),uVar12)
      ;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      puVar7 = puVar7 + 0x10;
    } while ((*(uint *)(gen_frame + 0x0)) < 8);
    uVar5 = F_008c9540(piVar4 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP((param_1 + 0x19))) != '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x02') {
      uVar9 = (uint)(uVar9 == 0);
    }
    if (uVar9 == 0) {
      uVar12 = 0x77;
    }
    else {
      if (uVar9 - 1 != 0) {
        return uVar9 - 1;
      }
      uVar12 = 0x78;
    }
    uVar5 = F_006c6500(uVar12);
  }
  return uVar5;
}

/* ref: FUN_00b8db30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b8db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8db30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  char cVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  uVar10 = (uint)*((byte *)GEN_TOP(((uint)*((byte *)GEN_TOP((param_1 + 0x18))) * 0x40 + 0x35 + param_1)));
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar12 = 0x5d;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar12)));
  uVar5 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((undefined4 *)(gen_frame + 0x4))[0] = 0;
    ((undefined4 *)(gen_frame + 0x4))[1] = 0;
    ((undefined4 *)(gen_frame + 0x4))[2] = 0;
    ((undefined4 *)(gen_frame + 0x4))[3] = 0;
    ((undefined4 *)(gen_frame + 0x4))[4] = 0;
    ((undefined4 *)(gen_frame + 0x4))[5] = 0;
    ((undefined4 *)(gen_frame + 0x4))[6] = 0;
    ((undefined4 *)(gen_frame + 0x4))[7] = 0;
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    cVar9 = '\0';
    if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x01') {
      cVar9 = (*((char *)GEN_TOP(((uint)*((byte *)GEN_TOP((param_1 + 0x18))) * 0x40 + 0x35 + param_1))) != '\0') + '\x01';
    }
    else if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x02') {
      cVar9 = (*((char *)GEN_TOP(((uint)*((byte *)GEN_TOP((param_1 + 0x18))) * 0x40 + 0x35 + param_1))) == '\0') + '\x01';
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    if (this == ((undefined *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)this + 0x9a8;
    }
    F_007ddbc0(piVar4 GEN_EDX_ARG,iVar6,0,0x10,(uint)*((byte *)GEN_TOP((param_1 + 0x18))),cVar9,
                 *((undefined4 *)GEN_TOP((param_1 + 0x10))),(uint)*((ushort *)GEN_TOP((param_1 + 0x14))),
                 (uint)*((ushort *)GEN_TOP((param_1 + 0x16))),0x78);
    (*(uint *)(gen_frame + 0x0)) = 0;
    puVar7 = ((undefined4 *)GEN_TOP((param_1 + 0x56)));
    do {
      uVar1 = *((undefined1 *)GEN_TOP(((int)puVar7 + 6)));
      (*(undefined4 *)(gen_frame + 0x28)) = *puVar7;
      uVar12 = *((undefined4 *)GEN_TOP(((int)puVar7 - 0x2a)));
      bVar2 = *((byte *)GEN_TOP(((int)puVar7 - 0x23)));
      puVar8 = puVar7 - 8;
      puVar11 = ((undefined4 *)(gen_frame + 0x4));
      for (iVar6 = 8; uVar3 = (*(undefined4 *)(gen_frame + 0x2c)), iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = *(undefined2 *)(puVar7 + 1);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) = uVar1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x2c)), 0, 3, (unsigned long long)(CONCAT12(uVar1,*(undefined2 *)(puVar7 + 1))));
      F_007797f0(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x28)),*((undefined1 *)GEN_TOP(((int)puVar7 - 0x21))),
                   (uint)*(byte *)(puVar7 - 9),(uint)*((ushort *)GEN_TOP(((int)puVar7 - 0x26))),(uint)bVar2,
                   (uint)*((byte *)GEN_TOP(((int)puVar7 - 0x22))),*((undefined4 *)GEN_TOP(((int)puVar7 - 0x2e))),uVar12)
      ;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      puVar7 = puVar7 + 0x10;
    } while ((*(uint *)(gen_frame + 0x0)) < 0x10);
    uVar5 = F_008c9540(piVar4 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP((param_1 + 0x19))) != '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x19))) == '\x02') {
      uVar10 = (uint)(uVar10 == 0);
    }
    if (uVar10 == 0) {
      uVar12 = 0x77;
    }
    else {
      if (uVar10 - 1 != 0) {
        return uVar10 - 1;
      }
      uVar12 = 0x78;
    }
    uVar5 = F_006c6500(uVar12);
  }
  return uVar5;
}

/* ref: FUN_00b8dce0 */
GEN_OWN GEN_FRAME uint F_00b8dce0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8dce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_006b8c00()));
  pvVar1 = ((undefined *)GEN_TOP(F_006d7020(pvVar1 GEN_EDX_ARG)));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00b8d990(pvVar1 GEN_EDX_ARG,param_1);
  }
  return uVar2;
}

/* ref: FUN_00b8dd00 */
GEN_OWN GEN_FRAME uint F_00b8dd00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8dd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_006b8c00()));
  pvVar1 = ((undefined *)GEN_TOP(F_006d7020(pvVar1 GEN_EDX_ARG)));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00b8db30(pvVar1 GEN_EDX_ARG,param_1);
  }
  return uVar2;
}

/* ref: FUN_00b8dd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8dd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fe20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fe1fc));
  return (uint)this;
}

/* ref: FUN_00b8dd50 */
GEN_OWN GEN_FRAME byte F_00b8dd50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb8dd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  
  bVar1 = F_00b8b500(param_2,&(*(int *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0xb)),&(*(uint *)(gen_frame + 0x7)));
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00b8b5d0(param_1,(*(int *)(gen_frame + 0x0)),(char)(*(uint *)(gen_frame + 0x7)));
  if ((((*(byte *)(gen_frame + 0xb)) & bVar1) != 0) != (bool)param_3) {
    if (param_3 == '\x01') {
      bVar1 = bVar1 | (*(byte *)(gen_frame + 0xb));
    }
    else {
      bVar1 = bVar1 & ~(*(byte *)(gen_frame + 0xb));
    }
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x7)) & 0xff)) {
    case 1: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20c8 + param_1))) = bVar1;
      return 1;
    case 2: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20e4 + param_1))) = bVar1;
      return 1;
    case 3: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20f6 + param_1))) = bVar1;
      return 1;
    case 4: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x2100 + param_1))) = bVar1;
      return 1;
    case 5: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x2106 + param_1))) = bVar1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b8de30 */
GEN_OWN GEN_FRAME byte F_00b8de30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb8de30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  
  bVar1 = F_00b8b500(param_2,&(*(undefined4 *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0xb)),((char *)(gen_frame + 0x7)));
  if (bVar1 == 0) {
    return 0;
  }
  if ((((char *)(gen_frame + 0x7))[0] == '\x05') &&
     (bVar1 = F_00b8b500(0x4e21,&(*(undefined4 *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0xb)),((char *)(gen_frame + 0x7))), bVar1 == 0)) {
    return 0;
  }
  bVar1 = F_00b8b5d0(param_1,(*(undefined4 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x7))[0]);
  return ((*(byte *)(gen_frame + 0xb)) & bVar1) != 0;
}

/* ref: FUN_00b8dea0 */
GEN_OWN GEN_FRAME byte F_00b8dea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb8dea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  
  bVar1 = F_00b8b500(param_2,&(*(int *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0xb)),&(*(uint *)(gen_frame + 0x7)));
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00b8b650(param_1,(*(int *)(gen_frame + 0x0)),(char)(*(uint *)(gen_frame + 0x7)));
  if ((((*(byte *)(gen_frame + 0xb)) & bVar1) != 0) != (bool)param_3) {
    if (param_3 == '\x01') {
      bVar1 = bVar1 | (*(byte *)(gen_frame + 0xb));
    }
    else {
      bVar1 = bVar1 & ~(*(byte *)(gen_frame + 0xb));
    }
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x7)) & 0xff)) {
    case 1: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x2088 + param_1))) = bVar1;
      return 1;
    case 2: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20a4 + param_1))) = bVar1;
      return 1;
    case 3: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20b6 + param_1))) = bVar1;
      return 1;
    case 4: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20c0 + param_1))) = bVar1;
      return 1;
    case 5: ;
      *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20c6 + param_1))) = bVar1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b8df80 */
GEN_OWN GEN_FRAME byte F_00b8df80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb8df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  byte bVar1;
  
  bVar1 = F_00b8b500(param_2,&(*(undefined4 *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0xb)),((undefined1 *)(gen_frame + 0x7)));
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00b8b650(param_1,(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x7))[0]);
  return ((*(byte *)(gen_frame + 0xb)) & bVar1) != 0;
}

/* ref: FUN_00b8dfd0 */
GEN_OWN GEN_FRAME byte F_00b8dfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb8dfd0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(uint *)&gen_args[0]) == 0) || (iVar3 = (*(uint *)&gen_args[0]) + 10000, 0xe < (*(uint *)&gen_args[0]))) {
    iVar3 = 10000;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8b500(iVar3,&(*(undefined4 *)(gen_frame + 0x0)),(int)&(*(uint *)&gen_args[0]) + 3,((undefined1 *)(gen_frame + 0x4)));
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00b8b650(uVar2,(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4))[0]);
  return ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) & bVar1) != 0;
}

/* ref: FUN_00b8e040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8e040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int in_ecx;
  
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fe4e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fe4d4));
  *((undefined4 *)GEN_TOP(((int)this + 0x9e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9e8))) = 0;
  in_ecx = (int)this + 0x9ec;
  iVar1 = 8;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00b967b0(((undefined *)GEN_TOP(((int)this + 0xcf8))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xe5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xce0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xce4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xce8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcf4))) = 0;
  return (uint)this;
}

/* ref: FUN_00b8e0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8e0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x5bc, 4, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  undefined1 * this_00;
  uint * this_01;
  undefined * PTR32 * ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5b8);
  (*(uint *)(gen_frame + 0x5b4)) = uVar1;
  if (REFG(undefined4, 0x133f0f8) == 0) {
    *(undefined * PTR32 *)&REFG(undefined, 0x133f0f4) = this;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    puVar3 = ((undefined4 *)(gen_frame + 0xac));
    iVar5 = 0xa0;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined1 *)(gen_frame + 0x3d4)) GEN_EDX_ARG,4);
    uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0xd04)));
    (*(undefined4 *)(gen_frame + 0x3d8)) = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG,4);
    uVar1 = (uint)*((ushort *)GEN_TOP(((int)this + 0xcfc)));
    (*(undefined4 *)(gen_frame + 0xd0)) = uVar8;
    uVar7 = 0x23;
    uVar8 = REFG(undefined4, 0x108cc50);
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar7,uVar1);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,uVar8);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0xb8)) = uVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc0)) = 1;
    F_0042b630(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1b8))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0xc8)) = uVar1;
    uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0xd08)));
    F_005a2710(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xd8)) = uVar8;
    F_005a2710(((undefined1 *)(gen_frame + 0x524)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x528)) = 3;
    F_005a2710(((undefined1 *)(gen_frame + 0x52c)) GEN_EDX_ARG,3);
    uVar10 = 0;
    (*(undefined4 *)(gen_frame + 0x530)) = 1;
    uVar7 = 0;
    uVar8 = 0xc5b;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar8,uVar7,uVar10);
    F_005a2710(((undefined1 *)(gen_frame + 0x51c)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x520)) = uVar1;
    uVar1 = F_0042a990((int)this + 0xd0c GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x534)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x538)) = uVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x53c)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x540)) = 2;
    this_00 = ((undefined1 *)(gen_frame + 0x544));
    iVar5 = (int)this + 0xd60;
    (*(int *)(gen_frame + 0x0)) = 2;
    do {
      uVar1 = F_0042a990(iVar5 GEN_EDX_ARG);
      F_005a2710(this_00 GEN_EDX_ARG,6);
      *(uint *)(this_00 + 4) = uVar1;
      iVar5 = iVar5 + 0x54;
      this_00 = this_00 + 8;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    uVar11 = 4;
    uVar9 = 0;
    uVar10 = 0;
    ppuVar6 = &REFG(undefined * PTR32, 0x133f0f0);
    puVar3 = ((undefined4 *)(gen_frame + 0xac));
    uVar7 = 0xa1;
    uVar8 = 0x14;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    REFG(undefined4, 0x133f0f8) = F_008668b0(pvVar4 GEN_EDX_ARG,uVar8,uVar7,puVar3,ppuVar6,uVar10,uVar9,uVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    this_01 = &(*(uint *)(gen_frame + 0x5b4));
    iVar5 = 0xa0;
    do {
      this_01 = this_01 - 2;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  return uVar1;
}

/* ref: FUN_00b8e380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int in_ecx;
  
  F_006fd460(this GEN_EDX_FWD,param_1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8a14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8a34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10f8a24));
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  in_ecx = (int)this + 0x220;
  iVar1 = 7;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *((undefined1 *)GEN_TOP(((int)this + 0x530))) = 0;
  return (uint)this;
}

/* ref: FUN_00b8e3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8e3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00cb4700(this_00 GEN_EDX_ARG,param_2,0);
    this_00[5] = param_2;
    this_00[7] = param_1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
    this_00[8] = param_3;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x26))) = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b8e450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar1,0);
    this_00[5] = uVar1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
    this_00[7] = param_1;
    this_00[8] = param_4;
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x26))) = 0;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      F_00cb4540(this_00 GEN_EDX_ARG,uVar1,*((undefined4 *)GEN_TOP((param_2 + uVar1 * 4))));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(this_00[7])) + 0x48))))(((int *)GEN_TOP(this_00[7])) GEN_EDX_ARG,this_00);
  *((undefined1 *)GEN_TOP(((int)this_00 + 0x26))) = 1;
  return (uint)this_00;
}

/* ref: FUN_00b8e4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xff);
  uVar1 = F_00b8e450(this GEN_EDX_ARG,uVar1,param_1,param_2,0xffffffff);
  *((uint *)GEN_TOP(((int)this + 0x1d8))) = uVar1;
  return uVar1;
}

/* ref: FUN_00b8e530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8e530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xfe);
  uVar1 = F_00b8e450(this GEN_EDX_ARG,uVar1,param_1,param_2,0xfffffffe);
  *((uint *)GEN_TOP(((int)this + 0x1dc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00b8e570 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b8e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8e570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined2 * puVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  if (param_1 == 0xfffffffe) {
    uVar6 = 0;
    if (param_3 != 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x2fc)));
      do {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + uVar6 * 4))) + 4)));
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar4[2] = puVar2[2];
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar6 < param_3);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_FWD,1);
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    }
    uVar6 = F_00b8c330(((undefined *)GEN_TOP(((int)this - 0x1d4))) GEN_EDX_ARG,2);
  }
  else {
    uVar6 = param_1;
    if (param_1 == 0xffffffff) {
      uVar6 = 0;
      if (param_3 != 0) {
        this_00 = ((undefined *)GEN_TOP(((int)this + 0x4c)));
        do {
          puVar1 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + uVar6 * 4))) + 4)));
          uVar7 = *puVar1;
          ((ushort *)(gen_frame + 0x20))[(int)(uVar6)] = (ushort)(byte)puVar1[1];
          F_0042e430(this_00 GEN_EDX_ARG,(uVar7 & 0xffffff) + (int)puVar1);
          uVar6 = uVar6 + 1;
          this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
        } while (uVar6 < param_3);
      }
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      }
      uVar7 = 0;
      uVar6 = 0;
      ((uint *)(gen_frame + 0x0))[0] = 0;
      ((uint *)(gen_frame + 0x0))[1] = 0;
      ((uint *)(gen_frame + 0x0))[2] = 0;
      ((uint *)(gen_frame + 0x0))[3] = 0;
      ((uint *)(gen_frame + 0x0))[4] = 0;
      ((uint *)(gen_frame + 0x0))[5] = 0;
      ((uint *)(gen_frame + 0x0))[6] = 0;
      ((uint *)(gen_frame + 0x0))[7] = 0;
      if (param_3 != 0) {
        puVar5 = ((undefined2 *)GEN_TOP(((int)this + 0x2ec)));
        do {
          uVar3 = 0;
          if (uVar7 != 0) {
            do {
              if (((uint *)(gen_frame + 0x0))[(int)(uVar3)] == (uint)((ushort *)(gen_frame + 0x20))[(int)(uVar6)]) {
                *puVar5 = (short)uVar3;
                goto LAB_00b8e64a;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar7);
          }
          ((uint *)(gen_frame + 0x0))[(int)(uVar7)] = (uint)((ushort *)(gen_frame + 0x20))[(int)(uVar6)];
          *puVar5 = (short)uVar7;
          uVar7 = uVar7 + 1;
LAB_00b8e64a: ;
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < param_3);
      }
      uVar6 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xfe);
      uVar6 = F_00b8e450(((undefined *)GEN_TOP(((int)this - 0x1d4))) GEN_EDX_ARG,uVar6,((uint *)(gen_frame + 0x0)),uVar7,0xfffffffe);
      *((uint *)GEN_TOP(((int)this + 8))) = uVar6;
      return uVar6;
    }
  }
  return uVar6;
}

/* ref: FUN_00b8e710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8e710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b8e380(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8cb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10f8ca0));
  *((undefined4 *)GEN_TOP(((int)this + 0x538))) = 0;
  return (uint)this;
}

/* ref: FUN_00b8e740 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b8e740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8e740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 == 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*param_2 + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x368)));
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x364)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x364))) = 0;
    }
    F_00b8c330(((undefined *)GEN_TOP(((int)this - 0x1d4))) GEN_EDX_ARG,1);
  }
  return;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf145 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b8e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8e7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  ushort uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  *(undefined2 *)(this + 0x536) = 0;
  do {
    uVar1 = *(ushort *)(this + 0x536);
    if (*(int *)(this + (uint)uVar1 * 4 + 0x53c) == 0) break;
    ((int *)(gen_frame + 0x0))[(int)(uVar1)] = *(int *)(this + (uint)uVar1 * 4 + 0x53c);
    *(ushort *)(this + 0x536) = uVar1 + 1;
  } while ((ushort)(uVar1 + 1) != 8);
  uVar1 = *(ushort *)(this + 0x536);
  *(undefined2 *)(this + 0x534) = 0;
  if (uVar1 != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xff);
    uVar2 = F_00b8e450(this GEN_EDX_ARG,uVar2,((int *)(gen_frame + 0x0)),(uint)uVar1,0xffffffff);
    *(uint *)(this + 0x1d8) = uVar2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b8e850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8e850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b8e380(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8f34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10f8f20));
  return (uint)this;
}

/* ref: FUN_00b8e880 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b8e880(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8e880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar2 == 7) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,0x7532);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf152 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8e8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8e8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar2 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffffff);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    return uVar1;
  }
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b150(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0,0);
  iVar3 = uVar1 + 2;
  F_00a01c40(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8280)),param_2);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f828c)),1);
  if (param_3 == 0) {
    F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
    F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
    F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    uVar1 = F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
    return uVar1;
  }
  F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_3);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3,"__index");
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(param_1 GEN_EDX_ARG,param_3);
  return uVar1;
}

/* ref: FUN_00b8ea40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b8e380(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f91b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10f91a0));
  *((undefined4 *)GEN_TOP(((int)this + 0x534))) = 0;
  F_0042b630((int)this + 0x550 GEN_EDX_ARG);
  F_00ab0230(0xc5f,(int)this + 0x550);
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf145 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b8ea90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8ea90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xff);
  uVar1 = F_00b8e450(this GEN_EDX_ARG,uVar1,this + 0x538,6,0xffffffff);
  *(uint *)(this + 0x1d8) = uVar1;
  return 1;
}

/* ref: FUN_00b8eb00 */
GEN_OWN GEN_FRAME uint F_00b8eb00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8eb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar2 = ((int *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1)));
  if (*piVar2 != 0) {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar3 = 0x29;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    uVar1 = F_00763050(uVar1 GEN_EDX_ARG,uVar3);
    F_008d2930(uVar1 GEN_EDX_ARG,0x2711,0);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1);
  F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf112 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8eb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8eb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if ((REFG(undefined1, 0x14b4ec0) & 0x80) != 0) {
    uVar1 = 0xee35;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf128 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8eba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8eba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((REFG(undefined1, 0x14b4ec0) & 0x80) != 0) {
    iVar2 = 0xee35;
  }
  if (iVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(F_00ab3110(6)));
    return (piVar1[1] - *piVar1) + iVar2;
  }
  return 0;
}

/* ref: FUN_00b8ebe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8ebe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8ebe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b8e380(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x534))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x538))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x590))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x594))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10fe7dc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10fe7c8));
  *((undefined4 *)GEN_TOP(((int)this + 0x554))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x558))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x55c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x560))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x566))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x564))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x568))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x56c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x570))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x574))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x57a))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x578))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x57c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x580))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x584))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x588))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x58e))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x58c))) = 0;
  return (uint)this;
}

/* ref: FUN_00b8eca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8eca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8eca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10fe7dc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = (*(undefined * PTR32 (*)[3])REFP(0x10fe7c8));
  REFG(undefined4, 0x133f100) = 0;
  REFG(undefined4, 0x133f104) = 0;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x534)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x534))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x538)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x538))) = 0;
  }
  uVar2 = F_00b8c210(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b8ed00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8ed00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8ed00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*param_2 + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 0x368))) = *puVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x36c))) = puVar1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x370))) = puVar1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x374))) = puVar1[3];
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x360)));
    *((undefined4 *)GEN_TOP(((int)this + 0x378))) = puVar1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x37c))) = puVar1[5];
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x360))) = 0;
    }
    uVar3 = F_006bccd0(((undefined *)GEN_TOP(((int)this - 0x1d4))) GEN_EDX_ARG);
  }
  else {
    uVar3 = param_1 - 1;
    if (uVar3 == 0) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x364)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x364))) = 0;
      }
      uVar3 = F_00b8c330(((undefined *)GEN_TOP(((int)this - 0x1d4))) GEN_EDX_ARG,1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf145 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b8edb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8edb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xff);
  uVar1 = F_00b8e450(this GEN_EDX_ARG,uVar1,this + 0x53c,6,0xffffffff);
  *(uint *)(this + 0x1d8) = uVar1;
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf146 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8edf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb8edf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((short)param_3 == 3) {
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x590))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x554))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x558))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x55c))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x560))) = 0;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x566))) = 0;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x564))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x568))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x56c))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x570))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x574))) = 0;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x578))) = 0;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x57a))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x57c))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x580))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x584))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x588))) = 0;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x58c))) = 0;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x58e))) = 0;
    if (4 < param_5) {
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x590))) = *param_4;
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x568))) = param_4[1];
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x56c))) = param_4[2];
      iVar1 = param_4[3];
      *((int *)GEN_TOP(((int)param_1 + 0x57c))) = iVar1;
      iVar2 = param_4[4];
      *((int *)GEN_TOP(((int)param_1 + 0x580))) = iVar2;
      *((int *)GEN_TOP(((int)param_1 + 0x554))) = iVar1 + *((int *)GEN_TOP(((int)param_1 + 0x568)));
      *((int *)GEN_TOP(((int)param_1 + 0x558))) = iVar2 + *((int *)GEN_TOP(((int)param_1 + 0x56c)));
    }
  }
  uVar3 = F_00b8c330(param_1 GEN_EDX_FWD,1);
  return uVar3;
}

/* ref: FUN_00b8eed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8eed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8eed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x550, 0, 4);
  ushort uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined * PTR32 * ppuVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x548)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54c);
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  REFG(void * PTR32, 0x133f100) = this;
  pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar4 = F_006d7020(pvVar3 GEN_EDX_ARG);
  puVar5 = ((uint *)(gen_frame + 0x2a0));
  iVar8 = 0x54;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  F_0042b630(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
  piVar6 = ((int *)GEN_TOP(F_006d7020(pvVar3 GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1b8))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)));
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_005a2710(((uint *)(gen_frame + 0x2a0)) GEN_EDX_ARG,6);
  ((uint *)(gen_frame + 0x2a0))[1] = uVar7;
  uVar7 = (uint)*((ushort *)GEN_TOP((uVar4 + 0xcfc)));
  uVar11 = 0x23;
  uVar9 = REFG(undefined4, 0x108cc50);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
  uVar7 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar11,uVar7);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar7,uVar9);
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0x2a8)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x2ac)) = uVar7;
  uVar9 = *((undefined4 *)GEN_TOP((uVar4 + 0xd04)));
  F_005a2710(((undefined1 *)(gen_frame + 0x538)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x53c)) = uVar9;
  F_0042b630(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x24c)) GEN_EDX_ARG);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x568)));
  if (iVar8 != 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x2bc))[0] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x2e4))[0] = 0;
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0x150)));
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG,6);
    ((uint *)(gen_frame + 0x384))[0] = uVar4;
    F_005a2710(((undefined1 *)(gen_frame + 0x308)) GEN_EDX_ARG,4);
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x568)));
    ((uint *)(gen_frame + 0x30c))[0] = 0xf01f;
    F_005a2710(((undefined1 *)(gen_frame + 0x358)) GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x35c))[0] = uVar4;
  }
  uVar4 = (uint)(iVar8 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x56c))) != 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x2b8)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x2bc))[(int)(uVar4 * 2)] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x2e0)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x2e4))[(int)(uVar4 * 2)] = 0;
    F_00ab9240(0x18f5f,1,((undefined1 *)(gen_frame + 0x1f8)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x380)) + uVar4 * 8 GEN_EDX_ARG,6);
    ((uint *)(gen_frame + 0x384))[(int)(uVar4 * 2)] = uVar7;
    F_005a2710(((undefined1 *)(gen_frame + 0x308)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x56c)));
    ((uint *)(gen_frame + 0x30c))[(int)(uVar4 * 2)] = 0xf020;
    F_005a2710(((undefined1 *)(gen_frame + 0x358)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x35c))[(int)(uVar4 * 2)] = uVar7;
    uVar4 = uVar4 + 1;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x574))) != 0) && (*((short *)GEN_TOP(((int)this + 0x578))) != 0)) {
    F_005a2710(((undefined1 *)(gen_frame + 0x2b8)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x574)));
    ((undefined4 *)(gen_frame + 0x2bc))[(int)(uVar4 * 2)] = 0x81;
    F_005a2710(((undefined1 *)(gen_frame + 0x2e0)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0x574)));
    ((undefined4 *)(gen_frame + 0x2e4))[(int)(uVar4 * 2)] = uVar9;
    F_00ab9240(0x18f5f,uVar11,((undefined1 *)(gen_frame + 0x24c)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x24c)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x380)) + uVar4 * 8 GEN_EDX_ARG,6);
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x574)));
    ((uint *)(gen_frame + 0x384))[(int)(uVar4 * 2)] = uVar7;
    uVar7 = F_00ab24a0(uVar9);
    uVar7 = F_00ab65a0(*((undefined4 *)GEN_TOP(((int)this + 0x574))),uVar7);
    F_005a2710(((undefined1 *)(gen_frame + 0x308)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar1 = *((ushort *)GEN_TOP(((int)this + 0x578)));
    ((uint *)(gen_frame + 0x30c))[(int)(uVar4 * 2)] = uVar7;
    F_005a2710(((undefined1 *)(gen_frame + 0x358)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x35c))[(int)(uVar4 * 2)] = (uint)uVar1;
    uVar4 = uVar4 + 1;
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x2b0)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x2b4)) = uVar4;
  F_0042b630(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x57c)));
  if (iVar8 != 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x458)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x45c))[0] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x478)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x47c))[0] = 0;
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0xfc)));
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x498)) GEN_EDX_ARG,6);
    ((uint *)(gen_frame + 0x49c))[0] = uVar4;
    F_005a2710(((undefined1 *)(gen_frame + 0x4b8)) GEN_EDX_ARG,4);
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x57c)));
    ((uint *)(gen_frame + 0x4bc))[0] = 0xf01f;
    F_005a2710(((undefined1 *)(gen_frame + 0x4d8)) GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x4dc))[0] = uVar4;
  }
  uVar4 = (uint)(iVar8 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x580))) != 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x458)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x45c))[(int)(uVar4 * 2)] = 2;
    F_005a2710(((undefined1 *)(gen_frame + 0x478)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x47c))[(int)(uVar4 * 2)] = 0;
    F_00ab9240(0x18f5f,1,((undefined1 *)(gen_frame + 0x54)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x498)) + uVar4 * 8 GEN_EDX_ARG,6);
    ((uint *)(gen_frame + 0x49c))[(int)(uVar4 * 2)] = uVar7;
    F_005a2710(((undefined1 *)(gen_frame + 0x4b8)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x580)));
    ((uint *)(gen_frame + 0x4bc))[(int)(uVar4 * 2)] = 0xf020;
    F_005a2710(((undefined1 *)(gen_frame + 0x4d8)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x4dc))[(int)(uVar4 * 2)] = uVar7;
    uVar4 = uVar4 + 1;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x588))) != 0) && (*((short *)GEN_TOP(((int)this + 0x58c))) != 0)) {
    F_005a2710(((undefined1 *)(gen_frame + 0x458)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x588)));
    ((undefined4 *)(gen_frame + 0x45c))[(int)(uVar4 * 2)] = 0x81;
    F_005a2710(((undefined1 *)(gen_frame + 0x478)) + uVar4 * 8 GEN_EDX_ARG,4);
    uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0x588)));
    ((undefined4 *)(gen_frame + 0x47c))[(int)(uVar4 * 2)] = uVar9;
    F_00ab9240(0x18f5f,uVar11,((undefined1 *)(gen_frame + 0x1a4)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x498)) + uVar4 * 8 GEN_EDX_ARG,6);
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x588)));
    ((uint *)(gen_frame + 0x49c))[(int)(uVar4 * 2)] = uVar7;
    uVar7 = F_00ab24a0(uVar9);
    uVar7 = F_00ab65a0(*((undefined4 *)GEN_TOP(((int)this + 0x588))),uVar7);
    F_005a2710(((undefined1 *)(gen_frame + 0x4b8)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x4bc))[(int)(uVar4 * 2)] = uVar7;
    uVar1 = *((ushort *)GEN_TOP(((int)this + 0x58c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x4d8)) + uVar4 * 8 GEN_EDX_ARG,4);
    ((uint *)(gen_frame + 0x4dc))[(int)(uVar4 * 2)] = (uint)uVar1;
    uVar4 = uVar4 + 1;
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x508)) GEN_EDX_ARG,4);
  uVar14 = 4;
  uVar13 = 0;
  uVar12 = 0;
  ppuVar10 = &REFG(undefined * PTR32, 0x133f0fc);
  puVar5 = ((uint *)(gen_frame + 0x2a0));
  (*(uint *)(gen_frame + 0x50c)) = uVar4;
  uVar11 = 0x55;
  uVar9 = 0x15;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
  REFG(undefined4, 0x133f104) = F_008668b0(pvVar3 GEN_EDX_ARG,uVar9,uVar11,puVar5,ppuVar10,uVar12,uVar13,uVar14);
  F_0042c880(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x24c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1f8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  puVar5 = &(*(uint *)(gen_frame + 0x548));
  iVar8 = 0x54;
  do {
    puVar5 = puVar5 - 2;
    uVar4 = F_005a2670(puVar5 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  return uVar4;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  int iVar5;
  
  if ((byte)(*(undefined4 *)&gen_args[3]) == 0) {
    uVar2 = F_006f98c0((undefined *)this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),0);
    return uVar2;
  }
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    uVar2 = F_006f98c0((undefined *)this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    return uVar2;
  }
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  if ((iVar1 == 1) && (1 < (byte)(*(undefined4 *)&gen_args[3]))) {
    iVar5 = (*(int * PTR32 *)&gen_args[2])[1];
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(iVar1));
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0x645;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
    F_0046a6b0(this_00 GEN_EDX_ARG,uVar4,iVar5);
    iVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
    if (this[0x594] != (undefined1)0x0) {
      this[0x594] = (undefined1)0x0;
      F_006d8180((undefined *)this GEN_EDX_ARG);
      F_006d82c0((undefined *)this GEN_EDX_ARG);
      iVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
    }
  }
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(iVar1));
  uVar2 = F_006f99e0(this GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),1);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf42 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b8f630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8f630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if ((param_1 == 0) && (this[0x594] != (undefined1)0x1)) {
    this[0x594] = (undefined1)0x1;
    F_006d8180((undefined *)this GEN_EDX_FWD);
    F_006d82c0((undefined *)this GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf83 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8f660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8f660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  bool bVar1;
  byte bVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar1 = false;
  if (REFG(undefined4, 0x133f100) == this) {
    if (REFG(int, 0x133f104) == 0) {
      REFG(undefined4, 0x133f100) = ((undefined *)GEN_TOP(0x0));
      REFG(int, 0x133f104) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,REFG(int, 0x133f104),0);
      bVar1 = true;
    }
  }
  bVar2 = F_006e6ba0(*(undefined4 *)(this + 4) GEN_EDX_ARG,this,0);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 1) && (!bVar1)) {
    uVar4 = F_006f4000(this GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: FUN_00b8f6e0 */
GEN_OWN GEN_FRAME uint F_00b8f6e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8f6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1)));
  if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
    F_00b8eed0(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b8f740 */
GEN_OWN GEN_FRAME uint F_00b8f740(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8f740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  bool bVar6;
  
  F_00a02210(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32));
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = uVar2 & 0xffffff00;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar5 = ((int *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar4)));
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    uVar4 = 0;
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,2);
    if (bVar3 != 0) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
    }
    bVar6 = (*((uint *)GEN_TOP((iVar1 + 0x590))) & uVar4) != 0;
    ((byte *)(gen_frame + 0x0))[0x20] = bVar6;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)));
  F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf112 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8f7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb8f7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP((in_ecx + 0x594))) == '\x01') {
    uVar1 = 0xee39;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf128 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8f7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8f7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (this[0x594] == (undefined1)0x1) {
    iVar2 = 0xee39;
  }
  if (iVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(F_00ab3110(6)));
    return (piVar1[1] - *piVar1) + iVar2;
  }
  return 0;
}

/* ref: FUN_00b8f830 */
GEN_OWN GEN_FRAME uint F_00b8f830(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb8f830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  undefined4 * this;
  uint uVar1;
  
  this = ((undefined4 *)GEN_TOP(F_00406b90(0x10c,0,0)));
  if (this != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = param_1 & 0xffff | 0x1d0000;
    F_006e44c0(this GEN_EDX_ARG,uVar1);
    this[0x3e] = uVar1;
    this[0x3f] = 0;
    this[0x40] = 0;
    this[0x41] = 0;
    this[0x42] = 0;
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10f9424));
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b8f890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8f890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  undefined4 * this_00;
  
  bVar1 = F_006d8320((undefined *)this GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    bVar1 = F_006d8130((undefined *)this GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      F_006bccf0(this GEN_EDX_ARG);
      if (*(int *)(this + 0x104) == 0) {
        uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x14a);
        *(uint *)(this + 0x104) = uVar2;
      }
      this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
      if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
        this_00 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        F_00cb4700(this_00 GEN_EDX_ARG,1,0);
        this_00[5] = 1;
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10f9694));
        this_00[6] = this;
        this_00[7] = ((code *)REFP(0xb8c700));
      }
      *(undefined4 * PTR32 *)(this + 0x108) = this_00;
      F_00cb4540(this_00 GEN_EDX_ARG,0,*(undefined4 *)(this + 8));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x104) + 0x48))))
                        (*(int * PTR32 *)(this + 0x104) GEN_EDX_ARG,*(undefined4 *)(this + 0x108));
    }
  }
  return uVar2;
}

/* ref: FUN_00b8f940 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b8f940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*((undefined4 *)GEN_TOP(((int)this + 0xfc))));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf171 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b8f960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8f960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b97be0(this GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8f970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8f970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x60) == 0) {
    if (*(short *)(this + 0x54) == 2) {
      if (this[0x9a4] == (undefined1)0x0) {
        F_00b8cea0(this GEN_EDX_FWD);
      }
    }
    else if (((*(short *)(this + 0x54) == 3) && (*(int *)(this + 0x984) == 1)) &&
            (*(int *)(this + 0x328) != 0)) {
      F_00b8d1d0(this GEN_EDX_ARG,8,500,0);
      uVar1 = F_006fd360((undefined *)this GEN_EDX_ARG,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = F_006fd360((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b8f9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8f9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8f9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x30,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00cb4700(this_00 GEN_EDX_ARG,param_2,0);
    this_00[5] = param_2;
    this_00[7] = param_1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
    this_00[8] = param_3;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b8fa50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb8fa50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x30,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar1,0);
    this_00[5] = uVar1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
    this_00[7] = param_1;
    this_00[8] = param_4;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
  }
  *(undefined2 *)(this_00 + 10) = (undefined2)param_3;
  this_00[9] = param_2;
  F_00b96ba0(this_00 GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_00b8fae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8fae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb8fae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x54 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x54)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    puVar2 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
    puVar1 = puVar2;
    uVar3 = param_2;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      F_0042b630(puVar1 GEN_EDX_ARG);
      puVar1 = puVar1 + 0x15;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x94c))) = puVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x97c))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x980))) = param_2;
  uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x98);
  uVar3 = F_00b8fa50(this GEN_EDX_ARG,uVar3,param_1,param_2,0xfffffffd);
  *((uint *)GEN_TOP(((int)this + 0x948))) = uVar3;
  return uVar3;
}

/* ref: FUN_00b8fb90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b8fb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8fb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 8) {
    F_00b8d220(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x330))),*((undefined4 *)GEN_TOP(((int)this + 0x328))),
                 REFG(float, 0x1087ef8));
    if (*((int *)GEN_TOP(((int)this + 0x32c))) != 0) {
      F_00b8d220(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x330))),*((int *)GEN_TOP(((int)this + 0x32c))),REFG(float, 0x1087ef8))
      ;
    }
  }
  return 0;
}

/* ref: FUN_00b8fbf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b8fbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb8fbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return *((byte *)GEN_TOP(((int)this + 0x1de)));
  case 1: ;
    return *((byte *)GEN_TOP(((int)this + 0x1df)));
  case 2: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e0)));
  case 3: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e1)));
  case 4: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e2)));
  case 5: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e3)));
  case 6: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e4)));
  case 7: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e5)));
  case 8: ;
    return *((byte *)GEN_TOP(((int)this + 0x1e6)));
  case 9: ;
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x1e7)));
  }
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf162 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b8fc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb8fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  __time64_t _Var6;
  
  uVar4 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = param_2 & 7;
    uVar4 = param_2 >> 3 & 0xffffff01;
    *((char *)GEN_TOP((*(int *)(this + 0x9a8) + uVar5 * 0x18))) = (char)uVar4;
    if (this[0x9a3] == (undefined1)0x0) {
      pvVar3 = ((undefined *)GEN_TOP(F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[uVar5],0)));
      uVar4 = 0;
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        uVar4 = F_005f51d0(pvVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*(int *)(this + 0x9a8) + uVar5 * 0x18))),0);
        return uVar4;
      }
    }
    break;
  case 1: ;
    uVar5 = param_2 & 7;
    iVar1 = *(int *)(this + 0x9a8) + uVar5 * 0x18;
    *((uint *)GEN_TOP((iVar1 + 4))) = param_2 >> 3 & 7;
    *((uint *)GEN_TOP((iVar1 + 8))) = param_2 >> 6 & 7;
    *((byte *)GEN_TOP((iVar1 + 0x14))) = (byte)(param_2 >> 0x1f);
    *((uint *)GEN_TOP((iVar1 + 0xc))) = param_2 >> 9 & 0x3fffff;
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    uVar4 = (uint)_Var6;
    *((uint *)GEN_TOP((iVar1 + 0x10))) = uVar4;
    if (this[0x9a3] == (undefined1)0x0) {
      pvVar3 = ((undefined *)GEN_TOP(F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[uVar5],0)));
      uVar4 = uVar5 * 3;
      iVar1 = *(int *)(this + 0x9a8) + uVar5 * 0x18;
      if ((pvVar3 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((iVar1 + 8))) != 7)) {
        _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
        iVar2 = *((int *)GEN_TOP((iVar1 + 0x10)));
        if (*((int *)GEN_TOP((iVar1 + 4))) != 7) {
          F_005e3760(pvVar3 GEN_EDX_ARG,*((int *)GEN_TOP((iVar1 + 4))));
          F_005eb180(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 4))),0);
        }
        F_005e3760(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))));
        uVar4 = F_005eb180(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))),
                             (*((int *)GEN_TOP((iVar1 + 0xc))) + ((int)_Var6 - iVar2)) * 1000);
      }
    }
    break;
  case 2: ;
  case 3: ;
    break;
  default: ;
    goto switchD_00b8fca3_default;
  }
switchD_00b8fca3_default: ;
  return uVar4;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf168 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b8fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8fe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  byte * pbVar2;
  __time64_t _Var3;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(this + 0x9ac) - *(int *)(this + 0x9a8) >> 0x1f;
  local_c = 0;
  if ((*(int *)(this + 0x9ac) - *(int *)(this + 0x9a8)) / 0x18 + iVar1 != iVar1) {
    local_8 = 0;
    do {
      if (*((char *)GEN_TOP((local_8 + 0x14 + *(int *)(this + 0x9a8)))) == '\0') {
        this_00 = ((undefined *)GEN_TOP(F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[local_c],0)));
        pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x9a8) + local_8)));
        if ((this_00 != ((undefined *)GEN_TOP(0x0))) &&
           (F_005f51d0(this_00 GEN_EDX_ARG,(uint)*pbVar2,0), *(int *)(pbVar2 + 8) != 7)) {
          _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
          iVar1 = *(int *)(pbVar2 + 0x10);
          if (*(int *)(pbVar2 + 4) != 7) {
            F_005e3760(this_00 GEN_EDX_ARG,*(int *)(pbVar2 + 4));
            F_005eb180(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar2 + 4),0);
          }
          F_005e3760(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar2 + 8));
          F_005eb180(this_00 GEN_EDX_ARG,*(undefined4 *)(pbVar2 + 8),
                       (*(int *)(pbVar2 + 0xc) + ((int)_Var3 - iVar1)) * 1000);
        }
      }
      local_8 = local_8 + 0x18;
      local_c = local_c + 1;
    } while (local_c < (uint)((*(int *)(this + 0x9ac) - *(int *)(this + 0x9a8)) / 0x18));
  }
  return 0;
}

/* ref: FUN_00b8ff20 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b8ff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb8ff20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined1 * puVar1;
  int iVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  puVar1 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x2f8)));
  F_00ab93a0(0x1280,(uint)(*((char *)GEN_TOP(((int)this + 0x9ac))) == '\0'),0,((undefined1 *)(gen_frame + 0x0)));
  F_0042ccf0(puVar1 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)(puVar1 + 4) = 6;
  puVar1[0x5d] = 0;
  *(int *)(puVar1 + 100) = (int)*((char *)GEN_TOP(((int)this + 0x1de)));
  *(int *)(puVar1 + 0x60) = (int)*((char *)GEN_TOP(((int)this + 0x1df)));
  *puVar1 = 1;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2f8)));
  F_00ab93a0(0x1280,(uint)(*((char *)GEN_TOP(((int)this + 0x9ac))) == '\x01'),1,((undefined1 *)(gen_frame + 0x0)));
  F_0042ccf0(((undefined *)GEN_TOP((iVar2 + 0x148))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x144))) = 6;
  *((undefined1 *)GEN_TOP((iVar2 + 0x19d))) = 0;
  *((int *)GEN_TOP((iVar2 + 0x1a4))) = (int)*((char *)GEN_TOP(((int)this + 0x1de)));
  *((int *)GEN_TOP((iVar2 + 0x1a0))) = (int)*((char *)GEN_TOP(((int)this + 0x1e0)));
  *((undefined1 *)GEN_TOP((iVar2 + 0x140))) = 1;
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00b90020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b90020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fe4e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fe4d4));
  if (REFG(int, 0x133f0f8) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(int, 0x133f0f8),0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x9e4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x9e4))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x9e8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x9e8))) = 0;
  }
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xe08))) GEN_EDX_ARG);
  pvVar5 = ((undefined *)GEN_TOP(((int)this + 0xe08)));
  iVar4 = 1;
  do {
    pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 - 0x54)));
    F_0042c880(pvVar5 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd0c))) GEN_EDX_ARG);
  pvVar5 = ((undefined *)GEN_TOP(((int)this + 0xce0)));
  iVar4 = 8;
  do {
    pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 - 0x54)));
    F_0042c880(pvVar5 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  uVar3 = F_00b8cc40(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf159 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b900f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb900f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1d8) - 0x2711U < 0xe) {
    iVar2 = *(int *)(this + 0x1d8) - 10000;
  }
  else {
    iVar2 = 0;
  }
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xfa);
  uVar1 = F_00b8fa50(this GEN_EDX_ARG,uVar1,iVar2,1,0);
  *(uint *)(this + 0x9e4) = uVar1;
  return 0;
}

/* ref: FUN_00b90140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb90140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * this;
  undefined4 * puVar7;
  
  if (param_2 == 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*param_4 + 4)));
    iVar3 = *((int *)GEN_TOP((param_1 - 0x138)));
    puVar6 = puVar1;
    puVar7 = ((undefined4 *)GEN_TOP((param_1 + 0x698)));
    for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    if (iVar3 - 0x2711U < 0xe) {
      iVar3 = iVar3 - 10000;
    }
    else {
      iVar3 = 0;
    }
    F_00b8b980(((undefined *)GEN_TOP((param_1 + 0x9e8))) GEN_EDX_FWD,iVar3,param_1 + 4,puVar1);
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x98);
    uVar2 = F_00b8fa50(((undefined *)GEN_TOP((param_1 - 0x310))) GEN_EDX_ARG,uVar2,0x514,9,1);
    *((uint *)GEN_TOP((param_1 + 0x6d8))) = uVar2;
  }
  else {
    uVar2 = param_2 - 1;
    if (uVar2 == 0) {
      uVar5 = 0;
      if (param_5 != 0) {
        this = ((undefined *)GEN_TOP((param_3 * 0x54 - 0x1a3b4 + param_1)));
        do {
          uVar2 = F_0042e430(this GEN_EDX_ARG,(**((uint * PTR32 *)GEN_TOP((param_4[uVar5] + 4))) & 0xffffff) +
                                    (int)*((uint * PTR32 *)GEN_TOP((param_4[uVar5] + 4))));
          uVar5 = uVar5 + 1;
          this = ((undefined *)GEN_TOP(((int)this + 0x54)));
        } while (uVar5 < param_5);
      }
      if (param_6 == '\x01') {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0x310))) + 0x2b8))))(param_1 - 0x310);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf165 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb90240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  *(undefined4 *)(this + 0xe5c) = param_1;
  uVar1 = F_006e90a0(this GEN_EDX_FWD,3000,0);
  *(uint *)(this + 0xce4) = uVar1;
  uVar1 = F_006e90a0(this GEN_EDX_ARG,6000,0);
  *(uint *)(this + 0xce8) = uVar1;
  if (REFG(int, 0x133f0f8) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(int, 0x133f0f8),0);
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf146 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b90300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  if (REFG(int, 0x133f0f8) == 0) {
    uVar1 = F_00b8e0d0(this GEN_EDX_FWD);
    return uVar1;
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(int, 0x133f0f8),0);
  return uVar1;
}

/* ref: FUN_00b90340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((char *)GEN_TOP(((int)this + 0x1de))));
  if ('\0' < *((char *)GEN_TOP(((int)this + 0x1de)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 700))))(this GEN_EDX_FWD,local_8);
    return uVar1;
  }
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x290))) GEN_EDX_ARG,&REFG(undefined, 0x10f7943));
  return uVar1;
}

/* ref: FUN_00b90380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb90380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fea64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fea54));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b903c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b903c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb903c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fed3c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10fed2c));
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf151 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b903f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb903f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b97d30(this GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf146 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b90400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb90400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00b8c330(this GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_00b90410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb90410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint uVar1;
  
  uVar1 = F_00b8e450(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1,(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf146 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb90430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x11b);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  uVar1 = F_00b8e450(this GEN_EDX_ARG,uVar1,&(*(uint *)&gen_args[1]),1,0);
  *(uint *)(this + 0x538) = uVar1;
  return uVar1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf116 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b90470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb90470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (uVar2 == 7) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,0x7532);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b904b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb904b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if (uVar2 == 7) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,0x7532);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf151 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b904f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb904f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b97de0(this GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf151 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b90500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b97e90(this GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf152 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb90510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar2 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffffff);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    return uVar1;
  }
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b150(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0,0);
  iVar3 = uVar1 + 2;
  F_00a01c40(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f82d0)),param_2);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f82dc)),1);
  F_00a01cc0(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f82ec)),((code *)REFP(0xb8eb00)));
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8304)),0x47);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8310)),0);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8324)),1);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8338)),2);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f834c)),3);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8360)),4);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8380)),5);
  if (param_3 == 0) {
    F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
    F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
    F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    uVar1 = F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
    return uVar1;
  }
  F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_3);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3,"__index");
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(param_1 GEN_EDX_ARG,param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf147 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pGVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pGVar1 = *(undefined * PTR32 *)(this + 8);
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x101);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pGVar1;
  uVar2 = F_00b8e450(this GEN_EDX_ARG,uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x0)),1,0);
  *(uint *)(this + 0x534) = uVar2;
  return uVar2;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf151 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b90740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b97f40(this GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf152 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb90750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar2 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffffff);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    return uVar1;
  }
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9b150(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0,0);
  iVar3 = uVar1 + 2;
  F_00a01c40(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f83d8)),param_2);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f83e4)),1);
  F_00a01cc0(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f83f4)),((code *)REFP(0xb8f6e0)));
  F_00a01cc0(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8408)),((code *)REFP(0xb8f740)));
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8420)),0);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8434)),1);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8450)),2);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8464)),3);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f847c)),4);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f8498)),5);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f84a8)),1);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f84c4)),4);
  F_00a01c80(param_1 GEN_EDX_ARG,iVar3,((char *)REFP(0x10f84e4)),8);
  if (param_3 == 0) {
    F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
    F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
    F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    uVar1 = F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
    return uVar1;
  }
  F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_2);
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),param_3);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3,"__index");
  F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar3);
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(param_1 GEN_EDX_ARG,param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf147 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b90970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pGVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pGVar1 = *(undefined * PTR32 *)(this + 8);
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x100);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pGVar1;
  uVar2 = F_00b8e450(this GEN_EDX_ARG,uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x0)),1,0);
  *(uint *)(this + 0x534) = uVar2;
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b909b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb909b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf13 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b909e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb909e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf124 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b90a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined * pIVar4;
  undefined4 uVar5;
  
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(this + 0x100) != 0)) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
    uVar5 = 10;
    if (bVar1 != 0) {
      uVar3 = *(undefined4 *)(this + 0x100);
      pIVar4 = this;
      uVar2 = F_006b8c00();
      F_006e6390(uVar2 GEN_EDX_ARG,uVar3,pIVar4,(char)uVar5);
      F_006bd200(this GEN_EDX_ARG,10,1);
      return;
    }
    uVar3 = *(undefined4 *)(this + 0x100);
    pIVar4 = this;
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006deae0(this_00 GEN_EDX_ARG,uVar3,pIVar4,uVar5);
    F_006bd200(this GEN_EDX_ARG,10,0);
  }
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf116 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b90a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb90a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b90ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x1d8);
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x8a);
  uVar2 = F_00b8fa50(this GEN_EDX_ARG,uVar2,uVar1,1,0xffffffff);
  *(uint *)(this + 0x940) = uVar2;
  F_006bccf0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf37 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b90b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb90b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * pIVar2;
  int iVar3;
  
  iVar3 = 0;
  pIVar2 = this + 0x958;
  do {
    if (*(int *)pIVar2 == param_1) {
      if (iVar3 < 8) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x29c))))(this GEN_EDX_FWD,iVar3);
        if ((byte)uVar1 == 0) {
          *(undefined4 *)(this + iVar3 * 4 + 0x958) = 0;
        }
        return (byte)uVar1;
      }
      if (iVar3 == 8) {
        F_00b8d220(this GEN_EDX_ARG,*(undefined4 *)(this + 0x330),*(undefined4 *)(this + 0x328),REFG(float, 0x1087ef8));
        if (*(int *)(this + 0x32c) != 0) {
          F_00b8d220(this GEN_EDX_ARG,*(undefined4 *)(this + 0x330),*(int *)(this + 0x32c),REFG(float, 0x1087ef8));
        }
      }
      *(undefined4 *)(this + iVar3 * 4 + 0x958) = 0;
      return 0;
    }
    iVar3 = iVar3 + 1;
    pIVar2 = pIVar2 + 4;
  } while (iVar3 < 9);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf161 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b90bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined * pIVar4;
  ushort * puVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  uVar3 = 0;
  if ((*(int *)(this + 0x954) != 0) && ((*(uint *)(gen_frame + 0x0)) = 0, this[0x99e] != (undefined1)0x0))
  {
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    do {
      puVar5 = ((ushort *)GEN_TOP((*(int *)(this + 0x954) + (*(int *)(gen_frame + 0x4)))));
      uVar1 = puVar5[3];
      (*(byte *)(gen_frame + 0xf)) = F_00b8fbf0(this GEN_EDX_FWD,(uint)(byte)uVar1);
      if (*((char *)GEN_TOP(((int)puVar5 + 7))) == -2) {
LAB_00b90c9e: ;
        bVar2 = *((byte *)GEN_TOP(((int)puVar5 + 5)));
        if (bVar2 != 0xff) {
          if (bVar2 == 0xfe) {
            (*(byte *)(gen_frame + 0xf)) = 0;
          }
          else {
            (*(byte *)(gen_frame + 0xf)) = ((*(byte *)(gen_frame + 0xf)) & '\x01' << GEN_SHC(bVar2, bVar2)) != 0;
          }
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        uVar3 = (uint)*puVar5;
        if (*((char *)GEN_TOP(((int)puVar5 + 9))) == '\0') {
          if (uVar3 < 7) {
            pIVar4 = this + uVar3 * 0x54 + 0x6f4;
          }
          else {
            pIVar4 = ((undefined *)GEN_TOP(((uVar3 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
          }
        }
        else {
          pIVar4 = this + uVar3 * 0x54 + 0x400;
        }
        if ((char)puVar5[2] == '\0') {
          puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0x8)))));
          *(undefined4 *)(puVar6 + 4) = 2;
          F_0042ccf0(puVar6 + 8 GEN_EDX_ARG,pIVar4);
          *(uint *)(puVar6 + 0x60) = (uint)(*(byte *)(gen_frame + 0xf));
          *puVar6 = 1;
          puVar6[0x5c] = 0;
        }
        else if ((char)puVar5[2] == '\x01') {
          uVar1 = puVar5[1];
          puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0x8)))));
          *(undefined4 *)(puVar6 + 4) = 1;
          F_0042ccf0(puVar6 + 8 GEN_EDX_ARG,pIVar4);
          *(uint *)(puVar6 + 0x60) = (uint)(*(byte *)(gen_frame + 0xf));
          *(uint *)(puVar6 + 100) = (uint)uVar1;
          *puVar6 = 1;
          puVar6[0x5c] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          goto LAB_00b90c68;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      }
      else {
        bVar2 = (*(byte *)(gen_frame + 0xf));
        if ((byte)puVar5[4] != (byte)uVar1) {
          bVar2 = F_00b8fbf0(this GEN_EDX_ARG,(uint)(byte)puVar5[4]);
        }
        if (*((byte *)GEN_TOP(((int)puVar5 + 7))) != 0xff) {
          bVar2 = bVar2 & (byte)(1 << GEN_SHC(*((byte *)GEN_TOP(((int)puVar5 + 7))), *((byte *)GEN_TOP(((int)puVar5 + 7)))));
        }
        if (bVar2 != 0) goto LAB_00b90c9e;
        uVar3 = F_00b8aca0(this GEN_EDX_ARG,6);
        puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0x8)))));
        *(undefined4 *)(puVar6 + 4) = 0;
        F_0042ccf0(puVar6 + 8 GEN_EDX_ARG,uVar3);
        puVar6[0x5c] = 0;
        *puVar6 = 1;
      }
LAB_00b90c68: ;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0xc;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x140;
      uVar3 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    } while ((int)uVar3 < (int)(uint)(byte)this[0x99e]);
  }
  return uVar3;
}

/* ref: FUN_00b90d80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b90d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  int local_8;
  
  if (*((char *)GEN_TOP(((int)this + 0x9a3))) != '\x01') {
    pcVar2 = ((char *)GEN_TOP(((int)this + 0x99f)));
    iVar3 = (int)this + 0x364;
    local_8 = 2;
    do {
      if (-1 < *pcVar2) {
        bVar1 = F_00b8fbf0(this GEN_EDX_FWD,(int)*pcVar2);
        F_00b8c7b0(iVar3 GEN_EDX_ARG,bVar1);
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 0x28;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}

/* ref: FUN_00b90de0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b90de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb90de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  undefined * pvVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  
  if ((*((int *)GEN_TOP(((int)this + 0x3f4))) != 0) && (*((char *)GEN_TOP(((int)this + 0x9a3))) != '\x01')) {
    cVar1 = *((char *)GEN_TOP(((int)this + 0x3fd)));
    (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),cVar1);
    if (cVar1 == '\0') {
      iVar7 = 0;
      if (*((char *)GEN_TOP(((int)this + 0x3f8))) != '\0') {
        puVar6 = ((uint *)GEN_TOP(((int)this + 0x3d4)));
        do {
          uVar5 = F_005f3270(6,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3f4))) + iVar7 * 8))),0);
          puVar6[-8] = uVar5;
          uVar5 = F_005f3270(6,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3f4))) + 4 + iVar7 * 8))),0);
          *puVar6 = uVar5;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar7 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x3f8))));
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3fd))) = 1;
    }
    bVar3 = F_00b8fbf0(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x3f9))));
    if ((cVar1 == '\0') || (*((byte *)GEN_TOP(((int)this + 0x3fb))) != bVar3)) {
      iVar7 = 0;
      bVar9 = false;
      if (*((char *)GEN_TOP(((int)this + 0x3f8))) != '\0') {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)this + 0x3b4)));
        do {
          pvVar2 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0))));
          if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
            bVar4 = (byte)(1 << GEN_SHC((byte)iVar7, (unsigned int)(uintptr_t)iVar7));
            bVar8 = (bVar3 & bVar4) != 0;
            if ((cVar1 != '\x01') || (((*((byte *)GEN_TOP(((int)this + 0x3fb))) & bVar4) != 0) != bVar8)) {
              if (bVar8) {
                if (((byte)*((undefined4 *)GEN_TOP(((int)pvVar2 + 0xb0))) & 7) != 2) {
                  F_005f51d0(pvVar2 GEN_EDX_ARG,0,0);
                  if (cVar1 == '\x01') {
                    F_005eb180(pvVar2 GEN_EDX_ARG,0,0);
                  }
                  bVar9 = true;
                }
              }
              else if (((byte)*((undefined4 *)GEN_TOP(((int)pvVar2 + 0xb0))) & 7) != 1) {
                F_005f51d0(pvVar2 GEN_EDX_ARG,1,0);
              }
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x3f8))));
      }
      *((byte *)GEN_TOP(((int)this + 0x3fb))) = bVar3;
      if (bVar9) {
        REFG(undefined1, 0x14c0cc0) = 1;
      }
    }
    bVar3 = F_00b8fbf0(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x3fa))));
    if ((cVar1 == '\0') || (*((byte *)GEN_TOP(((int)this + 0x3fc))) != bVar3)) {
      iVar7 = 0;
      if (*((char *)GEN_TOP(((int)this + 0x3f8))) != '\0') {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)this + 0x3d4)));
        do {
          pvVar2 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0))));
          if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
            bVar4 = (byte)(1 << GEN_SHC((byte)iVar7, (unsigned int)(uintptr_t)iVar7));
            bVar9 = (bVar3 & bVar4) != 0;
            if ((cVar1 != '\x01') || (((*((byte *)GEN_TOP(((int)this + 0x3fc))) & bVar4) != 0) != bVar9)) {
              if (bVar9) {
                if (((byte)*((undefined4 *)GEN_TOP(((int)pvVar2 + 0xb0))) & 7) != 1) {
                  uVar10 = 1;
LAB_00b90ff8: ;
                  F_005f51d0(pvVar2 GEN_EDX_ARG,uVar10,(*(undefined4 *)(gen_frame + 0x6)));
                }
              }
              else if (((byte)*((undefined4 *)GEN_TOP(((int)pvVar2 + 0xb0))) & 7) != 2) {
                uVar10 = 0;
                goto LAB_00b90ff8;
              }
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x3f8))));
      }
      *((byte *)GEN_TOP(((int)this + 0x3fc))) = bVar3;
    }
  }
  return;
}

/* ref: FUN_00b91020 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b91020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb91020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  int iVar3;
  byte * pbVar4;
  byte bVar5;
  
  if ((*((int *)GEN_TOP(((int)this + 0x950))) != 0) && (bVar2 = false, *((char *)GEN_TOP(((int)this + 0x98d))) != '\0')) {
    iVar3 = 0;
    pbVar4 = ((byte *)GEN_TOP(((int)this + 0x98e)));
    do {
      bVar5 = 0;
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x950))) + 4 + iVar3))))) {
      case 0: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1de)));
        break;
      case 1: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1df)));
        break;
      case 2: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e0)));
        break;
      case 3: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e1)));
        break;
      case 4: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e2)));
        break;
      case 5: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e3)));
        break;
      case 6: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e4)));
        break;
      case 7: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e5)));
        break;
      case 8: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e6)));
        break;
      case 9: ;
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x1e7)));
      }
      cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x950))) + 5 + iVar3)));
      if (cVar1 != '\0') {
        bVar5 = (bVar5 & '\x01' << GEN_SHC(cVar1 - 1U, cVar1 - 1U)) != 0;
      }
      if ((*((char *)GEN_TOP(((int)this + 0x9a2))) == '\0') || (*pbVar4 != bVar5)) {
        *pbVar4 = bVar5;
        bVar2 = true;
      }
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + 8;
    } while ((int)(pbVar4 + (-0x98e - (int)this)) < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x98d))));
    if (bVar2) {
      REFG(undefined4, 0x14a458f) = 1;
      *((undefined1 *)GEN_TOP(((int)this + 0x9a2))) = 1;
    }
  }
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf97 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b91150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb91150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * pIVar2;
  undefined * pIVar3;
  int local_8;
  
  this[0x9a3] = (undefined1)0x0;
  pIVar2 = this + 0x99f;
  pIVar3 = this + 0x38a;
  local_8 = 2;
  do {
    if (-1 < (char)*pIVar2) {
      bVar1 = F_00b8fbf0(this GEN_EDX_FWD,(int)(char)*pIVar2);
      if (*(int *)(pIVar3 - 6) != 0) {
        *pIVar3 = (undefined1)0x0;
        F_00b8c7b0(pIVar3 - 0x26 GEN_EDX_ARG,bVar1);
      }
    }
    pIVar2 = pIVar2 + 1;
    pIVar3 = pIVar3 + 0x28;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  if (*(int *)(this + 0x3f4) != 0) {
    this[0x3fd] = (undefined1)0x0;
    F_00b90de0(this GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a0))))(this GEN_EDX_ARG);
  F_006fa7a0((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b911e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb911e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  undefined4 local_8;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x284)));
  this[0x9a1] = (undefined1)0x1;
  (*pcVar1)(this);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2b4))))(this GEN_EDX_FWD);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x1de]);
  if ('\0' < (char)this[0x1de]) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 700))))(this GEN_EDX_ARG,local_8);
    return uVar2;
  }
  uVar2 = F_0042e430(this + 0x290 GEN_EDX_ARG,&REFG(undefined, 0x10f7943));
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf161 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b91240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb91240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 local_8;
  
  F_00b90bb0((undefined *)this GEN_EDX_FWD);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x1de]);
  if ('\0' < (char)this[0x1de]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 700))))(this GEN_EDX_ARG,local_8);
    return uVar1;
  }
  uVar1 = F_0042e430(this + 0x290 GEN_EDX_ARG,&REFG(undefined, 0x10f7943));
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf155 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b91290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb91290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x9a1] == (undefined1)0x1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x284))))(this GEN_EDX_FWD);
  }
  F_00b90d80(this GEN_EDX_ARG);
  F_00b90de0(this GEN_EDX_ARG);
  F_00b91020(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00b912c0 */
GEN_OWN GEN_FRAME uint F_00b912c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb912c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
  puVar2 = REFG(undefined * PTR32, 0x133eff0);
  puVar1 = REFG(undefined * PTR32, 0x1323788);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),REFG(undefined * PTR32, 0x133eff0));
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar4 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
    F_00b9b150(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f7ffc)),puVar2);
    F_00a01c80(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8008)),1);
    F_00a01cc0(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8018)),((code *)REFP(0xb8cf30)));
    F_00a01cc0(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8028)),((code *)REFP(0xb8cfc0)));
    F_00a01cc0(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8038)),((code *)REFP(0xb8d060)));
    F_00a01cc0(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8048)),((code *)REFP(0xb8d130)));
    F_00a01c80(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f805c)),2);
    if (puVar1 == ((undefined *)GEN_TOP(0x0))) {
      F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
      F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
      F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
    }
    else {
      F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
      F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
      F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar1);
      F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5,"__index");
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
      F_00a01ad0(param_1 GEN_EDX_ARG,puVar1);
    }
  }
  else {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  }
  F_00754330(param_2 GEN_EDX_ARG,REFG(undefined * PTR32, 0x133eff4),REFG(undefined * PTR32, 0x133eff0),0);
  return 1;
}

/* ref: FUN_00b914b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b914b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb914b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a4))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,uVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2b0))))
              (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xf8))),uVar1,REFG(undefined * PTR32, 0x133eff0));
    uVar3 = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a8))))(this GEN_EDX_ARG);
    uVar1 = F_00754440(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_ARG,uVar2,uVar1,uVar3);
    return uVar1;
  }
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,REFG(undefined * PTR32, 0x133eff0));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2ac))))(this GEN_EDX_ARG);
  if ((char)uVar1 == '\x01') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x27c))))(this GEN_EDX_ARG);
    if ((char)uVar1 == '\x01') {
      uVar1 = F_006bccd0(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  else {
    uVar1 = F_00a51200(0x4c,4,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_00b91560 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b91560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb91560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 == 8) {
    F_00b914b0(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00b91580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b91580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb91580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8ca80(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x1101234));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x1101224));
  *((undefined4 *)GEN_TOP(((int)this + 0x9a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b0))) = 0;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf159 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b915c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb915c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined * this_00;
  int iVar1;
  undefined1 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  
  ((uint *)(gen_frame + 0x4))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x10f8110);
  this[0x99e] = (undefined1)0x8;
  *(undefined4 *)(this + 0x98e) = 0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x10f8170);
  this[0x98d] = (undefined1)0x4;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 900) = &REFG(undefined, 0x10f8190);
  *(undefined2 *)(this + 0x388) = 7;
  this[0x38a] = (undefined1)0x0;
  this[0x99f] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x3ac) = &REFG(undefined, 0x10f81c8);
  *(undefined2 *)(this + 0x3b0) = 3;
  this[0x3b2] = (undefined1)0x0;
  this_00 = this + 0x9a8;
  this[0x9a0] = (undefined1)0x3;
  iVar1 = *(int *)(this + 0x9ac);
  if (*(int *)this_00 != iVar1) {
    uVar3 = F_00b97ff0(iVar1,iVar1,*(int *)this_00,(*(undefined4 *)(gen_frame + 0x0)));
    *(uint *)(this + 0x9ac) = uVar3;
  }
  F_00b99200(this_00 GEN_EDX_ARG,7);
  puVar2 = *(undefined1 * PTR32 *)this_00;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 7;
  *(undefined4 *)(puVar2 + 8) = 7;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x14] = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x2c))) = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x34))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x40))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x44))) = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4c))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x50))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x58))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x5c))) = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 100))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x68))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x70))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x74))) = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x78))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7c))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x80))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x84))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x88))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x8c))) = 0;
  iVar1 = *(int *)this_00;
  *((undefined1 *)GEN_TOP((iVar1 + 0x90))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x94))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x98))) = 7;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa0))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0xa4))) = 0;
  ((uint *)(gen_frame + 0x4))[0] = 0x2f7eb7;
  ((uint *)(gen_frame + 0x4))[1] = 0x301000;
  ((uint *)(gen_frame + 0x4))[2] = 0x305b73;
  uVar3 = 0;
  do {
    pvVar4 = ((undefined *)GEN_TOP(F_005f3270(6,((uint *)(gen_frame + 0x4))[(int)(uVar3)],0)));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_005eb180(pvVar4 GEN_EDX_ARG,0,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  uVar3 = 0;
  do {
    pvVar4 = ((undefined *)GEN_TOP(F_005f3270(6,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 (*)[6])REFP(0x10f80f4)) + uVar3))),0)));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_005eb180(pvVar4 GEN_EDX_ARG,0,0);
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x1c);
  return 1;
}

/* ref: FUN_00b917a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b917a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb917a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x254))))(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,REFG(undefined * PTR32, 0x133eff8));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x25c))))(this GEN_EDX_ARG);
    if ((char)uVar1 == '\x01') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24c))))(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  else {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,uVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x260))))
              (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xf8))),uVar1,REFG(undefined * PTR32, 0x133eff8));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x264))))(this GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      uVar4 = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 600))))(this GEN_EDX_ARG);
      uVar1 = F_00754440(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_ARG,uVar2,uVar1,uVar4);
      return uVar1;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)this + 600))))(uVar1);
    F_0042ce40(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10f8244)),uVar1);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG,uVar1);
    F_006e8f60(this GEN_EDX_ARG,0,0xffffffff);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar3;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf36 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b918b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb918b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((undefined *)this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
  if (bVar1 != 0) {
    return 1;
  }
  this_00 = *(undefined * PTR32 *)(this + 0xf8);
  uVar2 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this_00 + 8))));
  uVar3 = F_0042a990(this + 0x118 GEN_EDX_ARG);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this_00 + 8))),uVar3);
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)this_00 + 8))),0xffffd8ee);
  uVar3 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)this_00 + 8))),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1c4)));
    if ((*(int * PTR32 *)&gen_args[2]) != *(int * PTR32 *)(this + 0x1c4)) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[2]) + 0x10 GEN_EDX_ARG);
        F_00a01c80(this_00 GEN_EDX_ARG,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      } while ((*(int * PTR32 *)&gen_args[2]) != ((int *)GEN_TOP(*(int *)(this + 0x1c4))));
    }
  }
  F_00b9a760(*((undefined4 *)GEN_TOP(((int)this_00 + 8))),0xfffffffe);
  uVar4 = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x254))))(this GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 600))))(this GEN_EDX_ARG);
  F_00754440(this + 0xfc GEN_EDX_ARG,uVar3,uVar2,uVar4);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b919a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb919a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  if (param_2 == '\x01') {
    F_0042ccf0(param_4 GEN_EDX_FWD,param_3);
  }
  else {
    F_0042e430(param_4 GEN_EDX_ARG,&REFG(undefined, 0x10f7933));
  }
  uVar1 = 0;
  piVar2 = param_1 + 0x100;
  do {
    if (param_4 == piVar2) {
      if ((int)uVar1 < 8) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28c))))(param_1 GEN_EDX_ARG,uVar1,param_4);
        return uVar1;
      }
      if (uVar1 == 8) {
        uVar1 = F_00b914b0(param_1 GEN_EDX_ARG);
      }
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x15;
  } while ((int)uVar1 < 9);
  return uVar1;
}

/* ref: FUN_00b91a10 */
GEN_OWN GEN_FRAME uint F_00b91a10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb91a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xffff | 0x80030000;
  if (param_2 < 0x2712) {
    if (param_2 == 0x2711) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        F_00b8e040(puVar1 GEN_EDX_ARG,uVar3,0x2711);
        *puVar1 = (*(undefined * PTR32 (*)[177])REFP(0x10ff014));
        puVar1[0xc4] = (*(undefined * PTR32 (*)[3])REFP(0x10ff004));
        *(undefined1 *)(puVar1 + 0x398) = 0;
        return (uint)puVar1;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 1: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d2d0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 2: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d300(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 3: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d330(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 4: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d360(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 5: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d390(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 6: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d3c0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 7: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d420(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 8: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d3f0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 9: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9b0,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d450(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 10: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d480(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xb: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d4e0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xc: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d510(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xd: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d4b0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xe: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d540(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xf: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9b8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b91580(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x10: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d6d0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
      }
    }
  }
  else if (param_2 < 0x4e22) {
    if (param_2 == 0x4e21) {
switchD_00b91f23_caseD_4e24: ;
      puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x9a8,0,0)));
      if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00b8ca80(puVar1 GEN_EDX_ARG,uVar3,param_2);
      *puVar1 = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
      puVar1[0xc4] = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
      return (uint)puVar1;
    }
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0x2712: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98800(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2713: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b90380(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2714: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98860(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2715: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe60,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b988c0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2716: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe60,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98910(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2717: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe60,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98960(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2718: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe60,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b989b0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2719: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe60,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b903c0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271a: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98a00(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271b: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98a60(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271c: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98ac0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271d: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98b20(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271e: ;
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe68,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b98b80(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
    }
  }
  else if (param_2 < 0x7532) {
    if (param_2 == 0x7531) {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b8d7e0(pvVar2 GEN_EDX_ARG,uVar3,0x7531);
        return uVar3;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x4e22: ;
      case 0x4e25: ;
      case 0x4e29: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d750(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x4e23: ;
      case 0x4e26: ;
      case 0x4e2a: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d780(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x4e24: ;
      case 0x4e28: ;
        goto switchD_00b91f23_caseD_4e24;
      case 0x4e27: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d7b0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
      }
    }
  }
  else if (param_2 < 0x9c44) {
    if (param_2 < 0x9c41) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x7532: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d810(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7533: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d840(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7534: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d870(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7535: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d8a0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7536: ;
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_00b8d8d0(pvVar2 GEN_EDX_ARG,uVar3,param_2);
          return uVar3;
        }
      }
    }
    else {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9b0,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00b8d900(pvVar2 GEN_EDX_ARG,uVar3,param_2);
        return uVar3;
      }
    }
  }
  else if ((param_2 == 65000) && (pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x9a8,0,0))), pvVar2 != ((undefined *)GEN_TOP(0x0))))
  {
    uVar3 = F_00b8dd20(pvVar2 GEN_EDX_ARG,uVar3,65000);
    return uVar3;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf158 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b921f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb921f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  undefined1 IVar1;
  undefined1 IVar2;
  undefined1 IVar3;
  undefined1 * puVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined1 * puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  IVar1 = this[0x1e1];
  IVar2 = this[0x1de];
  IVar3 = this[0x1e2];
  uVar5 = F_0042a990((0xdb1 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c) GEN_EDX_FWD);
  F_0042e430(param_2 GEN_EDX_ARG,uVar5);
  F_00487650(param_3 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),*param_3,param_3[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x400;
  (*(uint *)(gen_frame + 0x0)) = 1;
  uVar5 = 0;
  do {
    if (((*(uint *)(gen_frame + 0x0)) & (int)(char)IVar2) == 0) {
LAB_00b922ba: ;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) << 1;
    }
    else if (((param_1 != 200) && (param_1 != 0xc9)) ||
            (((int)(char)IVar1 != uVar5 && ((int)(char)IVar3 != uVar5)))) {
      uVar9 = REFG(undefined4, 0x108cc50);
      uVar6 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar6,uVar9);
      F_0049f6d0(param_3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      goto LAB_00b922ba;
    }
    uVar5 = uVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54;
  } while (uVar5 < 4);
  uVar9 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0042a990((0xdb3 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar5,uVar9);
  puVar7 = ((undefined1 *)GEN_TOP(param_3[1]));
  if (((undefined1 *)(gen_frame + 0x8)) < puVar7) {
    puVar4 = ((undefined1 *)GEN_TOP(*param_3));
    if (((undefined1 *)(gen_frame + 0x8)) < puVar4) goto LAB_00b92338;
    if (puVar7 == ((undefined1 *)GEN_TOP(param_3[2]))) {
      F_00488ca0(param_3 GEN_EDX_ARG,1);
    }
    this_00 = ((undefined *)GEN_TOP(param_3[1]));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00b92356;
    puVar7 = ((undefined1 *)GEN_TOP(((((int)((undefined1 *)(gen_frame + 0x8)) - (int)puVar4) / 0x54) * 0x54 + *param_3)));
  }
  else {
LAB_00b92338: ;
    if (puVar7 == ((undefined1 *)GEN_TOP(param_3[2]))) {
      F_00488ca0(param_3 GEN_EDX_ARG,1);
    }
    this_00 = ((undefined *)GEN_TOP(param_3[1]));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00b92356;
    puVar7 = ((undefined1 *)(gen_frame + 0x8));
  }
  F_0042cbc0(this_00 GEN_EDX_ARG,puVar7);
LAB_00b92356: ;
  param_3[1] = param_3[1] + 0x54;
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_006bccf0(this GEN_EDX_FWD);
  uVar1 = F_00b917a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleIfrit::vf30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb92390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  undefined * in_ecx;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  if (param_2 < 7) {
    in_ecx = this + param_2 * 0x54 + 0x6f4;
  }
  else {
    in_ecx = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar2,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x1c)),&(*(int * PTR32 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb92470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  undefined * in_ecx;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  if (param_2 < 7) {
    in_ecx = this + param_2 * 0x54 + 0x6f4;
  }
  else {
    in_ecx = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar2,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x1c)),&(*(int * PTR32 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_00b92550 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb92550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  uint uVar1;
  int * piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  uVar1 = F_00463610(0,*((undefined4 *)GEN_TOP(((int)this + 0x9e0))),3);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar1,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x1c)),&(*(int * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x18)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf176 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x57b - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c) GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar3);
  F_00b92550(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0x70a - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b926b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb926b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0x772 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b926d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb926d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0x7d4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b926f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb926f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0x836 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf176 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x8a5 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c) GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar3);
  F_00b92550(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf176 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b92780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x8ff - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c) GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar3);
  F_00b92550(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b927f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb927f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,this + 0x550,3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0xc1e - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,this + 0x454,3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf176 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b92550(this GEN_EDX_FWD,(0xce6 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: FUN_00b92870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb92870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x78, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  int * piVar6;
  float * pfVar7;
  float * pfVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  float fVar13;
  int iVar14;
  undefined1 uVar15;
  undefined * pvVar16;
  undefined1 uVar17;
  
  uVar4 = *((ushort *)GEN_TOP(((int)this + param_1 * 2 + 0x4c0)));
  (*(float *)(gen_frame + 0x50)) = gen_bits2f(param_1 * 0x54 + 0x220 + (int)this);
  (*(int * PTR32 *)(gen_frame + 0x58)) = ((int *)GEN_TOP(((int)this + (uint)uVar4 * 0xc + 0x4d0)));
  uVar5 = F_006b8c00();
  (*(int *)(gen_frame + 0x5c)) = uVar5 + 0x100;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar6 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  iVar9 = (*(int *)(gen_frame + 0x5c));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar6;
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x58)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00710cb0((*(int *)(gen_frame + 0x5c)) GEN_EDX_ARG,this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x50))),&(*(int * PTR32 *)(gen_frame + 0x0)),piVar6,(undefined1)param_2,
               (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x58)) + 5))),0x3d,0,0x279,0,0,0,0);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xb8))))(piVar6 GEN_EDX_ARG);
  if ((char)uVar5 == '\0') goto LAB_00b92abe;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = REFG(void * PTR32, 0x1379694);
  iVar14 = (*(int * PTR32 *)(gen_frame + 0x58))[1];
  pfVar7 = ((float *)GEN_TOP(0x0));
  (*(float * PTR32 *)(gen_frame + 0x60)) = ((float *)GEN_TOP(0x0));
  (*(float *)(gen_frame + 0x50)) = 0.0;
  (*(char *)(gen_frame + 0x67)) = '\0';
  if ((char)iVar14 == '\x01') {
    (*(char *)(gen_frame + 0x67)) = '\x01';
  }
  else if ((char)iVar14 == '\x02') {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(char *)(gen_frame + 0x67)) = '\x01';
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    pfVar7 = ((float *)GEN_TOP(F_00a5feb0(piVar6 GEN_EDX_ARG)));
    pfVar8 = ((float *)GEN_TOP(F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)*pfVar8 - (float10)*pfVar7);
    fVar13 = pfVar8[1];
    fVar1 = pfVar7[1];
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar13 - (float10)fVar1);
    fVar2 = pfVar8[2];
    fVar3 = pfVar7[2];
    (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)*pfVar8 - (float10)*pfVar7);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)fVar13 - (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar13 = F_00aae7a0(&(*(float *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x4c)) = fVar13;
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(piVar6[0x2c]);
    fVar10 = ((float10)GEN_TOD(gen_bits2f(piVar6[0x2c])));
    fVar11 = (float10)fVar13;
    if (fVar10 < fVar11) {
      (*(float *)(gen_frame + 0x48)) = (float)(fVar11 - fVar10);
      fVar13 = ((float)GEN_TOF((((float10)(float)(fVar11 - fVar10) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                      (float10)*(double *)&REFG(undefined, 0x1080228))));
      (*(float *)(gen_frame + 0x48)) = fVar13;
      if (!((float10)*(float *)&REFG(undefined, 0x10f7888) < (float10)fVar13)) goto LAB_00b92a1b;
LAB_00b92a4b: ;
      fVar13 = F_00a5ffa0(piVar6,(*(undefined * PTR32 *)(gen_frame + 0x54)));
      (*(float *)(gen_frame + 0x50)) = fVar13;
      pfVar7 = &(*(float *)(gen_frame + 0x50));
      iVar9 = (*(int *)(gen_frame + 0x5c));
    }
    else {
LAB_00b92a1b: ;
      pfVar7 = (*(float * PTR32 *)(gen_frame + 0x60));
      iVar9 = (*(int *)(gen_frame + 0x5c));
      if (fVar11 < fVar10) {
        (*(float *)(gen_frame + 0x48)) = (float)(fVar10 - fVar11);
        fVar13 = ((float)GEN_TOF((((float10)(float)(fVar10 - fVar11) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                        (float10)*(double *)&REFG(undefined, 0x1080228))));
        (*(float *)(gen_frame + 0x48)) = fVar13;
        if ((float10)*(float *)&REFG(undefined, 0x10f7888) < (float10)fVar13) goto LAB_00b92a4b;
      }
    }
  }
  iVar14 = *(*(int * PTR32 *)(gen_frame + 0x58));
  if (iVar14 == 0) {
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      iVar14 = 0x30f;
      goto LAB_00b92a94;
    }
  }
  else {
LAB_00b92a94: ;
    uVar17 = 0;
    uVar15 = 1;
    uVar5 = F_00a5f290(piVar6 GEN_EDX_ARG);
    F_006d4be0(uVar5,iVar14,pfVar7,uVar15,uVar17);
  }
  if ((*(char *)(gen_frame + 0x67)) != '\0') {
    uVar15 = 1;
    pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x54));
    uVar5 = F_00a5f290(piVar6 GEN_EDX_ARG);
    F_006da750(iVar9 GEN_EDX_ARG,uVar5,pvVar16,uVar15);
  }
LAB_00b92abe: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar12 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar12;
}

/* ref: FUN_00b92af0 */
GEN_OWN GEN_FRAME uint F_00b92af0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb92af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x28, 8);
  undefined * this;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  puVar4 = ((undefined4 *)GEN_TOP(F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar3)));
  this = ((undefined *)GEN_TOP(*puVar4));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
    bVar2 = 0;
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,2);
    if (bVar1 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
    }
    bVar1 = F_00a01f80(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    if (bVar1 != 0) {
      bVar2 = F_00a01e10(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(byte *)(gen_frame + 0x23)) = bVar2;
    }
    F_00b92870(this GEN_EDX_ARG,uVar3,(uint)(bVar2 == 0));
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf148 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb92ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(this + 0x534);
  if ((int)uVar1 < (int)(*(ushort *)(this + 0x536) - 1)) {
    uVar1 = F_00b92870(this GEN_EDX_FWD,uVar1,1);
    *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
    return uVar1;
  }
  if (uVar1 == *(ushort *)(this + 0x536) - 1) {
    uVar1 = F_00b92870(this GEN_EDX_ARG,uVar1,0);
    *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf53 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb92bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(ushort *)(this + 0x534);
  if ((int)uVar1 < (int)(*(ushort *)(this + 0x536) - 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (uVar1 != *(ushort *)(this + 0x536) - 1) {
      uVar1 = F_006f3a50(this GEN_EDX_FWD,0,0);
      return uVar1;
    }
  }
  uVar1 = F_00b92870(this GEN_EDX_ARG,uVar1,uVar2);
  *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
  return uVar1;
}

/* ref: FUN_00b92c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b92c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb92c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x14c5908) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14c5908) = *(uint *)&REFG(undefined, 0x14c5908) | 1;
      REFG(undefined4 * PTR32, 0x14c58f0) = ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      REFG(undefined4 * PTR32, 0x14c58f0) = puVar1;
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      *REFG(undefined4 * PTR32, 0x14c58f0) = &REFG(undefined4 * PTR32, 0x14c58f0);
      *(undefined4 *)&REFG(undefined, 0x14c58f4) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c58f8) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c58fc) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c5900) = 0;
      F_00c47de6(((code *)REFP(0x107c900)));
    }
    puVar1 = &REFG(undefined4 * PTR32, 0x14c58f0);
  }
  uVar2 = F_006c5ef0(param_1,puVar1);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf154 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b92cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb92cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (((char)param_1 != '\x01') && ((char)param_2 == '\x01')) {
    F_00b92c30(this GEN_EDX_FWD,0x655,0);
  }
  uVar1 = F_006c4ee0(this GEN_EDX_ARG,(char)param_1,(char)param_2);
  return uVar1;
}

/* ref: FUN_00b92d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b92d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb92d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xe5c)));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 - 0x514U < 9) {
      uVar2 = F_00b92550(this GEN_EDX_FWD,iVar1 * 0x54 - 0x1a0a4 + (int)this,3000);
      return uVar2;
    }
    if (iVar1 < 7) {
      uVar2 = F_00b92550(this GEN_EDX_ARG,iVar1 * 0x54 + 0x6f4 + (int)this,3000);
      return uVar2;
    }
    uVar2 = F_00b92550(this GEN_EDX_ARG,(iVar1 - *((int *)GEN_TOP(((int)this + 0x97c)))) * 0x54 +
                              *((int *)GEN_TOP(((int)this + 0x94c))),3000);
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf37 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b92db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb92db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined * pIVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  pIVar2 = this + 0xce0;
  while (*(int *)pIVar2 != param_1) {
    uVar4 = uVar4 + 1;
    pIVar2 = pIVar2 + 4;
    if (5 < uVar4) {
      bVar1 = F_00b90b00((undefined *)this GEN_EDX_FWD,param_1);
      return bVar1;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    if ((REFG(undefined4, 0x14b4ee5) & 1) == 0) {
      uVar3 = F_006e90a0(this GEN_EDX_ARG,3000,0);
      *(uint *)(this + 0xcf0) = uVar3;
    }
    F_00b8e0d0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c0))))(this GEN_EDX_ARG);
    *(undefined4 *)(this + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 1: ;
    F_00b92d10(this GEN_EDX_ARG);
    *(undefined4 *)(this + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 2: ;
    F_006bd080(this GEN_EDX_ARG,0,0,0);
    *(undefined4 *)(this + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 3: ;
    F_00b92c30(this GEN_EDX_ARG,0x5fa,0);
    if ((REFG(undefined4, 0x14b4ee5) & 8) == 0) {
      uVar3 = F_006e90a0(this GEN_EDX_ARG,5000,0);
      *(uint *)(this + 0xcf4) = uVar3;
      *(undefined4 *)(this + uVar4 * 4 + 0xce0) = 0;
      return 0;
    }
    goto switchD_00b92de6_default;
  case 4: ;
    uVar5 = 0x48;
    break;
  case 5: ;
    uVar5 = 0x4b;
    break;
  default: ;
    goto switchD_00b92de6_default;
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar5,0,0);
switchD_00b92de6_default: ;
  *(undefined4 *)(this + uVar4 * 4 + 0xce0) = 0;
  return 0;
}

/* ref: FUN_00b92ef0 */
GEN_OWN GEN_FRAME uint F_00b92ef0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb92ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)param_1 + 8))));
  puVar2 = REFG(undefined * PTR32, 0x133eff8);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),REFG(undefined * PTR32, 0x133eff8));
  F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
  uVar4 = F_00b9a940(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
    F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
    F_00b9b150(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8204)),puVar2);
    F_00a01c80(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8210)),1);
    F_00a01cc0(param_1 GEN_EDX_ARG,iVar5,((char *)REFP(0x10f8220)),((code *)REFP(0xb92af0)));
    if (puVar1 == ((undefined *)GEN_TOP(0x0))) {
      F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
      F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
      F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
    }
    else {
      F_00b9bc00(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar2);
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe,"__index");
      F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
      F_00b9ae60(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),puVar1);
      F_00b9b0d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
      F_00b9b290(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5,"__index");
      F_00b9a910(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),iVar5);
      F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xffffd8ee);
      F_00a01ad0(param_1 GEN_EDX_ARG,puVar1);
    }
  }
  else {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0xfffffffe);
  }
  F_00754330(param_2 GEN_EDX_ARG,REFG(undefined * PTR32, 0x133effc),REFG(undefined * PTR32, 0x133eff8),0);
  return 1;
}

/* ref: FUN_00b930a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b930a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb930a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  code * pcVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * PTR32 * ppuVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_3;
  if (param_2 == 0xfffffffd) {
    uVar8 = 0;
    uVar4 = 0xfffffffd;
    if (param_5 != 0) {
      do {
        uVar4 = F_0042e430(((undefined *)GEN_TOP((((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + (uVar8 - param_1[0x19b])) * 0x54 +
                                     param_1[399]))) GEN_EDX_ARG,
                             (**((uint * PTR32 *)GEN_TOP((param_4[uVar8] + 4))) & 0xffffff) +
                             (int)*((uint * PTR32 *)GEN_TOP((param_4[uVar8] + 4))));
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_5);
    }
    if (param_6 != '\x01') {
      return uVar4;
    }
  }
  else {
    if (param_2 != 0xfffffffe) {
      if (param_2 != 0xffffffff) {
        return param_2;
      }
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*param_4 + 4)));
      puVar5 = param_1;
      for (iVar6 = 0x10; puVar5 = puVar5 + 1, iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)(param_1 + 0x19f) = *(undefined1 *)(param_1 + 0xd);
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar11 = param_1[-0x4e];
      uVar10 = 0x92;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
      uVar4 = F_00460bd0(pvVar3 GEN_EDX_ARG,uVar10,uVar11);
      F_006f7250(param_1 - 0xc4 GEN_EDX_ARG,uVar4);
      pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x18)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(param_1[-0x4e]));
      piVar2 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
      ppuVar12 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar11 = 0x48;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
      pvVar3 = ((undefined *)GEN_TOP(F_00484010(pvVar3 GEN_EDX_ARG,uVar11)));
      F_00490f30(pvVar3 GEN_EDX_ARG,ppuVar12);
      uVar4 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x98);
      uVar4 = F_00b8fa50(param_1 - 0xc4 GEN_EDX_ARG,uVar4,1,6,0xfffffffe);
      param_1[0x18d] = uVar4;
      return uVar4;
    }
    uVar8 = 0;
    uVar4 = 0xfffffffe;
    if (param_5 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1 + (int)((int)(uintptr_t)param_3) * 0x15 + 0xf9;
      do {
        uVar4 = F_0042e430((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(**((uint * PTR32 *)GEN_TOP((param_4[uVar8] + 4))) & 0xffffff) +
                                      (int)*((uint * PTR32 *)GEN_TOP((param_4[uVar8] + 4))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0x15;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_5);
    }
    if (param_6 != '\x01') {
      return uVar4;
    }
    iVar6 = param_1[9];
    if (iVar6 != 0) {
      uVar4 = F_00b8fae0(param_1 - 0xc4 GEN_EDX_ARG,iVar6,(param_1[10] - iVar6) + 1);
      return uVar4;
    }
  }
  if (param_1[8] == 0) {
    uVar4 = F_00b914b0(param_1 - 0xc4 GEN_EDX_ARG);
    return uVar4;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar5;
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  *puVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar11 = param_1[8];
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar11;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar8 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar8;
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
    *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
      F_0042c880(pvVar3 GEN_EDX_ARG);
      F_00406ad0(pvVar3);
    }
  }
  F_007143e0(param_1 - 0xc4 GEN_EDX_ARG,param_1 + 0x162,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),param_1 + 0xe4);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar9 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar9;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b93390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb93390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int * piVar2;
  
  if (param_1 < 0x80000000) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x288))))(this GEN_EDX_FWD,param_1,param_2,param_3);
  }
  else {
    uVar1 = param_1 + 0x7fffffff;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_00476000();
      F_0071e180(this GEN_EDX_ARG,(uint)*(ushort *)(this + 0x33c) * 0x3c,0,uVar1,0);
      F_00b8ac70(this GEN_EDX_ARG,0);
      if (this[0x98c] != (undefined1)0x5) {
        F_00b8cea0(this GEN_EDX_ARG);
        F_00b92c30(this GEN_EDX_ARG,0x5fb,0);
        if (this[0x98c] == (undefined1)0x2) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x39,0,0);
        }
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x290))))(this GEN_EDX_ARG);
      return uVar1;
    case 1: ;
      uVar1 = F_00b8acf0(this GEN_EDX_ARG,param_2);
      return uVar1;
    case 2: ;
      F_00b8ac70(this GEN_EDX_ARG,1);
      F_00b8cee0(this GEN_EDX_ARG);
      this[0x9a4] = (undefined1)0x1;
      if (param_2 != 0) {
        F_00b8acf0(this GEN_EDX_ARG,param_2);
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x294))))(this GEN_EDX_ARG,param_3);
      return uVar1;
    case 3: ;
      uVar1 = F_00b8cee0(this GEN_EDX_ARG);
      this[0x9a4] = (undefined1)0x1;
      return uVar1;
    case 4: ;
      uVar1 = F_00476000();
      F_0071e180(this GEN_EDX_ARG,param_2,0,uVar1,0);
      uVar1 = F_00b8cea0(this GEN_EDX_ARG);
      return uVar1;
    case 5: ;
      F_00b8cee0(this GEN_EDX_ARG);
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2 GEN_EDX_ARG,0,0x3c,1);
      return uVar1;
    case 6: ;
      uVar1 = F_00476000();
      F_0071e180(this GEN_EDX_ARG,param_2,0,uVar1,0);
      F_00b8ac70(this GEN_EDX_ARG,3);
      F_00b8cea0(this GEN_EDX_ARG);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x290))))(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b93540 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b93540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb93540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_00b92c30(this GEN_EDX_ARG,param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b93660(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb93660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  undefined4 * puVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  if (param_3 < 7) {
    (*(int *)(gen_frame + 0xc)) = param_3 * 0x54 + 0x6f4 + param_1;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = (param_3 - *((int *)GEN_TOP((param_1 + 0x97c)))) * 0x54 + *((int *)GEN_TOP((param_1 + 0x94c)));
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  if (param_6 != 0) {
    (*(uint *)(gen_frame + 0x10)) = (uint)param_6;
    puVar5 = param_5;
    do {
      uVar7 = *puVar5;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined4 *)(gen_frame + 0x80)) = uVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 *)(gen_frame + 0x80));
      (*(char *)(gen_frame + 0x88)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
      }
      uVar4 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar4) {
        uVar4 = uVar4 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar4 * 4))) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar4 * 4))) = uVar3;
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar4 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x80)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
          if ((*(char *)(gen_frame + 0x88)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
          this = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x84))));
          *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
            F_0042c880(this GEN_EDX_ARG);
            F_00406ad0(this);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x88)) = -1;
      }
      puVar5 = puVar5 + 1;
      uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
    } while (uVar4 != 0);
  }
  uVar7 = REFG(undefined4, 0x108cc50);
  uVar4 = F_0042a990((*(int *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,uVar4,uVar7);
  F_007115c0(param_1,((undefined1 *)(gen_frame + 0x2c)),&(*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)),param_4);
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
  return (uint)uVar6;
}

/* ref: FUN_00b93860 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b93860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb93860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  *((undefined4 *)GEN_TOP(((int)this + 0x9a8))) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
  piVar4 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar4;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x0)) = (int)this + 0x400;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined4, 0x11014e8);
  do {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x2));
    do {
      iVar2 = *(*(int * PTR32 *)(gen_frame + 0x4));
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = iVar2;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(char *)(gen_frame + 0x30)) = '\0';
      if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      }
      uVar6 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
      if ((*(uint *)(gen_frame + 0x18)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x18));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) = uVar5;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x30)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x28)))) {
          if ((*(char *)(gen_frame + 0x30)) == '\0') {
            *piVar4 = *(*(int * PTR32 *)(gen_frame + 0x2c));
            *(undefined1 *)(piVar4 + 2) = 0;
          }
          else {
            if ((*(char *)(gen_frame + 0x30)) != '\x01') goto LAB_00b939f4;
            iVar2 = *(*(int * PTR32 *)(gen_frame + 0x2c));
            piVar1 = ((int *)GEN_TOP((iVar2 + 0x54)));
            *piVar1 = *piVar1 + 1;
            *piVar4 = iVar2;
            *(undefined1 *)(piVar4 + 2) = 1;
          }
          piVar4[1] = (int)piVar4;
        }
      }
LAB_00b939f4: ;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0x30)) != '\0') && ((*(char *)(gen_frame + 0x30)) == '\x01')) {
          pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x2c))));
          *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
            F_0042c880(pvVar3 GEN_EDX_ARG);
            F_00406ad0(pvVar3);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x30)) = -1;
      }
      (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 1;
      piVar4 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc)) - 1)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
    F_007143e0(this GEN_EDX_ARG,(0xdb2 - *((int *)GEN_TOP(((int)this + 0x97c)))) * 0x54 + *((int *)GEN_TOP(((int)this + 0x94c))),
                 &(*(int * PTR32 *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x54;
    if (0x1101507 < (int)(*(int * PTR32 *)(gen_frame + 0x4))) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0x622;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(char *)(gen_frame + 0x30)) = '\0';
      if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      }
      uVar6 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
      if ((*(uint *)(gen_frame + 0x18)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x18));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) = uVar5;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x30)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x28)))) {
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar4;
          (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x2c));
          if ((*(char *)(gen_frame + 0x30)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x30)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      if ((((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x30)) != '\0')) && ((*(char *)(gen_frame + 0x30)) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x2c))));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = 1;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(char *)(gen_frame + 0x30)) = '\0';
      if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      }
      uVar6 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
      if ((*(uint *)(gen_frame + 0x18)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x18));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4))) = uVar5;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar6 * 4)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x30)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x28)))) {
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar4;
          (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x2c));
          if ((*(char *)(gen_frame + 0x30)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x30)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      if ((((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x30)) != '\0')) && ((*(char *)(gen_frame + 0x30)) == '\x01')) {
        pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x2c))));
        *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
          F_0042c880(pvVar3 GEN_EDX_ARG);
          F_00406ad0(pvVar3);
        }
      }
      F_007143e0(this GEN_EDX_ARG,(int)this + 0x898,&(*(int * PTR32 *)(gen_frame + 0x10)),(int)this + 0x550);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
      return (uint)uVar7;
    }
  } while( true );
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b93c60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb93c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  undefined4 * puVar1;
  undefined * this;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  if (param_3 - 0x514U < 9) {
    (*(int *)(gen_frame + 0xc)) = param_3 * 0x54 - 0x1a0a4 + param_1;
  }
  else {
    if (param_3 < 7) {
      iVar2 = param_3 * 0x54 + 0x6f4 + param_1;
    }
    else {
      iVar2 = (param_3 - *((int *)GEN_TOP((param_1 + 0x97c)))) * 0x54 + *((int *)GEN_TOP((param_1 + 0x94c)));
    }
    (*(int *)(gen_frame + 0xc)) = iVar2;
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
  piVar3 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  if (param_6 != 0) {
    (*(uint *)(gen_frame + 0x10)) = (uint)param_6;
    puVar6 = param_5;
    do {
      uVar8 = *puVar6;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined4 *)(gen_frame + 0x80)) = uVar8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 *)(gen_frame + 0x80));
      (*(char *)(gen_frame + 0x88)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
      }
      uVar5 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar5) {
        uVar5 = uVar5 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar5 * 4))) == 0) {
        uVar4 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar5 * 4))) = uVar4;
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar5 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x80)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
          if ((*(char *)(gen_frame + 0x88)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
          this = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x84))));
          *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
            F_0042c880(this GEN_EDX_ARG);
            F_00406ad0(this);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x88)) = -1;
      }
      puVar6 = puVar6 + 1;
      uVar5 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar5;
    } while (uVar5 != 0);
  }
  uVar8 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0042a990((*(int *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,uVar5,uVar8);
  F_007115c0(param_1,((undefined1 *)(gen_frame + 0x2c)),&(*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)),param_4);
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
  return (uint)uVar7;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b93e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb93e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x579 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x161;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x57a - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b940b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb940b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x5dc - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b942e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb942e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4ed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x192;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x640 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4ed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x642 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4ea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x517);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4e9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4ea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  if ((*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x10)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  }
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x6a4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x1101510);
  this[0x99e] = (undefined1)0x1;
  this[0x98e] = (undefined1)0x0;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x1101508);
  this[0x98d] = (undefined1)0x1;
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x7b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf31 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b94a30(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb94a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c)) >> 8),param_4);
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x24)) + 0)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x24)), 1, 3),param_4)));
  if (param_2 != 0x63f) {
    uVar2 = F_00704070(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_4 != 0) {
    (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 - 4 + (uint)param_4 * 4))));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    if (((*(int *)(gen_frame + 0x20)) != 0) && (uVar2 != 0)) {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
      F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      iVar5 = param_4 - 1;
      (*(byte *)(gen_frame + 0x2b)) = 0;
      (*(int *)(gen_frame + 0x18)) = iVar5;
      if (0 < iVar5) {
        uVar2 = 0;
        do {
          uVar7 = *((undefined4 *)GEN_TOP((param_3 + uVar2 * 4)));
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
          (*(char *)(gen_frame + 0x34)) = '\0';
          F_00493b50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2c)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != ((undefined4 *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
              pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x30))));
              *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
                F_0042c880(pvVar4 GEN_EDX_ARG);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0x34)) = -1;
            iVar5 = (*(int *)(gen_frame + 0x18));
          }
          bVar1 = (*(byte *)(gen_frame + 0x2b)) + 1;
          (*(byte *)(gen_frame + 0x2b)) = bVar1;
          uVar2 = (uint)bVar1;
        } while ((int)uVar2 < iVar5);
      }
      puVar8 = ((undefined4 *)(gen_frame + 0x0));
      uVar7 = 0x63f;
      iVar5 = (*(int *)(gen_frame + 0x20));
      uVar2 = (*(uint *)(gen_frame + 0x1c));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG)));
      F_0046abb0(pvVar4 GEN_EDX_ARG,uVar7,iVar5,uVar2,puVar8);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      uVar2 = (uint)uVar6;
    }
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x79;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x1d6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x110151c);
  this[0x99e] = (undefined1)0x1;
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4f1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b94f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb94f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x4f6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0x8fd - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf31 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b95060(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb95060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c)) >> 8),param_4);
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x24)) + 0)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x24)), 1, 3),param_4)));
  if (param_2 != 0x62c) {
    uVar2 = F_00704070(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_4 != 0) {
    (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 - 4 + (uint)param_4 * 4))));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    if (((*(int *)(gen_frame + 0x20)) != 0) && (uVar2 != 0)) {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
      F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      iVar5 = param_4 - 1;
      (*(byte *)(gen_frame + 0x2b)) = 0;
      (*(int *)(gen_frame + 0x18)) = iVar5;
      if (0 < iVar5) {
        uVar2 = 0;
        do {
          uVar7 = *((undefined4 *)GEN_TOP((param_3 + uVar2 * 4)));
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
          (*(char *)(gen_frame + 0x34)) = '\0';
          F_00493b50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2c)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != ((undefined4 *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
              pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x30))));
              *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
                F_0042c880(pvVar4 GEN_EDX_ARG);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0x34)) = -1;
            iVar5 = (*(int *)(gen_frame + 0x18));
          }
          bVar1 = (*(byte *)(gen_frame + 0x2b)) + 1;
          (*(byte *)(gen_frame + 0x2b)) = bVar1;
          uVar2 = (uint)bVar1;
        } while ((int)uVar2 < iVar5);
      }
      puVar8 = ((undefined4 *)(gen_frame + 0x0));
      uVar7 = 0x62c;
      iVar5 = (*(int *)(gen_frame + 0x20));
      uVar2 = (*(uint *)(gen_frame + 0x1c));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG)));
      F_0046abb0(pvVar4 GEN_EDX_ARG,uVar7,iVar5,uVar2,puVar8);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      uVar2 = (uint)uVar6;
    }
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b951c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb951c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x64e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x64f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xbb9 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x650;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xbba - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x651;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xbbb - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x4fc);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x64e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xbbc - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x550);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b956f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb956f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_00b8b890(this GEN_EDX_ARG,0x516);
  F_007143e0((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xc1c - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xc1d - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)), this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b95a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb95a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x658;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xc80 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x658;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xc81 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf174 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b95c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb95c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x705;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xce4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x705;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,(0xcfa - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x65d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x660;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),this + 0x4fc);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x665;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
  (*(char *)(gen_frame + 0x20)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4))) = uVar3;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar4 * 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this GEN_EDX_ARG,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),this + 0x550);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x1101528);
  this[0x99e] = (undefined1)0x4;
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb96170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    F_006da800(*(undefined4 *)(this + 4) GEN_EDX_FWD,REFG(int, 0x1379694),4,0);
    F_006da800(*(undefined4 *)(this + 4) GEN_EDX_ARG,iVar1,0,0);
    F_006da800(*(undefined4 *)(this + 4) GEN_EDX_ARG,iVar1,1,0);
    F_006da800(*(undefined4 *)(this + 4) GEN_EDX_ARG,iVar1,2,0);
    F_006da800(*(undefined4 *)(this + 4) GEN_EDX_ARG,iVar1,3,0);
  }
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  *(undefined2 *)(this + 0x98a) = 0;
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]) & 0xffff)) {
  case 1: ;
    F_00b8acf0(this GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[2]));
    (*(int * PTR32 *)&gen_args[2]) = *(int * PTR32 *)(this + 0x31c);
    uVar4 = F_006fd600(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]),1);
    return uVar4;
  case 2: ;
    F_00b8acf0(this GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[2]));
    uVar3 = F_00476000();
    uVar4 = piVar2[1];
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = uVar4 + uVar3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar4,uVar3);
    if (piVar2[2] != 0) {
      this[0x9a4] = (undefined1)0x1;
    }
    uVar4 = F_006fd600(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),0,0);
    return uVar4;
  case 3: ;
    if ((*(int * PTR32 *)&gen_args[2])[1] == 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd5))) = 1;
    }
    *(short *)(this + 0x98a) = (short)(*(int * PTR32 *)&gen_args[2])[2];
    *(int *)(this + 0x984) = (*(int * PTR32 *)&gen_args[2])[3];
    break;
  case 4: ;
    F_00b8cee0(this GEN_EDX_ARG);
    if (*(*(int * PTR32 *)&gen_args[2]) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd5))) = 1;
    }
    this[0x9a4] = (undefined1)0x1;
    break;
  case 5: ;
    F_00b8cee0(this GEN_EDX_ARG);
    piVar2 = (*(int * PTR32 *)&gen_args[2]);
    if (*(*(int * PTR32 *)&gen_args[2]) == 1) {
      if (this[0x98c] != (undefined1)0x3) {
        F_00b92c30(this GEN_EDX_ARG,0x5fd,0);
        goto LAB_00b9632e;
      }
      uVar6 = *(undefined4 *)(this + 0x1d8);
      uVar5 = 0x5f3;
    }
    else if (this[0x98c] == (undefined1)0x3) {
      uVar6 = *(undefined4 *)(this + 0x1d8);
      uVar5 = 0x5f2;
    }
    else {
      uVar6 = *(undefined4 *)(this + 0x1d8);
      uVar5 = 0x5fe;
    }
    F_00b93540(this GEN_EDX_ARG,uVar5,uVar6);
LAB_00b9632e: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x298))))(this GEN_EDX_ARG);
    uVar4 = F_006fd600(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),piVar2,(char)(*(undefined4 *)&gen_args[3]));
    return uVar4;
  case 6: ;
    F_00b8acf0(this GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[2]));
    uVar3 = F_00476000();
    uVar4 = piVar2[1];
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar4,uVar3);
    *(uint *)(this + 0x2f0) = uVar4 + uVar3;
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd5))) = 1;
    uVar4 = F_006f9890((undefined *)this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),piVar2,(*(undefined4 *)&gen_args[3]));
    return uVar4;
  default: ;
    uVar4 = F_006f9890((undefined *)this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    return uVar4;
  }
  uVar4 = F_006fd600(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(char)(*(undefined4 *)&gen_args[3]));
  return uVar4;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf159 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b963e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb963e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b93860(this GEN_EDX_FWD);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x10f879c);
  this[0x99e] = (undefined1)0x5;
  *(undefined4 *)(this + 0x98e) = 0;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x10f87d8);
  this[0x98d] = (undefined1)0x4;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb96420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = param_2;
  if ((short)param_2 != 0x200) {
    uVar1 = F_00b96170((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00b96450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b96450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x26c))) = param_2;
  return param_2;
}

/* ref: FUN_00b96460 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b96460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x5c))) = param_2;
  return param_2;
}

/* ref: FUN_00b96470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00b96490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00b964b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b964b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb964b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00b964d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b964d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb964d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00b964f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b964f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb964f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00b96510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00b96530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00b96550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00b96570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00b96590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00b965b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b965b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb965b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x2088 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b965d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b965d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb965d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20a4 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b965f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b965f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb965f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20b6 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b96610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb96610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20c0 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b96630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb96630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20c6 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b96650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb96650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20c8 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b96670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb96670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20e4 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b96690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb96690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x20f6 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b966b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b966b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb966b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x2100 + (int)this))) = *param_2;
  return param_1;
}

/* ref: FUN_00b966d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b966d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb966d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0x2106 + (int)this))) = *param_2;
  return param_1;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b96700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb96700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b96710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb96710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96720(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b96770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x54 + 0x400 + in_ecx;
}

/* ref: FUN_00b967b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b967b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb967b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int in_ecx;
  
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_0042b630((int)this + 0x14 GEN_EDX_FWD);
  in_ecx = (int)this + 0x68;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042b630((int)this + 0x110 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf176 */
GEN_OWN GEN_NOFRAME unsigned int F_00b96800(void)
{
  GEN_ENTER(0xb96800u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b96860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b96870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96880(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10f8a14));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b968b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b968b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb968b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      F_00cb4540(this GEN_EDX_FWD,uVar1,*((undefined4 *)GEN_TOP((param_1 + uVar1 * 4))));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,this);
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = 1;
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf149 */
GEN_OWN GEN_NOFRAME uint F_00b96910(void)
{
  GEN_ENTER(0xb96910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf150 */
GEN_OWN GEN_NOFRAME uint F_00b96920(void)
{
  GEN_ENTER(0xb96920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf153 */
GEN_OWN GEN_NOFRAME byte F_00b96930(void)
{
  GEN_ENTER(0xb96930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf150 */
GEN_OWN GEN_NOFRAME uint F_00b96940(void)
{
  GEN_ENTER(0xb96940u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f008);
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf153 */
GEN_OWN GEN_NOFRAME byte F_00b96950(void)
{
  GEN_ENTER(0xb96950u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf149 */
GEN_OWN GEN_NOFRAME uint F_00b96960(void)
{
  GEN_ENTER(0xb96960u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f00c);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf150 */
GEN_OWN GEN_NOFRAME uint F_00b96970(void)
{
  GEN_ENTER(0xb96970u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f010);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf153 */
GEN_OWN GEN_NOFRAME byte F_00b96980(void)
{
  GEN_ENTER(0xb96980u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b969b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b969b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb969b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b96a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb96a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  return 0;
}

/* ref: FUN_00b96a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9678));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b96a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb96a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  return 0;
}

/* ref: FUN_00b96a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb96a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9694))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b96b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96b00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SheetWaiter_VContentTalkEventHandler_InstanceContent_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96b30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b96b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b96ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b96ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb96ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((ushort *)GEN_TOP(((int)this + 0x2a))) = *((ushort *)GEN_TOP(((int)this + 0x28)));
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < (uint)*((ushort *)GEN_TOP(((int)this + 0x28)))) {
    *((short *)GEN_TOP(((int)this + 0x2a))) = (short)*((uint *)GEN_TOP(((int)this + 0x14)));
  }
  uVar1 = 0;
  if (*((short *)GEN_TOP(((int)this + 0x2a))) != 0) {
    do {
      F_00cb4540(this GEN_EDX_FWD,uVar1,*((int *)GEN_TOP(((int)this + 0x24))) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((ushort *)GEN_TOP(((int)this + 0x2a))));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,this);
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
  return uVar1;
}

/* ref: FUN_00b96bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f96a0));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return (uint)this;
}

/* ref: SheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96c40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b96cb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b96cb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0);
  return (uint)uVar1;
}

/* ref: FUN_00b96ce0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b96ce0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0);
  return uVar1;
}

/* ref: FUN_00b96d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb96d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96d30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb96d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb96d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this GEN_EDX_FWD,param_1);
  puVar2 = ((uint *)GEN_TOP(F_00b9c710(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1,uVar1)));
  return *puVar2;
}

/* ref: FUN_00b96d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb96d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1);
  return uVar1;
}

/* ref: FUN_00b96db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb96db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this GEN_EDX_FWD,param_1);
  puVar2 = ((uint *)GEN_TOP(F_00b9c710(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1,uVar1)));
  return *puVar2;
}

/* ref: FUN_00b96de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb96de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this GEN_EDX_FWD,param_1);
  puVar2 = ((uint *)GEN_TOP(F_00b9c710(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1,uVar1)));
  return *puVar2;
}

/* ref: FUN_00b96e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb96e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this GEN_EDX_FWD,param_1);
  puVar2 = ((uint *)GEN_TOP(F_00b9c710(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1,uVar1)));
  return *puVar2;
}

/* ref: FUN_00b96e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this + 8))),param_2);
  F_00b9b950(*((undefined4 *)GEN_TOP(((int)this + 8))),4);
  F_00b9b070(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8f0,param_1);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2)));
  *puVar2 = param_3;
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b96ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this + 8))),param_2);
  F_00b9b950(*((undefined4 *)GEN_TOP(((int)this + 8))),4);
  F_00b9b070(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8f0,param_1);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2)));
  *puVar2 = param_3;
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b96f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this + 8))),param_2);
  F_00b9b950(*((undefined4 *)GEN_TOP(((int)this + 8))),4);
  F_00b9b070(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8f0,param_1);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2)));
  *puVar2 = param_3;
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b96fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b96fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb96fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this + 8))),param_2);
  F_00b9b950(*((undefined4 *)GEN_TOP(((int)this + 8))),4);
  F_00b9b070(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8f0,param_1);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2)));
  *puVar2 = param_3;
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b97040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb97040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)this + 8))));
  F_00b9ae60(*((undefined4 *)GEN_TOP(((int)this + 8))),param_2);
  F_00b9b950(*((undefined4 *)GEN_TOP(((int)this + 8))),4);
  F_00b9b070(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8f0,param_1);
  F_00b9b3d0(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 + 2)));
  *puVar2 = param_3;
  F_00b9b2f0(*((undefined4 *)GEN_TOP(((int)this + 8))),0xffffd8ee);
  uVar1 = F_00a01ad0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b970d0 */
GEN_OWN GEN_FRAME byte F_00b970d0(void)
{
  GEN_ENTER(0xb970d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b970e0 */
GEN_OWN GEN_FRAME uint F_00b970e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb970e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b970f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b970f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb970f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return (uint)param_1;
}

/* ref: FUN_00b97140 */
GEN_OWN GEN_FRAME uint F_00b97140(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb97140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b97150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b97740((int)this - 0x1d4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b97790((int)this - 0x1d4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b97710((int)this - 0x1d4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b977d0((int)this - 0x1d4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf157 */
GEN_OWN GEN_NOFRAME unsigned int F_00b971a0(void)
{
  GEN_ENTER(0xb971a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf158 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b971b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb971b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf164 */
GEN_OWN GEN_NOFRAME unsigned int F_00b971c0(void)
{
  GEN_ENTER(0xb971c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf165 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b971d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb971d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf166 */
GEN_OWN GEN_NOFRAME unsigned int F_00b971e0(void)
{
  GEN_ENTER(0xb971e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf168 */
GEN_OWN GEN_NOFRAME unsigned int F_00b971f0(void)
{
  GEN_ENTER(0xb971f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b97200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf169 */
GEN_OWN GEN_NOFRAME uint F_00b97210(void)
{
  GEN_ENTER(0xb97210u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf170 */
GEN_OWN GEN_NOFRAME uint F_00b97220(void)
{
  GEN_ENTER(0xb97220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b97230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b980d0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98100((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98130((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98160((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b972a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b972a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb972a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98190((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b972c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b972c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb972c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b981c0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b972e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b972e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb972e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b981f0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97300 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98220((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98250((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98280((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b982b0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b982e0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b973a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b973a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb973a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98310((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b973c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b973c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb973c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98340((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b973e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b973e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb973e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98370((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b983a0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b983d0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98410((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97450 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98440((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98470((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b984a0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b974b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b974b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb974b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b984d0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b974d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b974d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb974d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98500((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b974f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b974f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb974f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98530((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97510 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98560((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98590((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b985c0((int)this - 0x9a8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b985c0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b985f0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b975c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b975f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb975f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf173 */
GEN_OWN GEN_NOFRAME unsigned int F_00b97620(void)
{
  GEN_ENTER(0xb97620u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf175 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b97630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf145 */
GEN_OWN GEN_NOFRAME byte F_00b97640(void)
{
  GEN_ENTER(0xb97640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98be0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b97660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb97660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_4;
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = 0;
  return (uint)this;
}

/* ref: FUN_00b976a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b976a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb976a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (*((char *)GEN_TOP(((int)this + 0x26))) == '\x01') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,this);
  }
  uVar1 = F_00cb4870(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b976d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb976d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (*((char *)GEN_TOP(((int)param_1 + 0x26))) == '\x01') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[7])) + 0x4c))))(((int *)GEN_TOP(param_1[7])) GEN_EDX_FWD,param_1);
  }
  F_00cb4870(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97710(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8c210(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[0x14e]));
  *param_1 = (*(undefined * PTR32 (*)[154])REFP(0x10f8cb4));
  param_1[0x75] = (*(undefined * PTR32 (*)[3])REFP(0x10f8ca0));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    param_1[0x14e] = 0;
  }
  F_00b8c210(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97790(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[154])REFP(0x10f8f34));
  param_1[0x75] = (*(undefined * PTR32 (*)[3])REFP(0x10f8f20));
  F_00b8c210(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b977d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb977d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[0x14d]));
  *param_1 = (*(undefined * PTR32 (*)[154])REFP(0x10f91b4));
  param_1[0x75] = (*(undefined * PTR32 (*)[3])REFP(0x10f91a0));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    param_1[0x14d] = 0;
  }
  F_0042c880(param_1 + 0x154 GEN_EDX_ARG);
  F_00b8c210(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb97850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (0 < (*(int *)&gen_args[2]))) {
    if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
    }
    if (iVar1 == -2) {
      F_006f4000(this_00 GEN_EDX_FWD);
    }
    else if (iVar1 == 0) {
      F_006bcfc0(this_00 GEN_EDX_ARG,0,0,0);
    }
    else {
      (*(int *)&gen_args[2]) = 0;
      F_006f99e0(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[2]),1);
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b978d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb978d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf149 */
GEN_OWN GEN_NOFRAME uint F_00b97900(void)
{
  GEN_ENTER(0xb97900u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f014);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf150 */
GEN_OWN GEN_NOFRAME uint F_00b97910(void)
{
  GEN_ENTER(0xb97910u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f018);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf153 */
GEN_OWN GEN_NOFRAME byte F_00b97920(void)
{
  GEN_ENTER(0xb97920u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98660((int)this - 0x1d4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[144])REFP(0x10f9424));
  if (param_1[0x42] != 0) {
    piVar1 = ((int *)GEN_TOP(param_1[0x41]));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,param_1[0x42]);
    }
    puVar2 = ((undefined4 *)GEN_TOP(param_1[0x42]));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      param_1[0x42] = 0;
    }
  }
  F_006df660(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b979b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b979b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb979b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: FUN_00b97a00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b97a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb97a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*((char *)GEN_TOP(((int)this + 0x2c))) == '\x01') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,this);
  }
  uVar1 = F_00cb4870(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b97a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb97a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = (undefined2)param_2;
  uVar1 = F_00b96ba0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb97a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  short * psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 local_8;
  
  psVar1 = ((short *)GEN_TOP(((int)this + 0x28)));
  *psVar1 = *psVar1 - *((ushort *)GEN_TOP(((int)this + 0x2a)));
  sVar2 = *psVar1;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),sVar2 == 0);
  piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x310)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  iVar3 = *piVar5;
  if (*((int *)GEN_TOP(((int)this + 0x20))) < 0) {
    pcVar6 = *((gen_code32 *)GEN_TOP((iVar3 + 8)));
  }
  else {
    pcVar6 = *((gen_code32 *)GEN_TOP((iVar3 + 4)));
  }
  uVar4 = (*pcVar6)(piVar5,*((int *)GEN_TOP(((int)this + 0x20))),*((undefined4 *)GEN_TOP(((int)this + 0x24))),param_2,
                    (uint)*((ushort *)GEN_TOP(((int)this + 0x2a))),local_8);
  if (sVar2 != 0) {
    *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x2a)));
    uVar4 = F_00b96ba0(this GEN_EDX_FWD);
  }
  return uVar4;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*(char *)(param_1 + 0xb) == '\x01') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[7])) + 0x4c))))(((int *)GEN_TOP(param_1[7])) GEN_EDX_FWD,param_1);
  }
  F_00cb4870(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97af0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b97b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b97b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97b90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb97b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b97ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b97ba0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb97ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b97bc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b97bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b97be0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b97be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (**((char * PTR32 *)GEN_TOP(((int)this + 0x16c))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10b95cc)),uVar1,uVar3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00b96e40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG,uVar2,uVar1,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b97d30 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b97d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (**((char * PTR32 *)GEN_TOP(((int)this + 0x16c))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10b95cc)),uVar1,uVar3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00b96ec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG,uVar2,uVar1,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b97de0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b97de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (**((char * PTR32 *)GEN_TOP(((int)this + 0x16c))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10b95cc)),uVar1,uVar3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00b96f40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG,uVar2,uVar1,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b97e90 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b97e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (**((char * PTR32 *)GEN_TOP(((int)this + 0x16c))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10b95cc)),uVar1,uVar3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00b96fc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG,uVar2,uVar1,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b97f40 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b97f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb97f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (**((char * PTR32 *)GEN_TOP(((int)this + 0x16c))) == '\0') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10b95cc)),uVar1,uVar3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00b97040(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG,uVar2,uVar1,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00b97ff0 */
GEN_OWN GEN_FRAME uint F_00b97ff0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb97ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00b98030 */
GEN_OWN GEN_FRAME uint F_00b98030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb98030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_00b98080 */
GEN_OWN GEN_FRAME unsigned int F_00b98080(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb98080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b980d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb980d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTotorak::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98100(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTamtara::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98130(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCopperBell::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98160(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonShposhae::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98190(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonAurumVale::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b981c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb981c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonResidence::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b981f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb981f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonBrayflox::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98220(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonHalatali::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98250(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98280(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonWandererPalace::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b982b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb982b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonDzemael::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b982e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb982e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonStoneVigil::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98310(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCuttersCry::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98340(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTheOldCastleAmidapool::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98370(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseKeep::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b983a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb983a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleIfrit::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b983d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb983d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
  param_1[0xc4] = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98410(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleGaruda::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleEmpireShield::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98470(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidCrystalTower001::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b984a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb984a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut001::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b984d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb984d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut002::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98500(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut003::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98530(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut004::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut005::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98590(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b985c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb985c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0x9a8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDummy::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b985f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb985f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8cc40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b98620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98c10((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98c40((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98660(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b8eca0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b986a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b986a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb986a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b986b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b986b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb986b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b986c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b986c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb986c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00b986e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b986e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb986e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b986f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b986f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb986f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b98710 */
GEN_OWN GEN_FRAME uint F_00b98710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb98710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00b97ff0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00b98730 */
GEN_OWN GEN_FRAME unsigned int F_00b98730(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb98730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return;
}

/* ref: FUN_00b98760 */
GEN_OWN GEN_FRAME unsigned int F_00b98760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb98760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00b98080(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00b987a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b987a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb987a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff014));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ff004));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b987e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b987e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb987e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98ce0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff2ec));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ff2dc));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b98840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98d10((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff5c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ff5b4));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b988a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b988a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb988a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98d40((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b988c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b988c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb988c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff89c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ff88c));
  return (uint)this;
}

/* ref: FUN_00b988f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b988f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb988f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98d70((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffb74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ffb64));
  return (uint)this;
}

/* ref: FUN_00b98940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98da0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffe4c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x10ffe3c));
  return (uint)this;
}

/* ref: FUN_00b98990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98dd0((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b989b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b989b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb989b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100124));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x1100114));
  return (uint)this;
}

/* ref: FUN_00b989e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b989e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb989e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98e00((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11003fc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x11003ec));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b98a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98e30((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11006d4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x11006c4));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

/* ref: FUN_00b98aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b98aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb98aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b98e60((int)this - 0x310 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00b98ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b98ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb98ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b8e040(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11009ac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x310))) = (*(undefined * PTR32 (*)[3])REFP(0x110099c));
  *((undefined1 *)GEN_TOP(((int)this + 0xe60))) = 0;
  return (uint)this;
}

