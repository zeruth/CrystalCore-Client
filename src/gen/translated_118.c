#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a956f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a956f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa956f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (this != param_1) {
    uVar3 = (param_1[1] - *param_1) / 0x11c;
    if (uVar3 == 0) {
      iVar5 = *((int *)GEN_TOP(((int)this + 4)));
      if (*(int *)this != iVar5) {
        uVar3 = F_00a8c970(iVar5,iVar5,*(int *)this,0);
        F_00a92090(uVar3,*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
        return (uint)this;
      }
    }
    else {
      iVar5 = *(int *)this;
      uVar1 = (*((int *)GEN_TOP(((int)this + 4))) - iVar5) / 0x11c;
      if (uVar3 <= uVar1) {
        uVar3 = F_00a8c870(*param_1,param_1[1],iVar5,uVar3);
        F_00a92090(uVar3,*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((int *)GEN_TOP(((int)this + 4))) = ((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this;
        return (uint)this;
      }
      if ((uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar5) / 0x11c) < uVar3) {
        if (iVar5 != 0) {
          F_00a92090(iVar5,*((undefined4 *)GEN_TOP(((int)this + 4))));
          F_00a86d90(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c);
        }
        bVar2 = F_00a8d860(this GEN_EDX_ARG,(param_1[1] - *param_1) / 0x11c);
        if (bVar2 == 0) {
          return (uint)this;
        }
        uVar6 = *(undefined4 *)this;
        iVar5 = param_1[1];
        iVar4 = *param_1;
      }
      else {
        iVar4 = uVar1 * 0x11c + *param_1;
        F_00a8c870(*param_1,iVar4,iVar5,iVar4);
        uVar6 = *((undefined4 *)GEN_TOP(((int)this + 4)));
        iVar5 = param_1[1];
      }
      uVar3 = F_00a92b60(iVar4,iVar5,uVar6);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a95890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (in_EAX = *(uint *)this, in_EAX <= param_1)) {
    iVar2 = param_1 - in_EAX;
    in_EAX = iVar2 * -0x193d4bb7;
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      in_EAX = F_00a94570(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(iVar2 / 0x11c) * 0x11c + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
      return uVar1;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      in_EAX = F_00a94570(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      in_EAX = F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return in_EAX;
}

/* ref: FUN_00a95920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94600(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined1 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94600(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a95980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a959b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a959d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x2624;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2624;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a946c0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a946c0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a95b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00a91460(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a95b20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a95b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00a93680(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00a95b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa95b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00a94950(this GEN_EDX_FWD,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a95b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95be0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa95be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a920d0(((undefined *)GEN_TOP(((int)param_1 + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)param_1 + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x5c))) GEN_EDX_ARG);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a95c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95c30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa95c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a93680(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a95c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95c60(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa95c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP((param_1 + 0x6c))) - iVar1) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x68))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = 0;
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a95cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95cd0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa95cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_0095c5e0(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 8))),0x18,800);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a95d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa95d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP(((int)this + 8)))) {
    F_00a94570(this GEN_EDX_FWD,1);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_3);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 - 0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90d20(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a95de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  *(undefined2 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *param_2;
  F_00a93db0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00a95e10 */
GEN_OWN GEN_FRAME unsigned int F_00a95e10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa95e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_00a92e20(param_2 + 0x17 GEN_EDX_ARG,param_3 + 0x17);
    *(undefined1 *)(param_2 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
    *((undefined1 *)GEN_TOP(((int)param_2 + 0x6d))) = *((undefined1 *)GEN_TOP(((int)param_3 + 0x6d)));
  }
  return;
}

/* ref: FUN_00a95e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  return (uint)this;
}

/* ref: FUN_00a95ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_1 + 0x5c);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a95f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_00a93d20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a95f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  F_00a92ec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a95fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  F_00a92ec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 1);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  return (uint)this;
}

/* ref: FUN_00a96020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = param_1[2];
  F_00a93db0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_1 + 0x5c);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a960b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a960b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa960b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  F_00a92ec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
  return (uint)this;
}

/* ref: FUN_00a96120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  F_0042b630((int)this + 0x58 GEN_EDX_ARG);
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  F_0042b630((int)this + 0x144 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1a4 GEN_EDX_ARG);
  F_0042b630((int)this + 0x200 GEN_EDX_ARG);
  F_0042b630((int)this + 600 GEN_EDX_ARG);
  local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x2d4)));
  local_c = 4;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x2d8)));
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar1 + 100))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x6c)));
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x4f0)));
  local_c = 4;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x4f4)));
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar1 + 100))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x6c)));
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x70c)));
  local_c = 3;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x710)));
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar1 + 100))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x6c)));
    local_c = local_c - 1;
  } while (-1 < local_c);
  F_0071db50(((undefined *)GEN_TOP(((int)this + 0x8bc))) GEN_EDX_ARG);
  F_0042b630((int)this + 0x9b4 GEN_EDX_ARG);
  F_0042b630((int)this + 0xa08 GEN_EDX_ARG);
  F_0042b630((int)this + 0xa5c GEN_EDX_ARG);
  F_00a84ef0(((undefined *)GEN_TOP(((int)this + 0x8bc))) GEN_EDX_ARG);
  F_00a94c50(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a962b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a962b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa962b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 100)));
  if (*((int *)GEN_TOP(((int)this + 0x60))) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x60))),this);
    F_00a92090(uVar2,*((undefined4 *)GEN_TOP(((int)this + 100))));
    *((uint *)GEN_TOP(((int)this + 100))) = uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  if (*((int *)GEN_TOP(((int)this + 0x70))) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x70))),this);
    F_00a92090(uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  return;
}

/* ref: FUN_00a96330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  F_0042b630((int)this + 0x58 GEN_EDX_ARG);
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x15c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  local_c = 4;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x160)));
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x68)));
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x364)));
  local_c = 4;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x368)));
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x54))) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = 0;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x68)));
    local_c = local_c - 1;
  } while (-1 < local_c);
  F_00a94f60(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a96440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a96440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[0x17];
  F_00a956f0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,param_1 + 0x18);
  F_00a956f0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a964c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a964c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa964c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a95a70(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a8e790(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,
                   ((int)(param_1 - uVar2) / 0x2624) * 0x2624 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x2624;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a95a70(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a8e790(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x2624;
  return;
}

/* ref: FUN_00a96550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    F_00a93680(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96590 */
GEN_OWN_GS GEN_FRAME uint F_00a96590(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa96590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  (*(undefined4 *)(gen_frame + 0x58)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x54)) = *param_3;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,param_3 + 2);
  (*(undefined4 *)(gen_frame + 0xb0)) = param_3[0x17];
  F_00a92a70(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,param_3 + 0x18);
  F_00a92a70(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG,param_3 + 0x1c);
  uVar1 = F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar1);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = (*(undefined4 *)(gen_frame + 0x54));
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = (*(undefined4 *)(gen_frame + 0x58));
  F_0042cbc0(((undefined *)GEN_TOP(((int)param_1 + 0x5c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)param_1 + 0xb0))) = (*(undefined4 *)(gen_frame + 0xb0));
  F_00a92a70(((undefined *)GEN_TOP(((int)param_1 + 0xb4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
  F_00a92a70(((undefined *)GEN_TOP(((int)param_1 + 0xc4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a96680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa96680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00a95d60(this GEN_EDX_FWD,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a966a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a966a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa966a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  *(undefined2 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *param_2;
  F_00a93db0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00a966d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a966d0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa966d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)param_1 + 0xc4))) GEN_EDX_ARG);
  F_00a920d0(((undefined *)GEN_TOP(((int)param_1 + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96710 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a96710(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa96710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96730 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a96730(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa96730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP((param_1 + 0x6c))) - iVar1) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x68))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = 0;
  uVar2 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a96790 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a96790(unsigned int gen_a0)
{
  GEN_ENTER(0xa96790u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0095c5e0(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a967d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a967d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa967d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a934c0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a96800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96800(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa96800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_0095c5e0(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 8))),0x18,800);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a96850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a968a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a968a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa968a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x78,0,800)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    F_0042cbc0(puVar1 + 4 GEN_EDX_ARG,param_3 + 2);
    F_00a92e20(puVar1 + 0x19 GEN_EDX_ARG,param_3 + 0x17);
    *(undefined1 *)(puVar1 + 0x1d) = *(undefined1 *)(param_3 + 0x1b);
    *((undefined1 *)GEN_TOP(((int)puVar1 + 0x75))) = *((undefined1 *)GEN_TOP(((int)param_3 + 0x6d)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00a96910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  F_00a92ec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
  return (uint)this;
}

/* ref: FUN_00a96980 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a96980(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa96980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00a95ec0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a969a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a969a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa969a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_00a93d20(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
  }
  return;
}

/* ref: FUN_00a969d0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a969d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa969d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[3] = 0;
    uVar1 = F_004296a0(0x18,0,800);
    param_1[2] = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[2];
    *((undefined4 *)GEN_TOP((param_1[2] + 8))) = param_1[2];
    *((undefined1 *)GEN_TOP((param_1[2] + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((param_1[2] + 0x15))) = 1;
    F_00a92ec0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
  }
  return;
}

/* ref: FUN_00a96a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = param_1[2];
  F_00a93db0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a95fb0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00a96a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa96a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00a960b0(this GEN_EDX_FWD,param_1,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96af0 */
GEN_OWN GEN_FRAME unsigned int F_00a96af0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa96af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a969d0(param_2,param_3);
  return;
}

/* ref: FUN_00a96b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a96b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  F_00a962b0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a96b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96b90 */
GEN_OWN GEN_FRAME uint F_00a96b90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa96b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)param_2 + 0xc4))) GEN_EDX_ARG);
  F_00a920d0(((undefined *)GEN_TOP(((int)param_2 + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a968a0(param_1,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  **((uint * PTR32 *)GEN_TOP((uVar1 + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00a96c10 */
GEN_OWN GEN_FRAME uint F_00a96c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa96c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 100)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP((param_2 + 0x6c))) - iVar1) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP((param_2 + 100))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x68))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x6c))) = 0;
  uVar2 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a96c70 */
GEN_OWN GEN_FRAME uint F_00a96c70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa96c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96c90 */
GEN_OWN GEN_FRAME uint F_00a96c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa96c90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0095c5e0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a96cc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a96cc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa96cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a934c0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a96ce0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a96ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa96ce0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0095c5e0(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a96d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa96d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96d70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa96d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP(((int)param_1 + 8)))) {
    F_00a920d0(param_5 + 0x34 GEN_EDX_FWD);
    F_00a920d0(param_5 + 0x30 GEN_EDX_ARG);
    F_0042c880(param_5 + 0x1a GEN_EDX_ARG);
    F_0042c880(param_5 + 3 GEN_EDX_ARG);
    F_00429760(param_5,0xe4,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)param_1 + 8))) = *((uint *)GEN_TOP(((int)param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP(((int)param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) = (int)param_5;
      }
      goto LAB_00a96e08;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00a96e08;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00a96e08: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0xe0)));
  piVar6 = param_5;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) + 0xe0))) = 1;
      *param_2 = param_5;
      return (uint)param_2;
    }
    piVar3 = ((int *)GEN_TOP(piVar6[1]));
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
      iVar4 = piVar5[2];
      if (*((char *)GEN_TOP((iVar4 + 0xe0))) != '\0') {
        if (piVar6 == ((int *)GEN_TOP(piVar3[2]))) {
          piVar6 = ((int *)GEN_TOP(piVar3[2]));
          piVar3[2] = *piVar6;
          if (*((char *)GEN_TOP((*piVar6 + 0xe1))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar3;
          }
          piVar6[1] = piVar3[1];
          if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar6;
          }
          else {
            piVar5 = ((int *)GEN_TOP(piVar3[1]));
            if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
              *piVar5 = (int)piVar6;
            }
            else {
              piVar5[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar3;
          piVar3[1] = (int)piVar6;
          piVar6 = piVar3;
        }
        *((undefined1 *)GEN_TOP((piVar6[1] + 0xe0))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xe0))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
        piVar5 = ((int *)GEN_TOP(*piVar3));
        *piVar3 = piVar5[2];
        if (*((char *)GEN_TOP((piVar5[2] + 0xe1))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar3[1]));
          if (piVar3 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00a96f78;
      }
LAB_00a96ef4: ;
      *(undefined1 *)(piVar3 + 0x38) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0xe0))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xe0))) = 0;
      piVar6 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
    }
    else {
      iVar4 = *piVar5;
      if (*((char *)GEN_TOP((iVar4 + 0xe0))) == '\0') goto LAB_00a96ef4;
      if (piVar6 == ((int *)GEN_TOP(*piVar3))) {
        F_00a8b140(param_1 GEN_EDX_ARG,piVar3);
        piVar6 = piVar3;
      }
      *((undefined1 *)GEN_TOP((piVar6[1] + 0xe0))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar6[1] + 4))) + 0xe0))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar6[1] + 4)));
      piVar5 = ((int *)GEN_TOP(piVar3[2]));
      piVar3[2] = *piVar5;
      if (*((char *)GEN_TOP((*piVar5 + 0xe1))) == '\0') {
        *((int * PTR32 *)GEN_TOP((*piVar5 + 4))) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4))) = piVar5;
      }
      else {
        piVar2 = ((int *)GEN_TOP(piVar3[1]));
        if (piVar3 == ((int *)GEN_TOP(*piVar2))) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00a96f78: ;
      piVar3[1] = (int)piVar5;
    }
    cVar1 = *((char *)GEN_TOP((piVar6[1] + 0xe0)));
  } while( true );
}

/* ref: FUN_00a96fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a96fb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa96fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00a93680(param_5 + 0x18 GEN_EDX_FWD);
    F_0042c880(param_5 + 3 GEN_EDX_ARG);
    F_00429760(param_5,0x74,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
      }
      goto LAB_00a9702b;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00a9702b;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00a9702b: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x70)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x70))) == '\0') {
        *(undefined1 *)(piVar5 + 0x1c) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x71))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar3 + 4))) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar3;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x71))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a971bd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x70))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x71))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar4 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar4;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x70))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x71))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a971bd;
      }
      *(undefined1 *)(piVar5 + 0x1c) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x70))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x70))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x70)));
  } while( true );
}

/* ref: FUN_00a971f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a971f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa971f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_0095c5e0((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
  }
  else if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a9740d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a9740d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00a97440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa97440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a96910(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00a97460 */
GEN_OWN_GS GEN_FRAME uint F_00a97460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa97460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3);
  (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
  (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,param_3 + 0x5c);
  (*(undefined4 *)(gen_frame + 0xb0)) = *((undefined4 *)GEN_TOP((param_3 + 0xb0)));
  F_00a92a70(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,param_3 + 0xb4);
  F_00a92a70(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG,param_3 + 0xc4);
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a95ec0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_00a920d0(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a97510 */
GEN_OWN GEN_FRAME unsigned int F_00a97510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa97510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a95ec0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a97530 */
GEN_OWN GEN_FRAME unsigned int F_00a97530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa97530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_00a93d20(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
  }
  return;
}

/* ref: FUN_00a97560 */
GEN_OWN GEN_FRAME unsigned int F_00a97560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa97560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a969d0(param_2,param_3);
  return;
}

/* ref: FUN_00a97580 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a97580(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa97580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    uVar1 = F_00a93db0(param_1 + 4 GEN_EDX_ARG,param_2 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a975b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a975b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa975b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00a95fb0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a975d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a975d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa975d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * this_00;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x54)));
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != puVar1) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *puVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
    *puVar1 = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a97620 */
GEN_OWN GEN_FRAME uint F_00a97620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa97620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[2] = param_3[2];
    uVar1 = F_00a93db0(param_2 + 4 GEN_EDX_ARG,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a97650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa97650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a976a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a976a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa976a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  undefined * pvVar10;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xe1))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00910a90(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar8 = ((int *)GEN_TOP(*piVar5));
  if (*((char *)GEN_TOP(((int)piVar8 + 0xe1))) == '\0') {
    piVar9 = piVar8;
    if ((*((char *)GEN_TOP((piVar5[2] + 0xe1))) == '\0') && (piVar9 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar5)) {
      piVar8[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar5;
      piVar8 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar5[2]))) {
        piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar9 + 0xe1))) == '\0') {
          piVar9[1] = (int)piVar8;
        }
        *piVar8 = (int)piVar9;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar5[2];
        *((int * PTR32 *)GEN_TOP((piVar5[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar5) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar5[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar5) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar5[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x38];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x38))) = (char)piVar5[0x38];
      *(char *)(piVar5 + 0x38) = (char)iVar1;
      goto LAB_00a977df;
    }
  }
  else {
    piVar9 = ((int *)GEN_TOP(piVar5[2]));
  }
  piVar8 = ((int *)GEN_TOP(piVar5[1]));
  if (*((char *)GEN_TOP(((int)piVar9 + 0xe1))) == '\0') {
    piVar9[1] = (int)piVar8;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar5) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar9;
  }
  else if (((int *)GEN_TOP(*piVar8)) == piVar5) {
    *piVar8 = (int)piVar9;
  }
  else {
    piVar8[2] = (int)piVar9;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar5) {
    piVar6 = piVar8;
    if (*((char *)GEN_TOP(((int)piVar9 + 0xe1))) == '\0') {
      piVar6 = ((int *)GEN_TOP(F_00910a40(piVar9)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar6;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar5) {
    if (*((char *)GEN_TOP(((int)piVar9 + 0xe1))) == '\0') {
      uVar7 = F_00a86dd0(piVar9);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar7;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar8;
    }
  }
LAB_00a977df: ;
  if ((char)piVar5[0x38] == '\x01') {
    if (piVar9 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar6 = piVar8;
        if ((char)piVar9[0x38] != '\x01') break;
        piVar8 = ((int *)GEN_TOP(*piVar6));
        if (piVar9 == piVar8) {
          piVar8 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar8[0x38] == '\0') {
            *(undefined1 *)(piVar8 + 0x38) = 1;
            *(undefined1 *)(piVar6 + 0x38) = 0;
            F_00a8d8c0(this GEN_EDX_ARG,piVar6);
            piVar8 = ((int *)GEN_TOP(piVar6[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar8 + 0xe1))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar8 + 0xe0))) != '\x01') || (*((char *)GEN_TOP((piVar8[2] + 0xe0))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar8[2] + 0xe0))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar8 + 0xe0))) = 1;
                *(undefined1 *)(piVar8 + 0x38) = 0;
                F_00a8b140(this GEN_EDX_ARG,piVar8);
                piVar8 = ((int *)GEN_TOP(piVar6[2]));
              }
              *(char *)(piVar8 + 0x38) = (char)piVar6[0x38];
              *(undefined1 *)(piVar6 + 0x38) = 1;
              *((undefined1 *)GEN_TOP((piVar8[2] + 0xe0))) = 1;
              F_00a8d8c0(this GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00a978ec: ;
            *(undefined1 *)(piVar8 + 0x38) = 0;
          }
        }
        else {
          if ((char)piVar8[0x38] == '\0') {
            *(undefined1 *)(piVar8 + 0x38) = 1;
            *(undefined1 *)(piVar6 + 0x38) = 0;
            F_00a8b140(this GEN_EDX_ARG,piVar6);
            piVar8 = ((int *)GEN_TOP(*piVar6));
          }
          if (*((char *)GEN_TOP(((int)piVar8 + 0xe1))) == '\0') {
            if ((*((char *)GEN_TOP((piVar8[2] + 0xe0))) == '\x01') && (*((char *)GEN_TOP((*piVar8 + 0xe0))) == '\x01'))
            goto LAB_00a978ec;
            if (*((char *)GEN_TOP((*piVar8 + 0xe0))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar8[2] + 0xe0))) = 1;
              *(undefined1 *)(piVar8 + 0x38) = 0;
              F_00a8d8c0(this GEN_EDX_ARG,piVar8);
              piVar8 = ((int *)GEN_TOP(*piVar6));
            }
            *(char *)(piVar8 + 0x38) = (char)piVar6[0x38];
            *(undefined1 *)(piVar6 + 0x38) = 1;
            *((undefined1 *)GEN_TOP((*piVar8 + 0xe0))) = 1;
            F_00a8b140(this GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar8 = ((int *)GEN_TOP(piVar6[1]));
        piVar9 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar9 + 0x38) = 1;
  }
  pvVar10 = ((undefined *)GEN_TOP(piVar5[0x34]));
  if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = ((undefined *)GEN_TOP(piVar5[0x35]));
    for (; pvVar10 != pvVar3; pvVar10 = ((undefined *)GEN_TOP(((int)pvVar10 + 0x11c)))) {
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar10 + 0xbc))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar10 + 0x60))) GEN_EDX_ARG);
      F_0042c880(pvVar10 GEN_EDX_ARG);
    }
    iVar1 = piVar5[0x34];
    iVar4 = piVar5[0x36];
    F_00429760(iVar1,((iVar4 - iVar1) / 0x11c) * 0x11c,800);
  }
  piVar5[0x34] = 0;
  piVar5[0x35] = 0;
  piVar5[0x36] = 0;
  pvVar10 = ((undefined *)GEN_TOP(piVar5[0x30]));
  if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = ((undefined *)GEN_TOP(piVar5[0x31]));
    for (; pvVar10 != pvVar3; pvVar10 = ((undefined *)GEN_TOP(((int)pvVar10 + 0x11c)))) {
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar10 + 0xbc))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar10 + 0x60))) GEN_EDX_ARG);
      F_0042c880(pvVar10 GEN_EDX_ARG);
    }
    iVar1 = piVar5[0x30];
    iVar4 = piVar5[0x32];
    F_00429760(iVar1,((iVar4 - iVar1) / 0x11c) * 0x11c,800);
  }
  piVar5[0x30] = 0;
  piVar5[0x31] = 0;
  piVar5[0x32] = 0;
  F_0042c880(piVar5 + 0x1a GEN_EDX_ARG);
  F_0042c880(piVar5 + 3 GEN_EDX_ARG);
  F_00429760(piVar5,0xe4,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a97ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa97ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_00a968a0(iVar1,*((undefined4 *)GEN_TOP((iVar1 + 4))),param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((iVar1 + 4))) = uVar2;
  **((uint * PTR32 *)GEN_TOP((uVar2 + 4))) = uVar2;
  return uVar2;
}

/* ref: FUN_00a97b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa97b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  uVar3 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      iVar2 = piVar4[0x19];
      piVar1 = ((int *)GEN_TOP(*piVar4));
      if (iVar2 != 0) {
        F_00429760(iVar2,((piVar4[0x1b] - iVar2) / 0x34) * 0x34,800);
      }
      piVar4[0x19] = 0;
      piVar4[0x1a] = 0;
      piVar4[0x1b] = 0;
      F_0042c880(piVar4 + 4 GEN_EDX_ARG);
      uVar5 = F_00429760(piVar4,0x78,800);
      uVar3 = (uint)uVar5;
      piVar4 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return uVar3;
}

/* ref: FUN_00a97b90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a97b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa97b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * pvVar5;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0xe1)));
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00a97b90(this GEN_EDX_FWD,((int *)GEN_TOP(piVar4[2])));
    piVar2 = ((int *)GEN_TOP(*piVar4));
    pvVar5 = ((undefined *)GEN_TOP(piVar4[0x34]));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(piVar4[0x35]));
      for (; pvVar5 != pvVar3; pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 0x11c)))) {
        F_0042c880(((undefined *)GEN_TOP(((int)pvVar5 + 0xbc))) GEN_EDX_ARG);
        F_0042c880(((undefined *)GEN_TOP(((int)pvVar5 + 0x60))) GEN_EDX_ARG);
        F_0042c880(pvVar5 GEN_EDX_ARG);
      }
      F_00429760(piVar4[0x34],((piVar4[0x36] - piVar4[0x34]) / 0x11c) * 0x11c,800);
    }
    piVar4[0x34] = 0;
    piVar4[0x35] = 0;
    piVar4[0x36] = 0;
    pvVar5 = ((undefined *)GEN_TOP(piVar4[0x30]));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(piVar4[0x31]));
      for (; pvVar5 != pvVar3; pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 0x11c)))) {
        F_0042c880(((undefined *)GEN_TOP(((int)pvVar5 + 0xbc))) GEN_EDX_ARG);
        F_0042c880(((undefined *)GEN_TOP(((int)pvVar5 + 0x60))) GEN_EDX_ARG);
        F_0042c880(pvVar5 GEN_EDX_ARG);
      }
      F_00429760(piVar4[0x30],((piVar4[0x32] - piVar4[0x30]) / 0x11c) * 0x11c,800);
    }
    piVar4[0x30] = 0;
    piVar4[0x31] = 0;
    piVar4[0x32] = 0;
    F_0042c880(piVar4 + 0x1a GEN_EDX_ARG);
    F_0042c880(piVar4 + 3 GEN_EDX_ARG);
    F_00429760(piVar4,0xe4,800);
    piVar4 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0xe1)));
  }
  return;
}

/* ref: FUN_00a97d20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a97d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa97d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x71)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a97d20(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00a93680(piVar3 + 0x18 GEN_EDX_ARG);
    F_0042c880(piVar3 + 3 GEN_EDX_ARG);
    F_00429760(piVar3,0x74,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x71)));
  }
  return;
}

/* ref: FUN_00a97d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa97d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * this_00;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *this_00 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  if (this_00 != param_2) {
    F_00a93680(this_00 GEN_EDX_ARG);
    *this_00 = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a97de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a97de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa97de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x71))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_009283d0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x71))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) = (char)piVar3[0x1c];
      *(char *)(piVar3 + 0x1c) = (char)iVar1;
      goto LAB_00a97efa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00912c80(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x71))) == '\0') {
      uVar5 = F_00a883e0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00a97efa: ;
  if ((char)piVar3[0x1c] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1c] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_00a8bf20(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x70))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x70))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
                *(undefined1 *)(piVar6 + 0x1c) = 0;
                F_00a8bf80(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
              *(undefined1 *)(piVar4 + 0x1c) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              F_00a8bf20(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00a97fb8: ;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_00a8bf80(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x71))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x70))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01'))
            goto LAB_00a97fb8;
            if (*((char *)GEN_TOP((*piVar6 + 0x70))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x70))) = 1;
              *(undefined1 *)(piVar6 + 0x1c) = 0;
              F_00a8bf20(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x70))) = 1;
            F_00a8bf80(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1c) = 1;
  }
  F_00a93680(piVar3 + 0x18 GEN_EDX_ARG);
  F_0042c880(piVar3 + 3 GEN_EDX_ARG);
  F_00429760(piVar3,0x74,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a98050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa98050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_00a886d0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9816a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00a88630(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar4 = F_00a88610(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_00a9816a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c0c0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8c120(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              F_00a8c0c0(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00a98228: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c120(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01'))
            goto LAB_00a98228;
            if (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8c0c0(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
            F_00a8c120(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0095c5e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])));
  F_00429760(piVar6[5],0x18,800);
  F_00429760(piVar6,0x24,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a982d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a982d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa982d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x21)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_00a982d0(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_0095c5e0(piVar4 + 4 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[5])),((undefined4 *)GEN_TOP(piVar4[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  return;
}

/* ref: FUN_00a98340 */
GEN_OWN_GS GEN_FRAME uint F_00a98340(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa98340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  undefined4 * this;
  undefined4 * puVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  puVar1 = ((undefined4 *)GEN_TOP(F_00a93d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3)));
  uVar2 = F_0042cbc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar2);
  this = ((undefined4 *)GEN_TOP(((int)param_1 + 0x54)));
  *this = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  if (this != puVar1) {
    F_00a93680(this GEN_EDX_ARG);
    *this = *puVar1;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = puVar1[1];
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00a93680(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a983d0 */
GEN_OWN GEN_FRAME uint F_00a983d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa983d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a96910(param_1 GEN_EDX_ARG,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00a983f0 */
GEN_OWN GEN_FRAME uint F_00a983f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa983f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0095c5e0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_00a98420 */
GEN_OWN GEN_FRAME uint F_00a98420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa98420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a934c0(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a98430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined * this_00;
  byte local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xe1)));
  local_8 = 1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar3 = local_8;
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      bVar3 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 3);
    }
    else {
      bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_ARG,this_00);
      bVar3 = bVar3 == 0;
    }
    if (bVar3 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0xe1)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00a96d70(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a88e60(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00a96d70(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00a920d0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xd0))) GEN_EDX_ARG);
  F_00a920d0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x68))) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0xe4,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a98560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[2]) + 3;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00a96d70(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    if (bVar3 != 0) {
      F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    bVar3 = F_0042c7c0(((undefined *)GEN_TOP((piVar1[2] + 0xc))) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00a88e60(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0xe1))) == '\0') {
          F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[1]) + 3 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00910a90(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0xe1))) == '\0') {
          F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a96d70(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00a98430(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a98710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x16c, 4, 4);
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined * this_00;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar5 = ((undefined4 *)GEN_TOP(puVar4[1]));
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  bVar3 = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x160)) = this;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x164)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x164)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x164)), 1, 3),1);
  while (cVar1 == '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0x15c)) = puVar5;
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar5 + 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa987b3));
      F_0042cbc0(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_FWD,puVar5 + 3);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = this_00;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa987bf));
      F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,this_00);
      (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x108));
      (*(undefined4 *)(gen_frame + 0x4c)) = 0xa987cd;
      F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)));
      F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
      bVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                           (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                           (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                           (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                           (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78))
                           ,(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),
                           (*(undefined4 * PTR32 *)(gen_frame + 0x98)),*(int *)&(*(undefined1 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa987f6));
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa987fe));
      F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = this_00;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa98755));
      F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,this_00);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar5 + 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa98761));
      F_0042cbc0(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,puVar5 + 3);
      (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0xb4));
      (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98772;
      F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
      F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)));
      bVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                           (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                           (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                           (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                           (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78))
                           ,(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),
                           (*(undefined4 * PTR32 *)(gen_frame + 0x98)),*(int *)&(*(undefined1 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa98795));
      F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa987a0));
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      bVar3 = bVar3 == 0;
    }
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x164)) + 0)) = bVar3;
    (*(undefined4 *)(gen_frame + 0x164)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x164)), 1, 3),bVar3);
    if (bVar3 == 0) {
      puVar5 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x15c));
    cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar4;
  if (bVar3 != 0) {
    if (puVar4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x160)) + 4)))))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP((*(int *)&gen_args[1])));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = puVar4;
      *(int *)&(*(undefined1 *)(gen_frame + 0x9c)) = 1;
      goto LAB_00a98835;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9885a));
    F_00a88f00(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = this_00;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa98866));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,this_00);
  puVar5 = puVar2 + 3;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar5;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0xa98875));
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,puVar5);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x108));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98883;
  F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)));
  F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
  bVar3 = F_00a67e30((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c))
                       ,(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                       (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),*(int *)&(*(undefined1 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),
                       (*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
  (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(CONCAT13(bVar3,GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 0, 3))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa988ad));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa988b5));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[2]) + 3)))) == '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa988d4));
    F_00a93680(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x60))) GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa988db));
    F_0042c880(this_00 GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0x320));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x74));
    *(int *)&(*(undefined1 *)(gen_frame + 0x9c)) = (*(int *)&gen_args[1]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = ((undefined4 *)GEN_TOP(0xa988eb));
    F_00429760((*(int *)&gen_args[1]),0x74,800);
    *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP((*(int *)&gen_args[1])));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = puVar4;
  *(int *)&(*(undefined1 *)(gen_frame + 0x9c)) = (*(undefined4 *)(gen_frame + 0x164));
LAB_00a98835: ;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP((*(int *)&gen_args[1])));
  (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = &(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x94)) = 0xa9883e;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = puVar4;
  puVar4 = ((undefined4 *)GEN_TOP(F_00a96fb0((*(undefined * PTR32 *)(gen_frame + 0x160)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(undefined1 *)(gen_frame + 0x9c)),puVar4,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar4;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a98900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  byte bVar5;
  undefined4 * puVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar1 = (*(int * PTR32 *)&gen_args[2]) + 3;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    (*(int * PTR32 *)(gen_frame + 0xa4)) = (*(int * PTR32 *)&gen_args[2]);
    (*(int * PTR32 *)(gen_frame + 0xa0)) = piVar2;
    (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x1));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x94)) = 0xa98927;
    F_00a96fb0(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar2,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar2))) {
    (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[1]) + 3;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98947;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,piVar1);
    bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar5 != 0) {
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[1]);
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x1));
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa98973;
      F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar4);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar2) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((piVar2[2] + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98993;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,piVar1);
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
    bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar5 != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)));
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0xa0)) = ((int *)GEN_TOP(uVar3));
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa989c5;
      F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,uVar3,piVar4);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[1]) + 3;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa989db;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,piVar1);
    bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar5 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)(gen_frame + 0xa4)) = ((int *)GEN_TOP(0xa989ff));
      F_00a88f00(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98a0a;
      F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,piVar1);
      F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
      bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                           (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                           (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                           (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                           (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                           (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4))
                          );
      if (bVar5 != 0) {
        (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar4;
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x71))) == '\0') {
          (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[1]);
          (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x1));
          (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
          (*(undefined4 *)(gen_frame + 0x94)) = 0xa98a58;
          F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar4);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[2]);
        (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
        (*(undefined4 *)(gen_frame + 0x94)) = 0xa98a41;
        F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar4);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x50)) = piVar1;
    (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98a74;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,piVar1);
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
    bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                         (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                         (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                         (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int * PTR32 *)(gen_frame + 0xa4)));
    if (bVar5 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)(gen_frame + 0xa4)) = ((int *)GEN_TOP(0xa98a9e));
      F_009283d0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if ((*(int * PTR32 *)&gen_args[2]) != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
        (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)&gen_args[2]) + 3;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0xa98ab4;
        F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
        F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,piVar1);
        bVar5 = F_00a8a560((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                             (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                             (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0x50)),
                             (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),
                             (*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),
                             (*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(undefined1 * PTR32 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0xa0)),
                             (*(int * PTR32 *)(gen_frame + 0xa4)));
        if (bVar5 == 0) goto LAB_00a98b09;
      }
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar4;
      if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x71))) == '\0') {
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[2]);
        (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x1));
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
        (*(undefined4 *)(gen_frame + 0x94)) = 0xa98afe;
        F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar4);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)&gen_args[1]);
      (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)GEN_TOP(0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)&gen_args[0]);
      (*(undefined4 *)(gen_frame + 0x94)) = 0xa98ae8;
      F_00a96fb0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar4);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
LAB_00a98b09: ;
  (*(int * PTR32 *)(gen_frame + 0xa4)) = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0xa0)) = piVar4;
  (*(undefined1 * PTR32 *)(gen_frame + 0x9c)) = ((undefined1 *)(gen_frame + 0xb4));
  (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = ((undefined4 *)GEN_TOP(0xa98b17));
  puVar6 = ((undefined4 *)GEN_TOP(F_00a98710(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)),piVar4,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar6;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a98b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98b30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa98b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00a934c0(param_5 + 5 GEN_EDX_FWD);
    F_00429760(param_5,0x28,0x191);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
      }
      goto LAB_00a98ba6;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00a98ba6;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00a98ba6: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x24)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x24))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x24))) == '\0') {
        *(undefined1 *)(piVar5 + 9) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x24))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x25))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar3 + 4))) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar3;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x24))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x25))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a98d31: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x24))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x25))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar4 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar4;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x24))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x25))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a98d31;
      }
      *(undefined1 *)(piVar5 + 9) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x24))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x24))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x24)));
  } while( true );
}

/* ref: FUN_00a98d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa98d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_0095c5e0((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x2c,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
  }
  else if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x28)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x28))) == '\0') {
        *(undefined1 *)(piVar5 + 10) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x29))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x29))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a98f7d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x28))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x29))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x29))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a98f7d;
      }
      *(undefined1 *)(piVar5 + 10) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x28)));
  } while( true );
}

/* ref: FUN_00a98fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a98fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa98fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar4 = true;
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) < (uint)puVar3[3];
      }
      else {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
      }
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00a971f0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,iVar1)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a88fe0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP((iVar1 + 0xc)))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a971f0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(int *)&gen_args[1]),puVar3,iVar1)));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0095c5e0(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x14))),0x18,800);
  F_00429760(iVar1,0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a990b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a990b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa990b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x38) = 0;
  F_00a97460((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a99100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa99100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x38) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00a95ec0(puVar1 + 3 GEN_EDX_ARG,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a99150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa99150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_1);
    F_00a93d20(puVar1 + 0x18 GEN_EDX_ARG,param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a991b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a991b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa991b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a99200 */
GEN_OWN_GS GEN_FRAME uint F_00a99200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa99200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  puVar1 = ((undefined4 *)GEN_TOP((param_3 + 0x54)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0x54)) != puVar1) {
    F_00a93680(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 0x58)));
    uVar3 = *((undefined4 *)GEN_TOP((param_3 + 0x5c)));
    (*(undefined4 *)(gen_frame + 0x54)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x58)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x5c)) = uVar3;
    *puVar1 = 0;
    *((undefined4 *)GEN_TOP((param_3 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP((param_3 + 0x5c))) = 0;
  }
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00a93d20(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  }
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00a992a0 */
GEN_OWN GEN_FRAME uint F_00a992a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa992a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]) + 1;
  (*(undefined4 *)(gen_frame + 0x0)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 5) = 1;
  *((undefined1 *)GEN_TOP(((int)puVar3 + 0x15))) = 1;
  F_00a92ec0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,puVar1);
  (*(undefined4 *)(gen_frame + 0x18)) = puVar2[6];
  (*(undefined4 *)(gen_frame + 0x14)) = puVar2[5];
  if ((*(undefined * PTR32 *)&gen_args[1]) != ((undefined *)GEN_TOP(0x0))) {
    F_00a95fb0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_0095c5e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  uVar4 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),0x18,800);
  return (uint)uVar4;
}

/* ref: FUN_00a99340 */
GEN_OWN GEN_FRAME uint F_00a99340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa99340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[2] = param_3[2];
    uVar1 = F_00a93db0(param_2 + 4 GEN_EDX_ARG,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00a99370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa99370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar1 + 3) = *param_1;
    *(undefined2 *)(puVar1 + 4) = param_1[2];
    F_00a93db0(puVar1 + 5 GEN_EDX_ARG,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a993d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a993d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa993d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x21))) == '\0') {
    puVar1 = ((uint *)GEN_TOP(F_004296a0(0x24,0,800)));
    *puVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((uint *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 8) = 0;
    F_00a969d0(puVar1 + 3,param_1 + 3);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 8);
    local_8 = puVar3;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a993d0(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(*param_1)),(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a993d0(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(param_1[2])),(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a99470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa99470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined4 *)this = 0;
  piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 8)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = this;
  if (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 8)))) {
    do {
      piVar6[0x18] = 0;
      iVar2 = piVar6[0x31];
      if (piVar6[0x30] != iVar2) {
        this_00 = ((undefined *)GEN_TOP(F_00a8c970(iVar2,iVar2,piVar6[0x30],(*(undefined4 * PTR32 *)(gen_frame + 0x4)))));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(piVar6[0x31]));
        if (this_00 != ((undefined *)GEN_TOP(piVar6[0x31]))) {
          do {
            F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0xbc))) GEN_EDX_ARG);
            F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x60))) GEN_EDX_ARG);
            F_0042c880(this_00 GEN_EDX_ARG);
            this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x11c)));
            this = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
          } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0xc)));
        }
        piVar6[0x31] = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
      }
      puVar5 = ((undefined4 *)GEN_TOP((piVar6[0x19] + piVar6[0x18])));
      if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00a976a0(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar6)));
        piVar6 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else if (*((char *)GEN_TOP(((int)piVar6 + 0xe1))) == '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)puVar3 + 0xe1))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0xe1)));
          puVar5 = ((undefined4 *)GEN_TOP(*puVar3));
          while (piVar6 = puVar3, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0xe1)));
            puVar3 = puVar5;
            puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0xe1)));
          puVar4 = ((undefined4 *)GEN_TOP(piVar6[1]));
          puVar3 = piVar6;
          while ((puVar5 = puVar4, piVar6 = puVar5, cVar1 == '\0' &&
                 (puVar3 == ((undefined4 *)GEN_TOP(puVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0xe1)));
            puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
            puVar3 = puVar5;
          }
        }
      }
    } while (piVar6 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
    *(undefined4 *)this = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    return (uint)puVar5;
  }
  *(uint *)this = *((uint *)GEN_TOP(((int)this + 0xc)));
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00a995a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a995a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa995a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined4 *)this = 0;
  piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 8)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = this;
  if (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 8)))) {
    do {
      piVar6[0x2f] = 0;
      piVar6[0x19] = 0;
      iVar2 = piVar6[0x35];
      if (piVar6[0x34] != iVar2) {
        this_00 = ((undefined *)GEN_TOP(F_00a8c970(iVar2,iVar2,piVar6[0x34],(*(undefined4 * PTR32 *)(gen_frame + 0x4)))));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(piVar6[0x35]));
        if (this_00 != ((undefined *)GEN_TOP(piVar6[0x35]))) {
          do {
            F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0xbc))) GEN_EDX_ARG);
            F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x60))) GEN_EDX_ARG);
            F_0042c880(this_00 GEN_EDX_ARG);
            this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x11c)));
            this = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
          } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0xc)));
        }
        piVar6[0x35] = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
      }
      puVar5 = ((undefined4 *)GEN_TOP((piVar6[0x19] + piVar6[0x18])));
      if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00a976a0(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar6)));
        piVar6 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else if (*((char *)GEN_TOP(((int)piVar6 + 0xe1))) == '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)puVar3 + 0xe1))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0xe1)));
          puVar5 = ((undefined4 *)GEN_TOP(*puVar3));
          while (piVar6 = puVar3, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0xe1)));
            puVar3 = puVar5;
            puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0xe1)));
          puVar4 = ((undefined4 *)GEN_TOP(piVar6[1]));
          puVar3 = piVar6;
          while ((puVar5 = puVar4, piVar6 = puVar5, cVar1 == '\0' &&
                 (puVar3 == ((undefined4 *)GEN_TOP(puVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0xe1)));
            puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
            puVar3 = puVar5;
          }
        }
      }
    } while (piVar6 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
    *(undefined4 *)this = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    return (uint)puVar5;
  }
  *(uint *)this = *((uint *)GEN_TOP(((int)this + 0xc)));
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00a996d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a996d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa996d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a97b90(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a99700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a99700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa99700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a97d20(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a99730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a99730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa99730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a97b00(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a99750 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a99750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa99750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x29)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_00a99750(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_0095c5e0(piVar4 + 4 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[5])),((undefined4 *)GEN_TOP(piVar4[5])));
    F_00429760(piVar4[5],0x18,800);
    F_00429760(piVar4,0x2c,800);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x29)));
  }
  return;
}

/* ref: FUN_00a997c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a997c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa997c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a97b90(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0xe1))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0xe1))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0xe1)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0xe1)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0xe1)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0xe1)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a976a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa99890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a97d20(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x71))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x71))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x71)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x71)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x71)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a97de0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x29))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_00a884e0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x29))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x29))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 10))) = (char)piVar6[10];
      *(char *)(piVar6 + 10) = (char)iVar1;
      goto LAB_00a99a6a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00a88160(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
      uVar4 = F_00a88140(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_00a99a6a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[10] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[10] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bb80(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x29))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x28))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x28))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x28))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x28))) = 1;
                *(undefined1 *)(piVar5 + 10) = 0;
                F_00a8bbe0(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x28))) = 1;
              F_00a8bb80(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00a99b28: ;
            *(undefined1 *)(piVar5 + 10) = 0;
          }
        }
        else {
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bbe0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x29))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x28))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x28))) == '\x01'))
            goto LAB_00a99b28;
            if (*((char *)GEN_TOP((*piVar5 + 0x28))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x28))) = 1;
              *(undefined1 *)(piVar5 + 10) = 0;
              F_00a8bb80(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x28))) = 1;
            F_00a8bbe0(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0095c5e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])));
  F_00429760(piVar6[5],0x18,800);
  F_00429760(piVar6,0x2c,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a99bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x25))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00928170(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x25))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[9];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 9))) = (char)piVar3[9];
      *(char *)(piVar3 + 9) = (char)iVar1;
      goto LAB_00a99cea;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00912b90(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
      uVar5 = F_00a88320(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00a99cea: ;
  if ((char)piVar3[9] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[9] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a8bd30(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x24))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x24))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x24))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x24))) = 1;
                *(undefined1 *)(piVar6 + 9) = 0;
                F_00a882c0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 9) = (char)piVar4[9];
              *(undefined1 *)(piVar4 + 9) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x24))) = 1;
              F_00a8bd30(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00a99da8: ;
            *(undefined1 *)(piVar6 + 9) = 0;
          }
        }
        else {
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a882c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x24))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x24))) == '\x01'))
            goto LAB_00a99da8;
            if (*((char *)GEN_TOP((*piVar6 + 0x24))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x24))) = 1;
              *(undefined1 *)(piVar6 + 9) = 0;
              F_00a8bd30(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 9) = (char)piVar4[9];
            *(undefined1 *)(piVar4 + 9) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x24))) = 1;
            F_00a882c0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 9) = 1;
  }
  F_00a934c0(piVar3 + 5 GEN_EDX_ARG);
  F_00429760(piVar3,0x28,0x191);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a99e30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a99e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa99e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this_00;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x25)));
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00a99e30(this GEN_EDX_FWD,((int *)GEN_TOP(piVar4[2])));
    this_00 = ((undefined *)GEN_TOP(piVar4[5]));
    piVar2 = ((int *)GEN_TOP(*piVar4));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(piVar4[6]));
      for (; this_00 != pvVar3; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x88)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(piVar4[5],((piVar4[7] - piVar4[5]) / 0x88) * 0x88,0x191);
    }
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    F_00429760(piVar4,0x28,0x191);
    piVar4 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x25)));
  }
  return;
}

/* ref: FUN_00a99ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a99ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa99ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a982d0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a99f20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a99f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa99f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00a982d0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = uVar1;
  }
  return;
}

/* ref: FUN_00a99f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa99f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x38) = 0;
  F_00a97460((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98430(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a99fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a99fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa99fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x38) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00a95ec0(puVar1 + 3 GEN_EDX_ARG,param_3);
  }
  F_00a98560(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9a040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_3);
    F_00a93d20(puVar1 + 0x18 GEN_EDX_ARG,param_3 + 0x54);
  }
  F_00a98900(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x25))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < *(ushort *)(puVar2 + 3);
      }
      else {
        local_8 = *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= *(ushort *)(puVar2 + 3);
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x25))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00a98b30(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a891e0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00a98b30(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00a934c0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x28,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9a1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar4 = true;
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x29))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) < (uint)puVar3[3];
      }
      else {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
      }
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x29))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00a98d60(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,iVar1)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a89120(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP((iVar1 + 0xc)))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a98d60(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(int *)&gen_args[1]),puVar3,iVar1)));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0095c5e0(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x14))),0x18,800);
  F_00429760(iVar1,0x2c,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9a2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00a971f0(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    if (*((uint *)GEN_TOP((piVar1[2] + 0xc))) < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,piVar1[2],(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00a88fe0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[1])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00a886d0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x21))) != '\0') {
          F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a971f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00a98fb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9a400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar1 + 3) = *param_1;
    *(undefined2 *)(puVar1 + 4) = param_1[2];
    F_00a93db0(puVar1 + 5 GEN_EDX_ARG,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a9a500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9a500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x25))) == '\0') {
    puVar1 = ((uint *)GEN_TOP(F_004296a0(0x28,0,0x191)));
    *puVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((uint *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 9) = 0;
    if (puVar1 + 3 != ((uint *)GEN_TOP(0x0))) {
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 4);
      F_00a93db0(puVar1 + 5 GEN_EDX_ARG,param_1 + 5);
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 9);
    local_8 = puVar3;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x25))) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a9a500(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(*param_1)),(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a9a500(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(param_1[2])),(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a9a5b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9a5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar7 = F_00a993d0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))),iVar2);
  *((uint *)GEN_TOP((iVar2 + 4))) = uVar7;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  piVar4 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar4 + 0x21))) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*piVar6 + 0x21)));
    piVar4 = piVar6;
    piVar6 = ((int *)GEN_TOP(*piVar6));
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 8)));
  cVar1 = *((char *)GEN_TOP((iVar5 + 0x21)));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 8))) + 0x21)));
    iVar2 = iVar5;
    iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9a670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9a670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9a670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)this = 0;
  F_00a93600(((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 8))),
               *((undefined4 *)GEN_TOP(((int)this + 0xc))));
  F_00a97d20(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x1c))))) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00a9a6d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a9a6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x164, 12, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0xe1)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(puVar2[1]));
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 3 GEN_EDX_FWD,(*(undefined * PTR32 *)(gen_frame + 0x4)));
    if (bVar4 == 0) {
      puVar5 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0))));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x0))[2]));
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar5;
    cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xe1)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,puVar2 + 3), bVar4 == 0)) {
    return (uint)(puVar2 + 0x18);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  F_00a962b0(&(*(undefined4 *)(gen_frame + 0xdc)) GEN_EDX_ARG);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0xe0));
  (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0xdc));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xe4)));
  (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0x138));
  F_00a92a70(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x13c)));
  F_00a92a70(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14c)));
  puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
  *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar5[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar5 + 0x38) = 0;
  if (puVar5 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00a95ec0(puVar5 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  }
  F_00a98560(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),puVar2,puVar5);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  F_00a920d0(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x14c)) GEN_EDX_ARG);
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x13c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
  return (int)pvVar3 + 0x60;
}

/* ref: FUN_00a9a8b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a9a8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9a8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x18c, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x184)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x188));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(param_1));
  (*(uint *)(gen_frame + 0xa0)) = 0xa9a8d1;
  uVar2 = F_00a8b750(this GEN_EDX_FWD,param_1);
  (*(uint *)(gen_frame + 0x118)) = uVar2;
  if (uVar2 != *((uint *)GEN_TOP(((int)this + 4)))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    (*(uint *)(gen_frame + 0xa0)) = 0xa9a8e7;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG,uVar2 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(param_1));
    (*(uint *)(gen_frame + 0xa0)) = 0xa9a8f3;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,param_1);
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x130));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa9a901;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
    bVar1 = F_00a67e30((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                         (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                         (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                         (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),
                         (*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90))
                         ,(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x98)),(*(uint * PTR32 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
    (*(byte *)(gen_frame + 0x11f)) = bVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a92b));
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a933));
    F_0042c880(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
    if ((*(byte *)(gen_frame + 0x11f)) == 0) {
      (*(undefined4 *)(gen_frame + 0xb0)) = 0xa9a9ff;
      return (*(uint *)(gen_frame + 0x118)) + 0x60;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(param_1));
  (*(uint *)(gen_frame + 0xa0)) = 0xa9a945;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,param_1);
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a956));
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x174)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0x320));
  (*(uint *)(gen_frame + 0xa0)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x9c)) = ((uint *)GEN_TOP(0x74));
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0xa9a975;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 0x1c) = 0;
  if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)((undefined1 *)(gen_frame + 0x120));
    (*(uint *)(gen_frame + 0xa0)) = 0xa9a99f;
    F_0042cbc0(puVar3 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x120)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = &(*(undefined4 *)(gen_frame + 0x174));
    (*(uint *)(gen_frame + 0xa0)) = 0xa9a9ab;
    F_00a93d20(puVar3 + 0x18 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x174)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = puVar3;
  (*(uint *)(gen_frame + 0xa0)) = (*(uint *)(gen_frame + 0x118));
  (*(uint * PTR32 *)(gen_frame + 0x9c)) = &(*(uint *)(gen_frame + 0x118));
  (*(undefined4 *)(gen_frame + 0x98)) = 0xa9a9bb;
  F_00a98900(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x118)),(*(uint *)(gen_frame + 0x118)),puVar3);
  uVar2 = (*(uint *)(gen_frame + 0x118));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a9c6));
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x174)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a9ce));
  F_0042c880(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = ((undefined4 *)GEN_TOP(0xa9a9d6));
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x108)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0xb0)) = 0xa9a9e6;
  return uVar2 + 0x60;
}

/* ref: FUN_00a9aa10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9aa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9aa10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a99750(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a9aa40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9aa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9aa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a997c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9aa60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9aa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9aa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a99890(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9aa80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9aa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9aa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a99750(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x29))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x29))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x29)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x29)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a99950(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ab40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ab40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9ab40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a9aa80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9ab60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9ab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9ab60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a99e30(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a9ab90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ab90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a982d0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a98050(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ac50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ac50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar2 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x21))) = 1;
  if (this != param_1) {
    F_00a982d0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a9ace0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ace0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9ace0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98710(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ad40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9ad40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_2);
  F_00a9a1a0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ada0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9ada0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar1 + 3) = *param_2;
    *(undefined2 *)(puVar1 + 4) = param_2[2];
    F_00a93db0(puVar1 + 5 GEN_EDX_ARG,param_2 + 4);
  }
  F_00a9a0b0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ae10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_3);
  F_00a9a2a0(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9ae70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ae70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ae70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar7 = F_00a9a500(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))),iVar2);
  *((uint *)GEN_TOP((iVar2 + 4))) = uVar7;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  piVar4 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar4 + 0x25))) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((*piVar4 + 0x25)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*piVar6 + 0x25)));
    piVar4 = piVar6;
    piVar6 = ((int *)GEN_TOP(*piVar6));
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 8)));
  cVar1 = *((char *)GEN_TOP((iVar5 + 0x25)));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 8))) + 0x25)));
    iVar2 = iVar5;
    iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9aef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9aef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9aef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a997c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9af30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9af30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a99890(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9af70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9af70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9aa80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9afb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9afb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa9afb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00a8df70(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00a8ecb0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00a9aa80(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00a9b010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[0]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar5;
  if (*((char *)GEN_TOP(((int)puVar5[1] + 0x21))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[0])) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar3;
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[0]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 5) = 1;
  *((undefined1 *)GEN_TOP(((int)puVar3 + 0x15))) = 1;
  uVar4 = *puVar1;
  F_00a91460(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x18,0,800);
    puVar3[5] = uVar4;
    *((uint *)GEN_TOP(uVar4)) = uVar4;
    *((undefined4 *)GEN_TOP((puVar3[5] + 4))) = puVar3[5];
    *((undefined4 *)GEN_TOP((puVar3[5] + 8))) = puVar3[5];
    *((undefined1 *)GEN_TOP((puVar3[5] + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((puVar3[5] + 0x15))) = 1;
    F_00a92ec0(puVar3 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  }
  F_00a9a2a0(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[0]);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),0x18,800);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),0x18,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9b1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9b1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a99e30(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x25))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x25))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x25)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x25)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x25)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x25)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a99bd0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9b260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a9ab90(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9b280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x21))) = 1;
  F_00a9a5b0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a997c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a99890(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9aa80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a99890(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1c))),0x74,800);
  uVar1 = F_00a93680(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a9b3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a997c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9b410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9b440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9b440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9b470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9b570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a9b1a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9b590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9ab90(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a9ac50(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b5f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a9b640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b640(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a9b690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b690(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a9b6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x25))) = 1;
  F_00a9ae70(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9b730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x21))) = 1;
  F_00a9a5b0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9b780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0xe4,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xe0))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xe1))) = 1;
  *(undefined4 *)this = 0;
  F_00a97b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 8))))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9b800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  uVar1 = F_004296a0(0x74,0,800);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x71))) = 1;
  *(undefined4 *)this = 0;
  F_00a93600(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 8))),
               *((undefined4 *)GEN_TOP(((int)this + 0xc))));
  F_00a97d20(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x1c))))) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9b8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9b1a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9b8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9ab90(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9b920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9ab90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9b9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00a9ac50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a9b9c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9b9c0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa9b9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9ba00(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa9ba00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9ba40(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa9ba40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = 0;
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ba80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x25))) = 1;
  F_00a9ae70(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a9bad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x21))) = 1;
  F_00a9a5b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a9bb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9bb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9b1a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9bbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9bbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9ab90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9bbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9bbf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00a9ac50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a9bc10 */
GEN_OWN GEN_FRAME uint F_00a9bc10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_2 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = 0;
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9bc50 */
GEN_OWN GEN_FRAME uint F_00a9bc50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_2 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = 0;
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9bc90 */
GEN_OWN GEN_FRAME uint F_00a9bc90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_00492c50(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)param_2 + 0x54))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = 0;
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a9bcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bcd0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_00a9ab90(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 8))),0x24,800);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a9bd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x25))) = 1;
  F_00a9ae70(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a9bd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9bd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9bd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x21))) = 1;
  F_00a9a5b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a9be10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9be10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9be10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9b1a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9be50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9be50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9be50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9b1a0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9be90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9be90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9be90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    F_0042c880(this_00 GEN_EDX_ARG);
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

/* ref: FUN_00a9bef0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9bef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9bef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    F_0042c880(this_00 GEN_EDX_ARG);
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

/* ref: FUN_00a9bf50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9bf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    F_0042c880(this_00 GEN_EDX_ARG);
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

/* ref: FUN_00a9bfb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9bfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9bfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    uVar3 = F_0042c880(this_00 GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9c010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    uVar3 = F_0042c880(this_00 GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9c070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
    F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
    F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    uVar3 = F_0042c880(this_00 GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c0d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9c0d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  uVar5 = param_1 & 0xffff;
  if ((uint)piVar2[4] <= uVar5) {
    F_00494140(piVar2 GEN_EDX_ARG,uVar5 + 1);
  }
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((((int *)GEN_TOP(*piVar2)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*piVar2)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  uVar5 = piVar2[3] + uVar5;
  if (((piVar3 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar3)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar2 = *((int * PTR32 *)GEN_TOP(*piVar3)), piVar2 == ((int *)GEN_TOP(0x0)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar5) {
    uVar5 = uVar5 - *((uint *)GEN_TOP((iVar4 + 8)));
  }
  uVar5 = F_00490f90(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar5 * 4))) GEN_EDX_ARG,param_2);
  return uVar5;
}

/* ref: FUN_00a9c160 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9c160(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * this;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  uVar5 = param_1 & 0xffff;
  if ((uint)piVar2[4] <= uVar5) {
    F_00494140(piVar2 GEN_EDX_ARG,uVar5 + 1);
  }
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((((int *)GEN_TOP(*piVar2)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*piVar2)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  uVar5 = piVar2[3] + uVar5;
  if (((piVar3 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar3)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar2 = *((int * PTR32 *)GEN_TOP(*piVar3)), piVar2 == ((int *)GEN_TOP(0x0)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar5) {
    uVar5 = uVar5 - *((uint *)GEN_TOP((iVar4 + 8)));
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar5 * 4)));
  if (((undefined4 *)GEN_TOP(puVar1[1])) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      this = *((undefined * PTR32 *)GEN_TOP(puVar1[1]));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = *param_2;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  return (uint)param_2;
}

/* ref: FUN_00a9c220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9c220(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c220u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00a9ab90(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x24,800);
  return (uint)uVar2;
}

/* ref: FUN_00a9c260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9c260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00a9ae70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00a9c2c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a9c2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[3] = 0;
    uVar1 = F_004296a0(0x24,0,800);
    param_1[2] = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[2];
    *((undefined4 *)GEN_TOP((param_1[2] + 8))) = param_1[2];
    *((undefined1 *)GEN_TOP((param_1[2] + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((param_1[2] + 0x21))) = 1;
    F_00a9a5b0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
  }
  return;
}

/* ref: FUN_00a9c320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00a9ae70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a9c380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9b1a0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9c3c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
      F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      F_0042c880(this_00 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a9c480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
      F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      F_0042c880(this_00 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a9c540 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9c540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_FWD);
      F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      F_0042c880(this_00 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a9c600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9c600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00a9ae70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00a9c660 */
GEN_OWN GEN_FRAME uint F_00a9c660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00a9ab90(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x24,800);
  return (uint)uVar2;
}

/* ref: FUN_00a9c690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c690(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_00a9b1a0(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))),
               *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8))));
  F_00429760(*((undefined4 *)GEN_TOP((param_1 + 8))),0x28,0x191);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00a9c6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = *((undefined1 *)GEN_TOP((param_1 + 0x70)));
  return (uint)this;
}

/* ref: FUN_00a9c710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = *((undefined1 *)GEN_TOP((param_1 + 0x70)));
  return (uint)this;
}

/* ref: FUN_00a9c740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = *((undefined1 *)GEN_TOP((param_1 + 0x70)));
  return (uint)this;
}

/* ref: FUN_00a9c770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa9c770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_00a9ab90((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])));
    F_00429760(piVar4[5],0x24,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
  }
  else if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a9c98d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a9c98d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00a9c9c0 */
GEN_OWN GEN_FRAME unsigned int F_00a9c9c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9c9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a9c2c0(param_2,param_3);
  return;
}

/* ref: FUN_00a9c9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9c9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x25))) = 1;
  F_00a9ae70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a9ca40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ca40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9ca40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9ca70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9caa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9caa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9caa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_004949f0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9cad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9cad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a9c3c0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9cb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a9c480(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9cb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9cb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a9c540(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9cb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa9cb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x21)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_00a9cb60(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_00a9ab90(piVar4 + 4 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[5])),((undefined4 *)GEN_TOP(piVar4[5])));
    F_00429760(piVar4[5],0x24,800);
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  return;
}

/* ref: FUN_00a9cbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9cbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_00a88660(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9ccea;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00a88430(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar4 = F_00a88410(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_00a9ccea: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bfe0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8c040(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              F_00a8bfe0(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00a9cda8: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c040(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01'))
            goto LAB_00a9cda8;
            if (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bfe0(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
            F_00a8c040(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9ab90((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])));
  F_00429760(piVar6[5],0x24,800);
  F_00429760(piVar6,0x24,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9ce50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9ce50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ce50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00a9b1a0(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9ce90 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a9ce90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ce90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_004949f0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((param_2 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x70))) = *((undefined1 *)GEN_TOP((param_2 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9ced0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a9ced0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_004949f0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((param_2 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x70))) = *((undefined1 *)GEN_TOP((param_2 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9cf10 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a9cf10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9cf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_004949f0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((param_2 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x70))) = *((undefined1 *)GEN_TOP((param_2 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9cf50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9cf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar4 = true;
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) < (uint)puVar3[3];
      }
      else {
        bVar4 = *((uint *)GEN_TOP((iVar1 + 0xc))) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
      }
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00a9c770(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,iVar1)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a88f70(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP((iVar1 + 0xc)))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a9c770(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(int *)&gen_args[1]),puVar3,iVar1)));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00a9ab90(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x14))),0x24,800);
  F_00429760(iVar1,0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9d050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9d0a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a9d0a0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 6) = 0;
    uVar1 = F_004296a0(0x28,0,0x191);
    *(uint *)(param_1 + 4) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 4))) = *(int *)(param_1 + 4);
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(int *)(param_1 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x25))) = 1;
    F_00a9ae70(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return;
}

/* ref: FUN_00a9d100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9d100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9d100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a9cb60(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a9d130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a9cb60(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a9cbd0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9d1f0 */
GEN_OWN GEN_FRAME unsigned int F_00a9d1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_004949f0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x6c))) = *((undefined4 *)GEN_TOP((param_3 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_2 + 0x70))) = *((undefined1 *)GEN_TOP((param_3 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9d230 */
GEN_OWN GEN_FRAME unsigned int F_00a9d230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9d230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_004949f0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x6c))) = *((undefined4 *)GEN_TOP((param_3 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_2 + 0x70))) = *((undefined1 *)GEN_TOP((param_3 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9d270 */
GEN_OWN GEN_FRAME unsigned int F_00a9d270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9d270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_004949f0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x6c))) = *((undefined4 *)GEN_TOP((param_3 + 0x6c)));
    *((undefined1 *)GEN_TOP(((int)param_2 + 0x70))) = *((undefined1 *)GEN_TOP((param_3 + 0x70)));
  }
  return;
}

/* ref: FUN_00a9d2b0 */
GEN_OWN GEN_FRAME uint F_00a9d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d2b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00a9b1a0(((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((*(int *)&gen_args[1]) + 8))));
  uVar2 = F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 8))),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9d2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9d2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00a9c770(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    if (*((uint *)GEN_TOP((piVar1[2] + 0xc))) < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,piVar1[2],(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00a88f70(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[1])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00a88660(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x21))) != '\0') {
          F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00a9c770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00a9cf50(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9d440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa9d440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)this + 8)))) {
    F_00a9b1a0((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[5])));
    F_00429760(piVar4[5],0x28,0x191);
    F_00429760(piVar4,0x24,0x191);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) + 1;
  (*(int * PTR32 *)&gen_args[3])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1] = (*(int * PTR32 *)&gen_args[3]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(int * PTR32 *)&gen_args[3]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
  }
  else if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = (*(int * PTR32 *)&gen_args[3]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 4))) = (int)(*(int * PTR32 *)&gen_args[3]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a9d65d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a9d65d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00a9d690 */
GEN_OWN GEN_FRAME unsigned int F_00a9d690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9d690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a9d0a0(param_2,param_3);
  return;
}

/* ref: Client::Game::UI::Journal::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d6b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a7fe60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::UI::QuestTodoList::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  param_1[0x70] = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540(param_1 + 0x6a GEN_EDX_FWD);
  F_00429760(param_1[0x6a],8,800);
  param_1[0x6a] = 0;
  F_00a93740(param_1 + 0x66 GEN_EDX_ARG);
  F_00a71520(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::UI::QuestUI::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d750(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a80310(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a9d780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00a92130(this GEN_EDX_FWD,1);
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + uVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    F_004949f0(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
    uVar1 = (uint)*((byte *)GEN_TOP((param_1 + 0x70)));
    *((byte *)GEN_TOP(((int)this_00 + 0x70))) = *((byte *)GEN_TOP((param_1 + 0x70)));
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9d800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00a922a0(this GEN_EDX_FWD,1);
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + uVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    F_004949f0(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
    uVar1 = (uint)*((byte *)GEN_TOP((param_1 + 0x70)));
    *((byte *)GEN_TOP(((int)this_00 + 0x70))) = *((byte *)GEN_TOP((param_1 + 0x70)));
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d880 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9d880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9d880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00a92410(this GEN_EDX_FWD,1);
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + uVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    F_004949f0(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c)));
    uVar1 = (uint)*((byte *)GEN_TOP((param_1 + 0x70)));
    *((byte *)GEN_TOP(((int)this_00 + 0x70))) = *((byte *)GEN_TOP((param_1 + 0x70)));
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d900 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x21)));
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  while (cVar1 == '\0') {
    iVar2 = piVar4[2];
    F_00a9d900(this GEN_EDX_FWD,((int *)GEN_TOP(iVar2)));
    piVar3 = ((int *)GEN_TOP(*piVar4));
    F_00a9b1a0(piVar4 + 4 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(piVar4[5])),((undefined4 *)GEN_TOP(piVar4[5])));
    F_00429760(piVar4[5],0x28,0x191);
    F_00429760(piVar4,0x24,0x191);
    piVar4 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  return;
}

/* ref: FUN_00a9d970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9d970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a9d130(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9d990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9d990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[1]);
  F_00928100(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(*piVar6));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    piVar7 = piVar5;
    if ((*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar6[2]))) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar6[2];
        *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar6[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9daaa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar6[2]));
  }
  piVar5 = ((int *)GEN_TOP(piVar6[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar5)) == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))))) == piVar6) {
    piVar3 = piVar5;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar3 = ((int *)GEN_TOP(F_00912c00(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) = piVar3;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4)));
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar6) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar4 = F_00a88350(piVar7);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 8))) = uVar4;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar5;
    }
  }
LAB_00a9daaa: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = ((int *)GEN_TOP(*piVar6));
        if (piVar7 == piVar5) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bd90(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar5 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar5[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8bdf0(this_00 GEN_EDX_ARG,piVar5);
                piVar5 = ((int *)GEN_TOP(piVar6[2]));
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              F_00a8bd90(this_00 GEN_EDX_ARG,piVar6);
              break;
            }
LAB_00a9db68: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bdf0(this_00 GEN_EDX_ARG,piVar6);
            piVar5 = ((int *)GEN_TOP(*piVar6));
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar5[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01'))
            goto LAB_00a9db68;
            if (*((char *)GEN_TOP((*piVar5 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar5[2] + 0x20))) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bd90(this_00 GEN_EDX_ARG,piVar5);
              piVar5 = ((int *)GEN_TOP(*piVar6));
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar5 + 0x20))) = 1;
            F_00a8bdf0(this_00 GEN_EDX_ARG,piVar6);
            break;
          }
        }
        piVar5 = ((int *)GEN_TOP(piVar6[1]));
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9b1a0((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[5])));
  F_00429760(piVar6[5],0x28,0x191);
  F_00429760(piVar6,0x24,0x191);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9dc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9dc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_3);
  F_00a9d2e0(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9dc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9dc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar4 = true;
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        bVar4 = *((ushort *)GEN_TOP((iVar1 + 0xc))) < *(ushort *)(puVar3 + 3);
      }
      else {
        bVar4 = *((ushort *)GEN_TOP((iVar1 + 0xc))) <= *(ushort *)(puVar3 + 3);
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
      }
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00a9d440(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,iVar1)));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a89180(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((ushort *)GEN_TOP((iVar1 + 0xc)))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a9d440(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(int *)&gen_args[1]),puVar3,iVar1)));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00a9b1a0(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),**((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP((iVar1 + 0x14))),0x28,0x191);
  F_00429760(iVar1,0x24,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a9dd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9dd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9ddd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9ddd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9ddd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a9d900(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a9de00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9de00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa9de00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[0]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar5;
  if (*((char *)GEN_TOP(((int)puVar5[1] + 0x21))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[0])) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar3;
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[0]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 8) = 1;
  *((undefined1 *)GEN_TOP(((int)puVar3 + 0x21))) = 1;
  uVar4 = *puVar1;
  F_00a9ac50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,800)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x24,0,800);
    puVar3[5] = uVar4;
    *((uint *)GEN_TOP(uVar4)) = uVar4;
    *((undefined4 *)GEN_TOP((puVar3[5] + 4))) = puVar3[5];
    *((undefined4 *)GEN_TOP((puVar3[5] + 8))) = puVar3[5];
    *((undefined1 *)GEN_TOP((puVar3[5] + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((puVar3[5] + 0x21))) = 1;
    F_00a9a5b0(puVar3 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  }
  F_00a9d2e0(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[0]);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),0x24,800);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),0x24,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9df90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9df90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9df90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9d130(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9dfd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9dfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00a9d900(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a9d990(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9e090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9e090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x24,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_2);
  F_00a9dc70(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9e0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9d130(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9e170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a9dfd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a9e190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int local_c;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x21))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  uVar1 = F_004296a0(0x2c,0,800);
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((int *)GEN_TOP(((int)this + 0x14)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 8))) = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x29))) = 1;
  iVar2 = 1;
  do {
    iVar2 = iVar2 - 1;
    *((undefined4 *)GEN_TOP(((int)this + iVar2 * 8 + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar2 * 8 + 0x2c))) = 0;
  } while (-1 < iVar2);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
  local_c = 0x1d;
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x94)));
  do {
    *puVar3 = 0;
    puVar4[-0x18] = 0;
    F_0042b630(puVar4 - 0x17 GEN_EDX_ARG);
    puVar3 = puVar3 + 0x1c;
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 0x1c;
    local_c = local_c - 1;
  } while (-1 < local_c);
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0xd50)));
  local_c = 0xf;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xdb4)));
  do {
    *puVar4 = 0;
    puVar3[-0x18] = 0;
    F_0042b630(puVar3 - 0x17 GEN_EDX_ARG);
    puVar4 = puVar4 + 0x1c;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 0x1c;
    local_c = local_c - 1;
  } while (-1 < local_c);
  *((undefined4 *)GEN_TOP(((int)this + 0x1454))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1458))) = 0;
  F_0042b630((int)this + 0x145c GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x14b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14b8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14d0))) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *((uint *)GEN_TOP(((int)this + 0x14cc))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14cc))) + 4))) = *((int *)GEN_TOP(((int)this + 0x14cc)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x14d8)));
  *puVar3 = 0;
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,800)));
  *puVar3 = puVar4;
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar3)) = puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x14dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14fc))) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *((uint *)GEN_TOP(((int)this + 0x14f8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14f8))) + 4))) = *((int *)GEN_TOP(((int)this + 0x14f8)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x1504)));
  *puVar3 = 0;
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,800)));
  *puVar3 = puVar4;
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar3)) = puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1508))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1510))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1514))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1528))) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *((uint *)GEN_TOP(((int)this + 0x1524))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1524))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1524)));
  return (uint)this;
}

/* ref: FUN_00a9e3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x1524))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1524))),0x78,800);
  F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x1504))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1504))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0x1504))) = 0;
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14f8))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14f8))),0x78,800);
  F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x14d8))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14d8))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0x14d8))) = 0;
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14cc))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14cc))),0x78,800);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14b0)));
  if (iVar2 != 0) {
    F_00429760(iVar2,((*((int *)GEN_TOP(((int)this + 0x14b8))) - iVar2) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14b8))) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x145c))) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0xf));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x14ac)));
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 - 0x31 GEN_EDX_ARG);
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
    puVar3 = puVar3 - 0x1c;
  } while (-1 < (int)pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1d));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xdac)));
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 - 0x31 GEN_EDX_ARG);
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
    puVar3 = puVar3 - 0x1c;
  } while (-1 < (int)pvVar1);
  F_00a9aa80(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),0x2c,800);
  F_00a9d130(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar4 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,800);
  return (uint)uVar4;
}

/* ref: FUN_00a9e5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9dfd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a9dfd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x24,0,0x191);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x21))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  uVar1 = F_004296a0(0x18,0,0x191);
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((int *)GEN_TOP(((int)this + 0x14)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 8))) = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00a9e700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9e700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a90060(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),0x18,0x191);
  F_00a9dfd0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e760 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9e760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb02c))) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  F_00b9d730(((undefined *)GEN_TOP(((int)this + 0x92f4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x92e8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x92f0))) != ((undefined *)GEN_TOP(0x0))) {
    F_00414620(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x92f0))) GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0x92e8))));
  }
  F_00bc6480(((undefined *)GEN_TOP(((int)this + 0x8ba8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b80))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b7c))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b70))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *((undefined4 *)GEN_TOP(((int)this + 0x8948))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0(((undefined4 *)GEN_TOP(((int)this + 0x8948))) GEN_EDX_ARG);
  F_00a9e3a0(((undefined *)GEN_TOP(((int)this + 0x7418))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x73bc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7360))) GEN_EDX_ARG);
  F_00b9f8b0(((undefined *)GEN_TOP(((int)this + 0x70ec))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6ec4))) = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x7084))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540(((undefined *)GEN_TOP(((int)this + 0x706c))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x706c))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0x706c))) = 0;
  F_00a93740(((undefined *)GEN_TOP(((int)this + 0x705c))) GEN_EDX_ARG);
  F_00a71520(((undefined *)GEN_TOP(((int)this + 0x6ec4))) GEN_EDX_ARG);
  F_00a80310(((undefined *)GEN_TOP(((int)this + 0x5ef8))) GEN_EDX_ARG);
  F_00a7fe60(((undefined *)GEN_TOP(((int)this + 0x2448))) GEN_EDX_ARG);
  F_00a72970(((undefined *)GEN_TOP(((int)this + 0x237c))) GEN_EDX_ARG);
  F_00a84440(((undefined *)GEN_TOP(((int)this + 0x2344))) GEN_EDX_ARG);
  F_00a71e70(((undefined *)GEN_TOP(((int)this + 0x1950))) GEN_EDX_ARG);
  F_00a72450(((undefined *)GEN_TOP(((int)this + 0x1904))) GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1938)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x1940))) - iVar1 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1938))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x193c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1940))) = 0;
  F_00a72750(((undefined *)GEN_TOP(((int)this + 0x15e8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1540))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  return;
}

/* ref: FUN_00a9e8f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9e8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7954));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1540))) = (*(undefined * PTR32 (*)[2])REFP(0x10e7880));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x15e8))) = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  *((undefined4 *)GEN_TOP(((int)this + 0x15ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15f4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x15fc))) = 0;
  F_00a91f10(((undefined4 *)GEN_TOP(((int)this + 0x15ec))) GEN_EDX_FWD,0x10);
  *((undefined4 *)GEN_TOP(((int)this + 0x1600))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1604))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1608))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1610))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1614))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1618))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x161c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1620))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1624))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1628))),0,0x100);
  *((undefined4 *)GEN_TOP(((int)this + 0x1728))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x172c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1734))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1738))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x173c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1740))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1928))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x192c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1938))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x193c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1940))) = 0;
  iVar1 = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)this + iVar1 + 0x194c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4 + 0x1904))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4 + 0x1910))) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  F_00a71dd0(((undefined *)GEN_TOP(((int)this + 0x1950))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x2344))) = 0;
  F_00a9e680(((undefined *)GEN_TOP(((int)this + 0x2348))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x2368))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x236c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2370))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2374))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2378))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x237c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2380))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2384))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2388))) = 0;
  F_0042b630((int)this + 0x2390 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x23e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23f0))) = 0;
  F_00a91df0(((undefined *)GEN_TOP(((int)this + 0x2380))) GEN_EDX_ARG,0xc9);
  *((undefined4 *)GEN_TOP(((int)this + 0x23f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2414))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2438))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23fc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2404))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2408))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x240c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2410))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2418))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x241c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2420))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2424))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2428))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x242c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2430))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2434))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x243c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2440))) = 0;
  F_00a7fc50(((undefined *)GEN_TOP(((int)this + 0x2448))) GEN_EDX_ARG);
  F_00a80250(((undefined *)GEN_TOP(((int)this + 0x5ef8))) GEN_EDX_ARG);
  F_00a80110(((undefined *)GEN_TOP(((int)this + 0x6ec4))) GEN_EDX_ARG);
  F_00b9fec0(((undefined *)GEN_TOP(((int)this + 0x70ec))) GEN_EDX_ARG);
  F_0042b630((int)this + 0x7360 GEN_EDX_ARG);
  F_0042b630((int)this + 0x73bc GEN_EDX_ARG);
  F_00a9e190(((undefined *)GEN_TOP(((int)this + 0x7418))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x8948))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0(((undefined4 *)GEN_TOP(((int)this + 0x8948))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b70))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *((undefined1 *)GEN_TOP(((int)this + 0x8b74))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8b78))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x8b76))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b7c))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8b80))) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *((undefined4 *)GEN_TOP(((int)this + 0x8b84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8ba0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x8ba4))) = 0;
  F_00bc65a0(((undefined *)GEN_TOP(((int)this + 0x8ba8))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x92ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92f0))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x92e8))) = (*(undefined * PTR32 (*)[2])REFP(0x10e7960));
  F_00b9d840(((undefined *)GEN_TOP(((int)this + 0x92f4))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb02c))) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  *((undefined4 *)GEN_TOP(((int)this + 0xb030))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb034))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb038))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb03c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb042))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb040))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb044))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb048))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb04c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb050))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb056))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb054))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb058))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb05c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb060))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb064))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb06a))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb068))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb06c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb070))) = 0;
  return (uint)this;
}

/* ref: FUN_00a9ec90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ec90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ec90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x8e))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x8e))) = *((byte *)GEN_TOP((in_ecx + 0x8e))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ecb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ecb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ecb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xb8))) = param_2;
  return;
}

/* ref: FUN_00a9ecd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ecd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ecd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xbc))) = param_2;
  return;
}

/* ref: FUN_00a9ecf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ecf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ecf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0xc4))) = param_2;
  uVar1 = F_00a60de0(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a9ed10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ed10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ed10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 200))) = param_2;
  return;
}

/* ref: FUN_00a9ed40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ed40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ed40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x90)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x90))) = *((byte *)GEN_TOP((in_ecx + 0x90))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ed60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ed60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ed60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x8c))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ed70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ed70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ed70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if ((double)param_2 < *(double *)&REFG(undefined, 0x10e8718)) {
    *((char *)GEN_TOP((in_ecx + 0x8d))) = (char)(int)param_2;
    return (int)param_2 & 0xff;
  }
  *((undefined1 *)GEN_TOP((in_ecx + 0x8d))) = 0xfa;
  return 0xfa;
}

/* ref: FUN_00a9edb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9edb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9edb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x7c))) = param_2;
  return param_2;
}

/* ref: FUN_00a9edd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9edd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9edd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0x8e)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0x8e))) = *((byte *)GEN_TOP((in_ecx + 0x8e))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ee00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ee00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9ee00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return;
}

/* ref: FUN_00a9ee70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ee70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ee70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ee80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ee80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ee80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00a9eeb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9eeb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9eeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfRequestFreeControlRotating::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9eec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9eec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a9eef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9eef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9eef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ef00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x364))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ef10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ef10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x368))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ef40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ef40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x422))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ef70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ef70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x421))) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9ef80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00a9efd0 */
GEN_OWN GEN_FRAME float10 F_00a9efd0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa9efd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00a9eff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9eff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9eff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)*((byte *)GEN_TOP((in_ecx + 0x8a)));
  if ((uVar1 == 2) && (*((int *)GEN_TOP((in_ecx + 0x2ed4))) == 1)) {
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: FUN_00a9f010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_FWD,*param_1,param_1[1],param_1[2]);
  return uVar1;
}

/* ref: FUN_00a9f040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f040(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9f040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0xb0)));
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61890(param_1 GEN_EDX_FWD,param_2);
  }
  if ((*((int *)GEN_TOP((param_1 + 0x2e00))) != 0) && (*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0')) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x2e00))) + 0x48))))
                      (*((int * PTR32 *)GEN_TOP((param_1 + 0x2e00))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f110(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9f110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0xe0)));
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61820(param_1 GEN_EDX_FWD,param_2);
  }
  if ((*((int *)GEN_TOP((param_1 + 0x2e00))) != 0) && (*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0')) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x2e00))) + 0x18))))
                      (*((int * PTR32 *)GEN_TOP((param_1 + 0x2e00))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint in_EAX = 0;
  undefined4 uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1684))) != ((int *)GEN_TOP(0x0))) {
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1684)));
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x168))))(piVar1 GEN_EDX_FWD,uVar3);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x164))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,0,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) >> 1 & 1));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x164))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,1,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) >> 2 & 1));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x164))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,2,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) >> 3 & 1));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x164))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,3,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) >> 4 & 1));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xec))) + 0x164))))
                       (*((int * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,4,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) >> 5 & 1)
                       );
    piVar1 = ((int *)GEN_TOP(((int)this + 0x1e60)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1684))) != ((int *)GEN_TOP(0x0))) {
        iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1684)));
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x168))))(piVar1 GEN_EDX_ARG,uVar3);
      }
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x164))))(piVar1 GEN_EDX_ARG,0,(uint)(*((byte *)GEN_TOP(((int)this + 0x1680))) & 1));
    }
  }
  return in_EAX;
}

/* ref: FUN_00a9f2a0 */
GEN_OWN GEN_FRAME unsigned int F_00a9f2a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a9f170(param_2 GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00a9f2c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9f2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (((param_2 != 0) && (*((char *)GEN_TOP((in_ecx + 0x2f03))) == '\x01')) &&
     (*((int *)GEN_TOP((param_2 + 0x74))) == *((int *)GEN_TOP((in_ecx + 0x2ed8))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a9f2f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9f2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 0x188)));
  if (((cVar1 != '\x05') && (cVar1 != '\x06')) && (cVar1 != '\a')) {
    return *((char *)GEN_TOP((param_1 * 0x7a0 + 0x1e45 + (int)this))) == '\0';
  }
  return (*((byte *)GEN_TOP((param_1 * 0x7a0 + 0x1e45 + (int)this))) & 0xfd) == 0;
}

/* ref: Global::SetLocalPlayer */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  REFG(void * PTR32, 0x1379694) = this;
  F_00afe350(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_FWD);
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00b6ffe0(REFG(int, 0x1375b90) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00a9f390 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00a9f390(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa9f390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: FUN_00a9f3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f3a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < 10) && (((*((byte *)GEN_TOP((in_ecx + 0x2dd3))) & 0x20) == 0 || (param_2 != 0)))) {
    return *((uint *)GEN_TOP((in_ecx + 0x2d90 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00a9f3d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9f3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xec)));
  if ((*((int *)GEN_TOP(((int)this + 0x2e00))) != 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar3 = 0xffffffff;
    uVar1 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this + 0x2e08))));
    puVar2 = ((ushort *)GEN_TOP(F_00ab2960(*((undefined4 *)GEN_TOP((uVar1 + 0x84))))));
    if ((char)puVar2[2] == '\x02') {
      uVar3 = 0x2ffff;
    }
    else if ((char)puVar2[2] == '\x03') {
      uVar3 = 0x1ffff;
    }
    F_006abd50(this_00 GEN_EDX_ARG,uVar3 & 0xffff0000 | (uint)*puVar2);
  }
  return;
}

/* ref: FUN_00a9f440 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_1 == *((byte *)GEN_TOP(((int)this + 0x1688)))) {
    return 1;
  }
  uVar1 = F_00ab21a0((uint)*((byte *)GEN_TOP(((int)this + 0x1688))));
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x45))) != '\0')) {
    return *((byte *)GEN_TOP((uVar1 + 0x3e))) == param_1;
  }
  return 0;
}

/* ref: FUN_00a9f490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = param_1;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x1e10)));
  iVar2 = 3;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD);
    piVar3 = piVar3 + 0x1e8;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  F_006a5ab0(((undefined *)GEN_TOP(((int)this + 0x1e10))) GEN_EDX_ARG,0,(int)this + 0x16c0,param_1);
  F_006a5ab0(((undefined *)GEN_TOP(((int)this + 0x25b0))) GEN_EDX_ARG,1,(int)this + 0x1e60,param_1);
  uVar1 = F_006a5ab0(((undefined *)GEN_TOP(((int)this + 0x2d50))) GEN_EDX_ARG,2,(int)this + 0x2600,param_1);
  return uVar1;
}

/* ref: FUN_00a9f510 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a9f510(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9f510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_1 - 8U < 8) {
                    
    switch((unsigned int)(uintptr_t)(param_1 - 8U)) {
    case 0: ;
      if (param_2 != '\0') {
        return 0x113c5;
      }
      break;
    case 1: ;
      if (param_2 == '\0') {
        return 0x11401;
      }
      break;
    case 3: ;
      if (param_2 == '\0') {
        return 0x114b5;
      }
      break;
    case 4: ;
      if (param_2 != '\0') {
        return 0x11555;
      }
      break;
    case 5: ;
      if (param_2 == '\0') {
        return 0x11591;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a9f5b0 */
GEN_OWN GEN_FRAME unsigned int F_00a9f5b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9f5b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  float * pfVar2;
  
  F_00a618b0(param_1 GEN_EDX_ARG,param_2);
  uVar1 = F_00ab2960(*((undefined4 *)GEN_TOP((param_1 + 0x2e98))));
  if (uVar1 != 0) {
    pfVar2 = ((float *)GEN_TOP(F_00ab2930(*((undefined4 *)GEN_TOP((param_1 + 0x2e9c))))));
    if (pfVar2 == ((float *)GEN_TOP(0x0))) {
      pfVar2 = ((float *)GEN_TOP(F_00ab2930(0)));
    }
    *((float *)GEN_TOP((param_1 + 0xc0))) = (float)((float10)*pfVar2 * (float10)param_2);
    *((float *)GEN_TOP((param_1 + 0xb8))) = pfVar2[2];
    *((float *)GEN_TOP((param_1 + 0xbc))) = pfVar2[3];
  }
  return 0;
}

/* ref: FUN_00a9f620 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9f620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return REFG(int, 0x1379694) == in_ecx;
}

/* ref: FUN_00a9f630 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9f630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  F_00ae6a20(in_ecx + 0x1b0 GEN_EDX_FWD);
  return;
}

/* ref: FUN_00a9f640 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9f640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9f640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005482c0(((undefined *)GEN_TOP(((int)this + 0x620))) GEN_EDX_FWD);
  return;
}

/* ref: FUN_00a9f650 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00a9f650(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9f650u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float10 fVar1;
  
  fVar1 = F_00ae90c0(param_1 + 0x1b0 GEN_EDX_FWD,param_2,param_3);
  return fVar1;
}

/* ref: FUN_00a9f670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f670(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xa9f670u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afe900(param_1 + 0x1b0 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_5);
  return uVar1;
}

/* ref: FUN_00a9f6d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f6d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xa9f6d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afcd60(param_1 + 0x1b0 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  return uVar1;
}

/* ref: FUN_00a9f750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f750(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa9f750u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afcdc0(param_1 + 0x1b0 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a9f7c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f7c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa9f7c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL(0x20, 0);
  undefined * this;
  uint uVar1;
  float fVar2;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[0]);
  (*(float *)(gen_frame + 0x4)) = (*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[2]);
  F_00afd7d0(((undefined *)GEN_TOP((param_1 + 0x1b0))) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),&(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  fVar2 = (*(float *)&gen_args[3]);
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e3540(this GEN_EDX_ARG,param_1,(undefined4)gen_fl2bits((*(float *)&gen_args[0])),
                       (undefined4)gen_fl2bits((*(float *)&gen_args[1])),(undefined4)gen_fl2bits((*(float *)&gen_args[2])),
                       (undefined4)gen_fl2bits(fVar2));
  return uVar1;
}

/* ref: FUN_00a9f850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f850(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9f850u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00afd950(((undefined *)GEN_TOP((param_1 + 0x1b0))) GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: FUN_00a9f870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f870(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa9f870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e79e4)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e79e4)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  uVar1 = F_00afd950(((undefined *)GEN_TOP((param_1 + 0x1b0))) GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00a9f960 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9f960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9f960u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00aebea0(in_ecx + 0x1b0 GEN_EDX_FWD,param_2,param_3);
  return;
}

/* ref: FUN_00a9f980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9f980(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa9f980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afdab0(param_1 + 0x1b0 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_5,param_6);
  return uVar1;
}

/* ref: FUN_00a9f9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9f9e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xa9f9e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00afe960(param_1 + 0x1b0 GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fa00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00afbbd0((int)this + 0x1b0 GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_00a9fa20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9fa20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9fa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x5d2))) = param_2;
  return param_2;
}

/* ref: FUN_00a9fa30 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fa30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x5d1)));
}

/* ref: FUN_00a9fa40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9fa40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9fa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x5d1))) = param_2;
  return param_2;
}

/* ref: FUN_00a9fa50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fa50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xa9fa50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00af98d0(param_1 + 0x1b0 GEN_EDX_FWD,param_2,param_3,0,0,0,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00a9fa80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fa80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa9fa80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00af6450(param_1 + 0x1b0 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,0,REFG(float, 0x10e79e4),0,
                       param_7,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fad0 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00a9fad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  fVar1 = F_00ae6fc0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return fVar1;
}

/* ref: FUN_00a9fae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00af67f0(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a9faf0 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00a9faf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9faf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  ushort uVar1;
  
  uVar1 = F_00ae7060(in_ecx + 0x1b0 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a9fb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fb00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9fb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae7070(in_ecx + 0x1b0 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00a9fb20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa9fb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*((char *)GEN_TOP(((int)this + 0x2e08))) != '\0') && (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2e00))) != ((undefined *)GEN_TOP(0x0)))) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2e00)));
  }
  uVar1 = F_00a608f0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + 0x30)));
  param_1[1] = *((undefined4 *)GEN_TOP((uVar1 + 0x34)));
  param_1[2] = *((undefined4 *)GEN_TOP((uVar1 + 0x38)));
  return (uint)param_1;
}

/* ref: FUN_00a9fba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9fba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00aec030(this,param_1);
  return uVar1;
}

/* ref: FUN_00a9fbc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fbc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ae70b0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a9fbd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a9fbd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  F_00ae70d0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return;
}

/* ref: FUN_00a9fbf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fbf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae6970(in_ecx + 0x1b0 GEN_EDX_FWD);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae8580(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fc10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fc10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00aebee0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00a9fc30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fc30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae85f0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00aebf40(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fc50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fc50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00aebfc0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fc60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0 GEN_EDX_FWD);
  if ((bVar1 == 0) || (bVar1 = 1, *((int *)GEN_TOP((in_ecx + 0x2f10))) != 1)) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00a9fca0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae87c0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fcc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a9fcc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87f0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fcd0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fcd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae8810(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fce0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae69a0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fcf0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fcf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae8680(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fd00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fd00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00ae69b0(in_ecx + 0x1b0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00a9fd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa9fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00afdcb0(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fd20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9fd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa9fd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  uint uVar1;
  undefined1 uVar2;
  
  F_005481e0((int)this + 0x620 GEN_EDX_FWD,(char)param_1,(char)param_2,(char)param_3);
  uVar2 = *((undefined1 *)GEN_TOP(((int)this + 0x188)));
  uVar1 = F_006b8c00();
  F_006e2b30(uVar1 GEN_EDX_ARG,param_1,param_2,param_3,uVar2);
  return;
}

/* ref: FUN_00a9fd60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((((*((char *)GEN_TOP(((int)this + 0x196))) != '\x01') || (*((int *)GEN_TOP(((int)this + 0x198))) != REFG(int, 0x1379690)))
      || (*((int *)GEN_TOP(((int)this + 0x19c))) != 0)) &&
     (((*((char *)GEN_TOP(((int)this + 0x196))) != '\x02' || (*((int *)GEN_TOP(((int)this + 0x198))) != REFG(int, 0x1338ac0))) ||
      (*((int *)GEN_TOP(((int)this + 0x19c))) != REFG(int, 0x1338ac4))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fdb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((char *)GEN_TOP(((int)this + 0x196))) != '\x01') ||
      ((*((int *)GEN_TOP(((int)this + 0x198))) == REFG(int, 0x1379690) && (*((int *)GEN_TOP(((int)this + 0x19c))) == 0)))) &&
     ((*((char *)GEN_TOP(((int)this + 0x196))) != '\x02' ||
      ((*((int *)GEN_TOP(((int)this + 0x198))) == REFG(int, 0x1338ac0) && (*((int *)GEN_TOP(((int)this + 0x19c))) == REFG(int, 0x1338ac4))
       ))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fe00 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00a9fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9fe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  uVar1 = 0xffff;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + 0x1688))))) {
  case 8: ;
  case 10: ;
  case 0xc: ;
    return 3;
  case 9: ;
    return (ushort)((*((byte *)GEN_TOP(((int)this + 0x2dd2))) & 8 | 0x10) >> 3);
  case 0xb: ;
    return (ushort)(((byte)~*((byte *)GEN_TOP(((int)this + 0x2dd2))) & 8 | 4) >> 2);
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
    uVar1 = (ushort)((*((byte *)GEN_TOP(((int)this + 0x2dd2))) & 8 | 4) >> 2);
  }
  return uVar1;
}

/* ref: FUN_00a9fe80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a9fe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa9fe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 6;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x165c)));
  do {
    if (*piVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0x1644))) = param_1;
      if (this != ((undefined *)GEN_TOP(0x0))) {
        uVar1 = F_00983120(param_1 GEN_EDX_FWD,(int)this + 0x180);
        return uVar1;
      }
      uVar1 = F_00983120(param_1 GEN_EDX_ARG,0);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: FUN_00a9ff10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a9ff10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa9ff10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 6;
  piVar2 = ((int *)GEN_TOP((in_ecx + 0x165c)));
  do {
    if (*piVar2 == 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00a9ff40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a9ff40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa9ff40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_2 != 0) {
    iVar2 = 4;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x1644 + iVar2 * 4)));
  if (iVar1 != 0) {
    if (param_3 == '\0') {
      F_009bc5d0(iVar1 GEN_EDX_FWD,0);
    }
    F_009bc530(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1644 + iVar2 * 4))) GEN_EDX_ARG,1);
    F_00983120(*((undefined4 *)GEN_TOP((param_1 + 0x1644 + iVar2 * 4))) GEN_EDX_ARG,0);
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x1644 + iVar2 * 4))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x2dd6 + param_1))) = 0;
  return;
}

/* ref: FUN_00a9ffd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a9ffd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa9ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  int iVar2;
  
  if (((param_2 != '\0') || (*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0')) ||
     (iVar2 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar2 = in_ecx;
  }
  bVar1 = F_005366b0(iVar2 + 0x680 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00aa0000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0000(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xaa0000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  int iVar1;
  uint uVar2;
  
  if (((param_6 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_005486f0(((undefined *)GEN_TOP((iVar1 + 0x940))) GEN_EDX_FWD,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00aa0040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0040(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(char param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xaa0040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(char param_8 = (char)gen_a7;)
  int iVar1;
  uint uVar2;
  
  if (((param_8 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00549500(iVar1 + 0x680 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}

/* ref: FUN_00aa0090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  F_0053c1a0((int)this + 0x680 GEN_EDX_FWD,param_1,(undefined1)param_2);
  uVar2 = F_005393f0((int)this + 0x940 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xa08))) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x2e08))) != '\0') && (uVar2 = 0, *((int *)GEN_TOP(((int)this + 0x2e00))) != 0)) {
    F_0053c1a0(*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x680 GEN_EDX_ARG,param_1,(undefined1)param_2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x2e00)));
    uVar2 = F_005393f0(iVar1 + 0x940 GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((iVar1 + 0xa08))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00aa0100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0053c1a0((int)this + 0x680 GEN_EDX_FWD,param_1,(undefined1)param_2);
  if ((*((char *)GEN_TOP(((int)this + 0x2e08))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x2e00))) != 0)) {
    uVar1 = F_0053c1a0(*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x680 GEN_EDX_ARG,param_1,(undefined1)param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_0053c1a0((int)this + 0x680 GEN_EDX_FWD,0,(undefined1)param_2);
  if ((*((char *)GEN_TOP(((int)this + 0x2e08))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x2e00))) != 0)) {
    F_0053c1a0(*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x680 GEN_EDX_ARG,0,(undefined1)param_2);
  }
  uVar1 = F_0053c1a0((int)this + 0x680 GEN_EDX_ARG,1,(undefined1)param_2);
  if ((*((char *)GEN_TOP(((int)this + 0x2e08))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x2e00))) != 0)) {
    uVar1 = F_0053c1a0(*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x680 GEN_EDX_ARG,1,(undefined1)param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa01c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00aa01c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaa01c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_005341f0(((undefined *)GEN_TOP(((int)this + 0x620))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00aa01d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa01d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa01d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0053c230(((undefined *)GEN_TOP(((int)this + 0x680))) GEN_EDX_FWD,param_1,param_2);
  if (*((int *)GEN_TOP(((int)this + 0x2e00))) != 0) {
    uVar1 = F_0053c230(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x680))) GEN_EDX_ARG,param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e00(iVar1 + 0x680 GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_00aa0250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e20(iVar1 + 0x680 GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_00aa0290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e40(iVar1 + 0x680 GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_00aa02d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa02d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa02d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00542ff0(((undefined *)GEN_TOP((iVar1 + 0x680))) GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_00aa0310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0310(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_0053c280(((undefined *)GEN_TOP((iVar1 + 0x680))) GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_00aa0350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_0053c3a0(iVar1 + 0x680 GEN_EDX_FWD,(undefined1)param_2);
  return uVar2;
}

/* ref: FUN_00aa0390 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa0390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  int iVar2;
  
  if (((param_3 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar2 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar2 = param_1;
  }
  bVar1 = F_00536680(((undefined *)GEN_TOP((iVar2 + 0x680))) GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: FUN_00aa03d0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00aa03d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa03d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    return (float10)*((float *)GEN_TOP((param_1 + 0x7ec + param_2 * 4)));
  }
  if ((*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0') && (*((int *)GEN_TOP((param_1 + 0x2e00))) != 0)) {
    return (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2e00))) + 0x7ec + param_2 * 4)));
  }
  return (float10)*((float *)GEN_TOP((param_1 + 0x7ec + param_2 * 4)));
}

/* ref: FUN_00aa0420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0420(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xaa0420u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  F_00531f10(param_1 + 0x680 GEN_EDX_FWD,param_2,param_3);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2e00)));
  if ((uVar1 != 0) && (*((char *)GEN_TOP((param_1 + 0x2e09))) == '\0')) {
    uVar1 = F_00531f10(uVar1 + 0x680 GEN_EDX_ARG,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00aa0470 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00aa0470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*((char *)GEN_TOP((in_ecx + 0x2e08))) == '\0') ||
     (iVar2 = *((int *)GEN_TOP((in_ecx + 0x2e00))), *((int *)GEN_TOP((in_ecx + 0x2e00))) == 0)) {
    iVar2 = in_ecx;
  }
  uVar3 = F_00531e00(iVar2 + 0x680 GEN_EDX_FWD,0);
  bVar1 = F_00ae8da0(in_ecx + 0x1b0 GEN_EDX_ARG,uVar3);
  if ((bVar1 != 0) &&
     (bVar4 = GEN_ISNAN(*((float *)GEN_TOP((in_ecx + 0xc4)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar4 != (bVar4 || *((float *)GEN_TOP((in_ecx + 0xc4))) == *(float *)&REFG(undefined, 0x1088114)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa04d0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00aa04d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa04d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    return (float10)*((float *)GEN_TOP((param_1 + 0x828 + param_2 * 4)));
  }
  if ((*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0') && (*((int *)GEN_TOP((param_1 + 0x2e00))) != 0)) {
    return (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2e00))) + 0x828 + param_2 * 4)));
  }
  return (float10)*((float *)GEN_TOP((param_1 + 0x828 + param_2 * 4)));
}

/* ref: FUN_00aa0520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0520(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xaa0520u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  uint uVar2;
  
  if (((param_4 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00531f50(iVar1 + 0x680 GEN_EDX_FWD,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00aa0560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa0560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x514))) = param_2;
  return param_2;
}

/* ref: FUN_00aa0570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa0570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x518))) = param_2;
  return param_2;
}

/* ref: FUN_00aa0580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0580(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa0580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  if (param_2 == '\0') {
    uVar1 = F_00ae6e80(((undefined *)GEN_TOP((param_1 + 0x1b0))) GEN_EDX_FWD);
    return uVar1;
  }
  return 3;
}

/* ref: FUN_00aa05b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aa05b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa05b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  if (uVar1 == 3) {
    uVar1 = (uint)*((ushort *)GEN_TOP(((int)this + 0x2f00)));
    *((uint *)GEN_TOP(((int)this + 0x514))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aa05d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa05d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa05d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (((param_2 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00531fc0(((undefined *)GEN_TOP((iVar1 + 0x680))) GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_00aa0600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0600(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa0600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (((param_2 != '\0') || (*((char *)GEN_TOP((param_1 + 0x2e08))) == '\0')) ||
     (iVar1 = *((int *)GEN_TOP((param_1 + 0x2e00))), *((int *)GEN_TOP((param_1 + 0x2e00))) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00531fe0(((undefined *)GEN_TOP((iVar1 + 0x680))) GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_00aa0630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0630(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    return *((uint *)GEN_TOP((param_1 + 0x88c + param_2 * 4)));
  }
  if ((*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0') && (*((int *)GEN_TOP((param_1 + 0x2e00))) != 0)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2e00))) + 0x88c + param_2 * 4)));
  }
  return *((uint *)GEN_TOP((param_1 + 0x88c + param_2 * 4)));
}

/* ref: FUN_00aa0680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    return *((uint *)GEN_TOP((param_1 + 0x8fc + param_2 * 4)));
  }
  if ((*((char *)GEN_TOP((param_1 + 0x2e08))) != '\0') && (*((int *)GEN_TOP((param_1 + 0x2e00))) != 0)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2e00))) + 0x8fc + param_2 * 4)));
  }
  return *((uint *)GEN_TOP((param_1 + 0x8fc + param_2 * 4)));
}

/* ref: FUN_00aa06d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa06d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa06d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00ae8890(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_FWD,param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aa06e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa06e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa06e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00ae8da0(in_ecx + 0x1b0 GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: FUN_00aa06f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa06f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa06f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00ae8d00(in_ecx + 0x1b0 GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: FUN_00aa0700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aa0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x195))) = 0;
  iVar2 = (int)this + 0x16c0;
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*((int *)GEN_TOP((iVar2 - 0x10))) != 0 || *((int *)GEN_TOP((iVar2 - 0xc))) != 0) {
      uVar1 = F_00b5c0c0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,iVar2);
    }
    iVar2 = iVar2 + 0x7a0;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00aa0740 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00aa0740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaa0740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00aa0750 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00aa0750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00aa0790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aa0790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005344c0(in_ecx + 0x940 GEN_EDX_FWD);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa07a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaa07a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x95c))) = param_2;
  return param_2;
}

/* ref: FUN_00aa07c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00aa07c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x9a0)));
}

/* ref: FUN_00aa07d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa07d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaa07d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_005446c0(((undefined *)GEN_TOP(((int)this + 0x940))) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00aa07e0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00aa07e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa07e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  code * pcVar5;
  undefined4 uVar6;
  int local_8;
  
  local_8 = 100;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_FWD);
  if (uVar3 != 0) {
    uVar6 = 8;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG);
    bVar1 = F_00b7aaa0(uVar3 GEN_EDX_ARG,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xe;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG)));
      uVar2 = F_00b7abd0(pvVar4 GEN_EDX_ARG,uVar6);
      local_8 = 100 - (short)uVar2;
    }
    uVar6 = 0x10;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG);
    bVar1 = F_00b7aaa0(uVar3 GEN_EDX_ARG,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0x43;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG)));
      uVar2 = F_00b7abd0(pvVar4 GEN_EDX_ARG,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    uVar6 = 0x200;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG);
    bVar1 = F_00b7aaa0(uVar3 GEN_EDX_ARG,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xb5;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG)));
      uVar2 = F_00b7abd0(pvVar4 GEN_EDX_ARG,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    if (*((char *)GEN_TOP(((int)this + 0x2e08))) == '\0') {
      uVar6 = 0x32;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG)));
      bVar1 = F_00b7aac0(pvVar4 GEN_EDX_ARG,uVar6);
      pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xd4)));
      if (bVar1 == 0) {
        uVar6 = 0x69;
        pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
        bVar1 = F_00b7aac0(pvVar4 GEN_EDX_ARG,uVar6);
        pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xd4)));
        if (bVar1 == 0) {
          uVar6 = 0x85;
          pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
          bVar1 = F_00b7aac0(pvVar4 GEN_EDX_ARG,uVar6);
          pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xd4)));
          if (bVar1 == 0) {
            uVar6 = 0x86;
            pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
            bVar1 = F_00b7aac0(pvVar4 GEN_EDX_ARG,uVar6);
            if (bVar1 == 0) goto LAB_00aa094e;
            pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xd4)));
            uVar6 = 0x86;
          }
          else {
            uVar6 = 0x85;
          }
        }
        else {
          uVar6 = 0x69;
        }
      }
      else {
        uVar6 = 0x32;
      }
      pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
      uVar2 = F_00b7abd0(pvVar4 GEN_EDX_ARG,uVar6);
      local_8 = local_8 + (short)uVar2;
    }
  }
LAB_00aa094e: ;
  if (REFG(int, 0x14a73b8) != 0) {
    local_8 = REFG(int, 0x14a73b8) * 100;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  return GEN_X87((float)((float10)local_8 / (float10)*(double *)&REFG(undefined, 0x1088118)));
}

/* ref: FUN_00aa0980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aa0980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaa0980u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  if (param_3 < 2) {
    *((float *)GEN_TOP((in_ecx + 0x2ec0 + param_3 * 4))) = param_2;
  }
  return param_3;
}

/* ref: FUN_00aa09c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aa09c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa09c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_FWD);
  if (uVar2 != 0) {
    pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG)));
    if (*pcVar3 == '\x01') {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG);
      fVar1 = *((float *)GEN_TOP((uVar2 + 0x34)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG);
      if (!((float10)*((float *)GEN_TOP((uVar2 + 0x38))) <= (float10)fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00aa0a20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00aa0a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009bc4f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_FWD);
    if (bVar1 == 0) {
      F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG);
    }
    else {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG,1);
    }
    F_00983120(*((undefined4 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1658))) = 0;
  }
  return;
}

/* ref: FUN_00aa0a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aa0a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint in_EAX = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1644))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009bc4f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1644))) GEN_EDX_FWD);
    if (bVar1 == 0) {
      F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1644))) GEN_EDX_ARG);
    }
    else {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1644))) GEN_EDX_ARG,1);
    }
    in_EAX = F_00983120(*((undefined4 *)GEN_TOP(((int)this + 0x1644))) GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1644))) = 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1648))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009bc4f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1648))) GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1648))) GEN_EDX_ARG);
    }
    else {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1648))) GEN_EDX_ARG,1);
    }
    in_EAX = F_00983120(*((undefined4 *)GEN_TOP(((int)this + 0x1648))) GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1648))) = 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009bc4f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG);
    }
    else {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG,1);
    }
    in_EAX = F_00983120(*((undefined4 *)GEN_TOP(((int)this + 0x1658))) GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1658))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00aa0b30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00aa0b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaa0b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x2ea9))) != '\0') {
    F_00afed60(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_FWD);
    if (*((int *)GEN_TOP(((int)this + 0x2e00))) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2e00))) + 0x1b0))) GEN_EDX_ARG);
    }
    if (*((int *)GEN_TOP(((int)this + 0x2e04))) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2e04))) + 0x1b0))) GEN_EDX_ARG);
      return;
    }
  }
  return;
}

