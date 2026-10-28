#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c0c4e0 */
GEN_FRAME uint F_00c0c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c4f0 */
GEN_FRAME uint F_00c0c4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c500 */
GEN_FRAME uint F_00c0c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c510 */
GEN_FRAME uint F_00c0c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c530 */
GEN_FRAME uint F_00c0c530(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c570 */
GEN_FRAME uint GEN_STDCALL F_00c0c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c5a0 */
GEN_FRAME uint GEN_STDCALL F_00c0c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c600 */
GEN_NOFRAME uint GEN_THISCALL F_00c0c600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c670 */
GEN_NOFRAME uint GEN_THISCALL F_00c0c670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c6d0 */
GEN_FRAME uint F_00c0c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6e0 */
GEN_FRAME uint F_00c0c6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6f0 */
GEN_FRAME uint F_00c0c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c700 */
GEN_FRAME uint F_00c0c700(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c710 */
GEN_FRAME uint F_00c0c710(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c720 */
GEN_FRAME uint GEN_THISCALL F_00c0c720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c740 */
GEN_FRAME uint F_00c0c740(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c750 */
GEN_FRAME uint F_00c0c750(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c760 */
GEN_FRAME uint F_00c0c760(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c7e0 */
GEN_FRAME uint GEN_THISCALL F_00c0c7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c800 */
GEN_FRAME uint F_00c0c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c820 */
GEN_FRAME uint F_00c0c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c840 */
GEN_FRAME uint GEN_THISCALL F_00c0c840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c860 */
GEN_FRAME uint F_00c0c860(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c870 */
GEN_FRAME uint GEN_THISCALL F_00c0c870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c890 */
GEN_FRAME uint GEN_THISCALL F_00c0c890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0c8b0 */
GEN_FRAME uint F_00c0c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c8c0 */
GEN_FRAME uint GEN_THISCALL F_00c0c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00c0c8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined1 AVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (((byte)this[4] & 0x40) == 0) {
      AVar2 = (undefined1)0xff;
    }
    else {
      AVar2 = this[7];
    }
    *(undefined *)((int)puVar1 + 6) = this[6];
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    *(undefined2 *)(puVar1 + 1) = 0x640;
    *(undefined *)((int)puVar1 + 7) = AVar2;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0c930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00c0c960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    return ((uint)(byte)this[5] + piVar1[1]) - *piVar1;
  }
  return (uint)(byte)this[5] + *(int *)(this + 0x10);
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf4 */
GEN_FRAME byte GEN_THISCALL F_00c0c980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 6,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 6,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf4 */
GEN_FRAME byte GEN_THISCALL F_00c0ca30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 4,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 4,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00c0cae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 NVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    NVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x608;
    *(undefined *)((int)puVar2 + 6) = NVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0cb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00c0cb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 RVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    RVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x610;
    *(undefined *)((int)puVar2 + 6) = RVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0cb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cbc0 */
GEN_FRAME uint GEN_THISCALL F_00c0cbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c0cc30 */
GEN_NOFRAME byte GEN_THISCALL F_00c0cc30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  __time64_t _Var2;
  
  if (*(int *)((int)this + 0x18) == 1) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x1c) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      if (*(int *)((int)this + 0x20) == 0) {
        *(undefined4 *)((int)this + 0x18) = 0;
        return 1;
      }
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      *(undefined4 *)((int)this + 0x18) = 2;
      return 1;
    }
  }
  else if (*(int *)((int)this + 0x18) == 2) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x20) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c0cce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 SVar1;
  undefined1 SVar2;
  undefined1 SVar3;
  undefined1 SVar4;
  undefined1 SVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 * puVar10;
  
  puVar10 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar10 != (undefined4 *)0x0) {
    SVar1 = this[0x1b];
    SVar2 = this[0x1a];
    SVar3 = this[0x19];
    SVar4 = this[0x18];
    uVar6 = *(undefined2 *)(this + 0x14);
    uVar7 = *(undefined2 *)(this + 0x12);
    uVar8 = *(undefined2 *)(this + 0x10);
    uVar9 = *(undefined2 *)(this + 0x16);
    SVar5 = this[0xd];
    *(undefined *)((int)puVar10 + 6) = this[6];
    *(undefined1 *)((int)puVar10 + 7) = 0;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 1;
    *(undefined1 *)((int)puVar10 + 0xe) = 1;
    *(undefined2 *)(puVar10 + 4) = uVar8;
    *(undefined2 *)((int)puVar10 + 0x12) = uVar7;
    *(undefined2 *)(puVar10 + 5) = uVar6;
    *(undefined *)(puVar10 + 6) = SVar4;
    *(undefined2 *)((int)puVar10 + 0x16) = uVar9;
    *(undefined *)((int)puVar10 + 0x19) = SVar3;
    *(undefined *)((int)puVar10 + 0xd) = SVar5;
    *(undefined2 *)(puVar10 + 1) = 0x1680;
    *puVar10 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
    *(undefined *)((int)puVar10 + 0x1a) = SVar2;
    *(undefined *)((int)puVar10 + 0x1b) = SVar1;
    return (uint)puVar10;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0cda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cdf0 */
GEN_FRAME byte GEN_THISCALL F_00c0cdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce10 */
GEN_FRAME byte GEN_THISCALL F_00c0ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce40 */
GEN_FRAME byte GEN_THISCALL F_00c0ce40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce80 */
GEN_FRAME uint F_00c0ce80(unsigned int gen_a0)
{
  GEN_ENTER(0xc0ce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c0ce90 */
GEN_FRAME uint GEN_THISCALL F_00c0ce90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ce90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0cea0 */
GEN_FRAME uint GEN_THISCALL F_00c0cea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0cef0 */
GEN_FRAME uint GEN_THISCALL F_00c0cef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00c0cf50 */
GEN_FRAME uint F_00c0cf50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cf50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0cf70 */
GEN_NOFRAME uint GEN_THISCALL F_00c0cf70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0cf90 */
GEN_FRAME uint GEN_THISCALL F_00c0cf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d000 */
GEN_FRAME uint GEN_THISCALL F_00c0d000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00c0d050 */
GEN_FRAME uint GEN_THISCALL F_00c0d050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d060 */
GEN_FRAME uint GEN_THISCALL F_00c0d060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d070 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c0d070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00c0d0f0 */
GEN_FRAME uint GEN_THISCALL F_00c0d0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00c0d180 */
GEN_FRAME uint GEN_THISCALL F_00c0d180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c0d1d0 */
GEN_FRAME uint F_00c0d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0d200 */
GEN_FRAME uint GEN_THISCALL F_00c0d200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d220 */
GEN_FRAME uint F_00c0d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0d240 */
GEN_NOFRAME uint GEN_THISCALL F_00c0d240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c600(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d260 */
GEN_NOFRAME uint GEN_THISCALL F_00c0d260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d270 */
GEN_FRAME uint GEN_THISCALL F_00c0d270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d290 */
GEN_FRAME uint GEN_THISCALL F_00c0d290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d2b0 */
GEN_FRAME uint GEN_THISCALL F_00c0d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d2d0 */
GEN_FRAME uint GEN_THISCALL F_00c0d2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d320 */
GEN_FRAME uint GEN_STDCALL F_00c0d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d360 */
GEN_FRAME uint GEN_THISCALL F_00c0d360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d380 */
GEN_FRAME uint GEN_THISCALL F_00c0d380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d3a0 */
GEN_FRAME uint GEN_THISCALL F_00c0d3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0d3c0 */
GEN_FRAME uint GEN_THISCALL F_00c0d3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0d3e0 */
GEN_FRAME uint GEN_THISCALL F_00c0d3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d3f0 */
GEN_FRAME uint GEN_THISCALL F_00c0d3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d440 */
GEN_FRAME uint GEN_THISCALL F_00c0d440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d460 */
GEN_FRAME uint GEN_THISCALL F_00c0d460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d4a0 */
GEN_NOFRAME uint GEN_THISCALL F_00c0d4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d570 */
GEN_FRAME uint GEN_THISCALL F_00c0d570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d5d0 */
GEN_FRAME uint GEN_THISCALL F_00c0d5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0d650 */
GEN_FRAME uint GEN_THISCALL F_00c0d650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d660 */
GEN_FRAME uint GEN_THISCALL F_00c0d660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d670 */
GEN_NOFRAME uint GEN_THISCALL F_00c0d670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d680 */
GEN_FRAME uint GEN_THISCALL F_00c0d680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d6b0 */
GEN_FRAME uint GEN_STDCALL F_00c0d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d6f0 */
GEN_FRAME uint GEN_THISCALL F_00c0d6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0d780 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c0d780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c0d830 */
GEN_FRAME uint GEN_THISCALL F_00c0d830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d860 */
GEN_FRAME uint GEN_STDCALL F_00c0d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d8e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c0d8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

/* ref: FUN_00c0d920 */
GEN_FRAME uint GEN_THISCALL F_00c0d920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0d980 */
GEN_FRAME unsigned int GEN_THISCALL F_00c0d980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}

/* ref: FUN_00c0d9c0 */
GEN_FRAME uint F_00c0d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c0d9e0 */
GEN_FRAME uint GEN_THISCALL F_00c0d9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0da50 */
GEN_FRAME uint GEN_THISCALL F_00c0da50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc0da50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0x25c);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00c0dc4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00c0dc4d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_00c0dc80 */
GEN_FRAME uint GEN_THISCALL F_00c0dc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc0dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x28,0x25c);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00c0de7d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00c0de7d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00c0deb0 */
GEN_NOFRAME uint GEN_THISCALL F_00c0deb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0deb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0dec0 */
GEN_FRAME uint GEN_THISCALL F_00c0dec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0dec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0dee0 */
GEN_FRAME uint GEN_THISCALL F_00c0dee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0dee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0df00 */
GEN_FRAME unsigned int F_00c0df00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00c0df70 */
GEN_FRAME uint GEN_STDCALL F_00c0df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0df70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00c0dfd0 */
GEN_NOFRAME uint GEN_THISCALL F_00c0dfd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0dfd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0e020 */
GEN_FRAME uint GEN_THISCALL F_00c0e020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e030 */
GEN_FRAME uint GEN_THISCALL F_00c0e030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e080 */
GEN_FRAME uint GEN_THISCALL F_00c0e080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e090 */
GEN_FRAME uint GEN_THISCALL F_00c0e090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e0b0 */
GEN_FRAME uint GEN_THISCALL F_00c0e0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0d0 */
GEN_FRAME uint GEN_THISCALL F_00c0e0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0e0 */
GEN_FRAME uint GEN_THISCALL F_00c0e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00c0c340(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00c0e1fa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00c0c0e0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00c0c0c0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e1fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e2b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00c0e2b8;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e340 */
GEN_FRAME uint GEN_THISCALL F_00c0e340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c0e360 */
GEN_FRAME uint GEN_STDCALL F_00c0e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e370 */
GEN_FRAME uint GEN_THISCALL F_00c0e370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0e420 */
GEN_FRAME uint GEN_THISCALL F_00c0e420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0e460 */
GEN_FRAME uint GEN_THISCALL F_00c0e460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c0d6f0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00c0e480 */
GEN_FRAME uint GEN_STDCALL F_00c0e480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0e480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e490 */
GEN_FRAME uint GEN_THISCALL F_00c0e490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0e580 */
GEN_FRAME uint GEN_THISCALL F_00c0e580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0e5a0 */
GEN_FRAME uint GEN_THISCALL F_00c0e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00c0d070(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00c0e6ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_00c0c400(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00c0c3e0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e6ba: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e778: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_00c0e778;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e800 */
GEN_NOFRAME uint GEN_THISCALL F_00c0e800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c0e860 */
GEN_NOFRAME uint GEN_THISCALL F_00c0e860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x28,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c0e8c0 */
GEN_FRAME unsigned int F_00c0e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00c0df00(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00c0e8e0 */
GEN_FRAME uint GEN_THISCALL F_00c0e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c0c600(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e9c0 */
GEN_FRAME uint GEN_THISCALL F_00c0e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00c0c670(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00c0ea33;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00c0ea33: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00c0eae0 */
GEN_FRAME uint GEN_THISCALL F_00c0eae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_2 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0eb60 */
GEN_FRAME uint F_00c0eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0ebd0 */
GEN_FRAME uint GEN_THISCALL F_00c0ebd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ec30 */
GEN_FRAME uint GEN_THISCALL F_00c0ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ec90 */
GEN_FRAME uint GEN_THISCALL F_00c0ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ec90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ece0 */
GEN_FRAME uint GEN_THISCALL F_00c0ece0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0ed50 */
GEN_NOFRAME uint GEN_THISCALL F_00c0ed50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ed50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0eda0 */
GEN_FRAME uint GEN_THISCALL F_00c0eda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0eda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ee00 */
GEN_FRAME uint GEN_THISCALL F_00c0ee00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ee00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ee50 */
GEN_FRAME uint GEN_THISCALL F_00c0ee50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ee50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0eeb0 */
GEN_FRAME uint GEN_THISCALL F_00c0eeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0eeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c0e800(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c0e5a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0ef50 */
GEN_FRAME uint GEN_THISCALL F_00c0ef50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ef50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0ef70 */
GEN_FRAME uint GEN_THISCALL F_00c0ef70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0ef70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c0e860(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c0e0e0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0f010 */
GEN_FRAME uint GEN_THISCALL F_00c0f010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_2 + 4) = (uint)piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(uint *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0f080 */
GEN_FRAME uint GEN_THISCALL F_00c0f080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00c0e8e0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00c0f0e0 */
GEN_FRAME uint GEN_THISCALL F_00c0f0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_1;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00c0f130 */
GEN_FRAME uint GEN_THISCALL F_00c0f130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f1c0 */
GEN_NOFRAME uint GEN_THISCALL F_00c0f1c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f1f0 */
GEN_FRAME uint GEN_THISCALL F_00c0f1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f230 */
GEN_FRAME uint GEN_THISCALL F_00c0f230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c0d6f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00c0df00((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00c0eeb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00c0f290 */
GEN_NOFRAME uint GEN_THISCALL F_00c0f290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f2c0 */
GEN_FRAME uint GEN_THISCALL F_00c0f2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0f2e0 */
GEN_FRAME uint GEN_THISCALL F_00c0f2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  F_00c0e9c0(this GEN_EDX_ARG,param_1,puVar3,0);
  return param_1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0f350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3c0 */
GEN_FRAME uint GEN_THISCALL F_00c0f3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c0ed50(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3f0 */
GEN_FRAME uint GEN_THISCALL F_00c0f3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f470 */
GEN_FRAME uint GEN_THISCALL F_00c0f470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0f4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f520 */
GEN_FRAME uint GEN_THISCALL F_00c0f520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f5a0 */
GEN_FRAME uint GEN_THISCALL F_00c0f5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f620 */
GEN_FRAME uint GEN_THISCALL F_00c0f620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00bb6510(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00c0f640 */
GEN_FRAME uint GEN_THISCALL F_00c0f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c0f690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 DVar1;
  undefined1 DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    uVar5 = *(undefined4 *)(this + 0x10);
    iVar8 = *(int *)(this + 0xc);
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,uVar5);
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar3 = piVar7[1];
    iVar4 = *piVar7;
    iVar8 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar3 - iVar4);
    }
  }
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,iVar8,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = DVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c0f7f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 EVar1;
  undefined1 EVar2;
  undefined1 EVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  int local_14;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[0x10];
    local_14 = *(int *)(this + 0xc);
    EVar3 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(byte *)((int)puVar6 + 5) = (char)EVar2 + 6;
    *(undefined *)((int)puVar6 + 6) = EVar3;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,(uint)(byte)EVar2);
      goto LAB_00c0f913;
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar4 = piVar7[1];
    iVar5 = *piVar7;
    local_14 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(char *)((int)puVar6 + 5) = (char)(iVar4 - iVar5) + '\x06';
    *(undefined *)((int)puVar6 + 6) = EVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar4 - iVar5 & 0xff);
      goto LAB_00c0f913;
    }
  }
  piVar7 = (int *)0x0;
LAB_00c0f913: ;
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,local_14,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = EVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c0f950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c0b2c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerWinsock::vf8 */
GEN_FRAME uint GEN_THISCALL F_00c0f990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0f990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 != 1) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x14c) = param_1;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x250) = param_1;
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf6 */
GEN_FRAME uint GEN_THISCALL F_00c0fa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0fa30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(this + 0x148);
    if (uVar1 != 0) {
      pPVar3 = this + 0x14c;
      uVar2 = 0;
LAB_00c0fa52: ;
      if (*(int *)pPVar3 != param_1) goto code_r0x00c0fa56;
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x14c;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x148) - 1U);
      }
      *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
    }
LAB_00c0fa8a: ;
    uVar1 = *(uint *)(this + 0x24c);
    uVar2 = 0;
    if (uVar1 != 0) {
      pPVar3 = this + 0x250;
      while (*(int *)pPVar3 != param_1) {
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x250;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x24c) - 1U);
      }
      *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
    }
  }
  return 0;
code_r0x00c0fa56: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fa8a;
  goto LAB_00c0fa52;
}

/* ref: Client::Network::Socket::PollerWinsock::vf5 */
GEN_NOFRAME uint F_00c0faf0(void)
{
  GEN_ENTER(0xc0faf0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = gen_imp_WSAGetLastError();
  return -(uint)(iVar1 != 0x2734);
}

/* ref: Client::Network::Socket::PollerWinsock::vf7 */
GEN_FRAME uint GEN_THISCALL F_00c0fb00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined * readfds;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined * pPVar8;
  int * piVar9;
  undefined * pfVar10;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (*(int *)(this + 0xc) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_FWD);
    return 0;
  }
  piVar9 = *(int * PTR32 *)(this + 8);
  readfds = (undefined *)(this + 0x44);
  (*(uint *)((char *)(readfds))) = 0;
  piVar4 = (int *)*piVar9;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (piVar4 != piVar9) {
    do {
      iVar7 = piVar4[4];
      *(undefined2 *)(iVar7 + 4) = 0;
      *(undefined1 *)(iVar7 + 6) = 0;
      uVar2 = (*(uint *)((char *)(readfds)));
      uVar6 = 0;
      if (uVar2 != 0) {
        pPVar8 = this + 0x48;
        do {
          if (*(int *)pPVar8 == piVar4[3]) break;
          uVar6 = uVar6 + 1;
          pPVar8 = pPVar8 + 4;
        } while (uVar6 < uVar2);
      }
      if ((uVar6 == uVar2) && (uVar2 < 0x40)) {
        *(int *)(this + uVar6 * 4 + 0x48) = piVar4[3];
        (*(uint *)((char *)(readfds))) = (*(uint *)((char *)(readfds))) + 1;
      }
      if ((*(uint *)(gen_frame + 0x8)) < (uint)piVar4[3]) {
        (*(uint *)(gen_frame + 0x8)) = piVar4[3];
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar9 = (int *)piVar4[2];
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar9 + 0x15);
          piVar4 = piVar9;
          piVar9 = (int *)*piVar9;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar9 + 0x15);
            piVar4 = piVar9;
            piVar9 = (int *)*piVar9;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar9 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar9 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar9 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 8));
  }
  pPVar8 = this + 0x148;
  pfVar10 = ((undefined *)(gen_frame + 0x10));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = 0;
  (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = 0;
  pPVar8 = this + 0x24c;
  pfVar10 = ((undefined *)(gen_frame + 0x114));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  iVar7 = gen_imp_select((*(uint *)(gen_frame + 0x8)) + 1,readfds,((undefined *)(gen_frame + 0x10)),((undefined *)(gen_frame + 0x114)),&(*(undefined8 *)(gen_frame + 0x0)));
  if (iVar7 != 0) {
    if (-1 < iVar7) {
      piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)));
      if (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)) {
        do {
          iVar7 = piVar9[4];
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],readfds);
          *(bool *)(iVar7 + 4) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x10)));
          *(bool *)(iVar7 + 5) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x114)));
          *(bool *)(iVar7 + 6) = iVar5 != 0;
          if (*(char *)((int)piVar9 + 0x15) == '\0') {
            piVar4 = (int *)piVar9[2];
            if (*(char *)((int)piVar4 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x15);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar4 + 0x15);
                piVar9 = piVar4;
                piVar4 = (int *)*piVar4;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x15);
              piVar3 = (int *)piVar9[1];
              piVar4 = piVar9;
              while ((piVar9 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar9[2]))) {
                cVar1 = *(char *)(piVar9[1] + 0x15);
                piVar3 = (int *)piVar9[1];
                piVar4 = piVar9;
              }
            }
          }
        } while (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8));
      }
      F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
      return 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
    return 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c0fd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c11300((undefined *)this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c0fd80 */
GEN_NOFRAME uint GEN_THISCALL F_00c0fd80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c116d0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  return (uint)this;
}

/* ref: FUN_00c0fdb0 */
GEN_NOFRAME uint GEN_THISCALL F_00c0fdb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  uVar1 = F_00c11750(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerWinsock::vf2 */
GEN_FRAME uint GEN_THISCALL F_00c0fdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0fdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  uVar1 = F_00c11830((undefined *)this GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(this + 0x44);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x48;
LAB_00c0fdf0: ;
    if (*(int *)pPVar3 != param_1) goto code_r0x00c0fdf4;
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x48;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x44) - 1U);
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) - 1;
  }
LAB_00c0fe1b: ;
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(int *)pPVar3 == param_1) {
        if (uVar2 < uVar1 - 1) {
          pPVar3 = this + uVar2 * 4 + 0x14c;
          do {
            *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
            uVar2 = uVar2 + 1;
            pPVar3 = pPVar3 + 4;
          } while (uVar2 < *(int *)(this + 0x148) - 1U);
        }
        *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
        break;
      }
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    while (*(int *)pPVar3 != param_1) {
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x250;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x24c) - 1U);
    }
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
  }
  return 0;
code_r0x00c0fdf4: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fe1b;
  goto LAB_00c0fdf0;
}

/* ref: FUN_00c0fed0 */
GEN_FRAME uint F_00c0fed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00c0fee0 */
GEN_FRAME uint F_00c0fee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0fee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0ff20 */
GEN_FRAME uint GEN_STDCALL F_00c0ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c0ffa0 */
GEN_FRAME uint GEN_STDCALL F_00c0ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ffa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c0ffd0 */
GEN_FRAME uint GEN_STDCALL F_00c0ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10010 */
GEN_FRAME uint GEN_STDCALL F_00c10010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10060 */
GEN_FRAME uint GEN_STDCALL F_00c10060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c100b0 */
GEN_FRAME uint GEN_STDCALL F_00c100b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc100b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c10100 */
GEN_FRAME uint F_00c10100(unsigned int gen_a0)
{
  GEN_ENTER(0xc10100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10110 */
GEN_FRAME uint F_00c10110(unsigned int gen_a0)
{
  GEN_ENTER(0xc10110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10180 */
GEN_NOFRAME uint GEN_THISCALL F_00c10180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c101e0 */
GEN_FRAME uint F_00c101e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc101e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c101f0 */
GEN_FRAME uint F_00c101f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc101f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10200 */
GEN_FRAME uint F_00c10200(unsigned int gen_a0)
{
  GEN_ENTER(0xc10200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10210 */
GEN_FRAME byte F_00c10210(void)
{
  GEN_ENTER(0xc10210u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00c10240 */
GEN_FRAME uint F_00c10240(unsigned int gen_a0)
{
  GEN_ENTER(0xc10240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10280 */
GEN_FRAME uint GEN_THISCALL F_00c10280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102a0 */
GEN_FRAME uint F_00c102a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc102a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c102b0 */
GEN_FRAME uint GEN_THISCALL F_00c102b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc102b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102d0 */
GEN_FRAME uint GEN_THISCALL F_00c102d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc102d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c102f0 */
GEN_FRAME uint F_00c102f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc102f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10300 */
GEN_FRAME uint GEN_THISCALL F_00c10300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10320 */
GEN_FRAME uint F_00c10320(unsigned int gen_a0)
{
  GEN_ENTER(0xc10320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10330 */
GEN_FRAME uint F_00c10330(unsigned int gen_a0)
{
  GEN_ENTER(0xc10330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c10370 */
GEN_FRAME uint GEN_THISCALL F_00c10370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc10370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00c103d0 */
GEN_FRAME uint F_00c103d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc103d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c10410 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c10410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc10410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c10460 */
GEN_FRAME uint GEN_THISCALL F_00c10460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00bae660(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c104b0 */
GEN_FRAME uint GEN_STDCALL F_00c104b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc104b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c104e0 */
GEN_NOFRAME uint GEN_THISCALL F_00c104e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc104e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c104f0 */
GEN_FRAME uint GEN_THISCALL F_00c104f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc104f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10510 */
GEN_FRAME uint GEN_THISCALL F_00c10510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10530 */
GEN_FRAME uint GEN_THISCALL F_00c10530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10550 */
GEN_FRAME uint GEN_THISCALL F_00c10550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc10550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10570 */
GEN_FRAME uint GEN_THISCALL F_00c10570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc10570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10590 */
GEN_FRAME uint GEN_STDCALL F_00c10590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c105d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c105d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc105d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bae660(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c105e0 */
GEN_FRAME uint GEN_THISCALL F_00c105e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc105e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c10660 */
GEN_NOFRAME uint GEN_THISCALL F_00c10660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c106e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c106e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc106e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x25a);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00c10720 */
GEN_FRAME uint F_00c10720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c10740 */
GEN_FRAME uint F_00c10740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10760 */
GEN_NOFRAME uint GEN_THISCALL F_00c10760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c10770 */
GEN_FRAME uint GEN_THISCALL F_00c10770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00c10790 */
GEN_FRAME unsigned int GEN_STDCALL F_00c10790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00c107b0 */
GEN_FRAME uint F_00c107b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc107b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c107d0 */
GEN_FRAME uint F_00c107d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc107d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10830 */
GEN_NOFRAME uint GEN_THISCALL F_00c10830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10830u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00c108f0 */
GEN_NOFRAME uint GEN_THISCALL F_00c108f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc108f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x25a);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c10950 */
GEN_FRAME uint GEN_THISCALL F_00c10950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc10950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0x25a);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00c10b4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00c10b4d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00c10b80 */
GEN_FRAME uint F_00c10b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10ba0 */
GEN_FRAME unsigned int F_00c10ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10ba0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c10bd0 */
GEN_FRAME unsigned int F_00c10bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc10bd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c10c00 */
GEN_FRAME uint GEN_THISCALL F_00c10c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10c00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00bae660(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00c10d1a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00bae620(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00c0fee0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c10d1a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c10dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00c10dd8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x25a);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c10e60 */
GEN_NOFRAME uint GEN_THISCALL F_00c10e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c10e90 */
GEN_FRAME uint GEN_THISCALL F_00c10e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c10f10 */
GEN_FRAME uint GEN_THISCALL F_00c10f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c108f0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c10c00(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c10fb0 */
GEN_FRAME uint GEN_THISCALL F_00c10fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c10180(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c11090 */
GEN_FRAME uint GEN_THISCALL F_00c11090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c110e0 */
GEN_FRAME unsigned int F_00c110e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc110e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c11110 */
GEN_FRAME unsigned int F_00c11110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c11140 */
GEN_NOFRAME uint GEN_THISCALL F_00c11140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c11170 */
GEN_FRAME uint GEN_THISCALL F_00c11170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c11220 */
GEN_FRAME uint GEN_THISCALL F_00c11220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c11240 */
GEN_FRAME uint GEN_THISCALL F_00c11240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_2[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_2;
    puVar2[4] = uVar1;
  }
  F_00c10fb0(this GEN_EDX_ARG,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_00c112a0 */
GEN_FRAME unsigned int F_00c112a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc112a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c112d0 */
GEN_FRAME unsigned int F_00c112d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc112d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::Network::Socket::PollerBase::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c11300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = (int *)F_00c11170((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),&(*(int *)&gen_args[1]));
  if (*piVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (uVar2 != 0) {
      (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[1]);
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      F_00c11240((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x14)));
      *(undefined2 *)(uVar2 + 4) = 0;
      *(undefined1 *)(uVar2 + 6) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c113a0 */
GEN_NOFRAME uint GEN_THISCALL F_00c113a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c113d0 */
GEN_FRAME uint GEN_THISCALL F_00c113d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11450 */
GEN_FRAME uint GEN_THISCALL F_00c11450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11450u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x25a);
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00c115d0 */
GEN_FRAME uint GEN_THISCALL F_00c115d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc115d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11650 */
GEN_FRAME uint GEN_THISCALL F_00c11650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00c11450(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_00c116d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c116d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc116d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = F_004296a0(0x18,0,0x25a);
  *(uint *)((int)this + 8) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x25a);
  *puVar1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  return (uint)this;
}

/* ref: FUN_00c11750 */
GEN_FRAME uint GEN_THISCALL F_00c11750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  F_00bb57c0(this GEN_EDX_FWD);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  F_00c10830((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x14),8,0x25a);
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00c10f10((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::PollerBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c117c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc117c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c11750(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerWinsock::vf4 */
GEN_NOFRAME uint F_00c117f0(void)
{
  GEN_ENTER(0xc117f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x110478c));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_00c11820 */
GEN_FRAME uint GEN_THISCALL F_00c11820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c11650(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerBase::vf2 */
GEN_FRAME uint GEN_THISCALL F_00c11830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11830u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x2c);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  piVar2 = (int *)F_00c11170((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  iVar1 = *piVar2;
  if (iVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
    return 0xffffffff;
  }
  *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 7))) = 1;
  F_00c11650((*(undefined * PTR32 *)&gen_args[0]) + 0x14 GEN_EDX_ARG,iVar1 + 0x10);
  F_00c10c00((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar1);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c118d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc118d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  F_00c11750(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c11910 */
GEN_NOFRAME uint F_00c11910(unsigned int gen_a0)
{
  GEN_ENTER(0xc11910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c02740(param_1,((char *)REFP(0x1347d34)));
  return 0;
}

/* ref: FUN_00c11930 */
GEN_NOFRAME uint F_00c11930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc11930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x10),param_2,param_3,(*(int *)&gen_a3));
  if ((uVar2 == 0) && ((*(int *)&gen_a3) != 0)) {
                    
    F_00bb93a0(param_1,4);
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + ((*(int *)&gen_a3) - param_3);
  return uVar2;
}

/* ref: FUN_00c11980 */
GEN_NOFRAME uint F_00c11980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc11980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_3;
  if (iVar1 < param_5 / 2) {
    iVar3 = iVar1 * 2;
    if (iVar3 < 4) {
      iVar3 = 4;
    }
  }
  else {
    iVar3 = param_5;
    if (param_5 <= iVar1) {
      F_00c02740(param_1,param_6);
    }
  }
  if (iVar3 + 1U <= (uint)(0xfffffffd / (ulonglong)param_4)) {
    uVar2 = F_00c11930(param_1,param_2,*param_3 * param_4,iVar3 * param_4);
    *param_3 = iVar3;
    return uVar2;
  }
  F_00c02740(param_1,((char *)REFP(0x1347d34)));
  *param_3 = iVar3;
  return 0;
}

/* ref: FUN_00c11a10 */
GEN_NOFRAME uint F_00c11a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11a10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 0x3c);
  if (puVar1[2] < puVar1[1] + 1) {
    if (0x7ffffffd < puVar1[2]) {
      F_00c11b70(param_1,((char *)REFP(0x1347e24)),0);
    }
    uVar2 = puVar1[2] * 2;
    if (uVar2 + 1 < 0xfffffffe) {
      uVar3 = F_00c11930(*(undefined4 *)(param_1 + 0x34),*puVar1,puVar1[2],uVar2);
    }
    else {
      uVar3 = F_00c11910(*(undefined4 *)(param_1 + 0x34));
    }
    puVar1[2] = uVar2;
    *puVar1 = uVar3;
  }
  uVar2 = puVar1[1];
  *(undefined1 *)(uVar2 + *puVar1) = (undefined1)param_2;
  puVar1[1] = puVar1[1] + 1;
  return uVar2;
}

/* ref: FUN_00c11a90 */
GEN_NOFRAME uint F_00c11a90(unsigned int gen_a0)
{
  GEN_ENTER(0xc11a90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    pcVar1 = (&REFG(undefined * PTR32, 0x110e840))[(int)(iVar5)];
    pcVar2 = pcVar1;
    do {
      cVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar4 != '\0');
    uVar3 = F_00c05a80(param_1,pcVar1,(int)pcVar2 - (int)(pcVar1 + 1));
    *(byte *)(uVar3 + 5) = *(byte *)(uVar3 + 5) | 0x20;
    cVar4 = (char)iVar5;
    iVar5 = iVar5 + 1;
    *(char *)(uVar3 + 6) = cVar4 + '\x01';
  } while (iVar5 < 0x15);
  return uVar3;
}

/* ref: FUN_00c11ae0 */
GEN_NOFRAME uint F_00c11ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11ae0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (0x100 < param_2) {
    return *(uint *)(&REFG(undefined, 0x110e43c) + param_2 * 4);
  }
  iVar1 = F_00c489cc(param_2);
  if (iVar1 != 0) {
    uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e40)),param_2);
    return uVar2;
  }
  uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),&REFG(undefined, 0x1347e4c),param_2);
  return uVar2;
}

/* ref: FUN_00c11b70 */
GEN_NOFRAME uint F_00c11b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11b70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)(param_1 + 0x40) + 0x10,0x50);
  uVar1 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                       *(undefined4 *)(param_1 + 4),param_2);
  if (param_3 != 0) {
    if ((param_3 < 0x11c) || (0x11e < param_3)) {
      uVar2 = F_00c11ae0(param_1,param_3);
    }
    else {
      F_00c11a10(param_1,0);
      uVar2 = **(uint * PTR32 *)(param_1 + 0x3c);
    }
    F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e5c)),uVar1,uVar2);
  }
                    
  F_00bb93a0(*(undefined4 *)(param_1 + 0x34),3);
}

/* ref: FUN_00c11c20 */
GEN_NOFRAME uint F_00c11c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11c20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c11b70(param_1,param_2,*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

/* ref: FUN_00c11c40 */
GEN_NOFRAME uint F_00c11c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc11c40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = F_00c05a80(uVar1,param_2,param_3);
  puVar3 = (undefined4 *)F_00c058d0(uVar1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x30) + 4))),uVar2);
  if (puVar3[2] == 0) {
    *puVar3 = 1;
    puVar3[2] = 1;
  }
  return uVar2;
}

/* ref: FUN_00c11c90 */
GEN_NOFRAME uint F_00c11c90(unsigned int gen_a0)
{
  GEN_ENTER(0xc11c90u, gen_a0, 0u, 0u, 0u);
  uint * in_esi = (uint *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  
  iVar1 = *(int *)in_esi[0xe];
  uVar2 = *in_esi;
  *(int *)in_esi[0xe] = iVar1 - 1;
  if (iVar1 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    uVar4 = (uint)*pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  if (((uVar4 == 10) || (uVar4 == 0xd)) && (uVar4 != uVar2)) {
    iVar1 = *(int *)in_esi[0xe];
    *(int *)in_esi[0xe] = iVar1 - 1;
    if (iVar1 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
      uVar4 = (uint)*pbVar3;
      *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    }
    *in_esi = uVar4;
  }
  in_esi[1] = in_esi[1] + 1;
  if (0x7ffffffc < (int)in_esi[1]) {
    uVar4 = F_00c11b70(in_esi,((char *)REFP(0x1347e6c)),in_esi[4]);
  }
  return uVar4;
}

/* ref: FUN_00c11d20 */
GEN_NOFRAME uint F_00c11d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc11d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  param_2[0xe] = param_3;
  param_2[1] = 1;
  param_2[2] = 1;
  *(undefined1 *)(param_2 + 0x11) = 0x2e;
  param_2[0xd] = param_1;
  param_2[8] = 0x11f;
  param_2[0xc] = 0;
  param_2[0x10] = param_4;
  uVar3 = F_00c11930(param_1,*(undefined4 *)param_2[0xf],((undefined4 *)param_2[0xf])[2],0x20);
  *(uint *)param_2[0xf] = uVar3;
  *(undefined4 *)(param_2[0xf] + 8) = 0x20;
  iVar2 = *(int *)param_2[0xe];
  *(int *)param_2[0xe] = iVar2 - 1;
  uVar3 = param_2[0xe];
  if (iVar2 != 0) {
    bVar1 = **(byte * PTR32 *)(uVar3 + 4);
    *(byte * PTR32 *)(uVar3 + 4) = *(byte * PTR32 *)(uVar3 + 4) + 1;
    *param_2 = (uint)bVar1;
    return uVar3;
  }
  uVar3 = F_00c05fe0(uVar3);
  *param_2 = uVar3;
  return uVar3;
}

/* ref: FUN_00c11db0 */
GEN_NOFRAME uint F_00c11db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint * in_esi = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  
  uVar4 = F_00c51da0(in_ecx,*in_esi);
  if (uVar4 == 0) {
    return 0;
  }
  F_00c11a10(in_esi,*in_esi);
  iVar2 = *(int *)in_esi[0xe];
  *(int *)in_esi[0xe] = iVar2 - 1;
  if (iVar2 != 0) {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    bVar1 = *pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    *in_esi = (uint)bVar1;
    return 1;
  }
  uVar4 = F_00c05fe0(in_esi[0xe]);
  *in_esi = uVar4;
  return 1;
}

/* ref: FUN_00c11e30 */
GEN_NOFRAME uint F_00c11e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  undefined * plVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  plVar3 = F_00c527f9();
  cVar1 = *(char *)(in_esi + 0x44);
  if (plVar3 == (undefined *)0x0) {
    cVar6 = '.';
  }
  else {
    cVar6 = *(*(char * PTR32 *)((char *)(plVar3)));
  }
  *(char *)(in_esi + 0x44) = cVar6;
  iVar4 = (*(int * PTR32 *)(in_esi + 0x3c))[1];
  iVar2 = **(int * PTR32 *)(in_esi + 0x3c);
  while (iVar4 != 0) {
    iVar4 = iVar4 - 1;
    if (*(char *)(iVar2 + iVar4) == cVar1) {
      *(char *)(iVar2 + iVar4) = cVar6;
    }
  }
  uVar5 = F_00c00370(**(undefined4 * PTR32 *)(in_esi + 0x3c),in_ecx);
  if (uVar5 == 0) {
    iVar4 = (*(int * PTR32 *)(in_esi + 0x3c))[1];
    cVar1 = *(char *)(in_esi + 0x44);
    iVar2 = **(int * PTR32 *)(in_esi + 0x3c);
    while (iVar4 != 0) {
      iVar4 = iVar4 - 1;
      if (*(char *)(iVar2 + iVar4) == cVar1) {
        *(undefined1 *)(iVar2 + iVar4) = 0x2e;
      }
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)(in_esi + 0x40) + 0x10,0x50);
    uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                         *(undefined4 *)(in_esi + 4),((char *)REFP(0x1347e88)));
    F_00c11a10(in_esi,0);
    F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347e5c)),uVar5,
                 **(undefined4 * PTR32 *)(in_esi + 0x3c));
                    
    F_00bb93a0(*(undefined4 *)(in_esi + 0x34),3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00c11f20 */
GEN_NOFRAME uint F_00c11f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc11f20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  do {
    F_00c11a10(in_eax,*in_eax);
    iVar5 = *(int *)in_eax[0xe];
    *(int *)in_eax[0xe] = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(in_eax[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(in_eax[0xe] + 4) = pbVar2 + 1;
    }
    *in_eax = uVar4;
    iVar5 = F_00c48637(uVar4);
  } while ((iVar5 != 0) || (*in_eax == 0x2e));
  uVar4 = F_00c11db0(&REFG(undefined, 0x1347e9c),in_eax);
  if (uVar4 != 0) {
    F_00c11db0(&REFG(undefined, 0x1347ea0),in_eax);
  }
  while ((iVar5 = F_00c4883f(*in_eax), iVar5 != 0 || (*in_eax == 0x5f))) {
    F_00c11a10(in_eax,*in_eax);
    iVar5 = *(int *)in_eax[0xe];
    *(int *)in_eax[0xe] = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
      *in_eax = uVar4;
    }
    else {
      pbVar2 = *(byte * PTR32 *)(in_eax[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(in_eax[0xe] + 4) = pbVar2 + 1;
      *in_eax = (uint)bVar1;
    }
  }
  F_00c11a10(in_eax,0);
  iVar5 = ((int *)in_eax[0xf])[1];
  uVar4 = in_eax[0x11];
  iVar3 = *(int *)in_eax[0xf];
  while (iVar5 != 0) {
    iVar5 = iVar5 - 1;
    if (*(char *)(iVar3 + iVar5) == '.') {
      *(char *)(iVar3 + iVar5) = (char)uVar4;
    }
  }
  uVar4 = F_00c00370(*(undefined4 *)in_eax[0xf],in_edi);
  if (uVar4 == 0) {
    uVar4 = F_00c11e30(in_edi,in_eax);
  }
  return uVar4;
}

/* ref: FUN_00c12020 */
GEN_NOFRAME uint F_00c12020(unsigned int gen_a0)
{
  GEN_ENTER(0xc12020u, gen_a0, 0u, 0u, 0u);
  uint * in_esi = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *in_esi;
  uVar5 = 0;
  F_00c11a10(in_esi,uVar1);
  iVar2 = *(int *)in_esi[0xe];
  *(int *)in_esi[0xe] = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    uVar4 = (uint)*pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  while (uVar4 == 0x3d) {
    F_00c11a10(in_esi,*in_esi);
    iVar2 = *(int *)in_esi[0xe];
    *(int *)in_esi[0xe] = iVar2 - 1;
    if (iVar2 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
      uVar4 = (uint)*pbVar3;
      *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    }
    uVar5 = uVar5 + 1;
    *in_esi = uVar4;
  }
  if (*in_esi != uVar1) {
    return -uVar5 - 1;
  }
  return uVar5;
}

/* ref: FUN_00c120b0 */
GEN_NOFRAME uint GEN_THISCALL F_00c120b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc120b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  char * pcVar8;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  F_00c11a10(this,*(undefined4 *)this);
  iVar4 = **(int * PTR32 *)((int)this + 0x38);
  **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
  if (iVar4 == 0) {
    uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
  }
  else {
    pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
    uVar3 = (uint)*pbVar2;
    *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
  }
  *(uint *)this = uVar3;
  if ((uVar3 == 10) || (uVar3 == 0xd)) {
    F_00c11c90(this);
  }
  do {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)this)) {
    default: ;
      if (param_1 != (uint *)0x0) {
        F_00c11a10(this,*(undefined4 *)this);
      }
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        *(uint *)this = uVar3;
      }
      else {
        pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        bVar1 = *pbVar2;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        *(uint *)this = (uint)bVar1;
      }
      break;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      if (param_1 == (uint *)0x0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + 4))) = 0;
      }
      break;
    case 0x5b: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,*(undefined4 *)this);
        iVar4 = **(int * PTR32 *)((int)this + 0x38);
        **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
        if (iVar4 == 0) {
          uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
          uVar3 = (uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        }
        *(uint *)this = uVar3;
        if (param_2 == 0) {
          F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
          uVar3 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                               *(undefined4 *)((int)this + 4),
                               ((char *)REFP(0x1347ed4)));
          iVar4 = F_00c489cc(0x5b);
          if (iVar4 == 0) {
            uVar7 = *(undefined4 *)((int)this + 0x34);
            pcVar8 = &REFG(undefined, 0x1347e4c);
          }
          else {
            uVar7 = *(undefined4 *)((int)this + 0x34);
            pcVar8 = ((char *)REFP(0x1347e40));
          }
          uVar5 = F_00c00790(uVar7,pcVar8,0x5b);
          F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar3,uVar5);
                    
          F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
        }
      }
      break;
    case 0x5d: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,*(undefined4 *)this);
        iVar4 = **(int * PTR32 *)((int)this + 0x38);
        **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
        if (iVar4 == 0) {
          puVar6 = (undefined4 *)F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
          puVar6 = (undefined4 *)(uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        }
        *(undefined4 * PTR32 *)this = puVar6;
        if (param_1 != (uint *)0x0) {
          uVar7 = *(undefined4 *)((int)this + 0x34);
          uVar3 = F_00c05a80(uVar7,**(int * PTR32 *)((int)this + 0x3c) + 2 + param_2,
                               (*(int * PTR32 *)((int)this + 0x3c))[1] + param_2 * -2 - 4);
          puVar6 = (undefined4 *)
                   F_00c058d0(uVar7,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4))),uVar3);
          if (puVar6[2] == 0) {
            *puVar6 = 1;
            puVar6[2] = 1;
          }
          *param_1 = uVar3;
        }
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return (uint)puVar6;
      }
      break;
    case 0xffffffff: ;
      pcVar8 = ((char *)REFP(0x1347ea4));
      if (param_1 == (uint *)0x0) {
        pcVar8 = ((char *)REFP(0x1347ebc));
      }
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar3 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),pcVar8);
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar3,
                   REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    }
  } while( true );
}

/* ref: FUN_00c123e0 */
GEN_NOFRAME uint GEN_THISCALL F_00c123e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc123e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte * pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8));
  uVar3 = *(undefined4 *)this;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = param_2;
  F_00c11a10(this,uVar3);
  iVar4 = **(int * PTR32 *)((int)this + 0x38);
  **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
  if (iVar4 == 0) {
    uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
  }
  else {
    pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
    uVar2 = (uint)*pbVar1;
    *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
  }
  *(uint *)this = uVar2;
  do {
    if (uVar2 == param_1) {
      F_00c11a10(this,*(undefined4 *)this);
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        uVar2 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
      }
      uVar3 = *(undefined4 *)((int)this + 0x34);
      *(uint *)this = uVar2;
      uVar2 = F_00c05a80(uVar3,**(int * PTR32 *)((int)this + 0x3c) + 1,
                           (*(int * PTR32 *)((int)this + 0x3c))[1] - 2);
      puVar6 = (undefined4 *)
               F_00c058d0(uVar3,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4))),uVar2);
      if (puVar6[2] != 0) {
        *(*(uint * PTR32 *)(gen_frame + 0x8)) = uVar2;
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        return (uint)puVar6;
      }
      *puVar6 = 1;
      puVar6[2] = 1;
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x8));
      *(*(uint * PTR32 *)(gen_frame + 0x8)) = uVar2;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return (uint)puVar7;
    }
    uVar3 = *(undefined4 *)this;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    default: ;
      goto switchD_00c12455_caseD_0;
    case 10: ;
    case 0xd: ;
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),((char *)REFP(0x1347f0c)));
      F_00c11a10(this,0);
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                   **(undefined4 * PTR32 *)((int)this + 0x3c));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    case 0x5c: ;
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        uVar2 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
      }
      break;
    case 0xffffffff: ;
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),((char *)REFP(0x1347ef8)));
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                   REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    }
    *(uint *)this = uVar2;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    default: ;
      iVar4 = F_00c48637(uVar2);
      if (iVar4 != 0) {
        iVar8 = 0;
        iVar4 = 0;
        do {
          iVar4 = *(int *)this - 0x30 + iVar4 * 10;
          iVar5 = **(int * PTR32 *)((int)this + 0x38);
          **(int * PTR32 *)((int)this + 0x38) = iVar5 - 1;
          if (iVar5 == 0) {
            uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
          }
          else {
            pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
            uVar2 = (uint)*pbVar1;
            *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
          }
          iVar8 = iVar8 + 1;
          *(uint *)this = uVar2;
        } while ((iVar8 < 3) && (iVar5 = F_00c48637(uVar2), iVar5 != 0));
        if (0xff < iVar4) {
          F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
          uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                               *(undefined4 *)((int)this + 4),((char *)REFP(0x1347f20)));
          F_00c11a10(this,0);
          F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                       **(undefined4 * PTR32 *)((int)this + 0x3c));
                    
          F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
        }
        F_00c11a10(this,iVar4);
        goto switchD_00c12553_caseD_ffffffff;
      }
      uVar3 = *(undefined4 *)this;
      goto LAB_00c1258a;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      goto switchD_00c12553_caseD_ffffffff;
    case 0x61: ;
      uVar3 = 7;
      break;
    case 0x62: ;
      uVar3 = 8;
      break;
    case 0x66: ;
      uVar3 = 0xc;
      break;
    case 0x6e: ;
      uVar3 = 10;
      break;
    case 0x72: ;
      uVar3 = 0xd;
      break;
    case 0x74: ;
      uVar3 = 9;
      break;
    case 0x76: ;
      uVar3 = 0xb;
      break;
    case 0xffffffff: ;
      goto switchD_00c12553_caseD_ffffffff;
    }
switchD_00c12455_caseD_0: ;
LAB_00c1258a: ;
    F_00c11a10(this,uVar3);
    iVar4 = **(int * PTR32 *)((int)this + 0x38);
    **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
    if (iVar4 == 0) {
      uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
    }
    else {
      pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
      uVar2 = (uint)*pbVar1;
      *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
    }
    *(uint *)this = uVar2;
switchD_00c12553_caseD_ffffffff: ;
    uVar2 = *(uint *)this;
  } while( true );
}

/* ref: FUN_00c12870 */
GEN_NOFRAME uint GEN_FASTCALL F_00c12870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc12870u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  *(undefined4 *)(param_1[0xf] + 4) = 0;
LAB_00c12890: ;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  default: ;
    iVar3 = F_00c4873c(*param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)param_1[0xe];
      *(int *)param_1[0xe] = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar4;
      }
      else {
        pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
        bVar1 = *pbVar2;
        *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        *param_1 = (uint)bVar1;
      }
      goto LAB_00c12890;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      iVar3 = F_00c484b8(*param_1);
      if ((iVar3 == 0) && (uVar4 = *param_1, uVar4 != 0x5f)) {
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 != 0) {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          bVar1 = *pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
          *param_1 = (uint)bVar1;
          F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          return uVar4;
        }
        uVar5 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar5;
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return uVar4;
      }
      do {
        F_00c11a10(param_1,*param_1);
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          uVar4 = (uint)*pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        }
        *param_1 = uVar4;
        iVar3 = F_00c4883f(uVar4);
      } while ((iVar3 != 0) || (*param_1 == 0x5f));
      uVar4 = F_00c11c40(param_1,*(undefined4 *)param_1[0xf],((undefined4 *)param_1[0xf])[1]);
      bVar1 = *(byte *)(uVar4 + 6);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return bVar1 + 0x100;
      }
      *param_2 = uVar4;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11d;
    }
    break;
  case 10: ;
  case 0xd: ;
    F_00c11c90(param_1);
    goto LAB_00c12890;
  case 0x22: ;
  case 0x27: ;
    F_00c123e0(param_1 GEN_EDX_ARG,*param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11e;
  case 0x2d: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x2d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x2d;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 == 0x5b) {
      uVar4 = F_00c12020(param_1);
      *(undefined4 *)(param_1[0xf] + 4) = 0;
      if ((int)uVar4 < 0) goto LAB_00c1293d;
      F_00c120b0(param_1 GEN_EDX_ARG,0,uVar4);
      *(undefined4 *)(param_1[0xf] + 4) = 0;
    }
    else {
LAB_00c1293d: ;
      uVar4 = *param_1;
      while (((uVar4 != 10 && (*param_1 != 0xd)) && (*param_1 != 0xffffffff))) {
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          uVar4 = (uint)*pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        }
        *param_1 = uVar4;
      }
    }
    goto LAB_00c12890;
  case 0x2e: ;
    F_00c11a10(param_1,*param_1);
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    uVar4 = F_00c51da0(&REFG(undefined, 0x1347f5c),uVar4);
    if (uVar4 != 0) {
      F_00c11a10(param_1,*param_1);
      iVar3 = *(int *)param_1[0xe];
      *(int *)param_1[0xe] = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
      }
      else {
        pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
        uVar4 = (uint)*pbVar2;
        *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      }
      *param_1 = uVar4;
      uVar4 = F_00c11db0(&REFG(undefined, 0x1347f60),param_1);
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return (uVar4 != 0) + 0x116;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x2e;
    }
    break;
  case 0x3c: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3c;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11a;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11a;
  case 0x3d: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3d;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x118;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x118;
  case 0x3e: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3e;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x119;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x119;
  case 0x5b: ;
    uVar4 = F_00c12020(param_1);
    if (-1 < (int)uVar4) {
      F_00c120b0(param_1 GEN_EDX_ARG,param_2,uVar4);
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11e;
    }
    if (uVar4 == 0xffffffff) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x5b;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0xc)),param_1[0x10] + 0x10,0x50);
    uVar4 = F_00c00790(param_1[0xd],((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),param_1[1],
                         ((char *)REFP(0x1347f3c)));
    F_00c11a10(param_1,0);
    F_00c00790(param_1[0xd],((char *)REFP(0x1347e5c)),uVar4,*(undefined4 *)param_1[0xf]);
                    
    F_00bb93a0(param_1[0xd],3);
  case 0x7e: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x7e;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11b;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11b;
  case 0xffffffff: ;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11f;
  }
  F_00c11f20(param_1,param_2);
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0x11c;
}

/* ref: FUN_00c13000 */
GEN_NOFRAME uint F_00c13000(unsigned int gen_a0)
{
  GEN_ENTER(0xc13000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x20) != 0x11f) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0x11f;
    return 0x11f;
  }
  uVar1 = F_00c12870(param_1,param_1 + 0x18);
  *(uint *)(param_1 + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00c13040 */
GEN_NOFRAME uint F_00c13040(unsigned int gen_a0)
{
  GEN_ENTER(0xc13040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c12870(param_1,param_1 + 0x28);
  *(uint *)(param_1 + 0x20) = uVar1;
  return uVar1;
}

/* ref: FUN_00c130c0 */
GEN_NOFRAME uint F_00c130c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc130c0u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(*in_esi + 0x3c) == 0) {
    uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f74)));
    uVar1 = F_00c11b70(in_esi[3],uVar1,0);
    return uVar1;
  }
  uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f98)),
                       *(int *)(*in_esi + 0x3c));
  uVar1 = F_00c11b70(in_esi[3],uVar1,0);
  return uVar1;
}

/* ref: FUN_00c13190 */
GEN_NOFRAME uint F_00c13190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc13190u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)(in_esi + 0x10) == in_edi) {
    uVar1 = F_00c13000(in_esi);
    return uVar1;
  }
  if (in_eax == *(int *)(in_esi + 4)) {
    uVar1 = F_00c11ae0(in_esi,in_edi);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    uVar1 = F_00c11c20(in_esi,uVar1);
    return uVar1;
  }
  F_00c11ae0(in_esi,param_4);
  uVar1 = F_00c11ae0(in_esi,in_edi);
  uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347fc0)),
                       uVar1);
  uVar1 = F_00c11c20(in_esi,uVar1);
  return uVar1;
}

/* ref: FUN_00c13260 */
GEN_NOFRAME uint F_00c13260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc13260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c273d0(*(undefined4 *)(in_ecx + 0x30),in_eax);
  in_esi[4] = 0xffffffff;
  in_esi[5] = 0xffffffff;
  *in_esi = 4;
  in_esi[2] = uVar1;
  return uVar1;
}

/* ref: FUN_00c13280 */
GEN_NOFRAME uint F_00c13280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13280u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(in_esi + 0x10) != 0x11d) {
    uVar2 = F_00c11ae0(in_esi,0x11d);
    uVar2 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(in_esi,uVar2);
  }
  uVar1 = *(undefined4 *)(in_esi + 0x18);
  F_00c13000(in_esi);
  uVar2 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar1);
  in_edi[4] = 0xffffffff;
  in_edi[5] = 0xffffffff;
  *in_edi = 4;
  in_edi[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00c132e0 */
GEN_NOFRAME ushort F_00c132e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc132e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = *(int * PTR32 *)(param_1 + 0x30);
  iVar4 = *piVar3;
  iVar7 = *(int *)(iVar4 + 0x38);
  piVar1 = (int *)(iVar4 + 0x38);
  if (iVar7 < (short)piVar3[0xc] + 1) {
    uVar5 = F_00c11980(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar4 + 0x18),piVar1,0xc,
                         0x7fff,((char *)REFP(0x1347fec)));
    *(uint *)(iVar4 + 0x18) = uVar5;
  }
  if (iVar7 < *piVar1) {
    iVar6 = iVar7 * 0xc;
    do {
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar4 + 0x18)))) = 0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar4 + 0x18) + (short)piVar3[0xc] * 0xc))) = param_2;
  if (((*(byte *)(param_2 + 5) & 3) != 0) && ((*(byte *)(iVar4 + 5) & 4) != 0)) {
    F_00c01900(*(undefined4 *)(param_1 + 0x34),iVar4,param_2);
  }
  uVar2 = *(ushort *)(piVar3 + 0xc);
  *(ushort *)(piVar3 + 0xc) = uVar2 + 1;
  return uVar2;
}

/* ref: FUN_00c133e0 */
GEN_NOFRAME unsigned int F_00c133e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc133e0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + (char)in_edx;
  for (; in_edx != 0; in_edx = in_edx - 1) {
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + ((uint)*(byte *)((int)piVar1 + 0x32) - in_edx) * 2 + 0xac))) * 0xc)))
         = piVar1[6];
  }
  return 0;
}

/* ref: FUN_00c13420 */
GEN_NOFRAME uint F_00c13420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13420u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(in_eax + 0x30);
  bVar1 = *(byte *)((int)piVar2 + 0x32);
  while (in_edx < (int)(uint)bVar1) {
    *(char *)((int)piVar2 + 0x32) = *(char *)((int)piVar2 + 0x32) - 1;
    *((int *)GEN_TOP((*(int *)(*piVar2 + 0x18) + 8 +
            (uint)*((ushort *)GEN_TOP(((int)piVar2 + (uint)*(byte *)((int)piVar2 + 0x32) * 2 + 0xac))) * 0xc))) =
         piVar2[6];
    bVar1 = *(byte *)((int)piVar2 + 0x32);
  }
  return (uint)piVar2;
}

/* ref: FUN_00c13460 */
GEN_NOFRAME uint F_00c13460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc13460u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  
  iVar3 = *param_1;
  iVar6 = *(int *)(iVar3 + 0x24);
  piVar1 = (int *)(iVar3 + 0x24);
  uVar4 = 0;
  if (*(char *)(iVar3 + 0x48) != '\0') {
    pbVar5 = (byte *)(param_1 + 0xd);
    do {
      if (((uint)pbVar5[-1] == *param_3) && ((uint)*pbVar5 == param_3[2])) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 2;
    } while ((int)uVar4 < (int)(uint)*(byte *)(iVar3 + 0x48));
  }
  if (0x3c < *(byte *)(iVar3 + 0x48) + 1) {
    if (*(int *)(iVar3 + 0x3c) == 0) {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f74)),0x3c,
                           ((char *)REFP(0x1348018)));
    }
    else {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f98)),
                           *(int *)(iVar3 + 0x3c));
    }
    F_00c11b70(param_1[3],uVar4,0);
  }
  if (*piVar1 < (int)(*(byte *)(iVar3 + 0x48) + 1)) {
    uVar4 = F_00c11980(param_1[4],*(undefined4 *)(iVar3 + 0x1c),piVar1,4,0x7ffffffd,&REFG(undefined, 0x14c5bf0))
    ;
    *(uint *)(iVar3 + 0x1c) = uVar4;
  }
  if (iVar6 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x1c) + iVar6 * 4))) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar3 + 0x1c) + (uint)*(byte *)(iVar3 + 0x48) * 4))) = param_2;
  if (((*(byte *)(param_2 + 5) & 3) != 0) && ((*(byte *)(iVar3 + 5) & 4) != 0)) {
    F_00c01900(param_1[4],iVar3,param_2);
  }
  *((char *)GEN_TOP(((int)param_1 + (uint)*(byte *)(iVar3 + 0x48) * 2 + 0x33))) = (char)*param_3;
  *((char *)GEN_TOP(((int)param_1 + (uint)*(byte *)(iVar3 + 0x48) * 2 + 0x34))) = (char)param_3[2];
  bVar2 = *(byte *)(iVar3 + 0x48);
  *(byte *)(iVar3 + 0x48) = bVar2 + 1;
  return (uint)bVar2;
}

/* ref: FUN_00c135f0 */
GEN_NOFRAME uint F_00c135f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc135f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int * piVar3;
  ushort * puVar4;
  
  if (param_1 == (int *)0x0) {
    param_3[4] = 0xffffffff;
    param_3[5] = 0xffffffff;
    *param_3 = 8;
    param_3[2] = 0xff;
    return 8;
  }
  iVar1 = *(byte *)((int)param_1 + 0x32) - 1;
  if (-1 < iVar1) {
    puVar4 = (ushort *)((int)param_1 + iVar1 * 2 + 0xac);
    do {
      if (param_2 == *((int *)GEN_TOP((*(int *)(*param_1 + 0x18) + (uint)*puVar4 * 0xc)))) {
        if (-1 < iVar1) {
          param_3[4] = 0xffffffff;
          param_3[5] = 0xffffffff;
          *param_3 = 6;
          param_3[2] = iVar1;
          if ((param_4 == 0) && (piVar3 = (int *)param_1[5], piVar3 != (int *)0x0)) {
            while (iVar1 < (int)(uint)*(byte *)(piVar3 + 2)) {
              piVar3 = (int *)*piVar3;
              if (piVar3 == (int *)0x0) {
                return 6;
              }
            }
            *(undefined1 *)((int)piVar3 + 9) = 1;
          }
          return 6;
        }
        break;
      }
      iVar1 = iVar1 - 1;
      puVar4 = puVar4 - 1;
    } while (-1 < iVar1);
  }
  uVar2 = F_00c135f0((int *)param_1[2],param_2,param_3,0);
  if (uVar2 != 8) {
    uVar2 = F_00c13460(param_1,param_2,param_3);
    param_3[2] = uVar2;
    *param_3 = 7;
    return 7;
  }
  return 8;
}

/* ref: FUN_00c136d0 */
GEN_NOFRAME uint F_00c136d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc136d0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar3 = F_00c11ae0(in_eax,0x11d);
    uVar3 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(in_eax,uVar3);
  }
  uVar1 = *(undefined4 *)(in_eax + 0x18);
  F_00c13000(in_eax);
  uVar2 = *(undefined4 *)(in_eax + 0x30);
  uVar3 = F_00c135f0(uVar2,uVar1,param_2,1);
  if (uVar3 == 8) {
    uVar3 = F_00c273d0(uVar2,uVar1);
    *(uint *)(param_2 + 8) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00c13740 */
GEN_NOFRAME uint F_00c13740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc13740u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_3 - param_4;
  iVar1 = *(int *)(in_eax + 0x30);
  iVar2 = *in_ecx;
  if ((iVar2 == 0xd) || (iVar2 == 0xe)) {
    iVar5 = iVar5 + 1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = F_00c27480(iVar1,in_ecx,iVar5);
    if (1 < iVar5) {
      uVar4 = F_00c27270(iVar1,iVar5 - 1);
    }
  }
  else {
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = F_00c27e50(iVar1,in_ecx);
    }
    if (0 < iVar5) {
      uVar3 = *(undefined4 *)(iVar1 + 0x24);
      F_00c27270(iVar1,iVar5);
      uVar4 = F_00c278f0(iVar1,uVar3,iVar5);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00c13810 */
GEN_NOFRAME uint F_00c13810(unsigned int gen_a0)
{
  GEN_ENTER(0xc13810u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0x14) = *puVar1;
  F_00c13420(*(undefined4 *)(in_esi + 0xc),(uint)*(byte *)(puVar1 + 2));
  if (*(char *)((int)puVar1 + 9) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *(uint *)(in_esi + 0x24) = (uint)*(byte *)(in_esi + 0x32);
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: FUN_00c13860 */
GEN_NOFRAME uint F_00c13860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc13860u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  
  piVar2 = *(int * PTR32 *)(param_1 + 0x30);
  iVar4 = *piVar2;
  piVar1 = (int *)(iVar4 + 0x34);
  iVar5 = *piVar1;
  if (iVar5 < piVar2[0xb] + 1) {
    uVar3 = F_00c11980(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar4 + 0x10),piVar1,4,
                         0x3ffff,((char *)REFP(0x1348048)));
    *(uint *)(iVar4 + 0x10) = uVar3;
  }
  if (iVar5 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + iVar5 * 4))) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar4 + 0x10) + piVar2[0xb] * 4))) = *param_2;
  piVar2[0xb] = piVar2[0xb] + 1;
  if (((*(byte *)(*param_2 + 5) & 3) != 0) && ((*(byte *)(iVar4 + 5) & 4) != 0)) {
    F_00c01900(*(undefined4 *)(param_1 + 0x34),iVar4,*param_2);
  }
  uVar3 = F_00c27830(piVar2,0x24,0,piVar2[0xb] - 1);
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  *param_3 = 0xb;
  param_3[2] = uVar3;
  iVar4 = 0;
  if (*(char *)(*param_2 + 0x48) != '\0') {
    pcVar6 = (char *)((int)param_2 + 0x33);
    do {
      F_00c27800(piVar2,(*pcVar6 == '\x06') - 1 & 4,0,(uint)(byte)pcVar6[1],0);
      uVar3 = (uint)*(byte *)(*param_2 + 0x48);
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 2;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

/* ref: FUN_00c13960 */
GEN_NOFRAME uint F_00c13960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13960u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *(uint *)(param_2 + 0x34);
  uVar2 = F_00c05e50(uVar1);
  *in_eax = uVar2;
  in_eax[2] = *(uint *)(param_2 + 0x30);
  in_eax[3] = param_2;
  in_eax[4] = uVar1;
  *(uint * PTR32 *)(param_2 + 0x30) = in_eax;
  in_eax[7] = 0xffffffff;
  in_eax[8] = 0xffffffff;
  in_eax[6] = 0;
  in_eax[9] = 0;
  in_eax[10] = 0;
  in_eax[0xb] = 0;
  *(undefined2 *)(in_eax + 0xc) = 0;
  *(undefined1 *)((int)in_eax + 0x32) = 0;
  in_eax[5] = 0;
  *(undefined4 *)(uVar2 + 0x20) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(uVar2 + 0x4b) = 2;
  uVar3 = F_00c05020(uVar1,0,0);
  in_eax[1] = uVar3;
  puVar4 = *(uint * PTR32 *)(uVar1 + 8);
  *puVar4 = uVar3;
  puVar4[2] = 5;
  if (*(int *)(uVar1 + 0x1c) - *(int *)(uVar1 + 8) < 0x11) {
    F_00bb8d50(uVar1,1);
  }
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 0x10;
  puVar4 = *(uint * PTR32 *)(uVar1 + 8);
  *puVar4 = uVar2;
  puVar4[2] = 9;
  if (*(int *)(uVar1 + 0x1c) - *(int *)(uVar1 + 8) < 0x11) {
    puVar4 = (uint *)F_00bb8d50(uVar1,1);
  }
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 0x10;
  return (uint)puVar4;
}

/* ref: FUN_00c13a20 */
GEN_NOFRAME uint F_00c13a20(unsigned int gen_a0)
{
  GEN_ENTER(0xc13a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x34);
  piVar2 = *(int * PTR32 *)(param_1 + 0x30);
  iVar3 = *piVar2;
  F_00c13420(param_1,0);
  F_00c279d0(piVar2,((undefined4)(uint)(0)),((undefined4)(uint)(0)));
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0xc),*(int *)(iVar3 + 0x2c) * 4,piVar2[6] * 4 );
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0xc) = uVar4;
  *(int *)(iVar3 + 0x2c) = piVar2[6];
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x14),*(int *)(iVar3 + 0x30) * 4, piVar2[6] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x14) = uVar4;
  *(int *)(iVar3 + 0x30) = piVar2[6];
  if (piVar2[10] + 1U < 0x10000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 8),*(int *)(iVar3 + 0x28) << 4, piVar2[10] << 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 8) = uVar4;
  *(int *)(iVar3 + 0x28) = piVar2[10];
  if (piVar2[0xb] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x10),*(int *)(iVar3 + 0x34) * 4, piVar2[0xb] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x10) = uVar4;
  *(int *)(iVar3 + 0x34) = piVar2[0xb];
  if ((int)(short)piVar2[0xc] + 1U < 0x15555556) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x18),*(int *)(iVar3 + 0x38) * 0xc, (short)piVar2[0xc] * 0xc);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x18) = uVar4;
  *(int *)(iVar3 + 0x38) = (int)(short)piVar2[0xc];
  if (*(byte *)(iVar3 + 0x48) + 1 < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x1c),*(int *)(iVar3 + 0x24) * 4, (uint)*(byte *)(iVar3 + 0x48) * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x1c) = uVar4;
  *(uint *)(iVar3 + 0x24) = (uint)*(byte *)(iVar3 + 0x48);
  *(int *)(param_1 + 0x30) = piVar2[2];
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - 0x20;
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 == 0x11d) || (uVar4 == 0x11e)) {
    uVar4 = F_00c11c40(param_1,*(int *)(param_1 + 0x18) + 0x10, *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))));
  }
  return uVar4;
}

/* ref: FUN_00c13c00 */
GEN_NOFRAME uint F_00c13c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13c00u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_eax + 0x30);
  F_00c27ed0(uVar1,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_00c28490(uVar1,param_2,((undefined1 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00c13c40 */
GEN_NOFRAME uint F_00c13c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13c40u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,in_edi,0);
  F_00c27f20(*(undefined4 *)(in_esi + 0x30),in_edi);
  if (*(int *)(in_esi + 0x10) != 0x5d) {
    uVar1 = F_00c11ae0(in_esi,0x5d);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  uVar1 = F_00c13000(in_esi);
  return uVar1;
}

/* ref: FUN_00c13c90 */
GEN_NOFRAME uint F_00c13c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_esi;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  in_esi = *(int *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(in_esi + 0x24);
  if (*(int *)(param_1 + 0x10) == 0x11d) {
    if (0x7ffffffd < *(int *)(param_2 + 0x1c)) {
      F_00c130c0(in_esi);
    }
    F_00c13280(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    F_00c13c40(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x10) != 0x3d) {
    uVar2 = F_00c11ae0(param_1,0x3d);
    uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(param_1,uVar2);
  }
  F_00c13000(param_1);
  uVar2 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x0)));
  F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x18)),0);
  uVar3 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x18)));
  uVar2 = F_00c27800(in_esi,9,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x18) + 8))),uVar2,uVar3);
  *(undefined4 *)(in_esi + 0x24) = uVar1;
  return uVar2;
}

/* ref: FUN_00c13da0 */
GEN_NOFRAME unsigned int F_00c13da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13da0u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int iVar1;
  
  if (in_esi[9] != 0) {
    iVar1 = *in_esi;
    if ((iVar1 != 0xd) && (iVar1 != 0xe)) {
      if (iVar1 != 0) {
        F_00c27e50(in_edi,in_esi);
      }
      F_00c27860(in_edi,*(undefined4 *)(in_esi[6] + 8),in_esi[8],in_esi[9]);
      return;
    }
    F_00c27480(in_edi,in_esi,0xffffffff);
    F_00c27860(in_edi,*(undefined4 *)(in_esi[6] + 8),in_esi[8],0xffffffff);
    in_esi[8] = in_esi[8] - 1;
  }
  return;
}

/* ref: FUN_00c13e40 */
GEN_NOFRAME uint F_00c13e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc13e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  int * in_edi;
  undefined4 in_eax_00;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  in_edi = *(int * PTR32 *)(in_ecx + 0x30);
  in_eax_00 = *(undefined4 *)(in_ecx + 4);
  uVar4 = F_00c27800(in_edi,10,0,0,0);
  in_eax[4] = 0xffffffff;
  in_eax[5] = 0xffffffff;
  *in_eax = 0xb;
  in_eax[2] = uVar4;
  uVar2 = *(undefined4 *)(in_ecx + 0x30);
  (*(int *)(gen_frame + 0x2c)) = 0;
  ((byte *)(gen_frame + 0x8))[0x1c] = 0;
  ((byte *)(gen_frame + 0x8))[0x1d] = 0;
  ((byte *)(gen_frame + 0x8))[0x1e] = 0;
  ((byte *)(gen_frame + 0x8))[0x1f] = 0;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  ((byte *)(gen_frame + 0x8))[0x21] = 0;
  ((byte *)(gen_frame + 0x8))[0x22] = 0;
  ((byte *)(gen_frame + 0x8))[0x23] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = in_eax;
  ((byte *)(gen_frame + 0x8))[0x10] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x11] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x12] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x13] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x14] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x15] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x16] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x17] = 0xff;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  F_00c27e50(uVar2,in_eax);
  if (*(int *)(in_ecx + 0x10) != 0x7b) {
    uVar5 = F_00c11ae0(in_ecx,0x7b);
    uVar5 = F_00c00790(*(undefined4 *)(in_ecx + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_ecx,uVar5);
  }
  F_00c13000(in_ecx);
  while (*(int *)(in_ecx + 0x10) != 0x7d) {
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0) {
      F_00c27e50(in_edi,((byte *)(gen_frame + 0x8)));
      ((byte *)(gen_frame + 0x8))[0] = 0;
      ((byte *)(gen_frame + 0x8))[1] = 0;
      ((byte *)(gen_frame + 0x8))[2] = 0;
      ((byte *)(gen_frame + 0x8))[3] = 0;
      if ((*(int *)(gen_frame + 0x2c)) == 0x32) {
        F_00c27860(in_edi,*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) + 8))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),0x32);
        (*(int *)(gen_frame + 0x2c)) = 0;
      }
    }
    if (*(int *)(in_ecx + 0x10) == 0x5b) {
LAB_00c1402b: ;
      F_00c13c90(in_ecx,((byte *)(gen_frame + 0x8)));
    }
    else {
      if (*(int *)(in_ecx + 0x10) == 0x11d) {
        F_00c13040(in_ecx);
        if (*(int *)(in_ecx + 0x20) == 0x3d) goto LAB_00c1402b;
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x8)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))) {
          piVar3 = *(int * PTR32 *)(in_ecx + 0x30);
          if (*(int *)(*piVar3 + 0x3c) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),0x7ffffffd,
                                 ((char *)REFP(0x1348078)));
            iVar6 = piVar3[3];
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar3 + 0x3c));
            iVar6 = piVar3[3];
          }
          goto LAB_00c13f8d;
        }
      }
      else {
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x8)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))) {
          piVar3 = *(int * PTR32 *)(in_ecx + 0x30);
          if (*(int *)(*piVar3 + 0x3c) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),0x7ffffffd,
                                 ((char *)REFP(0x1348078)));
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar3 + 0x3c));
          }
          iVar6 = piVar3[3];
LAB_00c13f8d: ;
          F_00c11b70(iVar6,uVar5,0);
        }
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) + 1;
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
    }
    if (*(int *)(in_ecx + 0x10) == 0x2c) {
      F_00c13000(in_ecx);
    }
    else {
      if (*(int *)(in_ecx + 0x10) != 0x3b) break;
      F_00c13000(in_ecx);
    }
  }
  F_00c13190(in_eax_00,in_ecx,0x7d,0x7b);
  F_00c13da0(((byte *)(gen_frame + 0x8)),in_edi);
  puVar1 = ((uint *)GEN_TOP((*(int *)(*in_edi + 0xc) + uVar4 * 4)));
  uVar5 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  *puVar1 = uVar5 << 0x17 | *puVar1 & 0x7fffff;
  puVar1 = ((uint *)GEN_TOP((*(int *)(*in_edi + 0xc) + uVar4 * 4)));
  uVar4 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
  uVar4 = (uVar4 << 0xe ^ *puVar1) & 0x7fc000;
  *puVar1 = *puVar1 ^ uVar4;
  return uVar4;
}

/* ref: FUN_00c140d0 */
GEN_NOFRAME uint F_00c140d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc140d0u, gen_a0, 0u, 0u, 0u);
  int in_edi = (int)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int in_edx;
  
  piVar1 = *(int * PTR32 *)(in_edi + 0x30);
  iVar2 = *piVar1;
  in_edx = 0;
  *(undefined1 *)(iVar2 + 0x4a) = 0;
  if (*(int *)(in_edi + 0x10) != 0x29) {
    while (*(int *)(in_edi + 0x10) != 0x117) {
      if (*(int *)(in_edi + 0x10) == 0x11d) {
        uVar3 = *(undefined4 *)(in_edi + 0x18);
        F_00c13000(in_edi);
        piVar4 = *(int * PTR32 *)(in_edi + 0x30);
        if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + in_edx)) {
          if (*(int *)(*piVar4 + 0x3c) == 0) {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                                 ((char *)REFP(0x1348008)));
          }
          else {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar4 + 0x3c));
          }
          F_00c11b70(piVar4[3],uVar7,0);
        }
        uVar5 = F_00c132e0(in_edi,uVar3);
        *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + in_edx) * 2 + 0xac))) = uVar5
        ;
        in_edx = in_edx + 1;
      }
      else {
        F_00c11c20(in_edi,((char *)REFP(0x1348094)));
      }
      if ((*(char *)(iVar2 + 0x4a) != '\0') || (*(int *)(in_edi + 0x10) != 0x2c)) goto LAB_00c14259;
      F_00c13000(in_edi);
    }
    F_00c13000(in_edi);
    uVar7 = F_00c11c40(in_edi,&REFG(undefined, 0x1348090),3);
    piVar4 = *(int * PTR32 *)(in_edi + 0x30);
    if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + in_edx)) {
      if (*(int *)(*piVar4 + 0x3c) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar4 + 0x3c));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(in_edi,uVar7);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + in_edx) * 2 + 0xac))) = uVar5;
    in_edx = in_edx + 1;
    *(undefined1 *)(iVar2 + 0x4a) = 7;
  }
LAB_00c14259: ;
  F_00c133e0(in_edi,in_edx);
  *(byte *)(iVar2 + 0x49) = *(char *)((int)piVar1 + 0x32) - (*(byte *)(iVar2 + 0x4a) & 1);
  uVar7 = F_00c27270(piVar1,(uint)*(byte *)((int)piVar1 + 0x32));
  return uVar7;
}

/* ref: FUN_00c14290 */
GEN_NOFRAME uint F_00c14290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc14290u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  int in_esi;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  F_00c13960(((int *)(gen_frame + 0x10)),param_1);
  *(undefined4 *)(((int *)(gen_frame + 0x10))[0] + 0x3c) = param_4;
  if (*(int *)(param_1 + 0x10) != 0x28) {
    uVar3 = F_00c11ae0(param_1,0x28);
    uVar3 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  if (param_3 != 0) {
    uVar3 = F_00c11c40(param_1,&REFG(undefined, 0x13480b0),4);
    in_esi = *(int *)(param_1 + 0x30);
    if (200 < *(byte *)(in_esi + 0x32) + 1) {
      F_00c130c0(in_esi);
    }
    uVar2 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP((in_esi + 0xac + (uint)*(byte *)(in_esi + 0x32) * 2))) = uVar2;
    piVar1 = *(int * PTR32 *)(param_1 + 0x30);
    *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + '\x01';
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*(byte *)((int)piVar1 + 0x32) * 2 + 0xaa))) * 0xc))) =
         piVar1[6];
  }
  F_00c140d0(param_1);
  if (*(int *)(param_1 + 0x10) != 0x29) {
    uVar3 = F_00c11ae0(param_1,0x29);
    uVar3 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  F_00c16290(param_1);
  *(undefined4 *)(((int *)(gen_frame + 0x10))[0] + 0x40) = *(undefined4 *)(param_1 + 4);
  F_00c13190(param_4,param_1,0x106,0x109);
  F_00c13a20(param_1);
  uVar3 = F_00c13860(param_1,((int *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c14400 */
GEN_NOFRAME uint F_00c14400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc14400u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1;
  F_00c14ca0(in_esi,in_edi,0);
  while (*(int *)(in_esi + 0x10) == 0x2c) {
    F_00c13000(in_esi);
    F_00c27e50(*(undefined4 *)(in_esi + 0x30),in_edi);
    F_00c14ca0(in_esi,in_edi,0);
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c14440 */
GEN_NOFRAME uint F_00c14440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc14440u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int in_eax_00;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_eax + 0x10);
  iVar2 = *(int *)(in_eax + 0x30);
  in_eax_00 = *(int *)(in_eax + 4);
  if (iVar1 == 0x28) {
    if (in_eax_00 != *(int *)(in_eax + 8)) {
      F_00c11c20(in_eax,((char *)REFP(0x13480b8)));
    }
    F_00c13000(in_eax);
    if (*(int *)(in_eax + 0x10) == 0x29) {
      ((int *)(gen_frame + 0x8))[0] = 0;
    }
    else {
      F_00c14400(in_eax,((int *)(gen_frame + 0x8)));
      F_00c27480(iVar2,((int *)(gen_frame + 0x8)),0xffffffff);
    }
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
  }
  else if (iVar1 == 0x7b) {
    F_00c13e40(((int *)(gen_frame + 0x8)),in_eax);
  }
  else {
    if (iVar1 != 0x11e) {
      uVar3 = F_00c11c20(in_eax,((char *)REFP(0x13480ec)));
      return uVar3;
    }
    uVar3 = F_00c273d0(iVar2,*(undefined4 *)(in_eax + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    ((int *)(gen_frame + 0x8))[0] = 4;
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    F_00c13000(in_eax);
  }
  iVar1 = param_2[2];
  if ((((int *)(gen_frame + 0x8))[0] == 0xd) || (((int *)(gen_frame + 0x8))[0] == 0xe)) {
    iVar4 = -1;
  }
  else {
    if (((int *)(gen_frame + 0x8))[0] != 0) {
      F_00c27e50(iVar2,((int *)(gen_frame + 0x8)));
    }
    iVar4 = (*(int *)(iVar2 + 0x24) - iVar1) - 1;
  }
  uVar3 = F_00c27800(iVar2,0x1c,iVar1,iVar4 + 1,2);
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  *param_2 = 0xd;
  param_2[2] = uVar3;
  uVar3 = F_00c27740(iVar2,in_eax_00);
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  return uVar3;
}

/* ref: FUN_00c14580 */
GEN_NOFRAME uint F_00c14580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc14580u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_eax_00;
  uint uVar1;
  
  if (*(int *)(in_eax + 0x10) == 0x28) {
    in_eax_00 = *(undefined4 *)(in_eax + 4);
    F_00c13000(in_eax);
    F_00c14ca0(in_eax,param_2,0);
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
    uVar1 = F_00c27a80(*(undefined4 *)(in_eax + 0x30),param_2);
    return uVar1;
  }
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar1 = F_00c11c20(in_eax,((char *)REFP(0x1348108)));
    return uVar1;
  }
  uVar1 = F_00c136d0(in_eax,param_2);
  return uVar1;
}

/* ref: FUN_00c145f0 */
GEN_NOFRAME uint F_00c145f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc145f0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(in_esi + 0x30);
  F_00c14580(in_esi,in_edi);
  uVar4 = *(int *)(in_esi + 0x10) - 0x28;
  uVar5 = uVar4;
  if (uVar4 < 0xf7) {
    do {
      uVar5 = (uint)(&REFG(byte, 0xc147dc))[(int)(uVar4)];
      switch((unsigned int)(uintptr_t)(uVar4 + 0x28)) {
      case 0x28: ;
      case 0x7b: ;
      case 0x11e: ;
                    
        F_00c27e50(uVar1,in_edi);
        F_00c14440(in_esi,in_edi);
        break;
      default: ;
        goto switchD_00c14627_caseD_29;
      case 0x2e: ;
        uVar3 = *(undefined4 *)(in_esi + 0x30);
        F_00c27ed0(uVar3,in_edi);
        F_00c13000(in_esi);
        if (*(int *)(in_esi + 0x10) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar2 = *(undefined4 *)(in_esi + 0x18);
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar2);
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x8))[0] = 4;
        F_00c28490(uVar3,in_edi,((undefined4 *)(gen_frame + 0x8)));
        break;
      case 0x3a: ;
        F_00c13000(in_esi);
        if (*(int *)(in_esi + 0x10) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar3 = *(undefined4 *)(in_esi + 0x18);
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar3);
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x8))[0] = 4;
        F_00c28130(uVar1,in_edi,((undefined4 *)(gen_frame + 0x8)));
        F_00c14440(in_esi,in_edi);
        break;
      case 0x5b: ;
        F_00c27ed0(uVar1,in_edi);
        F_00c13000(in_esi);
        F_00c14ca0(in_esi,((undefined4 *)(gen_frame + 0x8)),0);
        F_00c27f20(*(undefined4 *)(in_esi + 0x30),((undefined4 *)(gen_frame + 0x8)));
        if (*(int *)(in_esi + 0x10) != 0x5d) {
          uVar5 = F_00c11ae0(in_esi,0x5d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        F_00c13000(in_esi);
        F_00c28490(uVar1,in_edi,((undefined4 *)(gen_frame + 0x8)));
      }
      uVar4 = *(int *)(in_esi + 0x10) - 0x28;
      uVar5 = uVar4;
    } while (uVar4 < 0xf7);
switchD_00c14627_caseD_29: ;
                    
  }
  return uVar5;
}

/* ref: FUN_00c148e0 */
GEN_NOFRAME uint F_00c148e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc148e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 0x10))) {
  case 0x7b: ;
    uVar2 = F_00c13e40(in_eax,param_2);
    return uVar2;
  default: ;
    uVar2 = F_00c145f0(param_2,in_eax);
    return uVar2;
  case 0x107: ;
    *in_eax = 3;
    in_eax[2] = 0;
    break;
  case 0x109: ;
    F_00c13000(param_2);
    uVar2 = F_00c14290(param_2,in_eax,0,*(undefined4 *)(param_2 + 4));
    return uVar2;
  case 0x10d: ;
    *in_eax = 1;
    in_eax[2] = 0;
    break;
  case 0x113: ;
    *in_eax = 2;
    in_eax[2] = 0;
    break;
  case 0x117: ;
    piVar1 = *(int * PTR32 *)(param_2 + 0x30);
    if (*(char *)(*piVar1 + 0x4a) == '\0') {
      F_00c11c20(param_2,((char *)REFP(0x134811c)));
    }
    *(byte *)(*piVar1 + 0x4a) = *(byte *)(*piVar1 + 0x4a) & 0xfb;
    uVar2 = F_00c27800(piVar1,0x25,0,1,0);
    *in_eax = 0xe;
    in_eax[2] = uVar2;
    break;
  case 0x11c: ;
    in_eax[2] = 0;
    in_eax[4] = 0xffffffff;
    in_eax[5] = 0xffffffff;
    *in_eax = 5;
    *(undefined8 *)(in_eax + 2) = *(undefined8 *)(param_2 + 0x18);
    uVar2 = F_00c13000(param_2);
    return uVar2;
  case 0x11e: ;
    F_00c13260(*(undefined4 *)(param_2 + 0x18),param_2,in_eax);
    uVar2 = F_00c13000(param_2);
    return uVar2;
  }
  in_eax[5] = 0xffffffff;
  in_eax[4] = 0xffffffff;
  uVar2 = F_00c13000(param_2);
  return uVar2;
}

/* ref: FUN_00c14af0 */
GEN_NOFRAME uint F_00c14af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc14af0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(in_eax)) {
  case 0x25: ;
    return 4;
  default: ;
    return 0xf;
  case 0x2a: ;
    return 2;
  case 0x2b: ;
    return 0;
  case 0x2d: ;
    return 1;
  case 0x2f: ;
    return 3;
  case 0x3c: ;
    return 9;
  case 0x3e: ;
    return 0xb;
  case 0x5e: ;
    return 5;
  case 0x101: ;
    return 0xd;
  case 0x10f: ;
    return 0xe;
  case 0x116: ;
    return 6;
  case 0x118: ;
    return 8;
  case 0x119: ;
    return 0xc;
  case 0x11a: ;
    return 10;
  case 0x11b: ;
    return 7;
  }
}

/* ref: FUN_00c14ca0 */
GEN_NOFRAME uint F_00c14ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc14ca0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short * psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0x23) {
    uVar5 = 2;
  }
  else if (iVar2 == 0x2d) {
    uVar5 = 0;
  }
  else if (iVar2 != 0x10e) {
    F_00c148e0(param_2,param_1);
    goto LAB_00c14d03;
  }
  F_00c13000(param_1);
  F_00c14ca0(param_1,param_2,8);
  F_00c28640(*(undefined4 *)(param_1 + 0x30),uVar5,param_2);
LAB_00c14d03: ;
  uVar3 = F_00c14af0(*(undefined4 *)(param_1 + 0x10));
  while ((uVar3 != 0xf && ((*(uint *)&gen_a2) < (byte)(&REFG(undefined, 0x110e8c0))[(int)(uVar3 * 2)]))) {
    F_00c13000(param_1);
    F_00c286f0(*(undefined4 *)(param_1 + 0x30),uVar3,param_2);
    uVar4 = F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x8)),(uint)(byte)(&REFG(undefined, 0x110e8c1))[(int)(uVar3 * 2)]);
    F_00c287a0(*(undefined4 *)(param_1 + 0x30),uVar3,param_2,((undefined1 *)(gen_frame + 0x8)));
    uVar3 = uVar4;
  }
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return uVar3;
}

/* ref: FUN_00c14e20 */
GEN_NOFRAME uint F_00c14e20(unsigned int gen_a0)
{
  GEN_ENTER(0xc14e20u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0x4));
  F_00c16290(in_eax);
  puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar2;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar2 + 2));
  if (*(char *)((int)puVar2 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  uVar3 = F_00c27a60(iVar1,puVar2[1]);
  return uVar3;
}

/* ref: FUN_00c14ea0 */
GEN_NOFRAME uint F_00c14ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc14ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_edi = (int)gen_a2;
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_ecx + 0x30);
  iVar2 = *(int *)(iVar1 + 0x24);
  bVar3 = false;
  uVar4 = 0;
  if (in_eax != (int *)0x0) {
    do {
      if (in_eax[2] == 9) {
        if (in_eax[4] == *(int *)(in_edi + 8)) {
          bVar3 = true;
          in_eax[4] = iVar2;
        }
        if (in_eax[5] == *(int *)(in_edi + 8)) {
          bVar3 = true;
          in_eax[5] = iVar2;
        }
      }
      in_eax = (int *)*in_eax;
    } while (in_eax != (int *)0x0);
    uVar4 = 0;
    if (bVar3) {
      F_00c27800(iVar1,0,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(in_edi + 8),0);
      uVar4 = F_00c27270(iVar1,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00c14f00 */
GEN_NOFRAME uint F_00c14f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc14f00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_2 + 8);
  if ((*piVar1 < 6) || (9 < *piVar1)) {
    F_00c11c20(param_1,((char *)REFP(0x1348148)));
  }
  if (*(int *)(param_1 + 0x10) == 0x2c) {
    F_00c13000(param_1);
    ((int *)(gen_frame + 0x20))[0] = param_2;
    F_00c145f0(param_1,((int *)(gen_frame + 0x28)));
    if (((int *)(gen_frame + 0x28))[0] == 6) {
      F_00c14ea0(param_2,param_1,((int *)(gen_frame + 0x28)));
    }
    if ((int)(200 - (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) < (int)param_3) {
      F_00c130c0(*(undefined4 *)(param_1 + 0x30));
    }
    F_00c14f00(param_1,(int)((int *)(gen_frame + 0x20)),param_3 + 1);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x3d) {
      uVar5 = F_00c11ae0(param_1,0x3d);
      uVar5 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar5);
      F_00c11c20(param_1,uVar5);
    }
    F_00c13000(param_1);
    uVar5 = F_00c14400(param_1,((undefined4 *)(gen_frame + 0x8)));
    if (uVar5 == param_3) {
      F_00c27510(*(undefined4 *)(param_1 + 0x30),((undefined4 *)(gen_frame + 0x8)));
      uVar5 = F_00c28040(*(undefined4 *)(param_1 + 0x30),piVar1,((undefined4 *)(gen_frame + 0x8)));
      return uVar5;
    }
    F_00c13740(param_1,((undefined4 *)(gen_frame + 0x8)),param_3,uVar5);
    if ((int)param_3 < (int)uVar5) {
      piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x24)));
      *piVar2 = *piVar2 + (param_3 - uVar5);
    }
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(iVar3 + 0x24);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0xc;
  (*(int *)(gen_frame + 0x10)) = iVar4 - 1;
  uVar5 = F_00c28040(iVar3,piVar1,((undefined4 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: FUN_00c15060 */
GEN_NOFRAME uint F_00c15060(unsigned int gen_a0)
{
  GEN_ENTER(0xc15060u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x8)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x8))[0] = 3;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
  }
  F_00c282a0(*(undefined4 *)(in_esi + 0x30),((byte *)(gen_frame + 0x8)));
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x8))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x8))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x8))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x8))[0x17];
  return uVar1;
}

/* ref: FUN_00c150a0 */
GEN_NOFRAME uint F_00c150a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc150a0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte bVar4;
  
  iVar1 = *(int *)(in_eax + 0x30);
  bVar4 = 0;
  for (puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if (*(char *)((int)puVar2 + 10) != '\0') goto LAB_00c150d0;
    bVar4 = bVar4 | *(byte *)((int)puVar2 + 9);
  }
  F_00c11c20(in_eax,((char *)REFP(0x1348170)));
LAB_00c150d0: ;
  if (bVar4 != 0) {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  uVar3 = F_00c27990(iVar1);
  uVar3 = F_00c271e0(iVar1,puVar2 + 1,uVar3);
  return uVar3;
}

/* ref: FUN_00c15100 */
GEN_NOFRAME uint F_00c15100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15100u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_eax + 0x30);
  F_00c13000(in_eax);
  uVar3 = F_00c26f20(iVar1);
  F_00c14ca0(in_eax,((int *)(gen_frame + 0x18)),0);
  if (((int *)(gen_frame + 0x18))[0] == 1) {
    ((int *)(gen_frame + 0x18))[0] = 3;
  }
  F_00c282a0(*(undefined4 *)(in_eax + 0x30),((int *)(gen_frame + 0x18)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0x15)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0xc));
  if (*(int *)(in_eax + 0x10) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  F_00c14e20(in_eax);
  uVar4 = F_00c27990(iVar1);
  F_00c28a30(iVar1,uVar4,uVar3);
  F_00c13190(param_2,in_eax,0x106,0x115);
  puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar2;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar2 + 2));
  if (*(char *)((int)puVar2 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  F_00c27a60(iVar1,puVar2[1]);
  uVar3 = F_00c27a60(iVar1,(*(undefined4 *)(gen_frame + 0x2c)));
  return uVar3;
}

/* ref: FUN_00c15230 */
GEN_NOFRAME uint F_00c15230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15230u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_esi;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  in_esi = *(int *)(param_1 + 0x30);
  uVar2 = F_00c26f20(in_esi);
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(in_esi + 0x32);
  (*(undefined1 *)(gen_frame + 0x15)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_esi + 0x14);
  *(undefined4 * PTR32 *)(in_esi + 0x14) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = *(undefined1 *)(in_esi + 0x32);
  (*(char *)(gen_frame + 0x9)) = '\0';
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_esi + 0x14);
  *(undefined4 * PTR32 *)(in_esi + 0x14) = &(*(undefined4 *)(gen_frame + 0x0));
  F_00c13000(param_1);
  F_00c16290(param_1);
  F_00c13190(param_2,param_1,0x114,0x110);
  F_00c14ca0(param_1,((int *)(gen_frame + 0x18)),0);
  if (((int *)(gen_frame + 0x18))[0] == 1) {
    ((int *)(gen_frame + 0x18))[0] = 3;
  }
  F_00c282a0(*(undefined4 *)(param_1 + 0x30),((int *)(gen_frame + 0x18)));
  if ((*(char *)(gen_frame + 0x9)) == '\0') {
    F_00c13810(in_esi);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = (*(uint *)(gen_frame + 0x2c));
  }
  else {
    F_00c150a0(param_1);
    F_00c27a60(*(undefined4 *)(param_1 + 0x30),(*(uint *)(gen_frame + 0x2c)));
    F_00c13810(in_esi);
    uVar3 = F_00c27990(in_esi);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
  }
  F_00c28a30(uVar4,uVar3,uVar2);
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0x14) = *puVar1;
  F_00c13420(*(undefined4 *)(in_esi + 0xc),(uint)*(byte *)(puVar1 + 2));
  if (*(char *)((int)puVar1 + 9) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *(uint *)(in_esi + 0x24) = (uint)*(byte *)(in_esi + 0x32);
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: FUN_00c15390 */
GEN_NOFRAME uint F_00c15390(unsigned int gen_a0)
{
  GEN_ENTER(0xc15390u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00c14ca0(in_esi,((uint *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_esi + 0x30),((uint *)(gen_frame + 0x8)));
  return ((uint *)(gen_frame + 0x8))[0];
}

/* ref: FUN_00c153c0 */
GEN_NOFRAME uint F_00c153c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc153c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  iVar6 = 3;
  *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + '\x03';
  do {
    iVar3 = (uint)*(byte *)((int)piVar1 + 0x32) - iVar6;
    iVar6 = iVar6 - 1;
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 + (uint)*(ushort *)((int)piVar1 + iVar3 * 2 + 0xac) * 0xc)))
         = piVar1[6];
  } while (iVar6 != 0);
  if (*(int *)(in_eax + 0x10) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  if (param_5 == 0) {
    uVar4 = F_00c27990(piVar1);
  }
  else {
    uVar4 = F_00c27830(piVar1,0x20,param_2,0x1fffe);
  }
  ((int *)(gen_frame + 0x4))[1] = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)((int)piVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  ((int *)(gen_frame + 0x4))[0] = piVar1[5];
  piVar1[5] = (int)((int *)(gen_frame + 0x4));
  F_00c133e0(in_eax,param_4);
  F_00c27270(piVar1,param_4);
  F_00c14e20(in_eax);
  piVar2 = (int *)piVar1[5];
  piVar1[5] = *piVar2;
  F_00c13420(piVar1[3],(uint)*(byte *)(piVar2 + 2));
  if (*(char *)((int)piVar2 + 9) != '\0') {
    F_00c27800(piVar1,0x23,(uint)*(byte *)(piVar2 + 2),0,0);
  }
  piVar1[9] = (uint)*(byte *)((int)piVar1 + 0x32);
  F_00c27a60(piVar1,piVar2[1]);
  F_00c27a60(piVar1,uVar4);
  if (param_5 == 0) {
    uVar5 = F_00c27800(piVar1,0x21,param_2,0,param_4);
  }
  else {
    uVar5 = F_00c27830(piVar1,0x1f,param_2,0x1fffe);
  }
  F_00c27740(piVar1,param_3);
  if (param_5 != 0) {
    uVar4 = F_00c28a30(piVar1,uVar5,uVar4 + 1);
    return uVar4;
  }
  uVar5 = F_00c27990(piVar1);
  uVar4 = F_00c28a30(piVar1,uVar5,uVar4 + 1);
  return uVar4;
}

/* ref: FUN_00c15560 */
GEN_NOFRAME uint F_00c15560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc15560u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_edi + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348184)),0xb);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 1) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348190)),0xb);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 2) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xae + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x134819c)),10);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 3) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xb0 + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 4) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,param_2);
  *((ushort *)GEN_TOP((iVar3 + 0xb2 + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  if (*(int *)(in_edi + 0x10) != 0x3d) {
    uVar5 = F_00c11ae0(in_edi,0x3d);
    uVar5 = F_00c00790(*(undefined4 *)(in_edi + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)(in_edi + 0x10) != 0x2c) {
    uVar5 = F_00c11ae0(in_edi,0x2c);
    uVar5 = F_00c00790(*(undefined4 *)(in_edi + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)(in_edi + 0x10) == 0x2c) {
    F_00c13000(in_edi);
    F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
    F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  }
  else {
    uVar5 = F_00c27400(iVar1,1.0);
    F_00c27830(iVar1,1,*(undefined4 *)(iVar1 + 0x24),uVar5);
    F_00c27270(iVar1,1);
  }
  uVar5 = F_00c153c0(in_edi,uVar2,param_3,1,1);
  return uVar5;
}

/* ref: FUN_00c15790 */
GEN_NOFRAME uint F_00c15790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15790u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481a8)),0xf);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 1) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xac + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481b8)),0xb);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 2) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xae + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481c4)),0xd);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 3) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xb0 + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 4) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,param_2);
  *((ushort *)GEN_TOP((iVar7 + 0xb2 + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  iVar7 = 4;
  while (*(int *)(param_1 + 0x10) == 0x2c) {
    F_00c13000(param_1);
    if (*(int *)(param_1 + 0x10) != 0x11d) {
      uVar6 = F_00c11ae0(param_1,0x11d);
      uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
      F_00c11c20(param_1,uVar6);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    F_00c13000(param_1);
    piVar4 = *(int * PTR32 *)(param_1 + 0x30);
    if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + iVar7)) {
      if (*(int *)(*piVar4 + 0x3c) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar4 + 0x3c));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + iVar7) * 2 + 0xac))) = uVar5;
    iVar7 = iVar7 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0x10b) {
    uVar6 = F_00c11ae0(param_1,0x10b);
    uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  F_00c13000(param_1);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar6 = F_00c14400(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c13740(param_1,((undefined1 *)(gen_frame + 0x8)),3,uVar6);
  F_00c27230(iVar1,3);
  uVar6 = F_00c153c0(param_1,uVar2,uVar3,iVar7 - 3,0);
  return uVar6;
}

/* ref: FUN_00c15a10 */
GEN_NOFRAME uint F_00c15a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15a10u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0x4));
  F_00c13000(in_eax);
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar5 = F_00c11ae0(in_eax,0x11d);
    uVar5 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_eax,uVar5);
  }
  uVar2 = *(undefined4 *)(in_eax + 0x18);
  F_00c13000(in_eax);
  iVar3 = *(int *)(in_eax + 0x10);
  if (iVar3 != 0x2c) {
    if (iVar3 == 0x3d) {
      F_00c15560(in_eax,uVar2,param_2);
      goto LAB_00c15abc;
    }
    if (iVar3 != 0x10b) {
      F_00c11c20(in_eax,((char *)REFP(0x13481d4)));
      goto LAB_00c15abc;
    }
  }
  F_00c15790(in_eax,uVar2);
LAB_00c15abc: ;
  F_00c13190(param_2,in_eax,0x106,0x108);
  puVar4 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar4;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar4 + 2));
  if (*(char *)((int)puVar4 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar4 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  uVar5 = F_00c27a60(iVar1,puVar4[1]);
  return uVar5;
}

/* ref: FUN_00c15b20 */
GEN_NOFRAME uint F_00c15b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc15b20u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x8)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x8))[0] = 3;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
  }
  F_00c282a0(*(undefined4 *)(in_esi + 0x30),((byte *)(gen_frame + 0x8)));
  if (*(int *)(in_esi + 0x10) != 0x112) {
    uVar1 = F_00c11ae0(in_esi,0x112);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  F_00c13000(in_esi);
  F_00c14e20(in_esi);
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x8))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x8))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x8))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x8))[0x17];
  return uVar1;
}

/* ref: FUN_00c15ba0 */
GEN_NOFRAME uint F_00c15ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  uVar3 = F_00c15b20(in_eax);
  iVar2 = *(int *)(in_eax + 0x10);
  while (iVar2 == 0x105) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
    F_00c27a60(uVar1,uVar3);
    uVar3 = F_00c15b20(in_eax);
    iVar2 = *(int *)(in_eax + 0x10);
  }
  if (*(int *)(in_eax + 0x10) == 0x104) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
    F_00c27a60(uVar1,uVar3);
    F_00c13000(in_eax);
    F_00c14e20(in_eax);
  }
  else {
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar3);
  }
  F_00c27a60(uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  uVar3 = F_00c13190(param_2,in_eax,0x106,0x10a);
  return uVar3;
}

/* ref: FUN_00c15c60 */
GEN_NOFRAME uint F_00c15c60(unsigned int gen_a0)
{
  GEN_ENTER(0xc15c60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x10) != 0x11d) {
    uVar6 = F_00c11ae0(param_1,0x11d);
    uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  F_00c13000(param_1);
  iVar3 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 1) {
    F_00c130c0(iVar3);
  }
  uVar5 = F_00c132e0(param_1,uVar2);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar5;
  iVar3 = piVar1[9];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x0))[0] = 6;
  (*(int *)(gen_frame + 0x8)) = iVar3;
  F_00c27270(piVar1,1);
  piVar4 = *(int * PTR32 *)(param_1 + 0x30);
  *(char *)((int)piVar4 + 0x32) = *(char *)((int)piVar4 + 0x32) + '\x01';
  *((int *)GEN_TOP((*(int *)(*piVar4 + 0x18) + 4 +
          (uint)*((ushort *)GEN_TOP(((int)piVar4 + (uint)*(byte *)((int)piVar4 + 0x32) * 2 + 0xaa))) * 0xc))) =
       piVar4[6];
  F_00c14290(param_1,((undefined1 *)(gen_frame + 0x18)),0,*(undefined4 *)(param_1 + 4));
  F_00c28040(piVar1,((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x18)));
  uVar6 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*(byte *)((int)piVar1 + 0x32) * 2 + 0xaa)));
  *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 + uVar6 * 0xc))) = piVar1[6];
  return uVar6 * 3;
}

/* ref: FUN_00c15d70 */
GEN_NOFRAME unsigned int F_00c15d70(unsigned int gen_a0)
{
  GEN_ENTER(0xc15d70u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  int in_edx;
  
  in_edx = 0;
  while( true ) {
    if (*(int *)(in_eax + 0x10) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar1 = *(undefined4 *)(in_eax + 0x18);
    F_00c13000(in_eax);
    piVar2 = *(int * PTR32 *)(in_eax + 0x30);
    if (200 < (int)(*(byte *)((int)piVar2 + 0x32) + 1 + in_edx)) {
      if (*(int *)(*piVar2 + 0x3c) == 0) {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar2 + 0x3c));
      }
      F_00c11b70(piVar2[3],uVar4,0);
    }
    uVar3 = F_00c132e0(in_eax,uVar1);
    *((ushort *)GEN_TOP(((int)piVar2 + ((uint)*(byte *)((int)piVar2 + 0x32) + in_edx) * 2 + 0xac))) = uVar3;
    in_edx = in_edx + 1;
    if (*(int *)(in_eax + 0x10) != 0x2c) break;
    F_00c13000(in_eax);
  }
  if (*(int *)(in_eax + 0x10) == 0x3d) {
    F_00c13000(in_eax);
    uVar4 = F_00c14400(in_eax,((undefined4 *)(gen_frame + 0x8)));
  }
  else {
    uVar4 = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  }
  F_00c13740(in_eax,((undefined4 *)(gen_frame + 0x8)),in_edx,uVar4);
  F_00c133e0(in_eax,in_edx);
  return;
}

/* ref: FUN_00c15e90 */
GEN_NOFRAME uint F_00c15e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15e90u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  F_00c136d0(in_eax,param_2);
  iVar1 = *(int *)(in_eax + 0x10);
  while (iVar1 == 0x2e) {
    uVar2 = *(undefined4 *)(in_eax + 0x30);
    F_00c27ed0(uVar2,param_2);
    F_00c13000(in_eax);
    if (*(int *)(in_eax + 0x10) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar3 = *(undefined4 *)(in_eax + 0x18);
    F_00c13000(in_eax);
    uVar4 = F_00c273d0(*(undefined4 *)(in_eax + 0x30),uVar3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x8))[0] = 4;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)(in_eax + 0x10);
  }
  if (*(int *)(in_eax + 0x10) != 0x3a) {
    return 0;
  }
  uVar2 = *(undefined4 *)(in_eax + 0x30);
  F_00c27ed0(uVar2,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined4 *)(gen_frame + 0x8)));
  F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_00c15f80 */
GEN_NOFRAME uint F_00c15f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc15f80u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00c13000(in_esi);
  uVar1 = F_00c15e90(in_esi,((undefined1 *)(gen_frame + 0x18)));
  F_00c14290(in_esi,((undefined1 *)(gen_frame + 0x0)),uVar1,in_edi);
  F_00c28040(*(undefined4 *)(in_esi + 0x30),((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00c27740(*(undefined4 *)(in_esi + 0x30),in_edi);
  return uVar1;
}

/* ref: FUN_00c15fd0 */
GEN_NOFRAME uint F_00c15fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc15fd0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(in_eax + 0x30);
  F_00c145f0(in_eax,((int *)(gen_frame + 0x8)));
  if (((int *)(gen_frame + 0x8))[0] == 0xd) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*piVar2 + 0xc) + (*(int *)(gen_frame + 0x10)) * 4)));
    *puVar1 = *puVar1 & 0xff807fff | 0x4000;
    return (uint)puVar1;
  }
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  uVar3 = F_00c14f00(in_eax,((undefined4 *)(gen_frame + 0x0)),1);
  return uVar3;
}

/* ref: FUN_00c16030 */
GEN_NOFRAME uint F_00c16030(unsigned int gen_a0)
{
  GEN_ENTER(0xc16030u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  F_00c13000(in_eax);
  switch((unsigned int)(uintptr_t)(*(int *)(in_eax + 0x10))) {
  case 0x104: ;
  case 0x105: ;
  case 0x106: ;
  case 0x114: ;
  case 0x11f: ;
    break;
  default: ;
    if (*(int *)(in_eax + 0x10) != 0x3b) {
      uVar2 = F_00c14400(in_eax,((byte *)(gen_frame + 0x8)));
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0xd) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0xe)) {
        if (uVar2 == 1) {
          uVar2 = F_00c27ed0(piVar1,((byte *)(gen_frame + 0x8)));
          uVar2 = F_00c279d0(piVar1,uVar2,1);
          return uVar2;
        }
        F_00c27e50(piVar1,((byte *)(gen_frame + 0x8)));
        uVar2 = F_00c279d0(piVar1,(uint)*(byte *)((int)piVar1 + 0x32),uVar2);
        return uVar2;
      }
      F_00c27480(piVar1,((byte *)(gen_frame + 0x8)),0xffffffff);
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 0xd) && (uVar2 == 1)) {
        *((uint *)GEN_TOP((*(int *)(*piVar1 + 0xc) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) * 4))) =
             *((uint *)GEN_TOP((*(int *)(*piVar1 + 0xc) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) * 4))) & 0xffffffdd | 0x1d;
      }
      uVar2 = F_00c279d0(piVar1,(uint)*(byte *)((int)piVar1 + 0x32),0xffffffff);
      return uVar2;
    }
  }
  uVar2 = F_00c279d0(piVar1,0,0);
  return uVar2;
}

/* ref: FUN_00c16150 */
GEN_NOFRAME uint F_00c16150(unsigned int gen_a0)
{
  GEN_ENTER(0xc16150u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 in_edi;
  
  in_edi = *(undefined4 *)(in_eax + 4);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_eax + 0x10))) {
  case 0x102: ;
    F_00c13000(in_eax);
    F_00c150a0(in_eax);
    return 1;
  case 0x103: ;
    F_00c13000(in_eax);
    F_00c14e20(in_eax);
    F_00c13190(in_edi,in_eax,0x106,0x103);
    return 0;
  default: ;
    F_00c15fd0(in_eax);
    return 0;
  case 0x108: ;
    F_00c15a10(in_eax,in_edi);
    return 0;
  case 0x109: ;
    F_00c15f80(in_eax,in_edi);
    return 0;
  case 0x10a: ;
    F_00c15ba0(in_eax,in_edi);
    return 0;
  case 0x10c: ;
    break;
  case 0x110: ;
    F_00c15230(in_eax,in_edi);
    return 0;
  case 0x111: ;
    F_00c16030(in_eax);
    return 1;
  case 0x115: ;
    F_00c15100(in_eax,in_edi);
    return 0;
  }
  F_00c13000(in_eax);
  if (*(int *)(in_eax + 0x10) == 0x109) {
    F_00c13000(in_eax);
    F_00c15c60(in_eax);
    return 0;
  }
  F_00c15d70(in_eax);
  return 0;
}

/* ref: FUN_00c16290 */
GEN_NOFRAME unsigned int F_00c16290(unsigned int gen_a0)
{
  GEN_ENTER(0xc16290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  short * psVar1;
  uint uVar2;
  
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  do {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x10))) {
    case 0x104: ;
    case 0x105: ;
    case 0x106: ;
    case 0x114: ;
    case 0x11f: ;
      goto switchD_00c162d4_caseD_104;
    }
    uVar2 = F_00c16150(param_1);
    if (*(int *)(param_1 + 0x10) == 0x3b) {
      F_00c13000(param_1);
    }
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x24))) = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x32)));
  } while (uVar2 == 0);
switchD_00c162d4_caseD_104: ;
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return 0;
}

/* ref: FUN_00c16340 */
GEN_NOFRAME uint F_00c16340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc16340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x28c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x44)) = param_3;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,param_4,(int)pcVar2 - (int)(param_4 + 1));
  F_00c11d20(param_1,((undefined1 *)(gen_frame + 0x8)),param_2,uVar3);
  F_00c13960(((uint *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0x8)));
  *(undefined1 *)(((uint *)(gen_frame + 0x50))[0] + 0x4a) = 2;
  F_00c13000(((undefined1 *)(gen_frame + 0x8)));
  F_00c16290(((undefined1 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x18)) != 0x11f) {
    uVar3 = F_00c11ae0(((undefined1 *)(gen_frame + 0x8)),0x11f);
    uVar3 = F_00c00790((*(undefined4 *)(gen_frame + 0x3c)),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(((undefined1 *)(gen_frame + 0x8)),uVar3);
  }
  F_00c13a20(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return ((uint *)(gen_frame + 0x50))[0];
}

/* ref: FUN_00c16430 */
GEN_NOFRAME uint F_00c16430(unsigned int gen_a0)
{
  GEN_ENTER(0xc16430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9a910(param_1,0xffffd8f0);
  return 1;
}

/* ref: FUN_00c16450 */
GEN_NOFRAME uint F_00c16450(unsigned int gen_a0)
{
  GEN_ENTER(0xc16450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9adc0(param_1);
  }
  return 1;
}

/* ref: FUN_00c16480 */
GEN_NOFRAME uint F_00c16480(unsigned int gen_a0)
{
  GEN_ENTER(0xc16480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,2);
  if ((uVar1 != 0) && (uVar1 != 5)) {
    F_00b9c590(param_1,2,((char *)REFP(0x13481ec)));
  }
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b3d0(param_1,1);
  F_00b9afd0(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c164d0 */
GEN_NOFRAME uint F_00c164d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc164d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9b1f0(param_1,1);
  return 1;
}

/* ref: FUN_00c164f0 */
GEN_NOFRAME uint F_00c164f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc164f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9c7a0(param_1,2,5);
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b480(param_1,1);
  if (uVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348204)));
  }
  return 1;
}

/* ref: FUN_00c165a0 */
GEN_NOFRAME uint F_00c165a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc165a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_esi = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (in_esi == in_eax) {
    F_00b9a910(in_esi,0xfffffffe);
    F_00b9a7b0(in_esi,0xfffffffd);
    uVar1 = F_00b9b290(in_esi,0xfffffffe,param_3);
    return uVar1;
  }
  F_00b9a680(in_eax,in_esi,1);
  uVar1 = F_00b9b290(in_esi,0xfffffffe,param_3);
  return uVar1;
}

/* ref: FUN_00c165f0 */
GEN_NOFRAME uint F_00c165f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc165f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x4));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar1 == 8);
  iVar4 = uVar3 + 2;
  (*(int *)(gen_frame + 0x4)) = iVar4;
  uVar1 = F_00b9c880(param_1,iVar4,((char *)REFP(0x1348238)),0);
  iVar4 = uVar3 + 1;
  uVar3 = F_00b9a9b0(param_1,iVar4);
  if (uVar3 == 0) {
    uVar3 = F_00b9a940(param_1,iVar4);
    if (uVar3 != 6) {
      pcVar6 = ((char *)REFP(0x1348244));
      goto LAB_00c16876;
    }
    F_00b9af00(param_1,&REFG(undefined, 0x1348240),uVar1);
    uVar1 = F_00b9abf0(param_1,0xffffffff,0);
    F_00b9a910(param_1,iVar4);
    F_00b9a680(param_1,uVar2,1);
  }
  else {
    pbVar5 = ((byte *)(gen_frame + 0x8));
    uVar3 = F_00b9ab70(param_1,iVar4);
    uVar3 = F_00c01ae0(uVar2,uVar3,pbVar5);
    if (uVar3 == 0) {
      F_00b9adc0(param_1);
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return 1;
    }
  }
  uVar3 = F_00c028c0(uVar2,uVar1,((byte *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    F_00b9b150(param_1,0,2);
    uVar3 = F_00c51da0(uVar1,0x53);
    if (uVar3 != 0) {
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348270)));
      F_00b9ae60(param_1,((undefined1 *)(gen_frame + 0x2c)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348278)));
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348284)));
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348290)));
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482a0));
    }
    uVar3 = F_00c51da0(uVar1,0x6c);
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13482a8)));
    }
    uVar3 = F_00c51da0(uVar1,0x75);
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482b4));
    }
    uVar3 = F_00c51da0(uVar1,0x6e);
    if (uVar3 != 0) {
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482bc));
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13482c4)));
    }
    uVar3 = F_00c51da0(uVar1,0x4c);
    if (uVar3 != 0) {
      F_00c165a0(uVar2,param_1,((char *)REFP(0x13482d0)));
    }
    uVar1 = F_00c51da0(uVar1,0x66);
    if (uVar1 != 0) {
      F_00c165a0(uVar2,param_1,&REFG(undefined, 0x13482dc));
    }
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 1;
  }
  pcVar6 = ((char *)REFP(0x1348260));
  iVar4 = (*(int *)(gen_frame + 0x4));
LAB_00c16876: ;
  uVar2 = F_00b9c590(param_1,iVar4,pcVar6);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c168a0 */
GEN_NOFRAME uint F_00c168a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc168a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar2 = F_00b9a940(param_1,1);
  uVar3 = param_1;
  if (uVar2 == 8) {
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar4 = (uint)(uVar2 == 8);
  puVar5 = ((undefined1 *)(gen_frame + 0x8));
  iVar1 = uVar4 + 1;
  uVar2 = F_00b9c9b0(param_1,iVar1);
  uVar2 = F_00c01ae0(uVar3,uVar2,puVar5);
  if (uVar2 != 0) {
    uVar2 = F_00b9c9b0(param_1,uVar4 + 2);
    uVar2 = F_00c01bf0(uVar3,((undefined1 *)(gen_frame + 0x8)),uVar2);
    if (uVar2 == 0) {
      F_00b9adc0(param_1);
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return 1;
    }
    F_00b9a680(uVar3,param_1,1);
    F_00b9ae60(param_1,uVar2);
    F_00b9a910(param_1,0xfffffffe);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 2;
  }
  uVar3 = F_00b9c590(param_1,iVar1,((char *)REFP(0x13482e4)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c16990 */
GEN_NOFRAME uint F_00c16990(unsigned int gen_a0)
{
  GEN_ENTER(0xc16990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar1 == 8);
  puVar4 = ((undefined1 *)(gen_frame + 0x8));
  uVar1 = F_00b9c9b0(param_1,uVar3 + 1);
  uVar1 = F_00c01ae0(uVar2,uVar1,puVar4);
  if (uVar1 != 0) {
    F_00b9c7f0(param_1,uVar3 + 3);
    F_00b9a760(param_1,uVar3 + 3);
    F_00b9a680(param_1,uVar2,1);
    uVar1 = F_00b9c9b0(param_1,uVar3 + 2);
    uVar2 = F_00c01c40(uVar2,((undefined1 *)(gen_frame + 0x8)),uVar1);
    F_00b9ae60(param_1,uVar2);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 1;
  }
  uVar2 = F_00b9c590(param_1,uVar3 + 1,((char *)REFP(0x13482f8)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c16ae0 */
GEN_NOFRAME uint F_00c16ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba00(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xfffffffe);
      return 2;
    }
  }
  return 0;
}

/* ref: FUN_00c16b40 */
GEN_NOFRAME uint F_00c16b40(unsigned int gen_a0)
{
  GEN_ENTER(0xc16b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  F_00b9c7f0(param_1,3);
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba90(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xffffffff);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c16ba0 */
GEN_NOFRAME uint F_00c16ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc16ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00b9aff0(param_1,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(param_1,0xffffd8f0);
  F_00b9aff0(param_1,param_1);
  F_00b9b0d0(param_1,0xfffffffe);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 == 6) {
    F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110e8e4))[(int)(*param_2)]);
    if (-1 < param_2[5]) {
      F_00b9ae00(param_1,param_2[5]);
      uVar1 = F_00b9b510(param_1,2,0);
      return uVar1;
    }
    F_00b9adc0(param_1);
    uVar1 = F_00b9b510(param_1,2,0);
  }
  return uVar1;
}

/* ref: FUN_00c16c30 */
GEN_NOFRAME uint F_00c16c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc16c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c51da0(in_edi,99);
  uVar2 = (uint)(uVar1 != 0);
  uVar1 = F_00c51da0(in_edi,0x72);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 2;
  }
  uVar1 = F_00c51da0(in_edi,0x6c);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  if (0 < param_2) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

/* ref: FUN_00c16cb0 */
GEN_NOFRAME uint F_00c16cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(in_esi,0xffffd8f0);
  uVar1 = F_00b9a940(in_esi,0xffffffff);
  if (uVar1 != 5) {
    F_00b9a760(in_esi,0xfffffffe);
    F_00b9b150(in_esi,0,1);
    F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
    F_00b9a910(in_esi,0xfffffffe);
    uVar1 = F_00b9b2f0(in_esi,0xffffd8f0);
  }
  return uVar1;
}

/* ref: FUN_00c16d10 */
GEN_NOFRAME uint F_00c16d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc16d10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  code * local_4;
  
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    local_8 = param_1;
  }
  else {
    local_8 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar2 == 8);
  iVar1 = uVar3 + 1;
  uVar2 = F_00b9a940(param_1,iVar1);
  if ((int)uVar2 < 1) {
    F_00b9a760(param_1,iVar1);
    uVar2 = 0;
    local_4 = (code *)0x0;
    uVar3 = 0;
  }
  else {
    uVar2 = F_00b9c820(param_1,uVar3 + 2,0);
    F_00b9c7a0(param_1,iVar1,6);
    uVar3 = F_00b9ca20(param_1,uVar3 + 3,0);
    local_4 = ((code *)REFP(0xc16ba0));
    uVar2 = F_00c16c30(uVar2,uVar3);
  }
  F_00c16cb0(param_1);
  F_00b9aff0(param_1,local_8);
  F_00b9a910(param_1,iVar1);
  F_00b9b2f0(param_1,0xfffffffd);
  F_00b9a760(param_1,0xfffffffe);
  F_00c01a80(local_8,local_4,uVar2,uVar3);
  return 0;
}

/* ref: FUN_00c16df0 */
GEN_NOFRAME uint F_00c16df0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16df0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  code * pcVar3;
  uint uVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x4));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar1 = F_00c01ac0(uVar2);
  pcVar3 = (code *)F_00c01ab0(uVar2);
  if ((pcVar3 == (code *)0x0) || (pcVar3 == ((code *)REFP(0xc16ba0)))) {
    F_00c16cb0(param_1);
    F_00b9aff0(param_1,uVar2);
    F_00b9b0d0(param_1,0xfffffffe);
    F_00b9a7b0(param_1,0xfffffffe);
  }
  else {
    F_00b9ae20(param_1,((char *)REFP(0x1348338)),0xd);
  }
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    ((undefined1 *)(gen_frame + 0x4))[0] = 99;
  }
  uVar4 = (uint)bVar5;
  if ((uVar1 & 2) != 0) {
    ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0x72;
    uVar4 = uVar4 + 1;
  }
  if ((uVar1 & 4) != 0) {
    ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0x6c;
    uVar4 = uVar4 + 1;
  }
  ((undefined1 *)(gen_frame + 0x4))[(int)(uVar4)] = 0;
  F_00b9ae60(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00c01ad0(uVar2);
  F_00b9ae00(param_1,uVar2);
  F_00c47745((*(uint *)(gen_frame + 0xc)) ^ (uint)((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 3;
}

/* ref: FUN_00c16ee0 */
GEN_NOFRAME uint F_00c16ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc16ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  undefined * pFVar3;
  char * pcVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x0));
  uVar2 = F_00c50860();
  F_00c5075a(REFG(char, 0x1348348),(undefined *)(uVar2 + 0x40));
  pFVar3 = (undefined *)F_00c50860();
  pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  while (pcVar4 != (char *)0x0) {
    pcVar4 = ((char *)REFP(0x1348354));
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00c16f60: ;
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00c16f65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00c16f60;
      pbVar5 = pbVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00c16f65: ;
    if (iVar6 == 0) break;
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar2 = F_00b9c490(param_1,((byte *)(gen_frame + 0x0)),(int)pbVar5 - (int)(((byte *)(gen_frame + 0x0)) + 1),
                         ((char *)REFP(0x134835c)));
    if ((uVar2 != 0) || (uVar2 = F_00b9b570(param_1,0,0,0), uVar2 != 0)) {
      uVar2 = F_00c50860();
      pFVar3 = (undefined *)(uVar2 + 0x40);
      pcVar4 = (char *)F_00b9abf0(param_1,0xffffffff,0);
      F_00c5075a(pcVar4,pFVar3);
      uVar2 = F_00c50860();
      F_00c5075a(&REFG(undefined, 0x1348370),(undefined *)(uVar2 + 0x40));
    }
    F_00b9a760(param_1,0);
    uVar2 = F_00c50860();
    F_00c5075a(REFG(char, 0x1348348),(undefined *)(uVar2 + 0x40));
    pFVar3 = (undefined *)F_00c50860();
    pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c17030 */
GEN_NOFRAME uint F_00c17030(unsigned int gen_a0)
{
  GEN_ENTER(0xc17030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0x0));
  (*(uint *)(gen_frame + 0x4)) = 1;
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar3 = param_1;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 1;
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar2 = (uint)(uVar2 == 8);
  uVar4 = F_00b9a9b0(param_1,uVar2 + 2);
  if (uVar4 == 0) {
    uVar4 = (uint)(param_1 == uVar3);
  }
  else {
    uVar4 = F_00b9ab70(param_1,uVar2 + 2);
    F_00b9a760(param_1,0xfffffffe);
  }
  uVar5 = F_00b9a750(param_1);
  if (uVar5 == uVar2) {
    uVar8 = 0;
    puVar7 = &REFG(undefined, 0x14c5bf1);
  }
  else {
    uVar5 = F_00b9a9f0(param_1,uVar2 + 1);
    if (uVar5 == 0) goto LAB_00c17272;
    uVar8 = 1;
    puVar7 = &REFG(undefined, 0x1348374);
  }
  F_00b9ae20(param_1,puVar7,uVar8);
  F_00b9ae20(param_1,((char *)REFP(0x1348378)),0x10);
  uVar5 = F_00c01ae0(uVar3,uVar4,((byte *)(gen_frame + 0x8)));
  while (uVar5 != 0) {
    uVar6 = uVar4 + 1;
    if (((int)uVar6 < 0xd) || ((*(uint *)(gen_frame + 0x4)) == 0)) {
      F_00b9ae20(param_1,&REFG(undefined, 0x1348394),2);
      F_00c028c0(uVar3,&REFG(undefined, 0x1348398),((byte *)(gen_frame + 0x8)));
      F_00b9af00(param_1,&REFG(undefined, 0x134839c),((undefined1 *)(gen_frame + 0x2c)));
      if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))) {
        F_00b9af00(param_1,&REFG(undefined, 0x13483a0),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      }
      if (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) == '\0') {
        cVar1 = *(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
        if (cVar1 == 'm') {
          F_00b9af00(param_1,((char *)REFP(0x13483b8)));
        }
        else if ((cVar1 == 'C') || (cVar1 == 't')) {
          F_00b9ae20(param_1,&REFG(undefined, 0x13483c8),2);
        }
        else {
          F_00b9af00(param_1,((char *)REFP(0x13483cc)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
        }
      }
      else {
        F_00b9af00(param_1,((char *)REFP(0x13483a4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)));
      }
      uVar4 = F_00b9a750(param_1);
      F_00b9b880(param_1,uVar4 - uVar2);
    }
    else {
      uVar2 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
      if (uVar2 == 0) {
        (*(uint *)(gen_frame + 0x4)) = uVar2;
        uVar6 = uVar4;
        uVar2 = (*(uint *)(gen_frame + 0x0));
      }
      else {
        F_00b9ae20(param_1,((char *)REFP(0x134838c)),5);
        uVar4 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
        uVar2 = (*(uint *)(gen_frame + 0x0));
        while ((*(uint *)(gen_frame + 0x0)) = uVar2, uVar4 != 0) {
          uVar4 = F_00c01ae0(uVar3,uVar6 + 0xb,((byte *)(gen_frame + 0x8)));
          uVar6 = uVar6 + 1;
          uVar2 = (*(uint *)(gen_frame + 0x0));
        }
        (*(uint *)(gen_frame + 0x4)) = 0;
      }
    }
    uVar5 = F_00c01ae0(uVar3,uVar6,((byte *)(gen_frame + 0x8)));
    uVar4 = uVar6;
  }
  uVar3 = F_00b9a750(param_1);
  F_00b9b880(param_1,uVar3 - uVar2);
LAB_00c17272: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17290 */
GEN_NOFRAME uint F_00c17290(unsigned int gen_a0)
{
  GEN_ENTER(0xc17290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x134847c)),&REFG(undefined * PTR32, 0x110e8f8));
  return 1;
}

/* ref: FUN_00c172b0 */
GEN_NOFRAME uint F_00c172b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc172b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(ABS((double)fVar1)));
  return 1;
}

/* ref: FUN_00c172e0 */
GEN_NOFRAME uint F_00c172e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc172e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fsin((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17310 */
GEN_NOFRAME uint F_00c17310(unsigned int gen_a0)
{
  GEN_ENTER(0xc17310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,8)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17340 */
GEN_NOFRAME uint F_00c17340(unsigned int gen_a0)
{
  GEN_ENTER(0xc17340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fcos((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17370 */
GEN_NOFRAME uint F_00c17370(unsigned int gen_a0)
{
  GEN_ENTER(0xc17370u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,9)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c173a0 */
GEN_NOFRAME uint F_00c173a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc173a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c173d0 */
GEN_NOFRAME uint F_00c173d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc173d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,10)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17400 */
GEN_NOFRAME uint F_00c17400(unsigned int gen_a0)
{
  GEN_ENTER(0xc17400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,6)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17430 */
GEN_NOFRAME uint F_00c17430(unsigned int gen_a0)
{
  GEN_ENTER(0xc17430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,7)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17460 */
GEN_NOFRAME uint F_00c17460(unsigned int gen_a0)
{
  GEN_ENTER(0xc17460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17490 */
GEN_NOFRAME uint F_00c17490(unsigned int gen_a0)
{
  GEN_ENTER(0xc17490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar3 = F_00b9c8e0(param_1,2);
  fVar1 = ((float10)GEN_TOD(atan2((float10)fVar2,(float10)fVar3)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c174e0 */
GEN_NOFRAME uint F_00c174e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc174e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xe));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c17510 */
GEN_NOFRAME uint F_00c17510(unsigned int gen_a0)
{
  GEN_ENTER(0xc17510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xd));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c17540 */
GEN_NOFRAME uint F_00c17540(unsigned int gen_a0)
{
  GEN_ENTER(0xc17540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  float fVar2;
  
  fVar1 = F_00b9c8e0(param_1,1);
  fVar2 = F_00b9c8e0(param_1,2);
  F_00b9ade0(param_1,((double)GEN_TOD(((float10)fVar1 -
                               (float10)(longlong)((float10)fVar1 / (float10)fVar2) * (float10)fVar2
                               ))));
  return 1;
}

/* ref: FUN_00c17590 */
GEN_NOFRAME uint F_00c17590(unsigned int gen_a0)
{
  GEN_ENTER(0xc17590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  float fVar2;
  double * pdVar3;
  
  pdVar3 = &(*(double *)(gen_frame + 0x0));
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)fVar2),
                       (int)((ulonglong)gen_d2bits((double)fVar2) >> 0x20),pdVar3);
  (*(double *)(gen_frame + 0x8)) = (double)fVar1;
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x0)));
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x8)));
  return 2;
}

/* ref: FUN_00c175e0 */
GEN_NOFRAME uint F_00c175e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc175e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(SQRT((double)fVar1)));
  return 1;
}

/* ref: FUN_00c17610 */
GEN_NOFRAME uint F_00c17610(unsigned int gen_a0)
{
  GEN_ENTER(0xc17610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar4 = F_00b9c8e0(param_1,2);
  fVar2 = ((float10)GEN_TOD(pow((float10)fVar3,(float10)fVar4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17660 */
GEN_NOFRAME uint F_00c17660(unsigned int gen_a0)
{
  GEN_ENTER(0xc17660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,2)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17690 */
GEN_NOFRAME uint F_00c17690(unsigned int gen_a0)
{
  GEN_ENTER(0xc17690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,3)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176c0 */
GEN_NOFRAME uint F_00c176c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc176c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,1)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176f0 */
GEN_NOFRAME uint F_00c176f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc176f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 / *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17720 */
GEN_NOFRAME uint F_00c17720(unsigned int gen_a0)
{
  GEN_ENTER(0xc17720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 * *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17750 */
GEN_NOFRAME uint F_00c17750(unsigned int gen_a0)
{
  GEN_ENTER(0xc17750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  float fVar2;
  int * _Y;
  
  _Y = &(*(int *)(gen_frame + 0xc));
  fVar2 = F_00b9c8e0(param_1,1);
  dVar1 = F_00c52990((double)fVar2,_Y);
  F_00b9ade0(param_1,dVar1);
  F_00b9ae00(param_1,(*(int *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_00c17790 */
GEN_NOFRAME uint F_00c17790(unsigned int gen_a0)
{
  GEN_ENTER(0xc17790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint _Y;
  float fVar1;
  double dVar2;
  
  _Y = F_00b9c9b0(param_1,2);
  fVar1 = F_00b9c8e0(param_1,1);
  dVar2 = F_00c52a5e((double)fVar1,_Y);
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c177d0 */
GEN_FRAME uint F_00c177d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc177d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if ((double)fVar3 < local_50) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c17850 */
GEN_FRAME uint F_00c17850(unsigned int gen_a0)
{
  GEN_ENTER(0xc17850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if (local_50 < (double)fVar3) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c178d0 */
GEN_NOFRAME uint F_00c178d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc178d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = F_00c4f2dd();
  dVar3 = (double)((int)uVar1 % 0x7fff) / *(double *)&REFG(undefined, 0x10920e0);
  uVar1 = F_00b9a750(param_1);
  if (uVar1 == 0) {
    F_00b9ade0(param_1,dVar3);
    return 1;
  }
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13484ac)));
      return uVar1;
    }
    uVar1 = F_00b9c9b0(param_1,1);
    uVar2 = F_00b9c9b0(param_1,2);
    if ((int)uVar2 < (int)uVar1) {
      F_00b9c590(param_1,2,((char *)REFP(0x1348498)));
    }
    dVar3 = (double)(int)((uVar2 - uVar1) + 1) * dVar3;
    dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
    dVar4 = (dVar3 + dVar4) - dVar4;
    F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                              !(dVar4 - dVar3 <=
                                               gen_bits2d(REFG(ulonglong, 0x110e628) &
                                                          (ulonglong)gen_d2bits(dVar3))) &
                                             (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                         (double)(int)uVar1));
    return 1;
  }
  uVar1 = F_00b9c9b0(param_1,1);
  if ((int)uVar1 < 1) {
    F_00b9c590(param_1,1,((char *)REFP(0x1348484)));
  }
  dVar3 = (double)(int)uVar1 * dVar3;
  dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
  dVar4 = (dVar3 + dVar4) - dVar4;
  F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                            !(dVar4 - dVar3 <=
                                             gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3))
                                             ) & (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                       REFG(double, 0x1088130)));
  return 1;
}

/* ref: FUN_00c17a80 */
GEN_NOFRAME uint F_00c17a80(unsigned int gen_a0)
{
  GEN_ENTER(0xc17a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(param_1,1);
  F_00c4f2cb(uVar1);
  return 0;
}

/* ref: FUN_00c17aa0 */
GEN_NOFRAME uint F_00c17aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,&REFG(undefined, 0x1348580),&REFG(undefined * PTR32, 0x110e970));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x110ea60));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348588));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x134b0a0));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134858c));
  F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348594));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134859c));
  return 1;
}

/* ref: FUN_00c17b20 */
GEN_NOFRAME uint F_00c17b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc17b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00b9ae00(param_1,(*(undefined4 *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00c17b70 */
GEN_NOFRAME uint F_00c17b70(unsigned int gen_a0)
{
  GEN_ENTER(0xc17b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  uVar4 = (*(uint *)(gen_frame + 0xc));
  uVar3 = F_00b9c9b0(param_1,2);
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  uVar4 = F_00b9ca20(param_1,3,0xffffffff);
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 1 + uVar1;
  }
  uVar4 = uVar4 & ((int)uVar4 < 0) - 1;
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  if ((int)(*(uint *)(gen_frame + 0xc)) < (int)uVar4) {
    uVar4 = (*(uint *)(gen_frame + 0xc));
  }
  if ((int)uVar3 <= (int)uVar4) {
    F_00b9ae20(param_1,(uVar3 - 1) + uVar2,(uVar4 - uVar3) + 1);
    return 1;
  }
  F_00b9ae20(param_1,&REFG(undefined, 0x14c5bf2),0);
  return 1;
}

/* ref: FUN_00c17c20 */
GEN_NOFRAME uint F_00c17c20(unsigned int gen_a0)
{
  GEN_ENTER(0xc17c20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0xc));
  uVar2 = F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  iVar1 = (*(int *)(gen_frame + 0xc));
  while (iVar1 != 0) {
    (*(int *)(gen_frame + 0xc)) = iVar1 - 1;
    if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
      F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
    }
    *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x10))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + uVar2);
    ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
    iVar1 = (*(int *)(gen_frame + 0xc));
  }
  (*(int *)(gen_frame + 0xc)) = -1;
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17ce0 */
GEN_NOFRAME uint F_00c17ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
      }
      iVar2 = F_00c4ef4f((uint)*(byte *)(uVar3 + uVar1));
      *(char *)((uint * PTR32 *)(gen_frame + 0x10))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17d90 */
GEN_NOFRAME uint F_00c17d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc17d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0xc)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x10)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x21c)) <= ((uint * PTR32 *)(gen_frame + 0x10))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x10)));
      }
      iVar2 = F_00c52d33((uint)*(byte *)(uVar3 + uVar1));
      *(char *)((uint * PTR32 *)(gen_frame + 0x10))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x10))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x10))[0] + 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17e40 */
GEN_NOFRAME uint F_00c17e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc17e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  uVar1 = F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
  uVar2 = F_00b9c9b0(param_1,2);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x10)));
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
    F_00b9bf30(((undefined1 *)(gen_frame + 0x10)),uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c17ee0 */
GEN_NOFRAME uint F_00c17ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x8)));
  uVar3 = (*(uint *)(gen_frame + 0x8));
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = F_00b9ca20(param_1,2,1);
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1 + uVar3;
  }
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  uVar3 = F_00b9ca20(param_1,3,uVar2);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if ((*(uint *)(gen_frame + 0x8)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x8));
  }
  if ((int)uVar3 < (int)uVar2) {
    return 0;
  }
  uVar4 = (uVar3 - uVar2) + 1;
  if ((int)(uVar4 + uVar2) <= (int)uVar3) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485a0)));
  }
  F_00b9bc60(param_1,uVar4,((char *)REFP(0x13485b8)));
  iVar5 = 0;
  if (0 < (int)uVar4) {
    iVar1 = (uVar2 - 1) + (*(uint *)(gen_frame + 0xc));
    do {
      F_00b9ae00(param_1,(uint)*(byte *)(iVar1 + iVar5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00c17fc0 */
GEN_NOFRAME uint F_00c17fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc17fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((uint * PTR32 *)(gen_frame + 0x0));
  uVar1 = F_00b9a750(param_1);
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x0)));
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00b9c9b0(param_1,iVar3);
      if ((uVar2 & 0xff) != uVar2) {
        F_00b9c590(param_1,iVar3,((char *)REFP(0x13485d0)));
      }
      if (&(*(uint *)(gen_frame + 0x20c)) <= ((uint * PTR32 *)(gen_frame + 0x0))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x0)));
      }
      *(char *)((uint * PTR32 *)(gen_frame + 0x0))[0] = (char)uVar2;
      ((uint * PTR32 *)(gen_frame + 0x0))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x0))[0] + 1);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c18080 */
GEN_NOFRAME uint F_00c18080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b9bf30(param_4,param_2,param_3);
  return 0;
}

/* ref: FUN_00c180a0 */
GEN_NOFRAME uint F_00c180a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc180a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0));
  F_00b9c7a0(param_1,1,6);
  F_00b9a760(param_1,1);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9b6d0(param_1,((code *)REFP(0xc18080)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar1 != 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485e0)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00c18190 */
GEN_NOFRAME uint F_00c18190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18190u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  char * pcVar1;
  char * pcVar2;
  
  pcVar1 = in_eax + 1;
  if (*in_eax == '%') {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*(undefined4 *)(in_edi + 8),((char *)REFP(0x1348630)));
    }
    return (uint)(in_eax + 2);
  }
  if (*in_eax != '[') {
    return (uint)pcVar1;
  }
  if (*pcVar1 == '^') {
    pcVar1 = in_eax + 2;
  }
  do {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*(undefined4 *)(in_edi + 8),((char *)REFP(0x1348654)));
    }
    pcVar2 = pcVar1 + 1;
    if ((*pcVar1 == '%') && (*pcVar2 != '\0')) {
      pcVar2 = pcVar1 + 2;
    }
    pcVar1 = pcVar2;
  } while (*pcVar2 != ']');
  return (uint)(pcVar2 + 1);
}

/* ref: FUN_00c18200 */
GEN_NOFRAME uint F_00c18200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18200u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c4ef4f(in_edi);
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0x61: ;
    uVar2 = F_00c484b8(in_eax);
    break;
  default: ;
    return (uint)(in_edi == in_eax);
  case 99: ;
    uVar2 = F_00c489cc(in_eax);
    break;
  case 100: ;
    uVar2 = F_00c48637(in_eax);
    break;
  case 0x6c: ;
    uVar2 = F_00c485b8(in_eax);
    break;
  case 0x70: ;
    uVar2 = F_00c487bb(in_eax);
    break;
  case 0x73: ;
    uVar2 = F_00c4873c(in_eax);
    break;
  case 0x75: ;
    uVar2 = F_00c48539(in_eax);
    break;
  case 0x77: ;
    uVar2 = F_00c4883f(in_eax);
    break;
  case 0x78: ;
    uVar2 = F_00c486bb(in_eax);
    break;
  case 0x7a: ;
    uVar2 = (uint)(in_eax == 0);
  }
  iVar1 = F_00c485b8(in_edi);
  if (iVar1 != 0) {
    return uVar2;
  }
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00c18310 */
GEN_NOFRAME uint F_00c18310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18310u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  bool bVar6;
  uint local_4;
  
  bVar6 = *(char *)(in_eax + 1) == '^';
  if (bVar6) {
    in_eax = in_eax + 1;
  }
  local_4 = (uint)!bVar6;
  pbVar5 = (byte *)(in_eax + 1);
  if (pbVar5 < param_3) {
    pbVar4 = (byte *)(in_eax + 3);
    do {
      if (*pbVar5 == 0x25) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
        uVar3 = F_00c18200(param_2,(uint)*pbVar1);
        if (uVar3 != 0) {
          return local_4;
        }
      }
      else if ((pbVar5[1] == 0x2d) && (pbVar4 < param_3)) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
        if (((int)(uint)bVar2 <= (int)param_2) && ((int)param_2 <= (int)(uint)*pbVar5)) {
          return local_4;
        }
      }
      else if (*pbVar5 == param_2) {
        return local_4;
      }
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 < param_3);
  }
  return (uint)(local_4 == 0);
}

/* ref: FUN_00c18400 */
GEN_NOFRAME uint F_00c18400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18400u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  char * pcVar1;
  int iVar2;
  
  if ((*in_eax == '\0') || (in_eax[1] == '\0')) {
    F_00b9bbd0(*(undefined4 *)(param_3 + 8),((char *)REFP(0x1348674)));
  }
  if (*in_ecx != *in_eax) {
    return 0;
  }
  iVar2 = 1;
  do {
    while( true ) {
      pcVar1 = in_ecx;
      in_ecx = pcVar1 + 1;
      if (*(char * PTR32 *)(param_3 + 4) <= in_ecx) {
        return 0;
      }
      if (*in_ecx == in_eax[1]) break;
      if (*in_ecx == *in_eax) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)(pcVar1 + 2);
}

/* ref: FUN_00c18470 */
GEN_NOFRAME uint F_00c18470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18470u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte * pbVar4;
  
  iVar3 = 0;
  pbVar4 = param_2;
  if (param_2 < *(byte * PTR32 *)(param_1 + 4)) {
    do {
      bVar1 = *param_3;
      uVar2 = (uint)*pbVar4;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c184ca: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c184ca;
      }
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (pbVar4 < *(byte * PTR32 *)(param_1 + 4));
    if (iVar3 < 0) {
      return 0;
    }
  }
  do {
    uVar2 = F_00c186e0(param_1,param_2 + iVar3,param_4 + 1);
    if (uVar2 != 0) {
      return uVar2;
    }
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return 0;
}

/* ref: FUN_00c18510 */
GEN_NOFRAME uint F_00c18510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18510u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
  if (uVar2 == 0) {
    while (in_eax < *(byte * PTR32 *)(param_2 + 4)) {
      bVar1 = *param_3;
      uVar2 = (uint)*in_eax;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c18579: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c18579;
      }
      in_eax = in_eax + 1;
      uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c185a0 */
GEN_NOFRAME uint F_00c185a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc185a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_esi + 0xc);
  if (0x1f < iVar1) {
    F_00b9bbd0(*(undefined4 *)(in_esi + 8),((char *)REFP(0x1348688)));
  }
  *(undefined4 *)(in_esi + 0x10 + iVar1 * 8) = param_2;
  *(undefined4 *)(in_esi + 0x14 + iVar1 * 8) = param_4;
  *(int *)(in_esi + 0xc) = iVar1 + 1;
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *(int *)(in_esi + 0xc) = *(int *)(in_esi + 0xc) - 1;
  }
  return uVar2;
}

/* ref: FUN_00c185f0 */
GEN_NOFRAME uint F_00c185f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc185f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(int *)(in_esi + 0xc) - 1;
  if (-1 < (int)uVar1) {
    piVar3 = (int *)(in_esi + 0x14 + uVar1 * 8);
    do {
      if (*piVar3 == -1) goto LAB_00c18620;
      uVar1 = uVar1 - 1;
      piVar3 = piVar3 - 2;
    } while (-1 < (int)uVar1);
  }
  uVar1 = F_00b9bbd0(*(undefined4 *)(in_esi + 8),((char *)REFP(0x1348618)));
LAB_00c18620: ;
  *(int *)(in_esi + 0x14 + uVar1 * 8) = param_2 - *(int *)(in_esi + 0x10 + uVar1 * 8);
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *(undefined4 *)(in_esi + 0x14 + uVar1 * 8) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c18650 */
GEN_NOFRAME uint F_00c18650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18650u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  
  uVar2 = in_eax - 0x31;
  if ((((int)uVar2 < 0) || (*(int *)(in_ecx + 0xc) <= (int)uVar2)) ||
     (*(int *)(in_ecx + 0x14 + uVar2 * 8) == -1)) {
    uVar2 = F_00b9bbd0(*(undefined4 *)(in_ecx + 8),((char *)REFP(0x1348600)));
  }
  uVar1 = *(uint *)(in_ecx + 0x14 + uVar2 * 8);
  if (uVar1 <= (uint)(*(int *)(in_ecx + 4) - (int)param_3)) {
    piVar4 = *(int * PTR32 *)(in_ecx + 0x10 + uVar2 * 8);
    piVar3 = param_3;
    for (uVar2 = uVar1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1) &&
          ((uVar2 < 3 || (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2))))))))))) {
      return uVar1 + (int)param_3;
    }
  }
  return 0;
}

/* ref: FUN_00c186e0 */
GEN_NOFRAME uint F_00c186e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc186e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  byte * in_eax;
  byte * in_ecx;
  
  in_eax = param_3;
  in_ecx = param_2;
  do {
    switch((unsigned int)(uintptr_t)(*in_eax)) {
    case 0: ;
      return (uint)in_ecx;
    case 0x24: ;
      if (in_eax[1] == 0) {
        return (in_ecx != (byte *)param_1[1]) - 1 & (uint)in_ecx;
      }
    default: ;
switchD_00c18703_caseD_1: ;
      pbVar4 = (byte *)F_00c18190(in_eax,param_1);
      if (in_ecx < (byte *)param_1[1]) {
        bVar2 = *in_eax;
        uVar5 = (uint)*in_ecx;
        if (bVar2 == 0x25) {
          uVar5 = F_00c18200(uVar5,(uint)in_eax[1]);
LAB_00c1883a: ;
          if (uVar5 == 0) goto LAB_00c18845;
        }
        else if (bVar2 != 0x2e) {
          if (bVar2 == 0x5b) {
            uVar5 = F_00c18310(in_eax,uVar5,pbVar4 - 1);
          }
          else {
            uVar5 = (uint)(bVar2 == uVar5);
          }
          goto LAB_00c1883a;
        }
        bVar1 = true;
      }
      else {
LAB_00c18845: ;
        bVar1 = false;
      }
      switch((unsigned int)(uintptr_t)(*pbVar4)) {
      case 0x2a: ;
        uVar5 = F_00c18470(param_1,in_ecx,in_eax,pbVar4);
        return uVar5;
      case 0x2b: ;
        if (!bVar1) {
          return 0;
        }
        uVar5 = F_00c18470(param_1,in_ecx + 1,in_eax,pbVar4);
        return uVar5;
      default: ;
        if (!bVar1) {
          return 0;
        }
        in_ecx = in_ecx + 1;
        in_eax = pbVar4;
        break;
      case 0x2d: ;
        uVar5 = F_00c18510(in_ecx,param_1,in_eax,pbVar4);
        return uVar5;
      case 0x3f: ;
        if ((bVar1) && (uVar5 = F_00c186e0(param_1,in_ecx + 1,pbVar4 + 1), uVar5 != 0)) {
          return uVar5;
        }
        in_eax = pbVar4 + 1;
      }
      break;
    case 0x25: ;
      bVar2 = in_eax[1];
      if (bVar2 == 0x62) {
        in_ecx = (byte *)F_00c18400(in_eax + 2,in_ecx,param_1);
        if (in_ecx == (byte *)0x0) {
          return 0;
        }
        in_eax = in_eax + 4;
      }
      else if (bVar2 == 0x66) {
        pbVar4 = in_eax + 2;
        if (*pbVar4 != 0x5b) {
          F_00b9bbd0(param_1[2],((char *)REFP(0x134869c)));
        }
        in_eax = (byte *)F_00c18190(pbVar4,param_1);
        if (in_ecx == (byte *)*param_1) {
          bVar2 = 0;
        }
        else {
          bVar2 = in_ecx[-1];
        }
        uVar5 = F_00c18310(pbVar4,(uint)bVar2,in_eax - 1);
        if (uVar5 != 0) {
          return 0;
        }
        uVar5 = F_00c18310(pbVar4,(uint)*in_ecx,in_eax - 1);
        if (uVar5 == 0) {
          return 0;
        }
      }
      else {
        iVar3 = F_00c48637((uint)bVar2);
        if (iVar3 == 0) goto switchD_00c18703_caseD_1;
        in_ecx = (byte *)F_00c18650((uint)in_eax[1],param_1,in_ecx);
        if (in_ecx == (byte *)0x0) {
          return 0;
        }
        in_eax = in_eax + 2;
      }
      break;
    case 0x28: ;
      if (in_eax[1] == 0x29) {
        uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 2,0xfffffffe);
        return uVar5;
      }
      uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 1,0xffffffff);
      return uVar5;
    case 0x29: ;
      uVar5 = F_00c185f0(param_1,in_ecx,in_eax + 1);
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_00c189b0 */
GEN_NOFRAME uint F_00c189b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc189b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  char * _MaxCount;
  int * _Buf;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  if (param_4 == 0) {
    return (uint)param_1;
  }
  if (param_2 < param_4) {
    return 0;
  }
  _MaxCount = ((char *)GEN_TOP((param_2 - (param_4 - 1))));
  _Buf = param_1;
  do {
    if ((_MaxCount == (char *)0x0) ||
       (pvVar1 = F_00c48f80(_Buf,(int)*param_3,(gen_size32)_MaxCount), pvVar1 == (undefined *)0x0)) {
      return 0;
    }
    piVar5 = (int *)((int)pvVar1 + 1);
    piVar3 = (int *)(param_3 + 1);
    piVar4 = piVar5;
    for (uVar2 = param_4 - 1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) goto LAB_00c18a48;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1) &&
          ((uVar2 < 3 || (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2))))))))))) {
      return (uint)pvVar1;
    }
LAB_00c18a48: ;
    _MaxCount = ((char *)GEN_TOP(((int)_Buf + ((int)_MaxCount - (int)piVar5))));
    _Buf = piVar5;
  } while( true );
}

/* ref: FUN_00c18a70 */
GEN_NOFRAME uint F_00c18a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int in_edi = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (in_edi < in_esi[3]) {
    iVar1 = in_esi[in_edi * 2 + 5];
    if (iVar1 == -1) {
      F_00b9bbd0(in_esi[2],((char *)REFP(0x13486d8)));
    }
    else if (iVar1 == -2) {
      uVar2 = F_00b9ae00(in_esi[2],(in_esi[in_edi * 2 + 4] - *in_esi) + 1);
      return uVar2;
    }
    uVar2 = F_00b9ae20(in_esi[2],in_esi[in_edi * 2 + 4],iVar1);
    return uVar2;
  }
  if (in_edi == 0) {
    uVar2 = F_00b9ae20(in_esi[2],in_ecx,in_eax - in_ecx);
    return uVar2;
  }
  uVar2 = F_00b9bbd0(in_esi[2],((char *)REFP(0x13486c0)));
  return uVar2;
}

/* ref: FUN_00c18af0 */
GEN_NOFRAME uint F_00c18af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc18af0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int in_edi;
  
  uVar1 = *(uint *)(in_eax + 0xc);
  if ((uVar1 == 0) && ((*(int *)&gen_a1) != 0)) {
    uVar1 = 1;
  }
  F_00b9bc60(*(undefined4 *)(in_eax + 8),uVar1,((char *)REFP(0x13486ec)));
  in_edi = 0;
  if (0 < (int)uVar1) {
    do {
      F_00c18a70(param_3,(*(int *)&gen_a1),in_eax,in_edi);
      in_edi = in_edi + 1;
    } while (in_edi < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00c18b40 */
GEN_NOFRAME uint F_00c18b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc18b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  uint uVar2;
  char * _Str;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  _Str = (char *)F_00b9c820(param_1,2,&(*(int *)(gen_frame + 0xc)));
  uVar4 = (*(uint *)(gen_frame + 0x0));
  (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
  uVar3 = F_00b9ca20(param_1,3,1);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = (((int)uVar3 < 0) - 1 & uVar3) - 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if ((*(uint *)(gen_frame + 0x0)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x0));
  }
  uVar4 = (*(uint *)(gen_frame + 0x0));
  if ((param_2 == 0) ||
     ((uVar4 = F_00b9abc0(param_1,4), uVar4 == 0 &&
      (pcVar5 = F_00c52d60(_Str,((char *)REFP(0x1348700))), uVar4 = (*(uint *)(gen_frame + 0x0)), pcVar5 != (char *)0x0)))) {
    cVar1 = *_Str;
    if (cVar1 != '^') {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    else {
      _Str = _Str + 1;
      (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(uint *)(gen_frame + 0x14)) = uVar4 + uVar2;
    uVar3 = uVar3 + uVar2;
    do {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x10)),uVar3,_Str);
      if (uVar4 != 0) {
        if (param_2 == 0) {
          uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),uVar3,uVar4);
          return uVar3;
        }
        F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
        F_00b9ae00(param_1,uVar4 - uVar2);
        uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),0,0);
        return uVar3 + 2;
      }
    } while ((uVar3 < (*(uint *)(gen_frame + 0x14))) && (uVar3 = uVar3 + 1, _Str = (*(char * PTR32 *)(gen_frame + 0x8)), (*(uint *)(gen_frame + 0x4)) == 0));
  }
  else {
    uVar3 = F_00c189b0(uVar3 + uVar2,(*(uint *)(gen_frame + 0x0)) - uVar3,_Str,(*(int *)(gen_frame + 0xc)));
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
      F_00b9ae00(param_1,(uVar3 - uVar2) + (*(int *)(gen_frame + 0xc)));
      return 2;
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c18d00 */
GEN_NOFRAME uint F_00c18d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,1);
  return uVar1;
}

/* ref: FUN_00c18d10 */
GEN_NOFRAME uint F_00c18d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,0);
  return uVar1;
}

/* ref: FUN_00c18d20 */
GEN_NOFRAME uint F_00c18d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc18d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = F_00b9abf0(param_1,0xffffd8ed,&(*(int *)(gen_frame + 0xc)));
  uVar2 = F_00b9abf0(param_1,0xffffd8ec,0);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  (*(uint *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0xc)) + uVar1;
  uVar3 = F_00b9ab70(param_1,0xffffd8eb);
  uVar3 = uVar3 + uVar1;
  if (uVar3 <= (*(uint *)(gen_frame + 0x14))) {
    do {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x10)),uVar3,uVar2);
      if (uVar4 != 0) {
        iVar5 = uVar4 - uVar1;
        if (uVar4 == uVar3) {
          iVar5 = iVar5 + 1;
        }
        F_00b9ae00(param_1,iVar5);
        F_00b9a850(param_1,0xffffd8eb);
        if (((*(uint *)(gen_frame + 0x1c)) != 0) || (uVar1 = 1, uVar3 == 0)) {
          uVar1 = (*(uint *)(gen_frame + 0x1c));
        }
        F_00b9bc60((*(undefined4 *)(gen_frame + 0x18)),uVar1,((char *)REFP(0x13486ec)));
        iVar5 = 0;
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        goto LAB_00c18e00;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (*(uint *)(gen_frame + 0x14)));
  }
  return 0;
LAB_00c18e00: ;
  if (iVar5 < (int)(*(uint *)(gen_frame + 0x1c))) {
    uVar2 = ((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2 + 1)];
    if (uVar2 == 0xffffffff) {
      F_00b9bbd0((*(undefined4 *)(gen_frame + 0x18)),((char *)REFP(0x13486d8)));
    }
    else if (uVar2 == 0xfffffffe) {
      F_00b9ae00((*(undefined4 *)(gen_frame + 0x18)),(((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2)] - (*(uint *)(gen_frame + 0x10))) + 1);
      goto LAB_00c18e56;
    }
    uVar6 = ((uint *)(gen_frame + 0x20))[(int)(iVar5 * 2)];
LAB_00c18e49: ;
    F_00b9ae20((*(undefined4 *)(gen_frame + 0x18)),uVar6,uVar2);
  }
  else {
    if (iVar5 == 0) {
      uVar2 = uVar4 - uVar3;
      uVar6 = uVar3;
      goto LAB_00c18e49;
    }
    F_00b9bbd0((*(undefined4 *)(gen_frame + 0x18)),((char *)REFP(0x13486c0)));
  }
LAB_00c18e56: ;
  iVar5 = iVar5 + 1;
  if ((int)uVar1 <= iVar5) {
    return uVar1;
  }
  goto LAB_00c18e00;
}

/* ref: FUN_00c18e90 */
GEN_NOFRAME uint F_00c18e90(unsigned int gen_a0)
{
  GEN_ENTER(0xc18e90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9c820(param_1,1,0);
  F_00b9c820(param_1,2,0);
  F_00b9a760(param_1,2);
  F_00b9ae00(param_1,0);
  F_00b9af30(param_1,((code *)REFP(0xc18d20)),3);
  return 1;
}

/* ref: FUN_00c18ed0 */
GEN_NOFRAME uint F_00c18ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc18ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x134870c)));
  return uVar1;
}

/* ref: FUN_00c18ef0 */
GEN_NOFRAME uint F_00c18ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar1 = (uint *)F_00b9abf0(*(undefined4 *)(in_eax + 8),3,&(*(uint *)(gen_frame + 0x8)));
  uVar3 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = (undefined1 *)puVar1;
  puVar4 = (undefined1 *)puVar1;
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    do {
      if (puVar4[uVar3] == '%') {
        iVar2 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        iVar2 = F_00c48637((uint)(byte)puVar4[iVar2]);
        if (iVar2 == 0) {
          puVar1 = param_2 + 0x83;
          if (puVar1 <= (uint *)*param_2) {
            puVar1 = (uint *)F_00b9bef0(param_2);
          }
          *(undefined1 *)*param_2 = puVar4[uVar3];
          *param_2 = *param_2 + 1;
        }
        else if (puVar4[uVar3] == '0') {
          puVar1 = (uint *)F_00b9bf30(param_2,param_3,param_4 - param_3);
        }
        else {
          F_00c18a70(param_4,param_3,in_eax,(char)puVar4[uVar3] - 0x31);
          puVar1 = (uint *)F_00b9c000(param_2);
          puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
        }
      }
      else {
        if (param_2 + 0x83 <= (uint *)*param_2) {
          F_00b9bef0(param_2);
        }
        puVar1 = (uint *)*param_2;
        *(undefined1 *)puVar1 = puVar4[uVar3];
        *param_2 = *param_2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0x8)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c18fd0 */
GEN_NOFRAME uint F_00c18fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc18fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_eax + 8);
  uVar2 = F_00b9a940(uVar1,3);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
  case 4: ;
    uVar2 = F_00c18ef0(in_eax,param_2,param_3,param_4);
    return uVar2;
  case 5: ;
    F_00c18a70(param_4,param_3,in_eax,0);
    F_00b9b040(uVar1,3);
    break;
  case 6: ;
    F_00b9a910(uVar1,3);
    uVar2 = F_00c18af0(in_eax,param_3,param_4);
    F_00b9b510(uVar1,uVar2,1);
  }
  uVar2 = F_00b9abc0(uVar1,0xffffffff);
  if (uVar2 != 0) {
    uVar2 = F_00b9a9f0(uVar1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = F_00b9a940(uVar1,0xffffffff);
      uVar2 = F_00b9a960(uVar1,uVar2);
      F_00b9bbd0(uVar1,((char *)REFP(0x134873c)),uVar2);
    }
    uVar2 = F_00b9c000(param_2);
    return uVar2;
  }
  F_00b9a760(uVar1,0xfffffffe);
  F_00b9ae20(uVar1,param_3,param_4 - param_3);
  uVar2 = F_00b9c000(param_2);
  return uVar2;
}

/* ref: FUN_00c190e0 */
GEN_NOFRAME uint F_00c190e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc190e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x32c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  puVar2 = (undefined1 *)F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0xc)));
  pcVar3 = (char *)F_00b9c820(param_1,2,0);
  uVar4 = F_00b9a940(param_1,3);
  uVar5 = F_00b9ca20(param_1,4,(*(int *)(gen_frame + 0xc)) + 1);
  cVar1 = *pcVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  if (cVar1 != '^') {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  else {
    pcVar3 = pcVar3 + 1;
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((((uVar4 != 3) && (uVar4 != 4)) && (uVar4 != 6)) && (uVar4 != 5)) {
    F_00b9c590(param_1,3,((char *)REFP(0x1348760)));
  }
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x120)));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar2 + (*(int *)(gen_frame + 0xc));
  puVar6 = puVar2;
  if ((int)(*(uint *)(gen_frame + 0x8)) < 1) {
LAB_00c19243: ;
    F_00b9bf30(((uint * PTR32 *)(gen_frame + 0x120)),puVar6,(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar6);
    F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x120)));
    F_00b9ae00(param_1,(*(int *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x32c)) ^ (uint)&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 2;
  }
  do {
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    puVar6 = (undefined1 *)F_00c186e0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar2,pcVar3);
    if (puVar6 == (undefined1 *)0x0) {
LAB_00c191ef: ;
      puVar6 = puVar2;
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x14)) <= puVar2) goto LAB_00c19243;
      if (&(*(uint *)(gen_frame + 0x32c)) <= ((uint * PTR32 *)(gen_frame + 0x120))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x120)));
      }
      *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x120))[0] = *puVar2;
      ((uint * PTR32 *)(gen_frame + 0x120))[0] = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x120))[0] + 1);
      puVar6 = puVar2 + 1;
    }
    else {
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      F_00c18fd0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),((uint * PTR32 *)(gen_frame + 0x120)),puVar2,puVar6);
      if (puVar6 <= puVar2) goto LAB_00c191ef;
    }
    if (((*(uint *)(gen_frame + 0x4)) != 0) || (puVar2 = puVar6, (int)(*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x0)))) goto LAB_00c19243;
  } while( true );
}

/* ref: FUN_00c19290 */
GEN_NOFRAME uint F_00c19290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc19290u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  
  (*(int *)(gen_frame + 0xc)) = in_ecx;
  pcVar3 = (char *)F_00b9c820(in_edx,in_ecx,&(*(int *)(gen_frame + 0xc)));
  piVar1 = in_esi + 0x83;
  if (piVar1 <= (int *)*in_esi) {
    F_00b9bef0(in_esi);
  }
  pcVar5 = (char *)*in_esi;
  *pcVar5 = '\"';
  *in_esi = *in_esi + 1;
  iVar2 = (*(int *)(gen_frame + 0xc));
  do {
    if (iVar2 == 0) {
      (*(int *)(gen_frame + 0xc)) = -1;
      if (piVar1 <= (int *)*in_esi) {
        pcVar5 = (char *)F_00b9bef0(in_esi);
      }
      *(undefined1 *)*in_esi = 0x22;
      *in_esi = *in_esi + 1;
      return (uint)pcVar5;
    }
    (*(int *)(gen_frame + 0xc)) = iVar2 - 1;
    uVar4 = (uint)*pcVar3;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pcVar5 = (char *)F_00b9bf30(in_esi,&REFG(undefined, 0x1348784),4);
      break;
    default: ;
      if (piVar1 <= (int *)*in_esi) {
        uVar4 = F_00b9bef0(in_esi);
      }
      pcVar5 = ((char *)GEN_TOP(CONCAT31((int3)(uVar4 >> 8),*pcVar3)));
      *(char *)*in_esi = *pcVar3;
      goto LAB_00c1934a;
    case 10: ;
    case 0x22: ;
    case 0x5c: ;
      if (piVar1 <= (int *)*in_esi) {
        F_00b9bef0(in_esi);
      }
      *(undefined1 *)*in_esi = 0x5c;
      *in_esi = *in_esi + 1;
      if (piVar1 <= (int *)*in_esi) {
        F_00b9bef0(in_esi);
      }
      pcVar5 = (char *)*in_esi;
      *pcVar5 = *pcVar3;
LAB_00c1934a: ;
      *in_esi = *in_esi + 1;
      break;
    case 0xd: ;
      pcVar5 = (char *)F_00b9bf30(in_esi,&REFG(undefined, 0x1348780),2);
    }
    pcVar3 = pcVar3 + 1;
    iVar2 = (*(int *)(gen_frame + 0xc));
  } while( true );
}

/* ref: FUN_00c193f0 */
GEN_NOFRAME uint F_00c193f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc193f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  
  bVar1 = *param_2;
  pbVar5 = param_2;
  while ((bVar1 != 0 && (uVar3 = F_00c51da0(((char *)REFP(0x134878c)),(int)(char)*pbVar5), uVar3 != 0))) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if (5 < (uint)((int)pbVar5 - (int)param_2)) {
    F_00b9bbd0(in_eax,((char *)REFP(0x1348794)));
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  if (*pbVar5 == 0x2e) {
    iVar4 = F_00c48637((uint)pbVar5[1]);
    pbVar2 = pbVar5 + 1;
    if (iVar4 != 0) {
      pbVar2 = pbVar5 + 2;
    }
    pbVar5 = pbVar2;
    iVar4 = F_00c48637((uint)*pbVar5);
    if (iVar4 != 0) {
      pbVar5 = pbVar5 + 1;
    }
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    F_00b9bbd0(in_eax,((char *)REFP(0x13487b4)));
  }
  *param_3 = 0x25;
  F_00c52620(param_3 + 1,(char *)param_2,(gen_size32)(pbVar5 + (1 - (int)param_2)));
  (param_3 + 1)[(int)(pbVar5 + (1 - (int)param_2))] = '\0';
  return (uint)pbVar5;
}

/* ref: FUN_00c19500 */
GEN_NOFRAME uint F_00c19500(unsigned int gen_a0)
{
  GEN_ENTER(0xc19500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x440];
  char cVar1;
  longlong lVar2;
  char * pcVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  uint uVar7;
  int in_ecx;
  char * pcVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x43c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x4));
  in_ecx = 1;
  pcVar3 = (char *)F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0x18)));
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3 + (*(int *)(gen_frame + 0x18));
  F_00b9c080(param_1,((char * PTR32 *)(gen_frame + 0x1c)));
  if (pcVar3 < pcVar3 + (*(int *)(gen_frame + 0x18))) {
    do {
      if (*pcVar3 != '%') {
        if (((char *)(gen_frame + 0x228)) <= ((char * PTR32 *)(gen_frame + 0x1c))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x1c)));
        }
        *((char * PTR32 *)(gen_frame + 0x1c))[0] = *pcVar3;
        ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[0] + 1;
        pcVar3 = pcVar3 + 1;
        goto LAB_00c19794;
      }
      pcVar8 = pcVar3 + 1;
      if (*pcVar8 == '%') {
        if (((char *)(gen_frame + 0x228)) <= ((char * PTR32 *)(gen_frame + 0x1c))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x1c)));
        }
        *((char * PTR32 *)(gen_frame + 0x1c))[0] = *pcVar8;
        ((char * PTR32 *)(gen_frame + 0x1c))[0] = ((char * PTR32 *)(gen_frame + 0x1c))[0] + 1;
        pcVar3 = pcVar3 + 2;
        goto LAB_00c19794;
      }
      in_ecx = in_ecx + 1;
      pcVar8 = (char *)F_00c193f0(param_1,pcVar8,((char *)(gen_frame + 0x228)));
      pcVar3 = pcVar8 + 1;
      switch((unsigned int)(uintptr_t)(*pcVar8)) {
      case 'E': ;
      case 'G': ;
      case 'e': ;
      case 'f': ;
      case 'g': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),GEN_LO32((undefined8)gen_d2bits((double)fVar9)),GEN_HI32((undefined8)gen_d2bits((double)fVar9)));
        break;
      default: ;
        uVar7 = F_00b9bbd0(param_1,((char *)REFP(0x13487e8)),(int)*pcVar8);
        goto LAB_00c197b0;
      case 'X': ;
      case 'o': ;
      case 'u': ;
      case 'x': ;
        pcVar5 = ((char *)(gen_frame + 0x228));
        pcVar8 = ((char *)(gen_frame + 0x228)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x228)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x228)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        (*(ushort *)(gen_frame + 0x6)) = gen_x87_cw;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = gen_x87_cw | 0xc00;
        (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)fVar9);
        lVar2 = (*(longlong *)(gen_frame + 0x10));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (uint)(longlong)TRUNC((float10)fVar9);
        iVar4 = (uint)(*(longlong *)(gen_frame + 0x10));
        gen_set_x87_cw((unsigned short)((*(ushort *)(gen_frame + 0x6))));
        (*(longlong *)(gen_frame + 0x10)) = lVar2;
        goto LAB_00c195f6;
      case 'c': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        iVar4 = (int)fVar9;
LAB_00c195f6: ;
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),iVar4);
        break;
      case 'd': ;
      case 'i': ;
        pcVar5 = ((char *)(gen_frame + 0x228));
        pcVar8 = ((char *)(gen_frame + 0x228)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x1c)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x228)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x228)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),(int)fVar9);
        break;
      case 'q': ;
        F_00c19290(in_ecx,param_1,((char * PTR32 *)(gen_frame + 0x1c)));
        goto LAB_00c19794;
      case 's': ;
        uVar7 = F_00b9c820(param_1,in_ecx,&(*(uint *)(gen_frame + 0x8)));
        uVar6 = F_00c51da0(((char *)(gen_frame + 0x228)),0x2e);
        if ((uVar6 != 0) || ((*(uint *)(gen_frame + 0x8)) < 100)) {
          F_00c4720f(((char *)(gen_frame + 0x23c)),((char *)(gen_frame + 0x228)),uVar7);
          break;
        }
        F_00b9a910(param_1,in_ecx);
        F_00b9c000(((char * PTR32 *)(gen_frame + 0x1c)));
        goto LAB_00c19794;
      }
      pcVar8 = ((char *)(gen_frame + 0x23c));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00b9bf30(((char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x23c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x23c)) + 1));
LAB_00c19794: ;
    } while (pcVar3 < (*(char * PTR32 *)(gen_frame + 0xc)));
  }
  F_00b9bfc0(((char * PTR32 *)(gen_frame + 0x1c)));
  uVar7 = 1;
LAB_00c197b0: ;
  F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00c19830 */
GEN_NOFRAME uint F_00c19830(unsigned int gen_a0)
{
  GEN_ENTER(0xc19830u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b9b150(in_esi,0,1);
  F_00b9ae20(in_esi,&REFG(undefined, 0x14c5bf3),0);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9a760(in_esi,0xfffffffe);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348878)));
  uVar1 = F_00b9a760(in_esi,0xfffffffe);
  return uVar1;
}

/* ref: FUN_00c19890 */
GEN_NOFRAME uint F_00c19890(unsigned int gen_a0)
{
  GEN_ENTER(0xc19890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b9cd70(param_1,((char *)REFP(0x1348880)),&REFG(undefined * PTR32, 0x110ea68));
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348888)));
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348890)));
  F_00c19830(param_1);
  return 1;
}

