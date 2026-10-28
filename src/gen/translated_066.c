#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0075b4b0 */
GEN_FRAME uint GEN_THISCALL F_0075b4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75b4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this == uVar1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    return uVar1;
  }
  pvVar3 = (undefined *)F_00757950(uVar1,uVar1,*(uint *)this,this);
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  for (this_00 = pvVar3; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x10)) {
    F_00750930(this_00 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar3;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_0075b510 */
GEN_FRAME uint GEN_THISCALL F_0075b510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75b510u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_0075a5c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x10 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0075af70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[1]) - uVar2);
    F_00757900(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4),0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - ((int)(uVar2 - *(int *)(*(undefined * PTR32 *)&gen_args[0])) >> 4)) * 0x10 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075b590 */
GEN_FRAME uint GEN_THISCALL F_0075b590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75b590u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  
  pbVar5 = *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar5;
  if ((*(byte * PTR32 *)(pbVar5 + 4))[0x21] == 0) {
    pbVar2 = *(byte * PTR32 *)(pbVar5 + 4);
    do {
      if (pbVar2[0xc] < *(*(byte * PTR32 *)&gen_args[1])) {
        pbVar3 = *(byte * PTR32 *)(pbVar2 + 8);
      }
      else {
        (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar2;
        pbVar3 = *(byte * PTR32 *)pbVar2;
        pbVar5 = pbVar2;
      }
      pbVar2 = pbVar3;
    } while (pbVar3[0x21] == 0);
  }
  if ((pbVar5 == *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(*(byte * PTR32 *)&gen_args[1]) < pbVar5[0xc])) {
    bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = (undefined4 *)F_004296a0(0x28,0,800);
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar4;
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    puVar4[2] = puVar4;
    *(undefined1 *)(puVar4 + 9) = 1;
    *(undefined1 *)((int)puVar4 + 0x25) = 1;
    ((byte *)(gen_frame + 0x4))[0] = bVar1;
    F_0074a520(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    puVar4 = (undefined4 *)F_004296a0(0x24,0,800);
    *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *(undefined2 *)(puVar4 + 8) = 0;
    F_0075a0b0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd,puVar4 + 3,((byte *)(gen_frame + 0x4)));
    F_0075a8d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),(*(byte * PTR32 *)(gen_frame + 0x28)),puVar4);
    pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
    F_0074a1e0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x28,800);
    F_0074a1e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x28,800);
  }
  return (uint)(pbVar5 + 0x10);
}

/* ref: FUN_0075b6d0 */
GEN_FRAME uint GEN_THISCALL F_0075b6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75b6d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar6;
  if (*(char *)((int)puVar6[1] + 0x21) == '\0') {
    puVar4 = (undefined4 *)puVar6[1];
    do {
      if (*(byte *)(puVar4 + 3) < *(*(byte * PTR32 *)&gen_args[1])) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar4;
        puVar3 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  if ((puVar6 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && (*(byte *)(puVar6 + 3) <= *(*(byte * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar6 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar4 = (undefined4 *)F_004296a0(0x28,0,800);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar4;
  *puVar4 = puVar4;
  puVar4[1] = puVar4;
  puVar4[2] = puVar4;
  *(undefined1 *)(puVar4 + 9) = 1;
  *(undefined1 *)((int)puVar4 + 0x25) = 1;
  bVar1 = *pbVar2;
  F_0074a520(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
  puVar4 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar4 + 8) = 0;
  if ((byte *)(puVar4 + 3) != (byte *)0x0) {
    *(byte *)(puVar4 + 3) = bVar1;
    puVar4[6] = 0;
    uVar5 = F_004296a0(0x28,0,800);
    puVar4[5] = uVar5;
    *(uint *)uVar5 = uVar5;
    *(undefined4 *)(puVar4[5] + 4) = puVar4[5];
    *(undefined4 *)(puVar4[5] + 8) = puVar4[5];
    *(undefined1 *)(puVar4[5] + 0x24) = 1;
    *(undefined1 *)(puVar4[5] + 0x25) = 1;
    F_00750b30(puVar4 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_0075a8d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),puVar6,puVar4);
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  F_0074a1e0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x28,800);
  F_0074a1e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x28,800);
  return (uint)(pbVar2 + 0x10);
}

/* ref: FUN_0075b860 */
GEN_FRAME uint GEN_THISCALL F_0075b860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75b860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075a740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075b8a0 */
GEN_FRAME uint GEN_THISCALL F_0075b8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75b8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075b000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075b8c0 */
GEN_FRAME uint GEN_THISCALL F_0075b8c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75b8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075b0d0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075b8e0 */
GEN_FRAME uint GEN_THISCALL F_0075b8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool bVar6;
  
  uVar3 = F_0075ab70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar5 = (undefined4 *)puVar4[1];
  cVar1 = *(char *)((int)puVar5 + 0x89);
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 0x10);
    do {
      puVar4 = puVar5;
      bVar6 = uVar2 < (uint)puVar4[4];
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),bVar6);
      if (bVar6) {
        puVar5 = (undefined4 *)*puVar4;
      }
      else {
        puVar5 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar5 + 0x89) == '\0');
  }
  puVar4 = (undefined4 *)F_007589a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[2]),puVar4,uVar3);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075b950 */
GEN_FRAME uint GEN_THISCALL F_0075b950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0075b300(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_0075b970 */
GEN_FRAME unsigned int GEN_STDCALL F_0075b970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b970u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0075ac20(param_1 GEN_EDX_ARG,param_2);
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  return;
}

/* ref: FUN_0075b9a0 */
GEN_FRAME uint GEN_STDCALL F_0075b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b9a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this;
  
  this = (undefined *)*param_1;
  if (this != (undefined *)0x0) {
    pvVar1 = (undefined *)param_1[1];
    for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
      F_00750930(this GEN_EDX_ARG);
    }
    F_00429760(*param_1,param_1[2] - *param_1 & 0xfffffff0,800);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

/* ref: FUN_0075b9f0 */
GEN_FRAME unsigned int F_0075b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075ac20(param_2 GEN_EDX_ARG,param_3);
    *(undefined4 *)((int)param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  }
  return;
}

/* ref: FUN_0075ba20 */
GEN_NOFRAME uint GEN_THISCALL F_0075ba20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0075ba50 */
GEN_FRAME uint GEN_THISCALL F_0075ba50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ba50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075a740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::GCShopConfirmWidgetCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075baa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75baa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00700cf0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075baf0 */
GEN_FRAME uint GEN_THISCALL F_0075baf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75baf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x90,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bb70 */
GEN_FRAME uint GEN_THISCALL F_0075bb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75bb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b0d0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bbe0 */
GEN_FRAME uint F_0075bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bbe0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0075b300(this GEN_EDX_ARG,iVar1);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = iVar1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bc20 */
GEN_FRAME unsigned int F_0075bc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075ac20(param_2 GEN_EDX_ARG,param_3);
    *(undefined4 *)((int)param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  }
  return;
}

/* ref: FUN_0075bc50 */
GEN_FRAME uint F_0075bc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75bc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  undefined * this;
  
  this = (undefined *)*param_2;
  if (this != (undefined *)0x0) {
    pvVar1 = (undefined *)param_2[1];
    for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
      F_00750930(this GEN_EDX_ARG);
    }
    F_00429760(*param_2,param_2[2] - *param_2 & 0xfffffff0,800);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return 0;
}

/* ref: FUN_0075bca0 */
GEN_FRAME uint F_0075bca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bca0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0075ac20(this GEN_EDX_ARG,iVar1);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    }
    iVar1 = iVar1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bce0 */
GEN_FRAME uint F_0075bce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75bce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0075ac20(this GEN_EDX_ARG,param_1);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    param_1 = param_1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bd20 */
GEN_FRAME uint GEN_THISCALL F_0075bd20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75bd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b000(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x90,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf0 */
GEN_FRAME uint GEN_THISCALL F_0075bd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00701870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075bd90 */
GEN_FRAME uint GEN_THISCALL F_0075bd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75bd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b0d0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bdd0 */
GEN_NOFRAME uint GEN_THISCALL F_0075bdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0075c160((undefined *)((int)this - 0xf8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0075be70 */
GEN_FRAME uint F_0075be70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75be70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0075b300(this GEN_EDX_ARG,iVar1);
      *(undefined4 *)((int)this + 0x10) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x10 + (int)this)));
      iVar1 = iVar1 + 0x14;
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075beb0 */
GEN_FRAME uint GEN_THISCALL F_0075beb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 0x5c) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x5c),8,0x2c4);
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075bf00 */
GEN_FRAME unsigned int F_0075bf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75bf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (this != (undefined *)0x0) {
      F_0075ac20(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    this = (undefined *)((int)this + 0x14);
  }
  return;
}

/* ref: FUN_0075bf50 */
GEN_FRAME uint F_0075bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bf50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0075ac20(this GEN_EDX_ARG,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10 + (int)this);
      }
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075bf90 */
GEN_FRAME unsigned int F_0075bf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75bf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * pvVar1;
  int * piVar2;
  undefined * this;
  
  for (piVar2 = param_1; piVar2 != param_2; piVar2 = piVar2 + 5) {
    this = (undefined *)*piVar2;
    if (this != (undefined *)0x0) {
      pvVar1 = (undefined *)piVar2[1];
      for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
        F_00750930(this GEN_EDX_ARG);
      }
      F_00429760(*piVar2,piVar2[2] - *piVar2 & 0xfffffff0,800);
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return;
}

/* ref: FUN_0075bff0 */
GEN_FRAME uint F_0075bff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75bff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075bce0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_0075c020 */
GEN_FRAME uint GEN_THISCALL F_0075c020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x24)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,param_1);
  if ((*(uint *)(gen_frame + 0xc)) <= (*(int *)(gen_frame + 0x14)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
  }
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) - 1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  F_0042aca0((int)this + 8 GEN_EDX_ARG);
  F_00ab3200(0x19002,&(*(int * PTR32 *)(gen_frame + 0x4)),(int)this + 8);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)uVar5;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf0 */
GEN_FRAME uint GEN_THISCALL F_0075c160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00703620(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075c190 */
GEN_FRAME unsigned int F_0075c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0075bf00(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_0075c1c0 */
GEN_FRAME uint GEN_STDCALL F_0075c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0075ac20(this GEN_EDX_ARG,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10 + (int)this);
      }
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075c200 */
GEN_FRAME unsigned int F_0075c200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_0075bf90(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_0075c220 */
GEN_FRAME uint GEN_STDCALL F_0075c220(unsigned int gen_a0)
{
  GEN_ENTER(0x75c220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_1 + 0x5c) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)(param_1 + 0x5c),8,0x2c4);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar1 = F_0042c880((undefined *)(param_1 + 8) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0075c260 */
GEN_FRAME uint GEN_THISCALL F_0075c260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0075bce0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_0075c290 */
GEN_FRAME uint GEN_THISCALL F_0075c290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75c290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined2 *)this = (undefined2)param_1;
  F_0042cc20((undefined *)((int)this + 4) GEN_EDX_FWD,param_2,REFG(undefined4, 0x108cc50));
  F_0042b630((int)this + 0x58 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xb0) = param_4;
  *(undefined2 *)((int)this + 0xac) = (undefined2)param_3;
  *(undefined4 *)((int)this + 0xb4) = param_5;
  F_00709420(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::Game::Event::NormalCraftCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075c2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    bVar1 = F_00704ab0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,param_2,param_3);
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemSellCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075c340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_00706560(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,uVar1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075c3b0 */
GEN_FRAME unsigned int GEN_THISCALL F_0075c3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0075bf90(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_0075c3d0 */
GEN_FRAME uint F_0075c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_2 + 0x5c) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)(param_2 + 0x5c),8,0x2c4);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  uVar1 = F_0042c880((undefined *)(param_2 + 8) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0075c410 */
GEN_FRAME uint GEN_THISCALL F_0075c410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75c410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075bf90(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x14) * 0x14,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075c480 */
GEN_FRAME uint GEN_THISCALL F_0075c480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x14;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x14;
    uVar2 = F_004296a0(iVar1,0,800);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = iVar1 + uVar2;
    uVar2 = F_0075bce0(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: Client::Game::Event::GCShopItemListCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075c510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c510u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  byte * pbVar1;
  int iVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = 0;
  if ((iVar2 == -1) || (iVar2 == -2)) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = F_0070d7e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,iVar2);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar4 = 5;
      in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
      this_00 = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar4);
      if (this_00 != (undefined *)0x0) {
        F_0089aef0(this_00 GEN_EDX_ARG,4,4);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
  }
  else if (iVar2 == 0) {
    uVar4 = 0;
    if ((pbVar1[8] & 0xf) != 0) {
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
    }
    (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = F_0070d7e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,uVar4);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != 0) {
      F_006c2fb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
      *((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 2)) {
    F_00700910(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
  *((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Client::Game::Event::SpecialShopListCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075c600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  if (this_00 == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 0x403) {
      if ((param_2[0x10] & 0xf) == 0) {
        F_006eb210(this_00 GEN_EDX_FWD,0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_006eb210(this_00 GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x14));
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  uVar1 = 0;
  if ((1 < param_3) && (((byte)*(undefined4 *)(param_2 + 8) & 0xf) == 3)) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  F_0070d9b0(this_00 GEN_EDX_ARG,iVar2,uVar1);
  if (iVar2 < 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  }
  *(bool *)(param_1 + 1) = iVar2 < 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075c6c0 */
GEN_FRAME uint GEN_THISCALL F_0075c6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00492c50(param_2 + 0x17 GEN_EDX_FWD);
    F_00429760(param_2[0x17],8,0x2c4);
    param_2[0x17] = 0;
    F_0042c880(param_2 + 2 GEN_EDX_ARG);
    F_00429760(param_2,0x80,800);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0075c740 */
GEN_FRAME uint GEN_THISCALL F_0075c740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x14)) {
      F_0075b300(this_00 GEN_EDX_FWD,pvVar2);
      *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)pvVar2 + 0x10);
      this_00 = (undefined *)((int)this_00 + 0x14);
    }
    F_0075bf90(this_00,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075c7c0 */
GEN_FRAME uint GEN_THISCALL F_0075c7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75c7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_00492c50(piVar3 + 0x17 GEN_EDX_FWD);
      F_00429760(piVar3[0x17],8,0x2c4);
      piVar3[0x17] = 0;
      F_0042c880(piVar3 + 2 GEN_EDX_ARG);
      uVar4 = F_00429760(piVar3,0x80,800);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0075c830 */
GEN_FRAME uint GEN_THISCALL F_0075c830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,800);
    F_0075c1c0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_0075bf90(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x14) * 0x14,800);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar1 - iVar2) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0075c920 */
GEN_FRAME uint GEN_THISCALL F_0075c920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75c920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075c740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075c940 */
GEN_FRAME unsigned int GEN_STDCALL F_0075c940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c940u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0075c480(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_0075c960 */
GEN_FRAME uint GEN_THISCALL F_0075c960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(byte *)((int)this + 0x74) =
       *(byte *)((int)this + 0x74) ^ (*(byte *)((int)this + 0x74) ^ *(byte *)(param_1 + 0x74)) & 1;
  *(byte *)((int)this + 0x74) =
       (*(byte *)(param_1 + 0x74) ^ *(byte *)((int)this + 0x74)) & 2 ^ *(byte *)((int)this + 0x74);
  return (uint)this;
}

/* ref: FUN_0075c9b0 */
GEN_FRAME uint GEN_THISCALL F_0075c9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0075c410(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075c9e0 */
GEN_FRAME uint GEN_THISCALL F_0075c9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_2);
  *(byte *)((int)this + 0x74) = *(byte *)((int)this + 0x74) & 0xfc;
  *(undefined4 *)((int)this + 0x70) = param_4;
  *(undefined4 *)((int)this + 0x6c) = param_3;
  return (uint)this;
}

/* ref: FUN_0075ca20 */
GEN_FRAME uint GEN_THISCALL F_0075ca20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075c6c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)this);
  return uVar1;
}

/* ref: FUN_0075ca50 */
GEN_FRAME uint GEN_THISCALL F_0075ca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75ca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0075c830(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0075c830(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0075cae0 */
GEN_FRAME unsigned int GEN_THISCALL F_0075cae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75cae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0075ca50(this GEN_EDX_FWD,1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 4);
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0x14) * 0x14;
    if (pvVar4 != (undefined *)0x0) {
      F_0075ac20(pvVar4 GEN_EDX_ARG,iVar1);
      *(undefined4 *)((int)pvVar4 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0075ca50(this GEN_EDX_ARG,1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar4 != (undefined *)0x0) {
      F_0075ac20(pvVar4 GEN_EDX_ARG,param_1);
      *(undefined4 *)((int)pvVar4 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return;
}

/* ref: FUN_0075cb70 */
GEN_FRAME unsigned int F_0075cb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075c480(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0075cb90 */
GEN_FRAME unsigned int GEN_STDCALL F_0075cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54) GEN_EDX_ARG,param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(byte *)((int)param_1 + 0x74) =
         *(byte *)((int)param_1 + 0x74) ^
         (*(byte *)((int)param_1 + 0x74) ^ *(byte *)(param_2 + 0x74)) & 1;
    *(byte *)((int)param_1 + 0x74) =
         (*(byte *)(param_2 + 0x74) ^ *(byte *)((int)param_1 + 0x74)) & 2 ^
         *(byte *)((int)param_1 + 0x74);
  }
  return;
}

/* ref: FUN_0075cbf0 */
GEN_FRAME uint GEN_STDCALL F_0075cbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x75cbf0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0075c410(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0075cc00 */
GEN_NOFRAME uint GEN_THISCALL F_0075cc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75cc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0075c7c0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x80,800);
  return (uint)uVar1;
}

/* ref: FUN_0075cc20 */
GEN_FRAME uint GEN_THISCALL F_0075cc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75cc20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_0075c740((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(uint *)&gen_args[1]),*(int *)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x14,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0075ca50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[1]) - uVar2);
    F_0075bf00(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (uVar1 - uVar2) * 0x14;
  }
  return uVar2;
}

/* ref: FUN_0075ccd0 */
GEN_FRAME unsigned int GEN_THISCALL F_0075ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_0075c410(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_0075cd10 */
GEN_FRAME unsigned int F_0075cd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54) GEN_EDX_ARG,param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined4 *)((int)param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(byte *)((int)param_2 + 0x74) =
         *(byte *)((int)param_2 + 0x74) ^
         (*(byte *)((int)param_2 + 0x74) ^ *(byte *)(param_3 + 0x74)) & 1;
    *(byte *)((int)param_2 + 0x74) =
         (*(byte *)(param_3 + 0x74) ^ *(byte *)((int)param_2 + 0x74)) & 2 ^
         *(byte *)((int)param_2 + 0x74);
  }
  return;
}

/* ref: FUN_0075cd60 */
GEN_FRAME uint F_0075cd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cd60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0075c410(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0075cd70 */
GEN_FRAME uint F_0075cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cd70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0075c480(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = (undefined *)((int)this + 0x10);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075cdb0 */
GEN_FRAME uint GEN_STDCALL F_0075cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x80,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 2 GEN_EDX_ARG,param_3);
    F_004949f0(puVar1 + 0x17 GEN_EDX_ARG,param_3 + 0x54);
    puVar1[0x1d] = *(undefined4 *)(param_3 + 0x6c);
    puVar1[0x1e] = *(undefined4 *)(param_3 + 0x70);
    *(byte *)(puVar1 + 0x1f) =
         *(byte *)(puVar1 + 0x1f) ^ (*(byte *)(puVar1 + 0x1f) ^ *(byte *)(param_3 + 0x74)) & 1;
    *(byte *)(puVar1 + 0x1f) =
         (*(byte *)(param_3 + 0x74) ^ *(byte *)(puVar1 + 0x1f)) & 2 ^ *(byte *)(puVar1 + 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_0075ce30 */
GEN_FRAME unsigned int F_0075ce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if (this != (undefined *)0x0) {
      F_0075c480(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
    }
    this = (undefined *)((int)this + 0x10);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
  }
  return;
}

/* ref: FUN_0075ce80 */
GEN_FRAME uint F_0075ce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75ce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint in_EAX = 0;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 4) {
    if (*piVar1 != 0) {
      F_0075bf90(*piVar1,piVar1[1],piVar1 + 3,param_2);
      F_00429760(*piVar1,((piVar1[2] - *piVar1) / 0x14) * 0x14,800);
    }
    in_EAX = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return in_EAX;
}

/* ref: FUN_0075cef0 */
GEN_FRAME uint F_0075cef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0075c480(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075cf30 */
GEN_FRAME uint GEN_THISCALL F_0075cf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75cf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_0075c410(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_0075cf70 */
GEN_FRAME uint GEN_THISCALL F_0075cf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0070fff0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075cfa0 */
GEN_FRAME uint GEN_THISCALL F_0075cfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0075cdb0(param_1,*(undefined4 *)(param_1 + 4),param_2);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  **(uint * PTR32 *)(uVar1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_0075cff0 */
GEN_FRAME unsigned int F_0075cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0075ce30(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_0075d020 */
GEN_FRAME uint F_0075d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075ce80(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0075d040 */
GEN_FRAME uint GEN_STDCALL F_0075d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0075c480(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075d080 */
GEN_FRAME uint F_0075d080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != puVar1) {
      F_0075c410(this GEN_EDX_ARG);
      *this = *puVar1;
      this[1] = puVar1[1];
      this[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 4;
    this = this + 4;
  } while (puVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075d0d0 */
GEN_FRAME uint GEN_THISCALL F_0075d0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_0075cdb0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + 4) = uVar2;
  **(uint * PTR32 *)(uVar2 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_0075d120 */
GEN_FRAME uint GEN_THISCALL F_0075d120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0075ce80(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_0075d140 */
GEN_FRAME uint GEN_THISCALL F_0075d140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    iVar3 = param_1 * 0x10;
    uVar4 = F_004296a0(iVar3,0,800);
    F_0075d040(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    uVar5 = 0;
    if (iVar2 != 0) {
      F_0075ce80(iVar2,iVar1,(int)this + 0xc,iVar3);
      uVar6 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
      uVar5 = (uint)uVar6;
    }
    *(uint *)((int)this + 4) = (iVar1 - iVar2 & 0xfffffff0U) + uVar4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
  }
  return uVar5;
}

/* ref: FUN_0075d1e0 */
GEN_FRAME uint F_0075d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075d080(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0075d200 */
GEN_FRAME uint GEN_THISCALL F_0075d200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075ce80(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075d260 */
GEN_FRAME uint GEN_THISCALL F_0075d260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75d260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0075d080(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_0075ce80(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075d2b0 */
GEN_FRAME uint GEN_THISCALL F_0075d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0075d140(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0075d140(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentListCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_0075d320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75d320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = 1;
  if (param_4 == 5) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar4 = 0x1b;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    uVar3 = F_00763050(uVar3 GEN_EDX_ARG,uVar4);
    if (uVar3 != 0) {
      bVar1 = F_00774fc0(uVar3 GEN_EDX_ARG);
      *(byte *)(param_1 + 1) = bVar1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  else {
    this_00 = *(undefined * PTR32 *)(this + 4);
    if (this_00 != (undefined *)0x0) {
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
switchD_0075d39a_switchD: ;
        switch((unsigned int)(uintptr_t)(uVar3)) {
        default: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_006bda10(param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_006bda10(0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 1: ;
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 2;
          return (uint)param_1;
        case 2: ;
          bVar1 = F_006bda50();
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 3: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_00715610(this_00 GEN_EDX_ARG,param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_00715610(this_00 GEN_EDX_ARG,0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 4: ;
        case 5: ;
        case 6: ;
        case 7: ;
          goto switchD_0075d39a_caseD_4;
        case 8: ;
          if ((param_2[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = param_2[5];
          }
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f730(this_00 GEN_EDX_ARG,param_2[3],uVar3);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f730(this_00 GEN_EDX_ARG,0,uVar3);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 9: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f3d0(this_00 GEN_EDX_ARG,param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f3d0(this_00 GEN_EDX_ARG,0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 10: ;
          if ((param_2[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = param_2[5];
          }
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f450(this_00 GEN_EDX_ARG,param_2[3],uVar3);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f450(this_00 GEN_EDX_ARG,0,uVar3);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        }
      }
      uVar3 = param_2[1];
      if (uVar3 < 0xb) goto switchD_0075d39a_switchD;
switchD_0075d39a_caseD_4: ;
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_2[1];
      }
      bVar1 = F_006facc0(this_00 GEN_EDX_ARG,uVar3);
      if (bVar1 == 0) goto LAB_0075d54c;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  }
LAB_0075d54c: ;
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075d590 */
GEN_FRAME uint GEN_THISCALL F_0075d590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075ce80(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075d5f0 */
GEN_FRAME uint GEN_THISCALL F_0075d5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = iVar1 - *(int *)((int)(uintptr_t)this) >> 4;
  if (param_1 < uVar2) {
    iVar4 = param_1 * 0x10 + *(int *)this;
    if (iVar4 != iVar1) {
      uVar2 = F_0075d080(iVar1,iVar1,iVar4,param_1);
      uVar3 = F_0075ce80(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar3;
    }
  }
  else if (uVar2 < param_1) {
    F_0075d2b0(this GEN_EDX_ARG,param_1 - uVar2);
    F_0075ce30(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4),0,
                 (int)this + 0xc,0,param_1);
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = (param_1 - ((int)(uVar2 - *(int *)this) >> 4)) * 0x10 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075d690 */
GEN_FRAME uint GEN_THISCALL F_0075d690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0075d5f0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf0 */
GEN_FRAME uint GEN_THISCALL F_0075d6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0071ad00(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075d700 */
GEN_FRAME uint GEN_THISCALL F_0075d700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a2710(this GEN_EDX_FWD,10);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_0075d720 */
GEN_FRAME uint GEN_THISCALL F_0075d720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)(uVar1 + param_1 * 4) = param_2;
  return uVar1;
}

/* ref: FUN_0075d740 */
GEN_FRAME uint GEN_THISCALL F_0075d740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_0075d750 */
GEN_FRAME uint GEN_THISCALL F_0075d750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_0075d790 */
GEN_FRAME float10 F_0075d790(float gen_a0)
{
  GEN_ENTER(0x75d790u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_0075d7b0 */
GEN_FRAME float10 F_0075d7b0(float gen_a0)
{
  GEN_ENTER(0x75d7b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_0075d7d0 */
GEN_FRAME float10 F_0075d7d0(float gen_a0)
{
  GEN_ENTER(0x75d7d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_0075d7f0 */
GEN_FRAME float10 F_0075d7f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x75d7f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1))));
}

/* ref: Client::UI2::RaptureAtkHistory::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_0075d810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (-1 < *(int *)(in_ecx + 0x1c)) {
    *(int *)(in_ecx + 0x1c) = *(int *)(in_ecx + 0x1c) - 1;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkHistory::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0075d830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1c) = 0xffffffff;
  return;
}

/* ref: FUN_0075d840 */
GEN_FRAME byte GEN_THISCALL F_0075d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  code * pcVar2;
  char * pcVar3;
  
  if (*(int *)((int)this + 0x22d3c) == param_1) {
    return 0;
  }
  pcVar3 = (char *)((int)this + 0x22cf0);
  if (param_1 != 0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == (char *)((int)this + 0x22cf1)) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
      *(int *)((int)this + 0x22d3c) = param_1;
      (*pcVar2)(this,"GameMain",0,0);
      return 1;
    }
    F_00559190(this GEN_EDX_FWD,"GameMain");
    *(int *)((int)this + 0x22d3c) = param_1;
    return 1;
  }
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)((int)this + 0x22cf1)) {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
    *(undefined4 *)((int)this + 0x22d3c) = 0;
    (*pcVar2)(this,"LobbyMain",0,0);
    return 1;
  }
  F_00559190(this GEN_EDX_ARG,"LobbyMain");
  *(undefined4 *)((int)this + 0x22d3c) = 0;
  return 1;
}

/* ref: Client::UI2::RaptureAtkModule::vf62 */
GEN_FRAME uint GEN_THISCALL F_0075d910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0057e9e0((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x22d3c) = 2;
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf4 */
GEN_FRAME byte GEN_THISCALL F_0075d930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75d930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_005590e0(in_ecx GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf50 */
GEN_NOFRAME uint GEN_THISCALL F_0075d940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,1);
    iVar2 = 2;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x41);
    iVar2 = 1;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x3c);
    iVar2 = 0;
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    return uVar1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,1);
  iVar2 = 2;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x41);
  iVar2 = 1;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_ARG,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3c);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,2);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: FUN_0075d9f0 */
GEN_FRAME uint GEN_THISCALL F_0075d9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75d9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  int local_14;
  int * local_c;
  
  uVar1 = F_00404270();
  puVar6 = (uint *)0x0;
  *(undefined4 *)((int)this + 0x2db50) = 0;
  local_c = (int *)((int)this + 0x29258);
  local_14 = 0;
  do {
    *local_c = 0;
    uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,local_14);
    if (uVar2 != 0) {
      uVar5 = *(uint *)(uVar2 + 0xc);
      uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x70)
      ;
      puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar1,0);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        *puVar3 = uVar5;
        puVar3 = puVar3 + 1;
        puVar7 = puVar3;
        while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
          *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
          F_0042b630(puVar7 + 1 GEN_EDX_ARG);
          *(byte *)((int)puVar7 + 0x6d) = *(byte *)((int)puVar7 + 0x6d) & 0xfe;
          puVar7[0x16] = 0;
          puVar7[0x17] = 0;
          puVar7[0x18] = 0;
          *(undefined2 *)(puVar7 + 0x19) = 0;
          *(undefined1 *)((int)puVar7 + 0x66) = 0;
          *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3efc));
          puVar7[0x1a] = 0;
          *(undefined1 *)(puVar7 + 0x1b) = 0;
          puVar7 = puVar7 + 0x1c;
        }
      }
      *local_c = (int)puVar3;
      *(int *)((int)this + 0x2db50) = *(int *)((int)this + 0x2db50) + *(int *)(uVar2 + 0xc);
    }
    local_c = local_c + 1;
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  *(undefined4 *)((int)this + 0x29a48) = 0;
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d4);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0xc);
    uVar5 = -(uint)((int)((ulonglong)uVar2 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x68);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar1,0);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      puVar7 = puVar3;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
        F_0042b630(puVar7 + 1 GEN_EDX_ARG);
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x18] = 0;
        *(undefined2 *)(puVar7 + 0x19) = 0;
        *(undefined1 *)((int)puVar7 + 0x66) = 0;
        puVar7 = puVar7 + 0x1a;
      }
    }
    *(uint * PTR32 *)((int)this + 0x29a48) = puVar3;
  }
  *(undefined4 *)((int)this + 0x29a4c) = 0;
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1000);
  puVar3 = (uint *)0x0;
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0xc);
    uVar5 = -(uint)((int)((ulonglong)uVar2 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x68);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar1,0);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uVar2;
      puVar6 = puVar3 + 1;
      puVar7 = puVar6;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
        puVar3 = (uint *)F_0042b630(puVar7 + 1 GEN_EDX_ARG);
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x18] = 0;
        *(undefined2 *)(puVar7 + 0x19) = 0;
        *(undefined1 *)((int)puVar7 + 0x66) = 0;
        puVar7 = puVar7 + 0x1a;
      }
    }
    *(uint * PTR32 *)((int)this + 0x29a4c) = puVar6;
  }
  return (uint)puVar3;
}

/* ref: FUN_0075dc20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0075dc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75dc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x29258);
  iVar3 = 4;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
        F_00406b30(puVar1 - 1);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29a48);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 0x29a48) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29a4c);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 0x29a4c) = 0;
      return;
    }
    F_00406b30(puVar1 - 1);
    *(undefined4 *)((int)this + 0x29a4c) = 0;
  }
  return;
}

/* ref: FUN_0075dcd0 */
GEN_FRAME uint GEN_THISCALL F_0075dcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75dcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x29a4c + param_2 * 4);
}

/* ref: FUN_0075dcf0 */
GEN_FRAME uint GEN_THISCALL F_0075dcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75dcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0x29268 + in_ecx;
}

/* ref: Client::UI2::RaptureAtkModule::vf55 */
GEN_FRAME uint GEN_THISCALL F_0075dd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75dd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  char * pcVar3;
  bool bVar4;
  
  pcVar3 = "GameMain";
  pbVar2 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pcVar3 = pcVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)(1 - bVar4 != (uint)(bVar4 != 0));
}

/* ref: Client::UI2::RaptureAtkModule::vf56 */
GEN_FRAME uint GEN_THISCALL F_0075dd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75dd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: Client::UI2::RaptureAtkModule::vf59 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0075dd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75dd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x30))))(*(int * PTR32 *)(this + 0x23184) GEN_EDX_FWD)));
  F_0043b290(this_00 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::RaptureAtkModule::vf60 */
GEN_NOFRAME byte GEN_THISCALL F_0075dd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75dd90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2db69);
}

/* ref: Client::UI2::RaptureAtkModule::vf61 */
GEN_FRAME byte GEN_THISCALL F_0075dda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75dda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2db69) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0075ddc0 */
GEN_NOFRAME byte GEN_THISCALL F_0075ddc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ddc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x29254);
}

/* ref: FUN_0075ddd0 */
GEN_FRAME unsigned int GEN_THISCALL F_0075ddd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75ddd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_1c;
  int * local_18;
  int local_14;
  int * local_c;
  int local_8;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,0);
  if (((uVar1 != 0) && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,1), uVar2 != 0)) &&
     (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0), uVar3 != 0)) {
    local_18 = (int *)((int)this + 0x2354c);
    local_8 = 0;
    local_1c = 0;
    local_14 = 4;
    iVar8 = 0x54;
    do {
      uVar4 = F_0043b800(*(undefined4 *)((int)this + 0x23188) GEN_EDX_ARG,local_8);
      if (*local_18 != *(int *)(uVar4 + 0x6ec)) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) != *(int *)(uVar4 + 0x6f8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) = *(int *)(uVar4 + 0x6f8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) != *(int *)(uVar4 + 0x6fc)) {
          *((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) = *(int *)(uVar4 + 0x6fc);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8 + iVar8))) != *(int *)(uVar4 + 0x6e8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8 + iVar8))) = *(int *)(uVar4 + 0x6e8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc + iVar8))) != *(int *)(uVar4 + 0x6ec)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc + iVar8))) = *(int *)(uVar4 + 0x6ec);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        *local_18 = *(int *)(uVar4 + 0x6ec);
      }
      if ((ushort)*(byte *)((int)this + local_8 + 0x23548) != *(ushort *)(uVar4 + 0x706) >> 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) != *(int *)(uVar4 + 0x6f8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) = *(int *)(uVar4 + 0x6f8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((iVar8 - 8 + *(int *)(uVar1 + 0x20)))) != (uint)*(ushort *)(uVar4 + 0x704)) {
          *((uint *)GEN_TOP((iVar8 - 8 + *(int *)(uVar1 + 0x20)))) = (uint)*(ushort *)(uVar4 + 0x704);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) != *(int *)(uVar4 + 0x6fc)) {
          *((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) = *(int *)(uVar4 + 0x6fc);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((iVar8 - 4 + *(int *)(uVar1 + 0x20)))) != (uint)*(ushort *)(uVar4 + 0x702)) {
          *((uint *)GEN_TOP((iVar8 - 4 + *(int *)(uVar1 + 0x20)))) = (uint)*(ushort *)(uVar4 + 0x702);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((iVar8 + 0x10 + *(int *)(uVar1 + 0x20)))) = *(ushort *)(uVar4 + 0x706) & 1;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
        uVar5 = F_0042a990(uVar4 + 0x54 GEN_EDX_ARG);
        puVar6 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_14)));
        if (uVar5 != *puVar6) {
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *puVar6 = uVar5;
        local_28 = (uint)*(ushort *)(uVar4 + 0x704) * 2;
        if (*(ushort *)(uVar4 + 0x704) != 0) {
          local_c = (int *)(uVar4 + 0xa8);
          iVar7 = local_1c;
          do {
            if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar7))) != *local_c) {
              *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar7))) = *local_c;
              *(undefined1 *)(uVar2 + 0x1d) = 1;
            }
            local_c = local_c + 1;
            iVar7 = iVar7 + 4;
            local_28 = local_28 - 1;
          } while (local_28 != 0);
        }
        *(char *)((int)this + local_8 + 0x23548) = (char)(*(ushort *)(uVar4 + 0x706) >> 1);
      }
      local_14 = local_14 + 8;
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      *(ushort *)(uVar4 + 0x706) = *(ushort *)(uVar4 + 0x706) & 0xfffe;
      local_1c = local_1c + 0x640;
      iVar8 = iVar8 + 0x1c;
    } while (local_1c < 0x1900);
  }
  return 0;
}

/* ref: FUN_0075e050 */
GEN_FRAME unsigned int GEN_THISCALL F_0075e050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x75e050u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float * pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_1 + 0x29214 + param_2 * 0x18);
  fVar2 = ((float)GEN_TOF(((float10)(param_4 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10c3f40))));
  pfVar1[5] = fVar2;
  bVar3 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  fVar4 = REFG(float, 0x1087f04);
  if (bVar3 == (bVar3 || (float10)fVar2 == (float10)0)) {
    fVar4 = fVar2;
  }
  pfVar1[3] = ((float)GEN_TOF((((float10)param_3 - (float10)*(float *)(param_1 + 0x29244)) / (float10)fVar4)));
  pfVar1[4] = *(float *)(param_1 + 0x29244);
  *pfVar1 = param_5;
  pfVar1[1] = param_6;
  pfVar1[2] = param_7;
  return 0;
}

/* ref: FUN_0075e0e0 */
GEN_FRAME uint GEN_THISCALL F_0075e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x23560) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x23564) = param_3;
  return param_1;
}

/* ref: FUN_0075e100 */
GEN_FRAME uint GEN_STDCALL F_0075e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (0 < (int)param_3) {
    if (((*param_2 & 0xf) == 3) || (uVar1 = param_3, (*param_2 & 0xf) == 4)) {
      uVar1 = param_2[1];
    }
    F_0043f8b0(uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_0075e140 */
GEN_FRAME uint GEN_THISCALL F_0075e140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if ((param_2 & 1) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = param_1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x64));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x75e170;
    uVar1 = F_0042cd30((undefined *)((int)this + 0x22f38) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x64)),param_1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e178;
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x75e180;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    param_2 = param_2 & 0xfffffffe;
  }
  if ((param_2 & 2) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = param_1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x64));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x75e19b;
    uVar1 = F_0042cd30((undefined *)((int)this + 0x22fe0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)),param_1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e1a3;
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x75e1ab;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    param_2 = param_2 & 0xfffffffd;
  }
  uVar1 = 0;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(int)this + 0x22f38);
    pvVar2 = param_1;
    F_00559470(this GEN_EDX_ARG);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
    if (uVar1 == REFG(undefined4, 0x108cc50)) goto LAB_0075e21e;
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(int)this + 0x22f8c);
    pvVar2 = param_1;
    F_00559470(this GEN_EDX_ARG);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  } while (uVar1 != REFG(undefined4, 0x108cc50));
  param_2 = param_2 | 1;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)this + 0x22f8c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e21e;
  F_0042e360(param_1 GEN_EDX_ARG,(int)this + 0x22f8c);
LAB_0075e21e: ;
  uVar1 = 0;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(int)this + 0x22fe0);
    pvVar2 = param_1;
    F_00559470(this GEN_EDX_ARG);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
    if (uVar1 == REFG(undefined4, 0x108cc50)) {
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
      return param_2;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(int)this + 0x23034);
    pvVar2 = param_1;
    F_00559470(this GEN_EDX_ARG);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  } while (uVar1 != REFG(undefined4, 0x108cc50));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)this + 0x23034);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e286;
  F_0042e360(param_1 GEN_EDX_ARG,(int)this + 0x23034);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return param_2 | 1;
}

/* ref: FUN_0075e2c0 */
GEN_FRAME uint GEN_THISCALL F_0075e2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * puVar5;
  undefined4 * puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar8 = (int)this + 0x22d94;
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_2;
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  (*(int *)(gen_frame + 0x1c)) = 5;
  do {
    F_0042aca0(uVar8 GEN_EDX_FWD);
    uVar3 = (*(uint *)(gen_frame + 0x8));
    uVar8 = uVar8 + 0x54;
    iVar9 = (*(int *)(gen_frame + 0x1c)) - 1;
    (*(int *)(gen_frame + 0x1c)) = iVar9;
  } while (iVar9 != 0);
  if ((((param_3 < 2) || (((byte)*param_2 & 0xf) != 6)) || (iVar9 = param_2[1], iVar9 == 0)) ||
     (((byte)param_2[2] & 0xf) != 4)) {
    F_0042aca0((*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  else {
    uVar11 = param_2[3];
    sVar2 = (short)uVar11 - 5;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(short *)(gen_frame + 0x24)) = sVar2;
    (*(undefined4 *)(gen_frame + 0x26)) = 0x1000ffff;
    cVar7 = (char)((uint)uVar11 >> 0x10);
    (*(char *)(gen_frame + 0x2b)) = cVar7;
    if (cVar7 == '\0') {
      (*(char *)(gen_frame + 0x2b)) = -1;
    }
    (*(byte *)(gen_frame + 0x2c)) = 0xff;
    (*(undefined2 *)(gen_frame + 0x2e)) = 0xffff;
    (*(undefined1 *)(gen_frame + 0x2a)) = 0;
    if ((2 < param_3) && (((byte)param_2[4] & 0xf) == 4)) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 2)) = (char)param_2[5];
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x26)), 0, 3, (unsigned long long)(CONCAT12((char)param_2[5],0xffff)));
      (*(undefined4 *)(gen_frame + 0x26)) = CONCAT13(0x10,(undefined3)(*(undefined4 *)(gen_frame + 0x26)));
    }
    if ((3 < param_3) && (((byte)param_2[6] & 0xf) == 4)) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 3)) = (char)param_2[7];
      (*(undefined4 *)(gen_frame + 0x26)) = CONCAT13((char)param_2[7],(undefined3)(*(undefined4 *)(gen_frame + 0x26)));
    }
    if (param_3 < 5) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,iVar9,REFG(undefined4, 0x108cc50));
      uVar3 = (*(uint *)(gen_frame + 0x8));
      uVar11 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
      puVar10 = ((undefined1 *)(gen_frame + 0x34));
      uVar8 = (*(uint *)(gen_frame + 0x8));
      pvVar4 = (undefined *)F_00559470(this GEN_EDX_ARG);
      F_00580530(pvVar4 GEN_EDX_ARG,uVar8,puVar10,puVar6,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      if ((((byte)param_2[8] & 0xf) == 2) && (*(char *)(param_2 + 9) == '\x01')) {
        if (((byte)param_2[10] & 0xf) == 4) {
          uVar11 = param_2[0xb];
        }
        else {
          uVar11 = 0xffff;
        }
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 0)) = (short)uVar11;
        (*(undefined4 *)(gen_frame + 0x26)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 2)),(short)uVar11);
        (*(char *)(gen_frame + 0x2d)) = (char)((uint)uVar11 >> 0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        F_00594ec0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
        (*(char *)(gen_frame + 0x33)) = '\0';
        uVar8 = 0;
        (*(byte *)(gen_frame + 0x2c)) = 0;
        puVar6 = param_2;
        do {
          uVar11 = REFG(undefined4, 0x108cc50);
          uVar3 = F_004311a0(puVar6 GEN_EDX_ARG);
          F_0042cc20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar3,uVar11);
          uVar11 = 0;
          puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
          puVar10 = ((undefined1 *)(gen_frame + 0x34));
          iVar9 = (uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this;
          pvVar4 = (undefined *)F_00559470(this GEN_EDX_ARG);
          uVar3 = F_00580530(pvVar4 GEN_EDX_ARG,iVar9,puVar10,puVar6,uVar11);
          F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
          if (uVar3 == 0xfffffffe) {
            (*(char *)(gen_frame + 0x33)) = '\x01';
          }
          else if (uVar3 != 0xffffffff) break;
          uVar8 = F_0075e140(this GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this,uVar8);
          uVar3 = F_0042a990((uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x8)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x4)) = 6;
          F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x4)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          bVar1 = (*(byte *)(gen_frame + 0x2c)) + 1;
          (*(byte *)(gen_frame + 0x2c)) = bVar1;
          if ((*(char *)(gen_frame + 0x33)) != '\0') {
            (*(char *)(gen_frame + 0x2d)) = (*(char *)(gen_frame + 0x2d)) + '\x01';
          }
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        } while (bVar1 < 5);
        F_0075e140(this GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this,uVar8);
        uVar8 = F_0042a990((uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this GEN_EDX_ARG);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)uVar8;
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0xc)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        puVar5 = &REFG(undefined, 0x10be460);
        if ((*(char *)(gen_frame + 0x33)) == '\0') {
          puVar5 = &REFG(undefined, 0x10be464);
        }
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)puVar5;
        F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0xc)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        F_00560a60((*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
        return (uint)puVar6;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,iVar9,REFG(undefined4, 0x108cc50));
      uVar3 = (*(uint *)(gen_frame + 0x8));
      uVar11 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
      puVar10 = ((undefined1 *)(gen_frame + 0x34));
      uVar8 = (*(uint *)(gen_frame + 0x8));
      pvVar4 = (undefined *)F_00559470(this GEN_EDX_ARG);
      bVar1 = F_00580670(pvVar4 GEN_EDX_ARG,uVar8,puVar10,puVar6,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_0042aca0(uVar3 GEN_EDX_ARG);
      }
    }
  }
  uVar8 = F_0042a990(uVar3 GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] = uVar8;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = 6;
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)puVar6;
}

/* ref: FUN_0075e640 */
GEN_FRAME uint GEN_STDCALL F_0075e640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0075e650 */
GEN_FRAME uint GEN_THISCALL F_0075e650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(int *)&gen_args[3]) = (uint)GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3) << 8;
    }
    else {
      (*(int *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3),(*(byte * PTR32 *)&gen_args[2])[4]);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23184)));
    if (1 < iVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,0x80,(*(int *)&gen_args[3]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,4,(*(int *)&gen_args[3]));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075e6c0 */
GEN_FRAME uint GEN_THISCALL F_0075e6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(int *)&gen_args[3]) = (uint)GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3) << 8;
    }
    else {
      (*(int *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3),(*(byte * PTR32 *)&gen_args[2])[4]);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23184)));
    if (1 < iVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,0x100,(*(int *)&gen_args[3]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,8,(*(int *)&gen_args[3]));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075e730 */
GEN_FRAME uint GEN_THISCALL F_0075e730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  
  if (0 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x118))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_FWD,uVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0075e770 */
GEN_FRAME uint GEN_THISCALL F_0075e770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (0 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x11c))))
                      (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG,uVar2);
    uVar1 = (undefined1)uVar3;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075e7c0 */
GEN_FRAME uint GEN_THISCALL F_0075e7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005582f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 8))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0075e7e0 */
GEN_FRAME byte GEN_THISCALL F_0075e7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  *(undefined1 *)((int)this + 0x230e8) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x230e0) + 0x1c))))
            (*(int * PTR32 *)((int)this + 0x230e0) GEN_EDX_ARG,param_1,param_2);
  if (*(char *)((int)this + 0x2db67) != '\0') {
    *(undefined1 *)((int)this + 0x2db67) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
  bVar1 = F_00469120(this_00 GEN_EDX_ARG,param_1,param_2);
  return bVar1;
}

/* ref: FUN_0075e840 */
GEN_FRAME byte GEN_THISCALL F_0075e840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x75e840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  byte bVar1;
  undefined * this_00;
  
  *(undefined1 *)((int)this + 0x230e8) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x230e0) + 0x1c))))
            (*(int * PTR32 *)((int)this + 0x230e0) GEN_EDX_ARG,param_1,param_2);
  if (*(char *)((int)this + 0x2db67) != '\0') {
    *(undefined1 *)((int)this + 0x2db67) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
  bVar1 = F_00469190(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar1;
}

/* ref: FUN_0075e8d0 */
GEN_FRAME byte GEN_THISCALL F_0075e8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75e8d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x230e9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::UI2::RaptureAtkModule::vf3 */
GEN_FRAME uint GEN_THISCALL F_0075e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75e8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = (byte)param_1;
  if (bVar1 == 0) {
    return 0;
  }
  if ((((bVar1 < 0x30) || (0x5f < bVar1)) && ((bVar1 < 0x70 || (0x7f < bVar1)))) &&
     (0x1d < (byte)(bVar1 + 0x7e))) {
    uVar5 = 0;
    iVar3 = (param_1 & 0xff) + 5000;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x18))))(*(int * PTR32 *)(this + 0x23184) GEN_EDX_FWD)));
    uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,iVar3,uVar4,uVar5);
    return uVar2;
  }
  uVar2 = F_005590b0((undefined *)this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0075e940 */
GEN_FRAME uint GEN_THISCALL F_0075e940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  char * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = (param_1 & 0xff) + 0x1450;
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                              (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
  pcVar2 = (char *)F_0043bd00(this_00 GEN_EDX_ARG,iVar1,uVar3,uVar4);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1)));
  }
  return (uint)pcVar2;
}

/* ref: FUN_0075e990 */
GEN_NOFRAME byte GEN_THISCALL F_0075e990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75e990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x234e0) >> 2 & 1;
}

/* ref: Client::UI2::RaptureAtkModule::vf38 */
GEN_NOFRAME byte GEN_THISCALL F_0075e9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75e9a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = (~*(byte *)(in_ecx + 0x234e0) ^ *(byte *)(in_ecx + 0x234e0)) & 4;
  *(byte *)(in_ecx + 0x234e0) = *(byte *)(in_ecx + 0x234e0) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0075e9d0 */
GEN_NOFRAME byte GEN_THISCALL F_0075e9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75e9d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x23534);
}

/* ref: FUN_0075e9e0 */
GEN_FRAME byte GEN_THISCALL F_0075e9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75e9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x23534) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0075ea00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0075ea00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ea00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0xb8) != 0) {
    F_005a9ff0(((undefined *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x20c))) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_0075ea20 */
GEN_NOFRAME byte GEN_THISCALL F_0075ea20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ea20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x21d)));
  }
  return 0;
}

/* ref: FUN_0075ea40 */
GEN_FRAME unsigned int GEN_THISCALL F_0075ea40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0xb8) != 0) {
    F_005aa0f0(((undefined *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x20c))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_0075ea60 */
GEN_FRAME uint GEN_THISCALL F_0075ea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_1,param_4);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f4c));
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: Client::UI2::ExdSheetWaiter::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_0075eaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75eaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  uVar2 = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (uVar1 != 0) {
    do {
      if ((code *)*(gen_code32 *)(this + 0x20) != (code *)0x0) {
        ((code *)*(gen_code32 *)(this + 0x20))(*(undefined4 *)(param_2 + uVar2 * 4),param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

/* ref: FUN_0075eae0 */
GEN_FRAME uint GEN_THISCALL F_0075eae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75eae0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_FWD,"AddonParam");
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94))) = uVar1;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94)));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]))));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0075eb40 */
GEN_NOFRAME byte GEN_THISCALL F_0075eb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75eb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0x1b0))) >> 3 & 1;
  }
  return 0;
}

/* ref: FUN_0075eb60 */
GEN_FRAME byte GEN_THISCALL F_0075eb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75eb60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))
            ((int)this + 0x23330,param_1 & 0x3f,param_2,param_3);
  return 1;
}

/* ref: FUN_0075eb90 */
GEN_NOFRAME uint GEN_THISCALL F_0075eb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75eb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_FWD,0x1fe,0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x3e,0,1);
  return uVar1;
}

/* ref: FUN_0075ebc0 */
GEN_NOFRAME uint GEN_THISCALL F_0075ebc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ebc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_FWD,0x32,1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x2e,1,1);
  return uVar1;
}

/* ref: FUN_0075ebf0 */
GEN_FRAME uint GEN_THISCALL F_0075ebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * puVar1;
  uint uVar2;
  
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_FWD,puVar1,param_2,param_3,param_4,param_5,0);
  return uVar2;
}

/* ref: FUN_0075ec30 */
GEN_FRAME byte GEN_THISCALL F_0075ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_FWD,4);
  bVar4 = *(int *)((int)this + 0x29250) == 2;
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (bVar4) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_0075ed10 */
GEN_FRAME byte GEN_THISCALL F_0075ed10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ed10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_0075edd0 */
GEN_NOFRAME uint GEN_THISCALL F_0075edd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75edd0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005594c0(in_ecx GEN_EDX_FWD,2);
  uVar2 = F_005594c0(in_ecx GEN_EDX_ARG,4);
  if ((uVar1 == 2) || (uVar2 == 2)) {
    uVar2 = 2;
  }
  else if ((uVar2 & 8) == 0) {
    if ((uVar1 & 8) != 0) {
      return uVar1;
    }
    if ((uVar1 != 4) && (uVar2 != 4)) {
      return 0;
    }
    return 4;
  }
  return uVar2;
}

/* ref: FUN_0075ee20 */
GEN_NOFRAME byte GEN_THISCALL F_0075ee20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ee20u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_005594c0(in_ecx GEN_EDX_FWD,2);
  uVar2 = F_005594c0(in_ecx GEN_EDX_ARG,4);
  if ((uVar1 != 2) && (uVar2 != 2)) {
    uVar3 = uVar2;
    if (((uVar2 & 8) == 0) && (uVar3 = uVar1, (uVar1 & 8) == 0)) {
      if (uVar1 == 4) {
        return 1;
      }
    }
    else {
      uVar2 = uVar3;
      if (uVar3 == 2) {
        return 1;
      }
    }
    if (uVar2 != 4) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0075ee70 */
GEN_FRAME byte GEN_THISCALL F_0075ee70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75ee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * PTR32 * this_00;
  
  iVar4 = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,4);
  (*(int *)(gen_frame + 0xc)) = param_1;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
  iVar3 = param_3;
  if (0 < param_2) {
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar4,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
      this = (*(int * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < param_2);
  }
  if (param_1 == 0xb) {
    pcVar1 = "LobbyScreenText";
  }
  else {
    pcVar1 = REFG(undefined * PTR32, 0x132806c);
    if (param_1 != 10) {
      pcVar1 = REFG(undefined * PTR32, 0x1328070);
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,pcVar1,param_2,param_3,0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return (byte)uVar2;
}

/* ref: FUN_0075ef20 */
GEN_FRAME uint GEN_THISCALL F_0075ef20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75ef20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x15;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    puVar2 = puVar2 - 2;
    F_005a2670(puVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    puVar2 = puVar2 - 2;
    F_005a2670(puVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  this_00 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0075f070 */
GEN_FRAME byte GEN_THISCALL F_0075f070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x75f070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(uint *)(gen_frame + 0xc)) = (uint)(0 < param_3);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  if ((param_5 == 0xeab1) || (bVar1 = 0, param_3 == 0xeab1)) {
    bVar1 = 1;
  }
  iVar3 = param_3;
  if (param_3 == 0xeab1) {
    iVar3 = param_5;
  }
  if (((char)param_4 == '\0') && ((char)param_6 == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x1c)) = iVar2 + iVar3 * 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  bVar1 = F_0075ee70(this GEN_EDX_ARG,param_7,10,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x58));
  iVar3 = 9;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_0075f180 */
GEN_FRAME byte GEN_THISCALL F_0075f180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x75f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_0075f070(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,0xb);
  return bVar1;
}

/* ref: FUN_0075f1b0 */
GEN_FRAME byte GEN_THISCALL F_0075f1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x75f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (byte)uVar1;
}

/* ref: FUN_0075f2b0 */
GEN_FRAME byte GEN_THISCALL F_0075f2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75f2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     ((param_2 != 5 || (*(char *)((int)this + 0x29254) == '\0')))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
    (*(int *)(gen_frame + 0xc)) = (-(uint)((char)param_3 != '\0') & 7) + 5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x24)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x2c)) = (uint)((char)param_4 == '\0');
    bVar1 = F_0075ee70(this GEN_EDX_ARG,param_2,10,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar2 = 9;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0075f3a0 */
GEN_FRAME byte GEN_THISCALL F_0075f3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x24)) = param_1;
    F_0043f8b0(7);
    bVar1 = F_0075ee70(this GEN_EDX_ARG,param_2,10,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar2 = 9;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0075f470 */
GEN_FRAME byte GEN_THISCALL F_0075f470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75f470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * PTR32 * this_01;
  uint * this_02;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00ab1f90(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x542,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,0x543,param_2);
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 1: ;
    uVar1 = F_00ab1ed0(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x53c,0,0);
    uVar5 = 0x53d;
    goto LAB_0075f5b9;
  default: ;
    uVar1 = F_00ab41f0(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x555,0,0);
    uVar5 = 0x556;
LAB_0075f5b9: ;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,uVar5,param_2);
    uVar1 = (uint)*(ushort *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 5: ;
    uVar1 = F_00ab1f30(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x540,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,0x541,param_2);
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 9: ;
    uVar1 = F_00ab1f00(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x53e,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00 GEN_EDX_ARG,0x53f,param_2);
    uVar1 = (uint)*(ushort *)((*(uint *)(gen_frame + 0x24)) + 0xc);
  }
  if (((uVar1 != 0) && (uVar2 != 0)) && ((*(uint *)(gen_frame + 0x20)) != 0)) {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0xf;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x3c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x20));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x44)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    ((undefined4 *)(gen_frame + 0x14))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,10);
    iVar3 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x28));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar3,puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < 10);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x58))
                      ((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x28)),0,0,0);
    this_01 = &(*(int * PTR32 *)(gen_frame + 0x1c));
    iVar3 = 1;
    do {
      this_01 = this_01 - 2;
      F_005a2670(this_01 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
    this_02 = &(*(uint *)(gen_frame + 0x78));
    iVar3 = 9;
    do {
      this_02 = this_02 - 2;
      F_005a2670(this_02 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
    return (byte)uVar1;
  }
LAB_0075f6d7: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0075f710 */
GEN_FRAME byte GEN_THISCALL F_0075f710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 9;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x8)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (byte)uVar1;
}

/* ref: FUN_0075f800 */
GEN_NOFRAME uint GEN_THISCALL F_0075f800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75f800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x29248) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0x2924c) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_0075f810 */
GEN_FRAME byte GEN_THISCALL F_0075f810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x75f810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x8)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (byte)uVar1;
}

/* ref: FUN_0075f900 */
GEN_FRAME byte GEN_THISCALL F_0075f900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75f900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  undefined * this_00;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  uint * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = param_2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                              (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
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
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,4);
  (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)0x0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
    if (((puVar3 != (uint *)0x0) && ((*(uint *)&gen_a3) < 4)) &&
       (puVar2 = (ushort *)F_00ab3db0((uint)*(ushort *)((int)puVar3 + (*(uint *)&gen_a3) * 2 + 8)),
       puVar2 != (ushort *)0x0)) {
      puVar3 = (uint *)F_0043bf60(2,(uint)*puVar2);
      (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
      uVar1 = puVar2[1];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)(uint)uVar1;
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x7e9,(*(uint * PTR32 *)(gen_frame + 0x10)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 - 2;
        F_005a2670(ppuVar5 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 - 2;
        F_005a2670(puVar3 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return (byte)uVar4;
    }
    break;
  case 1: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x12;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)((*(uint *)&gen_a3) + 0xf294);
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x14,(*(uint * PTR32 *)(gen_frame + 0x14))[1]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 - 2;
        F_005a2670(ppuVar5 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 - 2;
        F_005a2670(puVar3 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return (byte)uVar4;
    }
    break;
  case 2: ;
    if ((*(uint *)&gen_a3) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = (*(uint *)&gen_a3) * 10;
    }
    puVar3 = (uint *)F_00ab2260(iVar7);
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x13;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 0x3ca5;
      uVar4 = F_00460c80(this_00 GEN_EDX_ARG,0x763,(*(uint * PTR32 *)(gen_frame + 0x14)),(*(uint *)&gen_a3) + 1);
      F_0042e430((undefined *)((int)this + 0x22d40) GEN_EDX_ARG,uVar4);
      uVar4 = F_0042a990((int)this + 0x22d40 GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)uVar4;
      uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[4]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 - 2;
        F_005a2670(ppuVar5 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 - 2;
        F_005a2670(puVar3 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return (byte)uVar4;
    }
    break;
  case 3: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if ((puVar3 != (uint *)0x0) && ((*(uint *)&gen_a3) < 4)) {
      puVar3 = (uint *)F_00ab3db0((uint)*(ushort *)((int)puVar3 + (*(uint *)&gen_a3) * 2 + 8));
      (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
      if (puVar3 != (uint *)0x0) {
        uVar4 = F_0043bf60(2,(uint)(ushort)*puVar3);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)(uint)*(ushort *)((int)(*(uint * PTR32 *)(gen_frame + 0x14)) + 2);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
        (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x14));
        (*(uint * PTR32 *)(gen_frame + 0x10)) = ((uint *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x10)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x10)))));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
        (*(uint * PTR32 *)(gen_frame + 0x34)) = (*(uint * PTR32 *)(gen_frame + 0x10));
        uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x7e9,uVar4);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0x44)) = uVar4;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,4);
        (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)(*(uint *)&gen_a3);
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
        (*(undefined4 *)(gen_frame + 0x4)) = 10;
        F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
        iVar7 = 0;
        puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
        do {
          F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar7 < 10);
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                          (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
        ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
        iVar7 = 1;
        do {
          ppuVar5 = ppuVar5 - 2;
          F_005a2670(ppuVar5 GEN_EDX_ARG);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
        puVar3 = &(*(uint *)(gen_frame + 0x68));
        iVar7 = 9;
        do {
          puVar3 = puVar3 - 2;
          F_005a2670(puVar3 GEN_EDX_ARG);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
        return (byte)uVar4;
      }
    }
    break;
  case 4: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x12;
      uVar4 = F_00434d60((*(uint *)&gen_a3));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)uVar4;
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x10)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x10));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[1]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,4);
      (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)(*(uint *)&gen_a3);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 - 2;
        F_005a2670(ppuVar5 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 - 2;
        F_005a2670(puVar3 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return (byte)uVar4;
    }
    break;
  case 5: ;
    if ((*(uint *)&gen_a3) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = (*(uint *)&gen_a3) * 10;
    }
    puVar3 = (uint *)F_00ab2260(iVar7);
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x13;
      uVar4 = F_00434d60((*(uint * PTR32 *)(gen_frame + 0x14)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)uVar4;
      uVar4 = F_00460c80(this_00 GEN_EDX_ARG,0x764,(*(uint * PTR32 *)(gen_frame + 0x14)),(*(uint *)&gen_a3) + 1);
      F_0042e430((undefined *)((int)this + 0x22d40) GEN_EDX_ARG,uVar4);
      uVar4 = F_0042a990((int)this + 0x22d40 GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)uVar4;
      uVar4 = F_00460bd0(this_00 GEN_EDX_ARG,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[5]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,4);
      (*(uint * PTR32 *)(gen_frame + 0x64)) = (*(uint * PTR32 *)(gen_frame + 0x14));
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this GEN_EDX_ARG,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 - 2;
        F_005a2670(ppuVar5 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 - 2;
        F_005a2670(puVar3 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return (byte)uVar4;
    }
  }
  puVar3 = &(*(uint *)(gen_frame + 0x68));
  iVar7 = 9;
  do {
    puVar3 = puVar3 - 2;
    F_005a2670(puVar3 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00760130 */
GEN_FRAME uint GEN_THISCALL F_00760130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x760130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,9);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,8);
  uVar3 = uVar2;
  if ((uVar1 != 0) && (uVar2 != 0)) {
    if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x150))) != param_1) {
      *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x150))) = param_1;
      *(undefined1 *)(uVar1 + 0x1d) = 1;
    }
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x138))) != &REFG(undefined, 0x10bda7d)) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x138))) = &REFG(undefined, 0x10bda7d);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x474;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x134)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x134))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_007601d0 */
GEN_FRAME uint GEN_THISCALL F_007601d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7601d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  (*(uint *)(gen_frame + 0x4)) = param_1 | 0x20;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x80;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
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

/* ref: FUN_00760260 */
GEN_FRAME uint GEN_THISCALL F_00760260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x760260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  (*(uint *)(gen_frame + 0x4)) = param_1 | 0x20;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x100;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
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

/* ref: FUN_007602f0 */
GEN_FRAME uint GEN_THISCALL F_007602f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7602f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if ((char)param_2 != '\0') {
    param_1 = param_1 | 1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
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

/* ref: FUN_007603b0 */
GEN_FRAME uint GEN_THISCALL F_007603b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7603b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x40))))
                    ((int *)((int)this + 0x23330) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_007603d0 */
GEN_FRAME uint GEN_STDCALL F_007603d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7603d0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  undefined * PTR32 * ppuVar6;
  bool bVar7;
  
  iVar2 = 0;
  ppuVar6 = &REFG(undefined * PTR32, 0x1327318);
  do {
    pbVar3 = *ppuVar6;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00760404: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00760409;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00760404;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00760409: ;
    if (iVar4 == 0) {
      return (uint)(&REFG(undefined * PTR32, 0x1327318) + iVar2 * 4);
    }
    ppuVar6 = ppuVar6 + 4;
    iVar2 = iVar2 + 1;
    if (0x1327fe7 < (int)ppuVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00760440 */
GEN_FRAME uint F_00760440(unsigned int gen_a0)
{
  GEN_ENTER(0x760440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x22: ;
  case 0x25: ;
    return 0x7d5;
  case 0x23: ;
    return REFG(undefined4, 0x14a4258);
  case 0x24: ;
    return 0x7d4;
  case 0x26: ;
    return 0x7d1;
  case 0x2e: ;
    return 0x2ee1;
  case 0x2f: ;
    return 0x7d9;
  case 0x30: ;
    return 0x2ee2;
  case 0x43: ;
    return 0x55f1;
  }
  if (7 < param_1 - 0x27) {
    if (param_1 - 4 < 2) {
      return param_1 + 0x3e4;
    }
    if (param_1 < 0x31) {
      if (param_1 < 0x3e) {
        return param_1;
      }
    }
    else if (param_1 < 0x3e) {
      uVar1 = F_00434e60(param_1 - 0x31);
      return uVar1;
    }
    uVar1 = param_1;
    if (param_1 < 0x43) {
      uVar1 = param_1 + 0x4de2;
    }
    return uVar1;
  }
  return param_1 + 0x26e9;
}

/* ref: FUN_00760530 */
GEN_FRAME uint F_00760530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x18a);
  if ((bVar1 == 0) || (uVar3 = F_00ab3bd0((uint)bVar1), uVar3 == 0)) {
    return 0xffffffff;
  }
  if (((bVar1 != 1) && (((bVar1 != 2 && (bVar1 != 3)) && (bVar1 != 4)))) &&
     ((bVar1 != 5 && (bVar1 != 0xc)))) {
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 == param_2) {
        return 0xf042;
      }
      if ((uVar2 != 0) && (uVar2 >> 0x10 == param_2 >> 0x10)) {
        return 0xf043;
      }
    }
    if (((bVar1 == 0x1d) || (bVar1 == 0x1e)) && ((*(byte *)(param_1 + 0x2dd2) & 0x10) == 0)) {
      return 0xffffffff;
    }
    if (bVar1 == 0x23) {
      return 0xffffffff;
    }
  }
  return *(uint *)(uVar3 + 4);
}

/* ref: FUN_007605d0 */
GEN_FRAME uint F_007605d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7605d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab25a0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if ('\0' < *(char *)(uVar1 + 4 + uVar2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe);
  }
  return 0xffffffff;
}

/* ref: FUN_00760600 */
GEN_FRAME uint F_00760600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 == 0) && (uVar1 = F_00ab24a0(param_1), uVar1 == 0)) {
    return 0xffffffff;
  }
  uVar1 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00760640 */
GEN_FRAME uint F_00760640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * this;
  
  if ((param_2 == (undefined *)0x0) ||
     ((*(char *)((int)param_2 + 6) == '\0' && (*(int *)((int)param_2 + 8) == 0)))) {
    return 0;
  }
  if ((char)param_1 == '\0') {
    uVar2 = F_00a3a8a0(param_2 GEN_EDX_ARG);
    return (uVar2 < param_3) + 4;
  }
  if ((*(char *)((int)param_2 + 6) == '\0') || (uVar2 = F_00a3a860(param_2 GEN_EDX_ARG), uVar2 == 0)) {
    uVar1 = *(ushort *)((int)param_2 + 0x12);
  }
  else {
    this = (undefined *)F_00a3a860(param_2 GEN_EDX_ARG);
    uVar1 = F_00906d60(this GEN_EDX_ARG);
  }
  if (uVar1 != 0) {
    uVar1 = F_0071d210(param_2 GEN_EDX_ARG);
    return 2 - (uVar1 < 10000);
  }
  return 3;
}

/* ref: FUN_007606c0 */
GEN_FRAME uint F_007606c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7606c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((char)param_1 != '\0') && (uVar1 = F_00a35d00(param_2), uVar1 != 1)) {
    if (uVar1 == 2) {
      return 9;
    }
    return 8;
  }
  return 7;
}

/* ref: FUN_00760700 */
GEN_FRAME uint F_00760700(unsigned int gen_a0)
{
  GEN_ENTER(0x760700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab3c60(param_1 & 0xff);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00760720 */
GEN_FRAME uint F_00760720(unsigned int gen_a0)
{
  GEN_ENTER(0x760720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (uVar1 = F_00a62220(param_1), (char)uVar1 != '\0')) {
    iVar2 = *(byte *)(param_1 + 0x2ecd) - 1;
    if ((*(byte *)(param_1 + 0x2dd2) & 1) != 0) {
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 0: ;
        return 0xf10e;
      case 1: ;
        return 0xf110;
      case 2: ;
        return 0xf10c;
      case 3: ;
      case 4: ;
        return 0xf10d;
      case 5: ;
        return 0xf10f;
      default: ;
        return 0xf10b;
      }
    }
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 0: ;
      return 0xf108;
    case 1: ;
      return 0xf10a;
    case 2: ;
      return 0xf106;
    case 3: ;
    case 4: ;
      return 0xf107;
    case 5: ;
      return 0xf109;
    default: ;
      return 0xf105;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00760800 */
GEN_FRAME uint GEN_THISCALL F_00760800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x760800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((char)param_4 == '\0') {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x7f3;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar5);
  }
  else {
    if ((char)param_3 != '\0') {
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10bf77c));
      F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return (uint)uVar2;
    }
    uVar1 = F_00435340(param_2);
  }
  uVar1 = F_0042e430(param_1 GEN_EDX_ARG,uVar1);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007608a0 */
GEN_FRAME byte F_007608a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7608a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if (uVar2 == 1) {
      bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
      if (bVar1 == 0) {
        bVar1 = F_00a620a0();
        if (bVar1 != 0) {
          uVar2 = F_00a62220(param_1);
          if ((char)uVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007608f0 */
GEN_FRAME byte GEN_THISCALL F_007608f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar3 = REFG(char, 0x14ab2dc);
  if (param_2 != 0) {
    uVar2 = F_00a62220(param_2);
    if (((char)uVar2 != '\0') && (bVar1 = F_00a9f620(param_2 GEN_EDX_ARG), bVar1 == 0)) {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
      }
      else {
        bVar4 = cVar3 == '\x01';
        cVar3 = -1;
        if (bVar4) {
          cVar3 = '\0';
        }
      }
    }
    if (cVar3 == '\0') {
      uVar5 = 0xda2;
    }
    else {
      if (cVar3 != '\x01') goto LAB_0076097c;
      uVar5 = 0xda3;
    }
    uVar6 = 0;
    uVar7 = uVar6;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_0042e430(param_1 GEN_EDX_ARG,uVar2);
    return 1;
  }
LAB_0076097c: ;
  F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bda96));
  return 0;
}

/* ref: FUN_007609a0 */
GEN_FRAME byte GEN_STDCALL F_007609a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7609a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  if (param_2 != 0) {
    F_00c49908(((undefined1 *)(gen_frame + 0x0)),6,param_2 + 0x166c);
    (*(undefined1 *)(gen_frame + 0x6)) = 0;
    F_0042e430(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
    return 1;
  }
  F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10bda97));
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00760a10 */
GEN_FRAME uint F_00760a10(unsigned int gen_a0)
{
  GEN_ENTER(0x760a10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    if (piVar1 == param_1) {
      return 1;
    }
    uVar3 = F_00a5f290(param_1 GEN_EDX_ARG);
    if ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0) {
      return 2;
    }
    bVar2 = F_007608a0(uVar3);
    return (bVar2 != 0) + 3;
  case 2: ;
    break;
  case 3: ;
    return 0xb;
  default: ;
    return 0;
  case 9: ;
    return 0xc;
  }
  this = (undefined *)F_00a5f290(param_1 GEN_EDX_ARG);
  if (*(char *)((int)this + 0x188) == '\x02') {
    return 6;
  }
  bVar2 = F_00a62270(this);
  if (bVar2 == 0) {
    uVar3 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2ed8));
    if ((uVar3 == 0) || (bVar2 = F_007608a0(uVar3), bVar2 == 0)) {
      if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) {
        return 5;
      }
      bVar2 = F_00a9fd60(this GEN_EDX_ARG);
      if (bVar2 == 0) {
        bVar2 = F_00a9fdb0(this GEN_EDX_ARG);
        return 9 - (bVar2 != 0);
      }
    }
    return 7;
  }
  piVar4 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2ed8));
  bVar2 = F_0054c430(this GEN_EDX_ARG);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xd;
  }
  bVar2 = F_0054c460(this GEN_EDX_ARG);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xe;
  }
  return 10;
}

/* ref: FUN_00760b90 */
GEN_FRAME uint F_00760b90(unsigned int gen_a0)
{
  GEN_ENTER(0x760b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x148a070) + param_1 * 8);
}

/* ref: FUN_00760bb0 */
GEN_FRAME ulonglong F_00760bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xffe2ffe9ff005d2a;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
    return 0xffd4d4d4ff454545;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return 0xffffffffff000000;
  case 1: ;
  case 2: ;
    return 0xfffff6e5ffa8383c;
  case 3: ;
    return 0xffbfbdffff0000a4;
  default: ;
    return 0;
  }
}

/* ref: FUN_00760c50 */
GEN_FRAME uint F_00760c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 8: ;
  case 10: ;
  case 0xb: ;
  case 0x12: ;
  case 0x1c: ;
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 9: ;
  case 0x10: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x24: ;
    return 0xff454545;
  case 7: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x13: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xff005d2a;
  default: ;
    return 0;
  case 0x11: ;
    return 0xffb57c09;
  case 0x14: ;
    return 0xffb98700;
  case 0x15: ;
    return 0xff0681b5;
  case 0x1e: ;
    return 0xff0061e3;
  }
  if ((((*(int *)&gen_a2) != 0) && ((*(int *)&gen_a2) != 1)) && ((*(int *)&gen_a2) != 2)) {
    return ((*(int *)&gen_a2) != 3) - 1 & 0xff0061e3;
  }
  return 0xff00008a;
}

/* ref: FUN_00760d10 */
GEN_FRAME uint GEN_THISCALL F_00760d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x760d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)((int)this + 0x292d0);
  iVar3 = 0x12;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x1c;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  iVar3 = *(int *)((int)param_1 + 0xc);
  pvVar2 = param_1;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      this_00 = (undefined *)F_00a37da0(param_1 GEN_EDX_FWD,iVar4);
      pvVar2 = (undefined *)0x0;
      if (this_00 != (undefined *)0x0) {
        if (*(char *)((int)this_00 + 6) == '\0') {
          pvVar2 = *(undefined * PTR32 *)((int)this_00 + 8);
          if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
            pvVar2 = (undefined *)((int)pvVar2 + 1000000);
          }
        }
        else {
          pvVar2 = (undefined *)F_00a3a860(this_00 GEN_EDX_ARG);
          pvVar2 = (undefined *)F_0046e5e0(pvVar2 GEN_EDX_ARG);
        }
        if ((int)pvVar2 - 2U < 0x12) {
          pvVar2 = ((undefined *)GEN_TOP((((int)pvVar2 - 2U) * 0x70)));
          *(undefined * PTR32 *)((int)pvVar2 + 0x292d0U + (int)this) = this_00;
          *(int *)((int)pvVar2 + 0x292d4U + (int)this) = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return (uint)pvVar2;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00760da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x760da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    uVar1 = F_0042ccf0(this + 4 GEN_EDX_FWD,&REFG(undefined * PTR32, 0x12fd328));
  }
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf2 */
GEN_FRAME uint GEN_THISCALL F_00760dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab6240(param_1,0,param_2);
  F_0042e430(this + 4 GEN_EDX_ARG,uVar1);
  uVar1 = F_00ab65a0(param_1,param_2);
  *(uint *)(this + 0x5c) = uVar1;
  this[100] = *(undefined *)(param_2 + 0xa6);
  this[0x66] = *(undefined *)(param_2 + 0x9f);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0xa0) == '\x0f') {
    this[0x65] = *(undefined *)(param_2 + 0x2c);
  }
  else if (*(char *)(param_2 + 0xba) != '\0') {
    this[0x65] = (undefined1)0xff;
  }
  if (**(char * PTR32 *)(this + 4) != '\0') {
    *(undefined4 *)(this + 0x58) = param_1;
  }
  return (uint)*(char * PTR32 *)(this + 4);
}

/* ref: FUN_00760e50 */
GEN_FRAME byte GEN_THISCALL F_00760e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x760e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x65);
  if (bVar1 == 0xff) {
    if (*(char *)((int)param_1 + 6) != '\0') {
      uVar2 = F_00a3a860(param_1 GEN_EDX_FWD);
      if (uVar2 != 0) {
        this_00 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
        bVar1 = F_0046e590(this_00 GEN_EDX_ARG);
        return bVar1;
      }
    }
    bVar1 = *(byte *)((int)param_1 + 0x2f);
  }
  return bVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf2 */
GEN_FRAME byte GEN_THISCALL F_00760e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 IVar1;
  byte bVar2;
  
  F_00760dd0((undefined *)this GEN_EDX_FWD,param_1,param_2);
  bVar2 = F_00a6b6c0(param_2);
  this[0x6d] = (undefined1)((byte)this[0x6d] ^ ((byte)this[0x6d] ^ bVar2) & 1);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 0x3c);
  IVar1 = *(undefined *)(param_2 + 0x9e);
  this[0x6c] = IVar1;
  return (byte)IVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00760ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x760ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    F_0042ccf0(this + 4 GEN_EDX_FWD,&REFG(undefined * PTR32, 0x12fd328));
    this[0x6d] = (undefined1)((byte)this[0x6d] & 0xfe);
    *(undefined4 *)(this + 0x68) = 0;
    this[0x6c] = (undefined1)0x0;
  }
  return;
}

/* ref: FUN_00760f10 */
GEN_FRAME uint GEN_THISCALL F_00760f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)this = 9999;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  if (*(char *)((int)param_1 + 6) != '\0') {
    this_00 = (undefined *)F_00a3a860(param_1 GEN_EDX_FWD);
    uVar1 = F_0046e5e0(this_00 GEN_EDX_ARG);
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)((int)this + 0xc) = param_2;
    return param_2;
  }
  iVar2 = param_1[2];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar2 = iVar2 + 1000000;
  }
  *(int *)((int)this + 8) = iVar2;
  *(uint *)((int)this + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00760f80 */
GEN_NOFRAME uint GEN_THISCALL F_00760f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x760f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(undefined4 *)this,(int)*(short *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00760fa0 */
GEN_FRAME uint GEN_THISCALL F_00760fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x760fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pvVar5;
  undefined * pvVar6;
  undefined * this_01;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  uint * puVar12;
  int * piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_10;
  
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,7);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,6)));
  local_30 = 0;
  local_34 = 0;
  local_1c = 0;
  local_2c = 0;
  local_38 = 0xfbc;
  do {
    local_28 = 0;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,local_2c);
    piVar13 = *(int * PTR32 *)((int)this + local_38 + 0x2829c);
    if ((pvVar5 != (undefined *)0x0) && (piVar13 != (int *)0x0)) {
      iVar2 = *(int *)((int)pvVar5 + 0xc);
      local_24 = 0;
      if (0 < iVar2) {
        local_10 = local_34 * 4 + 0xc;
        local_34 = local_34 + iVar2 * 5;
        do {
          pvVar6 = (undefined *)F_00a37da0(pvVar5 GEN_EDX_ARG,local_24);
          if (pvVar6 == (undefined *)0x0) {
LAB_00761257: ;
            ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 4))(piVar13 GEN_EDX_ARG);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0xc + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0xc + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) - 4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1 GEN_EDX_ARG);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this_00 + 0x1d) = 1;
            }
          }
          else {
            if (*(char *)((int)pvVar6 + 6) == '\0') {
              if (*(int *)((int)pvVar6 + 8) == 0) goto LAB_00761257;
              uVar7 = *(uint *)((int)pvVar6 + 8);
              if ((*(byte *)((int)pvVar6 + 0x14) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              this_01 = (undefined *)F_00a3a860(pvVar6 GEN_EDX_ARG);
              uVar7 = F_0046e5e0(this_01 GEN_EDX_ARG);
            }
            uVar8 = F_00a3a8a0(pvVar6 GEN_EDX_ARG);
            uVar9 = F_00a37c50(pvVar6 GEN_EDX_ARG);
            local_20 = 0;
            if (piVar13[0x16] != uVar7) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 4))(piVar13 GEN_EDX_ARG);
              if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
                *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
                *(undefined1 *)(uVar4 + 0x1d) = 1;
              }
              uVar10 = F_00ab24a0(uVar7);
              if (uVar10 != 0) {
                ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG,uVar7,uVar10);
              }
            }
            uVar10 = F_00760640((uint)*(byte *)(piVar13 + 0x19),pvVar6,piVar13[0x18]);
            local_18 = 7;
            if ((char)piVar13[0x19] != '\0') {
              uVar7 = F_00a35d00(uVar7);
              if (uVar7 == 1) {
                local_18 = 7;
              }
              else if (uVar7 == 2) {
                local_18 = 9;
              }
              else {
                local_18 = 8;
              }
            }
            bVar1 = *(byte *)((int)piVar13 + 0x65);
            uVar7 = (uint)bVar1;
            if (bVar1 != 0) {
              if (bVar1 == 0xff) {
                if ((*(char *)((int)pvVar6 + 6) == '\0') ||
                   (uVar7 = F_00a3a860(pvVar6 GEN_EDX_ARG), uVar7 == 0)) {
                  uVar7 = (uint)*(byte *)((int)pvVar6 + 0x2f);
                }
                else {
                  pvVar6 = (undefined *)F_00a3a860(pvVar6 GEN_EDX_ARG);
                  bVar3 = F_0046e590(pvVar6 GEN_EDX_ARG);
                  uVar7 = (uint)bVar3;
                }
              }
              piVar11 = (int *)F_00ab3c60(uVar7);
              if (piVar11 == (int *)0x0) {
                local_20 = 0;
              }
              else {
                local_20 = *piVar11;
              }
            }
            uVar7 = (uint)(bVar1 != 0) | local_20 * 2;
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0xc + local_10))) != piVar13[0x17]) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0xc + local_10))) = piVar13[0x17];
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = uVar8 << 0x10 | (uint)*(byte *)(piVar13 + 0x19);
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) - 4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) - 4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            puVar12 = ((uint *)GEN_TOP((local_10 + *(int *)(uVar4 + 0x20))));
            uVar7 = *puVar12;
            uVar8 = ((((int)uVar7 >> 0x18 & 0xffU) << 8 | local_18) << 8 | (uint)(uVar9 != 0)) << 8
                    | uVar10 & 0xff;
            if (uVar7 != uVar8) {
              *puVar12 = uVar8;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1 GEN_EDX_ARG);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this_00 + 0x1d) = 1;
            }
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
          }
          local_10 = local_10 + 0x14;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          piVar13 = piVar13 + 0x1c;
        } while (local_24 < iVar2);
      }
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) != local_28) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) = local_28;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar17 = 0;
    uVar15 = 1;
    uVar14 = 0;
    uVar7 = F_004352e0(local_28);
    F_00431250(this_00 GEN_EDX_ARG,local_2c + 0x119,uVar7,uVar14,uVar15,uVar17);
    local_38 = local_38 + 4;
    local_2c = local_2c + 1;
    if (0xfc8 < local_38) {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) != local_30) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) = local_30;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar14 = *(undefined4 *)((int)this + 0x2db50);
      uVar18 = 0;
      uVar16 = 1;
      uVar17 = 0;
      uVar15 = 0x7fc;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                 (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
      uVar4 = F_00461c60(pvVar5 GEN_EDX_ARG,uVar15,local_30,uVar14);
      uVar4 = F_00431250(this_00 GEN_EDX_ARG,0x10c,uVar4,uVar17,uVar16,uVar18);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_007613b0 */
GEN_FRAME uint GEN_THISCALL F_007613b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7613b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined * pvVar3;
  undefined * this_01;
  uint uVar4;
  undefined * this_02;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0;
  local_20 = 500;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,7);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,6)));
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d4);
  if ((pvVar3 != (undefined *)0x0) && (*(int *)((int)this + 0x29a48) != 0)) {
    local_8 = *(int *)((int)pvVar3 + 0xc);
    local_10 = 0;
    if (0 < local_8) {
      local_18 = 400;
      local_1c = 0;
      local_c = 0x7d8;
      do {
        piVar11 = ((int *)GEN_TOP((*(int *)((int)this + 0x29a48) + local_1c)));
        this_01 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,local_10);
        if ((this_01 != (undefined *)0x0) &&
           ((*(char *)((int)this_01 + 6) != '\0' || (*(int *)((int)this_01 + 8) != 0)))) {
          uVar4 = F_00a3a8a0(this_01 GEN_EDX_ARG);
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar5 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar5 = uVar5 + 1000000;
            }
          }
          else {
            this_02 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
            uVar5 = F_0046e5e0(this_02 GEN_EDX_ARG);
          }
          uVar6 = F_00a37c50(this_01 GEN_EDX_ARG);
          if (piVar11[0x16] != uVar5) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 4))(piVar11 GEN_EDX_ARG);
            uVar7 = F_00ab2510(uVar5);
            if (uVar7 != 0) {
              piVar11[0x17] = (uint)*(ushort *)(uVar7 + 0x1c);
              uVar8 = F_00ab64e0(uVar5,0,uVar7);
              F_0042e430(piVar11 + 1 GEN_EDX_ARG,uVar8);
              *(undefined1 *)(piVar11 + 0x19) = 0;
              piVar11[0x18] = (uint)*(byte *)(uVar7 + 0x20);
              if (*(char *)piVar11[1] != '\0') {
                piVar11[0x16] = uVar5;
              }
            }
          }
          if (*((int *)GEN_TOP((local_c - 8 + *(int *)(uVar2 + 0x20)))) != piVar11[0x17]) {
            *((int *)GEN_TOP((local_c - 8 + *(int *)(uVar2 + 0x20)))) = piVar11[0x17];
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = local_10 << 0x10 | uVar4;
          puVar1 = ((uint *)GEN_TOP((local_c - 4 + *(int *)(uVar2 + 0x20))));
          if (*puVar1 != uVar4) {
            *puVar1 = uVar4;
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = F_00760640((uint)*(byte *)(piVar11 + 0x19),this_01,piVar11[0x18]);
          uVar4 = uVar4 & 0xff | (uint)(uVar6 != 0) << 8;
          if (*((uint *)GEN_TOP((local_c + *(int *)(uVar2 + 0x20)))) != uVar4) {
            *((uint *)GEN_TOP((local_c + *(int *)(uVar2 + 0x20)))) = uVar4;
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = F_0042a990(piVar11 + 1 GEN_EDX_ARG);
          if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_18)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_18))) = uVar4;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          local_20 = local_20 + 3;
          local_c = local_c + 0xc;
          local_18 = local_18 + 4;
          local_14 = local_14 + 1;
        }
        local_1c = local_1c + 0x68;
        local_10 = local_10 + 1;
      } while (local_10 < local_8);
    }
  }
  if ((int)local_14 < local_8) {
    iVar9 = local_20 * 4;
    iVar10 = local_8 - local_14;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar9))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar9))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar9 = iVar9 + 0xc;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  uVar4 = local_8 << 0x10 | local_14;
  if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xed8)))) {
    uVar15 = 0;
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 0x7fc;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                               (*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG)));
    uVar5 = F_00461c60(pvVar3 GEN_EDX_ARG,uVar12,local_14,local_8);
    F_00431250(this_00 GEN_EDX_ARG,0x10d,uVar5,uVar13,uVar14,uVar15);
  }
  uVar5 = *(uint *)(uVar2 + 0x20);
  if (*(uint *)(uVar5 + 0xed8) != uVar4) {
    *(uint *)(uVar5 + 0xed8) = uVar4;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return uVar5;
}

/* ref: FUN_00761640 */
GEN_FRAME uint GEN_THISCALL F_00761640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x761640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_14;
  int local_10;
  int local_c;
  
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d1);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,7);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,6);
    F_00760d10(this GEN_EDX_ARG,uVar2);
    local_10 = 2;
    local_14 = 1000;
    local_c = 0xee4;
    puVar7 = (undefined4 *)((int)this + 0x292d0);
    do {
      if (puVar7[-4] != local_10) {
        ((code *)*(gen_code32 *)(puVar7[-0x1a] + 4))(puVar7 - 0x1a);
        uVar5 = F_00ab24a0(local_10);
        if (uVar5 != 0) {
          ((code *)*(gen_code32 *)(puVar7[-0x1a] + 8))(puVar7 - 0x1a,local_10,uVar5);
        }
      }
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 0xffff;
      if ((undefined *)*puVar7 != (undefined *)0x0) {
        uVar2 = F_00a3a8a0((undefined *)*puVar7 GEN_EDX_ARG);
        uVar2 = uVar2 << 0x10;
        uVar6 = F_00a37c50((undefined *)*puVar7 GEN_EDX_ARG);
        uVar5 = puVar7[1];
        uVar6 = (uint)(uVar6 != 0) * 0x10000;
      }
      piVar1 = ((int *)GEN_TOP((local_c - 4 + *(int *)(uVar3 + 0x20))));
      if (*piVar1 != puVar7[-3]) {
        *piVar1 = puVar7[-3];
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) != (uVar5 | uVar6)) {
        *((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) = uVar5 | uVar6;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != (*(byte *)(puVar7 - 1) | uVar2)) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = *(byte *)(puVar7 - 1) | uVar2;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = F_0042a990(puVar7 - 0x19 GEN_EDX_ARG);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14)))) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14))) = uVar5;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_c = local_c + 0xc;
      local_14 = local_14 + 4;
      local_10 = local_10 + 1;
      puVar7 = puVar7 + 0x1c;
    } while (local_14 < 0x42d);
  }
  return uVar5;
}

/* ref: FUN_007617a0 */
GEN_FRAME uint GEN_THISCALL F_007617a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7617a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int local_8;
  
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x29200),0,*(int *)((int)this + 0x291fc) * 4);
  *(undefined4 *)((int)this + 0x291f8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x235c0);
  puVar2 = (undefined4 *)((int)this + 0x2375c);
  local_8 = 0x32;
  do {
    *puVar3 = 0xe0000000;
    puVar3[1] = 0;
    puVar2[-3] = 0xe0000000;
    puVar2[-2] = 0;
    puVar2[-1] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined2 *)((int)puVar2 + 0x1bb) = 0;
    *(undefined1 *)((int)puVar2 + 0x1bd) = 0xff;
    *(undefined1 *)(puVar2 + 0x6d) = 0;
    F_0042e430(puVar2 + 0x19 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    puVar2[3] = 0;
    F_0042e430(puVar2 + 0x58 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    F_0042e430(puVar2 + 0x2e GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(puVar2 + 0x43 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    puVar3 = puVar3 + 2;
    puVar2 = puVar2 + 0x74;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: FUN_00761890 */
GEN_FRAME unsigned int GEN_THISCALL F_00761890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x761890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x29200),0,*(int *)((int)this + 0x291fc) * 4);
  *(undefined4 *)((int)this + 0x291f8) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x4c))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG);
  local_c = *(int *)(uVar2 + 0x71bc) - 1;
  if (-1 < local_c) {
    local_8 = local_c * 4 + 0x70f4;
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x4c))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG);
      uVar5 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(local_8 + uVar2))))))
                        (((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(local_8 + uVar2))));
      uVar2 = 0x31;
      uVar4 = 0;
      piVar3 = (int *)((int)this + 0x29020);
      do {
        local_14 = (int)uVar5;
        if ((*piVar3 == local_14) &&
           (local_10 = (int)((ulonglong)uVar5 >> 0x20), piVar3[1] == local_10)) {
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar2 >> 5) * 4)));
          *puVar1 = *puVar1 | uVar4;
          *(int *)((int)this + 0x291f8) = *(int *)((int)this + 0x291f8) + 1;
          break;
        }
        piVar3 = piVar3 - 0x74;
        uVar4 = uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
        uVar2 = uVar2 - 1;
      } while (-1 < (int)uVar2);
      local_8 = local_8 - 4;
      local_c = local_c - 1;
    } while (-1 < local_c);
  }
  return 0;
}

/* ref: FUN_00761970 */
GEN_FRAME uint GEN_THISCALL F_00761970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_10 = 0xffffffff;
  piVar3 = (int *)((int)this + 0x23750);
  uVar4 = 0;
  do {
    if ((*piVar3 == param_1) && (piVar3[1] == param_2)) {
      return (uint)piVar3;
    }
    uVar2 = local_10;
    if ((((*((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f))
          == 0) && (uVar2 = uVar4, *piVar3 == -0x20000000)) && (piVar3[1] == 0)) {
      uVar2 = local_10;
      local_c = uVar4;
    }
    local_10 = uVar2;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x74;
  } while ((int)uVar4 < 0x32);
  uVar4 = local_c;
  if ((int)local_c < 0) {
    uVar4 = local_10;
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4)));
  *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
  *(int *)((int)this + 0x291f8) = *(int *)((int)this + 0x291f8) + 1;
  return (uint)((undefined *)GEN_TOP(((uVar4 + 0x139) * 0x1d0 + (int)this)));
}

/* ref: FUN_00761a20 */
GEN_FRAME uint GEN_THISCALL F_00761a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (((byte)param_2[4] & 0xf) == 4) {
    iVar1 = param_2[5];
    if (iVar1 == 0x14) {
      if ((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) {
        F_0046cc80(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_FWD,param_2[1],param_2[3]);
      }
    }
    else if (iVar1 == 0x15) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_ARG,0);
      }
      else {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_ARG,param_2[3]);
      }
    }
    else if (iVar1 == 0x16) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_ARG,0);
      }
      else {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_ARG,param_2[3]);
      }
    }
  }
  *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761ad0 */
GEN_FRAME uint GEN_THISCALL F_00761ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 == 4) {
    if ((((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) &&
        (((byte)param_2[4] & 0xf) == 4)) && (((byte)param_2[6] & 0xf) == 4)) {
      F_00458f70(*(undefined * PTR32 *)((int)this + 0x2332c) GEN_EDX_FWD,param_2[1],param_2[3],param_2[5],param_2[7]);
      *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 3;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b40 */
GEN_FRAME uint GEN_STDCALL F_00761b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a41750(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b70 */
GEN_FRAME uint GEN_STDCALL F_00761b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
    uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
    if (uVar1 != 0) {
      uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      F_00a41df0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(undefined4 *)(uVar1 + 0x74));
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bc0 */
GEN_FRAME uint GEN_STDCALL F_00761bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a3c780(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bf0 */
GEN_FRAME uint GEN_STDCALL F_00761bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
    if (3 < uVar2) goto LAB_00761c67;
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  default: ;
    F_00ae2920(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
    *param_1 = 0;
    return (uint)param_1;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 1;
    }
    break;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 2;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 2;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    uVar3 = 4;
  }
  F_00ae2d40(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,uVar3,uVar1);
LAB_00761c67: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761c90 */
GEN_FRAME uint GEN_STDCALL F_00761c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar2 = F_00760440(uVar1);
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*(undefined4 *)(param_2 + 0x14);
  }
  F_006d9570(uVar1,uVar2,(uint)(bVar3 & 1));
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761cf0 */
GEN_FRAME uint GEN_STDCALL F_00761cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d00 */
GEN_FRAME uint GEN_STDCALL F_00761d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d10 */
GEN_FRAME byte GEN_STDCALL F_00761d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 == 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
    case 2: ;
switchD_00761d23_caseD_0: ;
      return 1;
    }
  }
  else if (*(int *)(param_2 + 0x1690) != 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
      goto switchD_00761d23_caseD_0;
    case 1: ;
      return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
    case 2: ;
      return *(int *)(param_2 + 0x1690) != *(int *)(param_2 + 0x1694);
    }
  }
  return 0;
}

/* ref: FUN_00761d90 */
GEN_FRAME byte GEN_STDCALL F_00761d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    return uVar1 == param_2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00761df0 */
GEN_FRAME uint GEN_STDCALL F_00761df0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x761df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    break;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2);
  default: ;
    return 0;
  }
  if ((double)param_3 <= *(double *)&REFG(undefined, 0x1090710)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00761e60 */
GEN_FRAME uint GEN_THISCALL F_00761e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x761e60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  byte bVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  sbyte sVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  
  this = (undefined *)F_00a5f290(param_2 GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
  (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
  uVar8 = 0xc00;
  cVar9 = '\x05';
  (*(uint *)(gen_frame + 0x8)) = 0;
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
    (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
    if (param_2 == param_3) goto LAB_00761ef0;
    if ((this == (undefined *)0x0) || ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0)) {
      bVar2 = F_007608a0(this);
      if (bVar2 != 0) {
LAB_00761f28: ;
        (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
        (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
        goto LAB_00761f3a;
      }
LAB_00761f47: ;
      bVar1 = true;
      uVar8 = 0xc000;
      cVar9 = '\a';
    }
    else {
LAB_00761f0c: ;
      bVar1 = true;
      uVar8 = 0xc0;
      cVar9 = '\x03';
    }
    break;
  case 2: ;
    bVar1 = true;
    if ((uVar4 & 0xff) == 2) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5 GEN_EDX_ARG);
        if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0))
        goto switchD_00761ecb_caseD_3;
        bVar2 = F_007608a0(uVar3);
        if (bVar2 != 0) goto LAB_00761f28;
        uVar8 = 0x30000;
        cVar9 = '\b';
      }
    }
    else if ((uVar4 & 0xff) == 3) {
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
LAB_00761f3a: ;
        bVar1 = true;
        uVar8 = 0xc;
        cVar9 = '\x01';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5 GEN_EDX_ARG);
        if ((uVar3 == 0) || ((*(byte *)(uVar3 + 0x2dd2) & 0x10) == 0)) goto LAB_00761f47;
        uVar8 = 0xc0;
        cVar9 = '\x03';
      }
    }
    else if (this == (undefined *)0x0) {
LAB_00761ef0: ;
      bVar1 = true;
      uVar8 = 3;
      cVar9 = '\0';
    }
    else {
      bVar2 = F_00a62270(this);
      if (bVar2 == 0) {
        if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) goto LAB_00761ef0;
        bVar2 = F_00a9fd60(this GEN_EDX_ARG);
        if (bVar2 != 0) goto LAB_00761f3a;
        bVar2 = F_00a9fdb0(this GEN_EDX_ARG);
        if (bVar2 == 0) goto LAB_00761f0c;
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else {
        uVar8 = 0x300;
        cVar9 = '\x04';
      }
    }
    break;
  case 3: ;
switchD_00761ecb_caseD_3: ;
    uVar8 = 0x300;
    cVar9 = '\x04';
    break;
  case 4: ;
  case 6: ;
    bVar1 = true;
    break;
  case 9: ;
    uVar8 = 0x3000;
    cVar9 = '\x06';
  }
  sVar7 = cVar9 * '\x02';
  if (this == (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      break;
    case 1: ;
      if (!((double)param_4 <= *(double *)&REFG(undefined, 0x1090710))) goto switchD_007620d1_caseD_3;
      break;
    case 2: ;
      piVar5 = (int *)F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      bVar10 = piVar5 == param_2;
      goto LAB_0076212a;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      goto switchD_007620d1_caseD_0;
    case 1: ;
      bVar10 = (bool)(*(byte *)((int)this + 0x2dd2) >> 1 & 1);
      break;
    case 2: ;
      pvVar6 = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      bVar10 = pvVar6 == this;
      break;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
LAB_0076212a: ;
    if (bVar10 == false) goto switchD_007620d1_caseD_3;
  }
switchD_007620d1_caseD_0: ;
  (*(uint *)(gen_frame + 0x8)) = 1;
switchD_007620d1_caseD_3: ;
  if ((bVar1) &&
     (bVar2 = F_00761d10((uVar8 & (*(uint *)(gen_frame + 0xc))) >> sVar7,this,(undefined4)gen_fl2bits(param_4)),
     bVar2 != 0)) {
    return (*(uint *)(gen_frame + 0x8)) | 2;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_007621c0 */
GEN_FRAME byte GEN_STDCALL F_007621c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7621c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
    return 3;
  }
}

/* ref: FUN_00762200 */
GEN_FRAME byte GEN_STDCALL F_00762200(unsigned int gen_a0)
{
  GEN_ENTER(0x762200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  if (uVar1 == param_1) {
    return 0;
  }
  uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  return uVar1 != param_1;
}

/* ref: FUN_00762230 */
GEN_FRAME byte GEN_THISCALL F_00762230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar4 = 0;
  piVar5 = (int *)((int)this + 0x29258);
  do {
    uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,iVar4);
    iVar3 = *piVar5;
    if ((uVar1 != 0) && (iVar3 != 0)) {
      iVar2 = 0;
      if (0 < *(int *)(uVar1 + 0xc)) {
        do {
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x58) == param_1)) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(int *)(uVar1 + 0xc));
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 4);
  uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d4);
  if ((uVar1 != 0) && (iVar4 = *(int *)((int)this + 0x29a48), iVar4 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(uVar1 + 0xc)) {
      do {
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == param_1)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x68;
      } while (iVar3 < *(int *)(uVar1 + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_007622d0 */
GEN_FRAME uint GEN_THISCALL F_007622d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7622d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0x29258 + param_2 * 4);
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf5 */
GEN_FRAME uint GEN_THISCALL F_007622f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7622f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005b1090(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00762310 */
GEN_FRAME byte GEN_THISCALL F_00762310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0057f860(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328128));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1 GEN_EDX_ARG,param_1,param_2);
    if ((char)uVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf13 */
GEN_FRAME byte GEN_THISCALL F_00762350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(char *)(REFG(int, 0x1379860) + 0x21d) != '\0') {
    if (((*(char *)(REFG(int, 0x1379860) + 0x21e) != '\0') && (((byte)this[0x1b0] & 8) != 0)) &&
       ((char)param_3 == '\0')) {
      bVar2 = F_00762310(this GEN_EDX_FWD,param_1,param_2);
      return bVar2;
    }
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1 GEN_EDX_ARG,param_1,param_2), (char)uVar3 != '\0')) {
    return 1;
  }
  if (((((byte)this[0x1b0] & 8) != 0) && ((char)param_3 == '\0')) &&
     (bVar2 = F_00762310(this GEN_EDX_ARG,param_1,param_2), bVar2 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf23 */
GEN_FRAME uint GEN_THISCALL F_007623f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7623f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xef;
  *(int *)(this + 0x1e4) = param_1;
  bVar2 = F_00594d10(this GEN_EDX_FWD,param_1,1);
  if (bVar2 != 0) {
    F_005aa060((undefined *)(REFG(int, 0x1379860) + 0x20c) GEN_EDX_ARG,0xe,0);
  }
  sVar1 = *((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5e)));
  iVar3 = (int)*((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5c)));
  *(int *)(this + 0x1e8) = iVar3;
  *(int *)(this + 0x1f0) = iVar3;
  uVar4 = (uint)sVar1;
  *(uint *)(this + 0x1ec) = uVar4;
  *(uint *)(this + 500) = uVar4;
  return uVar4;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf24 */
GEN_NOFRAME byte GEN_THISCALL F_00762460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00594d10(this GEN_EDX_FWD,*(undefined4 *)(this + 0x1e4),0);
  *(undefined4 *)(this + 0x1e4) = 0;
  return bVar1;
}

/* ref: FUN_00762480 */
GEN_FRAME byte GEN_THISCALL F_00762480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762480u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int3 iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,0);
  uVar5 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
  bVar3 = F_00a34970((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x21);
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)bVar3 << 0x10));
  iVar2 = (int3)(*(int *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x8)) = (uint)bVar3 << 0x10;
  bVar3 = F_00a34de0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x21);
  if ((bVar3 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x8)) = CONCAT13(1,iVar2);
  }
  if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) == '\0') goto LAB_00762561;
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x74))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
    if ((char)uVar6 != '\0') goto LAB_00762561;
    if ((*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x3e))) & 0x80) == 0) {
      if ((char)(*(uint *)&gen_args[4]) == '\0') {
        F_0059b860((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]),0);
      }
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x60))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,uVar4,uVar5);
    if ((char)uVar6 != '\0') {
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
      goto LAB_00762561;
    }
    if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) != '\0') goto LAB_00762561;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x68))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[3]));
    if ((char)uVar6 != '\0') goto LAB_00762561;
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) & 8) != 0) {
    F_0059b860((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,0);
  }
LAB_00762561: ;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4)));
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0xf8) & 8) != 0) {
      uVar6 = (uint)(short)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))));
      uVar7 = (int)uVar6 >> 0x1f;
      if ((2 < (int)((uVar6 ^ uVar7) - uVar7)) ||
         (uVar6 = (uint)(short)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500)))),
         uVar7 = (int)uVar6 >> 0x1f, 2 < (int)((uVar6 ^ uVar7) - uVar7))) {
        *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) | 0x10;
      }
      (*(int * PTR32 *)&gen_args[2]) = (int *)(uint)(ushort)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      (*(uint *)&gen_args[4]) = (uint)(ushort)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))));
      uVar4 = F_00572ff0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) GEN_EDX_ARG,&(*(uint *)&gen_args[4]),&(*(int * PTR32 *)&gen_args[2]));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) + (int)(short)(*(uint *)&gen_args[4]);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) + (int)(short)(*(int * PTR32 *)&gen_args[2]);
      if (uVar4 != 0) {
        F_00a34100((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      }
      return 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) = 0;
  }
  return (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_00762630 */
GEN_FRAME unsigned int GEN_STDCALL F_00762630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762630u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  code * pcVar2;
  uint uVar3;
  
  uVar1 = param_1[0x42];
  if ((uVar1 & 0xe00003f) == 0) {
    uVar3 = (uint)param_1[0x3d] >> 0x14 & 0xf;
    if ((char)param_2 == '\0') {
      if ((uVar3 == 3) || (uVar3 == 2)) {
        if ((uVar1 >> 0x18 & 1) != 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,param_3,0);
          param_1[0x48] = param_1[0x48] | 2;
          return;
        }
        if ((*(byte *)((int)param_1 + 0xf9) & 4) == 0) {
          (*(undefined4 *)(gen_frame + 0x4)) = 3;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
          F_005a9110(param_1 GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          return;
        }
      }
    }
    else if ((((uVar3 == 5) || (uVar3 == 4)) && ((uVar1 >> 0x18 & 1) != 0)) &&
            (((uint)param_1[0x48] >> 1 & 1) != 0)) {
      pcVar2 = *(gen_code32 *)(*param_1 + 0x14);
      param_1[0x48] = param_1[0x48] | 0x2000;
      (*pcVar2)(param_1,param_3);
      param_1[0x48] = param_1[0x48] & 0xfffffffd;
    }
  }
  return;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf20 */
GEN_FRAME unsigned int GEN_THISCALL F_00762710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((((byte)this[0x1b0] & 0x40) != 0) && (param_1 != (undefined *)0x0)) {
    F_0055e2a0(param_1 GEN_EDX_FWD,0x2000000,param_2);
  }
  return;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf21 */
GEN_FRAME unsigned int GEN_THISCALL F_00762740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((((((byte)this[0x1b0] & 0x40) != 0) && (*(uint *)(this + 0x1f8) != 0)) &&
      (param_1 != (int *)0x0)) && ((param_1[0x42] & *(uint *)(this + 0x1f8)) != 0)) {
    *(char *)((int)param_1 + 0x10e) = *(char *)((int)param_1 + 0x10e) + '\x01';
    uVar1 = F_005b8a10(param_1 GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,1,0);
    }
  }
  return;
}

/* ref: FUN_00762790 */
GEN_FRAME uint GEN_THISCALL F_00762790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * this_00;
  char cVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  
  iVar6 = REFG(int, 0x1379860);
  iVar2 = *(int *)(REFG(int, 0x1379860) + 0x1c);
  this_00 = (uint *)(REFG(int, 0x1379860) + 0x20c);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD);
  if ((char)uVar5 != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar6 + 0x21b) != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar2 + 0x1e) != '\0') {
    return uVar5;
  }
  cVar1 = *(char *)(iVar6 + 0x21c);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  uVar7 = 0;
  if ((cVar1 != '\0') && ((*(byte *)((int)this + 0x1b0) & 4) == 0)) {
    uVar7 = 0xf;
  }
  piVar3 = *(int * PTR32 *)(iVar2 + 4);
  if ((piVar3 == (int *)0x0) && (cVar1 == '\0')) {
    uVar5 = *this_00;
    if ((uVar5 != 0xb) && (uVar5 != 6)) {
      return uVar5;
    }
    uVar5 = F_005aa060(this_00 GEN_EDX_ARG,0,0);
    return uVar5;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) goto LAB_007628b9;
  iVar6 = iVar2;
  if (*(ushort *)(iVar2 + 0x18) < 1000) {
    uVar5 = F_0055a530(iVar2 GEN_EDX_ARG);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    uVar5 = F_0055a580(iVar2 GEN_EDX_ARG);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
    for (iVar6 = *(int *)(iVar2 + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
      if (999 < *(ushort *)(iVar6 + 0x18)) goto LAB_0076282f;
    }
  }
  else {
LAB_0076282f: ;
    in_ecx = F_00559c20(iVar6 GEN_EDX_ARG);
    bVar4 = F_005613c0(in_ecx GEN_EDX_ARG);
    uVar5 = CONCAT31(extraout_var,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    bVar4 = F_00561440(in_ecx GEN_EDX_ARG);
    uVar5 = CONCAT31(extraout_var_00,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
  }
  if ((((uVar7 == 0) || (uVar7 == 0xf)) && (iVar2 == piVar3[0x28])) &&
     (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3 GEN_EDX_ARG), (char)uVar5 == '\0')) {
    uVar7 = 6;
  }
LAB_007628b9: ;
  if ((*this_00 != uVar7) && (uVar5 = F_005aa060(this_00 GEN_EDX_ARG,0,0), uVar7 != 0)) {
    uVar5 = F_005aa060(this_00 GEN_EDX_ARG,uVar7,0);
  }
  return uVar5;
}

/* ref: FUN_00762910 */
GEN_FRAME uint GEN_THISCALL F_00762910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * puVar4;
  
  uVar3 = param_1;
  if (*(uint *)((int)this + 0x200) != param_1) {
    *(uint *)((int)this + 0x200) = param_1;
    puVar1 = REFG(undefined * PTR32, 0x1328130);
    puVar4 = REFG(undefined * PTR32, 0x132812c);
    if (param_1 == 1) {
      puVar1 = REFG(undefined * PTR32, 0x132812c);
      puVar4 = REFG(undefined * PTR32, 0x1328130);
    }
    piVar2 = (int *)F_0057f860(this GEN_EDX_FWD,puVar1);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2 GEN_EDX_ARG);
    }
    piVar2 = (int *)F_0057f860(this GEN_EDX_ARG,puVar4);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2 GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf7 */
GEN_FRAME uint GEN_THISCALL F_00762980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(REFG(undefined4, 0x1379860) + 0x21d) == '\0') {
    uVar2 = *(uint *)(this + 0xec);
    uVar1 = REFG(undefined4, 0x1379860);
    if (uVar2 != 0) {
      uVar1 = F_0057f8d0(this GEN_EDX_FWD,uVar2);
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    return uVar1;
  }
  uVar2 = F_0057f990((undefined *)this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_007629e0 */
GEN_FRAME uint GEN_THISCALL F_007629e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7629e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  longlong lVar2;
  gen_size32 _Size;
  int * piVar3;
  undefined4 * puVar4;
  undefined * _Dst;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00404270();
  lVar2 = (ulonglong)*(uint *)(param_1 + 8) * 0xc;
  *(uint *)((int)this + 8) = *(uint *)(param_1 + 8);
  puVar4 = (undefined4 *)
           F_00406c00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,0,piVar3,0);
  puVar5 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  param_1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      *puVar4 = *puVar5;
      uVar1 = *(ushort *)((int)puVar5 + 10);
      *(ushort *)(puVar4 + 1) = uVar1;
      *(undefined1 *)((int)puVar4 + 6) = *(undefined1 *)(puVar5 + 2);
      _Size = (uint)uVar1 * 4;
      _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,_Size,0x10)));
      puVar4[2] = _Dst;
      F_00c48350(_Dst,0,_Size);
      F_00c46aa0(puVar4[2],puVar5 + 4,_Size);
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 3;
      puVar5 = (undefined4 *)((int)puVar5 + puVar5[1] + 0x10);
    } while (param_1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762aa0 */
GEN_FRAME uint GEN_STDCALL F_00762aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x762aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 | (param_1 & 0xff00 | param_1 << 0x10) << 8;
}

/* ref: FUN_00762b10 */
GEN_NOFRAME uint GEN_THISCALL F_00762b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 8)));
    do {
      if (*piVar2 != 0) {
        F_00406810(*piVar2);
        *piVar2 = 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00762b80 */
GEN_FRAME uint GEN_THISCALL F_00762b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0xc) != '\0') && (*(uint *)((int)this + 8) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    do {
      if (*piVar2 == param_1) {
        return (uint)(*(int * PTR32 *)((int)this + 4) + uVar1 * 3);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762bc0 */
GEN_FRAME uint GEN_THISCALL F_00762bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return CONCAT22((short)((uint)((int)(uintptr_t)piVar2) >> 0x10),(short)piVar2[1]);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c10 */
GEN_FRAME byte GEN_THISCALL F_00762c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x762c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return *(byte *)((int)piVar2 + 6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c60 */
GEN_FRAME uint GEN_THISCALL F_00762c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if ((piVar2 != (int *)0x0) && ((*(uint *)&gen_a2) < *(ushort *)(piVar2 + 1))) {
        uVar1 = *(uint *)(piVar2[2] + (*(uint *)&gen_a2) * 4);
        if ((char)param_3 != '\0') {
          uVar1 = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
        }
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00762cf0 */
GEN_FRAME uint GEN_THISCALL F_00762cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00762c60(this GEN_EDX_FWD,param_1,param_2,param_4);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00762d10 */
GEN_FRAME uint GEN_THISCALL F_00762d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
                    (param_2 & 0xff00 | param_2 << 0x10) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if (uVar2 == *(uint *)(piVar3[2] + (uint)uVar1 * 4)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00762db0 */
GEN_FRAME uint GEN_THISCALL F_00762db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 | (param_2 & 0xff00) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if ((uVar2 & 0xffffff) == (*(uint *)(piVar3[2] + (uint)uVar1 * 4) & 0xffffff)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentInterface::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00762e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentInterface::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00762e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf11 */
GEN_NOFRAME byte F_00762ea0(void)
{
  GEN_ENTER(0x762ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::Agent::AgentInterface::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00762eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762eb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentInterface::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00762ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),1);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentInterface::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00762ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentInterface::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_00762f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8));
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf8 */
GEN_NOFRAME byte GEN_THISCALL F_00762f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  return uVar1 == 4;
}

/* ref: Client::UI2::Agent::AgentInterface::vf9 */
GEN_NOFRAME byte GEN_THISCALL F_00762f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  return uVar1 == 8;
}

/* ref: FUN_00762fc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00762fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x762fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    puVar2 = (undefined4 *)((int)this + 0xc);
    iVar1 = 0x65;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 0x14))((int *)*puVar2 GEN_EDX_FWD,*(undefined4 *)((int)this + 8));
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
    *(undefined1 *)((int)this + 5) = 0;
  }
  return;
}

/* ref: FUN_00763020 */
GEN_FRAME unsigned int GEN_THISCALL F_00763020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    puVar1 = (undefined4 *)((int)this + 0xc);
    iVar2 = 0x65;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x34))((int *)*puVar1 GEN_EDX_FWD,param_1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00763050 */
GEN_FRAME uint GEN_THISCALL F_00763050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00763070 */
GEN_NOFRAME uint GEN_THISCALL F_00763070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: FUN_00763080 */
GEN_FRAME uint GEN_THISCALL F_00763080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 0x38))((int *)*puVar2 GEN_EDX_FWD,param_1,param_2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007630b0 */
GEN_FRAME uint GEN_THISCALL F_007630b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7630b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 0x3c))((int *)*puVar2 GEN_EDX_FWD,param_1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf2 */
GEN_NOFRAME unsigned int F_007630e0(void)
{
  GEN_ENTER(0x7630e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007630f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7630f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00763120 */
GEN_FRAME unsigned int GEN_THISCALL F_00763120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return;
}

/* ref: FUN_00763160 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x28) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf18 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (this[0x2c] == (undefined1)0x0) {
    uVar3 = 0x3f;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_FWD)));
    F_00447ac0(pvVar2 GEN_EDX_ARG,uVar3);
    return;
  }
  uVar3 = 0x1fffc0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG)));
  F_00447ac0(pvVar2 GEN_EDX_ARG,uVar3);
  return;
}

/* ref: FUN_007631c0 */
GEN_NOFRAME uint GEN_THISCALL F_007631c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7631c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * in_EAX = 0;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint * puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((uVar1 != 0) && (*(int *)((int)this + 8) != 0)) {
    uVar8 = 0;
    uVar2 = F_00404270();
    uVar5 = -(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 8);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar2,uVar8);
    in_EAX = (uint *)0x0;
    if (puVar3 != (uint *)0x0) {
      puVar6 = puVar3 + 1;
      *puVar3 = uVar1;
      in_EAX = puVar6;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        *in_EAX = 0;
        in_EAX = in_EAX + 2;
      }
      if (puVar6 != (uint *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,puVar6);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))
                  (piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0x20),puVar6);
        uVar1 = *puVar3;
        puVar6 = puVar6 + uVar1 * 2;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          puVar6 = puVar6 - 2;
          F_005a2670(puVar6 GEN_EDX_ARG);
        }
        uVar7 = F_00406b30(puVar3);
        in_EAX = (uint *)uVar7;
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_00763280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (this[0x2c] == (undefined1)0x0) {
    uVar2 = 0x3f;
  }
  else {
    uVar2 = 0x1fffc0;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  F_00447980(this_00 GEN_EDX_ARG,uVar2,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_007632c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7632c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf22 */
GEN_FRAME uint GEN_THISCALL F_007632d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7632d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  bVar2 = F_0043cdc0();
  if (bVar2 == 0) {
    AVar1 = this[0x1d];
    F_005a2710(param_1 GEN_EDX_ARG,4);
    *(uint *)((int)param_1 + 4) = (uint)(AVar1 != (undefined1)0x0);
  }
  else {
    F_005a2710(param_1 GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_1 + 4) = 0;
    this[0x30] = (undefined1)0x0;
  }
  AVar1 = this[0x1b];
  F_005a2710((undefined *)((int)param_1 + 8) GEN_EDX_ARG,4);
  *(uint *)((int)param_1 + 0xc) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x1c];
  F_005a2710((undefined *)((int)param_1 + 0x10) GEN_EDX_ARG,4);
  *(uint *)((int)param_1 + 0x14) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x18];
  F_005a2710((undefined *)((int)param_1 + 0x18) GEN_EDX_ARG,3);
  *(int *)((int)param_1 + 0x1c) = (int)(char)AVar1;
  AVar1 = this[0x19];
  F_005a2710((undefined *)((int)param_1 + 0x20) GEN_EDX_ARG,3);
  *(int *)((int)param_1 + 0x24) = (int)(char)AVar1;
  AVar1 = this[0x1a];
  uVar3 = F_005a2710((undefined *)((int)param_1 + 0x28) GEN_EDX_ARG,3);
  *(uint *)((int)param_1 + 0x2c) = (uint)(AVar1 != (undefined1)0x0);
  this[0x1a] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_007633a0 */
GEN_FRAME byte GEN_THISCALL F_007633a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7633a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar3 = 1;
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  bVar1 = F_00447870(this_00 GEN_EDX_ARG,param_1,param_2,uVar2,uVar3,uVar4);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar1 == 0;
  }
  return bVar1 == 0;
}

/* ref: FUN_007633e0 */
GEN_FRAME uint GEN_THISCALL F_007633e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7633e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_0043c920(this_00 GEN_EDX_ARG,param_1,uVar2);
  return uVar1;
}

/* ref: FUN_00763410 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00763420 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00763430 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00763440 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00763440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00763450 */
GEN_NOFRAME uint GEN_THISCALL F_00763450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x763450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007631c0((undefined *)((int)this - 0xc) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00763480 */
GEN_NOFRAME uint GEN_THISCALL F_00763480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
    if (*(char *)((int)this + 0x70) != '\0') {
      *(undefined1 *)((int)this + 0x70) = 0;
      uVar3 = 0x354;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
  }
  uVar2 = F_007631c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007634e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7634e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00763510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(this[0x18])) {
  case (undefined1)0x0: ;
  case (undefined1)0x1: ;
  case (undefined1)0x2: ;
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    uVar1 = 0x7c0;
    break;
  case (undefined1)0x5: ;
  case (undefined1)0x6: ;
    uVar1 = 0x1800;
    break;
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xa: ;
    uVar1 = 0xe000;
    break;
  case (undefined1)0xc: ;
  case (undefined1)0xd: ;
  case (undefined1)0xe: ;
    uVar1 = 0xe0000;
    break;
  case (undefined1)0xf: ;
    uVar1 = 0x100000;
  }
  uVar3 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  F_00447980(this_00 GEN_EDX_ARG,uVar1,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar2 = F_007631c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007635a0 */
GEN_FRAME byte GEN_THISCALL F_007635a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7635a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  byte bVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ((uint *)(gen_frame + 0x8))[0x24] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x5d: ;
  case 0x66: ;
  case 0x6d: ;
  case 0x76: ;
  case 0x7e: ;
  case 0x86: ;
  case 0x8e: ;
    break;
  default: ;
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_FWD);
    return 0;
  }
  if (param_2 < 6) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    uVar8 = 1;
    uVar7 = 1;
    ((uint *)(gen_frame + 0x8))[0] = 1;
    ((uint *)(gen_frame + 0x8))[1] = 1;
    ((uint *)(gen_frame + 0x8))[2] = 1;
    ((uint *)(gen_frame + 0x8))[3] = 1;
    ((uint *)(gen_frame + 0x8))[4] = 1;
    ((uint *)(gen_frame + 0x8))[5] = 1;
    ((uint *)(gen_frame + 0x8))[6] = 1;
    ((uint *)(gen_frame + 0x8))[7] = 1;
    ((uint *)(gen_frame + 0x8))[10] = 1;
    ((uint *)(gen_frame + 0x8))[0xd] = 1;
    ((uint *)(gen_frame + 0x8))[0x14] = 1;
    ((uint *)(gen_frame + 0x8))[0x15] = 1;
    ((uint *)(gen_frame + 0x8))[0x1b] = 1;
    ((uint *)(gen_frame + 0x8))[0x20] = 1;
    ((uint *)(gen_frame + 0x8))[0x21] = 1;
    ((uint *)(gen_frame + 0x8))[0x22] = 1;
    uVar6 = 2;
    ((uint *)(gen_frame + 0x8))[8] = 0;
    ((uint *)(gen_frame + 0x8))[9] = 0;
    ((uint *)(gen_frame + 0x8))[0xb] = 0;
    ((uint *)(gen_frame + 0x8))[0xc] = 0;
    ((uint *)(gen_frame + 0x8))[0xe] = 0;
    ((uint *)(gen_frame + 0x8))[0xf] = 0;
    ((uint *)(gen_frame + 0x8))[0x10] = 0;
    ((uint *)(gen_frame + 0x8))[0x11] = 0;
    ((uint *)(gen_frame + 0x8))[0x12] = 0;
    ((uint *)(gen_frame + 0x8))[0x13] = 0;
    ((uint *)(gen_frame + 0x8))[0x16] = 0;
    ((uint *)(gen_frame + 0x8))[0x17] = 0;
    ((uint *)(gen_frame + 0x8))[0x18] = 0;
    ((uint *)(gen_frame + 0x8))[0x19] = 0;
    ((uint *)(gen_frame + 0x8))[0x1a] = 0;
    ((uint *)(gen_frame + 0x8))[0x1c] = 0;
    ((uint *)(gen_frame + 0x8))[0x1d] = 0;
    ((uint *)(gen_frame + 0x8))[0x1e] = 0;
    ((uint *)(gen_frame + 0x8))[0x1f] = 0;
    ((uint *)(gen_frame + 0x8))[0x23] = 0;
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6)];
    iVar4 = param_1 + 1;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 1)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 2;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 2)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 3;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 3)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 4;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 4)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 5;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 5)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 6;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00763810 */
GEN_FRAME byte GEN_THISCALL F_00763810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  ((uint *)(gen_frame + 0xc))[0xaf] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  if ((((*(int *)&gen_a1) != 0xc3) && ((*(int *)&gen_a1) != 0xce)) && ((*(int *)&gen_a1) != 0xe1)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc) ^ (uint)(uint)(gen_frame + 0x2cc) GEN_EDX_FWD);
    return 0;
  }
  if (param_2 < 4) {
    ((uint *)(gen_frame + 0xc))[0x8c] = 0xc5;
    ((uint *)(gen_frame + 0xc))[0x8d] = 0xc6;
    ((uint *)(gen_frame + 0xc))[0x8e] = 199;
    ((uint *)(gen_frame + 0xc))[0x8f] = 0xc9;
    ((uint *)(gen_frame + 0xc))[0x90] = 0xca;
    ((uint *)(gen_frame + 0xc))[0x91] = 0xcc;
    ((uint *)(gen_frame + 0xc))[0x92] = 0xcd;
    ((uint *)(gen_frame + 0xc))[0x93] = 0xd0;
    ((uint *)(gen_frame + 0xc))[0x94] = 0xd1;
    ((uint *)(gen_frame + 0xc))[0x95] = 0xd2;
    ((uint *)(gen_frame + 0xc))[0x96] = 0xd3;
    ((uint *)(gen_frame + 0xc))[0x97] = 0xd4;
    ((uint *)(gen_frame + 0xc))[0x98] = 0xd6;
    ((uint *)(gen_frame + 0xc))[0x99] = 0xd7;
    ((uint *)(gen_frame + 0xc))[0x9a] = 0xd8;
    ((uint *)(gen_frame + 0xc))[0x9b] = 0xd9;
    ((uint *)(gen_frame + 0xc))[0x9c] = 0xda;
    ((uint *)(gen_frame + 0xc))[0x9d] = 0xdc;
    ((uint *)(gen_frame + 0xc))[0x9e] = 0xdd;
    ((uint *)(gen_frame + 0xc))[0x9f] = 0xde;
    ((uint *)(gen_frame + 0xc))[0xa0] = 0xdf;
    ((uint *)(gen_frame + 0xc))[0xa1] = 0xe0;
    ((uint *)(gen_frame + 0xc))[0xa2] = 0xe3;
    ((uint *)(gen_frame + 0xc))[0xa3] = 0xe4;
    ((uint *)(gen_frame + 0xc))[0xa4] = 0xe6;
    ((uint *)(gen_frame + 0xc))[0xa5] = 0xe7;
    ((uint *)(gen_frame + 0xc))[0xa6] = 0xe9;
    ((uint *)(gen_frame + 0xc))[0xa7] = 0xea;
    ((uint *)(gen_frame + 0xc))[0xa8] = 0xec;
    ((uint *)(gen_frame + 0xc))[0xa9] = 0xed;
    ((uint *)(gen_frame + 0xc))[0xaa] = 0xef;
    ((uint *)(gen_frame + 0xc))[0xab] = 0xf0;
    ((uint *)(gen_frame + 0xc))[0xac] = 0xf2;
    ((uint *)(gen_frame + 0xc))[0xad] = 0xf3;
    ((uint *)(gen_frame + 0xc))[0xae] = 0xf5;
    ((uint *)(gen_frame + 0xc))[0] = 0;
    ((uint *)(gen_frame + 0xc))[1] = 0;
    ((uint *)(gen_frame + 0xc))[2] = 0;
    ((uint *)(gen_frame + 0xc))[3] = 0;
    ((uint *)(gen_frame + 0xc))[4] = 0;
    ((uint *)(gen_frame + 0xc))[5] = 0;
    ((uint *)(gen_frame + 0xc))[6] = 0;
    ((uint *)(gen_frame + 0xc))[7] = 0;
    ((uint *)(gen_frame + 0xc))[8] = 0;
    ((uint *)(gen_frame + 0xc))[9] = 0;
    ((uint *)(gen_frame + 0xc))[10] = 0;
    ((uint *)(gen_frame + 0xc))[0xb] = 0;
    ((uint *)(gen_frame + 0xc))[0xc] = 0;
    ((uint *)(gen_frame + 0xc))[0xd] = 0;
    ((uint *)(gen_frame + 0xc))[0xe] = 0;
    ((uint *)(gen_frame + 0xc))[0xf] = 0;
    ((uint *)(gen_frame + 0xc))[0x10] = 0;
    ((uint *)(gen_frame + 0xc))[0x11] = 0;
    ((uint *)(gen_frame + 0xc))[0x12] = 0;
    ((uint *)(gen_frame + 0xc))[0x13] = 0;
    ((uint *)(gen_frame + 0xc))[0x14] = 0;
    ((uint *)(gen_frame + 0xc))[0x15] = 0;
    ((uint *)(gen_frame + 0xc))[0x16] = 0;
    ((uint *)(gen_frame + 0xc))[0x17] = 0;
    ((uint *)(gen_frame + 0xc))[0x18] = 0;
    ((uint *)(gen_frame + 0xc))[0x19] = 0;
    ((uint *)(gen_frame + 0xc))[0x1a] = 0;
    ((uint *)(gen_frame + 0xc))[0x1b] = 0;
    ((uint *)(gen_frame + 0xc))[0x1c] = 0;
    ((uint *)(gen_frame + 0xc))[0x1d] = 0;
    ((uint *)(gen_frame + 0xc))[0x1e] = 0;
    ((uint *)(gen_frame + 0xc))[0x1f] = 0;
    ((uint *)(gen_frame + 0xc))[0x20] = 0;
    ((uint *)(gen_frame + 0xc))[0x21] = 0;
    ((uint *)(gen_frame + 0xc))[0x22] = 0;
    ((uint *)(gen_frame + 0xc))[0x23] = 3;
    ((uint *)(gen_frame + 0xc))[0x24] = 0;
    ((uint *)(gen_frame + 0xc))[0x25] = 2;
    ((uint *)(gen_frame + 0xc))[0x26] = 0;
    ((uint *)(gen_frame + 0xc))[0x27] = 2;
    ((uint *)(gen_frame + 0xc))[0x28] = 0;
    ((uint *)(gen_frame + 0xc))[0x29] = 2;
    ((uint *)(gen_frame + 0xc))[0x2a] = 0;
    ((uint *)(gen_frame + 0xc))[0x2b] = 0;
    ((uint *)(gen_frame + 0xc))[0x2c] = 2;
    ((uint *)(gen_frame + 0xc))[0x2d] = 0;
    ((uint *)(gen_frame + 0xc))[0x2e] = 2;
    ((uint *)(gen_frame + 0xc))[0x2f] = 1;
    ((uint *)(gen_frame + 0xc))[0x30] = 0;
    ((uint *)(gen_frame + 0xc))[0x31] = 2;
    ((uint *)(gen_frame + 0xc))[0x32] = 1;
    ((uint *)(gen_frame + 0xc))[0x33] = 2;
    ((uint *)(gen_frame + 0xc))[0x34] = 0;
    ((uint *)(gen_frame + 0xc))[0x35] = 0;
    ((uint *)(gen_frame + 0xc))[0x36] = 2;
    ((uint *)(gen_frame + 0xc))[0x37] = 2;
    ((uint *)(gen_frame + 0xc))[0x38] = 2;
    ((uint *)(gen_frame + 0xc))[0x39] = 0;
    ((uint *)(gen_frame + 0xc))[0x3a] = 1;
    ((uint *)(gen_frame + 0xc))[0x3b] = 0;
    ((uint *)(gen_frame + 0xc))[0x3c] = 1;
    ((uint *)(gen_frame + 0xc))[0x3d] = 0;
    ((uint *)(gen_frame + 0xc))[0x3e] = 1;
    ((uint *)(gen_frame + 0xc))[0x3f] = 0;
    ((uint *)(gen_frame + 0xc))[0x40] = 1;
    ((uint *)(gen_frame + 0xc))[0x41] = 0;
    ((uint *)(gen_frame + 0xc))[0x42] = 1;
    ((uint *)(gen_frame + 0xc))[0x43] = 0;
    ((uint *)(gen_frame + 0xc))[0x44] = 1;
    ((uint *)(gen_frame + 0xc))[0x45] = 0;
    ((uint *)(gen_frame + 0xc))[0x46] = 3;
    ((uint *)(gen_frame + 0xc))[0x47] = 0;
    ((uint *)(gen_frame + 0xc))[0x48] = 2;
    ((uint *)(gen_frame + 0xc))[0x49] = 1;
    ((uint *)(gen_frame + 0xc))[0x4a] = 2;
    ((uint *)(gen_frame + 0xc))[0x4b] = 1;
    ((uint *)(gen_frame + 0xc))[0x4c] = 2;
    ((uint *)(gen_frame + 0xc))[0x4d] = 1;
    ((uint *)(gen_frame + 0xc))[0x4e] = 0;
    ((uint *)(gen_frame + 0xc))[0x4f] = 2;
    ((uint *)(gen_frame + 0xc))[0x50] = 2;
    ((uint *)(gen_frame + 0xc))[0x51] = 2;
    ((uint *)(gen_frame + 0xc))[0x52] = 2;
    ((uint *)(gen_frame + 0xc))[0x53] = 0;
    ((uint *)(gen_frame + 0xc))[0x54] = 2;
    ((uint *)(gen_frame + 0xc))[0x55] = 2;
    ((uint *)(gen_frame + 0xc))[0x56] = 2;
    ((uint *)(gen_frame + 0xc))[0x57] = 2;
    ((uint *)(gen_frame + 0xc))[0x58] = 0;
    ((uint *)(gen_frame + 0xc))[0x59] = 2;
    ((uint *)(gen_frame + 0xc))[0x5a] = 2;
    ((uint *)(gen_frame + 0xc))[0x5b] = 2;
    ((uint *)(gen_frame + 0xc))[0x5c] = 1;
    ((uint *)(gen_frame + 0xc))[0x5d] = 1;
    ((uint *)(gen_frame + 0xc))[0x5e] = 0;
    ((uint *)(gen_frame + 0xc))[0x5f] = 1;
    ((uint *)(gen_frame + 0xc))[0x60] = 1;
    ((uint *)(gen_frame + 0xc))[0x61] = 1;
    ((uint *)(gen_frame + 0xc))[0x62] = 0;
    ((uint *)(gen_frame + 0xc))[99] = 1;
    ((uint *)(gen_frame + 0xc))[100] = 0;
    ((uint *)(gen_frame + 0xc))[0x65] = 1;
    ((uint *)(gen_frame + 0xc))[0x66] = 0;
    ((uint *)(gen_frame + 0xc))[0x67] = 1;
    ((uint *)(gen_frame + 0xc))[0x68] = 1;
    ((uint *)(gen_frame + 0xc))[0x69] = 3;
    ((uint *)(gen_frame + 0xc))[0x6a] = 0;
    ((uint *)(gen_frame + 0xc))[0x6b] = 3;
    ((uint *)(gen_frame + 0xc))[0x6c] = 3;
    ((uint *)(gen_frame + 0xc))[0x6d] = 3;
    ((uint *)(gen_frame + 0xc))[0x6e] = 3;
    ((uint *)(gen_frame + 0xc))[0x6f] = 3;
    ((uint *)(gen_frame + 0xc))[0x70] = 3;
    ((uint *)(gen_frame + 0xc))[0x71] = 0;
    ((uint *)(gen_frame + 0xc))[0x72] = 3;
    ((uint *)(gen_frame + 0xc))[0x73] = 3;
    ((uint *)(gen_frame + 0xc))[0x74] = 3;
    ((uint *)(gen_frame + 0xc))[0x75] = 3;
    ((uint *)(gen_frame + 0xc))[0x76] = 0;
    ((uint *)(gen_frame + 0xc))[0x77] = 3;
    ((uint *)(gen_frame + 0xc))[0x78] = 3;
    ((uint *)(gen_frame + 0xc))[0x79] = 3;
    ((uint *)(gen_frame + 0xc))[0x7a] = 3;
    ((uint *)(gen_frame + 0xc))[0x7c] = 3;
    ((uint *)(gen_frame + 0xc))[0x7d] = 3;
    ((uint *)(gen_frame + 0xc))[0x7e] = 3;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)(gen_frame + 0xc)) + param_2 * 0x23;
    ((uint *)(gen_frame + 0xc))[0x7b] = 0;
    ((uint *)(gen_frame + 0xc))[0x7f] = 2;
    ((uint *)(gen_frame + 0xc))[0x80] = 2;
    ((uint *)(gen_frame + 0xc))[0x81] = 2;
    ((uint *)(gen_frame + 0xc))[0x82] = 2;
    ((uint *)(gen_frame + 0xc))[0x83] = 2;
    ((uint *)(gen_frame + 0xc))[0x84] = 2;
    ((uint *)(gen_frame + 0xc))[0x85] = 2;
    ((uint *)(gen_frame + 0xc))[0x86] = 2;
    ((uint *)(gen_frame + 0xc))[0x87] = 2;
    ((uint *)(gen_frame + 0xc))[0x88] = 2;
    ((uint *)(gen_frame + 0xc))[0x89] = 2;
    ((uint *)(gen_frame + 0xc))[0x8a] = 2;
    ((uint *)(gen_frame + 0xc))[0x8b] = 2;
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = *(*(uint * PTR32 *)(gen_frame + 0x4));
      uVar6 = 1;
      uVar5 = 1;
      uVar4 = 2;
      uVar2 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)) + 0x8c)];
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      bVar1 = F_00447870(this_00 GEN_EDX_ARG,uVar2,uVar3,uVar4,uVar5,uVar6);
      if (*(char *)((int)this + 0x1c) == '\0') {
        *(bool *)((int)this + 0x1c) = bVar1 == 0;
      }
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < 0x23);
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[0xaf] ^ (uint)(uint)(gen_frame + 0x2cc) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00763d50 */
GEN_FRAME uint GEN_THISCALL F_00763d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x763d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x10))[0x96] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  ((uint *)(gen_frame + 0x10))[0x78] = 0xc5;
  ((uint *)(gen_frame + 0x10))[0x79] = 0xc6;
  ((uint *)(gen_frame + 0x10))[0x7a] = 199;
  ((uint *)(gen_frame + 0x10))[0x7b] = 0xc9;
  ((uint *)(gen_frame + 0x10))[0x7c] = 0xca;
  ((uint *)(gen_frame + 0x10))[0x7d] = 0xcc;
  ((uint *)(gen_frame + 0x10))[0x7e] = 0xcd;
  ((uint *)(gen_frame + 0x10))[0x7f] = 0xd0;
  ((uint *)(gen_frame + 0x10))[0x80] = 0xd1;
  ((uint *)(gen_frame + 0x10))[0x81] = 0xd2;
  ((uint *)(gen_frame + 0x10))[0x82] = 0xd3;
  ((uint *)(gen_frame + 0x10))[0x83] = 0xd4;
  ((uint *)(gen_frame + 0x10))[0x84] = 0xdc;
  ((uint *)(gen_frame + 0x10))[0x85] = 0xdd;
  ((uint *)(gen_frame + 0x10))[0x86] = 0xde;
  ((uint *)(gen_frame + 0x10))[0x87] = 0xdf;
  ((uint *)(gen_frame + 0x10))[0x88] = 0xe0;
  ((uint *)(gen_frame + 0x10))[0x89] = 0xe3;
  ((uint *)(gen_frame + 0x10))[0x8a] = 0xe4;
  ((uint *)(gen_frame + 0x10))[0x8b] = 0xe6;
  ((uint *)(gen_frame + 0x10))[0x8c] = 0xe7;
  ((uint *)(gen_frame + 0x10))[0x8d] = 0xe9;
  ((uint *)(gen_frame + 0x10))[0x8e] = 0xea;
  ((uint *)(gen_frame + 0x10))[0x8f] = 0xec;
  ((uint *)(gen_frame + 0x10))[0x90] = 0xed;
  ((uint *)(gen_frame + 0x10))[0x91] = 0xef;
  ((uint *)(gen_frame + 0x10))[0x92] = 0xf0;
  ((uint *)(gen_frame + 0x10))[0x93] = 0xf2;
  ((uint *)(gen_frame + 0x10))[0x94] = 0xf3;
  ((uint *)(gen_frame + 0x10))[0x95] = 0xf5;
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[1] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[3] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  ((uint *)(gen_frame + 0x10))[5] = 0;
  ((uint *)(gen_frame + 0x10))[6] = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  ((uint *)(gen_frame + 0x10))[8] = 0;
  ((uint *)(gen_frame + 0x10))[9] = 0;
  ((uint *)(gen_frame + 0x10))[10] = 0;
  ((uint *)(gen_frame + 0x10))[0xb] = 0;
  ((uint *)(gen_frame + 0x10))[0xc] = 0;
  ((uint *)(gen_frame + 0x10))[0xd] = 0;
  ((uint *)(gen_frame + 0x10))[0xe] = 0;
  ((uint *)(gen_frame + 0x10))[0xf] = 0;
  ((uint *)(gen_frame + 0x10))[0x10] = 0;
  ((uint *)(gen_frame + 0x10))[0x11] = 0;
  ((uint *)(gen_frame + 0x10))[0x12] = 0;
  ((uint *)(gen_frame + 0x10))[0x13] = 0;
  ((uint *)(gen_frame + 0x10))[0x14] = 0;
  ((uint *)(gen_frame + 0x10))[0x15] = 0;
  ((uint *)(gen_frame + 0x10))[0x16] = 0;
  ((uint *)(gen_frame + 0x10))[0x17] = 0;
  ((uint *)(gen_frame + 0x10))[0x18] = 0;
  ((uint *)(gen_frame + 0x10))[0x19] = 0;
  ((uint *)(gen_frame + 0x10))[0x1a] = 0;
  ((uint *)(gen_frame + 0x10))[0x1b] = 0;
  ((uint *)(gen_frame + 0x10))[0x1c] = 0;
  ((uint *)(gen_frame + 0x10))[0x1d] = 0;
  ((uint *)(gen_frame + 0x10))[0x1e] = 3;
  ((uint *)(gen_frame + 0x10))[0x1f] = 0;
  ((uint *)(gen_frame + 0x10))[0x20] = 2;
  ((uint *)(gen_frame + 0x10))[0x21] = 0;
  ((uint *)(gen_frame + 0x10))[0x22] = 2;
  ((uint *)(gen_frame + 0x10))[0x23] = 0;
  ((uint *)(gen_frame + 0x10))[0x24] = 2;
  ((uint *)(gen_frame + 0x10))[0x25] = 0;
  ((uint *)(gen_frame + 0x10))[0x26] = 0;
  ((uint *)(gen_frame + 0x10))[0x27] = 2;
  ((uint *)(gen_frame + 0x10))[0x28] = 0;
  ((uint *)(gen_frame + 0x10))[0x29] = 2;
  ((uint *)(gen_frame + 0x10))[0x2a] = 0;
  ((uint *)(gen_frame + 0x10))[0x2b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5a] = 3;
  ((uint *)(gen_frame + 0x10))[0x5c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5d] = 3;
  ((uint *)(gen_frame + 0x10))[0x5e] = 3;
  ((uint *)(gen_frame + 0x10))[0x5f] = 3;
  ((uint *)(gen_frame + 0x10))[0x60] = 3;
  ((uint *)(gen_frame + 0x10))[0x61] = 3;
  ((uint *)(gen_frame + 0x10))[99] = 3;
  ((uint *)(gen_frame + 0x10))[100] = 3;
  ((uint *)(gen_frame + 0x10))[0x65] = 3;
  ((uint *)(gen_frame + 0x10))[0x66] = 3;
  ((uint *)(gen_frame + 0x10))[0x68] = 3;
  ((uint *)(gen_frame + 0x10))[0x69] = 3;
  ((uint *)(gen_frame + 0x10))[0x6a] = 3;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)(gen_frame + 0x10));
  ((uint *)(gen_frame + 0x10))[0x2c] = 2;
  ((uint *)(gen_frame + 0x10))[0x2d] = 2;
  ((uint *)(gen_frame + 0x10))[0x2e] = 2;
  ((uint *)(gen_frame + 0x10))[0x2f] = 0;
  ((uint *)(gen_frame + 0x10))[0x30] = 1;
  ((uint *)(gen_frame + 0x10))[0x31] = 0;
  ((uint *)(gen_frame + 0x10))[0x32] = 1;
  ((uint *)(gen_frame + 0x10))[0x33] = 0;
  ((uint *)(gen_frame + 0x10))[0x34] = 1;
  ((uint *)(gen_frame + 0x10))[0x35] = 0;
  ((uint *)(gen_frame + 0x10))[0x36] = 1;
  ((uint *)(gen_frame + 0x10))[0x37] = 0;
  ((uint *)(gen_frame + 0x10))[0x38] = 1;
  ((uint *)(gen_frame + 0x10))[0x39] = 0;
  ((uint *)(gen_frame + 0x10))[0x3a] = 1;
  ((uint *)(gen_frame + 0x10))[0x3b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3d] = 0;
  ((uint *)(gen_frame + 0x10))[0x3e] = 2;
  ((uint *)(gen_frame + 0x10))[0x3f] = 1;
  ((uint *)(gen_frame + 0x10))[0x40] = 2;
  ((uint *)(gen_frame + 0x10))[0x41] = 1;
  ((uint *)(gen_frame + 0x10))[0x42] = 2;
  ((uint *)(gen_frame + 0x10))[0x43] = 1;
  ((uint *)(gen_frame + 0x10))[0x44] = 0;
  ((uint *)(gen_frame + 0x10))[0x45] = 2;
  ((uint *)(gen_frame + 0x10))[0x46] = 2;
  ((uint *)(gen_frame + 0x10))[0x47] = 2;
  ((uint *)(gen_frame + 0x10))[0x48] = 2;
  ((uint *)(gen_frame + 0x10))[0x49] = 0;
  ((uint *)(gen_frame + 0x10))[0x4a] = 2;
  ((uint *)(gen_frame + 0x10))[0x4b] = 2;
  ((uint *)(gen_frame + 0x10))[0x4c] = 2;
  ((uint *)(gen_frame + 0x10))[0x4d] = 1;
  ((uint *)(gen_frame + 0x10))[0x4e] = 1;
  ((uint *)(gen_frame + 0x10))[0x4f] = 0;
  ((uint *)(gen_frame + 0x10))[0x50] = 1;
  ((uint *)(gen_frame + 0x10))[0x51] = 1;
  ((uint *)(gen_frame + 0x10))[0x52] = 1;
  ((uint *)(gen_frame + 0x10))[0x53] = 0;
  ((uint *)(gen_frame + 0x10))[0x54] = 1;
  ((uint *)(gen_frame + 0x10))[0x55] = 0;
  ((uint *)(gen_frame + 0x10))[0x56] = 1;
  ((uint *)(gen_frame + 0x10))[0x57] = 0;
  ((uint *)(gen_frame + 0x10))[0x58] = 1;
  ((uint *)(gen_frame + 0x10))[0x59] = 1;
  ((uint *)(gen_frame + 0x10))[0x5b] = 0;
  ((uint *)(gen_frame + 0x10))[0x62] = 0;
  ((uint *)(gen_frame + 0x10))[0x67] = 0;
  ((uint *)(gen_frame + 0x10))[0x6b] = 2;
  ((uint *)(gen_frame + 0x10))[0x6c] = 2;
  ((uint *)(gen_frame + 0x10))[0x6d] = 2;
  ((uint *)(gen_frame + 0x10))[0x6e] = 2;
  ((uint *)(gen_frame + 0x10))[0x6f] = 2;
  ((uint *)(gen_frame + 0x10))[0x70] = 2;
  ((uint *)(gen_frame + 0x10))[0x71] = 2;
  ((uint *)(gen_frame + 0x10))[0x72] = 2;
  ((uint *)(gen_frame + 0x10))[0x73] = 2;
  ((uint *)(gen_frame + 0x10))[0x74] = 2;
  ((uint *)(gen_frame + 0x10))[0x75] = 2;
  ((uint *)(gen_frame + 0x10))[0x76] = 2;
  ((uint *)(gen_frame + 0x10))[0x77] = 2;
  (*(uint *)(gen_frame + 0xc)) = 0;
  do {
    iVar2 = 0;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x8));
    do {
      uVar1 = ((uint *)(gen_frame + 0x10))[(int)(iVar2 + 0x78)];
      uVar3 = 2;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
      uVar1 = F_0043c920(this_00 GEN_EDX_ARG,uVar1,uVar3);
      if (uVar1 != *(*(uint * PTR32 *)(gen_frame + 0x4))) break;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    uVar1 = (*(uint *)(gen_frame + 0xc));
    if (iVar2 == 0x1e) goto LAB_00764197;
    (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)(gen_frame + 0x8)) + 0x1e;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0xc)) < 4);
  uVar1 = 4;
LAB_00764197: ;
  F_00c47745(((uint *)(gen_frame + 0x10))[0x96] ^ (uint)(uint)(gen_frame + 0x26c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007641b0 */
GEN_FRAME uint F_007641b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7641b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        if ((((*(int *)&gen_a3) != 0) && ((*(int *)&gen_a4) == 0)) && ((*(int *)&gen_a5) == 0)) {
          return 4;
        }
      }
      else if ((*(int *)&gen_a3) != 0) {
        if ((*(int *)&gen_a4) == 0) {
          if ((*(int *)&gen_a5) == 0) {
            return 3;
          }
        }
        else if ((*(int *)&gen_a5) == 0) {
          return 5;
        }
      }
    }
    else if (((param_3 == 0) && ((*(int *)&gen_a3) == 0)) && (((*(int *)&gen_a4) == 0 && ((*(int *)&gen_a5) == 0)))) {
      return 2;
    }
  }
  else if (param_2 != 0) {
    if (param_3 != 0) {
      if ((((*(int *)&gen_a3) != 0) && ((*(int *)&gen_a4) != 0)) && ((*(int *)&gen_a5) != 0)) {
        return 0;
      }
      if (param_3 != 0) {
        return 6;
      }
    }
    if ((((*(int *)&gen_a3) == 0) && ((*(int *)&gen_a4) != 0)) && ((*(int *)&gen_a5) == 0)) {
      return 1;
    }
  }
  return 6;
}

/* ref: FUN_00764270 */
GEN_FRAME uint GEN_STDCALL F_00764270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x764270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_007641b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_007642a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007642a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7642a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x58),0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return;
}

/* ref: FUN_007642d0 */
GEN_FRAME uint GEN_STDCALL F_007642d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7642d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764300 */
GEN_FRAME uint GEN_STDCALL F_00764300(unsigned int gen_a0)
{
  GEN_ENTER(0x764300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764330 */
GEN_FRAME uint GEN_THISCALL F_00764330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x764330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x44;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x45;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x46;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x47;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x48;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x49;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x4f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x50;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x51;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x52;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x53;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x54;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x55;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x56;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x57;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x100) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x104) = uVar2;
  return uVar3;
}

/* ref: FUN_007646d0 */
GEN_FRAME uint GEN_THISCALL F_007646d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7646d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x58;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x59;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 100;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar3 = F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  return uVar3;
}

/* ref: FUN_007649c0 */
GEN_FRAME uint GEN_THISCALL F_007649c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7649c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x65;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x74;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x75;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x128) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar9 = 2;
  uVar8 = 0x85;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x168) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x16c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1ac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  uVar9 = 2;
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x100) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x108) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x110) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x118) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x120) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x138) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x13c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x140) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x144) = uVar2;
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x148) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x14c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x150) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x154) = uVar2;
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x158) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x15c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x160) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x164) = uVar2;
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x178) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x17c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x180) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x184) = uVar2;
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x188) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x18c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 400) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x194) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x198) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x19c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1a4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1bc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1c4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1cc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1d4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1dc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1e0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x1e4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x130) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x134) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x170) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x174) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar7 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b0) GEN_EDX_ARG,3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x1b4) = uVar2;
  return uVar2;
}

/* ref: FUN_00765650 */
GEN_FRAME uint GEN_THISCALL F_00765650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x765650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x95;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x96;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x97;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x98;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x99;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar4 = 0xa0;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa1;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa2;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa3;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  return uVar3;
}

/* ref: FUN_00765940 */
GEN_FRAME uint GEN_THISCALL F_00765940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x765940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa4;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa5;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  return uVar3;
}

/* ref: FUN_007659b0 */
GEN_FRAME uint GEN_THISCALL F_007659b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7659b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa6;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa7;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa8;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa9;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaa;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xab;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0xac;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xad;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xae;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaf;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb0;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0xb1;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb2;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb3;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb4;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb5;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb6;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb7;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb8;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb9;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar5 = 2;
  uVar4 = 0xba;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbb;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbc;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x118) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbd;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x120) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbe;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x128) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbf;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x130) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x134) = uVar2;
  return uVar3;
}

/* ref: FUN_00765eb0 */
GEN_FRAME uint GEN_THISCALL F_00765eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x765eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xc0;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc1;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc2;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  return uVar3;
}

/* ref: FUN_00765f50 */
GEN_FRAME uint GEN_THISCALL F_00765f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x765f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this GEN_EDX_FWD);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc4;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc5;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc6;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 199;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 200;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc9;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xca;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcb;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcc;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcd;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  return uVar3;
}

/* ref: FUN_00766160 */
GEN_FRAME uint GEN_THISCALL F_00766160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x766160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this GEN_EDX_FWD);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcf;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd1;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd2;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd3;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd4;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd5;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd6;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd7;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd8;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd9;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xda;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdb;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdc;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdd;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xde;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdf;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar1;
  return uVar3;
}

/* ref: FUN_00766500 */
GEN_FRAME uint GEN_THISCALL F_00766500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x766500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this GEN_EDX_FWD);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe2;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe3;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe4;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe5;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe6;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe7;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe8;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe9;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xea;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xeb;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xec;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xed;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xee;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xef;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf1;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf2;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf3;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf4;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x104) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf5;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x10c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf6;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x114) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf7;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043c920(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x118) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x11c) = uVar1;
  return uVar3;
}

/* ref: FUN_00766960 */
GEN_FRAME uint GEN_THISCALL F_00766960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x766960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  uVar3 = 0x107;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_0043c920(this_00 GEN_EDX_ARG,uVar3,uVar4);
  uVar2 = F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  return uVar2;
}

/* ref: FUN_007669a0 */
GEN_FRAME uint GEN_THISCALL F_007669a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7669a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x108;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x109;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x110;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x111;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x112;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  return uVar3;
}

/* ref: FUN_00766bc0 */
GEN_FRAME uint GEN_THISCALL F_00766bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x766bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x113;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x114;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x115;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x116;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x117;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x118;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x119;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x11e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x120;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x121;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x122;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x123;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x124;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  return uVar3;
}

/* ref: FUN_00766f40 */
GEN_FRAME uint GEN_THISCALL F_00766f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x766f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x125;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x126;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x127;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x128;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x129;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 299;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 300;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x130;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x131;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x132;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x133;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x134;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x135;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x136;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x137;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x138;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar5 = 2;
  uVar4 = 0x139;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x118) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  return uVar3;
}

/* ref: FUN_007673b0 */
GEN_FRAME uint GEN_THISCALL F_007673b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7673b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 2;
  uVar6 = 0x13d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  uVar7 = 2;
  uVar6 = 0x13c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x6c) = uVar3;
  F_005a2710((undefined *)(param_1 + 0x70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar7 = 2;
  uVar6 = 0x13e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x13f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar7 = 2;
  uVar6 = 0x140;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x141;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar7 = 2;
  uVar6 = 0x142;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x143;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0xa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar7 = 2;
  uVar6 = 0x144;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0xa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  iVar5 = 0;
  pvVar1 = (undefined *)(param_1 + 0xb0);
  do {
    uVar3 = F_0043b840(uVar2 GEN_EDX_ARG,iVar5);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    if (uVar3 == 0) {
      uVar4 = F_005a2710(pvVar1 GEN_EDX_ARG,6);
      *(undefined * PTR32 *)((int)pvVar1 + 4) = &REFG(undefined, 0x10bdaf7);
    }
    else {
      uVar3 = F_0043b840(uVar2 GEN_EDX_ARG,iVar5);
      uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
      uVar4 = F_005a2710(pvVar1 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar1 + 4) = uVar3;
    }
    iVar5 = iVar5 + 1;
    pvVar1 = (undefined *)((int)pvVar1 + 8);
  } while (iVar5 < 4);
  return uVar4;
}

/* ref: FUN_007675e0 */
GEN_FRAME uint GEN_THISCALL F_007675e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7675e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cb;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 1: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cc;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 2: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cd;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 3: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4ce;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 4: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cf;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 5: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4d0;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  default: ;
    return 0;
  }
}

/* ref: FUN_007676d0 */
GEN_FRAME byte GEN_THISCALL F_007676d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7676d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x68) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    uVar2 = 0x354;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    F_0046a630(this_00 GEN_EDX_ARG,uVar2);
  }
  return 1;
}

/* ref: FUN_00767730 */
GEN_FRAME uint GEN_THISCALL F_00767730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x767730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 100) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    cVar1 = *(char *)((int)this + 0x70);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x390)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x394)) = (uint)(cVar1 != '\0');
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 100),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007677e0 */
GEN_FRAME byte GEN_THISCALL F_007677e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7677e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x110) * 4 + 0x114)))) {
    iVar1 = *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x110) * 0x20 + param_1) * 0x14 + 0x13c)));
    if (*(char *)(iVar1 + 0x78 + (int)this) != (char)param_2) {
      *(char *)(iVar1 + 0x78 + (int)this) = (char)param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00767820 */
GEN_FRAME uint GEN_THISCALL F_00767820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x767820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  code * pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar7 = 0;
  uVar6 = 0;
  if (param_2 == 1) {
    uVar5 = 0x1e85;
  }
  else {
    if (param_2 != 2) {
      pcVar4 = *(gen_code32 *)(*piVar1 + 0x18);
      if (param_2 == 3) {
        uVar5 = 0x1e87;
      }
      else {
        uVar5 = 0x1e84;
      }
      goto override_prt_76785f_776d44d0;
    }
    uVar5 = 0x1e86;
  }
  pcVar4 = *(gen_code32 *)(*piVar1 + 0x18);
override_prt_76785f_776d44d0: ;
  this_00 = ((undefined *)GEN_TOP((*pcVar4)(piVar1)));
  uVar2 = F_0043bd00(this_00 GEN_EDX_FWD,uVar5,uVar6,uVar7);
  uVar3 = F_005a2710(param_1 GEN_EDX_ARG,6);
  *(uint *)((int)param_1 + 4) = uVar2;
  return uVar3;
}

/* ref: FUN_00767880 */
GEN_FRAME uint GEN_THISCALL F_00767880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x767880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  bVar2 = F_005594a0(uVar3 GEN_EDX_ARG,uVar4);
  uVar3 = CONCAT31(extraout_var,bVar2);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x3f) = 0;
  if (*(char *)((int)this + 0x3d) == '\0') {
    uVar3 = F_007631c0(this GEN_EDX_ARG);
  }
  else {
    piVar1 = *(int * PTR32 *)((int)this + 0x24);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x3d) = 0;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,0,0);
      uVar3 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x24) = 0;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007678f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7678f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00767920 */
GEN_FRAME uint F_00767920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x767920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint in_EAX = 0;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = 0x2db;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[1] + 0x28))((int *)param_1[1] GEN_EDX_ARG)));
    F_0046a630(this GEN_EDX_ARG,uVar2);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_ARG,1);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))
                      (param_1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00767960 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00767960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x767960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x30) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf19 */
GEN_NOFRAME byte GEN_THISCALL F_00767970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x767970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  if (this[0x2c] == (undefined1)0x0) {
    uVar3 = 0x3f;
  }
  else {
    uVar3 = 0x1fffc0;
  }
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  F_00447980(pvVar2 GEN_EDX_ARG,uVar3,uVar4);
  this[0x1d] = (undefined1)0x1;
  F_007631c0(this GEN_EDX_ARG);
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,1,2);
  if ((((bVar1 == 0) && (bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,2,2), bVar1 == 0)) &&
      (bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,3,2), bVar1 == 0)) &&
     (((bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,4,2), bVar1 == 0 &&
       (bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,5,2), bVar1 == 0)) &&
      (bVar1 = F_0043c9e0(pvVar2 GEN_EDX_ARG,6,2), bVar1 == 0)))) {
    return 0;
  }
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  this[0x3c] = (undefined1)0x1;
  *(undefined2 *)(this + 0x2d) = 0xf01;
  this[0x2f] = (undefined1)0x0;
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00767a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x767a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(this[0x18])) {
  case (undefined1)0x0: ;
    uVar2 = 1;
    break;
  case (undefined1)0x1: ;
    uVar2 = 2;
    break;
  case (undefined1)0x2: ;
    uVar2 = 4;
    break;
  case (undefined1)0x3: ;
    uVar2 = 8;
    break;
  case (undefined1)0x4: ;
    uVar2 = 0x10;
    break;
  case (undefined1)0x5: ;
    uVar2 = 0x20;
  }
  uVar5 = 2;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  F_00447980(pvVar3 GEN_EDX_ARG,uVar2,uVar5);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,1,2);
  if ((((bVar1 != 0) || (bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,2,2), bVar1 != 0)) ||
      (bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,3,2), bVar1 != 0)) ||
     (((bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,4,2), bVar1 != 0 ||
       (bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,5,2), bVar1 != 0)) ||
      (bVar1 = F_0043c9e0(pvVar3 GEN_EDX_ARG,6,2), bVar1 != 0)))) {
    *(undefined4 *)(this + 0x48) = 0xffffffff;
    this[0x3c] = (undefined1)0x1;
    *(undefined2 *)(this + 0x2d) = 0xf01;
    this[0x2f] = (undefined1)0x0;
  }
  this[0x1d] = (undefined1)0x1;
  uVar4 = F_007631c0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00767b20 */
GEN_FRAME uint GEN_THISCALL F_00767b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x767b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 10;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa50) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa58) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xd;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa60) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa64) = uVar2;
  uVar5 = 2;
  uVar4 = 0xe;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xf;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa88) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x14;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa98) GEN_EDX_ARG,3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xa9c) = uVar2;
  uVar4 = 0x15;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xaa0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xaa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x16;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xaa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xaac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x17;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xab0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xab4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x18;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xab8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xabc) = uVar2;
  return uVar3;
}

/* ref: FUN_00767df0 */
GEN_FRAME uint GEN_THISCALL F_00767df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x767df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 2;
  uVar5 = 0x37;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa48) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x19;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa50) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa58) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa60) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa64) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa68) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa6c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa70) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa74) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa78) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa7c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa80) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa84) = uVar2;
  uVar6 = 2;
  uVar5 = 0x21;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa90) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa94) = uVar2;
  uVar6 = 2;
  uVar5 = 0x23;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa98) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa9c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x24;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaa0) GEN_EDX_ARG,3);
  uVar6 = 2;
  *(uint *)(param_1 + 0xaa4) = uVar2;
  uVar5 = 0x25;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaa8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xaac) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2e;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xab0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xab4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2f;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xab8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xabc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x30;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xac0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xac4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x31;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xac8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xacc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x26;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xad0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xad4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x27;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xad8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xadc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x32;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xae0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xae4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x33;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xae8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xaec) = uVar2;
  uVar6 = 2;
  uVar5 = 0x34;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaf0) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xaf4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x35;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaf8) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xafc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x29;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb00) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb04) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb08) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb0c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2b;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb18) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb1c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2c;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb20) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb24) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2d;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb28) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb2c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x20;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  iVar4 = uVar2 - 1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  F_005a2710((undefined *)(param_1 + 0xb30) GEN_EDX_ARG,3);
  *(int *)(param_1 + 0xb34) = iVar4;
  uVar6 = 2;
  uVar5 = 0x36;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar5,uVar6);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb38) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xb3c) = uVar2;
  return uVar3;
}

/* ref: FUN_00768340 */
GEN_FRAME uint GEN_THISCALL F_00768340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x768340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x38;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x39;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa50) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar5 = 2;
  uVar4 = 0x3a;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xa58) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  return uVar3;
}

/* ref: FUN_007683e0 */
GEN_FRAME uint GEN_THISCALL F_007683e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7683e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x41;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa4c) = uVar2 + 1;
  uVar5 = 2;
  uVar4 = 0x42;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043c920(pvVar1 GEN_EDX_ARG,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xa50) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  return uVar3;
}

/* ref: FUN_00768450 */
GEN_FRAME unsigned int F_00768450(unsigned int gen_a0)
{
  GEN_ENTER(0x768450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    REFG(undefined1, 0x148a112) = 1;
  }
  return;
}

/* ref: FUN_00768470 */
GEN_FRAME byte GEN_THISCALL F_00768470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x768470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x782c);
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x18);
  return 0;
}

/* ref: FUN_007684a0 */
GEN_FRAME uint GEN_STDCALL F_007684a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7684a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + (*(int *)&gen_args[3]) * 4)));
  if ((*(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[2])) == 0) {
    if (*piVar1 != 0) {
      *piVar1 = 0;
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x1d) = 1;
    }
  }
  else if (*piVar1 != 1) {
    *piVar1 = 1;
    *(undefined1 *)((*(int *)&gen_args[1]) + 0x1d) = 1;
    return (uint)piVar1;
  }
  return (uint)piVar1;
}

/* ref: FUN_007684e0 */
GEN_FRAME uint GEN_STDCALL F_007684e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7684e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)(param_1 + param_3 * 4);
  if (((param_4 < 1) || (iVar1 < 0x51)) && ((-1 < param_4 || (-0x51 < iVar1)))) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4)));
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4))) != 0) {
      *puVar2 = 0;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4)));
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4))) != 1) {
      *puVar2 = 1;
      *(undefined1 *)(param_2 + 0x1d) = 1;
      return (uint)puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00768550 */
GEN_FRAME byte GEN_THISCALL F_00768550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar5 = *(undefined4 *)((int)this + param_2 * 8 + 0x6668);
  uVar7 = *(undefined4 *)((int)this + param_2 * 8 + 0x666c);
  uVar6 = *(undefined4 *)((int)this + param_2 * 4 + 0x6fc8);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar10 = 1;
  uVar9 = 1;
  uVar8 = 2;
  if (param_1 == 1) {
    uVar4 = 4;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_FWD)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,uVar4,uVar5,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar10 = 1;
    uVar9 = 1;
    uVar8 = 2;
    uVar5 = 5;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = 6;
    uVar7 = uVar6;
  }
  else {
    uVar6 = 2;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG)));
    bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,uVar6,uVar5,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = 3;
  }
  uVar9 = 1;
  uVar8 = 1;
  uVar6 = 2;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  bVar2 = F_00447870(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar6,uVar8,uVar9);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar2 == 0;
  }
  if (*(int *)((int)this + 0x48) != param_2) {
    *(int *)((int)this + 0x48) = param_2;
    *(undefined1 *)((int)this + 0x1d) = 1;
    *(undefined2 *)((int)this + 0x2d) = 0xf01;
    *(bool *)((int)this + 0x2f) = param_1 == 1;
    *(undefined1 *)((int)this + 0x3c) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00768650 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00768650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x768650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x40) + 8))))(*(int * PTR32 *)(uVar1 + 0x40) GEN_EDX_ARG));
}

/* ref: FUN_00768670 */
GEN_FRAME byte GEN_THISCALL F_00768670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x193c) = 0;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentConfigLog::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007686c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7686c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1940) = 0;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigLog::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00768730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x768730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x58))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if (3 < *(uint *)(uVar1 + 0x29c)) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x58))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = F_00454290(this_00 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00768760 */
GEN_FRAME uint GEN_THISCALL F_00768760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x768760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  uint in_ecx;
  uint uVar2;
  int * piVar3;
  char * in_ecx_00;
  undefined4 * puVar4;
  int iVar5;
  undefined1 * this_00;
  int iVar6;
  char * PTR32 * this_01;
  
  pcVar1 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc));
  (*(char * PTR32 *)(gen_frame + 0xd8)) = pcVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar4 = ((undefined4 *)(gen_frame + 0x8));
    iVar5 = 0x19;
    iVar6 = 0;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 1;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0xb8));
    do {
      uVar2 = F_0043b840(in_ecx GEN_EDX_ARG,iVar6);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      F_005a2710(this_00 GEN_EDX_ARG,6);
      *(uint *)(this_00 + 4) = uVar2;
      iVar6 = iVar6 + 1;
      this_00 = this_00 + 8;
    } while (iVar6 < 4);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x1a,((undefined4 *)(gen_frame + 0x8)));
    this_01 = &(*(char * PTR32 *)(gen_frame + 0xd8));
    iVar5 = 0x19;
    do {
      this_01 = this_01 - 2;
      pcVar1 = (char *)F_005a2670(this_01 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    in_ecx_00 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    iVar5 = 0;
    pcVar1 = in_ecx_00;
    do {
      if (iVar5 == *(int *)((int)this + 0x1944)) {
        puVar4 = (undefined4 *)F_0043b840(in_ecx_00 GEN_EDX_ARG,iVar5);
        pcVar1 = (char *)*puVar4;
        if (*pcVar1 == '\0') {
          if (*(int *)((int)this + 0x10) != 0) {
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))
                                      (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
            *(undefined4 *)((int)this + 0x10) = 0;
          }
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
          pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),0)));
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return (uint)pcVar1;
}

/* ref: FUN_007688c0 */
GEN_FRAME uint GEN_THISCALL F_007688c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7688c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    cVar1 = *(char *)((int)this + 0x193c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x390)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x394)) = (uint)(cVar1 != '\0');
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00768980 */
GEN_FRAME uint GEN_THISCALL F_00768980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x768980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    uVar1 = *(undefined4 *)((int)this + 0x1944);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    uVar2 = F_0043b840(uVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1944));
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00768a70 */
GEN_FRAME uint F_00768a70(unsigned int gen_a0)
{
  GEN_ENTER(0x768a70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0x65) {
    return *(uint *)(&REFG(undefined, 0x148a2b0) + param_1 * 4);
  }
  return 0xffffffff;
}

/* ref: FUN_00768a90 */
GEN_FRAME uint GEN_THISCALL F_00768a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x768a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cb;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 1: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cc;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 2: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cd;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 3: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4ce;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 4: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cf;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  case 5: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4d0;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
    return uVar2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00768b80 */
GEN_FRAME byte GEN_THISCALL F_00768b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x1940) * 4 + 0x14)))) {
    iVar1 = *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x1940) * 0x20 + 3 + param_1) * 0x14)));
    if (*(char *)(iVar1 + 0x1948 + (int)this) != (char)param_2) {
      *(char *)(iVar1 + 0x1948 + (int)this) = (char)param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf1 */
GEN_FRAME uint GEN_THISCALL F_00768bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x768bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((-1 < (*(int *)&gen_a4)) && ((*(int *)&gen_a4) < 4)) {
    uVar1 = ((code *)*(gen_code32 *)(this + (*(int *)&gen_a4) * 4 + 0x238))(param_2,param_3);
    *param_1 = 2;
    *(char *)(param_1 + 1) = (char)uVar1;
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00768c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x768c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00768c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x768c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x14] != (undefined1)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00768c80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00768c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x768c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350((undefined4 *)((int)this + 0x18),0,0x220);
  *(undefined4 *)((int)this + 0x18) = 10;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0x773;
  *(undefined4 *)((int)this + 0x28) = 0x1e;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0x78b;
  *(undefined4 *)((int)this + 0x38) = 0xb;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0x774;
  *(undefined4 *)((int)this + 0x48) = 0xc;
  *(undefined4 *)((int)this + 0x4c) = 0xd;
  *(undefined4 *)((int)this + 0x54) = 0x775;
  *(undefined4 *)((int)this + 0x58) = 0xe;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0x776;
  *(undefined4 *)((int)this + 0x68) = 0x1d;
  *(undefined4 *)((int)this + 0x6c) = 0x1c;
  *(undefined4 *)((int)this + 0x74) = 0x777;
  *(undefined4 *)((int)this + 0x1b8) = 0x38;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c4) = 0x778;
  *(undefined4 *)((int)this + 0x78) = 0x18;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0x78d;
  *(undefined4 *)((int)this + 0x88) = 0x10;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0x1194;
  *(undefined4 *)((int)this + 0x98) = 0x11;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0x1195;
  *(undefined4 *)((int)this + 0xa8) = 0x12;
  *(undefined4 *)((int)this + 0xac) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb4) = 0x1196;
  *(undefined4 *)((int)this + 0xb8) = 0x13;
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0x1197;
  *(undefined4 *)((int)this + 200) = 0x14;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0x1198;
  *(undefined4 *)((int)this + 0xd8) = 0x15;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = 0x1199;
  *(undefined4 *)((int)this + 0xe8) = 0x16;
  *(undefined4 *)((int)this + 0xec) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf4) = 0x119a;
  *(undefined4 *)((int)this + 0xf8) = 0x17;
  *(undefined4 *)((int)this + 0xfc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x104) = 0x119b;
  *(undefined4 *)((int)this + 0x108) = 0x29;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x114) = 0x783;
  *(undefined4 *)((int)this + 0x118) = 0x2a;
  *(undefined4 *)((int)this + 0x11c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x124) = 0x784;
  *(undefined4 *)((int)this + 0x128) = 0x2b;
  *(undefined4 *)((int)this + 300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0x785;
  *(undefined4 *)((int)this + 0x138) = 0x2c;
  *(undefined4 *)((int)this + 0x13c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x144) = 0x786;
  *(undefined4 *)((int)this + 0x148) = 0x2d;
  *(undefined4 *)((int)this + 0x14c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0x787;
  *(undefined4 *)((int)this + 0x158) = 0x2e;
  *(undefined4 *)((int)this + 0x15c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0x788;
  *(undefined4 *)((int)this + 0x168) = 0x2f;
  *(undefined4 *)((int)this + 0x16c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x174) = 0x789;
  *(undefined4 *)((int)this + 0x178) = 0x39;
  *(undefined4 *)((int)this + 0x17c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x184) = 0x779;
  *(undefined4 *)((int)this + 0x188) = 0x3a;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x194) = 0x77a;
  *(undefined4 *)((int)this + 0x198) = 0x3b;
  *(undefined4 *)((int)this + 0x19c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a4) = 0x77b;
  *(undefined4 *)((int)this + 0x1a8) = 0x3c;
  *(undefined4 *)((int)this + 0x1ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b4) = 0x77c;
  *(undefined4 *)((int)this + 0x1c8) = 0x45;
  *(undefined4 *)((int)this + 0x1cc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0x78e;
  *(undefined4 *)((int)this + 0x1d8) = 0x3d;
  *(undefined4 *)((int)this + 0x1dc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1e4) = 0x77d;
  *(undefined4 *)((int)this + 0x1e8) = 0x3e;
  *(undefined4 *)((int)this + 0x1ec) = 0xffffffff;
  *(undefined4 *)((int)this + 500) = 0x77e;
  *(undefined4 *)((int)this + 0x1f8) = 0x40;
  *(undefined4 *)((int)this + 0x1fc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x204) = 0x77f;
  *(undefined4 *)((int)this + 0x208) = 0x41;
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x214) = 0x780;
  *(undefined4 *)((int)this + 0x218) = 0x42;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x224) = 0x781;
  *(undefined4 *)((int)this + 0x228) = 0x43;
  *(undefined4 *)((int)this + 0x22c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x234) = 0x782;
  return 0;
}

/* ref: FUN_00769000 */
GEN_FRAME unsigned int GEN_THISCALL F_00769000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_c;
  
  if (param_1 != (undefined *)0x0) {
    puVar4 = (undefined4 *)((int)this + 0x20);
    local_c = 0x22;
    pvVar3 = param_1;
    do {
      uVar5 = *puVar4;
      F_005a2710(pvVar3 GEN_EDX_FWD,4);
      *(undefined4 *)((int)pvVar3 + 4) = uVar5;
      puVar4 = puVar4 + 4;
      pvVar3 = (undefined *)((int)pvVar3 + 8);
      local_c = local_c - 1;
    } while (local_c != 0);
    pvVar3 = (undefined *)((int)param_1 + 0x110);
    puVar4 = (undefined4 *)((int)this + 0x24);
    local_c = 0x22;
    do {
      uVar5 = *puVar4;
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7);
      F_005a2710(pvVar3 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar3 + 4) = uVar2;
      pvVar3 = (undefined *)((int)pvVar3 + 8);
      puVar4 = puVar4 + 4;
      local_c = local_c - 1;
    } while (local_c != 0);
    uVar1 = *(undefined1 *)((int)this + 0x15);
    F_005a2710((undefined *)((int)param_1 + 0x220) GEN_EDX_ARG,2);
    *(undefined1 *)((int)param_1 + 0x224) = uVar1;
  }
  return;
}

/* ref: FUN_007690b0 */
GEN_NOFRAME uint GEN_THISCALL F_007690b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7690b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406c00(0x22c,0,uVar1,uVar7);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar2 + 1;
    *puVar2 = 0x45;
    iVar4 = 0x44;
    puVar2 = puVar5;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00769000(this GEN_EDX_ARG,puVar5);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x45,puVar5);
  if (puVar5 != (undefined4 *)0x0) {
    iVar4 = puVar5[-1];
    puVar2 = puVar5 + iVar4 * 2;
    while (iVar4 = iVar4 - 1, -1 < iVar4) {
      puVar2 = puVar2 - 2;
      F_005a2670(puVar2 GEN_EDX_ARG);
    }
    uVar6 = F_00406b30(puVar5 - 1);
    uVar1 = (uint)uVar6;
  }
  return uVar1;
}

/* ref: FUN_00769170 */
GEN_FRAME unsigned int GEN_THISCALL F_00769170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  if (param_1 < 3) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    F_0046a630(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4 + 0x248));
  }
  return;
}

/* ref: FUN_007691a0 */
GEN_NOFRAME uint GEN_THISCALL F_007691a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7691a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 0x3b8) != 0) {
    F_00406b30(*(int *)((int)this + 0x3b8));
    *(undefined4 *)((int)this + 0x3b8) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x3bc) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x3bc));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x3bc) = 0;
  }
  *(undefined4 *)((int)this + 0x3c0) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_007691f0 */
GEN_FRAME uint GEN_THISCALL F_007691f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7691f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((-1 < (*(int *)&gen_a1)) && ((*(int *)&gen_a1) < *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838))))) {
    return (int)*((short *)GEN_TOP((*(int *)((int)this + 0x3bc) + (*(int *)&gen_a1) * 2)));
  }
  return 0xffffffff;
}

/* ref: FUN_00769220 */
GEN_FRAME uint GEN_THISCALL F_00769220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  short * psVar3;
  
  if (-1 < param_1) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838)));
    uVar2 = 0;
    if (0 < iVar1) {
      psVar3 = *(short * PTR32 *)((int)this + 0x3b8);
      do {
        if (*psVar3 == param_1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while ((int)uVar2 < iVar1);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00769260 */
GEN_FRAME uint GEN_THISCALL F_00769260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  F_0042aca0((int)this + 0xfc GEN_EDX_FWD);
  if ((param_1 & 2) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x1399;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,uVar2);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,&REFG(undefined, 0x10bfa8c));
  }
  if ((param_1 & 4) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x139a;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,uVar2);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,&REFG(undefined, 0x10bfa90));
  }
  if ((param_1 & 1) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x1398;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,uVar2);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,&REFG(undefined, 0x10bfa94));
  }
  if ((char)param_2 != '\0') {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,param_2);
    F_0042e370((undefined *)((int)this + 0xfc) GEN_EDX_ARG,uVar2);
  }
  return (int)this + 0xfc;
}

/* ref: FUN_00769360 */
GEN_FRAME uint GEN_THISCALL F_00769360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769360u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*(int *)&gen_args[1]);
  cVar1 = *(char *)((*(int *)&gen_args[1]) + (*(int *)&gen_args[2]) * 2);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),cVar1);
  if (cVar1 != '\0') {
    (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),*(undefined1 *)(iVar2 + 1 + (*(int *)&gen_args[2]) * 2));
    uVar3 = F_00769260((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[2]),(*(int *)&gen_args[1]));
    return uVar3;
  }
  return 0x12fd328;
}

/* ref: Client::UI2::Agent::AgentConfigKey::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007693a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7693a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(this + 0x2c) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x2c),0);
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x3b8) != 0) {
    F_00406b30(*(int *)(this + 0x3b8));
    *(undefined4 *)(this + 0x3b8) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x3bc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x3bc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x3bc) = 0;
  }
  *(undefined4 *)(this + 0x3c0) = 0xffffffff;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00769430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x769430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00769460 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00769460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x769460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}

/* ref: FUN_00769490 */
GEN_FRAME int GEN_STDCALL F_00769490(unsigned int gen_a0)
{
  GEN_ENTER(0x769490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (uVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar2)];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  return iVar1;
}

/* ref: FUN_007694c0 */
GEN_FRAME uint GEN_STDCALL F_007694c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7694c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((char)param_1 != '\0') {
    piVar3 = &REFG(undefined4, 0x10bfb64);
    do {
      piVar1 = piVar3 + 1;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 2 + (&REFG(undefined4, 0x10bfb4c))[(int)(*piVar1)] + (&REFG(undefined4, 0x10bfb4c))[(int)(iVar2)];
    } while ((int)piVar3 < 0x10bfb9c);
  }
  return iVar4 + 0x1e;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00769500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00769510 */
GEN_FRAME uint GEN_THISCALL F_00769510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x4c + param_2 * 4);
}

/* ref: FUN_00769520 */
GEN_FRAME unsigned int GEN_THISCALL F_00769520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + param_1 * 4 + 0x4c) != param_2) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x4c);
    while ((((&REFG(undefined4, 0x10bfb64))[(int)(iVar1)] != (&REFG(undefined4, 0x10bfb64))[(int)(param_1)] || (param_1 == iVar1)) ||
           (*piVar2 != param_2))) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0xd < iVar1) {
        *(int *)((int)this + param_1 * 4 + 0x4c) = param_2;
        *(undefined1 *)((int)this + 0xc) = 1;
        return;
      }
    }
    *(undefined4 *)((int)this + iVar1 * 4 + 0x4c) = *(undefined4 *)((int)this + param_1 * 4 + 0x4c);
    *(int *)((int)this + param_1 * 4 + 0x4c) = param_2;
    *(undefined1 *)((int)this + 0xc) = 1;
  }
  return;
}

/* ref: FUN_00769590 */
GEN_FRAME uint GEN_STDCALL F_00769590(unsigned int gen_a0)
{
  GEN_ENTER(0x769590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)((int)&REFG(undefined4, 0x10bfb4c) + uVar1) + iVar3;
    if (param_1 < iVar2) {
      return param_1 - iVar3;
    }
    uVar1 = uVar1 + 4;
    iVar3 = iVar2;
  } while (uVar1 < 0x14);
  return 0;
}

/* ref: FUN_007695d0 */
GEN_FRAME uint GEN_STDCALL F_007695d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7695d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (param_2 == uVar1) {
      return param_1 + iVar2;
    }
    iVar2 = iVar2 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar1)];
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_00769600 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00769600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00769610 */
GEN_NOFRAME uint GEN_THISCALL F_00769610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x769610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0xc) = 1;
  *(undefined1 *)(in_ecx + 0xe) = 0x1f;
  *(undefined4 *)(in_ecx + 0x204) = 0;
  *(undefined4 *)(in_ecx + 0x268) = 0;
  *(undefined4 *)(in_ecx + 0x26c) = 0;
  *(undefined4 *)(in_ecx + 0x270) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x274) = 0;
  *(undefined4 *)(in_ecx + 0x518) = 0;
  *(undefined4 *)(in_ecx + 0x51c) = 0;
  return 0;
}

/* ref: FUN_00769650 */
GEN_FRAME uint GEN_THISCALL F_00769650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x769650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
  F_005a2710(this_00 GEN_EDX_FWD,6);
  *(undefined4 *)((int)this_00 + 4) = param_1;
  *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) =
       *(undefined1 *)((int)this + 0xe);
  *((undefined4 *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 4 + 0x164))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 4 + 0x1b4))) = param_3;
  uVar1 = *(ushort *)((int)this + 0xc);
  if (0 < (short)uVar1) {
    uVar2 = 1 << ((char)uVar1 - 1U & 0x1f);
    if ((char)param_4 != '\0') {
      *(uint *)((int)this + 0x204) = *(uint *)((int)this + 0x204) | uVar2;
      uVar2 = uVar1 + 1;
      *(char *)((int)this + 0xe) = *(char *)((int)this + 0xe) + '\x01';
      *(short *)((int)this + 0xc) = (short)uVar2;
      return uVar2;
    }
    *(uint *)((int)this + 0x204) = *(uint *)((int)this + 0x204) & ~uVar2;
  }
  uVar2 = uVar1 + 1;
  *(char *)((int)this + 0xe) = *(char *)((int)this + 0xe) + '\x01';
  *(short *)((int)this + 0xc) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_007696e0 */
GEN_FRAME uint GEN_THISCALL F_007696e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7696e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (REFG(undefined1, 0x1338ad4) < 2) {
LAB_007697a9: ;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
    sVar1 = *(short *)((int)this + 0xc);
    uVar8 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar7 = 0;
    uVar6 = 0x36;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  }
  else {
    if (REFG(int, 0x1379694) == 0) goto LAB_007697ea;
    bVar2 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar2 == 0) goto LAB_007697ea;
    bVar2 = F_004351d0();
    if (bVar2 != 0) goto LAB_007697ea;
    bVar2 = F_00ae0910(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x74));
    if (bVar2 == 0) goto LAB_007697a9;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
    pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar8 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar7 = 0;
    uVar6 = 0x37;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar6,uVar7,uVar8);
    F_005a2710(pvVar5 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar5 + 4) = uVar4;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
    sVar1 = *(short *)((int)this + 0xc);
    uVar8 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar7 = 0;
    uVar6 = 0x38;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                               (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,0x38,0,0)));
  }
  pvVar3 = (undefined *)((int)this + sVar1 * 8 + 0x10);
  uVar4 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar6,uVar7,uVar8);
  F_005a2710(pvVar3 GEN_EDX_ARG,6);
  *(uint *)((int)pvVar3 + 4) = uVar4;
LAB_007697ea: ;
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769800 */
GEN_FRAME uint GEN_THISCALL F_00769800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  short sVar2;
  int * piVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  undefined * pvVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar3 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD)));
    pbVar9 = (byte *)(param_1 + 7);
    do {
      bVar4 = *pbVar9;
      bVar10 = bVar4 < *pbVar5;
      if (bVar4 != *pbVar5) {
LAB_00769847: ;
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0076984c;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar9[1];
      bVar10 = bVar4 < pbVar5[1];
      if (bVar4 != pbVar5[1]) goto LAB_00769847;
      pbVar9 = pbVar9 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar4 != 0);
    iVar6 = 0;
LAB_0076984c: ;
    if ((((iVar6 != 0) && (bVar4 = F_004351d0(), bVar4 == 0)) &&
        (bVar4 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,piVar3[0x1d]), bVar4 != 0)) &&
       (bVar4 = F_00ae0950(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1 + 7), bVar4 != 0)) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
      pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      uVar13 = 0;
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar12 = 0;
      uVar11 = 0x37;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar8 = F_0043bd00(pvVar7 GEN_EDX_ARG,uVar11,uVar12,uVar13);
      F_005a2710(pvVar1 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar1 + 4) = uVar8;
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
      sVar2 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar2 + 1;
      uVar12 = 0;
      pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
      uVar11 = 0x38;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar8 = F_0043bd00(pvVar7 GEN_EDX_ARG,uVar11,uVar12,uVar13);
      F_005a2710(pvVar1 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar1 + 4) = uVar8;
    }
  }
  *(undefined4 *)((int)this + 0x268) = *param_1;
  *(undefined4 *)((int)this + 0x26c) = param_1[1];
  F_0042e430((undefined *)((int)this + 0x210) GEN_EDX_ARG,param_1 + 7);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769940 */
GEN_NOFRAME uint GEN_THISCALL F_00769940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x769940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0xb;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  pvVar4 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar7);
  uVar3 = 0;
  if (pvVar4 != (undefined *)0x0) {
    bVar2 = F_00436880(pvVar4 GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      if (bVar2 < 3) {
        bVar2 = F_00436890(pvVar4 GEN_EDX_ARG);
        if (bVar2 == 0) {
          return CONCAT31(extraout_var_01,bVar2);
        }
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x17;
        sVar1 = *(short *)((int)this + 0xc);
        uVar8 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar6 = 0;
        uVar7 = 0xaf6;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      }
      else {
        if (bVar2 != 3) {
          return uVar3;
        }
        bVar2 = F_00441290(pvVar4 GEN_EDX_ARG,5);
        if (bVar2 == 0) {
          return CONCAT31(extraout_var_00,bVar2);
        }
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x18;
        sVar1 = *(short *)((int)this + 0xc);
        uVar8 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar6 = 0;
        uVar7 = 0xaf2;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                   (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,0xaf2,0,0)));
      }
      this_00 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar7,uVar6,uVar8);
      uVar3 = F_005a2710(this_00 GEN_EDX_ARG,6);
      *(uint *)((int)this_00 + 4) = uVar5;
    }
  }
  return uVar3;
}

/* ref: FUN_00769a10 */
GEN_FRAME uint GEN_THISCALL F_00769a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != 0) {
    if (*(char *)(REFG(int, 0x1379694) + 0x188) != '\x02') {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1a;
      sVar2 = *(short *)((int)this + 0xc);
      uVar7 = 0;
      *(short *)((int)this + 0xc) = sVar2 + 1;
      uVar6 = 0;
      pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
      uVar5 = 0x27b;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
      uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
      F_005a2710(pvVar1 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar1 + 4) = uVar4;
    }
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1b;
    pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar7 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar6 = 0;
    uVar5 = 0x27c;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar1 + 4) = uVar4;
  }
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769ad0 */
GEN_FRAME uint GEN_THISCALL F_00769ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  short sVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    if (uVar3 != 7) {
      return (int)*(short *)((int)this + 0xc);
    }
    *((undefined1 *)GEN_TOP(((int)*(short *)((int)this + 0xc) + 0x150U + (int)this))) = 0x1a;
    pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar7 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar6 = 0;
    uVar5 = 0x27b;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar1 + 4) = uVar3;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1b;
    sVar2 = *(short *)((int)this + 0xc);
    uVar7 = 0;
    *(short *)((int)this + 0xc) = sVar2 + 1;
    uVar6 = 0;
    pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
    uVar5 = 0x27c;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar1 + 4) = uVar3;
  }
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769b90 */
GEN_FRAME byte GEN_STDCALL F_00769b90(unsigned int gen_a0)
{
  GEN_ENTER(0x769b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00ab21a0((uint)*(byte *)(param_1 + 0x1688));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x10) == 0x21)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00769bc0 */
GEN_NOFRAME byte F_00769bc0(void)
{
  GEN_ENTER(0x769bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar2 = F_005339f0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    uVar3 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (uVar2 != uVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00769c00 */
GEN_FRAME uint GEN_THISCALL F_00769c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  short sVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int * this_00;
  int * piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  
  *(int * PTR32 *)((int)this + 0x20c) = param_1;
  if ((~(uint)param_2 & 2) != 0) {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 2;
    pvVar6 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar13 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar11 = 0;
    uVar10 = 0x33;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
    F_005a2710(pvVar6 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar6 + 4) = uVar5;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar9 = F_0043f9f0(pvVar6 GEN_EDX_ARG);
    if ((*param_1 == (int)uVar9) && (param_1[1] == (int)(uVar9 >> 0x20))) {
      bVar3 = F_004351d0();
      if (bVar3 == 0) {
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 3;
        sVar1 = *(short *)((int)this + 0xc);
        uVar13 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar11 = 0;
        pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
        uVar10 = 0x34;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
        F_005a2710(pvVar6 GEN_EDX_ARG,6);
        *(uint *)((int)pvVar6 + 4) = uVar5;
      }
    }
    else if ((param_1[3] & 8U) != 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 1;
      sVar1 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar11 = 0;
      pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar10 = 0x32;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
      F_005a2710(pvVar6 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar6 + 4) = uVar5;
      iVar12 = REFG(int, 0x1379694);
      bVar3 = F_004358c0(param_1);
      if (((bVar3 == 0) && (iVar12 != 0)) &&
         ((bVar3 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(iVar12 + 0x74)), bVar3 != 0 ||
          (REFG(undefined1, 0x1338ad4) < 2)))) {
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
        sVar1 = *(short *)((int)this + 0xc);
        uVar13 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar11 = 0;
        pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
        uVar10 = 0x36;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
        F_005a2710(pvVar6 GEN_EDX_ARG,6);
        *(uint *)((int)pvVar6 + 4) = uVar5;
      }
      if ((~(uint)param_2 & 1) != 0) {
        uVar10 = 2;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
        this_00 = (int *)F_00435440(uVar5 GEN_EDX_ARG,uVar10);
        uVar8 = 0;
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x18))(this_00 GEN_EDX_ARG);
        if (uVar5 != 0) {
          param_2 = (undefined *)((int)this + 0x278);
          do {
            piVar7 = (int *)F_00439130(this_00 GEN_EDX_ARG,uVar8);
            if (((piVar7 != (int *)0x0) && (*piVar7 != 0 || piVar7[1] != 0)) &&
               ((piVar7[4] & 0x700U) < 0x201)) {
              *((char *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = (char)uVar8 + '\t';
              piVar2 = *(int * PTR32 *)((int)this + 4);
              uVar5 = F_00439390(this_00 GEN_EDX_ARG,*piVar7,piVar7[1]);
              iVar12 = uVar8 + 1;
              uVar10 = 0xae;
              pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG)));
              uVar5 = F_00461060(pvVar6 GEN_EDX_ARG,uVar10,iVar12,uVar5);
              F_0042e430(param_2 GEN_EDX_ARG,uVar5);
              pvVar6 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
              *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
              uVar5 = F_0042a990(param_2 GEN_EDX_ARG);
              F_005a2710(pvVar6 GEN_EDX_ARG,6);
              *(uint *)((int)pvVar6 + 4) = uVar5;
            }
            param_2 = (undefined *)((int)param_2 + 0x54);
            uVar8 = uVar8 + 1;
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x18))(this_00 GEN_EDX_ARG);
          } while (uVar8 < uVar5);
        }
      }
    }
  }
  uVar10 = 5;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar10);
  if ((pvVar6 != (undefined *)0x0) && (bVar3 = F_00437cb0(pvVar6 GEN_EDX_ARG,param_1 + 7,1), bVar3 == 0)) {
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar9 = F_0043f9f0(pvVar6 GEN_EDX_ARG);
    if ((*param_1 != (int)uVar9) || (param_1[1] != (int)(uVar9 >> 0x20))) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 8;
      sVar1 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar11 = 0;
      pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar10 = 0x3d;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
      F_005a2710(pvVar6 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar6 + 4) = uVar5;
    }
  }
  if ((char)param_1[0xf] == '\0') {
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar9 = F_0043f9f0(pvVar6 GEN_EDX_ARG);
    if (((*param_1 != (int)uVar9) || (param_1[1] != (int)(uVar9 >> 0x20))) &&
       ((param_1[3] & 8U) != 0)) {
      F_00769940(this GEN_EDX_ARG);
    }
  }
  else {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x19;
    sVar1 = *(short *)((int)this + 0xc);
    uVar13 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar11 = 0;
    pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
    uVar10 = 0xaf7;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar5 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar10,uVar11,uVar13);
    F_005a2710(pvVar6 GEN_EDX_ARG,6);
    *(uint *)((int)pvVar6 + 4) = uVar5;
  }
  *(int *)((int)this + 0x268) = *param_1;
  *(int *)((int)this + 0x26c) = param_1[1];
  F_0042e430((undefined *)((int)this + 0x210) GEN_EDX_ARG,param_1 + 7);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769fd0 */
GEN_FRAME uint GEN_THISCALL F_00769fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x769fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 1;
  pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
  uVar8 = 0;
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  uVar7 = 0;
  uVar6 = 0x32;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar6,uVar7,uVar8);
  F_005a2710(pvVar5 GEN_EDX_ARG,6);
  *(uint *)((int)pvVar5 + 4) = uVar4;
  if (REFG(undefined1, 0x1338ad4) < 2) {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
    sVar1 = *(short *)((int)this + 0xc);
    uVar7 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar6 = 0;
    pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
    uVar8 = 0x36;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                               (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,0x36,0,0)));
  }
  else {
    if (REFG(int, 0x1379694) == 0) goto LAB_0076a142;
    bVar2 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar2 == 0) goto LAB_0076a142;
    bVar2 = F_004351d0();
    if (bVar2 != 0) goto LAB_0076a142;
    uVar4 = F_0042a990(param_1 GEN_EDX_ARG);
    bVar2 = F_00ae0950(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,uVar4);
    uVar7 = 0;
    uVar6 = 0;
    if (bVar2 == 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar8 = 0x36;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    }
    else {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar8 = 0x37;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar8,uVar6,uVar7);
      F_005a2710(pvVar5 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar5 + 4) = uVar4;
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
      sVar1 = *(short *)((int)this + 0xc);
      uVar7 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar6 = 0;
      pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar8 = 0x38;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                 (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,0x38,0,0)));
    }
  }
  uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar8,uVar6,uVar7);
  F_005a2710(pvVar5 GEN_EDX_ARG,6);
  *(uint *)((int)pvVar5 + 4) = uVar4;
LAB_0076a142: ;
  uVar6 = 5;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  pvVar5 = (undefined *)F_00435440(uVar4 GEN_EDX_ARG,uVar6);
  if (pvVar5 != (undefined *)0x0) {
    uVar6 = 1;
    uVar4 = F_0042a990(param_1 GEN_EDX_ARG);
    bVar2 = F_00437cb0(pvVar5 GEN_EDX_ARG,uVar4,uVar6);
    if (bVar2 == 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 8;
      sVar1 = *(short *)((int)this + 0xc);
      uVar8 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar7 = 0;
      pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar6 = 0x3d;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar4 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar6,uVar7,uVar8);
      F_005a2710(pvVar5 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar5 + 4) = uVar4;
    }
  }
  F_0042ccf0((undefined *)((int)this + 0x210) GEN_EDX_ARG,param_1);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_0076a1d0 */
GEN_FRAME uint GEN_THISCALL F_0076a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x518) = param_1;
  *(undefined4 *)((int)this + 0x51c) = param_2;
  return param_1;
}

/* ref: FUN_0076a1f0 */
GEN_FRAME byte GEN_STDCALL F_0076a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (REFG(int, 0x1488344) != 0) {
    uVar1 = F_006b8c00();
    uVar1 = F_006c5190(uVar1 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0076a220 */
GEN_FRAME byte GEN_STDCALL F_0076a220(unsigned int gen_a0)
{
  GEN_ENTER(0x76a220u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (REFG(int, 0x1488344) != 0) {
    uVar2 = F_006b8c00();
    uVar2 = F_006c5190(uVar2 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if ((((uVar2 == 1) && (bVar1 = F_00a9f620(param_1 GEN_EDX_ARG), bVar1 == 0)) &&
      (bVar1 = F_00a620a0(), bVar1 != 0)) && (uVar2 = F_00a62220(param_1), (char)uVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentContext::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0076a2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x518);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0x51c));
    if ((char)uVar2 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0x518) = 0;
    }
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCursor::vf1 */
GEN_FRAME uint GEN_THISCALL F_0076a2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76a2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCursor::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0076a300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined2 *)(this + 0x1d) = 0;
  return;
}

/* ref: FUN_0076a330 */
GEN_FRAME byte GEN_STDCALL F_0076a330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1 GEN_EDX_ARG,param_2);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1 GEN_EDX_ARG);
        uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      }
      uVar2 = F_00ab24a0(uVar2);
      if ((uVar2 != 0) && ((*(char *)(uVar2 + 0xbf) != '\0' || (*(char *)(uVar2 + 0xbe) != '\0'))))
      {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0076a3b0 */
GEN_FRAME uint GEN_THISCALL F_0076a3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76a3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 + 0x1b) * 0x10 + (int)this)));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined1 *)(puVar1 + 3) = (undefined1)param_5;
  return (uint)puVar1;
}

/* ref: FUN_0076a3e0 */
GEN_FRAME uint GEN_THISCALL F_0076a3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76a3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = (undefined1)param_1;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,param_2,uVar4,uVar5);
  pvVar2 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
  F_005a2710(pvVar2 GEN_EDX_ARG,6);
  *(uint *)((int)pvVar2 + 4) = uVar3;
  iVar1 = *(int *)((int)this + 0x10);
  if (0 < iVar1) {
    uVar3 = 1 << ((char)iVar1 - 1U & 0x1f);
    if ((char)param_3 != '\0') {
      *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) | uVar3;
      *(uint *)((int)this + 0x10) = iVar1 + 1U;
      return iVar1 + 1U;
    }
    *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) & ~uVar3;
  }
  *(uint *)((int)this + 0x10) = iVar1 + 1U;
  return iVar1 + 1U;
}

/* ref: FUN_0076a460 */
GEN_FRAME uint GEN_THISCALL F_0076a460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    if ((REFG(undefined1, 0x14b4ec1) & 0x20) != 0) {
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x250);
      if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar2 = F_00a3a860(pvVar3 GEN_EDX_FWD), uVar2 == 0)) {
        uVar1 = *(ushort *)((int)pvVar3 + 0x10);
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
        uVar1 = F_0071d210(pvVar3 GEN_EDX_ARG);
      }
      uVar2 = F_0076a3e0(this GEN_EDX_ARG,0x11,0x1153,(uint)(uVar1 < 10000));
      return uVar2;
    }
    return param_1;
  }
  return param_1;
}

/* ref: FUN_0076a4e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0076a4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a4e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  ushort uVar2;
  
  if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
    return;
  }
  if ((*(int *)&gen_args[1]) == 0) {
    return;
  }
  if (*(char *)((*(int *)&gen_args[1]) + 0xa5) == '\0') {
    return;
  }
  if ((REFG(undefined1, 0x14b4ec1) & 8) == 0) {
    return;
  }
  bVar1 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  if (bVar1 < 5) {
    uVar2 = F_0071d2c0((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,0);
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)&gen_args[2]) & 0xffffff00)));
    if (uVar2 != 1) goto LAB_0076a529;
  }
  (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[2]), 1, 3),1)));
LAB_0076a529: ;
  F_0076a3e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x12,0x1154,(*(undefined * PTR32 *)&gen_args[2]));
  return;
}

/* ref: FUN_0076a550 */
GEN_FRAME uint GEN_THISCALL F_0076a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76a550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && ((REFG(undefined1, 0x14b4ec1) & 0x40) != 0)) {
    if (*(char *)(param_1 + 0xba) != '\0') {
      uVar1 = F_0076a3e0(this GEN_EDX_FWD,0x13,0x1257,0);
      return uVar1;
    }
    if (*(char *)(param_1 + 0xa0) == '\x0f') {
      uVar1 = F_0076a3e0(this GEN_EDX_ARG,0x14,0x1257,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_0076a5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76a5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(undefined4 *)(this + 0x244));
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x248));
      if (((uVar1 != 0) && (*(char *)(uVar1 + 6) == '\0')) && (*(int *)(uVar1 + 8) == 0)) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_0076a5f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0076a5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x254),(uint)*(ushort *)((int)this + 600)
                );
  }
  return;
}

/* ref: FUN_0076a650 */
GEN_FRAME byte GEN_THISCALL F_0076a650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76a650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)((int)this + 0x1bc);
  while ((*(int *)(pcVar1 - 8) == 0 || (*pcVar1 == '\0'))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x10;
    if (8 < iVar2) {
      return 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pcVar1 - 8) + 4))))
            (*(int * PTR32 *)(pcVar1 - 8) GEN_EDX_ARG,param_2,param_1,param_3,*(undefined4 *)(pcVar1 - 4));
  return 1;
}

/* ref: Client::UI2::Agent::AgentCloseMessage::vf1 */
GEN_FRAME uint GEN_THISCALL F_0076a6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76a6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((param_2 != (byte *)0x0) && ((*(int *)&gen_a3) == 1)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    uVar2 = 0;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_004246b0(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD,0);
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      uVar2 = 1;
    default: ;
      *(undefined4 *)(this + 8) = 0;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076a760 */
GEN_FRAME uint GEN_STDCALL F_0076a760(unsigned int gen_a0)
{
  GEN_ENTER(0x76a760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      uVar1 = F_00ac3430(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar2);
      if (param_1 == uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
  }
  return 0xffffffff;
}

/* ref: FUN_0076a7a0 */
GEN_FRAME uint GEN_STDCALL F_0076a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 1;
  default: ;
    return 0;
  case 2: ;
    return 9;
  case 3: ;
    return 5;
  case 4: ;
    return 6;
  case 5: ;
    return 7;
  case 6: ;
    return 8;
  case 7: ;
    return 0xb;
  case 8: ;
    return 0xd;
  }
}

/* ref: FUN_0076a830 */
GEN_FRAME uint GEN_THISCALL F_0076a830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76a830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 == param_1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0076a850 */
GEN_FRAME byte GEN_THISCALL F_0076a850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)(param_2 * 0xa28 + 0x7c + (int)this);
  iVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x1a;
  } while (iVar1 < 0x19);
  return 0;
}

/* ref: FUN_0076a880 */
GEN_NOFRAME byte GEN_THISCALL F_0076a880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    return 1;
  }
  *(undefined1 *)((int)this + 0x8e54) = 1;
  return 0;
}

/* ref: FUN_0076a8b0 */
GEN_FRAME uint GEN_THISCALL F_0076a8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76a8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * this_00;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char * local_c;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x26);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,0x23);
  uVar7 = uVar6;
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (**(int * PTR32 *)(uVar5 + 0x20) != *(int *)((int)this + 0x10)) {
      **(int * PTR32 *)(uVar5 + 0x20) = *(int *)((int)this + 0x10);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar7 = F_00434e60(*(undefined4 *)((int)this + 0x10));
    pvVar8 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar7);
    local_c = ((char *)GEN_TOP((*(int *)((int)this + 0x10) * 0xa28 + 0x89 + (int)this)));
    if (pvVar8 != (undefined *)0x0) {
      iVar2 = *(int *)((int)pvVar8 + 0xc);
      local_10 = 0;
      if (0 < iVar2) {
        local_1c = 0x40;
        do {
          if (0x18 < local_10) break;
          iVar1 = (*(int *)((int)this + 0x10) * 0x19 + local_10) * 8;
          uVar7 = 0;
          local_18 = 0;
          bVar10 = false;
          local_14 = 0;
          this_00 = (undefined *)F_00a37da0(pvVar8 GEN_EDX_ARG,local_10);
          if ((this_00 != (undefined *)0x0) &&
             ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
            uVar7 = F_00a37c50(this_00 GEN_EDX_ARG);
            uVar7 = (uint)(uVar7 != 0);
            F_0046e5e0(this_00 GEN_EDX_ARG);
            local_18 = F_00760640((uint)(byte)local_c[-1],this_00,*(undefined4 *)(local_c - 5));
            bVar10 = *local_c != '\0';
            if (bVar10) {
              bVar3 = F_00760e50(local_c - 0x65 GEN_EDX_ARG,this_00);
              local_14 = F_00760700((uint)bVar3);
            }
          }
          uVar9 = (uint)bVar10 | local_14 * 2;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) = uVar9;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) - 8 + local_1c))) != *(int *)(local_c - 9)) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) - 8 + local_1c))) = *(int *)(local_c - 9);
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) != (uint)(byte)local_c[-1]) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) = (uint)(byte)local_c[-1];
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = local_18 & 0xff |
                  ((uint)CONCAT11(*(char *)((int)this + iVar1 + 0x8431) != '\0',
                                  *(undefined1 *)((int)this + iVar1 + 0x8430)) << 8 | uVar7) << 8;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c - 0x61 GEN_EDX_ARG);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4))) = uVar7;
            *(undefined1 *)(uVar6 + 0x1d) = 1;
          }
          local_c = local_c + 0x68;
          local_1c = local_1c + 0x14;
          local_10 = local_10 + 1;
        } while (local_10 < iVar2);
      }
    }
    uVar11 = *(undefined4 *)(&REFG(undefined, 0x10bfc6c) + *(int *)((int)this + 0x10) * 4);
    uVar13 = 0;
    uVar12 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar7 = F_0043bd00(pvVar8 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100))) = uVar7;
  }
  return uVar7;
}

/* ref: FUN_0076ab00 */
GEN_FRAME unsigned int GEN_THISCALL F_0076ab00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ab00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x26);
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_00434e60(local_8);
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar4);
      if (this_00 != (undefined *)0x0) {
        iVar1 = *(int *)((int)this_00 + 0xc);
        iVar5 = 0;
        iVar6 = 0;
        if (0 < iVar1) {
          do {
            uVar4 = F_00a37da0(this_00 GEN_EDX_ARG,iVar6);
            if ((uVar4 != 0) && ((*(char *)(uVar4 + 6) != '\0' || (*(int *)(uVar4 + 8) != 0)))) {
              iVar5 = iVar5 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) != iVar5) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) = iVar5;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 0xd);
  }
  return 0;
}

/* ref: FUN_0076abb0 */
GEN_FRAME uint F_0076abb0(void)
{
  GEN_ENTER(0x76abb0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  do {
    uVar2 = F_00434e60(local_8);
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar2);
    if (this != (undefined *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = F_00a37da0(this GEN_EDX_ARG,iVar3);
          if ((uVar2 != 0) && ((*(char *)(uVar2 + 6) != '\0' || (*(int *)(uVar2 + 8) != 0)))) {
            return local_8;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    local_8 = local_8 + 1;
    if (0xc < (int)local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0076ac20 */
GEN_FRAME byte GEN_THISCALL F_0076ac20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    F_0076a8b0(this GEN_EDX_FWD);
    return 0;
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0xc);
  F_0076a8b0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0076ac50 */
GEN_FRAME byte GEN_THISCALL F_0076ac50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar1 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  puVar2 = (undefined4 *)F_00a37180(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if (puVar2 != (undefined4 *)0x0) {
    F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1,uVar3,*puVar2,(uint)*(ushort *)(puVar2 + 1),1);
    F_0076a8b0(this GEN_EDX_ARG);
    return 0;
  }
  uVar3 = 0x2eb;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_0046a630(this_00 GEN_EDX_ARG,uVar3);
  F_0076a8b0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0076ace0 */
GEN_FRAME uint GEN_THISCALL F_0076ace0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 uVar3;
  
  if (*param_1 != param_2) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 7;
  }
  uVar2 = F_00ab24a0(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = F_00a35d00(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    uVar3 = 7;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 - 2;
    if (uVar2 == 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 8;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 3: ;
    bVar1 = F_00a3c930(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var,bVar1 == 0);
  case 4: ;
  case 5: ;
    bVar1 = F_00a3c8c0(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var_00,bVar1 == 0);
  default: ;
    goto switchD_0076ad41_caseD_6;
  case 7: ;
    uVar2 = F_00a3e8f0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,param_4);
    break;
  case 9: ;
    uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,param_4);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0);
switchD_0076ad41_caseD_6: ;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(char *)((int)param_1 + 5) = (char)uVar2;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0076adf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (0 < *(int *)(this + 0x70)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x70),0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return;
}

/* ref: FUN_0076ae50 */
GEN_NOFRAME uint GEN_THISCALL F_0076ae50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76ae50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  uVar4 = F_0043d880(uVar4 GEN_EDX_ARG);
  if ((int)uVar4 < 6) {
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      uVar4 = F_0043d8f0(uVar4 GEN_EDX_ARG);
      F_0042ccf0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,uVar4);
      uVar5 = (uint)(**(char * PTR32 *)((int)this + 0x1c) != '\0');
      uVar4 = F_0042a990((int)this + 0x1c GEN_EDX_ARG);
      uVar4 = F_00461270(this_00 GEN_EDX_ARG,0x29a,uVar4,uVar5);
      return uVar4;
    case 1: ;
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0x28d,0,0);
      return uVar4;
    case 2: ;
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0x28e,0,0);
      return uVar4;
    case 3: ;
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0x287,0,0);
      return uVar4;
    case 4: ;
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0x285,0,0);
      return uVar4;
    case 5: ;
      uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0x286,0,0);
      return uVar4;
    }
  }
  else {
    iVar1 = uVar4 - 6;
    bVar3 = F_004351d0();
    piVar2 = *(int * PTR32 *)((int)this + 4);
    if (bVar3 == 0) {
      uVar8 = 2;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar8);
      if ((pvVar6 != (undefined *)0x0) &&
         (puVar7 = (undefined4 *)F_00439130(pvVar6 GEN_EDX_ARG,iVar1), puVar7 != (undefined4 *)0x0)) {
        uVar5 = F_00439390(pvVar6 GEN_EDX_ARG,*puVar7,puVar7[1]);
        uVar4 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
    else {
      uVar8 = 0xf;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar8);
      if ((pvVar6 != (undefined *)0x0) && (bVar3 = F_0043a050(pvVar6 GEN_EDX_ARG,iVar1), bVar3 != 0)) {
        uVar5 = F_0043a0b0(pvVar6 GEN_EDX_ARG,iVar1);
        uVar4 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: FUN_0076afe0 */
GEN_FRAME unsigned int GEN_THISCALL F_0076afe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76afe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  *(uint *)((int)this + 0x338) = uVar2;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  return (uint)(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_1));
}

/* ref: FUN_0076b020 */
GEN_FRAME uint GEN_THISCALL F_0076b020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (0 < *(int *)((int)this + 0x70)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x70),0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 - 2;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0076b150 */
GEN_FRAME uint GEN_THISCALL F_0076b150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 - 2;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0076b230 */
GEN_FRAME uint GEN_THISCALL F_0076b230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xac)) = 2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0076b310 */
GEN_FRAME uint GEN_THISCALL F_0076b310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_02;
  uint uVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined * local_8;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  bVar1 = F_004351d0();
  piVar4 = *(int * PTR32 *)((int)this + 4);
  if (bVar1 == 0) {
    uVar8 = 2;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
    piVar4 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    uVar2 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = 0;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
      uVar2 = 0;
      if (uVar3 != 0) {
        local_8 = (undefined *)((int)this + 0x78);
        puVar7 = (uint *)((int)this + 0x318);
        do {
          piVar5 = (int *)F_00439130(piVar4 GEN_EDX_ARG,uVar6);
          if (((piVar5 != (int *)0x0) && (*piVar5 != 0 || piVar5[1] != 0)) &&
             ((piVar5[4] & 0x700U) != 0x400)) {
            *puVar7 = uVar6;
            uVar2 = F_00439390(piVar4 GEN_EDX_ARG,*piVar5,piVar5[1]);
            uVar2 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar6 + 1,uVar2);
            F_0042e430(local_8 GEN_EDX_ARG,uVar2);
            puVar7 = puVar7 + 1;
            local_8 = (undefined *)((int)local_8 + 0x54);
          }
          uVar6 = uVar6 + 1;
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
        } while (uVar6 < uVar2);
      }
    }
  }
  else {
    uVar8 = 0xf;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
    this_01 = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    uVar2 = 0;
    if (this_01 != (undefined *)0x0) {
      uVar2 = 0;
      this_02 = (undefined *)((int)this + 0x78);
      puVar7 = (uint *)((int)this + 0x318);
      do {
        bVar1 = F_0043a050(this_01 GEN_EDX_ARG,uVar2);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          *puVar7 = uVar2;
          uVar3 = F_0043a0b0(this_01 GEN_EDX_ARG,uVar2);
          uVar3 = F_00462030(this_00 GEN_EDX_ARG,0x28f,uVar2 + 1,uVar3);
          uVar3 = F_0042e430(this_02 GEN_EDX_ARG,uVar3);
          puVar7 = puVar7 + 1;
          this_02 = (undefined *)((int)this_02 + 0x54);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b450 */
GEN_FRAME unsigned int GEN_THISCALL F_0076b450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined * PTR32 * ppuVar6;
  
  if (param_1 < 8) {
    bVar2 = F_004351d0();
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (bVar2 == 0) {
      uVar5 = 2;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      pvVar4 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return;
      }
      uVar3 = F_00439130(pvVar4 GEN_EDX_ARG,param_1);
      if (uVar3 == 0) {
        return;
      }
      F_00444aa0(pvVar4 GEN_EDX_ARG,*(undefined4 *)(uVar3 + 8),*(undefined4 *)(uVar3 + 0xc),1);
    }
    else {
      uVar5 = 0xf;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      pvVar4 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return;
      }
      bVar2 = F_0043a050(pvVar4 GEN_EDX_ARG,param_1);
      if (bVar2 == 0) {
        return;
      }
      F_0043a140(pvVar4 GEN_EDX_ARG,param_1);
    }
    ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    uVar5 = 6;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    F_004485a0(pvVar4 GEN_EDX_ARG,uVar5,param_1,ppuVar6);
  }
  return;
}

/* ref: FUN_0076b4f0 */
GEN_FRAME byte GEN_THISCALL F_0076b4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  bVar1 = *(byte *)((int)this + 0x33c);
  if (bVar1 != (byte)param_1) {
    if (*(int *)((int)this + 8) != 0) {
      puVar2 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 7;
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0xac)) = (uint)((byte)param_1 != 0);
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 - 2;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
    *(byte *)((int)this + 0x33c) = (byte)param_1;
    bVar1 = (byte)param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_0076b5c0 */
GEN_FRAME uint GEN_THISCALL F_0076b5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x76b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 6;
    F_005a2710(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xb4)) = param_1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0076b670 */
GEN_FRAME uint GEN_THISCALL F_0076b670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  
  if ((param_3 & 0x1d83040) == 0) {
    if ((param_3 & 0x18010) != 0) {
      uVar2 = param_4;
      if ((param_3 & 0x10000) == 0) {
        uVar3 = F_00760440(param_5);
        pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar3);
        if ((pvVar4 != (undefined *)0x0) &&
           (pvVar4 = (undefined *)F_00a37da0(pvVar4 GEN_EDX_ARG,param_4), pvVar4 != (undefined *)0x0)) {
          uVar2 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
        }
      }
      uVar3 = F_00ab24a0(uVar2);
      if (uVar3 != 0) {
        uVar2 = F_00ab6240(uVar2,0,uVar3);
        F_0042e430(param_1 GEN_EDX_ARG,uVar2);
        pvVar4 = param_1;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
        this_00 = (undefined *)F_0043bef0(uVar2 GEN_EDX_ARG);
        F_00a21e20(this_00 GEN_EDX_ARG,pvVar4);
      }
    }
  }
  else {
    if ((param_3 & 0x40) == 0) {
      if ((param_3 & 0x2000) == 0) {
        if ((param_3 & 0x80000) == 0) {
          if ((param_3 & 0x100000) == 0) {
            if ((param_3 & 0x400000) == 0) {
              if ((param_3 & 0x1000) == 0) {
                if ((param_3 & 0x800000) == 0) {
                  if ((param_3 & 0x1000000) == 0) goto LAB_0076b7c8;
                  puVar1 = (uint *)F_00ab2840(param_4);
                }
                else {
                  puVar1 = (uint *)F_00ab2d50(param_4);
                }
              }
              else {
                puVar1 = (uint *)F_00ab1f00(param_4);
              }
            }
            else {
              puVar1 = (uint *)F_00ab2870(param_4);
            }
          }
          else {
            puVar1 = (uint *)F_00ab2cf0(param_4);
          }
        }
        else {
          puVar1 = (uint *)F_00ab2c30(param_4);
        }
      }
      else {
        puVar1 = (uint *)F_00ab1f30(param_4);
      }
    }
    else {
      puVar1 = (uint *)F_00ab1ed0(param_4);
    }
    if (puVar1 != (uint *)0x0) {
      F_0042e430(param_1 GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
      uVar2 = F_0042ccf0(param_2 GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
LAB_0076b7c8: ;
  uVar2 = F_0042ccf0(param_2 GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0076b7e0 */
GEN_NOFRAME uint GEN_THISCALL F_0076b7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  if (*(int *)((int)this + 0x90) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x90));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  iVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x624);
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 100);
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x494);
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 100);
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x2a0);
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 100);
    uVar5 = F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return (uint)uVar5;
}

/* ref: FUN_0076b890 */
GEN_FRAME uint GEN_THISCALL F_0076b890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x76b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 0xa4);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_FWD);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x298);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_ARG);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x48c);
  local_8 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2 GEN_EDX_ARG);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *(undefined1 *)((int)this + 0x94) = 1;
  *(undefined4 *)((int)this + 0x64c) = 0;
  F_00c48350((undefined *)((int)this + 0x614),0,0x38);
  uVar2 = *(uint *)((int)this + 0x90);
  if (uVar2 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,uVar2);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  return uVar2;
}

