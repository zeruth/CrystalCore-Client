#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b0c750 */
GEN_FRAME byte GEN_THISCALL F_00b0c750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(byte *)(param_2 + 0x303 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00b0c780 */
GEN_FRAME uint GEN_THISCALL F_00b0c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x330);
  param_2[1] = *(undefined4 *)(in_ecx + 0x334);
  param_2[2] = *(undefined4 *)(in_ecx + 0x338);
  return (uint)param_2;
}

/* ref: FUN_00b0c7c0 */
GEN_FRAME uint GEN_THISCALL F_00b0c7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(uint *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  return param_3;
}

/* ref: FUN_00b0c820 */
GEN_NOFRAME uint GEN_THISCALL F_00b0c820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  
  if ((!(0.0 < *(float *)(in_ecx + 0x344))) || (!(0.0 < *(float *)(in_ecx + 0x34c)))) {
    return in_EAX & 0xffffff00;
  }
  fVar1 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)(in_ecx + 0x338))));
  fVar2 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)(in_ecx + 0x330))));
  if (((float10)(float)(fVar2 * fVar2 + fVar1 * fVar1) < (float10)*(float *)(in_ecx + 0x348)) &&
     ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)(in_ecx + 0x334)
                                          )))))) < (float10)*(float *)(in_ecx + 0x34c))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0c8e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0c8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0c8e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00b0c920 */
GEN_FRAME uint GEN_THISCALL F_00b0c920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10) GEN_EDX_FWD,param_1 + 4);
  puVar2 = param_1 + 0x19;
  puVar3 = (undefined4 *)((int)this + 100);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x98) = *(undefined1 *)(param_1 + 0x26);
  return (uint)this;
}

/* ref: FUN_00b0c980 */
GEN_FRAME uint GEN_THISCALL F_00b0c980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd4c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ca10 */
GEN_FRAME uint GEN_THISCALL F_00b0ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b0ca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b0ca70 */
GEN_FRAME uint GEN_THISCALL F_00b0ca70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b0cab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: SheetWaiter_VFateMessage_Fate_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0cad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0cb40 */
GEN_FRAME uint GEN_THISCALL F_00b0cb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cb40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cba0 */
GEN_FRAME uint GEN_STDCALL F_00b0cba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cbd0 */
GEN_FRAME uint GEN_STDCALL F_00b0cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cc00 */
GEN_FRAME uint GEN_THISCALL F_00b0cc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cc90 */
GEN_FRAME uint GEN_THISCALL F_00b0cc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ccf0 */
GEN_FRAME uint GEN_STDCALL F_00b0ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ccf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cd20 */
GEN_FRAME uint GEN_STDCALL F_00b0cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cd50 */
GEN_FRAME uint GEN_THISCALL F_00b0cd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cde0 */
GEN_FRAME uint GEN_STDCALL F_00b0cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0ce10 */
GEN_FRAME uint GEN_THISCALL F_00b0ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce20 */
GEN_FRAME uint GEN_THISCALL F_00b0ce20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce70 */
GEN_FRAME uint GEN_THISCALL F_00b0ce70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ce70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ced0 */
GEN_FRAME uint GEN_STDCALL F_00b0ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ced0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cf00 */
GEN_FRAME uint GEN_STDCALL F_00b0cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cf00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cfe0 */
GEN_FRAME uint GEN_STDCALL F_00b0cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d070 */
GEN_FRAME uint GEN_STDCALL F_00b0d070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d0c0 */
GEN_FRAME uint GEN_STDCALL F_00b0d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d100 */
GEN_FRAME uint GEN_STDCALL F_00b0d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d130 */
GEN_FRAME uint GEN_STDCALL F_00b0d130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d180 */
GEN_FRAME uint GEN_THISCALL F_00b0d180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1c0 */
GEN_FRAME uint GEN_THISCALL F_00b0d1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1e0 */
GEN_FRAME uint GEN_THISCALL F_00b0d1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d230 */
GEN_FRAME uint GEN_THISCALL F_00b0d230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b0d260 */
GEN_FRAME uint GEN_STDCALL F_00b0d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d290 */
GEN_FRAME uint GEN_STDCALL F_00b0d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d2c0 */
GEN_FRAME uint GEN_STDCALL F_00b0d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d300 */
GEN_FRAME uint GEN_STDCALL F_00b0d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d350 */
GEN_FRAME uint GEN_THISCALL F_00b0d350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d350u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00b0d360 */
GEN_FRAME uint GEN_THISCALL F_00b0d360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0d380 */
GEN_FRAME uint GEN_THISCALL F_00b0d380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d380u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d3a0 */
GEN_FRAME uint F_00b0d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3b0 */
GEN_FRAME uint F_00b0d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3c0 */
GEN_FRAME uint F_00b0d3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3d0 */
GEN_FRAME uint F_00b0d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3e0 */
GEN_FRAME uint F_00b0d3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3f0 */
GEN_FRAME uint F_00b0d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d400 */
GEN_FRAME uint F_00b0d400(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d410 */
GEN_FRAME uint F_00b0d410(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d450 */
GEN_FRAME uint GEN_STDCALL F_00b0d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d470 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0d470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d490 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b0d4b0 */
GEN_FRAME uint GEN_STDCALL F_00b0d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d4d0 */
GEN_FRAME uint GEN_STDCALL F_00b0d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d510 */
GEN_FRAME uint GEN_STDCALL F_00b0d510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d530 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0d530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d560 */
GEN_FRAME unsigned int F_00b0d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d560u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0d580 */
GEN_FRAME uint F_00b0d580(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d590 */
GEN_FRAME uint F_00b0d590(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d5a0 */
GEN_FRAME byte F_00b0d5a0(void)
{
  GEN_ENTER(0xb0d5a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d5b0 */
GEN_FRAME uint F_00b0d5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d5b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d5e0 */
GEN_FRAME byte F_00b0d5e0(void)
{
  GEN_ENTER(0xb0d5e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d5f0 */
GEN_FRAME uint F_00b0d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d600 */
GEN_FRAME uint F_00b0d600(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d610 */
GEN_FRAME byte F_00b0d610(void)
{
  GEN_ENTER(0xb0d610u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d620 */
GEN_FRAME uint F_00b0d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d660 */
GEN_FRAME byte F_00b0d660(void)
{
  GEN_ENTER(0xb0d660u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d690 */
GEN_FRAME byte F_00b0d690(void)
{
  GEN_ENTER(0xb0d690u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b0d6a0 */
GEN_FRAME uint F_00b0d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d6a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6e0 */
GEN_FRAME uint GEN_THISCALL F_00b0d6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d700 */
GEN_FRAME uint GEN_THISCALL F_00b0d700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d700u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d710 */
GEN_FRAME uint GEN_THISCALL F_00b0d710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d710u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d760 */
GEN_FRAME uint GEN_THISCALL F_00b0d760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0d780 */
GEN_FRAME byte GEN_THISCALL F_00b0d780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00b0d7b0 */
GEN_FRAME uint F_00b0d7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d7e0 */
GEN_FRAME uint F_00b0d7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d810 */
GEN_FRAME uint GEN_THISCALL F_00b0d810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0d830 */
GEN_FRAME uint GEN_STDCALL F_00b0d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0d880 */
GEN_FRAME uint F_00b0d880(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d890 */
GEN_FRAME uint F_00b0d890(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d8a0 */
GEN_FRAME uint GEN_THISCALL F_00b0d8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
  F_0042b630((int)this + 0x20 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00b0d8e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0d8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0d8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042c880((undefined *)((int)this + 0x20) GEN_EDX_FWD);
  uVar1 = F_00cb4870(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x20 GEN_EDX_FWD);
  F_00cb4870(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf143 */
GEN_NOFRAME unsigned int F_00b0d940(void)
{
  GEN_ENTER(0xb0d940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf153 */
GEN_NOFRAME unsigned int F_00b0d950(void)
{
  GEN_ENTER(0xb0d950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf154 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b0d960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf155 */
GEN_NOFRAME unsigned int F_00b0d970(void)
{
  GEN_ENTER(0xb0d970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf147 */
GEN_NOFRAME byte F_00b0d980(void)
{
  GEN_ENTER(0xb0d980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf157 */
GEN_NOFRAME byte F_00b0d990(void)
{
  GEN_ENTER(0xb0d990u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf52 */
GEN_NOFRAME byte GEN_THISCALL F_00b0d9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Fate::FateDirector::vf100 */
GEN_FRAME uint GEN_THISCALL F_00b0d9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0d9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)(this + 0x328);
  uVar1 = (uint)*(ushort *)((int)this_00 + 0x54);
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    uVar1 = F_006f3a50(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  }
  return uVar1;
}

/* ref: FUN_00b0d9e0 */
GEN_FRAME byte GEN_THISCALL F_00b0d9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 0x1689) <= *(byte *)((int)this + 0x322);
    }
  }
  return 0;
}

/* ref: FUN_00b0da30 */
GEN_FRAME uint GEN_THISCALL F_00b0da30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return (uint)(*(byte *)((int)this + 0x322) < *(byte *)(uVar1 + 0x1689));
    }
  }
  return 1;
}

/* ref: FUN_00b0da80 */
GEN_FRAME uint GEN_THISCALL F_00b0da80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0da90 */
GEN_FRAME uint GEN_THISCALL F_00b0da90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0daa0 */
GEN_FRAME uint GEN_THISCALL F_00b0daa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0dab0 */
GEN_FRAME uint GEN_THISCALL F_00b0dab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0dac0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0dac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b0db00 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0db00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 0;
}

/* ref: FUN_00b0db40 */
GEN_FRAME uint GEN_THISCALL F_00b0db40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)))) != 0);
}

/* ref: FUN_00b0dc40 */
GEN_FRAME byte GEN_THISCALL F_00b0dc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00b0dc60 */
GEN_FRAME byte GEN_THISCALL F_00b0dc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0dc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0dcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0dd80 */
GEN_FRAME uint GEN_THISCALL F_00b0dd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0dd90 */
GEN_FRAME byte GEN_THISCALL F_00b0dd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ddb0 */
GEN_FRAME uint GEN_THISCALL F_00b0ddb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddc0 */
GEN_FRAME byte GEN_THISCALL F_00b0ddc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0dde0 */
GEN_FRAME uint GEN_THISCALL F_00b0dde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddf0 */
GEN_FRAME byte GEN_THISCALL F_00b0ddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de40 */
GEN_FRAME uint GEN_THISCALL F_00b0de40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de50 */
GEN_FRAME byte GEN_THISCALL F_00b0de50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de70 */
GEN_FRAME uint GEN_THISCALL F_00b0de70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de80 */
GEN_FRAME byte GEN_THISCALL F_00b0de80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ded0 */
GEN_FRAME uint GEN_THISCALL F_00b0ded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0df10 */
GEN_FRAME uint GEN_THISCALL F_00b0df10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00b0df50 */
GEN_FRAME uint GEN_THISCALL F_00b0df50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00b0df80 */
GEN_FRAME uint GEN_STDCALL F_00b0df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0df90 */
GEN_FRAME uint GEN_THISCALL F_00b0df90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
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

/* ref: FUN_00b0dfe0 */
GEN_FRAME uint GEN_THISCALL F_00b0dfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00b0e030 */
GEN_FRAME uint GEN_STDCALL F_00b0e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e040 */
GEN_FRAME uint GEN_THISCALL F_00b0e040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00b0e070 */
GEN_FRAME uint GEN_THISCALL F_00b0e070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e070u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00b0e080 */
GEN_FRAME uint GEN_THISCALL F_00b0e080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0e0a0 */
GEN_FRAME uint GEN_THISCALL F_00b0e0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0e0c0 */
GEN_FRAME uint F_00b0e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e0e0 */
GEN_FRAME uint F_00b0e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e100 */
GEN_FRAME uint F_00b0e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e130 */
GEN_FRAME unsigned int F_00b0e130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e150 */
GEN_FRAME unsigned int F_00b0e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b0e170 */
GEN_FRAME uint F_00b0e170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e190 */
GEN_FRAME uint F_00b0e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e1b0 */
GEN_FRAME uint F_00b0e1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e1e0 */
GEN_FRAME uint F_00b0e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e210 */
GEN_FRAME uint F_00b0e210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e270 */
GEN_FRAME unsigned int F_00b0e270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e2a0 */
GEN_FRAME uint F_00b0e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e2e0 */
GEN_FRAME uint F_00b0e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0e2f0 */
GEN_FRAME uint F_00b0e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e300 */
GEN_FRAME uint F_00b0e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e300u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e310 */
GEN_FRAME uint F_00b0e310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e310u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e320 */
GEN_FRAME unsigned int F_00b0e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0e350 */
GEN_FRAME unsigned int F_00b0e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e380 */
GEN_FRAME uint GEN_THISCALL F_00b0e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e3f0 */
GEN_FRAME byte GEN_THISCALL F_00b0e3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00b0e410 */
GEN_FRAME uint GEN_THISCALL F_00b0e410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0e440 */
GEN_FRAME uint GEN_THISCALL F_00b0e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)this = 0xe0000000;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0e470 */
GEN_FRAME uint F_00b0e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e490 */
GEN_FRAME uint F_00b0e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4b0 */
GEN_FRAME uint F_00b0e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b0e4f0 */
GEN_FRAME uint F_00b0e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Client::Game::Fate::FateDirector::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0e520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b077a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0e560 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0e560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 1;
    return;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
  return;
}

/* ref: FUN_00b0e590 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0e590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 8;
    return;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffff7;
  return;
}

/* ref: FUN_00b0e5c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0e5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x10;
    return;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffef;
  return;
}

/* ref: FUN_00b0e5f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b0e5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x20;
    return;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffdf;
  return;
}

/* ref: FUN_00b0e630 */
GEN_FRAME uint GEN_THISCALL F_00b0e630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e640 */
GEN_FRAME uint GEN_THISCALL F_00b0e640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e660 */
GEN_FRAME uint GEN_THISCALL F_00b0e660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e670 */
GEN_FRAME uint GEN_THISCALL F_00b0e670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e690 */
GEN_FRAME uint GEN_THISCALL F_00b0e690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6a0 */
GEN_FRAME uint GEN_THISCALL F_00b0e6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e6c0 */
GEN_FRAME uint GEN_THISCALL F_00b0e6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6d0 */
GEN_FRAME uint GEN_THISCALL F_00b0e6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e6e0 */
GEN_FRAME uint GEN_THISCALL F_00b0e6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e700 */
GEN_FRAME uint GEN_THISCALL F_00b0e700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0e740 */
GEN_FRAME byte GEN_THISCALL F_00b0e740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e760 */
GEN_FRAME byte GEN_THISCALL F_00b0e760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e780 */
GEN_FRAME byte GEN_THISCALL F_00b0e780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7b0 */
GEN_FRAME uint GEN_THISCALL F_00b0e7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e7c0 */
GEN_FRAME uint GEN_THISCALL F_00b0e7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e7d0 */
GEN_FRAME byte GEN_THISCALL F_00b0e7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7f0 */
GEN_FRAME byte GEN_THISCALL F_00b0e7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e810 */
GEN_FRAME uint GEN_STDCALL F_00b0e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e830 */
GEN_NOFRAME uint GEN_THISCALL F_00b0e830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e870 */
GEN_FRAME uint GEN_STDCALL F_00b0e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e880 */
GEN_FRAME uint GEN_STDCALL F_00b0e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0e8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e8e0 */
GEN_FRAME uint GEN_THISCALL F_00b0e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e8e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  if (param_2 != 0) {
    *in_ecx = *in_ecx & 0xfff;
  }
  return param_2;
}

/* ref: FUN_00b0e900 */
GEN_NOFRAME uint GEN_THISCALL F_00b0e900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x321);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0e9c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0e9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0e9f0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0e9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0e9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ea30 */
GEN_FRAME uint GEN_THISCALL F_00b0ea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ea70 */
GEN_FRAME uint GEN_THISCALL F_00b0ea70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b0eaa0 */
GEN_FRAME uint GEN_THISCALL F_00b0eaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eaa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -8;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eac0 */
GEN_FRAME uint GEN_THISCALL F_00b0eac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eac0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eae0 */
GEN_FRAME uint F_00b0eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0eb10 */
GEN_FRAME unsigned int F_00b0eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0eb40 */
GEN_FRAME unsigned int F_00b0eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0eb70 */
GEN_FRAME uint F_00b0eb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0eb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ebc0 */
GEN_FRAME uint F_00b0ebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ebc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0ebf0 */
GEN_FRAME uint F_00b0ebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ec40 */
GEN_FRAME uint GEN_THISCALL F_00b0ec40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ec80 */
GEN_FRAME unsigned int F_00b0ec80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ec80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ecb0 */
GEN_FRAME unsigned int F_00b0ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00b0ece0 */
GEN_FRAME unsigned int F_00b0ece0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00b0ed10 */
GEN_FRAME uint GEN_STDCALL F_00b0ed10(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ed10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xe0000000;
  return (uint)param_1;
}

/* ref: FUN_00b0ed20 */
GEN_FRAME unsigned int F_00b0ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed50 */
GEN_FRAME unsigned int F_00b0ed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed80 */
GEN_FRAME unsigned int F_00b0ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0edb0 */
GEN_NOFRAME uint GEN_THISCALL F_00b0edb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0edb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0edf0 */
GEN_FRAME uint GEN_THISCALL F_00b0edf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0edf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ee30 */
GEN_NOFRAME uint GEN_THISCALL F_00b0ee30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ee30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ee70 */
GEN_FRAME uint GEN_THISCALL F_00b0ee70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ee70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef00 */
GEN_NOFRAME uint GEN_THISCALL F_00b0ef00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0ef30 */
GEN_FRAME uint GEN_THISCALL F_00b0ef30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ef50 */
GEN_FRAME uint GEN_THISCALL F_00b0ef50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef70 */
GEN_NOFRAME uint GEN_THISCALL F_00b0ef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0efb0 */
GEN_FRAME uint GEN_THISCALL F_00b0efb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0efb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f010 */
GEN_FRAME uint GEN_THISCALL F_00b0f010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f070 */
GEN_FRAME uint GEN_THISCALL F_00b0f070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -8;
  return (uint)param_1;
}

/* ref: FUN_00b0f090 */
GEN_FRAME uint GEN_THISCALL F_00b0f090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f090u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x48;
  return (uint)param_2;
}

/* ref: FUN_00b0f0b0 */
GEN_FRAME uint GEN_THISCALL F_00b0f0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f110 */
GEN_FRAME uint GEN_THISCALL F_00b0f110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b0f140 */
GEN_FRAME uint F_00b0f140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0ebf0(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f1d0 */
GEN_FRAME uint F_00b0f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0f210 */
GEN_FRAME unsigned int F_00b0f210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f240 */
GEN_FRAME unsigned int F_00b0f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f270 */
GEN_FRAME unsigned int F_00b0f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2a0 */
GEN_FRAME unsigned int F_00b0f2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2d0 */
GEN_FRAME unsigned int F_00b0f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f300 */
GEN_FRAME uint F_00b0f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = 0xe0000000;
  return (uint)param_2;
}

/* ref: FUN_00b0f310 */
GEN_FRAME unsigned int F_00b0f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f380 */
GEN_NOFRAME uint GEN_THISCALL F_00b0f380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0f3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b0f3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00b0f400 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b0f400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00b0f460 */
GEN_FRAME uint GEN_THISCALL F_00b0f460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f4a0 */
GEN_FRAME uint F_00b0f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0eb70(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f540 */
GEN_FRAME unsigned int F_00b0f540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f570 */
GEN_FRAME unsigned int F_00b0f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f5a0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0f5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f5e0 */
GEN_FRAME unsigned int F_00b0f5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f610 */
GEN_FRAME unsigned int F_00b0f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f640 */
GEN_FRAME unsigned int F_00b0f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0f660 */
GEN_FRAME unsigned int F_00b0f660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f660u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f690 */
GEN_FRAME unsigned int F_00b0f690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x12) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x12;
  }
  return 0;
}

/* ref: Client::Game::Fate::FateContext::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b0f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b094e0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0f700 */
GEN_NOFRAME uint GEN_THISCALL F_00b0f700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b0f760 */
GEN_NOFRAME uint GEN_THISCALL F_00b0f760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0f760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0f7a0 */
GEN_FRAME uint GEN_THISCALL F_00b0f7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x321);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00b0f920 */
GEN_FRAME uint GEN_THISCALL F_00b0f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x321);
    F_00b0f5a0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00b0f9c0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f9f0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa20 */
GEN_FRAME unsigned int F_00b0fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fa40 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa70 */
GEN_FRAME unsigned int F_00b0fa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fab0 */
GEN_FRAME uint GEN_THISCALL F_00b0fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fb60 */
GEN_NOFRAME uint GEN_THISCALL F_00b0fb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0fba0 */
GEN_FRAME uint GEN_THISCALL F_00b0fba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0fbe0 */
GEN_FRAME uint GEN_THISCALL F_00b0fbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00b0f7a0(this GEN_EDX_FWD,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x321);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_00b0fc60 */
GEN_FRAME uint GEN_THISCALL F_00b0fc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fd10 */
GEN_FRAME uint GEN_THISCALL F_00b0fd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fab0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fab0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fd80 */
GEN_FRAME uint GEN_THISCALL F_00b0fd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0f920(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0f920(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fdf0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0fdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fe20 */
GEN_NOFRAME uint GEN_THISCALL F_00b0fe20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb0fe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 0x12) {
      *puVar2 = 0xe0000000;
    }
    uVar4 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321
                        );
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0fe90 */
GEN_FRAME uint GEN_THISCALL F_00b0fe90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fe90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fc60(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fc60(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0ff00 */
GEN_FRAME uint GEN_THISCALL F_00b0ff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0ffb0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b0ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fff0 */
GEN_FRAME uint GEN_THISCALL F_00b0fff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd10(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd10(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b10060 */
GEN_FRAME uint GEN_THISCALL F_00b10060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00b0fd80(this GEN_EDX_FWD,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd80(this GEN_EDX_ARG,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00b100f0 */
GEN_FRAME uint GEN_THISCALL F_00b100f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb100f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = ((undefined4 *)GEN_TOP(((*(int *)((int)this + 8) - *(int *)this) / 0x48)));
  if (puVar1 < param_1) {
    puVar1 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 0x48,0,0x321);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = puVar1;
    for (puVar2 = *(undefined4 * PTR32 *)this; puVar2 != puVar3; puVar2 = puVar2 + 0x12) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar2;
        puVar7 = puVar5;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x12;
    }
    puVar3 = *(undefined4 * PTR32 *)this;
    iVar4 = *(int *)((int)this + 4) - (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
        *puVar3 = 0xe0000000;
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321);
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1 + (int)((int)(uintptr_t)param_1) * 0x12;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar1 + (iVar4 / 0x48) * 0x12;
    *(undefined4 * PTR32 *)this = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00b10200 */
GEN_FRAME uint GEN_THISCALL F_00b10200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fe90(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fe90(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b10270 */
GEN_FRAME uint GEN_THISCALL F_00b10270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar4 = param_3;
    while (puVar4 != puVar1) {
      puVar3 = puVar4 + 0x12;
      puVar6 = puVar2 + 0x12;
      puVar7 = puVar4;
      puVar8 = puVar2;
      for (iVar5 = 0x12; puVar2 = puVar6, puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 0x12) {
      *puVar4 = 0xe0000000;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b102e0 */
GEN_FRAME uint GEN_THISCALL F_00b102e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb102e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x48;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b100f0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b100f0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b10370 */
GEN_FRAME uint GEN_THISCALL F_00b10370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0ff00(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0ff00(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b103e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b103e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb103e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b102e0(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x48) * 0x48)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b102e0(this GEN_EDX_ARG,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x48;
  return;
}

/* ref: FUN_00b10450 */
GEN_FRAME uint GEN_THISCALL F_00b10450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b10270(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b10470 */
GEN_FRAME uint GEN_THISCALL F_00b10470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b10370(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b10370(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b104e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb104e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b0a090(*(undefined * PTR32 *)(this + 0x18) GEN_EDX_FWD,param_2,param_1,param_3,this);
  return uVar1;
}

/* ref: FUN_00b10500 */
GEN_FRAME uint GEN_THISCALL F_00b10500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b09eb0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf27 */
GEN_FRAME uint GEN_THISCALL F_00b10530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0be20(this + 0x314 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf53 */
GEN_FRAME uint GEN_THISCALL F_00b10540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  if (param_1 != -2) {
    if (param_1 != -1) {
      bVar1 = F_00b0b7e0(this + 0x314 GEN_EDX_FWD);
      if (bVar1 != 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    bVar1 = F_00b0b7e0(this + 0x314 GEN_EDX_ARG);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  uVar2 = F_006f3a50(*(undefined * PTR32 *)(this + 0x328) GEN_EDX_ARG,0,0);
  return uVar2;
}

/* ref: Client::Game::Fate::FateDirector::vf55 */
GEN_FRAME uint GEN_THISCALL F_00b10580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b0bee0(this + 0x314 GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf59 */
GEN_FRAME uint GEN_THISCALL F_00b10590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b0bfc0(this + 0x314 GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf24 */
GEN_FRAME uint GEN_THISCALL F_00b105a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb105a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0c390(this + 0x314 GEN_EDX_FWD,this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b105d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b105d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb105d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_00b105f0 */
GEN_FRAME uint GEN_THISCALL F_00b105f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb105f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  gen_size32 _Size;
  
  *(undefined2 *)((int)this + 4) = (undefined2)param_1;
  *(undefined2 *)((int)this + 6) = (undefined2)param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  *(undefined2 *)((int)this + 0xc) = 0x3440;
  _Size = (int)*(short *)((int)this + 6) * (int)*(short *)((int)this + 4);
  _Dst = (undefined *)F_00406bb0(_Size,0,0);
  if (_Dst != (undefined *)0x0) {
    if (-1 < (int)(_Size - 1)) {
      F_00c48350(_Dst,0,_Size);
    }
    *(undefined * PTR32 *)((int)this + 8) = _Dst;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00b10660 */
GEN_FRAME uint GEN_THISCALL F_00b10660(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10660u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = *(short *)(param_1 + 4) * param_4;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  if (*(short *)(param_1 + 4) < 1) {
    return 0;
  }
  do {
    if ((param_3 & uVar2) == 0) {
      local_10 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = local_10;
    }
    else {
      uVar1 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) +
              ((int)TRUNC(((float10)param_2 * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = (byte)uVar1;
      if (*(byte *)(param_1 + 0xc) < (byte)uVar1) {
        local_8 = local_8 | uVar2;
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)(param_1 + 8)))) = *(undefined1 *)(param_1 + 0xd);
      }
    }
    local_c = local_c + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + 1;
  } while (local_c < *(short *)(param_1 + 4));
  return local_8;
}

/* ref: FUN_00b10770 */
GEN_FRAME unsigned int GEN_THISCALL F_00b10770(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10770u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = 0;
  if (*(short *)((*(int *)&gen_args[0]) + 4) < 1) {
    return 0;
  }
  do {
    if ((*(uint *)((*(int *)&gen_args[2]) + iVar3 * 4) & (*(uint *)&gen_args[3])) == 0) {
      local_8 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = local_8;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) +
              ((int)TRUNC(((float10)(*(float *)&gen_args[1]) * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = (byte)uVar2;
      if (*(byte *)((*(int *)&gen_args[0]) + 0xc) < (byte)uVar2) {
        puVar1 = (uint *)((*(int *)&gen_args[2]) + iVar3 * 4);
        *puVar1 = *puVar1 | (*(uint *)&gen_args[4]);
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)((*(int *)&gen_args[0]) + 8)))) = *(undefined1 *)((*(int *)&gen_args[0]) + 0xd);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(short *)((*(int *)&gen_args[0]) + 4));
  return 0;
}

/* ref: FUN_00b10870 */
GEN_FRAME uint GEN_THISCALL F_00b10870(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb10870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *in_ecx = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00b108d0 */
GEN_FRAME uint GEN_THISCALL F_00b108d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb108d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10943d8) *
                      (float10)((float)GEN_TOF(((float10)(param_2 & 0xff) / (float10)*(double *)&REFG(undefined, 0x10943d8)
                                      )))) * (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  uVar2 = local_8;
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b10930 */
GEN_FRAME uint GEN_THISCALL F_00b10930(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb10930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                      (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  uVar2 = local_8;
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *in_ecx = uVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00b10990 */
GEN_FRAME uint GEN_THISCALL F_00b10990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*param_1 + (uint)*(byte *)this;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return (uint)this;
}

/* ref: FUN_00b109c0 */
GEN_FRAME uint GEN_THISCALL F_00b109c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb109c0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  return (uint)(*param_2 < *in_ecx);
}

/* ref: FUN_00b109e0 */
GEN_FRAME uint GEN_THISCALL F_00b109e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb109e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b109f0 */
GEN_FRAME uint GEN_THISCALL F_00b109f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb109f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)(byte)param_1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return uVar1;
}

/* ref: Client::System::Input::RepeatCounter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b10a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  F_00406b30(*(undefined4 *)(this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10a80 */
GEN_NOFRAME uint GEN_THISCALL F_00b10a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  if (REFG(int, 0x14c0d40) == 0) {
    uVar6 = 0;
    puVar5 = &REFG(int, 0x14c0d40);
    puVar4 = &REFG(undefined, 0x1081724);
    uVar3 = 0x800;
    pHVar1 = gen_imp_GetModuleHandleA((LPCSTR)0x0);
    iVar2 = gen_imp_DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
    if (iVar2 < 0) {
      REFG(int, 0x14c0d40) = 0;
      gen_imp_MessageBoxA((HWND)0x0,"DirectInput8Create failed","INFO",0);
      return (uint)this;
    }
  }
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + 1;
  return (uint)this;
}

/* ref: FUN_00b10af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b10af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) - 1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(int * PTR32, 0x14c0d40) != (int *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_FWD);
    REFG(int * PTR32, 0x14c0d40) = (int *)0x0;
  }
  return;
}

/* ref: Client::System::Input::InputDevice::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b10b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) - 1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(int * PTR32, 0x14c0d40) != (int *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_FWD);
    REFG(int * PTR32, 0x14c0d40) = (int *)0x0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10b70 */
GEN_FRAME uint GEN_THISCALL F_00b10b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HMODULE hModule;
  FARPROC pFVar1;
  int * piVar2;
  uint uVar3;
  
  gen_imp_ImmDisableTextFrameService(0xffffffff);
  hModule = gen_imp_LoadLibraryA("imm32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"ImmDisableTextFrameService");
    if (pFVar1 != (FARPROC)0x0) {
      ((code *)pFVar1)(0xffffffff);
    }
    gen_imp_FreeLibrary(hModule);
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed068),&(*(int * PTR32 *)(gen_frame + 0x4)));
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 4);
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,param_1,0,&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((-1 < (int)uVar3) && (uVar3 = 0, (*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Client::System::Input::CUIElementSink::vf1 */
GEN_FRAME uint GEN_STDCALL F_00b10c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb10c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00b10c30 */
GEN_FRAME byte GEN_THISCALL F_00b10c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                    (*(undefined4 * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))
                      ((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10ed078),this,(undefined4 *)((int)this + 0x10));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00b10ca0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b10ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return;
}

/* ref: FUN_00b10cf0 */
GEN_FRAME uint GEN_THISCALL F_00b10cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb10cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar2) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,&(*(uint *)(gen_frame + 0x8)));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: Client::System::Input::CCiceroEventSink::vf1 */
GEN_FRAME uint GEN_STDCALL F_00b10d40(unsigned int gen_a0)
{
  GEN_ENTER(0xb10d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar1;
  return uVar1;
}

/* ref: Client::System::Input::CCiceroEventSink::vf3 */
GEN_NOFRAME uint GEN_STDCALL F_00b10d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf4 */
GEN_NOFRAME uint GEN_STDCALL F_00b10d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf6 */
GEN_NOFRAME uint GEN_STDCALL F_00b10d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf7 */
GEN_NOFRAME uint GEN_STDCALL F_00b10d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b10da0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b10da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1c));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  return;
}

/* ref: FUN_00b10df0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b10df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return;
}

/* ref: FUN_00b10e50 */
GEN_FRAME unsigned int GEN_THISCALL F_00b10e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb10e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return;
}

/* ref: Client::System::Input::CUIElementSink::vf0 */
GEN_FRAME uint GEN_STDCALL F_00b10ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x10ed078)), uVar1 == 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004002;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Input::CUIElementSink::vf5 */
GEN_FRAME uint GEN_STDCALL F_00b10f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  code * pcVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  puVar1 = ((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3]));
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    pcVar2 = *(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8));
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar5 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar5) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar3[2] + 0x10))((int *)piVar3[2] GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
    return 0;
  }
  return 0x80070057;
}

/* ref: FUN_00b10fb0 */
GEN_FRAME uint GEN_THISCALL F_00b10fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10fb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  code * pcVar6;
  uint uVar7;
  undefined * puVar8;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x14)));
  if (-1 < (int)uVar4) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x10)));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x10));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
    pcVar6 = *(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x10));
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar4 = (*pcVar6)((*(int * PTR32 *)(gen_frame + 0x10)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar4) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,puVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
      if ((*(uint *)(gen_frame + 0x18)) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)));
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x18)) != 0) {
          do {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x2c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar4,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
            piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
            if ((int)uVar5 < 0) {
              pcVar6 = *(gen_code32 *)(*piVar2 + 4);
              uVar7 = uVar7 + 1;
              puVar8 = &REFG(undefined, 0x10ed064);
            }
            else {
              pcVar6 = *(gen_code32 *)(*piVar2 + 4);
              puVar8 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            }
            (*pcVar6)(piVar2,puVar8);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (*(uint *)(gen_frame + 0x18)));
        }
        if (uVar7 == (*(uint *)(gen_frame + 0x18))) {
          (*(uint *)(gen_frame + 0x18)) = 0;
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
        }
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
  }
  return (*(uint *)(gen_frame + 0x18));
}

/* ref: Client::System::Input::CCiceroEventSink::vf0 */
GEN_FRAME uint GEN_STDCALL F_00b110d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb110d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155bd0)), uVar1 == 0)) {
    uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155a40));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
    *param_3 = (int)param_1;
  }
  else {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + 1;
    }
    *param_3 = (int)piVar2;
  }
  if (*param_3 == 0) {
    return 0x80004002;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b11160 */
GEN_FRAME byte GEN_THISCALL F_00b11160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb11160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*puVar1);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *puVar1 = 0xffffffff;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                    (*(undefined4 * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1155a40),this,puVar1);
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return 1;
    }
    *puVar1 = 0xffffffff;
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00b11210 */
GEN_FRAME byte GEN_THISCALL F_00b11210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb11210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != -1) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (-1 < (int)uVar5) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,*puVar1);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      *puVar1 = 0xffffffff;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,piVar2);
  if (-1 < (int)uVar5) {
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 == (undefined4 *)0x0) {
      return 1;
    }
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar5) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&REFG(undefined, 0x1155bd0),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,puVar1);
      if ((int)uVar5 < 0) {
        *puVar1 = 0xffffffff;
      }
      else {
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      if ((*(byte *)(gen_frame + 0xb)) != 0) {
        return (*(byte *)(gen_frame + 0xb));
      }
    }
  }
  piVar4 = (int *)*piVar2;
  if (piVar4 == (int *)0x0) {
    return (*(byte *)(gen_frame + 0xb));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
  *piVar2 = 0;
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_00b11310 */
GEN_FRAME uint GEN_THISCALL F_00b11310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Input::CUIElementSink::vf2 */
GEN_FRAME uint GEN_STDCALL F_00b11340(unsigned int gen_a0)
{
  GEN_ENTER(0xb11340u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 1;
  *piVar1 = *piVar1 - 1;
  uVar3 = (*(int * PTR32 *)&gen_args[0])[1];
  if (*piVar1 == 0) {
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
    if ((*(int * PTR32 *)&gen_args[0])[4] != -1) {
      uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])))))
                        (((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)&gen_args[0]));
      if (-1 < (int)uVar3) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar2[4]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        piVar2[4] = -1;
      }
    }
    F_00406ad0(piVar2);
    uVar3 = 0;
  }
  return uVar3;
}

/* ref: Client::System::Input::CUIElementSink::vf3 */
GEN_FRAME uint GEN_STDCALL F_00b113b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb113b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[2]));
  if (uVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[2]));
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CUIElementSink::vf4 */
GEN_FRAME uint GEN_STDCALL F_00b11400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar1 - 1)
    ;
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CCiceroEventSink::vf5 */
GEN_FRAME uint GEN_STDCALL F_00b11440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00b11210(param_1 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: FUN_00b11460 */
GEN_FRAME byte GEN_THISCALL F_00b11460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb11460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  bool bVar3;
  byte extraout_AL = 0;
  byte bVar4;
  uint uVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  bVar3 = false;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
    if (puVar1[4] != -1) {
      uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)puVar1[3])))((undefined4 *)puVar1[3],&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar5) {
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar1[4]);
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        puVar1[4] = 0xffffffff;
      }
    }
    F_00406ad0(puVar1);
    *(undefined4 *)((int)this + 8) = 0;
    bVar3 = true;
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  bVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    bVar4 = (byte)uVar5;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (bVar3) {
    gen_imp_CoUninitialize();
    bVar4 = extraout_AL;
  }
  return bVar4;
}

/* ref: FUN_00b114f0 */
GEN_FRAME byte GEN_THISCALL F_00b114f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb114f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPVOID * ppv;
  LPVOID pvVar1;
  byte bVar2;
  HRESULT HVar3;
  uint uVar4;
  undefined4 * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 8) != 0) {
    return 1;
  }
  HVar3 = gen_imp_CoInitialize((LPVOID)0x0);
  if (HVar3 < 0) {
    F_00b10b70(this GEN_EDX_ARG,param_1);
    return 0;
  }
  if (param_2 == 0) {
    F_00b10b70(this GEN_EDX_ARG,param_1);
    gen_imp_CoUninitialize();
    return 0;
  }
  ppv = (LPVOID *)((int)this + 4);
  HVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed0d4),ppv);
  if (-1 < HVar3) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*ppv + 0x38))(*ppv GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
    if (-1 < (int)uVar4) {
      this_00 = (undefined4 *)F_00406b90(0x14,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        pvVar1 = *ppv;
        *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
        this_00[1] = 1;
        this_00[2] = param_2;
        this_00[3] = pvVar1;
        this_00[4] = 0xffffffff;
      }
      *(undefined4 * PTR32 *)((int)this + 8) = this_00;
      bVar2 = F_00b10c30(this_00 GEN_EDX_ARG);
      if (bVar2 != 0) {
        return 1;
      }
    }
    F_00b10b70(this GEN_EDX_ARG,param_1);
    F_00b11460(this GEN_EDX_ARG);
    return 0;
  }
  F_00b10b70(this GEN_EDX_ARG,param_1);
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00b11610 */
GEN_FRAME uint GEN_THISCALL F_00b11610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb11610u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(int * PTR32 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[2]);
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 7;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  F_00b11160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[3]));
  if ((-1 < (int)uVar1) && ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0)) {
    F_00b11210((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b11690 */
GEN_FRAME unsigned int GEN_THISCALL F_00b11690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb11690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1c));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 7;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  return;
}

/* ref: Client::System::Input::CCiceroEventSink::vf2 */
GEN_FRAME uint GEN_STDCALL F_00b11760(unsigned int gen_a0)
{
  GEN_ENTER(0xb11760u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 - 1;
  uVar2 = *(uint *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    F_00b11690(param_1 GEN_EDX_ARG);
    F_00406ad0(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b11790 */
GEN_FRAME uint GEN_THISCALL F_00b11790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_FWD,param_2,&(*(int *)(gen_frame + 0x4)));
  while ((uVar2 == 0 && ((*(int *)(gen_frame + 0x4)) == 0))) {
    pcVar1 = *(gen_code32 *)(*param_1 + 0xc);
    (*(int *)(gen_frame + 0x0)) = 0xff;
    uVar2 = (*pcVar1)(param_1,param_2,1,((undefined2 *)(gen_frame + 0x8)),0xff,&(*(int *)(gen_frame + 0x0)));
    if (-1 < (int)uVar2) {
      ((undefined2 *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x0)))] = 0;
      F_00b124c0((undefined *)((int)this + 0x24) GEN_EDX_ARG,((undefined2 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x0)));
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_ARG,param_2,&(*(int *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b11840 */
GEN_FRAME uint GEN_THISCALL F_00b11840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar3 = (undefined4 *)((int)this + 0x24);
  (*(uint *)(gen_frame + 0x30)) = 7;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar2 & 0xffff0000;
  F_00b123c0(((uint *)(gen_frame + 0x1c)) GEN_EDX_FWD,puVar3,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar1 = puVar3;
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar1 = (undefined4 *)*puVar3;
  }
  *(undefined2 *)puVar1 = 0;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1155ad0),&(*(int * PTR32 *)(gen_frame + 0xc)));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x10))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)));
    if (-1 < (int)uVar2) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      while (uVar2 == 0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)));
        if (-1 < (int)uVar2) {
          F_00b11790(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x10)),param_2);
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar2 = F_00b11d00(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,0,(*(undefined4 *)(gen_frame + 0x2c)),puVar3,*(undefined4 *)((int)this + 0x34));
  if (7 < (*(uint *)(gen_frame + 0x30))) {
    uVar2 = F_00406ad0(((uint *)(gen_frame + 0x1c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b11980 */
GEN_FRAME uint GEN_STDCALL F_00b11980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb11980u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  F_00b11840((undefined *)(param_1 - 4) GEN_EDX_ARG,param_2,param_3);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,1,0,0,&(*(int * PTR32 *)(gen_frame + 0x10)));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    while (uVar1 == 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_3,&(*(int *)(gen_frame + 0x8)));
      while ((uVar1 == 0 && ((*(int *)(gen_frame + 0x8)) == 0))) {
        (*(int *)(gen_frame + 0xc)) = 0xff;
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_3,1,((undefined2 *)(gen_frame + 0x18)),0xff,&(*(int *)(gen_frame + 0xc)));
        if (-1 < (int)uVar1) {
          ((undefined2 *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)))] = 0;
        }
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_3,&(*(int *)(gen_frame + 0x8)));
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b11ae0 */
GEN_FRAME uint F_00b11ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ae0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  ushort * puVar1;
  ushort * puVar2;
  int iVar3;
  
  puVar1 = param_1;
  puVar2 = param_2;
  iVar3 = param_3;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    if (*puVar1 != *puVar2) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  }
  return (-(uint)(*puVar1 < *puVar2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11b50 */
GEN_FRAME uint F_00b11b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11b50u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  ushort * puVar1;
  ushort * puVar2;
  int iVar3;
  
  puVar1 = param_1;
  puVar2 = param_2;
  iVar3 = param_3;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    if (*puVar1 != *puVar2) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  }
  return (-(uint)(*puVar1 < *puVar2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11c00 */
GEN_FRAME uint GEN_STDCALL F_00b11c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00b11c20 */
GEN_FRAME byte GEN_THISCALL F_00b11c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 2)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b11c80 */
GEN_FRAME uint F_00b11c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb11c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00b11d00 */
GEN_FRAME uint GEN_THISCALL F_00b11d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb11d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  ushort * puVar2;
  ushort * puVar3;
  uint uVar4;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar4 = param_2;
  if (uVar1 < param_2) {
    uVar4 = uVar1;
  }
  uVar1 = uVar4;
  if (param_4 <= uVar4) {
    uVar1 = param_4;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  puVar2 = (ushort *)((int)this + param_1 * 2);
  puVar3 = param_3;
  do {
    if (uVar1 == 0) {
LAB_00b11d66: ;
      if (param_4 <= uVar4) {
        return (uint)(uVar4 != param_4);
      }
      return 0xffffffff;
    }
    if (*puVar2 != *puVar3) {
      uVar1 = (-(uint)(*puVar2 < *puVar3) & 0xfffffffe) + 1;
      if (uVar1 != 0) {
        return uVar1;
      }
      goto LAB_00b11d66;
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    uVar1 = uVar1 - 1;
  } while( true );
}

/* ref: FUN_00b11da0 */
GEN_FRAME uint GEN_THISCALL F_00b11da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb11da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 0x10) = param_1;
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return param_1;
}

/* ref: FUN_00b11dd0 */
GEN_FRAME uint GEN_STDCALL F_00b11dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb11dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00b11e20 */
GEN_FRAME uint GEN_THISCALL F_00b11e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb11e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b11eb0 */
GEN_FRAME uint GEN_THISCALL F_00b11eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb11eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00b11d00(this GEN_EDX_FWD,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00b11ee0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b11ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (7 < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2 * 2);
    }
    F_00406ad0(uVar1);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return;
}

/* ref: FUN_00b11f30 */
GEN_FRAME uint GEN_THISCALL F_00b11f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((undefined *)((int)pvVar4 + param_1 * 2),((undefined *)GEN_TOP(((int)pvVar1 + (param_1 + uVar5) * 2))),
               (uVar2 - uVar5) * 2);
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + iVar3 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + iVar3 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b11fc0 */
GEN_FRAME uint GEN_THISCALL F_00b11fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1 | 7;
  uVar6 = param_1;
  if (uVar5 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = uVar1 >> 1;
    uVar6 = uVar5;
    if ((uVar5 / 3 < uVar3) && (uVar6 = uVar3 + uVar1, 0x7ffffffe - uVar3 < uVar1)) {
      uVar6 = 0x7ffffffe;
    }
  }
  uVar5 = uVar6 + 1;
  pvVar4 = (undefined *)0x0;
  if ((uVar5 != 0) &&
     ((0x7fffffff < uVar5 || (pvVar4 = (undefined *)F_004069f0(uVar5 * 2), pvVar4 == (undefined *)0x0)))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  if (param_2 != 0) {
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(pvVar4,pvVar2,param_2 * 2);
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined * PTR32 *)this = pvVar4;
  *(uint *)((int)this + 0x14) = uVar6;
  *(int *)((int)this + 0x10) = param_2;
  if (7 < uVar6) {
    this = pvVar4;
  }
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return 0;
}

/* ref: FUN_00b120e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b120e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb120e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x3f);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00b12110 */
GEN_FRAME uint F_00b12110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12110u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1 GEN_EDX_ARG,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00b12140 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b12140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb12140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  return;
}

/* ref: FUN_00b12170 */
GEN_FRAME uint GEN_THISCALL F_00b12170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (0x7ffffffe < (*(uint *)&gen_a1)) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < (*(uint *)&gen_a1)) {
    F_00b11fc0(this GEN_EDX_ARG,(*(uint *)&gen_a1),*(undefined4 *)((int)this + 0x10));
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if (((char)param_2 != '\0') && ((*(uint *)&gen_a1) < 8)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if ((*(uint *)&gen_a1) < uVar3) {
      uVar3 = (*(uint *)&gen_a1);
    }
    if (7 < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3 * 2);
      }
      F_00406ad0(uVar2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)((int)this + uVar3 * 2) = 0;
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if ((*(uint *)&gen_a1) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined2 *)this = 0;
  }
  return (uint)((*(uint *)&gen_a1) != 0);
}

/* ref: FUN_00b12230 */
GEN_NOFRAME uint GEN_STDCALL F_00b12230(unsigned int gen_a0)
{
  GEN_ENTER(0xb12230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b10d40(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00b12240 */
GEN_NOFRAME uint GEN_STDCALL F_00b12240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12240u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b110d0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b12250 */
GEN_FRAME uint GEN_THISCALL F_00b12250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb12250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b11690(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b12280 */
GEN_FRAME uint GEN_THISCALL F_00b12280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb12280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a("string too long");
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),(int)puVar4 + param_2 * 2,
               uVar5 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b12390 */
GEN_FRAME uint F_00b12390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12390u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1 GEN_EDX_ARG,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (uint)(uVar2 != 0);
}

/* ref: FUN_00b123c0 */
GEN_FRAME uint GEN_THISCALL F_00b123c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb123c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar4 = param_1[4] - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this == param_1) {
    F_00b11f30(this GEN_EDX_ARG,uVar4 + param_2,0xffffffff);
    F_00b11f30(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (0x7ffffffe < uVar4) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar4) {
    F_00b11fc0(this GEN_EDX_ARG,uVar4,*(undefined4 *)((int)this + 0x10));
    if (uVar4 == 0) {
      return (uint)this;
    }
  }
  else if (uVar4 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  pvVar2 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  iVar1 = uVar4 * 2;
  F_00c46aa0(pvVar2,(int)puVar3 + param_2 * 2,iVar1);
  *(uint *)((int)this + 0x10) = uVar4;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)(iVar1 + (int)this) = 0;
    return (uint)this;
  }
  *(undefined2 *)(iVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_00b124c0 */
GEN_FRAME uint GEN_THISCALL F_00b124c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb124c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (7 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (7 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2)))) {
        pvVar3 = this;
        if (7 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_00b12280(this GEN_EDX_FWD,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),param_1,param_2 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b125e0 */
GEN_NOFRAME uint GEN_STDCALL F_00b125e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb125e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b11760(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00b125f0 */
GEN_FRAME uint GEN_THISCALL F_00b125f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb125f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00b123c0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00b12630 */
GEN_FRAME uint F_00b12630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12630u, gen_a0, gen_a1, gen_a2, 0u);
  DWORD in_eax = (DWORD)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  HIMC param_3 = (HIMC)gen_a2;
  uint uVar1;
  DWORD dwBufLen;
  GEN_LPANY lpCandList;
  DWORD DVar2;
  undefined * PTR32 * ppuVar3;
  int iVar4;
  uint local_8;
  
  dwBufLen = gen_imp_ImmGetCandidateListW(param_3,in_eax,(GEN_LPANY)0x0,0);
  if (dwBufLen != 0) {
    lpCandList = (GEN_LPANY)F_00406a50(dwBufLen);
    *in_esi = (int)lpCandList;
    DVar2 = gen_imp_ImmGetCandidateListW(param_3,in_eax,lpCandList,dwBufLen);
    if (DVar2 != 0) {
      ((code *)REFG(gen_code32, 0x14c0d54))(*(undefined4 *)(*in_esi + 8));
      local_8 = 0;
      if (*(int *)(*in_esi + 8) != 0) {
        iVar4 = 0x18;
        do {
          uVar1 = *(uint *)(iVar4 + *in_esi);
          if (uVar1 < dwBufLen) {
            ppuVar3 = (undefined * PTR32 *)(*in_esi + uVar1);
          }
          else {
            ppuVar3 = &REFG(undefined * PTR32, 0x10ed11c);
          }
          ((code *)REFG(gen_code32, 0x14c0d58))(ppuVar3);
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 4;
        } while (local_8 < *(uint *)(*in_esi + 8));
      }
      REFG(undefined4, 0x14c0d68) = dwBufLen;
      return dwBufLen;
    }
  }
  return 0;
}

/* ref: FUN_00b126f0 */
GEN_FRAME uint F_00b126f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb126f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) == 0) {
    uVar2 = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        return (uint)uVar3;
      }
    }
  }
  else {
    uVar2 = ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar2 = (uint)uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b12780 */
GEN_FRAME uint F_00b12780(unsigned int gen_a0)
{
  GEN_ENTER(0xb12780u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) != 0) {
    uVar1 = 0;
    if (in_eax != 0) {
      uVar2 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar1 = 0;
      if (uVar2 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d60))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc),*(int *)((*(int *)(gen_frame + 0x8)) + 8) - 1);
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar1 = (uint)uVar3;
      }
    }
    return uVar1;
  }
  uVar1 = F_00b126f0(in_eax);
  return uVar1;
}

/* ref: FUN_00b127d0 */
GEN_NOFRAME unsigned int F_00b127d0(void)
{
  GEN_ENTER(0xb127d0u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14c0d68) != 0) {
    ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
  }
  return;
}

/* ref: FUN_00b127f0 */
GEN_FRAME uint F_00b127f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb127f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  HIMC param_2 = (HIMC)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  LONG LVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  (*(uint *)(gen_frame + 0x808)) = uVar1;
  if (param_2 != (HIMC)0x0) {
    if (param_3 < 0x110) {
      if (param_3 != 0x10f) {
        if (param_3 == 0x51) {
          ((code *)REFG(gen_code32, 0x14c0d48))();
          *param_6 = 1;
          F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
          return 0;
        }
        if (param_3 != 0x10d) {
          if (param_3 == 0x10e) {
            if (REFG(char, 0x14c0d6c) == '\0') {
              ((code *)REFG(gen_code32, 0x14c0d50))(&REFG(undefined, 0x10ed120));
            }
            REFG(char, 0x14c0d6c) = 0;
            *param_6 = 1;
            F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
            return 0;
          }
          goto LAB_00b12a29;
        }
      }
      if ((*param_5 & 0x800) != 0) {
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x800,((undefined2 *)(gen_frame + 0x408)),0x1ff);
        if (LVar2 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = LVar2 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x408))[(int)(iVar3)] = 0;
        ((code *)REFG(gen_code32, 0x14c0d50))(((undefined2 *)(gen_frame + 0x408)));
        REFG(char, 0x14c0d6c) = '\x01';
      }
      if ((*param_5 & 8) != 0) {
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,8,((undefined2 *)(gen_frame + 0x8)),0x1ff);
        if (LVar2 < 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = LVar2 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x8))[(int)(uVar1)] = 0;
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x10,((undefined1 *)(gen_frame + 0x608)),0x1ff);
        ((undefined1 *)(gen_frame + 0x608))[(int)((LVar2 < 0) - 1 & uVar1)] = 0;
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x80,(LPVOID)0x0,0);
        ((code *)REFG(gen_code32, 0x14c0d4c))(((undefined2 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x608)),uVar1,LVar2);
        REFG(char, 0x14c0d6c) = '\0';
      }
      *param_6 = 1;
      F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
      return 0;
    }
    if (param_3 == 0x281) {
      *param_5 = *param_5 & 0x3ffffff0;
    }
    else if (param_3 == 0x282) {
      if (param_4 == 3) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b12780(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
        return 0;
      }
      if (param_4 == 4) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b127d0();
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
        return 0;
      }
      if (param_4 == 5) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b126f0(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
        return 0;
      }
    }
  }
LAB_00b12a29: ;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b12aa0 */
GEN_FRAME uint GEN_THISCALL F_00b12aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb12aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  F_00b105f0((undefined *)((int)this + 4) GEN_EDX_FWD,0xa0,1);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed150));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ed148));
  return (uint)this;
}

/* ref: Client::System::Input::KeyboardDevice::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00b12ae0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb12ae0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  F_00b10770(param_1 + 4 GEN_EDX_FWD,param_2,&REFG(undefined4, 0x14c0d74),1,8);
  iVar2 = 8;
  uVar3 = REFG(undefined4, 0x14c1200);
  do {
    if ((*(byte *)(&REFG(undefined4, 0x14c0d74) + iVar2) & 8) != 0) {
      uVar1 = uVar3 + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar2,8);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + uVar3 * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar3 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return;
}

/* ref: Client::System::Input::KeyboardDevice::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00b12b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb12b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0xe;
  if ((char)param_1 != '\0') {
    uVar1 = 0xf;
  }
  REFG(undefined4, 0x14c0d70) = 0;
  REFG(undefined4, 0x14c11fc) = 0;
  REFG(undefined4, 0x14c1200) = 0;
  puVar2 = &REFG(undefined4, 0x14c0d74);
  do {
    *puVar2 = *puVar2 & ~uVar1;
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14c0ff4);
  return 0;
}

/* ref: Client::System::Input::KeyboardDevice::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00b12ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if ((byte)((byte)param_1 + 0x80) < 0x20) {
    bVar1 = ((char *)REFP(0x133a3ad))[(byte)param_1 + 3];
  }
  gen_imp_MapVirtualKeyA((uint)bVar1,0);
  switch((unsigned int)(uintptr_t)((uint)bVar1)) {
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x28: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x6f: ;
  case 0x90: ;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x4)))) = 1;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)bVar1;
  (*(WORD *)(((char *)((undefined *)(gen_frame + 0x4)) + 4))) = (ushort)bVar1;
  (*(undefined2 *)(gen_frame + 0x26)) = 0;
  (*((WORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 2))))) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 12))))) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 8))))) = 0;
  (*((LONG *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x4)) + 4) + 4))))) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 6;
  return (uint)(gen_imp_SendInput(2,((undefined *)(gen_frame + 0x4)),0x1c));
}

/* ref: FUN_00b12cc0 */
GEN_FRAME uint F_00b12cc0(void)
{
  GEN_ENTER(0xb12cc0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x21;
  uVar2 = REFG(undefined4, 0x14c1200);
  do {
    if (((&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] = (&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar3,2);
      uVar2 = REFG(undefined4, 0x14c1200);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar2 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x29);
  iVar3 = 0x60;
  do {
    if (((&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] = (&REFG(undefined4, 0x14c0d74))[(int)(iVar3)] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar3,2);
      uVar2 = REFG(undefined4, 0x14c1200);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar2 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x6a);
  uVar1 = REFG(undefined4, 0x14c0f2c);
  if ((REFG(undefined4, 0x14c0f2c) & 1) != 0) {
    REFG(undefined4, 0x14c0f2c) = REFG(undefined4, 0x14c0f2c) & 0xfffffffe | 4;
    uVar1 = uVar2 + 1 & 0x3f;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)),0x6e02);
    if (REFG(undefined4, 0x14c11fc) != uVar1) {
      *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + uVar2 * 8) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
      REFG(undefined4, 0x14c1200) = uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b12df0 */
GEN_FRAME unsigned int F_00b12df0(void)
{
  GEN_ENTER(0xb12df0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (((&REFG(undefined4, 0x14c0d74))[(int)(iVar2)] & 1) != 0) {
      (&REFG(undefined4, 0x14c0d74))[(int)(iVar2)] = (&REFG(undefined4, 0x14c0d74))[(int)(iVar2)] & 0xfffffffe | 4;
      uVar1 = REFG(undefined4, 0x14c1200) + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar2,2);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + REFG(undefined4, 0x14c1200) * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 0;
}

/* ref: FUN_00b12e60 */
GEN_FRAME uint GEN_STDCALL F_00b12e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb12e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  BOOL BVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
switchD_00b12eb4_caseD_104: ;
      if ((param_4 & 0x40000000) == 0) {
        if ((0xef < param_3) || (bVar5 = (&REFG(undefined, 0x133a340))[(int)(param_3)], bVar5 == 0)) {
          bVar5 = 1;
        }
        if (((&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] & 1) == 0) {
          if (bVar5 != 1) {
            (&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] = (&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] | 3;
          }
          (*(uint *)(gen_frame + 0xc)) = 0;
          if (((((0x40 < bVar5) && (bVar5 < 0x5b)) || ((0x2f < bVar5 && (bVar5 < 0x3a)))) ||
              (((0x5f < bVar5 && (bVar5 < 0x6a)) || (bVar5 == 0x20)))) &&
             (((BVar6 = gen_imp_GetKeyboardState(((BYTE *)(gen_frame + 0x10))), BVar6 != 0 && (((*(byte *)(gen_frame + 0x21)) & 0x80) == 0)) &&
              (((*(byte *)(gen_frame + 0x22)) & 0x80) == 0)))) {
            gen_imp_ToAscii(param_3,(int)param_4 >> 0x10 & 0xff,((BYTE *)(gen_frame + 0x10)),(LPWORD)&(*(uint *)(gen_frame + 0xc)),0);
          }
          (*(uint *)(gen_frame + 0x114)) = (*(uint *)(gen_frame + 0xc)) & 0xffff;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = 1;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = bVar5;
          (*(ushort *)(gen_frame + 0x110)) = CONCAT11(bVar5,1);
          F_00b132a0(&REFG(undefined, 0x14c0ff4) GEN_EDX_ARG,&(*(ushort *)(gen_frame + 0x110)));
          REFG(undefined4, 0x14c0d70) = 1;
        }
        if ((bVar5 == 0x10) || (bVar5 == 0x80)) {
          F_00b12cc0();
        }
        if ((bVar5 == 0xd) || (bVar5 == 0x1b)) {
          *(uint *)&REFG(undefined, 0x14c0db4) = *(uint *)&REFG(undefined, 0x14c0db4) & 0xfffffffe;
          *(uint *)&REFG(undefined, 0x14c0dbc) = *(uint *)&REFG(undefined, 0x14c0dbc) & 0xfffffffe;
          *(uint *)&REFG(undefined, 0x14c0db8) = *(uint *)&REFG(undefined, 0x14c0db8) & 0xfffffffe;
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
          return 0;
        }
      }
      goto switchD_00b12eb4_caseD_103;
    }
    if (param_2 != 6) goto switchD_00b12eb4_caseD_103;
    bVar7 = (short)param_3 == 0;
LAB_00b1314b: ;
    if (!bVar7) goto switchD_00b12eb4_caseD_103;
  }
  else {
    if (0x211 < param_2) {
      bVar7 = param_2 == 0x231;
      goto LAB_00b1314b;
    }
    if (param_2 != 0x211) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x101: ;
      case 0x105: ;
        bVar5 = F_00b13280(param_3);
        if (bVar5 == 0) {
          bVar5 = 1;
        }
        else if (bVar5 == 0x2c) {
          *(uint *)&REFG(undefined, 0x14c0e24) = *(uint *)&REFG(undefined, 0x14c0e24) | 2;
          (*(ushort *)(gen_frame + 0x110)) = 0x2c01;
          (*(uint *)(gen_frame + 0x114)) = 0;
          F_00b132a0(&REFG(undefined, 0x14c0ff4) GEN_EDX_ARG,&(*(ushort *)(gen_frame + 0x110)));
          REFG(undefined4, 0x14c0d70) = 1;
        }
        if (((&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] & 1) != 0) {
          (&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] = (&REFG(undefined4, 0x14c0d74))[(int)(bVar5)] & 0xfffffffe | 4;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = 2;
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = bVar5;
          (*(ushort *)(gen_frame + 0x110)) = CONCAT11(bVar5,2);
          (*(uint *)(gen_frame + 0x114)) = 0;
          F_00b132a0(&REFG(undefined, 0x14c0ff4) GEN_EDX_ARG,&(*(ushort *)(gen_frame + 0x110)));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
          return 0;
        }
        break;
      case 0x102: ;
      case 0x106: ;
        (*(uint *)(gen_frame + 0xc)) = 0;
        F_0042ad80(param_3,&(*(uint *)(gen_frame + 0xc)));
        uVar2 = (*(uint *)(gen_frame + 0x114));
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 0)) = (byte)(*(uint *)(gen_frame + 0xc));
        if ((*(uint *)(gen_frame + 0xc)) < 0x100) {
          (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = 0;
          (*(ushort *)(gen_frame + 0x110)) = (ushort)(byte)(*(uint *)(gen_frame + 0xc));
        }
        else {
          uVar3 = (undefined1)((*(uint *)(gen_frame + 0xc)) >> 8);
          (*(ushort *)(gen_frame + 0x110)) = (ushort)(*(uint *)(gen_frame + 0xc));
          uVar1 = (*(ushort *)(gen_frame + 0x110));
          (*(ushort *)(gen_frame + 0x110)) = uVar1;
          if ((*(uint *)(gen_frame + 0xc)) < 0x10000) {
            (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
            (*(undefined1 *)(gen_frame + 0x112)) = 0;
          }
          else {
            uVar4 = (undefined1)((*(uint *)(gen_frame + 0xc)) >> 0x10);
            if ((*(uint *)(gen_frame + 0xc)) < 0x1000000) {
              (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
              (*(undefined1 *)(gen_frame + 0x112)) = uVar4;
              (*(undefined1 *)(gen_frame + 0x113)) = 0;
            }
            else {
              (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x110)) + 1)) = uVar3;
              (*(undefined1 *)(gen_frame + 0x112)) = uVar4;
              (*(undefined1 *)(gen_frame + 0x113)) = (char)((*(uint *)(gen_frame + 0xc)) >> 0x18);
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x114)) + 0)) = 0;
              (*(uint *)(gen_frame + 0x114)) = uVar2 & 0xffffff00;
            }
          }
        }
        bVar5 = F_0042a800(&(*(ushort *)(gen_frame + 0x110)),REFG(undefined4, 0x108cc50));
        if (bVar5 != 0) {
          ((undefined2 *)(gen_frame + 0x4))[0] = 4;
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0xc));
          F_00b132a0(&REFG(undefined, 0x14c0ff4) GEN_EDX_ARG,((undefined2 *)(gen_frame + 0x4)));
          REFG(undefined4, 0x14c0d70) = 1;
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
          return 0;
        }
        break;
      case 0x104: ;
        goto switchD_00b12eb4_caseD_104;
      }
      goto switchD_00b12eb4_caseD_103;
    }
  }
  F_00b12df0();
switchD_00b12eb4_caseD_103: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b13180 */
GEN_FRAME unsigned int GEN_STDCALL F_00b13180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb13180u, gen_a0, gen_a1, gen_a2, gen_a3);
  HWND param_1 = (HWND)gen_a0;
  UINT param_2 = (UINT)gen_a1;
  WPARAM param_3 = (WPARAM)gen_a2;
  LPARAM param_4 = (LPARAM)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00b12e60(param_1,param_2,param_3,param_4,param_5,param_6);
  gen_imp_DefSubclassProc(param_1,param_2,param_3,param_4);
  return;
}

/* ref: Client::System::Input::KeyboardDevice::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00b131c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb131c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*((int *)GEN_TOP((*(int *)(this + 0x14) + 0x20))) == 0) {
    gen_imp_SetWindowSubclass(*((HWND *)GEN_TOP((*(int *)(this + 0x14) + 8))),((code *)REFP(0xb13180)),0,0);
  }
  return 1;
}

/* ref: Client::System::Input::KeyboardDevice::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b131e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb131e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*((int *)GEN_TOP((*(int *)(this + 0x14) + 0x20))) == 0) {
    gen_imp_RemoveWindowSubclass(*((HWND *)GEN_TOP((*(int *)(this + 0x14) + 8))),((code *)REFP(0xb13180)),0);
  }
  return;
}

/* ref: FUN_00b13200 */
GEN_NOFRAME uint GEN_THISCALL F_00b13200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb13200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed150));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ed148));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x20))) == 0) {
    gen_imp_RemoveWindowSubclass(*((HWND *)GEN_TOP((*(int *)((int)this + 0x14) + 8))),((code *)REFP(0xb13180)),0);
  }
  uVar1 = F_00b105d0((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  return uVar1;
}

/* ref: Client::System::Input::KeyboardDeviceInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b13250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb13250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b13280 */
GEN_FRAME byte F_00b13280(unsigned int gen_a0)
{
  GEN_ENTER(0xb13280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xef < param_1) {
    return 0;
  }
  return (&REFG(undefined, 0x133a340))[(int)(param_1)];
}

/* ref: FUN_00b132a0 */
GEN_FRAME uint GEN_THISCALL F_00b132a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb132a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x20c);
  uVar2 = iVar1 + 1U & 0x3f;
  if (*(uint *)((int)this + 0x208) != uVar2) {
    *(undefined4 *)((int)this + iVar1 * 8) = *param_1;
    *(undefined4 *)((int)this + iVar1 * 8 + 4) = param_1[1];
    *(uint *)((int)this + 0x20c) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00b132e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b132e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb132e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b13300((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Input::KeyboardDevice::vf4 */
GEN_NOFRAME uint F_00b132f0(void)
{
  GEN_ENTER(0xb132f0u, 0u, 0u, 0u, 0u);
  return 0x14c0d70;
}

/* ref: Client::System::Input::KeyboardDevice::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b13300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb13300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed150));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ed148));
  if (*((int *)GEN_TOP((*(int *)(this + 0x14) + 0x20))) == 0) {
    gen_imp_RemoveWindowSubclass(*((HWND *)GEN_TOP((*(int *)(this + 0x14) + 8))),((code *)REFP(0xb13180)),0);
  }
  F_00b105d0(this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b133e0 */
GEN_FRAME byte F_00b133e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb133e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (&REFG(undefined, 0x133a588))[(int)((byte)param_1)];
}

/* ref: FUN_00b133f0 */
GEN_NOFRAME uint GEN_STDCALL F_00b133f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb133f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  uVar7 = 0;
  uVar8 = 0;
  if (param_4 != 0) {
    pfVar9 = (float *)(param_3 + 0x20);
    do {
      fVar15 = ((pfVar9[-8] * fVar3 + pfVar9[-4]) + *pfVar9 * fVar4) + pfVar9[4] * fVar5;
      fVar16 = ((pfVar9[-7] * fVar3 + pfVar9[-3]) + pfVar9[1] * fVar4) + pfVar9[5] * fVar5;
      fVar17 = ((pfVar9[-6] * fVar3 + pfVar9[-2]) + pfVar9[2] * fVar4) + pfVar9[6] * fVar5;
      fVar18 = ((pfVar9[-5] * fVar3 + pfVar9[-1]) + pfVar9[3] * fVar4) + pfVar9[7] * fVar5;
      fVar11 = ((pfVar9[8] * fVar3 + pfVar9[0xc]) + pfVar9[0x10] * fVar4) + pfVar9[0x14] * fVar5;
      fVar12 = ((pfVar9[9] * fVar3 + pfVar9[0xd]) + pfVar9[0x11] * fVar4) + pfVar9[0x15] * fVar5;
      fVar13 = ((pfVar9[10] * fVar3 + pfVar9[0xe]) + pfVar9[0x12] * fVar4) + pfVar9[0x16] * fVar5;
      fVar14 = ((pfVar9[0xb] * fVar3 + pfVar9[0xf]) + pfVar9[0x13] * fVar4) + pfVar9[0x17] * fVar5;
      (*(undefined4 *)((char *)&auVar19 + 4)) = -(uint)(fVar6 < fVar12);
      (*(undefined4 *)((char *)&auVar19 + 0)) = -(uint)(fVar6 < fVar11);
      (*(undefined4 *)((char *)&auVar19 + 8)) = -(uint)(fVar6 < fVar13);
      (*(undefined4 *)((char *)&auVar19 + 12)) = -(uint)(fVar6 < fVar14);
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar6 < fVar16);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar6 < fVar15);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar6 < fVar17);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar6 < fVar18);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar19), &(auVar2));
      iVar10 = gen_movmskps(gen_vt0);
      if (iVar10 == 0) {
        (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar12 < 0.0 - fVar6 && fVar16 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar11 < 0.0 - fVar6 && fVar15 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar13 < 0.0 - fVar6 && fVar17 < 0.0 - fVar6);
        (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar14 < 0.0 - fVar6 && fVar18 < 0.0 - fVar6);
        iVar10 = gen_movmskps(&(auVar1));
        if (iVar10 == 0xf) {
          *(undefined1 *)(uVar7 + param_1) = 3;
        }
        else {
          *(undefined1 *)(uVar7 + param_1) = 1;
        }
        *(char *)(uVar7 + param_2) = (char)uVar8;
        uVar7 = uVar7 + 1;
      }
      pfVar9 = pfVar9 + 0x20;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
  }
  return uVar7;
}

/* ref: FUN_00b134f0 */
GEN_FRAME uint GEN_STDCALL F_00b134f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb134f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 in_ECX = 0;
  int iVar7;
  undefined4 in_EDX = 0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  fVar11 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar12 = ((*param_1 * fVar11 + param_1[4]) + param_1[8] * fVar3) + param_1[0xc] * fVar4;
  fVar13 = ((param_1[1] * fVar11 + param_1[5]) + param_1[9] * fVar3) + param_1[0xd] * fVar4;
  fVar14 = ((param_1[2] * fVar11 + param_1[6]) + param_1[10] * fVar3) + param_1[0xe] * fVar4;
  fVar15 = ((param_1[3] * fVar11 + param_1[7]) + param_1[0xb] * fVar3) + param_1[0xf] * fVar4;
  fVar8 = ((param_1[0x10] * fVar11 + param_1[0x14]) + param_1[0x18] * fVar3) + param_1[0x1c] * fVar4
  ;
  fVar9 = ((param_1[0x11] * fVar11 + param_1[0x15]) + param_1[0x19] * fVar3) + param_1[0x1d] * fVar4
  ;
  fVar10 = ((param_1[0x12] * fVar11 + param_1[0x16]) + param_1[0x1a] * fVar3) +
           param_1[0x1e] * fVar4;
  fVar11 = ((param_1[0x13] * fVar11 + param_1[0x17]) + param_1[0x1b] * fVar3) +
           param_1[0x1f] * fVar4;
  (*(undefined4 *)((char *)&auVar16 + 4)) = -(uint)(fVar5 < fVar9);
  (*(undefined4 *)((char *)&auVar16 + 0)) = -(uint)(fVar5 < fVar8);
  (*(undefined4 *)((char *)&auVar16 + 8)) = -(uint)(fVar5 < fVar10);
  (*(undefined4 *)((char *)&auVar16 + 12)) = -(uint)(fVar5 < fVar11);
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar5 < fVar13);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar5 < fVar12);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar5 < fVar14);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar5 < fVar15);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar16), &(auVar2));
  iVar7 = gen_movmskps(gen_vt0);
  uVar6 = 0;
  if (iVar7 == 0) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar9 < 0.0 - fVar5 && fVar13 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar8 < 0.0 - fVar5 && fVar12 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar10 < 0.0 - fVar5 && fVar14 < 0.0 - fVar5);
    (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar11 < 0.0 - fVar5 && fVar15 < 0.0 - fVar5);
    iVar7 = gen_movmskps(&(auVar1));
    uVar6 = (uint)(iVar7 == 0xf) * 2 + 1;
  }
  return uVar6;
}

/* ref: FUN_00b13590 */
GEN_NOFRAME uint GEN_STDCALL F_00b13590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13590u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 in_EDX = 0;
  int iVar5;
  undefined1 auVar6 [16];
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
  
  fVar10 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  fVar11 = ((*param_1 * fVar10 + param_1[4]) + param_1[8] * fVar15) + param_1[0xc] * fVar16;
  fVar12 = ((param_1[1] * fVar10 + param_1[5]) + param_1[9] * fVar15) + param_1[0xd] * fVar16;
  fVar13 = ((param_1[2] * fVar10 + param_1[6]) + param_1[10] * fVar15) + param_1[0xe] * fVar16;
  fVar14 = ((param_1[3] * fVar10 + param_1[7]) + param_1[0xb] * fVar15) + param_1[0xf] * fVar16;
  fVar22 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar7 = ((param_1[0x10] * fVar10 + param_1[0x14]) + param_1[0x18] * fVar15) +
          param_1[0x1c] * fVar16;
  fVar8 = ((param_1[0x11] * fVar10 + param_1[0x15]) + param_1[0x19] * fVar15) +
          param_1[0x1d] * fVar16;
  fVar9 = ((param_1[0x12] * fVar10 + param_1[0x16]) + param_1[0x1a] * fVar15) +
          param_1[0x1e] * fVar16;
  fVar10 = ((param_1[0x13] * fVar10 + param_1[0x17]) + param_1[0x1b] * fVar15) +
           param_1[0x1f] * fVar16;
  fVar15 = (gen_bits2f((uint)gen_fl2bits(param_1[8]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(*param_1) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xc]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar4;
  fVar16 = (gen_bits2f((uint)gen_fl2bits(param_1[9]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[1]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xd]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar4;
  fVar17 = (gen_bits2f((uint)gen_fl2bits(param_1[10]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[2]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xe]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar4;
  fVar18 = (gen_bits2f((uint)gen_fl2bits(param_1[0xb]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[3]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0xf]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar4;
  fVar19 = (gen_bits2f((uint)gen_fl2bits(param_1[0x18]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x10]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1c]) & *(uint *)&REFG(undefined, 0x10ed1b0)) * fVar4;
  fVar20 = (gen_bits2f((uint)gen_fl2bits(param_1[0x19]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x11]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1d]) & *(uint *)&REFG(undefined, 0x10ed1b4)) * fVar4;
  fVar21 = (gen_bits2f((uint)gen_fl2bits(param_1[0x1a]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x12]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1e]) & *(uint *)&REFG(undefined, 0x10ed1b8)) * fVar4;
  fVar22 = (gen_bits2f((uint)gen_fl2bits(param_1[0x1b]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar3 +
           gen_bits2f((uint)gen_fl2bits(param_1[0x13]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar22) +
           gen_bits2f((uint)gen_fl2bits(param_1[0x1f]) & *(uint *)&REFG(undefined, 0x10ed1bc)) * fVar4;
  (*(undefined4 *)((char *)&auVar6 + 4)) = -(uint)(fVar20 < fVar8);
  (*(undefined4 *)((char *)&auVar6 + 0)) = -(uint)(fVar19 < fVar7);
  (*(undefined4 *)((char *)&auVar6 + 8)) = -(uint)(fVar21 < fVar9);
  (*(undefined4 *)((char *)&auVar6 + 12)) = -(uint)(fVar22 < fVar10);
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(fVar16 < fVar12);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(fVar15 < fVar11);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(fVar17 < fVar13);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(fVar18 < fVar14);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar6), &(auVar2));
  iVar5 = gen_movmskps(gen_vt0);
  if (iVar5 != 0) {
    return 0;
  }
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(fVar8 < 0.0 - fVar20 && fVar12 < 0.0 - fVar16);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(fVar7 < 0.0 - fVar19 && fVar11 < 0.0 - fVar15);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(fVar9 < 0.0 - fVar21 && fVar13 < 0.0 - fVar17);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(fVar10 < 0.0 - fVar22 && fVar14 < 0.0 - fVar18);
  iVar5 = gen_movmskps(&(auVar1));
  return (uint)(iVar5 == 0xf) * 2 + 1;
}

/* ref: FUN_00b136d0 */
GEN_FRAME uint GEN_THISCALL F_00b136d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb136d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bcb490(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b136e0 */
GEN_FRAME uint GEN_THISCALL F_00b136e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb136e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bcb5b0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00b13770 */
GEN_FRAME uint GEN_FASTCALL F_00b13770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13770u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *param_2;
  if (param_3 == uVar1) {
    *param_2 = param_1;
    uVar1 = param_3;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00b13780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b13780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb13780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  
  in_ecx = *(int *)((int)this + 0x3930);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed1ec));
  if (in_ecx != 0) {
    F_00bcabf0(in_ecx GEN_EDX_FWD);
    F_00406ad0(in_ecx);
    *(undefined4 *)((int)this + 0x3930) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38bc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3854) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1dc));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1c4));
  return;
}

/* ref: FUN_00b137d0 */
GEN_FRAME double GEN_THISCALL F_00b137d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb137d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  float10 extraout_ST0;
  
  iVar1 = (uint)(ushort)param_1 * 0x10 + *(int *)((int)this + 8);
  if ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a538) + (uint)*(byte *)(iVar1 + 2) * 4) == (code *)0x0) {
    return 0.0;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(&REFG(undefined, 0x133a538) + (uint)*(byte *)(iVar1 + 2) * 4))(*(undefined4 *)(iVar1 + 4));
  return (double)extraout_ST0;
}

/* ref: FUN_00b13810 */
GEN_FRAME uint GEN_THISCALL F_00b13810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb13810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  LOCK();
  uVar1 = REFG(undefined4, 0x14c1284);
  uVar1 = REFG(undefined4, 0x14c1284);
  uVar1 = REFG(undefined4, 0x14c1284);
  uVar5 = REFG(undefined4, 0x14c1284);
  REFG(undefined4, 0x14c1284) = uVar1;
  UNLOCK();
  if ((char)param_1 == '\0') {
    if (uVar5 < 3) {
      return uVar5;
    }
  }
  else if (uVar5 == 0) {
    return 0;
  }
  do {
    uVar6 = 0;
    puVar4 = &REFG(undefined4, 0x14c1a10);
    uVar5 = 0;
    do {
      LOCK();
      puVar3 = (undefined4 *)*puVar4;
      if (puVar3 == (undefined4 *)0x2) {
        *puVar4 = 3;
        puVar3 = (undefined4 *)0x2;
      }
      UNLOCK();
      if (puVar3 == (undefined4 *)0x2) {
        puVar3 = &REFG(undefined4, 0x14c1284);
        LOCK();
        uVar1 = REFG(undefined4, 0x14c1284);
        uVar1 = REFG(undefined4, 0x14c1284);
        iVar2 = REFG(undefined4, 0x14c1284);
        uVar1 = REFG(undefined4, 0x14c1284);
        REFG(undefined4, 0x14c1284) = iVar2 - 1;
        UNLOCK();
        ((int *)(gen_frame + 0xc))[(int)(uVar6)] = (int)puVar4;
        uVar6 = uVar6 + 1;
        if (2 < uVar6) break;
      }
      uVar5 = uVar5 + 0x50;
      puVar4 = puVar4 + 0x14;
    } while (uVar5 < 0x4b0);
    if (uVar6 != 0) {
      puVar3 = (undefined4 *)
               F_00a1a340(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x392c),((int *)(gen_frame + 0xc)),uVar6,
                            *(undefined4 *)(((int *)(gen_frame + 0xc))[0] + 0x24));
    }
    if (((char)param_1 == '\0') || (uVar6 == 0)) {
      return (uint)puVar3;
    }
  } while( true );
}

/* ref: FUN_00b13ab0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b13ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb13ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x10);
  uVar1 = *(ushort *)(param_3 + 0xff0);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0;
      if (param_1 != 0) {
        puVar4 = ((undefined4 *)GEN_TOP((iVar2 + (uint)*((ushort *)GEN_TOP((param_3 + 0xf00 + (uVar5 & 0xffff) * 2))) * 0x10)));
        do {
          *puVar4 = *(undefined4 *)(param_2 + uVar3 * 4);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < param_1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0;
}

/* ref: FUN_00b13b20 */
GEN_FRAME uint GEN_THISCALL F_00b13b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb13b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar4 = *(int *)((int)this + 0x10);
  uVar3 = *(ushort *)(param_5 + 0xff0);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (uVar3 != 0) {
    do {
      uVar9 = (*(uint *)(gen_frame + 0xc)) & 0xffff;
      iVar7 = uVar9 * 0x10 + param_5;
      uVar6 = F_00b133f0(((byte *)(gen_frame + 0x58)),((byte *)(gen_frame + 0x18)),param_1,param_4,iVar7);
      if (uVar6 != 0) {
        iVar5 = (uint)*(ushort *)(param_5 + 0xf00 + uVar9 * 2) * 4;
        (*(uint *)(gen_frame + 0x14)) = 0;
        if (uVar6 != 0) {
          do {
            bVar2 = ((byte *)(gen_frame + 0x18))[(int)((*(uint *)(gen_frame + 0x14)))];
            if (((byte *)(gen_frame + 0x58))[(int)((*(uint *)(gen_frame + 0x14)))] == 1) {
              uVar10 = (uint)bVar2;
              uVar8 = F_00b13590(uVar10 * 0x80 + param_1,iVar7,(uVar9 + 0x78) * 0x10 + param_5);
              if ((char)uVar8 != '\0') {
                puVar1 = ((uint *)GEN_TOP((iVar4 + ((uint)*(byte *)(uVar10 + param_2) + iVar5) * 4)));
                *puVar1 = *puVar1 | (uVar8 & 0xff) << (*(byte *)(uVar10 + param_3) & 0x1f);
              }
            }
            else {
              puVar1 = ((uint *)GEN_TOP((iVar4 + ((uint)*(byte *)((uint)bVar2 + param_2) + iVar5) * 4)));
              *puVar1 = *puVar1 | (uint)((byte *)(gen_frame + 0x58))[(int)((*(uint *)(gen_frame + 0x14)))] <<
                                  (*(byte *)((uint)bVar2 + param_3) & 0x1f);
            }
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
          } while ((*(uint *)(gen_frame + 0x14)) < uVar6);
        }
      }
      uVar6 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar6;
    } while (uVar6 < uVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00b13cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00b13cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb13cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  code * pcVar2;
  float * pfVar3;
  short * this_00;
  uint uVar4;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_1c = 0;
  do {
    uVar1 = *((uint *)GEN_TOP((local_1c + *(int *)((int)this + 0xc))));
    if (uVar1 != 0) {
      uVar4 = 0;
      local_14 = 1;
      do {
        if ((((local_14 & uVar1) != 0) &&
            (this_00 = ((short *)GEN_TOP(((local_18 + uVar4) * 0x10 + *(int *)((int)this + 8)))),
            *this_00 != -1)) &&
           (pcVar2 = *(gen_code32 *)(&REFG(undefined, 0x133a560) + (uint)*(byte *)(this_00 + 1) * 4),
           pcVar2 != (code *)0x0)) {
          pfVar3 = (float *)F_00b81f10(this_00 GEN_EDX_FWD);
          (*pcVar2)(*(undefined4 *)(this_00 + 2),
                    (undefined4)
                    gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)pfVar3[2] - (float10)param_1[2]) *
                                        (float10)(float)((float10)pfVar3[2] - (float10)param_1[2]) +
                                       ((float10)(float)((float10)pfVar3[1] - (float10)param_1[1]) *
                                        (float10)(float)((float10)pfVar3[1] - (float10)param_1[1]) +
                                       (float10)(float)((float10)*pfVar3 - (float10)*param_1) *
                                       (float10)(float)((float10)*pfVar3 - (float10)*param_1)))))));
        }
        uVar4 = uVar4 + 1;
        local_14 = local_14 << 1 | (uint)((int)local_14 < 0);
      } while (uVar4 < 0x20);
    }
    local_18 = local_18 + 0x20;
    local_1c = local_1c + 4;
  } while (local_1c < 0xa00);
  return local_1c;
}

/* ref: FUN_00b13dc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b13dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb13dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  float * pfVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x18);
    local_18 = 0;
    local_20 = 0;
    do {
      uVar2 = *((uint *)GEN_TOP((local_20 + *(int *)((int)this + 0xc))));
      if (uVar2 != 0) {
        local_1c = 0;
        local_14 = 1;
        do {
          if ((local_14 & uVar2) != 0) {
            iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 + (local_18 + local_1c) * 4) * 4)))
            ;
            if (iVar3 != 0) {
              this_00 = ((undefined *)GEN_TOP(((local_18 + local_1c) * 0x10 + *(int *)((int)this + 8))));
              pfVar4 = (float *)F_00b81f10(this_00 GEN_EDX_FWD);
              ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4e8) + (uint)*(byte *)((int)this_00 + 2) * 4))
                        (*(undefined4 *)((int)this_00 + 4),uVar1,iVar3,
                         (undefined4)
                         gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)pfVar4[2] -
                                                             (float10)param_2[2]) *
                                             (float10)(float)((float10)pfVar4[2] -
                                                             (float10)param_2[2]) +
                                            ((float10)(float)((float10)pfVar4[1] -
                                                             (float10)param_2[1]) *
                                             (float10)(float)((float10)pfVar4[1] -
                                                             (float10)param_2[1]) +
                                            (float10)(float)((float10)*pfVar4 - (float10)*param_2) *
                                            (float10)(float)((float10)*pfVar4 - (float10)*param_2)))))
                                    ));
            }
          }
          local_1c = local_1c + 1;
          local_14 = local_14 << 1 | (uint)((int)local_14 < 0);
        } while (local_1c < 0x20);
      }
      local_18 = local_18 + 0x20;
      local_20 = local_20 + 4;
    } while (local_20 < 0xa00);
  }
  return;
}

/* ref: FUN_00b13ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00b13ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb13ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed1ec));
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3854) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1dc));
  *(undefined4 *)((int)this + 0x3858) = 0;
  *(undefined4 *)((int)this + 0x385c) = 0;
  *(undefined4 *)((int)this + 0x3860) = 0;
  *(undefined4 *)((int)this + 0x3864) = 0;
  *(undefined4 *)((int)this + 0x3868) = 0;
  *(undefined4 *)((int)this + 0x386c) = 0;
  *(undefined4 *)((int)this + 0x38b0) = 0;
  *(undefined4 *)((int)this + 0x38b4) = 0;
  *(undefined4 *)((int)this + 0x38b8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38bc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ed1e4));
  *(undefined4 *)((int)this + 0x38c0) = 0;
  *(undefined4 *)((int)this + 0x38c4) = 0;
  *(undefined4 *)((int)this + 0x38c8) = 0;
  *(undefined4 *)((int)this + 0x38cc) = 0;
  *(undefined4 *)((int)this + 0x38d0) = 0;
  *(undefined4 *)((int)this + 0x38d4) = 0;
  *(undefined4 *)((int)this + 0x3918) = 0;
  *(undefined4 *)((int)this + 0x391c) = 0;
  *(undefined4 *)((int)this + 0x3920) = 0;
  *(undefined4 *)((int)this + 0x392c) = 0;
  uVar1 = F_00406b90(0x320120,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00bcab40(uVar1 GEN_EDX_ARG);
    *(uint *)((int)this + 0x3930) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x3930) = 0;
  return (uint)this;
}

/* ref: FUN_00b13fd0 */
GEN_NOFRAME byte GEN_THISCALL F_00b13fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb13fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)((int)this + 0x3860);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 < *(uint *)((int)this + 0x385c)) {
    iVar4 = *(int *)((int)this + 0x3858) + uVar2 * 0x14;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1c0) = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x38c8);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0x38c4) <= uVar2) {
    *(undefined4 *)(iVar3 + 0x1c4) = 0;
    return 0;
  }
  iVar4 = *(int *)((int)this + 0x38c0) + uVar2 * 0x14;
  *(int *)(iVar3 + 0x1c4) = iVar4;
  return iVar4 != 0;
}

/* ref: FUN_00b14060 */
GEN_FRAME uint GEN_THISCALL F_00b14060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb14060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  puVar5 = *(uint * PTR32 *)((int)this + 0xc);
  uVar4 = 0;
  do {
    uVar1 = *puVar5;
    if (uVar1 != 0xffffffff) {
      uVar3 = 0;
      do {
        uVar2 = 1 << ((byte)uVar3 & 0x1f);
        if ((uVar1 & uVar2) == 0) {
          *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + uVar4 * 4))) = uVar2 | uVar1;
          uVar4 = (uVar3 + uVar4 * 0x20) * 0x10 + *(int *)((int)this + 8);
          F_00b81e80(uVar4 GEN_EDX_FWD);
          *(char *)(uVar4 + 2) = (char)param_1;
          if ((char)param_1 != '\x02') {
            *(ushort *)(uVar4 + 0xe) = *(ushort *)(uVar4 + 0xe) & 0x7fff;
            return uVar4;
          }
          *(ushort *)(uVar4 + 0xe) = *(ushort *)(uVar4 + 0xe) | 0x8000;
          return uVar4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x20);
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0x280);
  return 0;
}

/* ref: FUN_00b14100 */
GEN_FRAME uint GEN_THISCALL F_00b14100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb14100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 - *(int *)((int)this + 8) >> 4;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar2 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
  uVar2 = 0xffff;
  if (*param_1 != -1) {
    uVar2 = F_00bcb350(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_FWD,param_1,(uint)*(byte *)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_00b14160 */
GEN_NOFRAME uint GEN_THISCALL F_00b14160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb14160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00bcb9f0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_FWD,(uint)*(byte *)((int)this + 4));
  if (*(char *)((int)this + 5) != '\0') {
    iVar2 = *(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x90;
    F_0062e660((undefined *)(REFG(int, 0x137127c) + 0xaf90) GEN_EDX_ARG,iVar2);
    uVar1 = F_00b13cc0(this GEN_EDX_ARG,iVar2);
    *(undefined1 *)((int)this + 5) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00b141b0 */
GEN_FRAME uint GEN_THISCALL F_00b141b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb141b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 0;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 4));
  if (((*(char *)((int)this + 4) == '\0') && ((char)param_1[1] != '\x06')) && (-1 < param_1[7])) {
    uVar1 = F_00bcacd0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_FWD,param_2);
    uVar2 = (uint)uVar1;
  }
  if (*param_1 == -1) {
    uVar2 = F_00bcb0b0(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_ARG,uVar2,param_1,param_2,local_8);
    return uVar2;
  }
  uVar1 = F_00bcb330(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,param_1);
  if ((ushort)uVar2 == uVar1) {
    uVar2 = F_00bcb290(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,(uint)uVar1,param_1,param_2,local_8);
    return uVar2;
  }
  F_00bcb350(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,param_1,local_8);
  uVar2 = F_00bcb0b0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,uVar2,param_1,param_2,local_8);
  return uVar2;
}

/* ref: FUN_00b14280 */
GEN_FRAME uint GEN_THISCALL F_00b14280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb14280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 0;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 4));
  if (((*(char *)((int)this + 4) == '\0') && ((char)param_1[1] != '\x06')) && (-1 < param_1[7])) {
    uVar1 = F_00bcaee0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_FWD,param_2);
    uVar2 = (uint)uVar1;
  }
  if (*param_1 == -1) {
    uVar2 = F_00bcb180(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_ARG,uVar2,param_1,param_2,local_8);
    return uVar2;
  }
  uVar1 = F_00bcb330(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,param_1);
  if ((ushort)uVar2 == uVar1) {
    uVar2 = F_00bcb2e0(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,(uint)uVar1,param_1,param_2,local_8);
    return uVar2;
  }
  F_00bcb350(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,param_1,local_8);
  uVar2 = F_00bcb180(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG,uVar2,param_1,param_2,local_8);
  return uVar2;
}

/* ref: FUN_00b14350 */
GEN_NOFRAME uint GEN_THISCALL F_00b14350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb14350u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  undefined4 uVar2;
  code * pcVar3;
  uint uVar4;
  ushort * puVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar4 = param_2 * 0x10;
  bVar1 = *((byte *)GEN_TOP((*(int *)(param_1 + 8) + 2 + uVar4)));
  uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4 + uVar4)));
  pcVar3 = *(gen_code32 *)(&REFG(undefined, 0x133a510) + (uint)bVar1 * 4);
  if (pcVar3 != (code *)0x0) {
    if (bVar1 == 3) {
      puVar5 = ((ushort *)GEN_TOP((uVar4 + *(int *)(param_1 + 8))));
      pfVar6 = ((float *)GEN_TOP((((uint)*puVar5 * 0x100 + 8 + (uint)*(byte *)((int)puVar5 + 3)) * 0x10 +
                        *(int *)(param_1 + 0x3930))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*pfVar6 - (float10)*(float *)(REFG(int, 0x13712a4) + 0x50))));
      fVar8 = (float10)((float)GEN_TOF(((float10)pfVar6[2] - (float10)*(float *)(REFG(int, 0x13712a4) + 0x58))));
      uVar4 = (*pcVar3)(uVar2,(undefined4)gen_fl2bits((float)(fVar8 * fVar8 + fVar7 * fVar7)));
      return uVar4;
    }
    uVar4 = (*pcVar3)(uVar2,(undefined4)gen_fl2bits(param_3));
  }
  return uVar4;
}

/* ref: FUN_00b14410 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b14410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb14410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int local_1c;
  int local_18;
  ushort * local_14;
  
  uVar26 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  local_1c = *(int *)((int)this + 0x14);
  if (local_1c != 0) {
    local_14 = (ushort *)((int)this + 0x40);
    local_18 = 0;
    do {
      uVar27 = 0;
      do {
        if ((*local_14 >> ((byte)uVar27 & 0x1f) & 1) != 0) {
          puVar2 = ((undefined4 *)GEN_TOP(((local_18 + uVar27) * 0x60 + 0x2050 + (int)this)));
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar6 = puVar2[4];
          uVar7 = puVar2[5];
          uVar8 = puVar2[6];
          uVar9 = puVar2[7];
          uVar10 = puVar2[8];
          uVar11 = puVar2[9];
          uVar12 = puVar2[10];
          uVar13 = puVar2[0xb];
          uVar14 = puVar2[0xc];
          uVar15 = puVar2[0xd];
          uVar16 = puVar2[0xe];
          uVar17 = puVar2[0xf];
          uVar18 = puVar2[0x10];
          uVar19 = puVar2[0x11];
          uVar20 = puVar2[0x12];
          uVar21 = puVar2[0x13];
          uVar22 = puVar2[0x14];
          uVar23 = puVar2[0x15];
          puVar1 = ((undefined4 *)GEN_TOP(((local_18 + uVar27) * 0x80 + 0x50 + (int)this)));
          uVar24 = puVar2[0x16];
          uVar25 = puVar2[0x17];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1[2] = uVar10;
          puVar1[3] = uVar14;
          puVar1[8] = uVar3;
          puVar1[9] = uVar7;
          puVar1[10] = uVar11;
          puVar1[0xb] = uVar15;
          puVar1[0xc] = uVar4;
          puVar1[0xd] = uVar8;
          puVar1[0xe] = uVar12;
          puVar1[0xf] = uVar16;
          puVar1[4] = uVar5 ^ uVar26;
          puVar1[5] = uVar9 ^ uVar26;
          puVar1[6] = uVar13 ^ uVar26;
          puVar1[7] = uVar17 ^ uVar26;
          puVar1[0x10] = uVar18;
          puVar1[0x11] = uVar22;
          puVar1[0x12] = uVar18;
          puVar1[0x13] = uVar22;
          puVar1[0x18] = uVar19;
          puVar1[0x19] = uVar23;
          puVar1[0x1a] = uVar19;
          puVar1[0x1b] = uVar23;
          puVar1[0x1c] = uVar20;
          puVar1[0x1d] = uVar24;
          puVar1[0x1e] = uVar20;
          puVar1[0x1f] = uVar24;
          puVar1[0x14] = uVar21 ^ uVar26;
          puVar1[0x15] = uVar25 ^ uVar26;
          puVar1[0x16] = uVar21 ^ uVar26;
          puVar1[0x17] = uVar25 ^ uVar26;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < 0x10);
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x10;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return 0;
}

/* ref: FUN_00b14670 */
GEN_FRAME unsigned int GEN_THISCALL F_00b14670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb14670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_1c;
  uint local_18;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar3 = *(int *)((int)this + 0x3850);
    uVar11 = *(uint *)((int)this + iVar3 * 4 + 0x28);
    uVar4 = *(undefined4 *)((int)this + iVar3 * 4 + 0x18);
    iVar5 = *(int *)((int)this + 0x10);
    if ((uVar11 & 1) != 0) {
      param_1 = (int *)0x0;
      uVar8 = piVar2[1] - *piVar2 >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(*piVar2 + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_1c = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar9 = (uint)*(ushort *)(iVar6 + 0xf00 + local_1c * 2);
              iVar7 = (iVar3 + uVar9 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar9 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_1c = local_1c + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_1c < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar8);
      }
    }
    if ((uVar11 & 2) != 0) {
      param_1 = (int *)0x0;
      uVar8 = piVar2[5] - piVar2[4] >> 2;
      if (uVar8 != 0) {
        do {
          iVar6 = *(int *)(piVar2[4] + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_18 = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar9 = (uint)*(ushort *)(iVar6 + 0xf00 + local_18 * 2);
              iVar7 = (iVar3 + uVar9 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar9 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_18 = local_18 + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_18 < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar8);
      }
    }
    if ((uVar11 & 4) != 0) {
      param_1 = (int *)0x0;
      uVar11 = piVar2[9] - piVar2[8] >> 2;
      if (uVar11 != 0) {
        do {
          iVar6 = *(int *)(piVar2[8] + (int)((int)(uintptr_t)param_1) * 4);
          uVar1 = *(ushort *)(iVar6 + 0xff0);
          local_1c = 0;
          iVar12 = iVar6;
          if (uVar1 != 0) {
            do {
              uVar8 = (uint)*(ushort *)(iVar6 + 0xf00 + local_1c * 2);
              iVar7 = (iVar3 + uVar8 * 4) * 4;
              if (*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 0x10)))) != 0) {
                iVar10 = uVar8 * 0x10 + *(int *)((int)this + 8);
                ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar10 + 2) * 4))
                          (*(undefined4 *)(iVar10 + 4),uVar4,iVar7 + iVar5,iVar12,iVar12 + 0x780);
              }
              local_1c = local_1c + 1;
              iVar12 = iVar12 + 0x10;
            } while (local_1c < uVar1);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < uVar11);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b14900 */
GEN_NOFRAME uint GEN_THISCALL F_00b14900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb14900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  float fVar5;
  int iVar6;
  byte bVar8;
  float * PTR32 * ppfVar9;
  undefined3 extraout_var = 0;
  undefined * pvVar10;
  float fVar11;
  float * pfVar12;
  float * pfVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int * piVar17;
  float10 fVar18;
  
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  fVar5 = *(float *)(REFG(int, 0x137127c) + 0x66f4);
  fVar11 = *(float *)((int)gen_fl2bits(fVar5) + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = REFG(void * PTR32, 0x1487c58);
  (*(float *)(gen_frame + 0x54)) = fVar11;
  piVar17 = (int *)*param_1;
  pfVar13 = (float *)param_1[1];
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar17;
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1094880);
  if ((float10)1 < (float10)fVar11) {
    if (*(char *)((int)gen_fl2bits(fVar5) + 0xb8) == '\0') {
      pfVar12 = *(float * PTR32 *)((int)gen_fl2bits(fVar5) + 0xa8);
      (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar12;
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(fVar5) + 0xa4) * (float10)REFG(double, 0x1088108))));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar18 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar1,4)));
      fVar1 = (float)fVar18;
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x50));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)1)) {
        ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x5c));
      }
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar9))) * ((float10)fVar11 * (float10)fVar1)))))));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar12;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
      fVar18 = fVar18 * fVar18;
    }
    else {
      pfVar12 = *(float * PTR32 *)((int)gen_fl2bits(fVar5) + 0xb4);
      fVar1 = *(float *)((int)gen_fl2bits(fVar5) + 0xa8);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar12;
      fVar1 = (float)((float10)fVar1 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar18 = (float10)fVar1;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) + fVar18 * fVar18;
    }
    (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar18)));
    fVar11 = (float)((float10)fVar11 * (float10)fVar11 + (float10)(float)fVar18);
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    fVar11 = ((float)GEN_TOF(SQRT((float10)fVar11)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    pfVar12 = &(*(float *)(gen_frame + 0x60));
    fVar11 = (float)((float10)fVar11 * (float10)*(double *)&REFG(undefined, 0x109cb28));
    (*(float *)(gen_frame + 0x54)) = fVar11;
    if (!((double)fVar11 < REFG(double, 0x10944b8))) {
      pfVar12 = &(*(float *)(gen_frame + 0x54));
    }
    (*(float *)(gen_frame + 0x60)) = *pfVar12;
  }
  fVar11 = pfVar13[4];
  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = (float *)((int)gen_fl2bits(fVar5) + 0x90U);
  (*(float *)(gen_frame + 0x20)) = (float)(fVar18 + (float10)fVar11);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar18 + (float10)fVar11);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar13[5] + fVar18);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar13[5] + fVar18);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar13[6] + fVar18);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar13[6] + fVar18);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar13 - fVar18);
  fVar11 = pfVar13[1];
  (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar11 - fVar18);
  fVar1 = pfVar13[2];
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar1 - fVar18);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar13 - fVar18);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar11 - fVar18);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar1 - fVar18);
  bVar8 = F_00b16570(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD,(int)gen_fl2bits(fVar5) + 0x90U);
  pvVar10 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar8)));
  (*(byte *)(gen_frame + 0x6f)) = bVar8;
  if ((char)piVar17[0xf] != '\0') {
    if (bVar8 == 0) {
      pvVar10 = (undefined *)F_00b7e680((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,piVar17 + 0x10,pfVar13);
    }
    else {
      pvVar10 = (undefined *)F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,piVar17 + 0x10);
    }
    if (((*(ushort *)((int)piVar17 + 0x46) >> 0xe & 1) != 0) &&
       (pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x68)), *(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x801a) != '\0')) {
      return (uint)(*(undefined * PTR32 *)(gen_frame + 0x68));
    }
  }
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x8019) != '\0') {
    fVar11 = gen_bits2f(piVar17[1] - *piVar17 >> 2);
    (*(float *)(gen_frame + 0x40)) = fVar11;
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)0x0;
    if (fVar11 != 0.0) {
      do {
        iVar6 = *(int *)(*piVar17 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x4c))) * 4);
        uVar3 = *(ushort *)(iVar6 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)uVar3;
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        pfVar13 = (*(float * PTR32 *)(gen_frame + 0x4c));
        if ((float *)(uint)uVar3 != (float *)0x0) {
          do {
            uVar14 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar15 = (uint)*(ushort *)(iVar6 + 0xf00 + uVar14 * 2) * 0x10;
            sVar4 = *((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) + 0xe + iVar15)));
            fVar11 = gen_bits2f(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) + 8 + iVar15);
            (*(float *)(gen_frame + 0x54)) = fVar11;
            if (sVar4 < 0) {
              if (((*((uint *)GEN_TOP((iVar15 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)((int)gen_fl2bits(fVar11) + 6) >> 0xe & 1) == 0)) {
LAB_00b14c2f: ;
                F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar11));
              }
              else {
                iVar15 = uVar14 * 0x10 + iVar6;
                pfVar13 = ((float *)GEN_TOP(((uVar14 + 0x78) * 0x10 + iVar6)));
                fVar5 = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar14 * 0x10 + iVar6))));
                (*(float *)(gen_frame + 0x20)) = fVar5;
                fVar1 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar15 + 4))));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                fVar2 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar15 + 8))));
                (*(float *)(gen_frame + 0x28)) = fVar2;
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar5 = ((float)GEN_TOF(ABS((float10)fVar5)));
                  (*(float *)(gen_frame + 0x48)) = fVar5;
                  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x48)) = (float)(fVar18 + (float10)*pfVar13);
                  if ((float10)fVar5 < (float10)(float)(fVar18 + (float10)*pfVar13)) {
                    fVar5 = ((float)GEN_TOF(ABS((float10)fVar1)));
                    (*(float *)(gen_frame + 0x48)) = fVar5;
                    (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar13[1] + fVar18);
                    if ((float10)fVar5 < (float10)(float)((float10)pfVar13[1] + fVar18)) {
                      fVar5 = ((float)GEN_TOF(ABS((float10)fVar2)));
                      (*(float *)(gen_frame + 0x48)) = fVar5;
                      (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar13[2] + fVar18);
                      if ((float10)fVar5 < (float10)(float)((float10)pfVar13[2] + fVar18))
                      goto LAB_00b14c2f;
                    }
                  }
                }
                F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar11),iVar15,pfVar13);
              }
            }
            pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar12;
            pfVar13 = (*(float * PTR32 *)(gen_frame + 0x4c));
            piVar17 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while (pfVar12 < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)((int)pfVar13 + 1);
      } while ((uint)((int)pfVar13 + 1) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x40))));
    }
    fVar11 = gen_bits2f(piVar17[5] - piVar17[4] >> 2);
    (*(float *)(gen_frame + 0x48)) = fVar11;
    (*(float *)(gen_frame + 0x54)) = 0.0;
    if (fVar11 != 0.0) {
      do {
        iVar6 = *(int *)(piVar17[4] + (int)gen_fl2bits((*(float *)(gen_frame + 0x54))) * 4);
        uVar3 = *(ushort *)(iVar6 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)uVar3;
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        fVar11 = (*(float *)(gen_frame + 0x54));
        if ((float *)(uint)uVar3 != (float *)0x0) {
          do {
            uVar14 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar16 = (uint)*(ushort *)(iVar6 + 0xf00 + uVar14 * 2) * 0x10;
            iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) + 8 + iVar16;
            (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)iVar15;
            if (*((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8) + 0xe + iVar16))) < 0) {
              if (((*((uint *)GEN_TOP((iVar16 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)(iVar15 + 6) >> 0xe & 1) == 0)) {
LAB_00b14d94: ;
                F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar15);
              }
              else {
                iVar16 = uVar14 * 0x10 + iVar6;
                pfVar13 = ((float *)GEN_TOP(((uVar14 + 0x78) * 0x10 + iVar6)));
                fVar11 = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar14 * 0x10 + iVar6))));
                (*(float *)(gen_frame + 0x20)) = fVar11;
                fVar5 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar16 + 4))));
                (*(float *)(gen_frame + 0x24)) = fVar5;
                fVar1 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar16 + 8))));
                (*(float *)(gen_frame + 0x28)) = fVar1;
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar11 = ((float)GEN_TOF(ABS((float10)fVar11)));
                  (*(float *)(gen_frame + 0x40)) = fVar11;
                  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x40)) = (float)(fVar18 + (float10)*pfVar13);
                  if ((float10)fVar11 < (float10)(float)(fVar18 + (float10)*pfVar13)) {
                    fVar11 = ((float)GEN_TOF(ABS((float10)fVar5)));
                    (*(float *)(gen_frame + 0x40)) = fVar11;
                    (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar13[1] + fVar18);
                    if ((float10)fVar11 < (float10)(float)((float10)pfVar13[1] + fVar18)) {
                      fVar11 = ((float)GEN_TOF(ABS((float10)fVar1)));
                      (*(float *)(gen_frame + 0x40)) = fVar11;
                      (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar13[2] + fVar18);
                      if ((float10)fVar11 < (float10)(float)((float10)pfVar13[2] + fVar18))
                      goto LAB_00b14d94;
                    }
                  }
                }
                F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar15,iVar16,pfVar13);
              }
            }
            pfVar13 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar13;
            fVar11 = (*(float *)(gen_frame + 0x54));
            piVar17 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while (pfVar13 < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float *)(gen_frame + 0x54)) = gen_bits2f((int)gen_fl2bits(fVar11) + 1U);
      } while ((int)gen_fl2bits(fVar11) + 1U < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
    }
    fVar11 = gen_bits2f(piVar17[9] - piVar17[8] >> 2);
    (*(float *)(gen_frame + 0x48)) = fVar11;
    (*(float *)(gen_frame + 0x54)) = 0.0;
    pvVar10 = (undefined *)0x0;
    if (fVar11 != 0.0) {
      do {
        iVar6 = *(int *)(piVar17[8] + (int)gen_fl2bits((*(float *)(gen_frame + 0x54))) * 4);
        uVar3 = *(ushort *)(iVar6 + 0xff0);
        (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)uVar3;
        (*(float * PTR32 *)(gen_frame + 0x50)) = (float *)0x0;
        pvVar10 = (undefined *)0x0;
        fVar11 = (*(float *)(gen_frame + 0x54));
        if ((float *)(uint)uVar3 != (float *)0x0) {
          do {
            uVar14 = (uint)(*(float * PTR32 *)(gen_frame + 0x50)) & 0xffff;
            iVar15 = (uint)*(ushort *)(iVar6 + 0xf00 + uVar14 * 2) * 0x10;
            pvVar10 = ((undefined *)GEN_TOP((iVar15 + 8 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8))));
            (*(float * PTR32 *)(gen_frame + 0x4c)) = pvVar10;
            if (*((short *)GEN_TOP((iVar15 + 0xe + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8)))) < 0) {
              if (((*((uint *)GEN_TOP((iVar15 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10)))) & 0x3000000) == 0) &&
                 ((*(ushort *)((int)pvVar10 + 6) >> 0xe & 1) == 0)) {
LAB_00b14ef8: ;
                pvVar10 = (undefined *)F_00b7e120((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,pvVar10);
              }
              else {
                iVar15 = uVar14 * 0x10 + iVar6;
                pfVar13 = ((float *)GEN_TOP(((uVar14 + 0x78) * 0x10 + iVar6)));
                fVar11 = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) - (float10)*(float *)(uVar14 * 0x10 + iVar6))));
                (*(float *)(gen_frame + 0x20)) = fVar11;
                fVar5 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[1] - (float10)*(float *)(iVar15 + 4))));
                (*(float *)(gen_frame + 0x24)) = fVar5;
                fVar1 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[2] - (float10)*(float *)(iVar15 + 8))));
                (*(float *)(gen_frame + 0x28)) = fVar1;
                if ((*(byte *)(gen_frame + 0x6f)) != 0) {
                  fVar11 = ((float)GEN_TOF(ABS((float10)fVar11)));
                  (*(float *)(gen_frame + 0x40)) = fVar11;
                  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
                  (*(float *)(gen_frame + 0x40)) = (float)(fVar18 + (float10)*pfVar13);
                  if ((float10)fVar11 < (float10)(float)(fVar18 + (float10)*pfVar13)) {
                    fVar11 = ((float)GEN_TOF(ABS((float10)fVar5)));
                    (*(float *)(gen_frame + 0x40)) = fVar11;
                    (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar13[1] + fVar18);
                    if ((float10)fVar11 < (float10)(float)((float10)pfVar13[1] + fVar18)) {
                      fVar11 = ((float)GEN_TOF(ABS((float10)fVar1)));
                      (*(float *)(gen_frame + 0x40)) = fVar11;
                      (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar13[2] + fVar18);
                      if ((float10)fVar11 < (float10)(float)((float10)pfVar13[2] + fVar18))
                      goto LAB_00b14ef8;
                    }
                  }
                }
                pvVar10 = (undefined *)F_00b7e5a0((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,pvVar10,iVar15,pfVar13);
              }
            }
            pfVar13 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x50)) + 1);
            (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar13;
            fVar11 = (*(float *)(gen_frame + 0x54));
            piVar17 = (*(int * PTR32 *)(gen_frame + 0x58));
          } while (pfVar13 < (*(float * PTR32 *)(gen_frame + 0x44)));
        }
        (*(float *)(gen_frame + 0x54)) = gen_bits2f((int)gen_fl2bits(fVar11) + 1U);
      } while ((int)gen_fl2bits(fVar11) + 1U < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
    }
  }
  return (uint)pvVar10;
}

/* ref: FUN_00b14f40 */
GEN_FRAME unsigned int GEN_THISCALL F_00b14f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb14f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    bVar10 = (param_1[1] & 0x3000000U) != 0;
    if ((*(char *)(REFG(int, 0x1487c58) + 0x8019) == '\0') || (bVar5 = true, !bVar10)) {
      bVar5 = false;
    }
    *(ushort *)((int)piVar2 + 0x46) =
         (ushort)*(byte *)(piVar2 + 0xf) << 0xf | *(ushort *)((int)piVar2 + 0x46) & 0x7fff;
    if ((bVar10) || ((param_1[1] & 0xfcffffffU) != 0)) {
      iVar3 = *(int *)((int)this + 0x10);
      uVar6 = piVar2[1] - *piVar2 >> 2;
      local_14 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(*piVar2 + local_14 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_1c = 0;
          local_10 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*(ushort *)(iVar4 + 0xf00 + local_1c * 2) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if ((((bVar5) && ((uVar7 & 0x3000000) != 0)) && (*(short *)(iVar8 + 0xe) < 0)) &&
                   (F_00bcc650((undefined *)(iVar8 + 8) GEN_EDX_FWD), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_10,local_10 + 0x780
                            );
                }
              }
              local_10 = local_10 + 0x10;
              local_1c = local_1c + 1;
            } while (local_1c < uVar1);
          }
          local_14 = local_14 + 1;
        } while (local_14 < uVar6);
      }
      uVar6 = piVar2[5] - piVar2[4] >> 2;
      local_10 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(piVar2[4] + local_10 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_20 = 0;
          local_14 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*(ushort *)(iVar4 + 0xf00 + local_20 * 2) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if (((bVar5) && ((uVar7 & 0x3000000) != 0)) &&
                   ((*(short *)(iVar8 + 0xe) < 0 &&
                    (F_00bcc650((undefined *)(iVar8 + 8) GEN_EDX_ARG), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                   )) {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_14,local_14 + 0x780
                            );
                }
              }
              local_14 = local_14 + 0x10;
              local_20 = local_20 + 1;
            } while (local_20 < uVar1);
          }
          local_10 = local_10 + 1;
        } while (local_10 < uVar6);
      }
      uVar6 = piVar2[9] - piVar2[8] >> 2;
      local_10 = 0;
      if (uVar6 != 0) {
        do {
          iVar4 = *(int *)(piVar2[8] + local_10 * 4);
          uVar1 = *(ushort *)(iVar4 + 0xff0);
          local_20 = 0;
          local_14 = iVar4;
          if (uVar1 != 0) {
            do {
              iVar9 = (uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (local_20 & 0xffff) * 2))) * 0x10;
              uVar7 = *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10))));
              if (uVar7 != 0) {
                iVar8 = *(int *)((int)this + 8) + iVar9;
                if (((bVar5) && ((uVar7 & 0x3000000) != 0)) &&
                   ((*(short *)(iVar8 + 0xe) < 0 &&
                    (F_00bcc650((undefined *)(iVar8 + 8) GEN_EDX_ARG), (*(ushort *)(iVar8 + 0xe) >> 0xe & 1) != 0))
                   )) {
                  uVar7 = uVar7 & 0xfcffffff;
                  *((uint *)GEN_TOP((iVar9 + *(int *)((int)this + 0x10)))) = uVar7;
                }
                if (uVar7 != 0) {
                  ((code *)*(gen_code32 *)(&REFG(undefined, 0x133a4c0) + (uint)*(byte *)(iVar8 + 2) * 4))
                            (*(undefined4 *)(iVar8 + 4),0x1e,iVar9 + iVar3,local_14,local_14 + 0x780
                            );
                }
              }
              local_14 = local_14 + 0x10;
              local_20 = local_20 + 1;
            } while (local_20 < uVar1);
          }
          local_10 = local_10 + 1;
        } while (local_10 < uVar6);
      }
    }
  }
  return;
}

/* ref: FUN_00b152d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b152d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb152d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  short * this_00;
  
  F_00bcac30(*(undefined4 *)(param_1 + 0x3930) GEN_EDX_FWD,param_2);
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  do {
    uVar3 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x28)) + *(int *)(param_1 + 0xc))));
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    uVar4 = (*(uint *)(gen_frame + 0x28));
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(uint *)(gen_frame + 0x34)) = 1;
      do {
        if ((((*(uint *)(gen_frame + 0x34)) & (*(uint *)(gen_frame + 0x24))) != 0) &&
           (this_00 = ((short *)GEN_TOP((((*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0x2c))) * 0x10 + *(int *)(param_1 + 8)))),
           *this_00 != -1)) {
          F_00b81f30(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          cVar1 = *(char *)(param_1 + 4);
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x3c)) + 0)) = cVar1;
          (*(undefined4 *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3c)), 1, 3),cVar1);
          (*(uint *)(gen_frame + 0x38)) = 0;
          if ((cVar1 == '\0') && (((char)this_00[1] != '\x06' && (-1 < this_00[7])))) {
            uVar2 = F_00bcaee0(*(undefined * PTR32 *)(param_1 + 0x3930) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
            (*(uint *)(gen_frame + 0x38)) = (uint)uVar2;
          }
          if (*this_00 == -1) {
            this = *(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930);
          }
          else {
            uVar2 = F_00bcb330(*(undefined * PTR32 *)(param_1 + 0x3930) GEN_EDX_ARG,this_00);
            if ((ushort)(*(uint *)(gen_frame + 0x38)) == uVar2) {
              F_00bcb2e0(*(undefined * PTR32 *)(param_1 + 0x3930) GEN_EDX_ARG,(uint)uVar2,this_00,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x3c)));
              goto LAB_00b15412;
            }
            F_00bcb350(*(undefined * PTR32 *)(param_1 + 0x3930) GEN_EDX_ARG,this_00,(*(undefined4 *)(gen_frame + 0x3c)));
            this = *(undefined * PTR32 *)(param_1 + 0x3930);
          }
          F_00bcb180(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)),this_00,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x3c)));
        }
LAB_00b15412: ;
        uVar3 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar3;
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x34)) < 0);
        uVar4 = (*(uint *)(gen_frame + 0x28));
      } while (uVar3 < 0x20);
    }
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x20;
    (*(uint *)(gen_frame + 0x28)) = uVar4 + 4;
    if (0x9ff < uVar4 + 4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b15450 */
GEN_FRAME byte GEN_THISCALL F_00b15450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb15450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined1 * puVar6;
  undefined * puVar7;
  uint uVar8;
  int iVar9;
  undefined4 * in_ecx;
  undefined4 uVar10;
  
  puVar2 = (undefined4 *)F_00406bb0(0x50004,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x5000;
    puVar2 = puVar2 + 1;
    iVar9 = 0x4fff;
    in_ecx = puVar2;
    do {
      F_00b81eb0(in_ecx GEN_EDX_ARG);
      in_ecx = in_ecx + 4;
      iVar9 = iVar9 - 1;
    } while (-1 < iVar9);
  }
  uVar10 = 0x80;
  *(undefined4 * PTR32 *)((int)this + 8) = puVar2;
  uVar3 = F_00406520();
  pvVar4 = (undefined *)F_00406c00(0x50000,0,uVar3,uVar10);
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar4;
  F_00c48350(pvVar4,0,0x50000);
  pvVar4 = (undefined *)F_00406bb0(0xa00,0,0);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar4;
  F_00c48350(pvVar4,0,0xa00);
  bVar1 = F_00bcb620(*(undefined4 *)((int)this + 0x3930) GEN_EDX_ARG,5,REFG(float, 0x10a0d94));
  if (bVar1 != 0) {
    uVar5 = (uint)**(ushort * PTR32 *)((int)this + 0x3930);
    iVar9 = *((int *)GEN_TOP((*(ushort * PTR32 *)((int)this + 0x3930) + 2)));
    uVar3 = (uint)REFG(undefined2, 0x14c1ec2);
    if (uVar3 != 0) {
      puVar6 = (undefined1 *)(iVar9 + 0x3c);
      uVar8 = uVar3;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x48;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar3 < uVar5) {
      puVar6 = (undefined1 *)(iVar9 + 0x3c + uVar3 * 0x48);
      iVar9 = uVar5 - uVar3;
      do {
        *puVar6 = 1;
        puVar6 = puVar6 + 0x48;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    bVar1 = F_00b17620((undefined *)((int)this + 0x3854) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
    if (((bVar1 != 0) &&
        (bVar1 = F_00b17900((undefined *)((int)this + 0x38bc) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24)),
        bVar1 != 0)) && (bVar1 = F_00b13fd0(this GEN_EDX_ARG), bVar1 != 0)) {
      uVar10 = *(undefined4 *)((int)this + 0x10);
      REFG(undefined4, 0x14c1280) = 0;
      REFG(undefined4, 0x14c1284) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c1288) = 0;
      puVar7 = &REFG(undefined, 0x14c1290);
      puVar2 = &REFG(undefined4, 0x14c1a20);
      iVar9 = 0xf;
      do {
        puVar2[-4] = 0;
        *puVar2 = 0;
        puVar2[8] = 0;
        puVar2[-3] = puVar7;
        puVar2[-2] = this;
        puVar2[-1] = uVar10;
        puVar7 = puVar7 + 0x80;
        puVar2 = puVar2 + 0x14;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b155e0 */
GEN_FRAME uint GEN_THISCALL F_00b155e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb155e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) - 4)));
    iVar2 = *piVar1;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      F_00b81e70();
    }
    F_00406b30(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_00b17a60((undefined *)((int)this + 0x38bc) GEN_EDX_ARG);
  F_00b17780((undefined *)((int)this + 0x3854) GEN_EDX_ARG);
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = F_00bcb930(*(undefined * PTR32 *)((int)this + 0x3930) GEN_EDX_ARG);
  return uVar3;
}

