#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_006664c0 */
GEN_FRAME uint GEN_STDCALL F_006664c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6664c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666500 */
GEN_FRAME uint GEN_STDCALL F_00666500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666550 */
GEN_FRAME uint GEN_STDCALL F_00666550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_00666590 */
GEN_FRAME uint GEN_STDCALL F_00666590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_006665c0 */
GEN_FRAME uint GEN_STDCALL F_006665c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6665c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_00666600 */
GEN_FRAME uint GEN_STDCALL F_00666600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00666630 */
GEN_FRAME uint GEN_THISCALL F_00666630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00666640 */
GEN_FRAME byte GEN_THISCALL F_00666640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00666660 */
GEN_FRAME byte GEN_THISCALL F_00666660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00666680 */
GEN_FRAME byte GEN_THISCALL F_00666680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006666a0 */
GEN_FRAME byte GEN_THISCALL F_006666a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6666a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006666c0 */
GEN_FRAME uint F_006666c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006666d0 */
GEN_FRAME uint F_006666d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_006666e0 */
GEN_FRAME uint F_006666e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006666f0 */
GEN_FRAME uint F_006666f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00666700 */
GEN_FRAME uint F_00666700(unsigned int gen_a0)
{
  GEN_ENTER(0x666700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00666710 */
GEN_FRAME uint F_00666710(unsigned int gen_a0)
{
  GEN_ENTER(0x666710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00666720 */
GEN_FRAME uint F_00666720(unsigned int gen_a0)
{
  GEN_ENTER(0x666720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00666740 */
GEN_FRAME uint F_00666740(unsigned int gen_a0)
{
  GEN_ENTER(0x666740u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00666760 */
GEN_FRAME uint F_00666760(unsigned int gen_a0)
{
  GEN_ENTER(0x666760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_00666770 */
GEN_FRAME uint F_00666770(unsigned int gen_a0)
{
  GEN_ENTER(0x666770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00666780 */
GEN_FRAME uint F_00666780(unsigned int gen_a0)
{
  GEN_ENTER(0x666780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666790 */
GEN_FRAME uint F_00666790(unsigned int gen_a0)
{
  GEN_ENTER(0x666790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006667a0 */
GEN_FRAME uint F_006667a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006667b0 */
GEN_FRAME uint F_006667b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006667c0 */
GEN_FRAME uint F_006667c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x19)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x19);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006667e0 */
GEN_FRAME uint F_006667e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00666810 */
GEN_FRAME uint GEN_THISCALL F_00666810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00666840 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00666840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x666840u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00666890 */
GEN_FRAME uint GEN_THISCALL F_00666890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006668a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006668a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6668a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006668f0 */
GEN_FRAME uint F_006668f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6668f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00666910 */
GEN_FRAME uint GEN_THISCALL F_00666910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00666960 */
GEN_FRAME uint GEN_THISCALL F_00666960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666960u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00666980 */
GEN_FRAME uint GEN_THISCALL F_00666980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666980u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_006669a0 */
GEN_FRAME uint GEN_THISCALL F_006669a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6669a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_006669d0 */
GEN_FRAME uint GEN_THISCALL F_006669d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6669d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006669f0 */
GEN_FRAME uint GEN_THISCALL F_006669f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6669f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  return *(uint *)((int)(uintptr_t)this) >> ((byte)param_1 & 0x1f) & uVar1;
}

/* ref: FUN_00666a30 */
GEN_FRAME uint GEN_THISCALL F_00666a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666a30u, gen_a0, gen_a1, 0u, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = ((ushort)(byte)param_2 - (ushort)(byte)param_2) - (ushort)((byte)param_2 != 0);
  return (uint)in_ecx;
}

/* ref: FUN_00666a50 */
GEN_FRAME uint GEN_THISCALL F_00666a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(byte * PTR32 *)this =
       ~('\x01' << (bVar1 & 0x1f)) & **(byte * PTR32 *)this | ((char)param_1 != '\0') << (bVar1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00666a80 */
GEN_FRAME uint F_00666a80(unsigned int gen_a0)
{
  GEN_ENTER(0x666a80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666a90 */
GEN_FRAME uint F_00666a90(unsigned int gen_a0)
{
  GEN_ENTER(0x666a90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666aa0 */
GEN_FRAME uint F_00666aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x666aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666ab0 */
GEN_FRAME unsigned int GEN_STDCALL F_00666ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00666af0 */
GEN_FRAME uint F_00666af0(unsigned int gen_a0)
{
  GEN_ENTER(0x666af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666b00 */
GEN_FRAME uint F_00666b00(unsigned int gen_a0)
{
  GEN_ENTER(0x666b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666b10 */
GEN_FRAME byte F_00666b10(void)
{
  GEN_ENTER(0x666b10u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b20 */
GEN_FRAME byte F_00666b20(void)
{
  GEN_ENTER(0x666b20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b40 */
GEN_FRAME byte F_00666b40(void)
{
  GEN_ENTER(0x666b40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b60 */
GEN_FRAME byte F_00666b60(void)
{
  GEN_ENTER(0x666b60u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b80 */
GEN_FRAME uint GEN_THISCALL F_00666b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00666ba0 */
GEN_FRAME uint GEN_THISCALL F_00666ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666ba0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x10ab964) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x10ab968) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x10ab96c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x10ab974) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x10ab978) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x10ab97c) * fVar4;
  *param_2 = (*(float *)&REFG(undefined, 0x10ab960) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar5);
  param_2[1] = fVar7 * fVar2;
  param_2[2] = fVar8 * fVar3;
  param_2[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00666bd0 */
GEN_FRAME uint F_00666bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x666bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666c10 */
GEN_FRAME uint F_00666c10(unsigned int gen_a0)
{
  GEN_ENTER(0x666c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666c30 */
GEN_FRAME uint GEN_THISCALL F_00666c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2] & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_00666c60 */
GEN_FRAME uint GEN_THISCALL F_00666c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xd4) +
                 (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xd8) +
                        ((uint)(ushort)param_2 + (uint)(ushort)param_1 * 0x42) * 2))) * 4))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: FUN_00666ca0 */
GEN_FRAME uint GEN_THISCALL F_00666ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x20 + *(int *)(in_ecx + 0x100);
}

/* ref: FUN_00666cd0 */
GEN_NOFRAME uint GEN_THISCALL F_00666cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_0065e920(((undefined1 *)(gen_frame + 0x0)),(uint)this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00666d70 */
GEN_FRAME uint GEN_THISCALL F_00666d70(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x666d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  F_0065ed60(param_1 GEN_EDX_FWD,param_3);
  F_0065ee80(param_1 GEN_EDX_ARG,param_4);
  return (uint)param_1;
}

/* ref: FUN_00666e10 */
GEN_NOFRAME uint GEN_THISCALL F_00666e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x666e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  *(uint *)((int)this + 0x30) = uVar1 ^ uVar8;
  *(uint *)((int)this + 0x34) = uVar2 ^ uVar8;
  *(uint *)((int)this + 0x38) = uVar3 ^ uVar8;
  (*(float *)(gen_frame + 0x10)) = gen_bits2f(*param_2 ^ uVar8);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[1] ^ uVar8);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(param_2[1] ^ uVar8);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar1 ^ uVar8);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(float *)(gen_frame + 0x0)) = gen_bits2f(*param_2 ^ uVar8);
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar1 ^ uVar8);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  F_004efe70(this GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0x0)));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar6 / (float10)*param_3);
  fVar4 = param_3[1];
  (*(float *)(gen_frame + 0x14)) = (float)(fVar6 / (float10)fVar4);
  fVar5 = param_3[2];
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 / (float10)fVar5);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar6 / (float10)*param_3);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar6 / (float10)fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar6 / (float10)fVar5);
  F_0065f020(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  return (uint)this;
}

/* ref: FUN_00666fd0 */
GEN_FRAME byte GEN_THISCALL F_00666fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006601a0(param_1 GEN_EDX_FWD,(uint)this);
  return bVar1;
}

/* ref: FUN_00666fe0 */
GEN_FRAME byte GEN_THISCALL F_00666fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006602f0(param_1 GEN_EDX_FWD,(uint)this,param_2);
  return bVar1;
}

/* ref: FUN_00667000 */
GEN_FRAME byte GEN_THISCALL F_00667000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00660580(param_1 GEN_EDX_FWD,this,param_2);
  return bVar1;
}

/* ref: FUN_00667020 */
GEN_NOFRAME byte GEN_THISCALL F_00667020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f4d40(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_1);
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 - (float10)param_1[2]);
  fVar2 = (float10)(float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(float)(fVar4 - (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)fVar1 <= (float10)param_1[3] * (float10)param_1[3]) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006670b0 */
GEN_FRAME uint GEN_THISCALL F_006670b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6670b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + in_ecx);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return (uint)puVar1;
}

/* ref: FUN_00667210 */
GEN_NOFRAME uint GEN_THISCALL F_00667210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x667210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00667240 */
GEN_FRAME uint GEN_THISCALL F_00667240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)this != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (param_2 != 0) {
    uVar2 = param_2 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)((char)param_1 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    *(int *)((int)this + 4) = param_2;
    *(int * PTR32 *)this = piVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)this;
}

/* ref: FUN_006672d0 */
GEN_FRAME uint GEN_THISCALL F_006672d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6672d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_00667300 */
GEN_FRAME uint GEN_THISCALL F_00667300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_FWD,uVar3);
  return uVar2;
}

/* ref: FUN_00667330 */
GEN_FRAME uint GEN_THISCALL F_00667330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this GEN_EDX_FWD,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00667370 */
GEN_FRAME uint GEN_THISCALL F_00667370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667370u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_006673a0 */
GEN_FRAME uint GEN_THISCALL F_006673a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6673a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: FUN_006673d0 */
GEN_FRAME uint GEN_THISCALL F_006673d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6673d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00667400 */
GEN_FRAME uint GEN_THISCALL F_00667400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667400u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00667470 */
GEN_FRAME uint GEN_THISCALL F_00667470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006674a0 */
GEN_FRAME uint GEN_THISCALL F_006674a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6674a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006674d0 */
GEN_FRAME uint GEN_THISCALL F_006674d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6674d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667500 */
GEN_FRAME uint GEN_THISCALL F_00667500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667550 */
GEN_FRAME uint GEN_THISCALL F_00667550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667580 */
GEN_FRAME uint GEN_THISCALL F_00667580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006675b0 */
GEN_FRAME unsigned int GEN_THISCALL F_006675b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6675b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *(float *)this = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  *(float *)((int)this + 4) = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  *(float *)((int)this + 8) = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  *(float *)((int)this + 0xc) = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  return 0;
}

/* ref: FUN_00667680 */
GEN_FRAME uint GEN_THISCALL F_00667680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_006676b0 */
GEN_FRAME unsigned int GEN_THISCALL F_006676b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6676b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar9 [16];
  
  F_00d95160(this GEN_EDX_FWD,param_1 + 0x10,param_1);
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c);
  fVar4 = *(float *)&REFG(undefined, 0x10ab958);
  fVar3 = *(float *)&REFG(undefined, 0x10ab954);
  fVar2 = *(float *)&REFG(undefined, 0x10ab950);
  uVar6 = *(uint *)((int)this + 4) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar7 = *(uint *)((int)this + 8) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar8 = *(uint *)((int)this + 0xc) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *(uint *)this = *(uint *)this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *(uint *)((int)this + 4) = uVar6;
  *(uint *)((int)this + 8) = uVar7;
  *(uint *)((int)this + 0xc) = uVar8;
  uVar6 = *(uint *)&REFG(undefined, 0x10ab9b4) ^ *(uint *)(param_1 + 0x14);
  uVar7 = *(uint *)&REFG(undefined, 0x10ab9b8) ^ *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)&REFG(undefined, 0x10ab9bc) ^ *(uint *)(param_1 + 0x1c);
  *(uint *)((int)this + 0x10) = *(uint *)&REFG(undefined, 0x10ab9b0) ^ *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x18) = uVar7;
  *(uint *)((int)this + 0x1c) = uVar8;
  memcpy(&(auVar1), &(*(gen_v16 *)(param_1 + 0x20)), sizeof(*(gen_v16 *)(param_1 + 0x20)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(param_1 + 0x20)) : sizeof(auVar1));
  gen_rcpps(&(auVar9), &(in_XMM1), &(auVar1));
  *(float *)((int)this + 0x20) = (fVar2 - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar9 + 0))) * (*(float *)((char *)&auVar9 + 0));
  *(float *)((int)this + 0x24) = (fVar3 - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar9 + 4))) * (*(float *)((char *)&auVar9 + 4));
  *(float *)((int)this + 0x28) = (fVar4 - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar9 + 8))) * (*(float *)((char *)&auVar9 + 8));
  *(float *)((int)this + 0x2c) = (fVar5 - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar9 + 12))) * (*(float *)((char *)&auVar9 + 12));
  uVar6 = *(uint *)((int)this + 0x24) & *(uint *)&REFG(undefined, 0x10abc24);
  uVar7 = *(uint *)((int)this + 0x28) & *(uint *)&REFG(undefined, 0x10abc28);
  uVar8 = *(uint *)((int)this + 0x2c) & *(uint *)&REFG(undefined, 0x10abc2c);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & *(uint *)&REFG(undefined, 0x10abc20);
  *(uint *)((int)this + 0x24) = uVar6;
  *(uint *)((int)this + 0x28) = uVar7;
  *(uint *)((int)this + 0x2c) = uVar8;
  return;
}

/* ref: FUN_00667710 */
GEN_FRAME uint GEN_THISCALL F_00667710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1c) + (*(int *)&gen_args[1]) * 4))) & (*(uint *)&gen_args[2]);
}

/* ref: FUN_00667730 */
GEN_FRAME uint GEN_THISCALL F_00667730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x1c);
  puVar1 = (uint *)(iVar2 + param_1 * 4);
  *puVar1 = *puVar1 | param_2;
  return iVar2 + param_1 * 4;
}

/* ref: FUN_00667750 */
GEN_FRAME uint GEN_THISCALL F_00667750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  *puVar1 = *puVar1 & ~param_2;
  return (uint)puVar1;
}

/* ref: FUN_00667770 */
GEN_FRAME uint GEN_THISCALL F_00667770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) & 2) == 0) {
    return param_1 * 0x30 + *(int *)((int)this + 0x10);
  }
  uVar1 = F_00d31930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_006677b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6677b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x28) != 0;
}

/* ref: FUN_006677c0 */
GEN_FRAME uint GEN_THISCALL F_006677c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6677c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  iVar1 = *(int *)(uVar3 + 0x1c);
  uVar2 = param_1;
  while (uVar2 = uVar2 + 1, (int)uVar2 < iVar1) {
    uVar3 = (uint)*((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + uVar2 * 2)));
    if (uVar3 == param_1) {
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + uVar2 * 4))) & 2) != 0) {
        uVar3 = F_00d31930(this GEN_EDX_FWD,uVar2);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + uVar2 * 4))) = 1;
      *(undefined1 *)((int)this + 0x29) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00667820 */
GEN_FRAME uint F_00667820(unsigned int gen_a0)
{
  GEN_ENTER(0x667820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Client::Graphics::Render::FigureRenderer::vf2 */
GEN_NOFRAME unsigned int F_00667840(void)
{
  GEN_ENTER(0x667840u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Render::ShaderManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667890 */
GEN_NOFRAME uint GEN_THISCALL F_00667890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006689b0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_006678a0 */
GEN_FRAME uint F_006678a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6678a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006678c0 */
GEN_FRAME uint F_006678c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6678c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006678e0 */
GEN_FRAME uint GEN_THISCALL F_006678e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6678e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x21) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x1d) = 0x101;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00667920 */
GEN_FRAME uint F_00667920(unsigned int gen_a0)
{
  GEN_ENTER(0x667920u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667940 */
GEN_FRAME uint F_00667940(unsigned int gen_a0)
{
  GEN_ENTER(0x667940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00667960 */
GEN_FRAME uint F_00667960(unsigned int gen_a0)
{
  GEN_ENTER(0x667960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667980 */
GEN_FRAME uint F_00667980(unsigned int gen_a0)
{
  GEN_ENTER(0x667980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006679a0 */
GEN_FRAME uint F_006679a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6679a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006679e0 */
GEN_FRAME uint GEN_THISCALL F_006679e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6679e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  if ((*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) && (-1 < (short)param_2)) {
    piVar4 = (int *)F_00d32a50(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_FWD);
    puVar5 = (undefined4 *)((short)param_2 * 0x30 + *piVar4);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = puVar5[5];
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    param_1[4] = puVar5[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = puVar5[9];
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    param_1[8] = puVar5[8];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  param_1[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00667a50 */
GEN_FRAME uint GEN_THISCALL F_00667a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667a50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  int iVar2;
  undefined * this_01;
  undefined * pvVar3;
  undefined * PTR32 * ppvVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)(*(undefined * PTR32 *)&gen_args[2]) * 4 + 0xb4)));
  this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (-(uint)((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) & 2) * 4 + 0xbc)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)(*(undefined * PTR32 *)&gen_args[2]) * 0x50 + 0x10)));
  F_009f9a30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar1 = *(ushort *)((int)this_00 + 0x4a);
  pvVar3 = *(undefined * PTR32 *)(iVar2 + 0x14);
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uint)uVar1;
  ppvVar4 = &(*(undefined * PTR32 *)&gen_args[2]);
  if (pvVar3 <= (undefined *)(uint)uVar1) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  if ((undefined *)0x4f < *ppvVar4) {
    return 0;
  }
  puVar5 = (undefined4 *)F_00d314f0(this_01 GEN_EDX_ARG);
  F_00d36cf0(this_00 GEN_EDX_ARG,iVar2,*puVar5,0,0,0xffffffff,0xffffffff);
  return (uint)this_00;
}

/* ref: FUN_00667ad0 */
GEN_FRAME uint GEN_THISCALL F_00667ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) == (undefined *)0x0) {
    return 0x1351770;
  }
  if (-1 < (short)param_1) {
    piVar1 = (int *)F_00d321b0(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_FWD);
    return (short)param_1 * 0x30 + *piVar1;
  }
  return 0x1351770;
}

/* ref: Client::Graphics::Kernel::ShaderSceneKey::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ShaderSubViewKey::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ShaderKey::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667bd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00667bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (*(int *)((int)this + 8) != 0)) {
    uVar2 = 0;
    if (*(uint *)(iVar1 + 0x58) != 0) {
      piVar3 = *(int * PTR32 *)(iVar1 + 0x70);
      while (*piVar3 != *(int *)(param_1 + 4)) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*(uint *)(iVar1 + 0x58) <= uVar2) {
          return;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = *(undefined4 *)(param_1 + 8);
    }
  }
  return;
}

/* ref: FUN_00667c30 */
GEN_FRAME unsigned int GEN_THISCALL F_00667c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x58)));
  uVar2 = 0;
  if (uVar1 != 0) {
    while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x70))) + uVar2 * 4))) != *(int *)(param_1 + 4))
    {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

/* ref: Client::Graphics::Render::LightingManager::LightShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x14) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667cd0 */
GEN_FRAME uint GEN_THISCALL F_00667cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = REFG(int, 0x1370b90);
  uVar5 = param_1 + 0xfU & 0xfffffff0;
  if (0x8000 < uVar5) {
    return 0;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(0x8000));
    if (*(uint *)(iVar3 + 0xb8) < (uint)(*(int *)(iVar3 + 0xc4) * 3 + *piVar1)) {
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x8000));
      return 0;
    }
    uVar4 = *(int *)(iVar3 + 0xbc) + iVar2;
    if (uVar4 != 0) {
      *(uint *)((int)this + 0x28) = uVar5;
      *(uint *)((int)this + 0x24) = uVar4;
      return uVar4;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0x28);
    uVar5 = iVar3 + uVar5;
    if (uVar5 < 0x8001) {
      *(uint *)((int)this + 0x28) = uVar5;
      return iVar3 + *(int *)((int)this + 0x24);
    }
  }
  return 0;
}

/* ref: FUN_00667da0 */
GEN_FRAME uint GEN_THISCALL F_00667da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: Client::Graphics::Render::GraphicsConfig::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb2c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667e00 */
GEN_FRAME uint F_00667e00(unsigned int gen_a0)
{
  GEN_ENTER(0x667e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667e20 */
GEN_FRAME uint F_00667e20(unsigned int gen_a0)
{
  GEN_ENTER(0x667e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00667e70 */
GEN_FRAME uint GEN_THISCALL F_00667e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00662250(in_ecx + 0xc0 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_SpecialShadow::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::CameraOmniFace::vf0 */
GEN_FRAME uint GEN_THISCALL F_00667f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x667f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00667f60 */
GEN_FRAME uint F_00667f60(unsigned int gen_a0)
{
  GEN_ENTER(0x667f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00667fd0 */
GEN_FRAME uint F_00667fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x667fd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667ff0 */
GEN_FRAME uint F_00667ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x667ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668010 */
GEN_FRAME uint F_00668010(unsigned int gen_a0)
{
  GEN_ENTER(0x668010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668030 */
GEN_FRAME uint F_00668030(unsigned int gen_a0)
{
  GEN_ENTER(0x668030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668080 */
GEN_FRAME uint F_00668080(unsigned int gen_a0)
{
  GEN_ENTER(0x668080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006680a0 */
GEN_FRAME uint F_006680a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6680a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006680d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6680d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668110 */
GEN_FRAME uint F_00668110(unsigned int gen_a0)
{
  GEN_ENTER(0x668110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668130 */
GEN_FRAME uint F_00668130(unsigned int gen_a0)
{
  GEN_ENTER(0x668130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668150 */
GEN_FRAME uint GEN_THISCALL F_00668150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Light::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_006681b0 */
GEN_FRAME uint GEN_THISCALL F_006681b0(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6681b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094884);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!(REFG(double, 0x1094800) < (double)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x54) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_006681f0 */
GEN_FRAME float10 GEN_THISCALL F_006681f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6681f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  fVar1 = *(float *)(in_ecx + 0x78);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10abe98);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  fVar1 = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  return (float10)*pfVar2;
}

/* ref: FUN_00668230 */
GEN_FRAME uint F_00668230(unsigned int gen_a0)
{
  GEN_ENTER(0x668230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668280 */
GEN_FRAME uint GEN_THISCALL F_00668280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (*(code *)*puVar1)(puVar1[1],puVar1 + 2,this,param_1);
  }
  return uVar2;
}

/* ref: FUN_006682b0 */
GEN_FRAME uint GEN_THISCALL F_006682b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6682b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    uVar2 = (*(code *)*puVar1)(puVar1[1],puVar1 + 2,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_006682f0 */
GEN_FRAME uint F_006682f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6682f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668310 */
GEN_FRAME uint F_00668310(unsigned int gen_a0)
{
  GEN_ENTER(0x668310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668330 */
GEN_FRAME uint GEN_THISCALL F_00668330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668360 */
GEN_FRAME uint F_00668360(unsigned int gen_a0)
{
  GEN_ENTER(0x668360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668380 */
GEN_FRAME uint F_00668380(unsigned int gen_a0)
{
  GEN_ENTER(0x668380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006683a0 */
GEN_FRAME uint F_006683a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6683a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006683e0 */
GEN_FRAME uint F_006683e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6683e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668430 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00668430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x668430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abeb8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbac));
  puVar1 = (undefined4 *)((int)this + 0x4c);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x34);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0;
}

/* ref: Client::Graphics::Render::ModelRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668430(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_006684c0 */
GEN_FRAME uint GEN_THISCALL F_006684c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6684c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006684f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6684f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668520 */
GEN_NOFRAME uint GEN_THISCALL F_00668520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x668520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abed0));
  puVar1 = (undefined4 *)((int)this + 0x224);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x20c);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 500);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1dc);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1c4);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x164) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbb4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668520(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668670 */
GEN_NOFRAME uint GEN_THISCALL F_00668670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x668670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abee8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x31fc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbbc));
  puVar1 = (undefined4 *)((int)this + 0x1e0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1c8);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1b0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x198);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x180);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x168);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::TerrainRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668670(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006687a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6687a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::WaterRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pWVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  pWVar1 = this + 0x1cc;
  iVar2 = 1;
  do {
    pWVar1 = pWVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pWVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x20) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_006688c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6688c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::ShadowMaskRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00668930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)(this + 0x38) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  *(undefined * PTR32 * PTR32 *)(this + 0x44) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  pSVar1 = this + 0x2c;
  iVar2 = 1;
  do {
    pSVar1 = pSVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pSVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00668990 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00668990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x668990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680((undefined4 *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  return;
}

/* ref: Client::Graphics::Render::RenderTargetManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006689b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6689b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680(this + 4 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00668a10 */
GEN_FRAME uint GEN_THISCALL F_00668a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0xaba0 + param_1 * 4);
  if (iVar1 != 0) {
    F_00b52c10(this GEN_EDX_FWD,*(undefined4 *)(iVar1 + 0x98));
    return (uint)this;
  }
  F_00b52c10(this GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: FUN_00668ba0 */
GEN_NOFRAME byte F_00668ba0(void)
{
  GEN_ENTER(0x668ba0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,0xb8,0x10)));
  if (this != (undefined *)0x0) {
    uVar1 = F_00623880(this GEN_EDX_ARG);
    REFG(undefined4, 0x1487c60) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c60) = 0;
  return 0;
}

/* ref: FUN_00668ca0 */
GEN_FRAME uint F_00668ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x668ca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00668d00 */
GEN_FRAME uint GEN_THISCALL F_00668d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d10 */
GEN_FRAME byte GEN_THISCALL F_00668d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668d60 */
GEN_FRAME uint GEN_THISCALL F_00668d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d70 */
GEN_FRAME byte GEN_THISCALL F_00668d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668db0 */
GEN_FRAME uint F_00668db0(unsigned int gen_a0)
{
  GEN_ENTER(0x668db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668dd0 */
GEN_FRAME uint F_00668dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x668dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668df0 */
GEN_FRAME uint F_00668df0(unsigned int gen_a0)
{
  GEN_ENTER(0x668df0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e10 */
GEN_FRAME uint F_00668e10(unsigned int gen_a0)
{
  GEN_ENTER(0x668e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e30 */
GEN_FRAME uint F_00668e30(unsigned int gen_a0)
{
  GEN_ENTER(0x668e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e50 */
GEN_FRAME uint GEN_THISCALL F_00668e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668e60 */
GEN_FRAME byte GEN_THISCALL F_00668e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668e80 */
GEN_FRAME uint GEN_THISCALL F_00668e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668e90 */
GEN_FRAME uint F_00668e90(unsigned int gen_a0)
{
  GEN_ENTER(0x668e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668eb0 */
GEN_FRAME uint F_00668eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x668eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668ed0 */
GEN_FRAME uint F_00668ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x668ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668f10 */
GEN_FRAME uint GEN_THISCALL F_00668f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668f10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668f50 */
GEN_FRAME uint GEN_THISCALL F_00668f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668f50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668f80 */
GEN_FRAME uint GEN_STDCALL F_00668f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00668fa0 */
GEN_FRAME uint GEN_THISCALL F_00668fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668fa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668fe0 */
GEN_FRAME uint GEN_THISCALL F_00668fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x668fe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669010 */
GEN_FRAME uint GEN_THISCALL F_00669010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x669010u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669040 */
GEN_FRAME uint GEN_THISCALL F_00669040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00669050 */
GEN_FRAME uint GEN_THISCALL F_00669050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00669070 */
GEN_FRAME uint F_00669070(unsigned int gen_a0)
{
  GEN_ENTER(0x669070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006690a0 */
GEN_FRAME byte GEN_THISCALL F_006690a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6690a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006690c0 */
GEN_FRAME uint GEN_THISCALL F_006690c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6690c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = F_00666d70(param_1 GEN_EDX_FWD,*(float *)((int)this + 0x30),*(float *)((int)this + 0x34),
                       *(float *)((int)this + 0x38));
  uVar1 = *(undefined4 *)((int)this + 0x28);
  uVar2 = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return uVar3;
}

/* ref: FUN_00669110 */
GEN_NOFRAME uint GEN_THISCALL F_00669110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x669110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x30);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  F_0054d030(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD,*(float *)((int)this + 0x34));
  F_0054d0f0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,*(float *)((int)this + 0x38));
  uVar2 = *(undefined4 *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x2c);
  *param_1 = *(undefined4 *)((int)this + 0x24);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_006691f0 */
GEN_FRAME uint GEN_THISCALL F_006691f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6691f0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_00669220 */
GEN_FRAME uint GEN_THISCALL F_00669220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00669260 */
GEN_FRAME uint F_00669260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669280 */
GEN_FRAME uint F_00669280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692a0 */
GEN_FRAME unsigned int F_006692a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692c0 */
GEN_FRAME unsigned int F_006692c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006692e0 */
GEN_FRAME uint F_006692e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00669310 */
GEN_FRAME uint F_00669310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669330 */
GEN_FRAME uint F_00669330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669350 */
GEN_FRAME uint F_00669350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669370 */
GEN_FRAME uint F_00669370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669390 */
GEN_FRAME uint F_00669390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006693b0 */
GEN_FRAME uint F_006693b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6693b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_006693f0 */
GEN_FRAME uint F_006693f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6693f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00669440 */
GEN_FRAME uint F_00669440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669440u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006694a0 */
GEN_FRAME uint GEN_THISCALL F_006694a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6694a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006694c0 */
GEN_FRAME uint GEN_THISCALL F_006694c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6694c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(byte * PTR32 *)this =
       (*(byte *)*param_1 >> (*(byte *)(param_1 + 1) & 0x1f) & 1) << (bVar1 & 0x1f) |
       ~('\x01' << (bVar1 & 0x1f)) & **(byte * PTR32 *)this;
  return (uint)this;
}

/* ref: FUN_00669510 */
GEN_FRAME uint F_00669510(unsigned int gen_a0)
{
  GEN_ENTER(0x669510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669530 */
GEN_FRAME uint F_00669530(unsigned int gen_a0)
{
  GEN_ENTER(0x669530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669550 */
GEN_FRAME uint F_00669550(unsigned int gen_a0)
{
  GEN_ENTER(0x669550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669570 */
GEN_FRAME uint F_00669570(unsigned int gen_a0)
{
  GEN_ENTER(0x669570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669590 */
GEN_FRAME uint F_00669590(unsigned int gen_a0)
{
  GEN_ENTER(0x669590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006695b0 */
GEN_FRAME uint F_006695b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006695d0 */
GEN_FRAME uint F_006695d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006695f0 */
GEN_FRAME uint F_006695f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669610 */
GEN_FRAME uint F_00669610(unsigned int gen_a0)
{
  GEN_ENTER(0x669610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669630 */
GEN_FRAME uint F_00669630(unsigned int gen_a0)
{
  GEN_ENTER(0x669630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669650 */
GEN_FRAME uint F_00669650(unsigned int gen_a0)
{
  GEN_ENTER(0x669650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669670 */
GEN_FRAME uint F_00669670(unsigned int gen_a0)
{
  GEN_ENTER(0x669670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669690 */
GEN_FRAME uint F_00669690(unsigned int gen_a0)
{
  GEN_ENTER(0x669690u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006696b0 */
GEN_FRAME uint F_006696b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6696b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006696d0 */
GEN_FRAME uint F_006696d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6696d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006696f0 */
GEN_FRAME uint F_006696f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6696f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669710 */
GEN_FRAME uint F_00669710(unsigned int gen_a0)
{
  GEN_ENTER(0x669710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669730 */
GEN_FRAME uint F_00669730(unsigned int gen_a0)
{
  GEN_ENTER(0x669730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669750 */
GEN_FRAME uint F_00669750(unsigned int gen_a0)
{
  GEN_ENTER(0x669750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669770 */
GEN_FRAME uint F_00669770(unsigned int gen_a0)
{
  GEN_ENTER(0x669770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669790 */
GEN_FRAME uint F_00669790(unsigned int gen_a0)
{
  GEN_ENTER(0x669790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006697b0 */
GEN_FRAME uint F_006697b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6697b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006697d0 */
GEN_FRAME uint F_006697d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6697d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006697f0 */
GEN_FRAME uint F_006697f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6697f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669810 */
GEN_FRAME uint F_00669810(unsigned int gen_a0)
{
  GEN_ENTER(0x669810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669830 */
GEN_FRAME uint F_00669830(unsigned int gen_a0)
{
  GEN_ENTER(0x669830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669850 */
GEN_FRAME uint F_00669850(unsigned int gen_a0)
{
  GEN_ENTER(0x669850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669890 */
GEN_FRAME uint GEN_THISCALL F_00669890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x669890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006698c0 */
GEN_FRAME uint GEN_THISCALL F_006698c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6698c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669900 */
GEN_NOFRAME uint GEN_THISCALL F_00669900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x669900u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00669960 */
GEN_NOFRAME uint GEN_THISCALL F_00669960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x669960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_006699c0 */
GEN_FRAME uint GEN_THISCALL F_006699c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6699c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006699e0 */
GEN_FRAME uint GEN_THISCALL F_006699e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6699e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006699f0 */
GEN_FRAME uint GEN_THISCALL F_006699f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6699f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00669a10 */
GEN_FRAME byte GEN_THISCALL F_00669a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x669a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00669a30 */
GEN_FRAME uint GEN_THISCALL F_00669a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00669a90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00664e20(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669aa0 */
GEN_FRAME uint GEN_THISCALL F_00669aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665ba0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669b00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00664ef0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669b10 */
GEN_FRAME uint GEN_THISCALL F_00669b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665bc0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669b70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00664fc0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669b80 */
GEN_FRAME uint GEN_THISCALL F_00669b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665be0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669be0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00665090(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669bf0 */
GEN_FRAME uint GEN_THISCALL F_00669bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c00));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669c50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00665160(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669c60 */
GEN_FRAME uint GEN_THISCALL F_00669c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c20));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669cc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00665230(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669cd0 */
GEN_FRAME uint GEN_THISCALL F_00669cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c40));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669d30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00665300(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669d40 */
GEN_FRAME uint GEN_THISCALL F_00669d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c60));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669da0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006653d0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669db0 */
GEN_FRAME uint GEN_THISCALL F_00669db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c80));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669e10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00669e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006654a0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669e20 */
GEN_FRAME uint GEN_THISCALL F_00669e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665ca0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00669e40 */
GEN_FRAME uint GEN_THISCALL F_00669e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x669e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00669e80 */
GEN_FRAME uint F_00669e80(unsigned int gen_a0)
{
  GEN_ENTER(0x669e80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00669e90 */
GEN_FRAME uint GEN_THISCALL F_00669e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00669eb0 */
GEN_FRAME uint F_00669eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00669ee0 */
GEN_FRAME uint GEN_THISCALL F_00669ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0066a020 */
GEN_FRAME uint F_0066a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a040 */
GEN_FRAME uint F_0066a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a060 */
GEN_FRAME uint F_0066a060(unsigned int gen_a0)
{
  GEN_ENTER(0x66a060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a080 */
GEN_FRAME uint F_0066a080(unsigned int gen_a0)
{
  GEN_ENTER(0x66a080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a0a0 */
GEN_FRAME uint F_0066a0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a0c0 */
GEN_FRAME uint F_0066a0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a0e0 */
GEN_FRAME uint F_0066a0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a100 */
GEN_FRAME uint F_0066a100(unsigned int gen_a0)
{
  GEN_ENTER(0x66a100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a120 */
GEN_FRAME uint F_0066a120(unsigned int gen_a0)
{
  GEN_ENTER(0x66a120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a140 */
GEN_FRAME uint F_0066a140(unsigned int gen_a0)
{
  GEN_ENTER(0x66a140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a160 */
GEN_FRAME uint GEN_THISCALL F_0066a160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0066a180 */
GEN_FRAME uint GEN_THISCALL F_0066a180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0066a1a0 */
GEN_FRAME uint GEN_THISCALL F_0066a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0066a1c0 */
GEN_FRAME uint F_0066a1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a1c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0066a1e0 */
GEN_FRAME unsigned int F_0066a1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0066a210 */
GEN_FRAME uint F_0066a210(unsigned int gen_a0)
{
  GEN_ENTER(0x66a210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a230 */
GEN_FRAME uint F_0066a230(unsigned int gen_a0)
{
  GEN_ENTER(0x66a230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a250 */
GEN_FRAME uint F_0066a250(unsigned int gen_a0)
{
  GEN_ENTER(0x66a250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a270 */
GEN_FRAME uint F_0066a270(unsigned int gen_a0)
{
  GEN_ENTER(0x66a270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a290 */
GEN_FRAME uint F_0066a290(unsigned int gen_a0)
{
  GEN_ENTER(0x66a290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a2b0 */
GEN_FRAME uint F_0066a2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a2b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a2d0 */
GEN_FRAME uint F_0066a2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a2d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a2f0 */
GEN_FRAME uint F_0066a2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x66a2f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a310 */
GEN_FRAME uint F_0066a310(unsigned int gen_a0)
{
  GEN_ENTER(0x66a310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0066a360 */
GEN_FRAME uint F_0066a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x66a360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0066a390 */
GEN_FRAME uint F_0066a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x66a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if ((float10)*(float *)(param_1 + 4 + iVar3 * 8) < (float10)*(float *)(param_1 - 4 + iVar3 * 8)
       ) {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 - 8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 - 4 + param_3 * 8);
    iVar1 = param_3 - 1;
  }
  while ((param_2 < iVar1 &&
         (iVar3 = (iVar1 - 1) / 2,
         (float10)*(float *)(param_1 + 4 + iVar3 * 8) < ((float10)GEN_TOD(gen_bits2f(param_4[1])))))) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar1 = iVar3;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  uVar2 = param_4[1];
  *(uint *)(param_1 + 4 + iVar1 * 8) = uVar2;
  return uVar2;
}

/* ref: FUN_0066a480 */
GEN_FRAME uint F_0066a480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a4b0 */
GEN_FRAME uint F_0066a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a4d0 */
GEN_FRAME uint F_0066a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a4f0 */
GEN_FRAME uint F_0066a4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0066a520 */
GEN_FRAME unsigned int F_0066a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a520u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0066a550 */
GEN_FRAME unsigned int F_0066a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a550u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_0066a580 */
GEN_FRAME uint F_0066a580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x66a580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_0066a390(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_0066a5d0 */
GEN_FRAME uint GEN_THISCALL F_0066a5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_0066a610 */
GEN_FRAME uint GEN_THISCALL F_0066a610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0066a640 */
GEN_FRAME byte GEN_THISCALL F_0066a640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0066a660 */
GEN_FRAME uint GEN_THISCALL F_0066a660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0066a690 */
GEN_FRAME uint GEN_THISCALL F_0066a690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a690u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0066a710 */
GEN_FRAME uint GEN_THISCALL F_0066a710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
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

/* ref: FUN_0066a770 */
GEN_NOFRAME uint GEN_THISCALL F_0066a770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66a770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00666840(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0066a780 */
GEN_FRAME uint GEN_THISCALL F_0066a780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0066a790 */
GEN_NOFRAME uint GEN_THISCALL F_0066a790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66a790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006668a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0066a7a0 */
GEN_FRAME uint GEN_THISCALL F_0066a7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_0066a7c0 */
GEN_FRAME uint GEN_THISCALL F_0066a7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a7c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar2 + fVar4;
  param_2[2] = fVar3 + fVar1;
  param_2[3] = fVar1 + fVar3;
  return (uint)param_2;
}

/* ref: FUN_0066a7f0 */
GEN_FRAME uint GEN_THISCALL F_0066a7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_0066a810 */
GEN_FRAME unsigned int F_0066a810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0066a830 */
GEN_FRAME unsigned int F_0066a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0066a8a0 */
GEN_FRAME uint GEN_THISCALL F_0066a8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a8a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar4 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  (*(float *)((char *)&auVar2 + 0)) = fVar5 + fVar1;
  (*(float *)((char *)&auVar2 + 4)) = fVar6 + fVar4;
  (*(float *)((char *)&auVar2 + 8)) = fVar1 + fVar5;
  (*(float *)((char *)&auVar2 + 12)) = fVar4 + fVar6;
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 0)) + (*(float *)((char *)&auVar2 + 4)));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 4)) + (*(float *)((char *)&auVar2 + 0)));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 12)) + (*(float *)((char *)&auVar2 + 8)));
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 8)) + (*(float *)((char *)&auVar2 + 12)));
  gen_rsqrtps(&(auVar3), &(auVar2), &(auVar3));
  fVar1 = (*(float *)((char *)&auVar3 + 0));
  fVar4 = (*(float *)((char *)&auVar3 + 4));
  fVar5 = (*(float *)((char *)&auVar3 + 8));
  fVar6 = (*(float *)((char *)&auVar3 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x10ab964) - (fVar4 * ((*(float *)((char *)&auVar2 + 0)) + (*(float *)((char *)&auVar2 + 4)))) * fVar4;
  fVar8 = *(float *)&REFG(undefined, 0x10ab968) - (fVar5 * ((*(float *)((char *)&auVar2 + 12)) + (*(float *)((char *)&auVar2 + 8)))) * fVar5;
  fVar9 = *(float *)&REFG(undefined, 0x10ab96c) - (fVar6 * ((*(float *)((char *)&auVar2 + 8)) + (*(float *)((char *)&auVar2 + 12)))) * fVar6;
  fVar4 = *(float *)&REFG(undefined, 0x10ab974) * fVar4;
  fVar5 = *(float *)&REFG(undefined, 0x10ab978) * fVar5;
  fVar6 = *(float *)&REFG(undefined, 0x10ab97c) * fVar6;
  *param_2 = (*(float *)&REFG(undefined, 0x10ab960) - (fVar1 * ((*(float *)((char *)&auVar2 + 4)) + (*(float *)((char *)&auVar2 + 0)))) * fVar1) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar1);
  param_2[1] = fVar7 * fVar4;
  param_2[2] = fVar8 * fVar5;
  param_2[3] = fVar9 * fVar6;
  return (uint)param_2;
}

/* ref: _Uninitialized_move<>_0066a8f0 */
GEN_FRAME unsigned int F_0066a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a8f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0066a940 */
GEN_FRAME uint F_0066a940(unsigned int gen_a0)
{
  GEN_ENTER(0x66a940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_0066a960 */
GEN_FRAME unsigned int F_0066a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66a960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Client::Graphics::Render::AmbientLight::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066a980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Material::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066a9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::ShadowCamera::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066a9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_0066aa10 */
GEN_FRAME uint GEN_THISCALL F_0066aa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66aa10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = param_2[8];
  in_ecx[1] = 0.0;
  *in_ecx = fVar1;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = param_2[9];
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_2[10];
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  F_004efe70(in_ecx GEN_EDX_FWD,(uint)(param_2 + 4));
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] + (float10)*param_2);
  in_ecx[0xd] = (float)((float10)param_2[1] + (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)((float10)param_2[2] + (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: FUN_0066aa90 */
GEN_FRAME uint GEN_THISCALL F_0066aa90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x66aa90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  undefined2 * puVar1;
  
  puVar1 = (undefined2 *)F_004d4590((int)&(*(float *)&gen_args[1]) + 2,(*(float *)&gen_args[1]));
  *(*(undefined2 * PTR32 *)&gen_args[0]) = *puVar1;
  puVar1 = (undefined2 *)F_004d4590((int)&(*(float *)&gen_args[1]) + 2,(*(float *)&gen_args[2]));
  (*(undefined2 * PTR32 *)&gen_args[0])[1] = *puVar1;
  return (uint)(*(undefined2 * PTR32 *)&gen_args[0]);
}

/* ref: Client::Graphics::Animation::PartialSkeleton::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066aad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pPVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_009f95b0(this GEN_EDX_FWD);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
    }
  }
  else {
    pPVar1 = this - 0x10;
    iVar2 = *(int *)pPVar1;
    this_00 = this + iVar2 * 0x120;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = this_00 - 0x120;
      F_009f95b0(this_00 GEN_EDX_ARG);
    }
    this = pPVar1;
    if (((param_1 & 1) != 0) && (pPVar1 != (undefined *)0x0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,pPVar1);
      return (uint)pPVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_0066ab60 */
GEN_FRAME uint GEN_THISCALL F_0066ab60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ab60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f1390(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_0066ab90 */
GEN_FRAME uint GEN_THISCALL F_0066ab90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ab90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f1970(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_0066abc0 */
GEN_FRAME unsigned int GEN_THISCALL F_0066abc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66abc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *(float *)((int)this + 4) = fVar8 + fVar8;
  *(float *)((int)this + 8) = fVar9 + fVar9;
  *(float *)((int)this + 0xc) = fVar10 + fVar10;
  return 0;
}

/* ref: FUN_0066ac50 */
GEN_FRAME uint F_0066ac50(unsigned int gen_a0)
{
  GEN_ENTER(0x66ac50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::BaseRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066ac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf6 */
GEN_NOFRAME byte F_0066acb0(void)
{
  GEN_ENTER(0x66acb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066acc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66acc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_0066acf0 */
GEN_FRAME unsigned int GEN_THISCALL F_0066acf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66acf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar13 = param_1[7];
  fVar12 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = fVar1 * fVar12;
  fVar8 = fVar2 * fVar4;
  fVar9 = fVar3 * fVar5;
  fVar10 = (((fVar8 + fVar7) + fVar9) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar12)
           + (fVar2 * fVar5 - fVar3 * fVar4) * fVar13;
  fVar11 = (((fVar8 + fVar7) + fVar9) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar4)
           + (fVar3 * fVar12 - fVar1 * fVar5) * fVar13;
  fVar12 = (((fVar8 + fVar7) + fVar9) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar5)
           + (fVar1 * fVar4 - fVar2 * fVar12) * fVar13;
  fVar13 = (((fVar8 + fVar7) + fVar9) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar6)
           + (fVar13 * fVar6 - fVar13 * fVar6) * fVar13;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *(float *)this = (fVar10 + fVar10) + *param_1;
  *(float *)((int)this + 4) = (fVar11 + fVar11) + fVar1;
  *(float *)((int)this + 8) = (fVar12 + fVar12) + fVar2;
  *(float *)((int)this + 0xc) = (fVar13 + fVar13) + fVar3;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar13 = param_1[7];
  fVar12 = param_2[4];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  *(float *)((int)this + 0x10) = ((fVar5 * fVar2 - fVar4 * fVar3) + fVar13 * fVar12) + fVar6 * fVar1
  ;
  *(float *)((int)this + 0x14) = ((fVar12 * fVar3 - fVar5 * fVar1) + fVar13 * fVar4) + fVar6 * fVar2
  ;
  *(float *)((int)this + 0x18) = ((fVar4 * fVar1 - fVar12 * fVar2) + fVar13 * fVar5) + fVar6 * fVar3
  ;
  *(float *)((int)this + 0x1c) = fVar6 * fVar13 - ((fVar4 * fVar2 + fVar12 * fVar1) + fVar5 * fVar3)
  ;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar13 = param_2[9];
  fVar12 = param_2[10];
  fVar4 = param_2[0xb];
  *(float *)((int)this + 0x20) = param_1[8] * param_2[8];
  *(float *)((int)this + 0x24) = fVar1 * fVar13;
  *(float *)((int)this + 0x28) = fVar2 * fVar12;
  *(float *)((int)this + 0x2c) = fVar3 * fVar4;
  return 0;
}

/* ref: FUN_0066ae00 */
GEN_FRAME unsigned int GEN_THISCALL F_0066ae00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66ae00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar13 = param_1[8] * *param_2;
  fVar14 = param_1[9] * param_2[1];
  fVar15 = param_1[10] * param_2[2];
  fVar16 = param_1[0xb] * param_2[3];
  fVar17 = fVar1 * fVar13;
  fVar18 = fVar2 * fVar14;
  fVar19 = fVar3 * fVar15;
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar20 = (((fVar18 + fVar17) + fVar19) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar4 * fVar4) * fVar13) +
           (fVar2 * fVar15 - fVar3 * fVar14) * fVar4;
  fVar21 = (((fVar18 + fVar17) + fVar19) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar4 * fVar4) * fVar14) +
           (fVar3 * fVar13 - fVar1 * fVar15) * fVar4;
  fVar22 = (((fVar18 + fVar17) + fVar19) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar4 * fVar4) * fVar15) +
           (fVar1 * fVar14 - fVar2 * fVar13) * fVar4;
  fVar23 = (((fVar18 + fVar17) + fVar19) * fVar4 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar4 * fVar4) * fVar16) +
           (fVar4 * fVar16 - fVar4 * fVar16) * fVar4;
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  fVar16 = param_2[0xb];
  fVar17 = param_1[8];
  fVar18 = param_1[9];
  fVar19 = param_1[10];
  fVar9 = param_1[0xb];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  *(float *)this = (fVar20 + fVar20) + *param_1;
  *(float *)((int)this + 4) = (fVar21 + fVar21) + fVar10;
  *(float *)((int)this + 8) = (fVar22 + fVar22) + fVar11;
  *(float *)((int)this + 0xc) = (fVar23 + fVar23) + fVar12;
  *(float *)((int)this + 0x10) = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  *(float *)((int)this + 0x14) = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  *(float *)((int)this + 0x18) = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  *(float *)((int)this + 0x1c) = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  *(float *)((int)this + 0x20) = fVar13 * fVar17;
  *(float *)((int)this + 0x24) = fVar14 * fVar18;
  *(float *)((int)this + 0x28) = fVar15 * fVar19;
  *(float *)((int)this + 0x2c) = fVar16 * fVar9;
  return 0;
}

/* ref: Client::Graphics::Render::FigureRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066bb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pFVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe04));
  pFVar1 = this + 0x34;
  iVar2 = 1;
  do {
    pFVar1 = pFVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pFVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  pFVar1 = this + 0x1c;
  iVar2 = 1;
  do {
    pFVar1 = pFVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pFVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::CloudRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066bbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66bbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00624210(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_0066c470 */
GEN_FRAME uint GEN_THISCALL F_0066c470(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66c470u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)param_1 + param_3 * 4 + 0xb4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    uVar2 = F_00667a50(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0066c4a0 */
GEN_FRAME uint GEN_THISCALL F_0066c4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) == (undefined *)0x0) {
    uVar1 = F_00d93970(&REFG(undefined, 0x1351770) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  if (-1 < (short)param_2) {
    piVar2 = (int *)F_00d321b0(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_ARG);
    uVar1 = F_00d93970((undefined *)((short)param_2 * 0x30 + *piVar2) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  uVar1 = F_00d93970(&REFG(undefined, 0x1351770) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_0066c540 */
GEN_FRAME uint GEN_THISCALL F_0066c540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x66c540u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(param_1 GEN_EDX_FWD,0x1c);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = *param_2;
    puVar1[2] = param_2[1];
    puVar1[3] = param_2[2];
    puVar1[4] = param_2[3];
    puVar1[5] = (undefined4)gen_fl2bits(param_3);
    puVar1[6] = (undefined4)gen_fl2bits(param_4);
    uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_0066c5a0 */
GEN_FRAME uint GEN_THISCALL F_0066c5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x66c5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  puVar2 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x48);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 4;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_0066c5f0 */
GEN_FRAME uint GEN_THISCALL F_0066c5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x66c5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  puVar2 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x58);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 6;
    puVar2[2] = param_2;
    puVar2[1] = param_1;
    puVar2[5] = param_5;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    puVar2[6] = param_6;
    puVar2[7] = param_7;
    bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 8);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_0066c660 */
GEN_FRAME uint GEN_THISCALL F_0066c660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x66c660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x30);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 8;
    puVar1[2] = param_2;
    puVar1[4] = param_4;
    puVar1[1] = param_1;
    puVar1[6] = param_6;
    puVar1[3] = param_3;
    puVar1[5] = param_5;
    if (param_7 != (undefined4 *)0x0) {
      puVar1[7] = puVar1 + 8;
      puVar1[8] = *param_7;
      puVar1[9] = param_7[1];
      puVar1[10] = param_7[2];
      puVar1[0xb] = param_7[3];
      uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
      return uVar2;
    }
    puVar1[7] = 0;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_0066c6f0 */
GEN_FRAME uint GEN_THISCALL F_0066c6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x66c6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x3c);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 9;
    puVar1[2] = param_2;
    puVar1[1] = param_1;
    if (param_3 == (undefined4 *)0x0) {
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = puVar1 + 7;
      puVar1[7] = *param_3;
      puVar1[8] = param_3[1];
      puVar1[9] = param_3[2];
      puVar1[10] = param_3[3];
    }
    puVar1[4] = param_4;
    puVar1[5] = param_7 << 0x1f | param_5 & 0x7fffffff;
    if (param_6 != (undefined4 *)0x0) {
      puVar1[6] = puVar1 + 0xb;
      puVar1[0xb] = *param_6;
      puVar1[0xc] = param_6[1];
      puVar1[0xd] = param_6[2];
      puVar1[0xe] = param_6[3];
      uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
      return uVar2;
    }
    puVar1[6] = 0;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_0066c7b0 */
GEN_FRAME unsigned int GEN_THISCALL F_0066c7b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x66c7b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10ac108);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x10ac108))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (*(double *)&REFG(undefined, 0x1090b18) < (double)*pfVar1) {
    *(float *)((*(int *)&gen_args[0]) + 0x9c) = *pfVar1;
    return;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x9c) = GEN_FLT_TO(*(undefined4 *)((*(int *)&gen_args[0]) + 0x9c), REFG(float, 0x10ac050));
  return;
}

/* ref: Client::Graphics::Render::GrassRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066c810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00625080(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_0066c840 */
GEN_FRAME uint GEN_THISCALL F_0066c840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(uint *)((int)this + 4) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 4) | 0 << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_0066c880 */
GEN_FRAME uint GEN_THISCALL F_0066c880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 4) & 0xfffffffd;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_0066c8a0 */
GEN_FRAME uint GEN_THISCALL F_0066c8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 4) & 0xfffffffe;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_0066c8c0 */
GEN_FRAME uint GEN_THISCALL F_0066c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 4) & 0xfffffffd;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Render::Rigid::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066c930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pRVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abfb8));
  pRVar4 = this;
  if (this == (undefined *)0xfffffff8) {
    pRVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pRVar4 + 8);
  iVar2 = *(int *)(pRVar4 + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = REFG(int, 0x1487c5c);
  }
  REFG(int, 0x1487c5c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
    iVar1 = REFG(int, 0x1487c70);
  }
  REFG(int, 0x1487c70) = iVar1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0066c990 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0066c990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66c990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
  F_004a05c0(this GEN_EDX_FWD);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c74);
  }
  *(int *)&REFG(undefined, 0x1487c74) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c78) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: FUN_0066c9d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0066c9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66c9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  if (this == (undefined *)0xffffffd8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Render::PostBoneDeformerBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ca10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pPVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  pPVar4 = this;
  if (this == (undefined *)0xffffffd8) {
    pPVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)(pPVar4 + 0x28);
  iVar2 = *(int *)(pPVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_0066caa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0066caa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66caa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abad4));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  return 0;
}

/* ref: FUN_0066cb70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0066cb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66cb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10abf60));
  if (*(int *)((int)this + 0x58) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*(int *)((int)this + 0x58));
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if (this == (undefined *)0xfffffff8) {
    this = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c84);
  }
  *(int *)&REFG(undefined, 0x1487c84) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c88) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 8) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Render::Model::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066cbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0066cb70(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::VerticalFogRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066cc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pVVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abea0));
  pVVar1 = this + 0xac;
  iVar2 = 2;
  do {
    pVVar1 = pVVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pVVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x7c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_0066cca0 */
GEN_NOFRAME uint F_0066cca0(void)
{
  GEN_ENTER(0x66cca0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar3 = *(uint *)(iVar1 + 8);
  iVar2 = *((int *)GEN_TOP(((uVar3 >> 0x1b) * 0x358 + ((uVar3 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(uint *)(iVar2 + 0x120);
    *((uint *)GEN_TOP((iVar1 + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x2c) * 4))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0066cd00 */
GEN_FRAME unsigned int F_0066cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x66cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_0062d180(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG,param_1,param_2);
  return;
}

/* ref: FUN_0066cd20 */
GEN_FRAME uint F_0066cd20(unsigned int gen_a0)
{
  GEN_ENTER(0x66cd20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x13759f8);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if ((*(uint *)(iVar1 + 8) & 0xf8000000) == 0xf0000000) {
    if ((char)param_1 == '\0') {
      uVar3 = *(uint *)(REFG(int, 0x13759f8) + 0x60);
    }
    else {
      uVar3 = *(uint *)(REFG(int, 0x13759f8) + 100);
    }
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8))) = uVar3 & 0xfffffff;
  }
  uVar3 = F_0062cd00(param_1);
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)(iVar2 + 0x34) * 8))) = uVar3;
  return uVar3;
}

/* ref: FUN_0066cd90 */
GEN_FRAME uint F_0066cd90(unsigned int gen_a0)
{
  GEN_ENTER(0x66cd90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0062d2d0(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderer::vf0 */
GEN_FRAME uint GEN_THISCALL F_0066cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_0066cde0 */
GEN_FRAME uint GEN_THISCALL F_0066cde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 8) & 0xfffffffe;
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_0066ce10 */
GEN_FRAME byte GEN_THISCALL F_0066ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ce10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x78 + param_2 * 4);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 8) >> 3 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0066ce40 */
GEN_FRAME byte GEN_THISCALL F_0066ce40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ce40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x78 + param_2 * 4);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 8) >> 2 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0066cea0 */
GEN_FRAME uint GEN_THISCALL F_0066cea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066ceb0 */
GEN_FRAME uint GEN_THISCALL F_0066ceb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ceb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0066ced0 */
GEN_FRAME uint GEN_THISCALL F_0066ced0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66ced0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cee0 */
GEN_FRAME uint GEN_THISCALL F_0066cee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0066cf00 */
GEN_NOFRAME uint GEN_THISCALL F_0066cf00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66cf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006668a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0066cf30 */
GEN_FRAME uint GEN_THISCALL F_0066cf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cf40 */
GEN_FRAME uint GEN_THISCALL F_0066cf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cf40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0066cf50 */
GEN_FRAME byte GEN_THISCALL F_0066cf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0066cf80 */
GEN_FRAME uint GEN_THISCALL F_0066cf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cf90 */
GEN_FRAME uint GEN_THISCALL F_0066cf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cf90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0066cfa0 */
GEN_FRAME byte GEN_THISCALL F_0066cfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0066cfc0 */
GEN_FRAME uint GEN_THISCALL F_0066cfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_0066d000 */
GEN_FRAME byte GEN_THISCALL F_0066d000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0066d020 */
GEN_FRAME uint GEN_THISCALL F_0066d020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066d030 */
GEN_FRAME uint GEN_THISCALL F_0066d030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0066d040 */
GEN_FRAME byte GEN_THISCALL F_0066d040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0xd2);
    *(uint *)((int)this + 8) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0066d0b0 */
GEN_NOFRAME uint GEN_THISCALL F_0066d0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0066d100 */
GEN_NOFRAME uint GEN_THISCALL F_0066d100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd8);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0066d140 */
GEN_FRAME uint GEN_THISCALL F_0066d140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66d140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0066d160 */
GEN_FRAME uint GEN_THISCALL F_0066d160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x66d160u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0066d230 */
GEN_FRAME uint GEN_STDCALL F_0066d230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x66d230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0066d240 */
GEN_FRAME undefined4 * GEN_THISCALL F_0066d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0066d2b0 */
GEN_FRAME byte GEN_THISCALL F_0066d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0066d2d0 */
GEN_FRAME byte GEN_THISCALL F_0066d2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb64));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x665ba0));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x669a90));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_0066d430 */
GEN_FRAME uint GEN_THISCALL F_0066d430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_0066d4e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0066d4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x66d4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00664e20(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_0066d5b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0066d5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_0066d640 */
GEN_FRAME byte GEN_THISCALL F_0066d640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d640u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb6c));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x665bc0));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x669b00));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_0066d7a0 */
GEN_FRAME uint GEN_THISCALL F_0066d7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 0xf0) & 0xfffffffd;
  *(uint *)((int)this + 0xf0) = uVar1;
  return uVar1;
}

/* ref: FUN_0066d7d0 */
GEN_FRAME uint GEN_THISCALL F_0066d7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66d7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_0066d880 */
GEN_FRAME unsigned int GEN_THISCALL F_0066d880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x66d880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00664ef0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_0066d950 */
GEN_FRAME byte GEN_THISCALL F_0066d950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66d950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb74));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0x10;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x665be0));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x669b70));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_0066dab0 */
GEN_FRAME uint GEN_THISCALL F_0066dab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x66dab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_0066db60 */
GEN_FRAME unsigned int GEN_THISCALL F_0066db60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x66db60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar3 = 0;
  iVar4 = *(int *)((int)this + 8);
  for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 - 1) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar3)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar3)));
    }
    iVar3 = iVar3 + 0x14;
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00664fc0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar5 = 0x10;
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar2 + 8 + iVar3) = 0x10;
      *(undefined4 *)(iVar2 + 0x10 + iVar3) = 0;
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if ((char)param_3 != '\0') {
    piVar6 = (int *)((int)this + 0x1c);
    do {
      if (*piVar6 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar6);
        *piVar6 = 0;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_0066dc30 */
GEN_FRAME byte GEN_THISCALL F_0066dc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x66dc30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10abb7c));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x665c00));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x669be0));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

