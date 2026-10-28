#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00dcf840 */
GEN_FRAME uint GEN_THISCALL F_00dcf840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)param_1 + 6);
  return (uint)this;
}

/* ref: FUN_00dcf880 */
GEN_FRAME uint GEN_THISCALL F_00dcf880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)this + 0x12) = *(undefined2 *)((int)param_1 + 0x12);
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)this;
}

/* ref: FUN_00dcf9f0 */
GEN_FRAME unsigned int F_00dcf9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf9f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00dceb90(in_ecx GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00dcfa20 */
GEN_FRAME unsigned int F_00dcfa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcfa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
        puVar1[4] = param_3[4];
        puVar1[5] = param_3[5];
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dcfa90 */
GEN_FRAME uint F_00dcfa90(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfa90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSkinnedMeshShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dcfac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dceb60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dcfb10 */
GEN_FRAME uint GEN_THISCALL F_00dcfb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00dceb90(iVar1 GEN_EDX_ARG);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dcfb60 */
GEN_FRAME uint GEN_THISCALL F_00dcfb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcfb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x30);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dcfbe0 */
GEN_FRAME uint GEN_THISCALL F_00dcfbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfc20 */
GEN_FRAME unsigned int F_00dcfc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfc20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return;
}

/* ref: FUN_00dcfc50 */
GEN_NOFRAME uint GEN_THISCALL F_00dcfc50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcfc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00dceb90(iVar1 GEN_EDX_ARG);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dcfc90 */
GEN_FRAME uint GEN_THISCALL F_00dcfc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x30);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dcfd10 */
GEN_NOFRAME uint GEN_THISCALL F_00dcfd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcfd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfd90 */
GEN_NOFRAME uint GEN_THISCALL F_00dcfd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcfd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfdd0 */
GEN_FRAME uint GEN_THISCALL F_00dcfdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcfe40 */
GEN_NOFRAME uint GEN_THISCALL F_00dcfe40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcfe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcfeb0 */
GEN_NOFRAME uint GEN_THISCALL F_00dcfeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcfeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcff20 */
GEN_FRAME uint F_00dcff20(unsigned int gen_a0)
{
  GEN_ENTER(0xdcff20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dcff50 */
GEN_NOFRAME uint GEN_THISCALL F_00dcff50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdcff50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510((undefined *)((int)this + 0x20) GEN_EDX_FWD);
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),(uVar2 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar3 = *(int *)((int)this + 0xc) - 1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  F_00dceb60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkStorageSkinnedMeshShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd0000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dcff50(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd0050 */
GEN_FRAME uint F_00dd0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0050u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  bool bVar1;
  
  bVar1 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar1 = param_1[1] < param_2[1];
  }
  return (uint)bVar1;
}

/* ref: hkMultipleVertexBuffer::vf9 */
GEN_FRAME uint GEN_THISCALL F_00dd0080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd0080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf10 */
GEN_FRAME uint GEN_THISCALL F_00dd00a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda160(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf11 */
GEN_FRAME uint GEN_THISCALL F_00dd00c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8890(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf12 */
GEN_FRAME uint GEN_THISCALL F_00dd00e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8a80(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd0100 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd0100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd0100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined1 *)((int)this + 0x141) = 1;
  if (*(int *)((int)this + 300) < 1) {
    *(undefined1 *)((int)this + 0x142) = 1;
    return;
  }
  iVar3 = 0;
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x128))));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') {
      *(undefined2 *)((int)this + 0x141) = 0x100;
      return;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0xc;
  } while (iVar4 < *(int *)((int)this + 300));
  *(undefined1 *)((int)this + 0x142) = 1;
  return;
}

/* ref: FUN_00dd0170 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd0170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd0170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 300);
  if (0 < local_c) {
    local_8 = 0;
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + local_8)));
      if (*(char *)(puVar3 + 2) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar3 + 0x34))((int *)*puVar3 GEN_EDX_FWD,puVar3[1]);
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      iVar1 = puVar3[1];
      if (iVar1 != 0) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,iVar1,0x20c)
        ;
        puVar3[1] = 0;
      }
      local_8 = local_8 + 0xc;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: hkMultipleVertexBuffer::vf13 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd01f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd01f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * phVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  if (this[0x138] != (undefined1)0x0) {
    piVar3 = *(int * PTR32 *)(this + 0x118);
    if (piVar3 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_FWD);
      (*(uint *)(gen_frame + 0x14)) = uVar4;
      if (0 < *(int *)(this + 0x110)) {
        iVar5 = 0;
        (*(int *)(gen_frame + 0x18)) = *(int *)(this + 0x110);
        do {
          pbVar6 = ((byte *)GEN_TOP((*(int *)(this + 0x10c) + iVar5)));
          if (((pbVar6[4] & 2) != 0) && (-1 < (char)pbVar6[6])) {
            F_00dd4fa0(*(undefined * PTR32 *)(this + 0x118) GEN_EDX_ARG,(int)(char)pbVar6[6],((undefined1 *)(gen_frame + 0x4)));
            F_00dda4c0(((undefined1 *)(gen_frame + 0x4)),(uint)pbVar6[2] * 0x10 +
                                  *((int *)GEN_TOP((*(int *)(this + 0x128) + 4 + (uint)*pbVar6 * 0xc))),(*(uint *)(gen_frame + 0x14))
                        );
          }
          iVar5 = iVar5 + 7;
          iVar2 = (*(int *)(gen_frame + 0x18)) - 1;
          (*(int *)(gen_frame + 0x18)) = iVar2;
        } while (iVar2 != 0);
      }
      if (*(undefined * PTR32 *)(this + 0x118) != (undefined *)0x0) {
        F_00d91a80(*(undefined * PTR32 *)(this + 0x118) GEN_EDX_ARG);
      }
      *(undefined4 *)(this + 0x118) = 0;
    }
    F_00dd0170(this GEN_EDX_ARG);
    if (this[0x140] != (undefined1)0x0) {
      phVar1 = this + 0x13c;
      *(int *)phVar1 = *(int *)phVar1 + 1;
      if (*(int *)phVar1 == 0) {
        *(undefined4 *)(this + 0x13c) = 1;
      }
    }
    this[0x138] = (undefined1)0x0;
  }
  return;
}

/* ref: FUN_00dd02e0 */
GEN_FRAME uint GEN_THISCALL F_00dd02e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd02e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  char cVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined8 * puVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  byte * pbVar9;
  byte * pbVar10;
  int iVar11;
  undefined8 * puVar12;
  
  iVar8 = 0;
  if (0 < *(int *)((int)this + 300)) {
    iVar11 = 0;
    do {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20c)
      ;
      *((uint *)GEN_TOP((iVar11 + 4 + *(int *)((int)this + 0x128)))) = uVar3;
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar8 < *(int *)((int)this + 300));
  }
  iVar8 = param_1[1];
  uVar3 = *(uint *)((int)this + 0x110);
  (*(uint *)(gen_frame + 0x1b8)) = uVar3;
  if (iVar8 < 0) {
    iVar8 = *(int *)((int)this + 0x134) - *param_1;
    (*(int *)(gen_frame + 0x1bc)) = iVar8;
  }
  else {
    (*(int *)(gen_frame + 0x1bc)) = iVar8;
  }
  (*(int *)(gen_frame + 0x1bc)) = iVar8;
  if (1 < (int)uVar3) {
    F_00dd1080(*(undefined4 *)((int)this + 0x10c),0,uVar3 - 1,((code *)REFP(0xdd0050)));
  }
  pbVar10 = *(byte * PTR32 *)((int)this + 0x10c);
  (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
  (*(byte * PTR32 *)(gen_frame + 0x1c0)) = pbVar10 + *(int *)((int)this + 0x110) * 7;
  if (pbVar10 < pbVar10 + *(int *)((int)this + 0x110) * 7) {
    do {
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x1c8));
      do {
        pbVar10 = pbVar10 + 7;
        if ((*(byte * PTR32 *)(gen_frame + 0x1c0)) <= pbVar10) break;
      } while ((uint)*pbVar10 == (uint)*(*(byte * PTR32 *)(gen_frame + 0x1c8)));
      iVar8 = ((int)pbVar10 - (int)(*(byte * PTR32 *)(gen_frame + 0x1c8))) / 7;
      iVar11 = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + (uint)*(*(byte * PTR32 *)(gen_frame + 0x1c8)) * 0xc)));
      (*(int *)(gen_frame + 0x104)) = iVar8;
      if (0 < iVar8) {
        pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x1c8)) + 4;
        do {
          ((uint *)(gen_frame + 0x108))[(int)(iVar11)] = (uint)pbVar9[-3];
          pbVar9[-2] = (byte)iVar11;
          ((byte *)(gen_frame + 0x188))[(int)(iVar11)] = *pbVar9;
          iVar11 = iVar11 + 1;
          pbVar9 = pbVar9 + 7;
        } while (iVar11 < iVar8);
      }
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c4));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x1c4))[1] == 0) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                          (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20c);
        puVar7[1] = uVar3;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar7 + 0x20))((int *)*puVar7 GEN_EDX_ARG,param_1,&(*(int *)(gen_frame + 0x104)),puVar7[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar3;
      if (uVar3 != 1) {
        F_00dd0170(this GEN_EDX_ARG);
        return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x1c4));
      }
      *(undefined1 *)(puVar7 + 2) = 1;
      (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
      iVar8 = (*(int *)(gen_frame + 0x1bc));
      uVar3 = (*(uint *)(gen_frame + 0x1b8));
    } while (pbVar10 < (*(byte * PTR32 *)(gen_frame + 0x1c0)));
  }
  *(uint *)(param_2 + 0x200) = uVar3;
  *(int *)(param_2 + 0x204) = iVar8;
  *(undefined1 *)(param_2 + 0x208) = 0;
  F_00dd7940(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (0 < (int)uVar3) {
    (*(byte * PTR32 *)(gen_frame + 0x1c0)) = (byte *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar3;
    do {
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x1c0)) + *(int *)((int)this + 0x10c);
      puVar4 = ((undefined8 *)GEN_TOP(((uint)pbVar9[2] * 0x10 +
               *((int *)GEN_TOP((*(int *)((int)this + 0x128) + 4 + (uint)*pbVar9 * 0xc))))));
      cVar1 = *(char *)((int)this + (uint)pbVar9[3] * 8 + 8);
      pbVar10 = (byte *)((int)this + (uint)pbVar9[3] * 8 + 8);
      puVar12 = (undefined8 *)((uint)pbVar9[5] * 0x10 + param_2);
      (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
      if ((cVar1 == *(char *)(puVar4 + 1)) && (pbVar10[1] == *(byte *)((int)puVar4 + 9))) {
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        pbVar9[6] = 0xff;
      }
      else if ((*(char *)(puVar4 + 1) == '\v') &&
              (((*(char *)((int)puVar4 + 9) == '\x01' && (cVar1 == '\n')) && (pbVar10[1] < 5)))) {
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        *(byte *)(puVar12 + 1) = *pbVar10;
        *(byte *)((int)puVar12 + 9) = pbVar10[1];
        pbVar9[6] = 0xff;
      }
      else {
        F_00dd7b40(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,pbVar10);
        pbVar9[6] = 0;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x1c8));
        *(undefined4 *)((int)puVar12 + 0xc) = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x1c8)) + 4);
      }
      (*(byte * PTR32 *)(gen_frame + 0x1c0)) = (*(byte * PTR32 *)(gen_frame + 0x1c0)) + 7;
      uVar6 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar6;
      iVar8 = (*(int *)(gen_frame + 0x1bc));
      uVar3 = (*(uint *)(gen_frame + 0x1b8));
    } while (uVar6 != 0);
  }
  if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 256))) {
    F_00dd7c00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x1a8)));
    *(undefined2 *)((int)pvVar5 + 4) = 0x1a8;
    pvVar5 = (undefined *)F_00dd5230(pvVar5 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),iVar8);
    if (pvVar5 != (undefined *)0x0) {
      F_00d919e0(pvVar5 GEN_EDX_ARG);
    }
    if (*(undefined * PTR32 *)((int)this + 0x118) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x118) GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x118) = pvVar5;
    F_00d91a80(pvVar5 GEN_EDX_ARG);
    if (0 < (int)uVar3) {
      param_1 = (int *)0x0;
      do {
        pbVar10 = ((byte *)GEN_TOP((*(int *)((int)this + 0x10c) + (int)param_1)));
        if (-1 < (char)pbVar10[6]) {
          uVar6 = F_00dd7a40(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*(byte *)((int)this + (uint)pbVar10[3] * 8 + 10),
                               (uint)*(byte *)((int)this + (uint)pbVar10[3] * 8 + 0xb));
          pbVar10[6] = (byte)uVar6;
          F_00dd4fa0(*(undefined * PTR32 *)((int)this + 0x118) GEN_EDX_ARG,(int)(char)(byte)uVar6,&(*(undefined4 *)(gen_frame + 0x1a8)));
          if ((pbVar10[4] & 4) == 0) {
            F_00dda4c0((uint)pbVar10[2] * 0x10 +
                         *((int *)GEN_TOP((*(int *)((int)this + 0x128) + 4 + (uint)*pbVar10 * 0xc))),&(*(undefined4 *)(gen_frame + 0x1a8)),
                         (*(int *)(gen_frame + 0x1bc)));
          }
          puVar7 = (undefined4 *)((uint)pbVar10[5] * 0x10 + param_2);
          *puVar7 = (*(undefined4 *)(gen_frame + 0x1a8));
          puVar7[1] = (*(undefined4 *)(gen_frame + 0x1ac));
        }
        param_1 = (int *)((int)param_1 + 7);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(undefined1 *)((int)this + 0x138) = 1;
  return 1;
}

/* ref: FUN_00dd06e0 */
GEN_FRAME byte GEN_THISCALL F_00dd06e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd06e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 0x120) == (*(uint *)((int)this + 0x124) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x11c),2);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x11c) + *(int *)((int)this + 0x120) * 2)));
  *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
  *puVar1 = (undefined1)param_1;
  puVar1[1] = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMultipleVertexBuffer::vf7 */
GEN_FRAME uint GEN_THISCALL F_00dd0730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 * puVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  if (this[0x138] == (undefined1)0x0) {
    this[0x140] = (undefined1)((byte)(*(uint *)(param_1 + 0xc) >> 1) & 1);
    iVar2 = *(int *)(this + 0x108);
    iVar3 = 0;
    if (iVar2 != *(int *)(this + 0x110) && -1 < iVar2 - *(int *)(this + 0x110)) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2 - *(int *)(this + 0x110));
    }
    *(int *)(this + 0x110) = iVar2;
    if (0 < iVar2) {
      local_8 = 0;
      do {
        iVar3 = *(int *)(this + 0x11c);
        puVar4 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + local_8)));
        local_8 = local_8 + 7;
        *puVar4 = *(undefined1 *)(iVar3 + iVar6 * 2);
        puVar4[1] = *(undefined1 *)(iVar3 + iVar6 * 2 + 1);
        uVar1 = *(undefined1 *)(param_1 + 0xc);
        puVar4[5] = (char)iVar6;
        puVar4[3] = (char)iVar6;
        iVar6 = iVar6 + 1;
        puVar4[4] = uVar1;
      } while (iVar6 < iVar2);
    }
    uVar5 = F_00dd02e0(this GEN_EDX_FWD,param_1,param_2);
    return uVar5;
  }
  return 0;
}

/* ref: hkMultipleVertexBuffer::vf8 */
GEN_FRAME uint GEN_THISCALL F_00dd07e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd07e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  byte bVar2;
  int iVar3;
  undefined1 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int local_8;
  
  iVar7 = 0;
  if (this[0x138] != (undefined1)0x0) {
    return 0;
  }
  iVar3 = *param_2;
  iVar5 = 0;
  if (iVar3 != *(int *)(this + 0x110) && -1 < iVar3 - *(int *)(this + 0x110)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3 - *(int *)(this + 0x110));
  }
  uVar6 = 0;
  *(int *)(this + 0x110) = iVar3;
  if (0 < iVar3) {
    local_8 = 0;
    piVar8 = param_2;
    do {
      piVar8 = piVar8 + 1;
      puVar4 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + local_8)));
      local_8 = local_8 + 7;
      puVar1 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x11c) + *piVar8 * 2)));
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      bVar2 = *(byte *)((int)param_2 + iVar7 + 0x84);
      puVar4[5] = (char)iVar7;
      puVar4[4] = bVar2;
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 | bVar2;
      puVar4[3] = (char)*piVar8;
    } while (iVar7 < iVar3);
  }
  this[0x140] = (undefined1)((byte)(uVar6 >> 1) & 1);
  uVar6 = F_00dd02e0(this GEN_EDX_FWD,param_1,param_3);
  return uVar6;
}

/* ref: FUN_00dd08b0 */
GEN_FRAME uint GEN_THISCALL F_00dd08b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd08b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  
  piVar1 = (int *)((int)this + 0x128);
  if (*(uint *)((int)this + 300) == (*(uint *)((int)this + 0x130) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0xc);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 300) * 0xc)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  iVar3 = *(int *)((int)this + 300);
  uVar4 = iVar3 + 1;
  *(uint *)((int)this + 300) = uVar4;
  puVar2 = (undefined4 *)(*piVar1 + iVar3 * 0xc);
  if (param_1 != (undefined *)0x0) {
    uVar4 = F_00d919e0(param_1 GEN_EDX_ARG);
  }
  this_00 = (undefined *)*puVar2;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00d91a80(this_00 GEN_EDX_ARG);
  }
  *puVar2 = param_1;
  return uVar4;
}

/* ref: FUN_00dd0930 */
GEN_FRAME uint GEN_THISCALL F_00dd0930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  F_00dd7940((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  F_00dd7970((undefined *)((int)this + 8) GEN_EDX_ARG,param_1);
  *(undefined4 *)((int)this + 0x134) = param_2;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 1;
  *(undefined1 *)((int)this + 0x142) = 0;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(uint *)((int)this + 0x114) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10c,iVar3,7);
  }
  iVar3 = 0;
  if (iVar1 != *(int *)((int)this + 0x110) && -1 < iVar1 - *(int *)((int)this + 0x110)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1 - *(int *)((int)this + 0x110));
  }
  *(int *)((int)this + 0x110) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd0a20 */
GEN_NOFRAME uint GEN_THISCALL F_00dd0a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  return (uint)in_ecx;
}

/* ref: FUN_00dd0a30 */
GEN_FRAME uint GEN_THISCALL F_00dd0a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined2 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  F_00dd7940((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  piVar1 = (int *)((int)this + 0x11c);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  F_00dd7970((undefined *)((int)this + 8) GEN_EDX_ARG,param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x120);
  local_8 = *(int *)((int)this + 0x120);
  if (iVar7 <= *(int *)((int)this + 0x120)) {
    local_8 = iVar7;
  }
  uVar2 = *(uint *)((int)this + 0x124) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar3,2);
  }
  puVar4 = (undefined2 *)*piVar1;
  if (0 < local_8) {
    iVar3 = *(int *)(param_1 + 0x11c) - (int)puVar4;
    local_c = local_8;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  puVar4 = (undefined2 *)(*piVar1 + local_8 * 2);
  iVar3 = iVar7 - local_8;
  if (0 < iVar3) {
    iVar6 = (*(int *)(param_1 + 0x11c) + local_8 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 0x120) = iVar7;
  iVar7 = *(int *)((int)this + 300);
  iVar3 = *(int *)(param_1 + 300);
  local_8 = iVar7;
  if (iVar3 <= iVar7) {
    local_8 = iVar3;
  }
  uVar2 = *(uint *)((int)this + 0x130) & 0x3fffffff;
  if ((int)uVar2 < iVar3) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x128,iVar6,0xc);
  }
  iVar7 = (iVar7 - iVar3) - 1;
  if (-1 < iVar7) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + iVar3 * 0xc + iVar7 * 0xc)));
    do {
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar5 GEN_EDX_ARG);
      }
      *puVar5 = 0;
      puVar5 = puVar5 - 3;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x128);
  if (0 < local_8) {
    iVar7 = *(int *)(param_1 + 0x128) - (int)puVar5;
    local_10 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar7 + (int)puVar5) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar7 + (int)puVar5) GEN_EDX_ARG);
      }
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar5 GEN_EDX_ARG);
      }
      *puVar5 = *(undefined4 *)(iVar7 + (int)puVar5);
      puVar5[1] = *(undefined4 *)(iVar7 + 4 + (int)puVar5);
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(iVar7 + 8 + (int)puVar5);
      puVar5 = puVar5 + 3;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + local_8 * 0xc)));
  iVar7 = *(int *)((int)this + 0x128) + local_8 * 0xc;
  param_1 = iVar3 - local_8;
  if (0 < param_1) {
    iVar6 = (int)puVar5 - iVar7;
    puVar8 = (undefined4 *)(iVar7 + 4);
    do {
      if (puVar8 != (undefined4 *)&REFG(undefined, 0x4)) {
        if ((undefined *)*puVar5 != (undefined *)0x0) {
          F_00d919e0((undefined *)*puVar5 GEN_EDX_ARG);
        }
        puVar8[-1] = *puVar5;
        *puVar8 = *(undefined4 *)(iVar6 + (int)puVar8);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar5 + 2);
      }
      puVar8 = puVar8 + 3;
      puVar5 = puVar5 + 3;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  *(int *)((int)this + 300) = iVar3;
  if (0 < iVar3) {
    iVar7 = 0;
    param_1 = iVar3;
    do {
      iVar3 = *(int *)((int)this + 0x128);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + iVar7) + 0xc))))(*(int * PTR32 *)(iVar3 + iVar7) GEN_EDX_ARG)));
      if (this_00 != (undefined *)0x0) {
        F_00d919e0(this_00 GEN_EDX_ARG);
      }
      if (*(undefined * PTR32 *)(iVar3 + iVar7) != (undefined *)0x0) {
        F_00d91a80(*(undefined * PTR32 *)(iVar3 + iVar7) GEN_EDX_ARG);
      }
      *(undefined * PTR32 *)(iVar3 + iVar7) = this_00;
      F_00d91a80(this_00 GEN_EDX_ARG);
      iVar7 = iVar7 + 0xc;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  iVar7 = *(int *)((int)this + 0x108);
  uVar2 = *(uint *)((int)this + 0x114) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10c,iVar3,7);
  }
  iVar3 = 0;
  if (iVar7 != *(int *)((int)this + 0x110) && -1 < iVar7 - *(int *)((int)this + 0x110)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7 - *(int *)((int)this + 0x110));
  }
  *(int *)((int)this + 0x110) = iVar7;
  *(undefined1 *)((int)this + 0x142) = 0;
  return (uint)this;
}

/* ref: hkMultipleVertexBuffer::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00dd0d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd0d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  undefined * pvVar2;
  
  if (this[0x141] == (undefined1)0x0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x144)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x144;
    pvVar2 = (undefined *)F_00dd0a30(pvVar2 GEN_EDX_ARG,this);
    F_00dd0100(pvVar2 GEN_EDX_ARG);
    return (uint)pvVar2;
  }
  F_00d919e0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00dd0db0 */
GEN_FRAME uint GEN_THISCALL F_00dd0db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0db0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00dd0dd0 */
GEN_FRAME uint GEN_THISCALL F_00dd0dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0dd0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00dd0e40 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd0e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dd0eb0 */
GEN_FRAME uint GEN_THISCALL F_00dd0eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 * 7 + *(int *)this;
}

/* ref: FUN_00dd0f20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd0f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd0f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dd0f40 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd0f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dd0fb0 */
GEN_FRAME uint GEN_THISCALL F_00dd0fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0fb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00dd0ff0 */
GEN_FRAME uint GEN_THISCALL F_00dd0ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00dd1080 */
GEN_NOFRAME unsigned int F_00dd1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd1080u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  
  do {
    puVar5 = ((undefined4 *)GEN_TOP(((param_2 + param_3 >> 1) * 7 + param_1)));
    (*(int *)(gen_frame + 0x1c)) = param_2;
    uVar2 = *(undefined2 *)(puVar5 + 1);
    uVar1 = *(undefined1 *)((int)puVar5 + 6);
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
    (*(undefined2 *)(gen_frame + 0x4)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x6)) = uVar1;
    iVar8 = param_2;
    iVar10 = param_3;
    do {
      iVar6 = iVar8 * 7 + param_1;
      (*(int *)(gen_frame + 0x18)) = iVar6;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
      uVar7 = (*param_4)(iVar6,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar6 = (*(int *)(gen_frame + 0x18));
      if ((char)uVar7 != '\0') {
        do {
          iVar8 = iVar8 + 1;
          (*(int *)(gen_frame + 0x18)) = iVar6 + 7;
          uVar7 = (*param_4)(iVar6 + 7,&(*(undefined4 *)(gen_frame + 0x0)));
          iVar6 = (*(int *)(gen_frame + 0x18));
        } while ((char)uVar7 != '\0');
        (*(int *)(gen_frame + 0x1c)) = iVar8;
      }
      iVar6 = iVar10 * 7 + param_1;
      (*(int *)(gen_frame + 0x18)) = iVar6;
      uVar7 = (*param_4)(&(*(undefined4 *)(gen_frame + 0x0)),iVar6);
      cVar4 = (char)uVar7;
      while (cVar4 != '\0') {
        iVar6 = (*(int *)(gen_frame + 0x18)) - 7;
        (*(int *)(gen_frame + 0x18)) = iVar6;
        iVar10 = iVar10 - 1;
        uVar7 = (*param_4)(&(*(undefined4 *)(gen_frame + 0x0)),iVar6);
        cVar4 = (char)uVar7;
      }
      if (iVar10 < iVar8) break;
      if (iVar10 != iVar8) {
        puVar5 = (undefined4 *)(iVar10 * 7 + param_1);
        uVar2 = *(undefined2 *)(puVar5 + 1);
        uVar3 = *puVar5;
        uVar1 = *(undefined1 *)((int)puVar5 + 6);
        puVar9 = ((undefined4 *)GEN_TOP(((iVar8 * 8 - (*(int *)(gen_frame + 0x1c))) + param_1)));
        *puVar5 = *puVar9;
        *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar9 + 1);
        *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)((int)puVar9 + 6);
        *puVar9 = uVar3;
        *(undefined2 *)(puVar9 + 1) = uVar2;
        *(undefined1 *)((int)puVar9 + 6) = uVar1;
        iVar8 = (*(int *)(gen_frame + 0x1c));
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
    } while (iVar8 <= iVar10);
    if (param_2 < iVar10) {
      F_00dd1080(param_1,param_2,iVar10,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

/* ref: FUN_00dd1200 */
GEN_FRAME uint GEN_THISCALL F_00dd1200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 7);
  return uVar1;
}

/* ref: FUN_00dd1240 */
GEN_FRAME uint GEN_THISCALL F_00dd1240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd1280 */
GEN_FRAME unsigned int F_00dd1280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd12b0 */
GEN_FRAME uint GEN_THISCALL F_00dd12b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd12b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00dd12e0 */
GEN_FRAME unsigned int F_00dd12e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd12e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd1310 */
GEN_FRAME uint GEN_THISCALL F_00dd1310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd1350 */
GEN_FRAME uint GEN_THISCALL F_00dd1350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dd1370 */
GEN_FRAME uint GEN_THISCALL F_00dd1370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dd13a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd13a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd13a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    *(undefined4 *)this = *param_1;
    return;
  }
  *(undefined4 *)this = *param_1;
  return;
}

/* ref: FUN_00dd14c0 */
GEN_FRAME uint GEN_THISCALL F_00dd14c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd14c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd14e0 */
GEN_FRAME uint GEN_THISCALL F_00dd14e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd14e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 2;
}

/* ref: FUN_00dd1520 */
GEN_FRAME unsigned int F_00dd1520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00dd1080(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00dd1550 */
GEN_FRAME uint GEN_THISCALL F_00dd1550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd15a0 */
GEN_FRAME uint GEN_THISCALL F_00dd15a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd15a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,7);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd15e0 */
GEN_FRAME uint GEN_THISCALL F_00dd15e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd15e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,2);
  }
  puVar4 = *(undefined2 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined2 *)(*(int *)this + iVar6 * 2);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1680 */
GEN_FRAME unsigned int F_00dd1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd16c0 */
GEN_FRAME uint GEN_THISCALL F_00dd16c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dd1700 */
GEN_FRAME uint GEN_THISCALL F_00dd1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dd1730 */
GEN_FRAME uint F_00dd1730(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd1760 */
GEN_FRAME uint F_00dd1760(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1760u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dd1780 */
GEN_FRAME unsigned int F_00dd1780(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x20c);
  }
  return;
}

/* ref: FUN_00dd17b0 */
GEN_FRAME uint GEN_THISCALL F_00dd17b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd17f0 */
GEN_FRAME uint F_00dd17f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd17f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd1820 */
GEN_FRAME uint F_00dd1820(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd1850 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 2;
}

/* ref: FUN_00dd1880 */
GEN_FRAME uint GEN_THISCALL F_00dd1880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,7);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd18c0 */
GEN_FRAME uint GEN_THISCALL F_00dd18c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd18c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,2);
  }
  puVar4 = *(undefined2 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined2 *)(*(int *)this + iVar6 * 2);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1960 */
GEN_FRAME uint GEN_THISCALL F_00dd1960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 0xc;
}

/* ref: FUN_00dd19b0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd19b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1a00 */
GEN_FRAME uint GEN_THISCALL F_00dd1a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1a40 */
GEN_FRAME unsigned int F_00dd1a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar3 = param_2 - (int)param_1;
    iVar1 = param_3;
    puVar2 = param_1;
    do {
      if (*(undefined * PTR32 *)(iVar3 + (int)puVar2) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar3 + (int)puVar2) GEN_EDX_ARG);
      }
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_ARG);
      }
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd1a90 */
GEN_FRAME unsigned int F_00dd1a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = param_3;
    do {
      if (puVar1 != (undefined4 *)&REFG(undefined, 0x4)) {
        if ((undefined *)*puVar2 != (undefined *)0x0) {
          F_00d919e0((undefined *)*puVar2 GEN_EDX_ARG);
        }
        puVar1[-1] = *puVar2;
        *puVar1 = *((undefined4 *)GEN_TOP((((int)param_3 - param_1) + (int)puVar1)));
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 2);
      }
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

/* ref: FUN_00dd1af0 */
GEN_FRAME uint GEN_THISCALL F_00dd1af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,7);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd1b30 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 0xc;
}

/* ref: FUN_00dd1b80 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1bd0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1c10 */
GEN_FRAME unsigned int F_00dd1c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_ARG);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dd1c40 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1c80 */
GEN_FRAME uint GEN_THISCALL F_00dd1c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd1c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_8;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)this + iVar1 * 0xc + iVar5 * 0xc);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4 GEN_EDX_ARG);
      }
      *puVar4 = 0;
      puVar4 = puVar4 - 3;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < local_8) {
    iVar5 = *param_2 - (int)puVar4;
    param_1 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar5 + (int)puVar4) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar5 + (int)puVar4) GEN_EDX_ARG);
      }
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4 GEN_EDX_ARG);
      }
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 3;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  puVar4 = (undefined4 *)(*param_2 + local_8 * 0xc);
  iVar5 = *(int *)this + local_8 * 0xc;
  param_2 = (int *)(iVar1 - local_8);
  if ((int)param_2 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  puVar6 = (undefined4 *)(iVar5 + 4);
  iVar5 = (int)puVar4 - iVar5;
  do {
    if (puVar6 != (undefined4 *)&REFG(undefined, 0x4)) {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d919e0((undefined *)*puVar4 GEN_EDX_ARG);
      }
      puVar6[-1] = *puVar4;
      *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 2);
    }
    puVar6 = puVar6 + 3;
    puVar4 = puVar4 + 3;
    param_2 = (int *)((int)param_2 - 1);
  } while (param_2 != (int *)0x0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)(uVar1 + iVar2 * 0xc);
    do {
      if ((undefined *)*puVar3 != (undefined *)0x0) {
        uVar1 = F_00d91a80((undefined *)*puVar3 GEN_EDX_FWD);
      }
      *puVar3 = 0;
      puVar3 = puVar3 - 3;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dd1e00 */
GEN_FRAME uint GEN_THISCALL F_00dd1e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_10;
  int local_8;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)this + iVar1 * 0xc + iVar5 * 0xc);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4 GEN_EDX_ARG);
      }
      *puVar4 = 0;
      puVar4 = puVar4 - 3;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < local_8) {
    iVar5 = *param_1 - (int)puVar4;
    local_10 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar5 + (int)puVar4) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar5 + (int)puVar4) GEN_EDX_ARG);
      }
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4 GEN_EDX_ARG);
      }
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 3;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  puVar4 = (undefined4 *)(*param_1 + local_8 * 0xc);
  iVar5 = *(int *)this + local_8 * 0xc;
  param_1 = (int *)(iVar1 - local_8);
  if ((int)param_1 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  puVar6 = (undefined4 *)(iVar5 + 4);
  iVar5 = (int)puVar4 - iVar5;
  do {
    if (puVar6 != (undefined4 *)&REFG(undefined, 0x4)) {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d919e0((undefined *)*puVar4 GEN_EDX_ARG);
      }
      puVar6[-1] = *puVar4;
      *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 2);
    }
    puVar6 = puVar6 + 3;
    puVar4 = puVar4 + 3;
    param_1 = (int *)((int)param_1 - 1);
  } while (param_1 != (int *)0x0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1f40 */
GEN_FRAME uint GEN_THISCALL F_00dd1f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1fb0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd1fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd1fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd2020 */
GEN_NOFRAME uint GEN_THISCALL F_00dd2020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd2020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00dd2090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd2090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x141) != '\0';
}

/* ref: hkMultipleVertexBuffer::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd20a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd20a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00dd7970(param_1 GEN_EDX_FWD,this + 8);
  return;
}

/* ref: hkMultipleVertexBuffer::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00dd20c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd20c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x134);
}

/* ref: hkMultipleVertexBuffer::vf2 */
GEN_NOFRAME uint F_00dd20d0(void)
{
  GEN_ENTER(0xdd20d0u, 0u, 0u, 0u, 0u);
  return 0x15e266c;
}

/* ref: FUN_00dd20e0 */
GEN_FRAME uint F_00dd20e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd20e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd2110 */
GEN_NOFRAME uint GEN_THISCALL F_00dd2110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd2110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 300) - 1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + iVar3 * 0xc)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x130);
  *(undefined4 *)((int)this + 300) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x128),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined4 *)((int)this + 0x120) = 0;
  if ((*(uint *)((int)this + 0x124) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x11c),
               (*(uint *)((int)this + 0x124) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x118) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x118) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  uVar1 = *(uint *)((int)this + 0x114);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10c),
                       uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd2240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd2240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd2110(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd22b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd22b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 8))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar5[-1];
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        *puVar4 = puVar5[-2];
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  return;
}

/* ref: FUN_00dd2300 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd2300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd2300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 8))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  return;
}

/* ref: FUN_00dd2880 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd2880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd2880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (*(int *)((int)this + 0x18) < 1) {
    if (0 < param_3) {
      puVar4 = (undefined4 *)(param_2 + 0x20);
      iVar6 = param_3;
      do {
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c78) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c78);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c70) + 4));
        puVar4[-8] = (undefined4)REFG(float, 0x1138c70);
        puVar4[-7] = uVar1;
        puVar4[-6] = uVar2;
        puVar4[-5] = uVar3;
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c88) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c88);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c80) + 4));
        puVar4[-4] = (undefined4)REFG(float, 0x1138c80);
        puVar4[-3] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c98) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c98);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c90) + 4));
        *puVar4 = (undefined4)REFG(float, 0x1138c90);
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
        uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
        uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
        puVar4[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
        puVar4[5] = uVar1;
        puVar4[6] = uVar2;
        puVar4[7] = uVar3;
        puVar4 = puVar4 + 0x10;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
  }
  else if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 0x14))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}

/* ref: FUN_00dd3140 */
GEN_NOFRAME uint GEN_THISCALL F_00dd3140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1149344));
  return (uint)in_ecx;
}

/* ref: FUN_00dd3150 */
GEN_FRAME uint GEN_THISCALL F_00dd3150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  undefined * this_00;
  uint * puVar10;
  undefined4 * puVar11;
  uint uVar12;
  uint local_c;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149344));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar2 = param_1[4];
  if ((int)(*(uint *)((int)this + 0x10) & 0x3fffffff) < (int)uVar2) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar2,0x40);
  }
  *(uint *)((int)this + 0xc) = uVar2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)0x0) {
    if (0 < (int)uVar2) {
      iVar9 = 0;
      local_c = uVar2;
      do {
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c78) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c78);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c70) + 4));
        puVar7 = (undefined4 *)(*piVar1 + iVar9);
        *puVar7 = (undefined4)REFG(float, 0x1138c70);
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c88) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c88);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c80) + 4));
        puVar7[4] = (undefined4)REFG(float, 0x1138c80);
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c98) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c98);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c90) + 4));
        puVar7[8] = (undefined4)REFG(float, 0x1138c90);
        puVar7[9] = uVar3;
        puVar7[10] = uVar4;
        puVar7[0xb] = uVar5;
        uVar5 = *(undefined4 *)&REFG(undefined, 0x1138cac);
        uVar4 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
        uVar3 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
        iVar9 = iVar9 + 0x40;
        local_c = local_c - 1;
        puVar7[0xc] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
        puVar7[0xd] = uVar3;
        puVar7[0xe] = uVar4;
        puVar7[0xf] = uVar5;
      } while (local_c != 0);
    }
  }
  else {
    puVar11 = (undefined4 *)*piVar1;
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  if (*param_1 != 0) {
    if ((int)(*(uint *)((int)this + 0x1c) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(undefined4 *)((int)this + 0x14),uVar2,0x40);
    }
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    *(uint *)((int)this + 0x18) = uVar2;
    puVar7 = (undefined4 *)*param_1;
    puVar11 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[2];
      uVar4 = puVar7[1];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[2] = uVar3;
      puVar11[1] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  *(char *)((int)this + 0x44) = (char)param_1[5];
  if (param_1[2] != 0) {
    if ((int)(*(uint *)((int)this + 0x28) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,uVar2,2);
    }
    *(uint *)((int)this + 0x24) = uVar2;
    F_00da1010(*(undefined4 *)((int)this + 0x20),param_1[2],uVar2 * 2);
  }
  if (param_1[3] != 0) {
    if ((int)(*(uint *)((int)this + 0x34) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x2c,uVar2,4);
    }
    iVar9 = (*(int *)((int)this + 0x30) - uVar2) - 1;
    if (-1 < iVar9) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + uVar2 * 4 + iVar9 * 4)));
      do {
        F_00d91510(this_00 GEN_EDX_ARG);
        this_00 = (undefined *)((int)this_00 - 4);
        iVar9 = iVar9 - 1;
      } while (-1 < iVar9);
    }
    iVar8 = uVar2 - *(int *)((int)this + 0x30);
    iVar9 = *(int *)((int)this + 0x2c) + *(int *)((int)this + 0x30) * 4;
    if (0 < iVar8) {
      do {
        if (iVar9 != 0) {
          F_00d91340(iVar9 GEN_EDX_ARG);
        }
        iVar9 = iVar9 + 4;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    *(uint *)((int)this + 0x30) = uVar2;
    if (0 < (int)uVar2) {
      do {
        F_00d91540(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar9 * 4))) GEN_EDX_ARG,param_1[3] + iVar9 * 4);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar2);
    }
  }
  if (param_1[6] != 0) {
    if ((int)(*(uint *)((int)this + 0x40) & 0x3fffffff) < param_1[7]) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x38,param_1[7],0xc);
    }
    iVar9 = param_1[7];
    iVar8 = (*(int *)((int)this + 0x3c) - iVar9) - 1;
    if (-1 < iVar8) {
      puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x38) + iVar9 * 0xc + 8 + iVar8 * 0xc)));
      do {
        uVar2 = *puVar10;
        puVar10[-1] = 0;
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),puVar10[-2],(uVar2 & 0x3fffffff) * 2);
        }
        puVar10[-2] = 0;
        *puVar10 = 0x80000000;
        puVar10 = puVar10 - 3;
        iVar8 = iVar8 - 1;
      } while (-1 < iVar8);
    }
    iVar8 = iVar9 - *(int *)((int)this + 0x3c);
    puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + *(int *)((int)this + 0x3c) * 0xc)));
    if (0 < iVar8) {
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
        }
        puVar7 = puVar7 + 3;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    iVar8 = 0;
    *(int *)((int)this + 0x3c) = iVar9;
    if (0 < param_1[7]) {
      iVar9 = 0;
      do {
        F_00dd3a70(((undefined *)GEN_TOP((*(int *)((int)this + 0x38) + iVar9))) GEN_EDX_ARG,param_1[6] + iVar9);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar8 < param_1[7]);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00dd3540 */
GEN_FRAME uint GEN_THISCALL F_00dd3540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00dd35a0 */
GEN_FRAME uint GEN_THISCALL F_00dd35a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd35a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd35e0 */
GEN_FRAME uint GEN_THISCALL F_00dd35e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd35e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00dd3610 */
GEN_FRAME uint GEN_THISCALL F_00dd3610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3670 */
GEN_FRAME unsigned int F_00dd3670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 4;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00dd36c0 */
GEN_FRAME uint GEN_THISCALL F_00dd36c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd36c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00dd36e0 */
GEN_FRAME uint GEN_THISCALL F_00dd36e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd36e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dd37a0 */
GEN_FRAME uint GEN_THISCALL F_00dd37a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd37a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd37d0 */
GEN_FRAME uint GEN_THISCALL F_00dd37d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd37d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd37e0 */
GEN_FRAME uint GEN_THISCALL F_00dd37e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd37e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3810 */
GEN_FRAME uint GEN_THISCALL F_00dd3810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x40);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd3850 */
GEN_FRAME uint GEN_THISCALL F_00dd3850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd3860 */
GEN_FRAME uint GEN_THISCALL F_00dd3860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3890 */
GEN_FRAME uint GEN_THISCALL F_00dd3890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd38c0 */
GEN_FRAME uint GEN_THISCALL F_00dd38c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd38c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3930 */
GEN_FRAME uint GEN_THISCALL F_00dd3930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3960 */
GEN_FRAME uint GEN_THISCALL F_00dd3960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3990 */
GEN_FRAME uint GEN_THISCALL F_00dd3990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x40);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd39d0 */
GEN_FRAME uint GEN_THISCALL F_00dd39d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd39d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3a00 */
GEN_FRAME uint GEN_THISCALL F_00dd3a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3a30 */
GEN_NOFRAME uint GEN_THISCALL F_00dd3a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd3a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3a70 */
GEN_FRAME uint GEN_THISCALL F_00dd3a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3a70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] * 2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined2 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined2 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dd3b00 */
GEN_NOFRAME uint GEN_THISCALL F_00dd3b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3b60 */
GEN_FRAME uint GEN_THISCALL F_00dd3b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar2 = (*(int *)((int)this + 4) - param_1) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + param_1 * 4 + iVar2 * 4);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = param_1 - *(int *)((int)this + 4);
  iVar2 = *(int *)this + *(int *)((int)this + 4) * 4;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    do {
      if (iVar2 != 0) {
        uVar1 = F_00d91340(iVar2 GEN_EDX_ARG);
      }
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar1;
}

/* ref: FUN_00dd3bc0 */
GEN_FRAME unsigned int F_00dd3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd3bf0 */
GEN_FRAME unsigned int F_00dd3bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3bf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00dd3c50 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd3c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd3c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00dd3cc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd3cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  iVar4 = (*(int *)((int)this + 4) - param_1) - 1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*(int *)this + param_1 * 0xc + 8 + iVar4 * 0xc);
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      iVar4 = iVar4 - 1;
      puVar3 = puVar3 - 3;
    } while (-1 < iVar4);
  }
  iVar4 = param_1 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = param_1;
    return 0;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x80000000;
    }
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00dd3d70 */
GEN_FRAME uint GEN_THISCALL F_00dd3d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3f30 */
GEN_FRAME uint F_00dd3f30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd3f60 */
GEN_NOFRAME uint GEN_THISCALL F_00dd3f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd3f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint * puVar3;
  
  iVar2 = *(int *)((int)this + 0x3c) - 1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x38) + 8 + iVar2 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      iVar2 = iVar2 - 1;
      puVar3 = puVar3 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x30) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),iVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkIndexedTransformSet::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd40e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd40e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd3f60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkSkinnedRefMeshShape::vf3 */
GEN_NOFRAME uint F_00dd4120(void)
{
  GEN_ENTER(0xdd4120u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkSkinnedRefMeshShape::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd4130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: hkSkinnedRefMeshShape::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd4140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: hkSkinnedRefMeshShape::vf7 */
GEN_FRAME uint GEN_THISCALL F_00dd4150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x24 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkSkinnedRefMeshShape::vf2 */
GEN_NOFRAME uint F_00dd4160(void)
{
  GEN_ENTER(0xdd4160u, 0u, 0u, 0u, 0u);
  return 0x15e272c;
}

/* ref: hkSkinnedRefMeshShape::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00dd4170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24) & 0xfffffffe;
}

/* ref: FUN_00dd4180 */
GEN_FRAME uint GEN_THISCALL F_00dd4180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91480((undefined *)((int)this + 0x24) GEN_EDX_ARG,0);
  F_00dd4770((undefined *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_2,param_4);
  F_00dd4980((undefined *)((int)this + 0x18) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_3,param_4);
  return (uint)this;
}

/* ref: FUN_00dd4210 */
GEN_FRAME uint GEN_THISCALL F_00dd4210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91480((undefined *)((int)this + 0x24) GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: FUN_00dd4270 */
GEN_FRAME uint GEN_THISCALL F_00dd4270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  F_00d91350(in_ecx + 9 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd4290 */
GEN_NOFRAME uint GEN_THISCALL F_00dd4290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),iVar1 << 5);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar2 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00dd4360 */
GEN_FRAME uint F_00dd4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  undefined * puVar2;
  LPVOID pvVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  iVar8 = 0;
  local_8 = 0;
  if (0 < param_3) {
    do {
      piVar1 = *(int * PTR32 *)(param_1 + local_8 * 4);
      puVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG)));
      if ((puVar2 != &REFG(undefined, 0x15e272c)) || ((iVar8 != 0 && (iVar8 != piVar1[2])))) {
        return 0;
      }
      iVar6 = iVar6 + piVar1[4];
      iVar8 = piVar1[2];
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,0x28)));
  *(undefined2 *)((int)this + 4) = 0x28;
  uVar4 = F_00dd4210(this GEN_EDX_ARG,iVar8);
  uVar5 = *(uint *)(uVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),uVar4 + 0xc,iVar8,2);
  }
  *(int *)(uVar4 + 0x10) = iVar6;
  uVar5 = *(uint *)(uVar4 + 0x20) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),uVar4 + 0x18,iVar8,0x20);
  }
  *(int *)(uVar4 + 0x1c) = iVar6;
  local_18 = 0;
  local_8 = 0;
  if (0 < param_3) {
    local_10 = param_2;
    do {
      iVar8 = *(int *)(param_1 + local_18 * 4);
      iVar6 = *(int *)(iVar8 + 0x10);
      iVar7 = 0;
      if (0 < iVar6) {
        iVar9 = local_8 << 5;
        local_c = 0;
        do {
          *((undefined2 *)GEN_TOP((*(int *)(uVar4 + 0xc) + local_8 * 2))) =
               *((undefined2 *)GEN_TOP((*(int *)(iVar8 + 0xc) + iVar7 * 2)));
          F_010578d0(((undefined *)GEN_TOP((*(int *)(uVar4 + 0x18) + iVar9))) GEN_EDX_ARG,local_10,
                       *(int *)(iVar8 + 0x18) + local_c);
          local_c = local_c + 0x20;
          local_8 = local_8 + 1;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x20;
        } while (iVar7 < iVar6);
      }
      local_10 = local_10 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return uVar4;
}

/* ref: FUN_00dd44e0 */
GEN_FRAME uint GEN_THISCALL F_00dd44e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd44e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00dd4510 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd4510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dd4530 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dd4590 */
GEN_FRAME uint GEN_THISCALL F_00dd4590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4590u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd45a0 */
GEN_FRAME uint GEN_THISCALL F_00dd45a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd45a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd45c0 */
GEN_FRAME unsigned int F_00dd45c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd45c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd4600 */
GEN_FRAME uint GEN_THISCALL F_00dd4600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd4660 */
GEN_FRAME uint GEN_THISCALL F_00dd4660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dd4690 */
GEN_FRAME uint GEN_THISCALL F_00dd4690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4690u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00dd46f0 */
GEN_NOFRAME uint F_00dd46f0(void)
{
  GEN_ENTER(0xdd46f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd4700 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00dd4700(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00dd4770 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined2 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00dd47e0 */
GEN_FRAME uint GEN_THISCALL F_00dd47e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd47e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4830 */
GEN_FRAME unsigned int F_00dd4830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar1);
        puVar1[2] = *(undefined8 *)(iVar2 + 0x10 + (int)puVar1);
        puVar1[3] = *(undefined8 *)(iVar2 + 0x18 + (int)puVar1);
      }
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00dd4880 */
GEN_FRAME uint F_00dd4880(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd48b0 */
GEN_FRAME uint GEN_THISCALL F_00dd48b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd48b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd48f0 */
GEN_FRAME uint F_00dd48f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd48f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd4920 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dd4770(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00dd4940 */
GEN_FRAME uint GEN_THISCALL F_00dd4940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd4980 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
        puVar2[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar2);
        puVar2[2] = *(undefined8 *)(iVar3 + 0x10 + (int)puVar2);
        puVar2[3] = *(undefined8 *)(iVar3 + 0x18 + (int)puVar2);
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00dd4a10 */
GEN_NOFRAME uint GEN_THISCALL F_00dd4a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4a50 */
GEN_FRAME uint GEN_THISCALL F_00dd4a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd4a90 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dd4980(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00dd4ab0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd4ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4af0 */
GEN_FRAME uint F_00dd4af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSkinnedRefMeshShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd4b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd4290(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshVertexBuffer::vf13 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd4b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x19c) = 0;
  return;
}

/* ref: hkMemoryMeshVertexBuffer::vf9 */
GEN_FRAME uint GEN_THISCALL F_00dd4b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf10 */
GEN_FRAME uint GEN_THISCALL F_00dd4b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda160(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf11 */
GEN_FRAME uint GEN_THISCALL F_00dd4bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8890(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf12 */
GEN_FRAME uint GEN_THISCALL F_00dd4bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8a80(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd4bf0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd4bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte * pbVar6;
  int local_14;
  int local_c;
  int * local_8;
  
  iVar3 = *(int *)((int)this + 0x18c);
  local_14 = 0;
  if (0 < *(int *)((int)this + 0x1a0)) {
    do {
      local_c = 0;
      if (0 < *(int *)((int)this + 0x108)) {
        local_8 = (int *)((int)this + 0x10c);
        pbVar6 = (byte *)((int)this + 9);
        do {
          iVar4 = 0;
          puVar2 = (undefined1 *)(*local_8 + iVar3);
          if (*pbVar6 != 0) {
            do {
              switch((unsigned int)(uintptr_t)(pbVar6[-1])) {
              case 3: ;
              case 4: ;
              case 9: ;
                uVar1 = *puVar2;
                *puVar2 = puVar2[1];
                puVar2[1] = uVar1;
                puVar2 = puVar2 + 2;
                break;
              case 5: ;
              case 6: ;
              case 7: ;
              case 8: ;
              case 10: ;
                uVar1 = *puVar2;
                *puVar2 = puVar2[3];
                puVar2[3] = uVar1;
                uVar1 = puVar2[1];
                puVar2[1] = puVar2[2];
                puVar2[2] = uVar1;
                puVar2 = puVar2 + 4;
                break;
              case 0xb: ;
                iVar5 = 4;
                do {
                  uVar1 = *puVar2;
                  *puVar2 = puVar2[3];
                  puVar2[3] = uVar1;
                  uVar1 = puVar2[1];
                  puVar2[1] = puVar2[2];
                  puVar2[2] = uVar1;
                  puVar2 = puVar2 + 4;
                  iVar5 = iVar5 - 1;
                } while (iVar5 != 0);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*pbVar6);
          }
          local_8 = local_8 + 1;
          local_c = local_c + 1;
          pbVar6 = pbVar6 + 8;
        } while (local_c < *(int *)((int)this + 0x108));
      }
      iVar3 = iVar3 + *(int *)((int)this + 0x198);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)((int)this + 0x1a0));
  }
  return;
}

/* ref: FUN_00dd4d30 */
GEN_FRAME uint F_00dd4d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4d30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar5 = 4;
  iVar3 = 0;
  param_1 = 4;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) == '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = uVar4 + (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) * 0x10;
        iVar5 = 0x10;
      }
      iVar3 = iVar3 + 1;
      param_1 = iVar5;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) != '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*(byte *)(iVar2 + iVar3 * 8))] *
                (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_1 - 1 + uVar4 & ~(param_1 - 1U);
}

/* ref: FUN_00dd4dc0 */
GEN_FRAME uint F_00dd4dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == (byte)param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] == 0xb) {
        uVar4 = uVar4 + (uint)pbVar2[-2] * 0x10;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == (byte)param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] != 0xb) {
        uVar4 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(pbVar2[-3])] * (uint)pbVar2[-2] + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00dd4e60 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd4e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = param_2;
  if (param_2 < 0) {
    iVar5 = *(int *)((int)this + 0x1a0) - param_1;
  }
  iVar1 = *(int *)((int)this + 0x198);
  iVar2 = *(int *)((int)this + 0x18c);
  *(undefined1 *)(param_3 + 0x208) = 1;
  *(int *)(param_3 + 0x204) = iVar5;
  param_2 = *(int *)((int)this + 0x108);
  *(int *)(param_3 + 0x200) = param_2;
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_3 + 8);
    piVar6 = (int *)((int)this + 0x10c);
    puVar3 = this;
    do {
      puVar4[-2] = *piVar6 + iVar1 * param_1 + iVar2;
      puVar4[-1] = *(undefined4 *)((int)this + 0x198);
      *puVar4 = puVar3[2];
      puVar4[1] = puVar3[3];
      piVar6 = piVar6 + 1;
      puVar4 = puVar4 + 4;
      param_2 = param_2 - 1;
      puVar3 = puVar3 + 2;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf8 */
GEN_FRAME uint GEN_THISCALL F_00dd4ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  if (this[0x19c] != (undefined1)0x0) {
    return 0;
  }
  iVar4 = param_1[1];
  if (iVar4 < 0) {
    iVar4 = *(int *)(this + 0x1a0) - *param_1;
  }
  iVar1 = *(int *)(this + 0x198);
  iVar2 = *param_1;
  iVar3 = *(int *)(this + 0x18c);
  *(undefined1 *)(param_3 + 0x208) = 1;
  *(int *)(param_3 + 0x204) = iVar4;
  param_1 = (int *)*param_2;
  *(int * PTR32 *)(param_3 + 0x200) = param_1;
  if (0 < (int)param_1) {
    puVar5 = (undefined4 *)(param_3 + 8);
    piVar6 = param_2;
    do {
      piVar6 = piVar6 + 1;
      iVar4 = *piVar6;
      puVar5[-2] = *(int *)(this + iVar4 * 4 + 0x10c) + iVar1 * iVar2 + iVar3;
      puVar5[-1] = *(undefined4 *)(this + 0x198);
      *puVar5 = *(undefined4 *)(this + iVar4 * 8 + 8);
      puVar5[1] = *(undefined4 *)(this + iVar4 * 8 + 0xc);
      puVar5 = puVar5 + 4;
      param_1 = (int *)((int)param_1 - 1);
    } while (param_1 != (int *)0x0);
  }
  this[0x19c] = (undefined1)0x1;
  return 1;
}

/* ref: FUN_00dd4fa0 */
GEN_FRAME uint GEN_THISCALL F_00dd4fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  *param_2 = *(int *)((int)this + param_1 * 4 + 0x10c) + *(int *)((int)this + 0x18c);
  param_2[1] = *(int *)((int)this + 0x198);
  param_2[2] = *(int *)((int)this + param_1 * 8 + 8);
  param_2[3] = *(int *)((int)this + param_1 * 8 + 0xc);
  return (uint)param_2;
}

/* ref: FUN_00dd4fe0 */
GEN_FRAME uint GEN_THISCALL F_00dd4fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00dd7970((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  uVar1 = F_00dd4d30(param_1,(int)this + 0x10c);
  *(uint *)((int)this + 0x198) = uVar1;
  uVar1 = F_00dd7b90(param_1 GEN_EDX_ARG);
  *(bool *)((int)this + 0x1a5) = uVar1 == 0;
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf7 */
GEN_FRAME uint GEN_THISCALL F_00dd5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  
  if (this[0x19c] != (undefined1)0x0) {
    return 0;
  }
  F_00dd4e60(this GEN_EDX_FWD,*param_1,param_1[1],param_2);
  *(undefined1 *)(((int)(uint)(this)) + 0x19c) = 1;
  return 1;
}

/* ref: FUN_00dd5070 */
GEN_FRAME uint GEN_THISCALL F_00dd5070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5070u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  *(undefined4 *)(in_ecx + 0x18c) = param_2;
  *(uint *)(in_ecx + 400) = param_4;
  *(uint *)(in_ecx + 0x194) = param_4 | 0x80000000;
  return param_4 | 0x80000000;
}

/* ref: FUN_00dd50a0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd50a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd50a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  F_00dd7940(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[99] = 0;
  in_ecx[100] = 0;
  in_ecx[0x65] = 0x80000000;
  *(undefined1 *)(in_ecx + 0x67) = 0;
  in_ecx[0x68] = 0;
  *(undefined1 *)((int)in_ecx + 0x1a5) = 1;
  in_ecx[0x66] = 0;
  *(undefined1 *)(in_ecx + 0x69) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5100 */
GEN_FRAME uint GEN_THISCALL F_00dd5100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  if ((param_1 != 0) && (*(char *)((int)this + 0x1a4) != '\0')) {
    F_00dd4bf0(this GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00dd5130 */
GEN_FRAME uint GEN_THISCALL F_00dd5130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)((int)this + 0x198) * param_1;
  uVar4 = iVar3 + 0xfU & 0xfffffff0;
  uVar1 = *(uint *)((int)this + 0x194) & 0x3fffffff;
  if ((int)uVar1 < (int)uVar4) {
    uVar1 = uVar1 * 2;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(undefined4 *)((int)this + 0x18c),uVar1,1);
  }
  *(uint *)((int)this + 400) = uVar4;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18c);
  iVar5 = ((int)(iVar3 + 0xfU) >> 4) - 1;
  if (-1 < iVar5) {
    do {
      iVar5 = iVar5 - 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    } while (-1 < iVar5);
    *(int *)((int)this + 400) = iVar3;
    *(uint *)((int)this + 0x1a0) = param_1;
    return param_1;
  }
  *(int *)((int)this + 400) = iVar3;
  *(uint *)((int)this + 0x1a0) = param_1;
  return (uint)puVar2;
}

/* ref: FUN_00dd51d0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd51d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd51d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  uVar1 = *(uint *)((int)this + 0x194);
  *(undefined4 *)((int)this + 400) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18c),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dd5230 */
GEN_FRAME uint GEN_THISCALL F_00dd5230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  F_00dd7940((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x80000000;
  *(undefined1 *)((int)this + 0x19c) = 0;
  F_00dd4fe0(this GEN_EDX_ARG,param_1);
  F_00dd5130(this GEN_EDX_ARG,param_2);
  *(undefined1 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: hkMemoryMeshVertexBuffer::vf3 */
GEN_FRAME uint GEN_THISCALL F_00dd5290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined * this_00;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int local_8;
  
  if (this[0x1a5] == (undefined1)0x0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                                (*(int * PTR32 *)((int)pvVar6 + 0x2c) GEN_EDX_ARG,0x1a8)));
    *(undefined2 *)((int)this_00 + 4) = 0x1a8;
    uVar7 = F_00dd5230(this_00 GEN_EDX_ARG,this + 8,*(undefined4 *)(this + 0x1a0));
    iVar1 = *(int *)(this + 0x198);
    iVar2 = *(int *)(this + 0x1a0);
    puVar9 = *(undefined4 * PTR32 *)(this + 0x18c);
    puVar8 = *(undefined4 * PTR32 *)(uVar7 + 0x18c);
    local_8 = iVar1 * iVar2 + 0xf >> 4;
    if (0 < local_8) {
      do {
        uVar3 = puVar9[3];
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        *puVar8 = *puVar9;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar3;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    *(int *)(uVar7 + 400) = iVar1 * iVar2;
    return uVar7;
  }
  F_00d919e0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00dd5350 */
GEN_FRAME uint GEN_THISCALL F_00dd5350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5350u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00dd5370 */
GEN_FRAME unsigned int F_00dd5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5370u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  
  puVar4 = param_1 + param_2 - 1;
  iVar2 = param_2 / 2;
  puVar3 = param_1;
  if (0 < iVar2) {
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 - 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd53b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd53b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00dd7970(param_1 GEN_EDX_FWD,this + 8);
  return;
}

/* ref: hkMemoryMeshVertexBuffer::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00dd53d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd53d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1a0);
}

/* ref: hkMemoryMeshVertexBuffer::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00dd53e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd53e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1a5) != '\0';
}

/* ref: FUN_00dd53f0 */
GEN_FRAME uint F_00dd53f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd53f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshVertexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd5420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd51d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshTexture::vf6 */
GEN_FRAME uint GEN_THISCALL F_00dd5460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 8 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshTexture::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: hkMemoryMeshTexture::vf14 */
GEN_FRAME uint GEN_THISCALL F_00dd5480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: hkMemoryMeshTexture::vf3 */
GEN_FRAME uint GEN_THISCALL F_00dd5490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined1 hVar1;
  
  *param_1 = *(undefined4 *)(this + 0xc);
  *param_2 = *(undefined4 *)(this + 0x10);
  hVar1 = this[0x18];
  *param_3 = (int)(char)hVar1;
  return (int)(char)hVar1;
}

/* ref: hkMemoryMeshTexture::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00dd54b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd54b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xfffffffe;
}

/* ref: hkMemoryMeshTexture::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_00dd54c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd54c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x19) != '\0';
}

/* ref: hkMemoryMeshTexture::vf8 */
GEN_FRAME byte GEN_THISCALL F_00dd54d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd54d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x19) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00dd54e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd54e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1a);
}

/* ref: hkMemoryMeshTexture::vf10 */
GEN_FRAME byte GEN_THISCALL F_00dd54f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd54f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1b);
}

/* ref: hkMemoryMeshTexture::vf12 */
GEN_FRAME byte GEN_THISCALL F_00dd5510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf4 */
GEN_FRAME uint GEN_THISCALL F_00dd5520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5520u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined4 *)&gen_args[1]);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(uint *)&gen_args[2]);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(uint *)&gen_args[2]) | 0x80000000;
  (*(undefined * PTR32 *)&gen_args[0])[0x18] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0));
  return (*(uint *)&gen_args[2]) | 0x80000000;
}

/* ref: FUN_00dd5550 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5550u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1148efc));
  F_00d91340(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0x80000000;
  *(undefined2 *)(in_ecx + 6) = 0;
  *(undefined2 *)((int)in_ecx + 0x1a) = 2;
  in_ecx[7] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5590 */
GEN_FRAME uint GEN_THISCALL F_00dd5590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5590u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd55b0 */
GEN_FRAME byte GEN_THISCALL F_00dd55b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55b0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd55c0 */
GEN_FRAME uint GEN_THISCALL F_00dd55c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd55e0 */
GEN_FRAME byte GEN_THISCALL F_00dd55e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55e0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd55f0 */
GEN_FRAME uint GEN_THISCALL F_00dd55f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5610 */
GEN_FRAME byte GEN_THISCALL F_00dd5610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5610u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshShape::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd5640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: hkMemoryMeshShape::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkMemoryMeshShape::vf4 */
GEN_FRAME uint GEN_THISCALL F_00dd5660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x20 + *(int *)(this + 8))));
  *param_3 = *(undefined1 *)(puVar3 + 2);
  *(undefined4 *)(param_3 + 4) = puVar3[3];
  uVar1 = F_00ddbd90((uint)*(byte *)(puVar3 + 2),puVar3[3]);
  *(uint *)(param_3 + 8) = uVar1;
  uVar2 = puVar3[6];
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),(byte)param_2);
  param_3[0x14] = *(undefined1 *)(puVar3 + 4);
  *(undefined4 *)(param_3 + 0x10) = puVar3[7];
  if (((byte)param_2 & 2) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  *(undefined4 *)(param_3 + 0x1c) = uVar2;
  *(undefined4 *)(param_3 + 0x18) = 0;
  if ((((byte)param_2 & 1) != 0) && (*(char *)(puVar3 + 4) != '\0')) {
    uVar1 = puVar3[5];
    *(uint *)(param_3 + 0x18) = uVar1;
  }
  uVar2 = puVar3[1];
  *(int *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  return uVar1;
}

/* ref: FUN_00dd56e0 */
GEN_FRAME uint GEN_THISCALL F_00dd56e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 * puVar8;
  byte * pbVar9;
  int local_14;
  int local_10;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00d91340((int)this + 0x2c GEN_EDX_FWD);
  F_00d91520((undefined *)((int)this + 0x2c) GEN_EDX_ARG,0);
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  if (0 < param_2) {
    puVar8 = (undefined4 *)(param_1 + 0xc);
    local_14 = param_2;
    do {
      uVar2 = F_00ddbd90((uint)*(byte *)(puVar8 - 1),*puVar8);
      if (*(char *)(puVar8 + 1) == '\x01') {
        local_10 = local_10 + uVar2;
      }
      else if (*(char *)(puVar8 + 1) == '\x02') {
        local_8 = local_8 + uVar2;
      }
      puVar8 = puVar8 + 8;
      local_14 = local_14 - 1;
      iVar6 = local_10;
    } while (local_14 != 0);
  }
  uVar2 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar5 = uVar2 * 2;
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar6,2);
  }
  uVar2 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if ((int)uVar2 < local_8) {
    iVar6 = uVar2 * 2;
    iVar5 = local_8;
    if (local_8 < iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,iVar5,4);
  }
  uVar2 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar6 = uVar2 * 2;
    iVar5 = param_2;
    if (param_2 < iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 8,iVar5,0x20);
  }
  *(int *)((int)this + 0xc) = param_2;
  if (param_2 < 1) {
    return (uint)this;
  }
  pbVar7 = (byte *)(param_1 + 8);
  local_14 = param_2;
  do {
    pbVar9 = pbVar7 + *(int *)((int)this + 8) + (-8 - param_1);
    *(undefined8 *)pbVar9 = *(undefined8 *)(pbVar7 - 8);
    *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(pbVar7 + 8);
    *(undefined8 *)(pbVar9 + 0x18) = *(undefined8 *)(pbVar7 + 0x10);
    F_00d919e0(*(undefined * PTR32 *)pbVar9 GEN_EDX_ARG);
    if (*(undefined * PTR32 *)(pbVar9 + 4) != (undefined *)0x0) {
      F_00d919e0(*(undefined * PTR32 *)(pbVar9 + 4) GEN_EDX_ARG);
    }
    if (pbVar7[8] == 1) {
      uVar2 = F_00ddbd90((uint)*pbVar7,*(undefined4 *)(pbVar7 + 4));
      iVar5 = *(int *)((int)this + 0x18);
      iVar6 = iVar5 + uVar2;
      uVar3 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
      if ((int)uVar3 < iVar6) {
        iVar4 = uVar3 * 2;
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar4,2);
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + uVar2;
      iVar6 = *piVar1 + iVar5 * 2;
LAB_00dd593d: ;
      F_00da1010(iVar6,*(undefined4 *)(pbVar7 + 0xc),uVar2 * 2);
      *(int *)(pbVar9 + 0x14) = iVar6;
    }
    else if (pbVar7[8] == 2) {
      uVar2 = F_00ddbd90((uint)*pbVar7,*(undefined4 *)(pbVar7 + 4));
      iVar5 = *(int *)((int)this + 0x24);
      iVar6 = iVar5 + uVar2;
      uVar3 = *(uint *)((int)this + 0x28) & 0x3fffffff;
      if ((int)uVar3 < iVar6) {
        iVar4 = uVar3 * 2;
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,iVar4,4);
      }
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar2;
      iVar6 = *(int *)((int)this + 0x20) + iVar5 * 4;
      uVar2 = uVar2 * 2;
      goto LAB_00dd593d;
    }
    pbVar7 = pbVar7 + 0x20;
    local_14 = local_14 - 1;
    if (local_14 == 0) {
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00dd5980 */
GEN_FRAME uint GEN_THISCALL F_00dd5980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  F_00d91350((int)this + 0x2c GEN_EDX_FWD,param_1);
  iVar5 = 0;
  if (param_1 != 0) {
    local_8 = *(int *)((int)this + 0x20);
    iVar4 = *(int *)((int)this + 0x14);
    local_c = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 8) + 0x10 + iVar5)));
        iVar2 = *(int *)((int)this + 8) + iVar5;
        if (cVar1 == '\x01') {
          uVar3 = F_00ddbd90((uint)*(byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14 + iVar5))) = iVar4;
          iVar4 = iVar4 + uVar3 * 2;
        }
        else if (cVar1 == '\x02') {
          uVar3 = F_00ddbd90((uint)*(byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14 + iVar5))) = local_8;
          local_8 = local_8 + uVar3 * 4;
        }
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x20;
      } while (local_c < *(int *)((int)this + 0xc));
    }
    return (uint)this;
  }
  return (uint)this;
}

/* ref: FUN_00dd5a30 */
GEN_FRAME uint GEN_THISCALL F_00dd5a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  if (0 < local_8) {
    do {
      iVar1 = *(int *)((int)this + 8);
      F_00d91a80(*(undefined * PTR32 *)(iVar1 + iVar3) GEN_EDX_FWD);
      this_00 = *(undefined * PTR32 *)(iVar1 + 4 + iVar3);
      if (this_00 != (undefined *)0x0) {
        F_00d91a80(this_00 GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 0x20;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  F_00d91510((undefined *)((int)this + 0x2c) GEN_EDX_ARG);
  uVar2 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 << 5);
  }
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00dd5b40 */
GEN_FRAME uint GEN_THISCALL F_00dd5b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5b40u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00dd5ba0 */
GEN_FRAME uint GEN_THISCALL F_00dd5ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd5bb0 */
GEN_FRAME uint GEN_THISCALL F_00dd5bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd5c30 */
GEN_FRAME uint GEN_THISCALL F_00dd5c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dd5c80 */
GEN_FRAME uint GEN_THISCALL F_00dd5c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dd5cd0 */
GEN_FRAME uint GEN_THISCALL F_00dd5cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd5d10 */
GEN_FRAME uint GEN_THISCALL F_00dd5d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5d50 */
GEN_FRAME uint GEN_THISCALL F_00dd5d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5d90 */
GEN_FRAME uint GEN_THISCALL F_00dd5d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5dd0 */
GEN_FRAME uint GEN_THISCALL F_00dd5dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dd5e20 */
GEN_FRAME uint GEN_THISCALL F_00dd5e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd5e60 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd5ea0 */
GEN_FRAME uint GEN_THISCALL F_00dd5ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd5ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMemoryMeshShape::vf2 */
GEN_NOFRAME uint F_00dd5f20(void)
{
  GEN_ENTER(0xdd5f20u, 0u, 0u, 0u, 0u);
  return 0x15e2804;
}

/* ref: hkMemoryMeshShape::vf7 */
GEN_FRAME uint GEN_THISCALL F_00dd5f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x2c GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshShape::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00dd5f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd5f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c) & 0xfffffffe;
}

/* ref: FUN_00dd5f50 */
GEN_FRAME uint F_00dd5f50(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd5f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd5a30(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshMaterial::vf3 */
GEN_FRAME uint GEN_THISCALL F_00dd5fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00dd7970(param_2 GEN_EDX_FWD,param_1);
  return 0;
}

/* ref: hkMemoryMeshMaterial::vf4 */
GEN_FRAME uint GEN_THISCALL F_00dd5fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00d919e0(param_1 GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: hkMemoryMeshMaterial::vf5 */
GEN_FRAME byte GEN_THISCALL F_00dd6000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD)));
  return puVar1 == &REFG(undefined, 0x15e2774);
}

/* ref: hkMemoryMeshMaterial::vf7 */
GEN_FRAME uint GEN_THISCALL F_00dd6020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 8 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshMaterial::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xfffffffe;
}

/* ref: hkMemoryMeshMaterial::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: hkMemoryMeshMaterial::vf12 */
GEN_FRAME uint GEN_THISCALL F_00dd6050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd6050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0x24);
  uVar2 = *(undefined4 *)(this + 0x28);
  uVar3 = *(undefined4 *)(this + 0x2c);
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x34);
  uVar2 = *(undefined4 *)(this + 0x38);
  uVar3 = *(undefined4 *)(this + 0x3c);
  *param_2 = *(undefined4 *)(this + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x44);
  uVar2 = *(undefined4 *)(this + 0x48);
  uVar3 = *(undefined4 *)(this + 0x4c);
  *param_3 = *(undefined4 *)(this + 0x40);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x58);
  uVar3 = *(undefined4 *)(this + 0x5c);
  *param_4 = *(undefined4 *)(this + 0x50);
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_3;
}

/* ref: hkMemoryMeshMaterial::vf13 */
GEN_FRAME uint GEN_THISCALL F_00dd6080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd6080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(this + 0x30) = *param_2;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(this + 0x40) = *param_3;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(this + 0x50) = *param_4;
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x5c) = uVar3;
  return (uint)param_3;
}

/* ref: hkMemoryMeshMaterial::vf10 */
GEN_FRAME uint GEN_THISCALL F_00dd60b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd60b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: hkMemoryMeshMaterial::vf6 */
GEN_FRAME byte GEN_THISCALL F_00dd60c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd60c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD)));
  if (puVar2 == &REFG(undefined, 0x15e284c)) {
    uVar3 = param_1[2] & 0xfffffffe;
    if ((*(uint *)(this + 8) & 0xfffffffe) == 0) {
      uVar3 = -(uint)(uVar3 != 0);
    }
    else {
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = F_00da0d20(*(uint *)(this + 8) & 0xfffffffe,uVar3);
    }
    if ((uVar3 == 0) && (*(int *)(this + 0x10) == param_1[4])) {
      iVar4 = *(int *)(this + 0x10) - 1;
      if (-1 < iVar4) {
        piVar5 = ((int *)GEN_TOP((*(int *)(this + 0xc) + iVar4 * 4)));
        do {
          if (*piVar5 != *((int *)GEN_TOP(((param_1[3] - *(int *)(this + 0xc)) + (int)piVar5)))) {
            return 0;
          }
          piVar5 = piVar5 - 1;
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
      }
      (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f(param_1[0xd]) == *(float *)(this + 0x34) &&
                             gen_bits2f(param_1[9]) == *(float *)(this + 0x24)) &&
                            (gen_bits2f(param_1[0x15]) == *(float *)(this + 0x54) &&
                            gen_bits2f(param_1[0x11]) == *(float *)(this + 0x44)));
      (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f(param_1[0xc]) == *(float *)(this + 0x30) &&
                             gen_bits2f(param_1[8]) == *(float *)(this + 0x20)) &&
                            (gen_bits2f(param_1[0x14]) == *(float *)(this + 0x50) &&
                            gen_bits2f(param_1[0x10]) == *(float *)(this + 0x40)));
      (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f(param_1[0xe]) == *(float *)(this + 0x38) &&
                             gen_bits2f(param_1[10]) == *(float *)(this + 0x28)) &&
                            (gen_bits2f(param_1[0x16]) == *(float *)(this + 0x58) &&
                            gen_bits2f(param_1[0x12]) == *(float *)(this + 0x48)));
      (*(undefined4 *)((char *)&auVar1 + 12)) =
           -(uint)((gen_bits2f(param_1[0xf]) == *(float *)(this + 0x3c) &&
                   gen_bits2f(param_1[0xb]) == *(float *)(this + 0x2c)) &&
                  (gen_bits2f(param_1[0x17]) == *(float *)(this + 0x5c) &&
                  gen_bits2f(param_1[0x13]) == *(float *)(this + 0x4c)));
      iVar4 = gen_movmskps(&(auVar1));
      return iVar4 == 0xf;
    }
  }
  return 0;
}

/* ref: hkMemoryMeshMaterial::vf11 */
GEN_FRAME uint GEN_THISCALL F_00dd6180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar2 = *(uint *)(this + 0x14) & 0x3fffffff;
  if (*(uint *)(this + 0x10) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0xc,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + *(int *)(this + 0x10) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 != (undefined *)0x0) {
      uVar2 = F_00d919e0(param_1 GEN_EDX_ARG);
    }
    *puVar1 = param_1;
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  if (param_1 != (undefined *)0x0) {
    uVar2 = F_00d91a80(param_1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00dd61f0 */
GEN_FRAME uint GEN_THISCALL F_00dd61f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd61f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x1149474));
  F_00d91340((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  F_00d91520((undefined *)((int)this + 8) GEN_EDX_ARG,param_1);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x114944c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149448);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149444);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)&REFG(undefined, 0x1149440);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x114945c);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1149458);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149454);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149450);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)&REFG(undefined, 0x1149450);
  *(undefined4 *)((int)this + 0x34) = uVar2;
  *(undefined4 *)((int)this + 0x38) = uVar3;
  *(undefined4 *)((int)this + 0x3c) = uVar4;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar2;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(undefined4 *)((int)this + 0x4c) = uVar4;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x114946c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149468);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149464);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1149460);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  return (uint)this;
}

/* ref: FUN_00dd6260 */
GEN_FRAME uint GEN_THISCALL F_00dd6260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x1149474));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd62c0 */
GEN_FRAME uint GEN_THISCALL F_00dd62c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd62c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd62d0 */
GEN_FRAME uint GEN_THISCALL F_00dd62d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd62d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd62f0 */
GEN_FRAME uint GEN_THISCALL F_00dd62f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd62f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00dd6310 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd6310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dd6350 */
GEN_FRAME uint GEN_THISCALL F_00dd6350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dd6370 */
GEN_FRAME uint F_00dd6370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dd6380 */
GEN_FRAME uint GEN_THISCALL F_00dd6380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dd63b0 */
GEN_FRAME uint GEN_THISCALL F_00dd63b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) == 0) {
    return -(uint)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = F_00da0d20(*(uint *)this & 0xfffffffe,param_1);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00dd6470 */
GEN_FRAME unsigned int F_00dd6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3 GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd64b0 */
GEN_FRAME unsigned int F_00dd64b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd64b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00dd64e0 */
GEN_FRAME uint F_00dd64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd64e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6510 */
GEN_FRAME uint GEN_THISCALL F_00dd6510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd6550 */
GEN_FRAME uint GEN_THISCALL F_00dd6550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = F_00d919e0((undefined *)*param_2 GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00dd65a0 */
GEN_FRAME uint GEN_THISCALL F_00dd65a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd65a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dd65e0 */
GEN_FRAME uint GEN_THISCALL F_00dd65e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd65e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00d919e0((undefined *)*param_1 GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00dd6630 */
GEN_FRAME unsigned int F_00dd6630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00dd66a0 */
GEN_FRAME uint GEN_THISCALL F_00dd66a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dd6710 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dd6780 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: hkMemoryMeshMaterial::vf2 */
GEN_NOFRAME uint F_00dd67f0(void)
{
  GEN_ENTER(0xdd67f0u, 0u, 0u, 0u, 0u);
  return 0x15e284c;
}

/* ref: FUN_00dd6800 */
GEN_FRAME uint F_00dd6800(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6830 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10) - 1;
  iVar1 = *(int *)((int)this + 0xc);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = F_00d91510((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkMemoryMeshMaterial::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd68b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd68b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd6830(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd6900 */
GEN_FRAME uint GEN_THISCALL F_00dd6900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6900u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00dd6940 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd6940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dd6960 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd6960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dd69c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd69c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd69c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dd69e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd69e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd69e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dd6a40 */
GEN_FRAME uint GEN_THISCALL F_00dd6a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd6a60 */
GEN_FRAME uint GEN_THISCALL F_00dd6a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd6a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 4);
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00dd6ab0 */
GEN_FRAME uint F_00dd6ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d91c10(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd6ad0 */
GEN_FRAME uint GEN_THISCALL F_00dd6ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd6b20 */
GEN_FRAME unsigned int F_00dd6b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00dd6b60 */
GEN_FRAME uint GEN_THISCALL F_00dd6b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dd6ba0 */
GEN_NOFRAME uint F_00dd6ba0(void)
{
  GEN_ENTER(0xdd6ba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bb0 */
GEN_NOFRAME uint F_00dd6bb0(void)
{
  GEN_ENTER(0xdd6bb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bc0 */
GEN_NOFRAME uint F_00dd6bc0(void)
{
  GEN_ENTER(0xdd6bc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bd0 */
GEN_NOFRAME uint F_00dd6bd0(void)
{
  GEN_ENTER(0xdd6bd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6be0 */
GEN_NOFRAME uint GEN_STDCALL F_00dd6be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00dd6bf0 */
GEN_NOFRAME uint F_00dd6bf0(void)
{
  GEN_ENTER(0xdd6bf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6c00 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00dd6c00(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00dd6c70 */
GEN_FRAME uint GEN_THISCALL F_00dd6c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dd6cb0 */
GEN_FRAME uint GEN_THISCALL F_00dd6cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd6cf0 */
GEN_FRAME uint F_00dd6cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6cf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dd6d30 */
GEN_FRAME uint F_00dd6d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6d80 */
GEN_FRAME uint GEN_THISCALL F_00dd6d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6d80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6dc0 */
GEN_FRAME uint F_00dd6dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6df0 */
GEN_FRAME uint GEN_THISCALL F_00dd6df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd6e30 */
GEN_FRAME uint F_00dd6e30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6e30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd6e60 */
GEN_FRAME uint GEN_THISCALL F_00dd6e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6e60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6ea0 */
GEN_FRAME uint GEN_THISCALL F_00dd6ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd6ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd6f20 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd6f60 */
GEN_FRAME uint GEN_THISCALL F_00dd6f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  F_00d91350(in_ecx + 0x19 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd6f80 */
GEN_NOFRAME uint GEN_THISCALL F_00dd6f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  if (0 < *(int *)((int)this + 0x5c)) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x58) + iVar2 * 4))) GEN_EDX_FWD);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x5c));
  }
  F_00d91510((undefined *)((int)this + 100) GEN_EDX_ARG);
  uVar1 = *(uint *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x58),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dd7010 */
GEN_FRAME uint GEN_THISCALL F_00dd7010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint * puVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x13c)) = this;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  F_00d91340((int)this + 100 GEN_EDX_FWD);
  F_00d91520((undefined *)((int)this + 100) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  if (param_4 != 0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar6 + 0x2c) GEN_EDX_ARG,0x48)));
    *(undefined2 *)((int)pvVar7 + 4) = 0x48;
    pvVar7 = (undefined *)F_00dd3150(pvVar7 GEN_EDX_ARG,param_4);
    if (pvVar7 != (undefined *)0x0) {
      F_00d919e0(pvVar7 GEN_EDX_ARG);
    }
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x50) = pvVar7;
    F_00d91a80(pvVar7 GEN_EDX_ARG);
  }
  if (param_2 != (int *)0x0) {
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0xc))(param_2 GEN_EDX_ARG);
    uVar9 = 0;
    (*(uint *)(gen_frame + 0x138)) = uVar8;
    (*(uint *)(gen_frame + 0x154)) = 0;
    (*(uint *)(gen_frame + 0x158)) = 0;
    (*(uint *)(gen_frame + 0x15c)) = 0x80000000;
    (*(uint *)(gen_frame + 0x164)) = uVar8;
    if (uVar8 != 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar12 = uVar8 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar12 + uVar9)) {
        uVar9 = F_00d94390(pvVar6 GEN_EDX_ARG,uVar12);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar12 + uVar9;
      }
    }
    (*(uint *)(gen_frame + 0x154)) = uVar9;
    uVar12 = uVar8 | 0x80000000;
    (*(uint *)(gen_frame + 0x134)) = uVar12;
    (*(uint *)(gen_frame + 0x15c)) = uVar12;
    (*(uint *)(gen_frame + 0x160)) = uVar9;
    (*(uint *)(gen_frame + 0x168)) = 0;
    (*(uint *)(gen_frame + 0x16c)) = 0;
    (*(uint *)(gen_frame + 0x170)) = 0x80000000;
    (*(uint *)(gen_frame + 0x178)) = uVar8;
    if (uVar8 == 0) {
      (*(uint *)(gen_frame + 0x168)) = 0;
    }
    else {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar13 = uVar8 * 4 + 0x7f & 0xffffff80;
      uVar10 = uVar9 + uVar13;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar13) || (*(uint *)((int)pvVar6 + 0x10) < uVar10)) {
        uVar9 = F_00d94390(pvVar6 GEN_EDX_ARG,uVar13);
        (*(uint *)(gen_frame + 0x168)) = uVar9;
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar10;
        (*(uint *)(gen_frame + 0x168)) = uVar9;
      }
    }
    uVar9 = 0;
    (*(uint *)(gen_frame + 0x170)) = uVar12;
    (*(uint *)(gen_frame + 0x174)) = (*(uint *)(gen_frame + 0x168));
    (*(uint *)(gen_frame + 0x140)) = 0;
    (*(uint *)(gen_frame + 0x144)) = 0;
    (*(uint *)(gen_frame + 0x148)) = 0x80000000;
    (*(uint *)(gen_frame + 0x150)) = uVar8;
    if (uVar8 != 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar12 = uVar8 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar12 + uVar9)) {
        uVar9 = F_00d94390(pvVar6 GEN_EDX_ARG,uVar12);
        uVar12 = (*(uint *)(gen_frame + 0x134));
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar12 + uVar9;
        uVar12 = (*(uint *)(gen_frame + 0x134));
      }
    }
    iVar14 = 0;
    (*(uint *)(gen_frame + 0x140)) = uVar9;
    (*(uint *)(gen_frame + 0x148)) = uVar12;
    (*(uint *)(gen_frame + 0x14c)) = uVar9;
    if (0 < (int)uVar8) {
      do {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x10))(param_2 GEN_EDX_ARG,iVar14,2,((undefined1 *)(gen_frame + 0x10c)));
        F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x128)) GEN_EDX_ARG);
        if ((*(uint *)(gen_frame + 0x158)) == ((*(uint *)(gen_frame + 0x15c)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x154)),4);
        }
        *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x154)) + (*(uint *)(gen_frame + 0x158)) * 4) = (*(undefined * PTR32 *)(gen_frame + 0x128));
        (*(uint *)(gen_frame + 0x158)) = (*(uint *)(gen_frame + 0x158)) + 1;
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x14))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10c)));
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar8);
    }
    param_4 = 0;
    uVar9 = (*(uint *)(gen_frame + 0x16c));
    uVar12 = (*(uint *)(gen_frame + 0x168));
    if (0 < (int)uVar8) {
      do {
        iVar14 = *(int *)((*(uint *)(gen_frame + 0x154)) + param_4 * 4);
        iVar11 = 0;
        if (0 < (int)uVar9) {
          do {
            if (*(int *)(uVar12 + iVar11 * 4) == iVar14) {
              if (-1 < iVar11) goto LAB_00dd72b7;
              break;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar9);
        }
        if (uVar9 == ((*(uint *)(gen_frame + 0x170)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x168)),4);
          uVar9 = (*(uint *)(gen_frame + 0x16c));
          uVar12 = (*(uint *)(gen_frame + 0x168));
        }
        *(int *)(uVar12 + uVar9 * 4) = iVar14;
        uVar9 = (*(uint *)(gen_frame + 0x16c)) + 1;
        (*(uint *)(gen_frame + 0x16c)) = uVar9;
        uVar12 = (*(uint *)(gen_frame + 0x168));
LAB_00dd72b7: ;
        param_4 = param_4 + 1;
      } while (param_4 < (int)uVar8);
    }
    if ((int)((*(uint *)(gen_frame + 0x148)) & 0x3fffffff) < (int)uVar9) {
      uVar8 = ((*(uint *)(gen_frame + 0x148)) & 0x3fffffff) * 2;
      uVar12 = uVar9;
      if ((int)uVar9 < (int)uVar8) {
        uVar12 = uVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x140)),uVar12,4);
    }
    (*(uint *)(gen_frame + 0x144)) = uVar9;
    F_00dd7940(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    iVar14 = 0;
    if (0 < (int)uVar9) {
      do {
        piVar2 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x168)) + iVar14 * 4);
        puVar1 = (uint *)((*(uint *)(gen_frame + 0x140)) + iVar14 * 4);
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
        iVar14 = iVar14 + 1;
        *puVar1 = uVar8;
      } while (iVar14 < (int)uVar9);
    }
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x13c));
    uVar8 = (*(uint *)(gen_frame + 0x138));
    uVar9 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x60) & 0x3fffffff;
    if ((int)uVar9 < (int)(*(uint *)(gen_frame + 0x138))) {
      uVar9 = uVar9 * 2;
      if ((int)uVar9 <= (int)(*(uint *)(gen_frame + 0x138))) {
        uVar9 = (*(uint *)(gen_frame + 0x138));
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x58,uVar9,4);
    }
    *(uint *)((int)pvVar7 + 0x5c) = uVar8;
    iVar14 = 0;
    if (0 < (int)uVar8) {
      do {
        iVar11 = 0;
        if (0 < (int)(*(uint *)(gen_frame + 0x16c))) {
          do {
            if (*(int *)((*(uint *)(gen_frame + 0x168)) + iVar11 * 4) == *(int *)((*(uint *)(gen_frame + 0x154)) + iVar14 * 4))
            goto LAB_00dd7375;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)(*(uint *)(gen_frame + 0x16c)));
        }
        iVar11 = -1;
LAB_00dd7375: ;
        pvVar7 = *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x140)) + iVar11 * 4);
        F_00d919e0(pvVar7 GEN_EDX_ARG);
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x58) + iVar14 * 4))) = pvVar7;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)(*(uint *)(gen_frame + 0x138)));
    }
    F_00d91c10((*(uint *)(gen_frame + 0x154)),(*(uint *)(gen_frame + 0x158)),4);
    F_00d91c10((*(uint *)(gen_frame + 0x140)),(*(uint *)(gen_frame + 0x144)),4);
    uVar8 = (*(uint *)(gen_frame + 0x150));
    uVar9 = (*(uint *)(gen_frame + 0x14c));
    if ((*(uint *)(gen_frame + 0x14c)) == (*(uint *)(gen_frame + 0x140))) {
      (*(uint *)(gen_frame + 0x144)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6 GEN_EDX_ARG,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x144)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x148))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x140)),(*(uint *)(gen_frame + 0x148)) * 4);
    }
    uVar8 = (*(uint *)(gen_frame + 0x178));
    uVar9 = (*(uint *)(gen_frame + 0x174));
    (*(uint *)(gen_frame + 0x140)) = 0;
    (*(uint *)(gen_frame + 0x148)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x174)) == (*(uint *)(gen_frame + 0x168))) {
      (*(uint *)(gen_frame + 0x16c)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6 GEN_EDX_ARG,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x16c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x170))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x168)),(*(uint *)(gen_frame + 0x170)) * 4);
    }
    uVar8 = (*(uint *)(gen_frame + 0x164));
    uVar9 = (*(uint *)(gen_frame + 0x160));
    (*(uint *)(gen_frame + 0x168)) = 0;
    (*(uint *)(gen_frame + 0x170)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x160)) == (*(uint *)(gen_frame + 0x154))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6 GEN_EDX_ARG,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x158)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x15c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x154)),(*(uint *)(gen_frame + 0x15c)) * 4);
    }
  }
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x13c));
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x10) = *param_3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x14) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x18) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x1c) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x20) = param_3[4];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x24) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x28) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x2c) = uVar5;
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x30) = param_3[8];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x34) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x38) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x3c) = uVar5;
  uVar3 = param_3[0xd];
  uVar4 = param_3[0xe];
  uVar5 = param_3[0xf];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x40) = param_3[0xc];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x44) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x48) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x4c) = uVar5;
  if (param_2 != (int *)0x0) {
    F_00d919e0(param_2 GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)((int)pvVar7 + 0x54) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)pvVar7 + 0x54) GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)pvVar7 + 0x54) = param_2;
  return (uint)pvVar7;
}

/* ref: hkMemoryMeshBody::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: hkMemoryMeshBody::vf17 */
GEN_NOFRAME unsigned int F_00dd75a0(void)
{
  GEN_ENTER(0xdd75a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkMemoryMeshBody::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dd75b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: hkMemoryMeshBody::vf19 */
GEN_FRAME uint GEN_THISCALL F_00dd75c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd75c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 100 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshBody::vf4 */
GEN_FRAME uint GEN_THISCALL F_00dd7620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x14);
  uVar2 = *(undefined4 *)(in_ecx + 0x18);
  uVar3 = *(undefined4 *)(in_ecx + 0x1c);
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x24);
  uVar2 = *(undefined4 *)(in_ecx + 0x28);
  uVar3 = *(undefined4 *)(in_ecx + 0x2c);
  param_2[4] = *(undefined4 *)(in_ecx + 0x20);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  uVar2 = *(undefined4 *)(in_ecx + 0x38);
  uVar3 = *(undefined4 *)(in_ecx + 0x3c);
  param_2[8] = *(undefined4 *)(in_ecx + 0x30);
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x44);
  uVar2 = *(undefined4 *)(in_ecx + 0x48);
  uVar3 = *(undefined4 *)(in_ecx + 0x4c);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x40);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: hkMemoryMeshBody::vf5 */
GEN_FRAME uint GEN_THISCALL F_00dd7650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(in_ecx + 0x20) = param_2[4];
  *(undefined4 *)(in_ecx + 0x24) = uVar1;
  *(undefined4 *)(in_ecx + 0x28) = uVar2;
  *(undefined4 *)(in_ecx + 0x2c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(in_ecx + 0x30) = param_2[8];
  *(undefined4 *)(in_ecx + 0x34) = uVar1;
  *(undefined4 *)(in_ecx + 0x38) = uVar2;
  *(undefined4 *)(in_ecx + 0x3c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(in_ecx + 0x40) = param_2[0xc];
  *(undefined4 *)(in_ecx + 0x44) = uVar1;
  *(undefined4 *)(in_ecx + 0x48) = uVar2;
  *(undefined4 *)(in_ecx + 0x4c) = uVar3;
  return (uint)param_2;
}

/* ref: hkMemoryMeshBody::vf6 */
GEN_FRAME uint GEN_THISCALL F_00dd7680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x58) + param_2 * 4)));
}

/* ref: hkMemoryMeshBody::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd7690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd22b0(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: hkMemoryMeshBody::vf9 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd76a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd76a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd2300(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: hkMemoryMeshBody::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd76b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd76b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd2880(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: hkMemoryMeshBody::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00dd76c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd76c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x20)));
}

/* ref: hkMemoryMeshBody::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00dd76d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd76d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x2c)));
}

/* ref: hkMemoryMeshBody::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00dd76e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd76e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x38)));
}

/* ref: hkMemoryMeshBody::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_00dd76f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd76f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100) & 0xfffffffe;
}

/* ref: FUN_00dd7720 */
GEN_FRAME uint F_00dd7720(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshBody::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: hkMemoryMeshBody::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x50) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0xc)));
  }
  return 0;
}

/* ref: hkMemoryMeshBody::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x50) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x3c)));
}

/* ref: FUN_00dd7780 */
GEN_FRAME uint GEN_THISCALL F_00dd7780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00dd77f0 */
GEN_NOFRAME uint GEN_THISCALL F_00dd77f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd77f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: hkMemoryMeshBody::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dd7880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd6f80(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd78c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd78c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  iVar1 = *(int *)(param_1 + 0x100);
  if (0 < iVar1) {
    iVar2 = param_1 - (int)this;
    do {
      *(undefined4 *)this = *(undefined4 *)(iVar2 + (int)this);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar2 + 4 + (int)this);
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd7900 */
GEN_FRAME uint GEN_THISCALL F_00dd7900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4890(param_1,"%s(%i) %s(%i)",(&REFG(undefined * PTR32, 0x114966c))[(int)(*(byte *)((int)this + 2))],
                       (uint)*(byte *)((int)this + 3),(&REFG(undefined * PTR32, 0x114963c))[(int)(*(byte *)this)],
                       (uint)*(byte *)((int)this + 1));
  return uVar1;
}

/* ref: FUN_00dd7940 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7940u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  return in_ecx;
}

/* ref: FUN_00dd7950 */
GEN_FRAME uint GEN_THISCALL F_00dd7950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dd78c0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00dd7970 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd7970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dd78c0(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00dd7980 */
GEN_FRAME byte GEN_THISCALL F_00dd7980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  char * pcVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x100);
  if (iVar1 != *(int *)(param_1 + 0x100)) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(param_1 + 3);
    pcVar2 = (char *)((int)this + 1);
    do {
      if ((((pcVar2[-1] != pcVar3[-3]) || (*pcVar2 != pcVar2[param_1 - (int)this])) ||
          (pcVar2[1] != pcVar3[-1])) || ((pcVar2[2] != *pcVar3 || (pcVar3[1] != pcVar2[3])))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 8;
      pcVar2 = pcVar2 + 8;
    } while (iVar4 < iVar1);
  }
  return 1;
}

/* ref: FUN_00dd7a00 */
GEN_FRAME byte GEN_THISCALL F_00dd7a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  byte * pbVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x100);
  uVar1 = 0;
  if (0 < iVar3) {
    pbVar2 = (byte *)((int)this + 3);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (uVar1 < *pbVar2 + 1)) {
        uVar1 = *pbVar2 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (byte)uVar1;
}

/* ref: FUN_00dd7a40 */
GEN_FRAME uint GEN_THISCALL F_00dd7a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x100)) {
    pbVar2 = (byte *)((int)this + 3);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (*pbVar2 == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 8;
    } while ((int)uVar1 < *(int *)((int)this + 0x100));
  }
  return 0xffffffff;
}

/* ref: FUN_00dd7a80 */
GEN_NOFRAME byte GEN_THISCALL F_00dd7a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = 1;
  if (1 < *(int *)((int)this + 0x100)) {
    pbVar3 = (byte *)((int)this + 3);
    do {
      if ((pbVar3[7] < pbVar3[-1]) ||
         ((pbVar3[7] <= pbVar3[-1] &&
          ((bVar1 = *pbVar3, bVar2 = pbVar3[8], bVar2 <= bVar1 && bVar1 != bVar2 || (bVar1 == bVar2)
           ))))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar4 < *(int *)((int)this + 0x100));
  }
  return 1;
}

/* ref: FUN_00dd7ac0 */
GEN_FRAME uint F_00dd7ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((*(byte *)(param_3 + 2) <= *(byte *)(param_2 + 2)) &&
     (*(byte *)(param_3 + 3) <= *(byte *)(param_2 + 3))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dd7af0 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd7af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd7af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x100);
  if (iVar1 < 0x20) {
    bVar2 = F_00dd7a00(this GEN_EDX_FWD,param_1);
    *(int *)((int)this + 0x100) = iVar1 + 1;
    *(undefined1 *)((int)this + iVar1 * 8) = (undefined1)param_2;
    *(char *)((int)this + iVar1 * 8 + 2) = (char)param_1;
    *(undefined1 *)((int)this + iVar1 * 8 + 1) = (undefined1)param_3;
    *(byte *)((int)this + iVar1 * 8 + 3) = bVar2;
    *(undefined1 *)((int)this + iVar1 * 8 + 4) = (undefined1)param_4;
  }
  return;
}

/* ref: FUN_00dd7b40 */
GEN_FRAME unsigned int GEN_THISCALL F_00dd7b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x100);
  if ((iVar1 < 0x20) &&
     (uVar2 = F_00dd7a40(this GEN_EDX_FWD,(uint)*(byte *)((int)param_1 + 2),(uint)*(byte *)((int)param_1 + 3))
     , (int)uVar2 < 0)) {
    *(undefined4 *)((int)this + iVar1 * 8) = *param_1;
    *(undefined4 *)((int)this + iVar1 * 8 + 4) = param_1[1];
    *(int *)((int)this + 0x100) = *(int *)((int)this + 0x100) + 1;
  }
  return;
}

/* ref: FUN_00dd7b90 */
GEN_NOFRAME uint GEN_THISCALL F_00dd7b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte * pbVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x100);
  iVar4 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)((int)this + 4);
    iVar3 = iVar1;
    do {
      if ((*pbVar2 & 8) != 0) {
        iVar4 = iVar4 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    if (iVar4 != 0) {
      return (iVar4 != iVar1) + 1;
    }
  }
  return 0;
}

/* ref: FUN_00dd7bc0 */
GEN_FRAME uint GEN_THISCALL F_00dd7bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x200)) {
    pbVar2 = (byte *)((int)this + 0xb);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (*pbVar2 == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 0x10;
    } while ((int)uVar1 < *(int *)((int)this + 0x200));
  }
  return 0xffffffff;
}

/* ref: FUN_00dd7c00 */
GEN_NOFRAME byte GEN_THISCALL F_00dd7c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdd7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00dd7a80(this GEN_EDX_FWD);
  uVar2 = (uint)bVar1;
  if ((bVar1 == 0) && (uVar2 = *(uint *)((int)this + 0x100), 1 < (int)uVar2)) {
    bVar1 = F_00dd7d20(this,0,uVar2 - 1,((code *)REFP(0xdd7ac0)));
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00dd7c30 */
GEN_FRAME byte GEN_THISCALL F_00dd7c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c30u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd7c40 */
GEN_FRAME byte GEN_THISCALL F_00dd7c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c40u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd7c50 */
GEN_FRAME uint GEN_THISCALL F_00dd7c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd7c60 */
GEN_FRAME uint GEN_THISCALL F_00dd7c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c60u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(*in_ecx & (byte)param_2);
}

/* ref: FUN_00dd7c70 */
GEN_FRAME byte GEN_THISCALL F_00dd7c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  return *param_1 == *(char *)this;
}

/* ref: FUN_00dd7c90 */
GEN_FRAME uint GEN_THISCALL F_00dd7c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  if ((((*(char *)this == *param_1) && (*(char *)((int)this + 1) == param_1[1])) &&
      (*(char *)((int)this + 2) == param_1[2])) &&
     ((*(char *)((int)this + 3) == param_1[3] && (param_1[4] == *(char *)((int)this + 4))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd7cd0 */
GEN_FRAME byte GEN_THISCALL F_00dd7cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  if ((((*(char *)this == *param_1) && (*(char *)((int)this + 1) == param_1[1])) &&
      (*(char *)((int)this + 2) == param_1[2])) &&
     ((*(char *)((int)this + 3) == param_1[3] && (param_1[4] == *(char *)((int)this + 4))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dd7d20 */
GEN_NOFRAME byte F_00dd7d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  char * pcVar5;
  uint uVar7;
  uint uVar8;
  uint uVar6;
  
  do {
    iVar4 = (int)(param_2 + param_3) >> 1;
    uVar1 = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_1 + iVar4 * 8);
    (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
    uVar7 = param_3;
    uVar8 = param_2;
    do {
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1f)),param_1 + uVar8 * 8,&(*(undefined4 *)(gen_frame + 0x0)))));
      if (*pcVar5 != '\0') {
        iVar4 = param_1 + uVar8 * 8;
        do {
          uVar8 = uVar8 + 1;
          (*(int *)(gen_frame + 0x18)) = iVar4 + 8;
          pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1f)),iVar4 + 8,&(*(undefined4 *)(gen_frame + 0x0)))));
          iVar4 = (*(int *)(gen_frame + 0x18));
        } while (*pcVar5 != '\0');
      }
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1e)),&(*(undefined4 *)(gen_frame + 0x0)),param_1 + uVar7 * 8)));
      if (*pcVar5 != '\0') {
        iVar4 = param_1 + uVar7 * 8;
        do {
          uVar7 = uVar7 - 1;
          (*(int *)(gen_frame + 0x18)) = iVar4 - 8;
          pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1e)),&(*(undefined4 *)(gen_frame + 0x0)),iVar4 - 8)));
          iVar4 = (*(int *)(gen_frame + 0x18));
        } while (*pcVar5 != '\0');
      }
      if ((int)uVar7 < (int)uVar8) break;
      if (uVar7 != uVar8) {
        uVar1 = *(undefined4 *)(param_1 + 4 + uVar7 * 8);
        uVar2 = *(undefined4 *)(param_1 + uVar7 * 8);
        *(undefined4 *)(param_1 + uVar7 * 8) = *(undefined4 *)(param_1 + uVar8 * 8);
        *(undefined4 *)(param_1 + 4 + uVar7 * 8) = *(undefined4 *)(param_1 + 4 + uVar8 * 8);
        *(undefined4 *)(param_1 + uVar8 * 8) = uVar2;
        *(undefined4 *)(param_1 + 4 + uVar8 * 8) = uVar1;
      }
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar7);
    uVar6 = param_2;
    if ((int)param_2 < (int)uVar7) {
      bVar3 = F_00dd7d20(param_1,param_2,uVar7,param_4);
      uVar6 = (uint)bVar3;
    }
    param_2 = uVar8;
    if ((int)param_3 <= (int)uVar8) {
      return (byte)uVar6;
    }
  } while( true );
}

/* ref: FUN_00dd7e50 */
GEN_FRAME byte F_00dd7e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (1 < (int)param_2) {
    bVar1 = F_00dd7d20(param_1,0,param_2 - 1,param_3);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00dd7e80 */
GEN_FRAME byte GEN_THISCALL F_00dd7e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00dd7980(this GEN_EDX_FWD,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00dd7eb0 */
GEN_FRAME uint F_00dd7eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == param_3) {
    uVar1 = F_00da1030(param_1,0,param_3 * param_4);
    return uVar1;
  }
  puVar3 = (undefined4 *)(param_3 * param_4 + (int)param_1);
  uVar1 = param_3;
  if ((param_3 & 3) == 0) {
    switch((unsigned int)(uintptr_t)((int)param_3 >> 2)) {
    case 1: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return param_3;
      }
      break;
    case 2: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return param_3;
      }
      break;
    case 3: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return 0;
      }
      break;
    case 4: ;
      if (param_1 != puVar3) {
        puVar2 = param_1 + 2;
        do {
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 - 2 != puVar3);
        return (uint)puVar2;
      }
      break;
    default: ;
      goto switchD_00dd7f00_default;
    }
  }
  else {
switchD_00dd7f00_default: ;
    for (puVar2 = param_1; puVar2 != puVar3; puVar2 = (undefined4 *)((int)puVar2 + param_2)) {
      uVar1 = F_00da1030(puVar2,0,param_3);
    }
  }
  return uVar1;
}

/* ref: FUN_00dd7fc0 */
GEN_FRAME uint F_00dd7fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdd7fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (param_5 == 0) {
    return 0;
  }
  if (((*(uint *)&gen_a1) == param_4) && ((*(uint *)&gen_a1) == param_5)) {
    uVar1 = F_00da1010(param_3,param_1,param_5 * param_6);
    return uVar1;
  }
  if ((param_5 & 3) == 0) {
    puVar2 = (undefined4 *)((*(uint *)&gen_a1) * param_6 + (int)param_1);
    switch((unsigned int)(uintptr_t)((int)param_5 >> 2)) {
    case 1: ;
      puVar4 = param_1;
      puVar5 = param_3;
      if (param_1 != puVar2) {
        do {
          *puVar5 = *puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + (*(uint *)&gen_a1));
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 2: ;
      puVar4 = param_1;
      puVar5 = param_3;
      if (param_1 != puVar2) {
        do {
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          puVar4 = (undefined4 *)((int)puVar4 + (*(uint *)&gen_a1));
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 3: ;
      if (param_1 != puVar2) {
        puVar5 = param_3 + 2;
        puVar4 = param_1;
        do {
          puVar5[-2] = *puVar4;
          puVar5[-1] = puVar4[1];
          *puVar5 = puVar4[2];
          puVar4 = (undefined4 *)((int)puVar4 + (*(uint *)&gen_a1));
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 4: ;
      if (param_1 != puVar2) {
        puVar5 = param_3 + 2;
        puVar4 = param_1 + 2;
        do {
          puVar5[-2] = puVar4[-2];
          puVar5[-1] = puVar4[-1];
          *puVar5 = *puVar4;
          puVar3 = puVar4 + 1;
          puVar4 = (undefined4 *)((int)puVar4 + (*(uint *)&gen_a1));
          puVar5[1] = *puVar3;
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 - 2 != puVar2);
        return (uint)puVar2;
      }
      break;
    default: ;
      goto switchD_00dd801e_default;
    }
  }
  else {
switchD_00dd801e_default: ;
    puVar3 = (undefined4 *)((*(uint *)&gen_a1) * param_6 + (int)param_1);
    puVar2 = puVar3;
    puVar5 = param_3;
    for (puVar4 = param_1; puVar4 != puVar3; puVar4 = (undefined4 *)((int)puVar4 + (*(uint *)&gen_a1))) {
      puVar2 = (undefined4 *)F_00da1010(puVar5,puVar4,param_5);
      puVar5 = (undefined4 *)((int)puVar5 + param_4);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dd8170 */
GEN_FRAME uint F_00dd8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8170u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  iVar2 = in_eax[1];
  iVar3 = in_ecx[1];
  iVar6 = *in_ecx;
  iVar5 = *in_eax;
  bVar1 = *(byte *)((int)in_ecx + 9);
  uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
  if (bVar1 == *(byte *)((int)in_eax + 9)) {
    uVar4 = param_3;
    if (0 < (int)param_3) {
      local_8 = param_3;
      do {
        uVar4 = 0;
        if (bVar1 != 0) {
          do {
            *(ushort *)(iVar5 + uVar4 * 2) = (ushort)*(byte *)(uVar4 + iVar6);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)(uint)bVar1);
        }
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 + iVar3;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar4;
}

/* ref: FUN_00dd81d0 */
GEN_FRAME uint F_00dd81d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd81d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = in_eax[1];
  iVar3 = in_ecx[1];
  iVar6 = *in_ecx;
  bVar1 = *(byte *)((int)in_ecx + 9);
  iVar4 = *in_eax;
  if ((bVar1 == *(byte *)((int)in_eax + 9)) && (iVar5 = param_3, 0 < param_3)) {
    do {
      in_eax = (int *)0x0;
      if (bVar1 != 0) {
        do {
          *(undefined1 *)((int)in_eax + iVar4) = *(undefined1 *)(iVar6 + (int)((int)(uintptr_t)in_eax) * 2);
          in_eax = (int *)((int)in_eax + 1);
        } while ((int)in_eax < (int)(uint)bVar1);
      }
      iVar4 = iVar4 + iVar2;
      iVar6 = iVar6 + iVar3;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd8270 */
GEN_FRAME uint F_00dd8270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd8270u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x14))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,1,0);
  if ((int)uVar1 < 0) {
    uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2,0);
    if ((int)uVar1 < 0) {
      uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4,0);
      if ((int)uVar1 < 0) {
        uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,5,0);
        if ((int)uVar1 < 0) {
          *param_1 = 0;
          return (uint)param_1;
        }
      }
    }
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dd8300 */
GEN_FRAME uint F_00dd8300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd8300u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x14))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,7,0);
  uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,6,0);
  if ((int)uVar2 < 0) {
    uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,8,0);
  }
  if ((-1 < (int)uVar1) && (-1 < (int)uVar2)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dd8390 */
GEN_FRAME unsigned int F_00dd8390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8390u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  
  puVar1 = &(*(undefined4 *)&gen_args[1]);
  if ((byte)(*(undefined4 *)&gen_args[1]) <= (byte)(*(undefined4 *)&gen_args[2])) {
    puVar1 = &(*(undefined4 *)&gen_args[2]);
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = *(undefined1 *)puVar1;
  return 0;
}

/* ref: FUN_00dd83b0 */
GEN_FRAME uint F_00dd83b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  char local_c;
  
  fVar6 = *(float *)&REFG(undefined, 0x11496ec);
  fVar5 = *(float *)&REFG(undefined, 0x11496e8);
  fVar4 = *(float *)&REFG(undefined, 0x11496e4);
  fVar3 = *(float *)&REFG(undefined, 0x11496e0);
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_c = (char)uVar1;
  bVar7 = (byte)((uint)uVar1 >> 8);
  cVar8 = local_c;
  if ((((char)((uint)uVar1 >> 0x10) == '\x03') && (bVar7 == 4)) && (local_c == '\x02')) {
    cVar8 = '\b';
  }
  if (cVar8 == '\b') {
    iVar11 = 0;
    pfVar9 = param_3;
    if (0 < param_4) {
      do {
        uVar2 = *((uint *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) + *(int *)param_1)));
        iVar11 = iVar11 + 1;
        *pfVar9 = (float)(uVar2 & 0xff) * fVar3;
        pfVar9[1] = (float)(uVar2 >> 8 & 0xff) * fVar4;
        pfVar9[2] = (float)(uVar2 >> 0x10 & 0xff) * fVar5;
        pfVar9[3] = (float)(uVar2 >> 0x18) * fVar6;
        pfVar9 = pfVar9 + 4;
      } while (iVar11 < param_4);
    }
  }
  else {
    if (cVar8 != '\n') {
      return 1;
    }
    if (4 < bVar7) {
      bVar7 = 4;
    }
    switch((unsigned int)(uintptr_t)(bVar7)) {
    case 1: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar9[-2] = *((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                                 *(int *)param_1)));
          pfVar9[-1] = 0.0;
          *pfVar9 = 0.0;
          pfVar9[1] = 0.0;
          iVar11 = iVar11 + 1;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 2: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = 0.0;
          pfVar9[1] = 0.0;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 3: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = pfVar10[2];
          pfVar9[1] = 0.0;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 4: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = pfVar10[2];
          pfVar9[1] = pfVar10[3];
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00dd8600 */
GEN_FRAME uint F_00dd8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8600u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  uint * puVar7;
  int iVar8;
  uint uVar9;
  
  fVar5 = *(float *)&REFG(undefined, 0x11496ec);
  fVar4 = *(float *)&REFG(undefined, 0x11496e8);
  fVar3 = *(float *)&REFG(undefined, 0x11496e4);
  fVar2 = *(float *)&REFG(undefined, 0x11496e0);
  if (*(char *)(param_1 + 8) == '\b') {
    iVar1 = *(int *)(param_1 + 4);
    puVar7 = *(uint * PTR32 *)param_1;
    pfVar6 = param_2;
    iVar8 = param_3;
    if (0 < param_3) {
      do {
        uVar9 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + iVar1);
        iVar8 = iVar8 - 1;
        *pfVar6 = (float)(uVar9 & 0xff) * fVar2;
        pfVar6[1] = (float)(uVar9 >> 8 & 0xff) * fVar3;
        pfVar6[2] = (float)(uVar9 >> 0x10 & 0xff) * fVar4;
        pfVar6[3] = (float)(uVar9 >> 0x18) * fVar5;
        pfVar6 = pfVar6 + 4;
      } while (iVar8 != 0);
    }
    return 0;
  }
  if (*(char *)(param_1 + 8) != '\n') {
    return 1;
  }
  uVar9 = (uint)*(byte *)(param_1 + 9);
  pfVar6 = param_2;
  iVar1 = param_3;
  if (uVar9 < 4) {
    while (iVar1 = iVar1 - 1, -1 < iVar1) {
      *pfVar6 = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[3] = 0.0;
      pfVar6 = pfVar6 + 4;
    }
  }
  if (4 < uVar9) {
    uVar9 = 4;
  }
  F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2,0x10,uVar9 * 4,param_3);
  return 0;
}

/* ref: FUN_00dd8720 */
GEN_NOFRAME uint F_00dd8720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8720u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float * pfVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_20;
  
  memcpy(&(auVar4), &(*(gen_v16 *)&REFG(undefined, 0x11496f0)), sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) < sizeof(auVar4) ? sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) : sizeof(auVar4));
  if ((char)param_1[2] == '\b') {
    iVar1 = param_1[1];
    puVar6 = (uint *)*param_1;
    fVar2 = (*(float *)((char *)&REFG(undefined, 0x11496f0) + 4));
    fVar3 = (*(float *)((char *)&REFG(undefined, 0x11496f0) + 12));
    pfVar5 = param_2;
    iVar8 = param_3;
    if (0 < param_3) {
      do {
        (*(float *)((char *)&auVar9 + 0)) = (*(float *)((char *)&auVar4 + 0)) * *pfVar5;
        (*(float *)((char *)&auVar9 + 4)) = fVar2 * pfVar5[1];
        (*(float *)((char *)&auVar9 + 8)) = (*(float *)((char *)&auVar4 + 8)) * pfVar5[2];
        (*(float *)((char *)&auVar9 + 12)) = fVar3 * pfVar5[3];
        gen_maxps(&(auVar9), (&(unsigned long long[2]){0, 0}), &(auVar9));
        gen_minps(&(auVar9), &(auVar4), &(auVar9));
        fStack_34 = (*(float *)((char *)&auVar9 + 12));
        pfVar5 = pfVar5 + 4;
        local_20 = (uint)(longlong)TRUNC((float10)fStack_34);
        uVar7 = local_20 << 8;
        fStack_38 = (*(float *)((char *)&auVar9 + 8));
        local_20 = (uint)(longlong)TRUNC((float10)fStack_38);
        uVar7 = uVar7 | local_20;
        fStack_3c = (*(float *)((char *)&auVar9 + 4));
        local_20 = (uint)(longlong)TRUNC((float10)fStack_3c);
        uVar7 = uVar7 << 8 | local_20;
        local_40 = (*(float *)((char *)&auVar9 + 0));
        local_20 = (uint)(longlong)TRUNC((float10)local_40);
        *puVar6 = uVar7 << 8 | local_20;
        puVar6 = (uint *)((int)puVar6 + iVar1);
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    return 0;
  }
  if ((char)param_1[2] == '\n') {
    if (4 < *(byte *)((int)param_1 + 9)) {
      F_00dd7eb0(*param_1 + 0x10,param_1[1],(uint)*(byte *)((int)param_1 + 9) * 4 - 0x10,param_3)
      ;
    }
    F_00dd7fc0(param_2,0x10,*param_1,param_1[1],(uint)*(byte *)((int)param_1 + 9) * 4,param_3);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dd8890 */
GEN_FRAME uint F_00dd8890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_2 * 0x10 + param_1);
  iVar3 = param_2 * 0x10 + param_1;
  param_1 = *(int *)(param_1 + 0x204);
  iVar1 = *(int *)(iVar3 + 4);
  uVar6 = (uint)*(byte *)(iVar3 + 9);
  param_2 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar3 + 8))) {
  case 1: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (int)*(char *)(iVar3 + iVar5);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 2: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (uint)*(byte *)(iVar3 + iVar5);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 3: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (int)*(short *)(iVar5 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 4: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (uint)*(ushort *)(iVar5 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 5: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = *(uint *)(iVar5 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 6: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = *(uint *)(iVar5 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 7: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            uVar2 = *(uint *)(iVar5 + iVar3 * 4);
            *puVar4 = uVar2 & 0xff;
            puVar4[1] = uVar2 >> 8 & 0xff;
            puVar4[2] = uVar2 >> 0x10 & 0xff;
            puVar4[3] = uVar2 >> 0x18;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd8a80 */
GEN_FRAME uint F_00dd8a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 * 0x10 + 4 + param_1);
  piVar2 = (int *)(param_2 * 0x10 + param_1);
  param_1 = *(int *)(param_1 + 0x204);
  iVar5 = *piVar2;
  uVar6 = (uint)*(byte *)((int)piVar2 + 9);
  param_2 = param_1;
  switch((unsigned int)(uintptr_t)((char)piVar2[2])) {
  case '\x01': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(iVar4 + iVar5) = *(undefined1 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x02': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(iVar4 + iVar5) = *(undefined1 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x03': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined2 *)(iVar5 + iVar4 * 2) = *(undefined2 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x04': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined2 *)(iVar5 + iVar4 * 2) = *(undefined2 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x05': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(iVar5 + iVar4 * 4) = *puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x06': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(iVar5 + iVar4 * 4) = *puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\a': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(uint *)(iVar5 + iVar4 * 4) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar3,*(undefined1 *)(puVar3 + 1)),
                                   *(undefined1 *)(puVar3 + 2)),*(undefined1 *)(puVar3 + 3));
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 4;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd8c60 */
GEN_FRAME uint F_00dd8c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd7fc0(*param_1,param_1[1],*param_2,param_2[1],
                       (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*(byte *)(param_1 + 2))] *
                       (uint)*(byte *)((int)param_1 + 9) + 3 & 0xfffffffc,param_3);
  return uVar1;
}

/* ref: FUN_00dd8ca0 */
GEN_FRAME uint GEN_FASTCALL F_00dd8ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined1 * in_EAX = 0;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 * puVar10;
  int local_c;
  int local_8;
  
  if (((*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9)) &&
      (*(char *)(param_1 + 2) == '\a')) && (*(char *)(param_2 + 2) == '\x02')) {
    in_EAX = (undefined1 *)*param_2;
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    puVar10 = (undefined4 *)*param_1;
    switch((unsigned int)(uintptr_t)(*(char *)((int)param_1 + 9))) {
    case '\x01': ;
      iVar8 = param_3;
      if (0 < param_3) {
        do {
          *in_EAX = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          iVar8 = iVar8 - 1;
        } while (iVar8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x02': ;
      iVar8 = param_3;
      if (0 < param_3) {
        do {
          uVar3 = *puVar10;
          *in_EAX = (char)uVar3;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          iVar8 = iVar8 - 1;
        } while (iVar8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x03': ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          *in_EAX = (char)uVar3;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          in_EAX[2] = (char)((uint)uVar3 >> 0x10);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x04': ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          *in_EAX = (char)uVar3;
          in_EAX[2] = (char)((uint)uVar3 >> 0x10);
          in_EAX[3] = (char)((uint)uVar3 >> 0x18);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
        return (uint)in_EAX;
      }
      break;
    default: ;
      bVar7 = *(byte *)((int)param_1 + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)param_1 + 9) >> 2);
      if (0 < param_3) {
        local_c = param_3;
        puVar4 = in_EAX;
        puVar5 = puVar10;
        uVar6 = uVar9;
        do {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar3 = *puVar5;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            *puVar4 = (char)uVar3;
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
            puVar4[3] = (char)((uint)uVar3 >> 0x18);
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 1;
          }
          if (bVar7 == 1) {
            *puVar4 = *(undefined1 *)puVar5;
          }
          else if (bVar7 == 2) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
          }
          else if (bVar7 == 3) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
          }
          local_c = local_c - 1;
          puVar4 = in_EAX;
          puVar5 = puVar10;
          uVar6 = uVar9;
        } while (local_c != 0);
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00dd8e40 */
GEN_FRAME uint F_00dd8e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  uint * puVar5;
  
  if ((((*(char *)((int)in_eax + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x04')) &&
      (*(char *)(in_eax + 2) == '\a')) && ((char)param_3[2] == '\x03')) {
    puVar4 = (ushort *)*param_3;
    puVar5 = (uint *)*in_eax;
    iVar1 = in_eax[1];
    uVar2 = param_3[1];
    in_eax = (undefined4 *)(uVar2 >> 1);
    if (0 < in_edx) {
      do {
        uVar3 = *puVar5;
        *puVar4 = (ushort)uVar3 & 0xff;
        puVar4[1] = (ushort)(uVar3 >> 8) & 0xff;
        in_eax = (undefined4 *)(uVar3 >> 0x18);
        puVar4[2] = (ushort)(uVar3 >> 0x10) & 0xff;
        puVar4[3] = (ushort)(byte)(uVar3 >> 0x18);
        puVar4 = puVar4 + (int)(uVar2 >> 1);
        puVar5 = (uint *)((int)puVar5 + iVar1);
        in_edx = in_edx - 1;
      } while (in_edx != 0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd8eb0 */
GEN_FRAME uint F_00dd8eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  puVar3 = in_eax;
  if (((*(char *)((int)in_eax + 9) == *(char *)((int)in_edx + 9)) && (*(char *)(in_eax + 2) == '\a')
      ) && (*(char *)(in_edx + 2) == '\b')) {
    puVar3 = (undefined4 *)*in_eax;
    puVar4 = (undefined1 *)*in_edx;
    iVar1 = in_eax[1];
    iVar2 = in_edx[1];
    if ((*(char *)((int)in_eax + 9) == '\x04') && (iVar5 = param_3, 0 < param_3)) {
      do {
        *puVar4 = *(undefined1 *)puVar3;
        puVar4[1] = *(undefined1 *)((int)puVar3 + 1);
        puVar4[2] = *(undefined1 *)((int)puVar3 + 2);
        puVar4[3] = *(undefined1 *)((int)puVar3 + 3);
        puVar3 = (undefined4 *)((int)puVar3 + iVar1);
        puVar4 = puVar4 + iVar2;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00dd8f10 */
GEN_FRAME uint F_00dd8f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8f10u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  float * in_EAX = 0;
  int iVar4;
  uint * puVar5;
  float10 fVar6;
  int local_8;
  
  if ((((*(char *)((int)in_edx + 9) == '\x01') || (*(char *)((int)in_esi + 9) == '\x04')) &&
      ((char)in_edx[2] == '\b')) && ((char)in_esi[2] == '\n')) {
    in_EAX = (float *)*in_esi;
    fVar6 = (float10)REFG(float, 0x10addc0);
    iVar4 = 0;
    puVar5 = (uint *)*in_edx;
    if (3 < param_3) {
      local_8 = (param_3 - 4U >> 2) + 1;
      iVar4 = local_8 * 4;
      do {
        uVar3 = *puVar5;
        *in_EAX = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        in_EAX[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        in_EAX[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        in_EAX[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        pfVar1 = in_EAX + *(byte *)((int)in_esi + 9);
        uVar3 = *puVar5;
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        pfVar1 = pfVar1 + *(byte *)((int)in_esi + 9);
        uVar3 = *puVar5;
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        bVar2 = *(byte *)((int)in_edx + 9);
        pfVar1 = pfVar1 + *(byte *)((int)in_esi + 9);
        uVar3 = puVar5[bVar2];
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        local_8 = local_8 - 1;
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + bVar2 + *(byte *)((int)in_edx + 9);
        in_EAX = pfVar1 + *(byte *)((int)in_esi + 9);
      } while (local_8 != 0);
    }
    if (iVar4 < param_3) {
      local_8 = param_3 - iVar4;
      do {
        uVar3 = *puVar5;
        *in_EAX = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        in_EAX[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        in_EAX[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        local_8 = local_8 - 1;
        in_EAX[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        in_EAX = in_EAX + *(byte *)((int)in_esi + 9);
      } while (local_8 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00dd9170 */
GEN_FRAME uint F_00dd9170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9170u, gen_a0, gen_a1, gen_a2, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (((*(byte *)((int)in_ecx + 9) == in_eax[9]) && (*(char *)(in_ecx + 2) == '\a')) &&
     (in_eax[8] == 10)) {
    pfVar4 = *(float * PTR32 *)in_eax;
    puVar1 = (uint *)(in_eax + 4);
    in_eax = (byte *)*in_ecx;
    iVar2 = in_ecx[1];
    uVar6 = *puVar1 >> 2;
    if (*(byte *)((int)in_ecx + 9) == 4) {
      iVar5 = 0;
      if (3 < param_3) {
        iVar7 = (param_3 - 4U >> 2) + 1;
        iVar5 = iVar7 * 4;
        do {
          *pfVar4 = (float)*in_eax;
          pfVar4[1] = (float)in_eax[1];
          pfVar4[2] = (float)in_eax[2];
          pfVar4[3] = (float)in_eax[3];
          pfVar4[uVar6] = (float)in_eax[iVar2];
          pfVar4[uVar6 + 1] = (float)in_eax[iVar2 + 1];
          pfVar4[uVar6 + 2] = (float)in_eax[iVar2 + 2];
          pfVar4[uVar6 + 3] = (float)in_eax[iVar2 + 3];
          pfVar4[uVar6 * 2] = (float)in_eax[iVar2 * 2];
          pfVar4[uVar6 * 2 + 1] = (float)in_eax[iVar2 * 2 + 1];
          pfVar4[uVar6 * 2 + 2] = (float)in_eax[iVar2 * 2 + 2];
          pfVar4[uVar6 * 2 + 3] = (float)in_eax[iVar2 * 2 + 3];
          iVar3 = iVar2 * 3;
          pfVar4[uVar6 * 3] = (float)in_eax[iVar2 * 3];
          pfVar4[uVar6 * 3 + 1] = (float)in_eax[iVar3 + 1];
          pfVar4[uVar6 * 3 + 2] = (float)in_eax[iVar3 + 2];
          pfVar4[uVar6 * 3 + 3] = (float)in_eax[iVar3 + 3];
          in_eax = in_eax + iVar2 * 4;
          pfVar4 = pfVar4 + uVar6 * 4;
          iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
      }
      if (iVar5 < param_3) {
        iVar5 = param_3 - iVar5;
        do {
          *pfVar4 = (float)*in_eax;
          pfVar4[1] = (float)in_eax[1];
          pfVar4[2] = (float)in_eax[2];
          pfVar4[3] = (float)in_eax[3];
          in_eax = in_eax + iVar2;
          pfVar4 = pfVar4 + uVar6;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9360 */
GEN_FRAME uint F_00dd9360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9360u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  int local_10;
  int local_8;
  
  puVar5 = in_eax;
  if (((*(byte *)((int)in_ecx + 9) == *(byte *)((int)in_eax + 9)) &&
      (*(char *)(in_ecx + 2) == '\x02')) && ((byte)in_eax[2] == 7)) {
    puVar8 = (uint *)*in_eax;
    puVar5 = (uint *)*in_ecx;
    uVar9 = in_eax[1];
    iVar1 = in_ecx[1];
    switch((unsigned int)(uintptr_t)(*(byte *)((int)in_ecx + 9))) {
    case 1: ;
      iVar7 = param_3;
      if (0 < param_3) {
        do {
          *puVar8 = (uint)(byte)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
        return (uint)puVar5;
      }
      break;
    case 2: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = (uint)(ushort)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 - 1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    case 3: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = (uint)(uint3)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 - 1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    case 4: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = *puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 - 1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    default: ;
      bVar6 = *(byte *)((int)in_ecx + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)in_ecx + 9) >> 2);
      if (0 < param_3) {
        local_10 = param_3;
        puVar2 = puVar8;
        puVar3 = puVar5;
        uVar4 = uVar9;
        do {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar2 = *puVar3;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          if (bVar6 == 1) {
            *puVar2 = (uint)(byte)*puVar3;
          }
          else if (bVar6 == 2) {
            *puVar2 = (uint)(ushort)*puVar3;
          }
          else if (bVar6 == 3) {
            *puVar2 = (uint)(uint3)*puVar3;
          }
          local_10 = local_10 - 1;
          puVar2 = puVar8;
          puVar3 = puVar5;
          uVar4 = uVar9;
        } while (local_10 != 0);
      }
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00dd9530 */
GEN_FRAME uint F_00dd9530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9530u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float * pfVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  int * local_20;
  uint local_1c;
  int * local_10;
  int * local_c;
  
  fVar5 = REFG(float, 0x10addc0);
  iVar3 = in_eax[1];
  bVar1 = *(byte *)((int)in_eax + 9);
  uVar4 = in_ecx[1];
  iVar11 = *in_ecx;
  bVar2 = *(byte *)((int)in_ecx + 9);
  iVar7 = *in_eax;
  if (bVar2 == bVar1) {
    uVar8 = (uint)bVar2;
    in_eax = param_3;
    if (0 < (int)param_3) {
      iVar12 = iVar11 + 2;
      local_c = param_3;
      do {
        iVar6 = 0;
        if (3 < uVar8) {
          pfVar9 = (float *)(iVar7 + 8);
          do {
            pfVar9[-2] = (float)*(byte *)(iVar12 - 2 + iVar6) * fVar5;
            pfVar9[-1] = (float)*(byte *)(iVar12 - 1 + iVar6) * fVar5;
            *pfVar9 = (float)*(byte *)(iVar12 + iVar6) * fVar5;
            pfVar9[1] = (float)*(byte *)(iVar12 + 1 + iVar6) * fVar5;
            iVar6 = iVar6 + 4;
            pfVar9 = pfVar9 + 4;
          } while (iVar6 < (int)(uVar8 - 3));
        }
        for (; iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
          *(float *)(iVar7 + iVar6 * 4) = (float)*(byte *)(iVar6 + iVar11) * fVar5;
        }
        iVar7 = iVar7 + iVar3;
        iVar11 = iVar11 + uVar4;
        iVar12 = iVar12 + uVar4;
        local_c = (int *)((int)local_c - 1);
      } while (local_c != (int *)0x0);
      return uVar4;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\a') && (*(char *)((int)in_eax + 10) == '\b')) {
    uVar8 = (uint)bVar1;
    in_eax = (int *)(uVar8 - 1);
    if (((int *)(uint)bVar2 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      iVar12 = iVar11 + 2;
      local_10 = param_3;
      do {
        iVar6 = 0;
        if (3 < uVar8) {
          pfVar9 = (float *)(iVar7 + 8);
          do {
            pfVar9[-2] = (float)*(byte *)(iVar12 - 2 + iVar6) * fVar5;
            pfVar9[-1] = (float)*(byte *)(iVar12 - 1 + iVar6) * fVar5;
            *pfVar9 = (float)*(byte *)(iVar12 + iVar6) * fVar5;
            pfVar9[1] = (float)*(byte *)(iVar12 + 1 + iVar6) * fVar5;
            iVar6 = iVar6 + 4;
            pfVar9 = pfVar9 + 4;
          } while (iVar6 < (int)(uVar8 - 3));
        }
        for (; iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
          *(float *)(iVar7 + iVar6 * 4) = (float)*(byte *)(iVar6 + iVar11) * fVar5;
        }
        iVar7 = iVar7 + iVar3;
        iVar11 = iVar11 + uVar4;
        iVar12 = iVar12 + uVar4;
        local_10 = (int *)((int)local_10 - 1);
      } while (local_10 != (int *)0x0);
      return uVar4;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\b') || (*(char *)((int)in_eax + 10) == '\a')) {
    piVar10 = (int *)(uint)bVar1;
    in_eax = (int *)(bVar2 - 1);
    if ((piVar10 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      local_20 = param_3;
      do {
        iVar12 = 0;
        in_eax = (int *)0x0;
        local_10 = (int *)0x0;
        local_1c = 0;
        if ((int *)0x1 < piVar10) {
          do {
            bVar1 = *(byte *)((int)in_eax + iVar11);
            *(float *)(iVar7 + (int)((int)(uintptr_t)in_eax) * 4) = (float)bVar1 * fVar5;
            iVar12 = iVar12 + (uint)bVar1;
            uVar8 = (uint)*(byte *)((int)in_eax + iVar11 + 1);
            local_10 = (int *)((int)local_10 + uVar8);
            *(float *)(iVar7 + 4 + (int)((int)(uintptr_t)in_eax) * 4) = (float)uVar8 * fVar5;
            in_eax = (int *)((int)in_eax + 2);
          } while ((int)in_eax < (int)piVar10 - 1);
        }
        if ((int)in_eax < (int)piVar10) {
          local_1c = (uint)*(byte *)((int)in_eax + iVar11);
          *(float *)(iVar7 + (int)((int)(uintptr_t)in_eax) * 4) = (float)local_1c * fVar5;
        }
        iVar11 = iVar11 + uVar4;
        *(float *)(iVar7 + (int)((int)(uintptr_t)piVar10) * 4) =
             (float)(int)(((0xff - (int)local_10) - iVar12) - local_1c) * fVar5;
        iVar7 = iVar7 + iVar3;
        local_20 = (int *)((int)local_20 - 1);
      } while (local_20 != (int *)0x0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9800 */
GEN_FRAME uint F_00dd9800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9800u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  int * piVar10;
  char cVar11;
  int iVar12;
  int * local_14;
  
  fVar5 = REFG(float, 0x10a0d8c);
  iVar3 = in_eax[1];
  bVar1 = *(byte *)((int)in_eax + 9);
  iVar4 = in_ecx[1];
  iVar12 = *in_ecx;
  bVar2 = *(byte *)((int)in_ecx + 9);
  iVar8 = *in_eax;
  if (bVar2 == bVar1) {
    in_eax = param_3;
    piVar10 = param_3;
    if (0 < (int)param_3) {
      do {
        uVar6 = 0;
        if (bVar2 != 0) {
          do {
            *(char *)(uVar6 + iVar8) = (char)(int)(*(float *)(iVar12 + uVar6 * 4) * fVar5);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)(uint)bVar2);
        }
        iVar8 = iVar8 + iVar3;
        iVar12 = iVar12 + iVar4;
        piVar10 = (int *)((int)piVar10 - 1);
      } while (piVar10 != (int *)0x0);
      return uVar6;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\a') && (*(char *)((int)in_eax + 10) == '\b')) {
    uVar6 = (uint)bVar1;
    in_eax = (int *)(uVar6 - 1);
    if (((int *)(uint)bVar2 == in_eax) && (in_eax = param_3, piVar10 = param_3, 0 < (int)param_3)) {
      do {
        uVar7 = 0;
        if (uVar6 != 0) {
          do {
            *(char *)(uVar7 + iVar8) = (char)(int)(*(float *)(iVar12 + uVar7 * 4) * fVar5);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar6);
        }
        iVar8 = iVar8 + iVar3;
        iVar12 = iVar12 + iVar4;
        piVar10 = (int *)((int)piVar10 - 1);
      } while (piVar10 != (int *)0x0);
      return uVar7;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\b') || (*(char *)((int)in_eax + 10) == '\a')) {
    piVar10 = (int *)(uint)bVar1;
    in_eax = (int *)(bVar2 - 1);
    if ((piVar10 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      local_14 = param_3;
      do {
        cVar11 = '\0';
        in_eax = (int *)0x0;
        if (piVar10 != (int *)0x0) {
          do {
            cVar9 = (char)(int)(*(float *)(iVar12 + (int)((int)(uintptr_t)in_eax) * 4) * fVar5);
            cVar11 = cVar11 + cVar9;
            *(char *)((int)in_eax + iVar8) = cVar9;
            in_eax = (int *)((int)in_eax + 1);
          } while ((int)in_eax < (int)piVar10);
        }
        iVar12 = iVar12 + iVar4;
        *(char *)((int)piVar10 + iVar8) = -1 - cVar11;
        iVar8 = iVar8 + iVar3;
        local_14 = (int *)((int)local_14 - 1);
      } while (local_14 != (int *)0x0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9960 */
GEN_FRAME uint F_00dd9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar2 = in_eax;
  if ((((*(char *)((int)in_edx + 9) == '\x03') && (*(char *)((int)in_eax + 9) == '\x04')) &&
      (puVar2 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)in_eax) >> 8),10))), *(char *)(in_edx + 2) == '\n')
      ) && (*(char *)(in_eax + 2) == '\n')) {
    puVar2 = (undefined4 *)*in_eax;
    puVar4 = (undefined4 *)*in_edx;
    uVar5 = (uint)in_edx[1] >> 2;
    uVar7 = (uint)in_eax[1] >> 2;
    iVar6 = 0;
    if (3 < param_3) {
      iVar8 = (param_3 - 4U >> 2) + 1;
      iVar6 = iVar8 * 4;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    if (iVar6 < param_3) {
      iVar6 = param_3 - iVar6;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        uVar1 = puVar4[2];
        puVar2[3] = 0;
        puVar2[2] = uVar1;
        puVar4 = puVar4 + uVar5;
        puVar2 = puVar2 + uVar7;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dd9a80 */
GEN_FRAME unsigned int F_00dd9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)param_2 + 0x100) = 0;
  *(undefined4 *)((int)param_3 + 0x100) = 0;
  iVar2 = *(int *)(param_1 + 0x100);
  iVar1 = param_1;
  if (0 < iVar2) {
    do {
      this = param_3;
      if ((*(byte *)(iVar1 + 4) & 8) == 0) {
        this = param_2;
      }
      F_00dd7b40(this GEN_EDX_ARG,iVar1);
      iVar1 = iVar1 + 8;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dd9ad0 */
GEN_FRAME uint GEN_FASTCALL F_00dd9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd9ad0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)((uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*param_2)] * (uint)param_2[1] + 3) >> 2;
  if (param_4 < REFG(float, 0x1088068)) {
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar3 = param_5 - (int)param_1;
      do {
        *(undefined4 *)(iVar3 + (int)param_1) = *param_1;
        param_1 = param_1 + 1;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  else {
    uVar2 = F_00da1010(param_5,param_3,iVar1);
  }
  return uVar2;
}

/* ref: FUN_00dd9b30 */
GEN_NOFRAME uint F_00dd9b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd9b30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  char * in_eax = (char *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  uint * puVar15;
  float fVar16;
  uint local_1c;
  
  fVar7 = *(float *)&REFG(undefined, 0x114970c);
  fVar6 = *(float *)&REFG(undefined, 0x1149708);
  fVar5 = *(float *)&REFG(undefined, 0x1149704);
  fVar16 = *(float *)&REFG(undefined, 0x1149700);
  fVar1 = REFG(float, 0x1087f04);
  cVar3 = *in_eax;
  local_1c = (uint)(byte)in_eax[1];
  if (cVar3 == '\b') {
    pfVar12 = (float *)0x0;
    if (local_1c != 0) {
      puVar15 = param_3;
      do {
        uVar11 = *((uint *)GEN_TOP(((int)puVar15 + ((int)in_ecx - (int)param_3))));
        uVar4 = *puVar15;
        fVar1 = (float)(uVar11 >> 0x10 & 0xff);
        fVar2 = (float)(uVar11 >> 8 & 0xff);
        pfVar12 = ((float *)GEN_TOP(((((uint)gen_fl2bits((((float)(uVar4 >> 0x10 & 0xff) - fVar1) * param_4 +
                                                fVar1) + fVar5) & 0xff |
                             (int)gen_fl2bits((((float)(uVar4 >> 0x18) - (float)(uVar11 >> 0x18)) *
                                               param_4 + (float)(uVar11 >> 0x18)) + fVar16) << 8) <<
                             8 | (uint)gen_fl2bits((((float)(uVar4 >> 8 & 0xff) - fVar2) * param_4 +
                                                   fVar2) + fVar6) & 0xff) << 8 |
                           (uint)gen_fl2bits((((float)(uVar4 & 0xff) - (float)(uVar11 & 0xff)) *
                                              param_4 + (float)(uVar11 & 0xff)) + fVar7) & 0xff)));
        local_1c = local_1c - 1;
        *((float * PTR32 *)GEN_TOP(((int)puVar15 + (param_5 - (int)param_3)))) = pfVar12;
        puVar15 = puVar15 + 1;
      } while (local_1c != 0);
    }
  }
  else if (cVar3 == '\n') {
    iVar14 = 0;
    pfVar12 = (float *)0x0;
    if (3 < local_1c) {
      pfVar12 = (float *)(param_3 + 1);
      pfVar13 = (float *)(param_5 + 8);
      iVar14 = 0;
      fVar16 = REFG(float, 0x1087f04) - param_4;
      do {
        pfVar13[-2] = in_ecx[iVar14] * fVar16 + pfVar12[-1] * param_4;
        *((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar12))) =
             *((float *)GEN_TOP((((int)in_ecx - (int)param_3) + (int)pfVar12))) * fVar16 + *pfVar12 * param_4;
        *pfVar13 = *((float *)GEN_TOP(((int)pfVar13 + ((int)in_ecx - param_5)))) * fVar16 +
                   pfVar12[1] * param_4;
        pfVar13[1] = in_ecx[iVar14 + 3] * fVar16 + pfVar12[2] * param_4;
        iVar14 = iVar14 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar13 = pfVar13 + 4;
      } while (iVar14 < (int)(local_1c - 3));
    }
    if (iVar14 < (int)local_1c) {
      pfVar12 = (float *)(param_3 + iVar14);
      iVar14 = local_1c - iVar14;
      do {
        *((float *)GEN_TOP(((int)pfVar12 + (param_5 - (int)param_3)))) =
             *((float *)GEN_TOP(((int)pfVar12 + ((int)in_ecx - (int)param_3)))) * (fVar1 - param_4) +
             *pfVar12 * param_4;
        pfVar12 = pfVar12 + 1;
        iVar14 = iVar14 - 1;
      } while (iVar14 != 0);
      return (uint)pfVar12;
    }
  }
  else {
    if (cVar3 != '\v') {
      uVar11 = F_00dd9ad0(in_ecx,in_eax,param_3,param_4,param_5);
      return uVar11;
    }
    pfVar12 = (float *)0x0;
    if (local_1c != 0) {
      iVar14 = (int)param_3 - (int)in_ecx;
      uVar11 = param_5 - (int)in_ecx;
      do {
        pfVar12 = (float *)(iVar14 + (int)in_ecx);
        fVar1 = pfVar12[1];
        fVar16 = pfVar12[2];
        fVar5 = pfVar12[3];
        fVar6 = in_ecx[1];
        fVar7 = in_ecx[2];
        fVar2 = in_ecx[3];
        fVar8 = in_ecx[1];
        fVar9 = in_ecx[2];
        fVar10 = in_ecx[3];
        pfVar13 = (float *)(uVar11 + (int)in_ecx);
        *pfVar13 = (*pfVar12 - *in_ecx) * param_4 + *in_ecx;
        pfVar13[1] = (fVar1 - fVar6) * param_4 + fVar8;
        pfVar13[2] = (fVar16 - fVar7) * param_4 + fVar9;
        pfVar13[3] = (fVar5 - fVar2) * param_4 + fVar10;
        in_ecx = in_ecx + 4;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      return uVar11;
    }
  }
  return (uint)pfVar12;
}

/* ref: FUN_00dd9e30 */
GEN_NOFRAME uint F_00dd9e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdd9e30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  int * piVar2;
  char * pcVar3;
  short * psVar4;
  int iVar5;
  uint * puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_18;
  int local_14;
  
  if (((char)param_2[2] != (char)param_3[2]) ||
     (*(byte *)((int)param_2 + 9) != *(byte *)((int)param_3 + 9))) goto switchD_00dd9e79_caseD_9;
  uVar11 = (uint)*(byte *)((int)param_2 + 9);
  switch((unsigned int)(uintptr_t)((char)param_2[2])) {
  case '\x01': ;
  case '\x02': ;
    pcVar3 = (char *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)pcVar3;
    while (*pcVar3 == pcVar3[iVar9]) {
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar3 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    break;
  case '\x03': ;
  case '\x04': ;
    psVar4 = (short *)*param_2;
    iVar5 = 0;
    if (uVar11 != 0) {
      iVar9 = *param_3 - (int)psVar4;
      do {
        if (*psVar4 != *(short *)(iVar9 + (int)psVar4)) goto switchD_00dd9e79_caseD_9;
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 1;
      } while (iVar5 < (int)uVar11);
    }
    goto LAB_00dda011;
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
    piVar2 = (int *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)piVar2;
    while (*piVar2 == *(int *)(iVar9 + (int)piVar2)) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    break;
  case '\b': ;
    puVar6 = (uint *)*param_3;
    local_18 = 0;
    if (uVar11 != 0) {
      iVar5 = *param_2 - (int)puVar6;
      do {
        uVar8 = *(uint *)(iVar5 + (int)puVar6);
        uVar10 = *puVar6;
        if (uVar8 != uVar10) {
          if (GEN_ISNAN(param_4) != (GEN_ISNAN(param_4) || param_4 == 0.0)) goto switchD_00dd9e79_caseD_9;
          local_14 = 0;
          do {
            iVar9 = (uVar8 & 0xff) - (uVar10 & 0xff);
            uVar7 = iVar9 >> 0x1f;
            if ((int)(param_4 * REFG(float, 0x10a0d8c)) < (int)(iVar9 + uVar7 ^ uVar7))
            goto switchD_00dd9e79_caseD_9;
            local_14 = local_14 + 1;
            uVar8 = uVar8 >> 8;
            uVar10 = uVar10 >> 8;
          } while (local_14 < 4);
        }
        local_18 = local_18 + 1;
        puVar6 = puVar6 + 1;
        if ((int)uVar11 <= local_18) {
          *param_1 = 1;
          return (uint)param_1;
        }
      } while( true );
    }
LAB_00dda011: ;
    *param_1 = 1;
    return (uint)param_1;
  case '\n': ;
    pfVar1 = (float *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)pfVar1;
    while (!(param_4 <= ABS(*pfVar1 - *(float *)(iVar9 + (int)pfVar1)))) {
      iVar5 = iVar5 + 1;
      pfVar1 = pfVar1 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
  }
switchD_00dd9e79_caseD_9: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dda060 */
GEN_FRAME uint F_00dda060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_ECX = 0;
  undefined4 * puVar4;
  uint uVar5;
  byte * pbVar6;
  
  uVar2 = *(uint *)((*(int *)&gen_args[1]) + 0x100);
  if (0 < (int)uVar2) {
    pbVar6 = (byte *)((*(int *)&gen_args[1]) + 3);
    uVar5 = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = in_ECX;
    do {
      uVar2 = F_00dd7a40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)pbVar6[-1],(uint)*pbVar6);
      if ((int)uVar2 < 0) {
        uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)));
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) = uVar2 + 1;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8))) = *(undefined4 *)(pbVar6 - 3);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 4))) = *(undefined4 *)(pbVar6 + 1);
      }
      else {
        bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 1)));
        bVar3 = pbVar6[-2];
        if (pbVar6[-2] < bVar1) {
          bVar3 = bVar1;
        }
        bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8)));
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 1))) = bVar3;
        bVar3 = pbVar6[-3];
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = bVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
        (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar1);
        puVar4 = &(*(int *)&gen_args[1]);
        if (bVar1 <= bVar3) {
          puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
        }
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8))) = *(undefined1 *)puVar4;
      }
      pbVar6 = pbVar6 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dda0f0 */
GEN_FRAME unsigned int F_00dda0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x100) = 0;
  iVar1 = param_2;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      F_00dda060(param_1,iVar1);
      iVar1 = iVar1 + 0x104;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dda130 */
GEN_FRAME uint F_00dda130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd8600(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return uVar1;
}

/* ref: FUN_00dda160 */
GEN_FRAME uint F_00dda160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda160u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd8720(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return uVar1;
}

/* ref: FUN_00dda190 */
GEN_FRAME uint F_00dda190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x204);
  iVar3 = *(int *)(param_1 + 0x200);
  uVar2 = uVar1;
  if (((*(uint *)(param_2 + 0x204) == uVar1) || (iVar3 != *(int *)(param_2 + 0x200))) && (0 < iVar3)
     ) {
    iVar4 = param_1;
    do {
      uVar2 = F_00dd8c60(iVar4,(param_2 - param_1) + iVar4,uVar1);
      iVar4 = iVar4 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dda1e0 */
GEN_FRAME uint F_00dda1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda1e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x850];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    F_00d919e0((undefined *)*param_2 GEN_EDX_ARG);
    return *param_2;
  }
  F_00dd7940(((undefined1 *)(gen_frame + 0x734)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x14))((int *)*param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)));
  iVar6 = 0;
  iVar7 = 0;
  if (0 < param_3) {
    do {
      piVar4 = (int *)param_2[iVar7];
      F_00dd7940(((undefined1 *)(gen_frame + 0x630)) GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x630)));
      bVar2 = F_00dd7980(((undefined1 *)(gen_frame + 0x630)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)));
      if (bVar2 == 0) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + uVar3;
    } while (iVar7 < param_3);
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)),iVar6)));
  (*(int * PTR32 *)(gen_frame + 0x838)) = piVar4;
  if (piVar4 != (int *)0x0) {
    pcVar1 = *(gen_code32 *)(*piVar4 + 0x1c);
    (*(undefined4 *)(gen_frame + 0x83c)) = 0;
    (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x844)) = 0;
    (*(undefined4 *)(gen_frame + 0x848)) = 6;
    uVar3 = (*pcVar1)(piVar4,&(*(undefined4 *)(gen_frame + 0x83c)),((int *)(gen_frame + 0xc)));
    if (uVar3 != 1) {
      F_00d91a80(piVar4 GEN_EDX_ARG);
      return 0;
    }
    iVar7 = 0;
    piVar4 = ((int *)(gen_frame + 0xc));
    piVar8 = ((int *)(gen_frame + 0x424));
    for (iVar6 = 0x83; iVar6 != 0; iVar6 = iVar6 - 1) {
      *piVar8 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar8 = piVar8 + 1;
    }
    iVar6 = (*(int *)(gen_frame + 0x624));
    if (0 < param_3) {
      do {
        piVar4 = (int *)param_2[iVar7];
        (*(undefined4 *)(gen_frame + 0x83c)) = 0;
        (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
        (*(undefined2 *)(gen_frame + 0x844)) = 0;
        (*(undefined4 *)(gen_frame + 0x848)) = 1;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x83c)),((undefined1 *)(gen_frame + 0x218)));
        if (uVar3 != 1) {
          F_00d91a80((*(int * PTR32 *)(gen_frame + 0x838)) GEN_EDX_ARG);
          return 0;
        }
        (*(undefined4 *)(gen_frame + 0x628)) = (*(undefined4 *)(gen_frame + 0x41c));
        F_00dda190(((undefined1 *)(gen_frame + 0x218)),((int *)(gen_frame + 0x424)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x34))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
        iVar5 = 0;
        if (0 < iVar6) {
          piVar4 = ((int *)(gen_frame + 0x424));
          do {
            *piVar4 = *piVar4 + piVar4[1] * uVar3;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 4;
            iVar6 = (*(int *)(gen_frame + 0x624));
          } while (iVar5 < (*(int *)(gen_frame + 0x624)));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_3);
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x838));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x838)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x838)) GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
    return (uint)piVar4;
  }
  return 0;
}

/* ref: FUN_00dda3f0 */
GEN_NOFRAME uint F_00dda3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda3f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  uint * puVar9;
  undefined1 auVar10 [16];
  
  fVar7 = *(float *)&REFG(undefined, 0x114970c);
  fVar6 = *(float *)&REFG(undefined, 0x1149708);
  fVar5 = *(float *)&REFG(undefined, 0x1149704);
  fVar4 = *(float *)&REFG(undefined, 0x1149700);
  memcpy(&(auVar3), &(*(gen_v16 *)&REFG(undefined, 0x11496f0)), sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) < sizeof(auVar3) ? sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) : sizeof(auVar3));
  pfVar8 = in_eax;
  if ((((*(char *)((int)in_edx + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x01')) &&
      (*(char *)(in_edx + 2) == '\n')) && ((char)param_3[2] == '\b')) {
    puVar9 = (uint *)*param_3;
    pfVar8 = (float *)*in_edx;
    uVar1 = in_edx[1];
    uVar2 = param_3[1];
    if (0 < (int)in_eax) {
      do {
        (*(float *)((char *)&auVar10 + 0)) = *pfVar8 * *(float *)&REFG(undefined, 0x1138b80);
        (*(float *)((char *)&auVar10 + 4)) = pfVar8[1] * *(float *)&REFG(undefined, 0x1138b84);
        (*(float *)((char *)&auVar10 + 8)) = pfVar8[2] * *(float *)&REFG(undefined, 0x1138b88);
        (*(float *)((char *)&auVar10 + 12)) = pfVar8[3] * *(float *)&REFG(undefined, 0x1138b8c);
        pfVar8 = ((float *)GEN_TOP(((int)pfVar8 + (uVar1 & 0xfffffffc))));
        gen_maxps(&(auVar10), (&(unsigned long long[2]){0, 0}), &(auVar10));
        gen_minps(&(auVar10), &(auVar3), &(auVar10));
        *puVar9 = (((int)gen_fl2bits((*(float *)((char *)&auVar10 + 12)) + fVar7) << 8 |
                   (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 8)) + fVar6) & 0xff) << 8 |
                  (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 4)) + fVar5) & 0xff) << 8 |
                  (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 0)) + fVar4) & 0xff;
        puVar9 = ((uint *)GEN_TOP(((int)puVar9 + (uVar2 & 0xfffffffc))));
        in_eax = (float *)((int)in_eax - 1);
      } while (in_eax != (float *)0x0);
    }
  }
  return (uint)pfVar8;
}

/* ref: FUN_00dda4c0 */
GEN_FRAME uint F_00dda4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * puVar6;
  
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 == bVar1) {
    if (*(byte *)((int)param_1 + 9) == *(byte *)((int)param_2 + 9)) {
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],
                           (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(bVar2)] * (uint)*(byte *)((int)param_1 + 9) +
                           3 & 0xfffffffc,param_3);
      return uVar3;
    }
    if ((bVar2 == bVar1) && (*(byte *)((int)param_2 + 9) <= *(byte *)((int)param_1 + 9))) {
      uVar3 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(bVar1)] * (uint)*(byte *)((int)param_2 + 9) + 3 &
              0xfffffffc;
      goto LAB_00dda545;
    }
  }
  if (bVar2 == 7) {
    uVar3 = bVar1 - 2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      uVar3 = F_00dd8ca0(param_1,param_2,param_3);
      return uVar3;
    case 1: ;
      uVar3 = F_00dd8e40(param_1,param_3,param_2);
      return uVar3;
    case 6: ;
      uVar3 = F_00dd8eb0(param_1,param_2,param_3);
      return uVar3;
    case 8: ;
      uVar3 = F_00dd9170(param_2,param_1,param_3);
      return uVar3;
    }
  }
  else {
    if (bVar2 == 2) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 3) {
        uVar3 = F_00dd8170(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 7) {
        if (uVar3 != 10) {
          return uVar3;
        }
        uVar3 = F_00dd9530(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dd9360(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 3) {
      if (bVar1 - 2 != 0) {
        return bVar1 - 2;
      }
      uVar3 = F_00dd81d0(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 10) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 2) {
        uVar3 = F_00dd9800(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 8) {
        if (uVar3 - 10 != 0) {
          return uVar3 - 10;
        }
        uVar3 = F_00dd9960(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dda3f0(param_3,param_1,param_2);
      return uVar3;
    }
    if ((((bVar2 == 0xb) && (bVar1 == 10)) && (*(byte *)((int)param_2 + 9) < 5)) &&
       (*(char *)((int)param_1 + 9) == '\x01')) {
      uVar3 = (uint)*(byte *)((int)param_2 + 9) * 4;
LAB_00dda545: ;
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],uVar3,param_3);
      return uVar3;
    }
    if ((bVar2 == 6) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 8) goto LAB_00dda6e6;
      if ((*(char *)((int)param_1 + 10) == '\x03') && (bVar1 == 10)) {
        (*(undefined8 *)(gen_frame + 0x20c)) = *param_1;
        (*(undefined8 *)(gen_frame + 0x214)) = param_1[1];
        (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x214)) + 0)) = 8;
        (*(undefined8 *)(gen_frame + 0x214)) = CONCAT71((int7)((ulonglong)param_1[1] >> 8),8);
        uVar3 = F_00dd8f10(&(*(undefined8 *)(gen_frame + 0x20c)),param_2,param_3);
        return uVar3;
      }
    }
    if ((bVar2 == 8) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 6) {
LAB_00dda6e6: ;
        uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                             param_2[1],4,param_3);
        return uVar3;
      }
      if (bVar1 == 10) {
        uVar3 = F_00dd8f10(param_1,param_2,param_3);
        return uVar3;
      }
    }
    F_00da0a80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
    uVar3 = (uint)*(byte *)(param_2 + 2);
    uVar5 = (uint)*(byte *)(param_1 + 1);
    puVar6 = &REFG(undefined, 0x114976c);
    pvVar4 = (undefined *)F_00d9fe80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG,"Cannot convert vertex format from ")
    ;
    pvVar4 = (undefined *)F_00d9ff40(pvVar4 GEN_EDX_ARG,uVar5);
    pvVar4 = (undefined *)F_00d9fe80(pvVar4 GEN_EDX_ARG,puVar6);
    F_00d9ff40(pvVar4 GEN_EDX_ARG,uVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba4523,((undefined1 *)(gen_frame + 0xc)),
               "Mesh\\Utils\\VertexBufferUtil\\hkMeshVertexBufferUtil.cpp",0x5b0);
    uVar3 = F_00d9fda0((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00dda810 */
GEN_FRAME uint F_00dda810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda810u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x640];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  byte * pbVar6;
  int iVar7;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x62c)) = 0;
  (*(undefined4 *)(gen_frame + 0x630)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x634)) = 0;
  (*(undefined4 *)(gen_frame + 0x638)) = 3;
  uVar3 = (*pcVar1)(param_1);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x18))(param_2 GEN_EDX_ARG);
  if ((uVar3 == uVar4) &&
     (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0x218))), uVar4 == 1)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))(param_2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0xc)));
    if (uVar3 != 1) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
      return uVar3;
    }
    F_00dd7940(((undefined1 *)(gen_frame + 0x528)) GEN_EDX_ARG);
    F_00dd7940(((undefined1 *)(gen_frame + 0x424)) GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x528)));
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x14))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x424)));
    bVar2 = F_00dd7980(((undefined1 *)(gen_frame + 0x528)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x424)));
    if (bVar2 == 0) {
      iVar7 = 0;
      if (0 < (*(int *)(gen_frame + 0x628))) {
        puVar5 = ((undefined1 *)(gen_frame + 0x218));
        pbVar6 = ((byte *)(gen_frame + 0x52a)) + 1;
        do {
          uVar3 = F_00dd7a40(((undefined1 *)(gen_frame + 0x424)) GEN_EDX_ARG,(uint)pbVar6[-1],(uint)*pbVar6);
          if (-1 < (int)uVar3) {
            F_00dda4c0(puVar5,((undefined1 *)(gen_frame + 0xc)) + uVar3 * 0x10,(*(undefined4 *)(gen_frame + 0x41c)));
          }
          iVar7 = iVar7 + 1;
          pbVar6 = pbVar6 + 8;
          puVar5 = puVar5 + 0x10;
        } while (iVar7 < (*(int *)(gen_frame + 0x628)));
      }
    }
    else {
      F_00dda190(((undefined1 *)(gen_frame + 0x218)),((undefined1 *)(gen_frame + 0xc)));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x34))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  }
  return uVar4;
}

/* ref: FUN_00dda990 */
GEN_NOFRAME uint F_00dda990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdda990u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  undefined8 * puVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 2) == *(char *)(param_3 + 8)) {
    if (*(char *)((int)param_2 + 9) == *(char *)(param_3 + 9)) {
      if ((*(char *)(param_2 + 2) != '\n') && (*(char *)((int)param_2 + 9) != '\x03')) {
        F_00dd9e30(param_1,param_2,param_3,param_4);
        return (uint)param_1;
      }
      puVar1 = (undefined8 *)*param_2;
      fVar2 = ABS(REFG(float, 0x1087f04) -
                  (*(float *)(puVar1 + 1) * *(float *)(puVar1 + 1) +
                  (gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) *
                   gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) +
                  gen_bits2f((uint)*puVar1) * gen_bits2f((uint)*puVar1))));
      if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(fVar2)) && (!(param_4 < fVar2) && param_4 != fVar2)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddaa90 */
GEN_FRAME uint F_00ddaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  char * pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = 0;
  if (0 < param_4) {
    iVar5 = param_3 - param_2;
    iVar4 = param_2;
    do {
      if (*(char *)(iVar4 + 10) != *(char *)(iVar4 + 10 + iVar5)) goto LAB_00ddab5a;
      switch((unsigned int)(uintptr_t)(*(char *)(iVar4 + 10))) {
      case '\x01': ;
      case '\n': ;
        fVar6 = *param_5;
        puVar1 = &(*(undefined1 *)(gen_frame + 0xb));
        break;
      case '\x02': ;
      case '\x04': ;
      case '\x05': ;
        pcVar2 = (char *)F_00dda990(&(*(undefined1 *)(gen_frame + 0xa)),iVar4,iVar5 + iVar4,param_5[1]);
        goto LAB_00ddab37;
      case '\x03': ;
        fVar6 = param_5[2];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x9));
        break;
      default: ;
        fVar6 = param_5[3];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x7));
        break;
      case '\t': ;
        fVar6 = param_5[4];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      pcVar2 = (char *)F_00dd9e30(puVar1,iVar4,iVar5 + iVar4,fVar6);
LAB_00ddab37: ;
      if (*pcVar2 == '\0') {
LAB_00ddab5a: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00ddab90 */
GEN_FRAME uint F_00ddab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddab90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x204);
  uVar2 = *(uint *)(param_1 + 0x200);
  if (((*(int *)(param_2 + 0x204) == iVar1) || (uVar2 != *(uint *)(param_2 + 0x200))) &&
     (0 < (int)uVar2)) {
    uVar3 = uVar2;
    iVar4 = param_1;
    do {
      uVar2 = F_00dda4c0(iVar4,(param_2 - param_1) + iVar4,iVar1);
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00ddabf0 */
GEN_FRAME uint F_00ddabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x3d0];
  code * pcVar1;
  uint uVar2;
  int iVar3;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x214)));
  uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_ARG,param_2,param_3);
  if (-1 < (int)uVar2) {
    pcVar1 = *(gen_code32 *)(*param_1 + 0x20);
    (*(uint *)(gen_frame + 0x31c)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x3bc)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c0)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x3c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c8)) = 3;
    (*(undefined4 *)(gen_frame + 0x318)) = 1;
    (*(undefined1 *)(gen_frame + 0x39c)) = 9;
    uVar2 = (*pcVar1)(param_1,&(*(undefined4 *)(gen_frame + 0x3bc)),&(*(undefined4 *)(gen_frame + 0x318)),((byte *)(gen_frame + 0x8)));
    if (uVar2 == 1) {
      if ((int)(param_4[2] & 0x3fffffff) < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
        iVar3 = (param_4[2] & 0x3fffffff) * 2;
        if (iVar3 <= (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
          iVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar3,0x10);
      }
      param_4[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),0,*param_4);
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)));
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ddacf0 */
GEN_FRAME unsigned int F_00ddacf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddacf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  gen_v12 * pauVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pauVar4 = (gen_v12 *)*param_1;
  iVar1 = param_1[1];
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_1 + 10))) {
  case 1: ;
    iVar5 = param_4;
    if (0 < param_4) {
      do {
        fVar12 = gen_bits2f((uint)*(undefined8 *)*pauVar4);
        fVar13 = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20));
        fVar18 = *(float *)(*pauVar4 + 8);
        fVar16 = param_2[2];
        fVar9 = param_2[0xe];
        fVar17 = param_2[6];
        fVar11 = param_2[10];
        *(ulonglong *)*pauVar4 =
             CONCAT44((uint)gen_fl2bits(((fVar12 * param_2[1] + param_2[0xd]) + fVar13 * param_2[5])
                                        + fVar18 * param_2[9]),
                      (uint)gen_fl2bits(((fVar12 * *param_2 + param_2[0xc]) + fVar13 * param_2[4]) +
                                        fVar18 * param_2[8]));
        *(float *)(*pauVar4 + 8) = ((fVar12 * fVar16 + fVar9) + fVar13 * fVar17) + fVar18 * fVar11;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
    break;
  case 2: ;
  case 5: ;
    if (0 < param_4) {
      param_1 = (undefined4 *)param_4;
      do {
        memcpy(&(auVar3), &(*pauVar4), sizeof(*pauVar4) < sizeof(auVar3) ? sizeof(*pauVar4) : sizeof(auVar3));
        memcpy(&(auVar10), &(auVar3), sizeof(auVar3) < sizeof(auVar10) ? sizeof(auVar3) : sizeof(auVar10));
        if ((param_3 & 2) != 0) {
          (*(undefined4 *)((char *)&auVar10 + 0)) = (uint)*(undefined8 *)*pauVar4 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
          (*(undefined4 *)((char *)&auVar10 + 4)) = (*(undefined4 *)((char *)&auVar3 + 4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
          (*(undefined4 *)((char *)&auVar10 + 8)) = (*(undefined4 *)((char *)&auVar3 + 8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
        }
        fVar18 = (*(float *)((char *)&auVar10 + 0));
        fVar9 = (*(float *)((char *)&auVar10 + 4));
        fVar11 = (*(float *)((char *)&auVar10 + 8));
        fVar16 = (fVar18 * *param_2 + fVar9 * param_2[4]) + fVar11 * param_2[8];
        fVar17 = (fVar18 * param_2[1] + fVar9 * param_2[5]) + fVar11 * param_2[9];
        fVar18 = (fVar18 * param_2[2] + fVar9 * param_2[6]) + fVar11 * param_2[10];
        if ((param_3 & 4) != 0) {
          fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar17 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar18 = gen_bits2f((uint)gen_fl2bits(fVar18) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
        }
        if ((param_3 & 1) != 0) {
          fVar9 = fVar16 * fVar16;
          fVar11 = fVar17 * fVar17;
          fVar12 = fVar18 * fVar18;
          fVar13 = (fVar11 + fVar9) + fVar12;
          fVar14 = (fVar11 + fVar9) + fVar12;
          fVar15 = (fVar11 + fVar9) + fVar12;
          memset(&auVar20, 0, 12);
          (*(undefined4 *)((char *)&auVar20 + 12)) = 0;
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          uVar8 = -(uint)(0.0 - fVar15 < 0.0);
          (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar14);
          (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar13);
          (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar15);
          (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((fVar11 + fVar9) + fVar12);
          gen_rsqrtps(&(auVar21), &(auVar20), &(auVar2));
          fVar9 = (*(float *)((char *)&auVar21 + 0));
          fVar11 = (*(float *)((char *)&auVar21 + 4));
          fVar12 = (*(float *)((char *)&auVar21 + 8));
          fVar16 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar13 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c0) - (fVar9 * fVar13) * fVar9) *
                                                  (*(float *)&REFG(undefined, 0x11496d0) * fVar9))) * fVar16) &
                              uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar16));
          fVar17 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar14 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c4) - (fVar11 * fVar14) * fVar11) *
                                                  (*(float *)&REFG(undefined, 0x11496d4) * fVar11))) * fVar17) &
                              uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar17));
          fVar18 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c8) - (fVar12 * fVar15) * fVar12) *
                                                  (*(float *)&REFG(undefined, 0x11496d8) * fVar12))) * fVar18) &
                              uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar18));
        }
        *(ulonglong *)*pauVar4 = CONCAT44((uint)gen_fl2bits(fVar17),(uint)gen_fl2bits(fVar16));
        *(float *)(*pauVar4 + 8) = fVar18;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        param_1 = (undefined4 *)((int)param_1 - 1);
      } while (param_1 != (undefined4 *)0x0);
    }
    break;
  case 3: ;
    break;
  case 4: ;
    if (0 < param_4) {
      iVar5 = param_4;
      do {
        fVar18 = *(float *)(*pauVar4 + 8);
        fVar16 = gen_bits2f((uint)*(undefined8 *)*pauVar4);
        fVar17 = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20));
        fVar9 = (fVar17 * param_2[4] + fVar16 * *param_2) + fVar18 * param_2[8];
        fVar11 = (fVar17 * param_2[5] + fVar16 * param_2[1]) + fVar18 * param_2[9];
        fVar18 = (fVar17 * param_2[6] + fVar16 * param_2[2]) + fVar18 * param_2[10];
        if ((param_3 & 1) != 0) {
          fVar16 = fVar9 * fVar9;
          fVar17 = fVar11 * fVar11;
          fVar12 = fVar18 * fVar18;
          fVar13 = (fVar17 + fVar16) + fVar12;
          fVar14 = (fVar17 + fVar16) + fVar12;
          fVar15 = (fVar17 + fVar16) + fVar12;
          memset(&auVar19, 0, 12);
          (*(undefined4 *)((char *)&auVar19 + 12)) = 0;
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          uVar8 = -(uint)(0.0 - fVar15 < 0.0);
          (*(undefined4 *)((char *)&auVar21 + 4)) = (undefined4)gen_fl2bits(fVar14);
          (*(undefined4 *)((char *)&auVar21 + 0)) = (undefined4)gen_fl2bits(fVar13);
          (*(undefined4 *)((char *)&auVar21 + 8)) = (undefined4)gen_fl2bits(fVar15);
          (*(undefined4 *)((char *)&auVar21 + 12)) = (undefined4)gen_fl2bits((fVar17 + fVar16) + fVar12);
          gen_rsqrtps(&(auVar21), &(auVar19), &(auVar21));
          fVar16 = (*(float *)((char *)&auVar21 + 0));
          fVar17 = (*(float *)((char *)&auVar21 + 4));
          fVar12 = (*(float *)((char *)&auVar21 + 8));
          fVar9 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar13 <= 0.0) &
                                                          (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x11496c0)
                                                                            - (fVar16 * fVar13) *
                                                                              fVar16) *
                                                                            (*(float *)&REFG(undefined, 0x11496d0)
                                                                            * fVar16))) * fVar9) &
                             uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar9));
          fVar11 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar14 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c4) - (fVar17 * fVar14) * fVar17) *
                                                  (*(float *)&REFG(undefined, 0x11496d4) * fVar17))) * fVar11) &
                              uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar11));
          fVar18 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c8) - (fVar12 * fVar15) * fVar12) *
                                                  (*(float *)&REFG(undefined, 0x11496d8) * fVar12))) * fVar18) &
                              uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar18));
        }
        *(ulonglong *)*pauVar4 = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
        *(float *)(*pauVar4 + 8) = fVar18;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
    break;
  default: ;
    goto switchD_00ddad0c_default;
  }
switchD_00ddad0c_default: ;
  return 0;
}

/* ref: FUN_00ddaf50 */
GEN_FRAME uint F_00ddaf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddaf50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  code * pcVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x20c)) = 0;
  (*(undefined4 *)(gen_frame + 0x210)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x214)) = 0;
  (*(undefined4 *)(gen_frame + 0x218)) = 3;
  uVar2 = (*pcVar1)(param_1,&(*(undefined4 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar2 == 1) {
    if (0 < (*(int *)(gen_frame + 0x200))) {
      puVar3 = ((undefined1 *)(gen_frame + 0x0));
      iVar4 = (*(int *)(gen_frame + 0x200));
      do {
        F_00ddacf0(puVar3,param_2,param_3,(*(undefined4 *)(gen_frame + 0x204)));
        puVar3 = puVar3 + 0x10;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00ddaff0 */
GEN_FRAME uint F_00ddaff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddaff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  int local_c;
  
  uVar1 = param_2[0x80];
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if (uVar1 == 1) {
    *param_3 = *param_2;
    *param_4 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*(byte *)(param_2 + 2))] *
               (uint)*(byte *)((int)param_2 + 9) + 3 & 0xfffffffc;
    *param_1 = 1;
    return (uint)param_1;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar4 = *(int * PTR32 *)((int)pvVar3 + 0xc);
  uVar7 = uVar1 * 0x10 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)piVar4 + uVar7)) {
    piVar4 = (int *)F_00d94390(pvVar3 GEN_EDX_ARG,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)piVar4 + uVar7;
  }
  F_00da1010(piVar4,param_2,uVar1 * 0x10);
  if (1 < (int)uVar1) {
    F_00ddb900(piVar4,0,uVar1 - 1,((code *)REFP(0xddb630)));
  }
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  iVar2 = *piVar4;
  local_c = 0;
  iVar6 = iVar2;
  if (0 < (int)uVar1) {
    pbVar5 = (byte *)(param_2 + 2);
    do {
      if (*(int *)(pbVar5 - 8) != iVar6) {
        *param_1 = 0;
        goto LAB_00ddb11e;
      }
      iVar6 = iVar6 + ((uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*pbVar5)] * (uint)pbVar5[1] + 3 & 0xfffffffc);
      local_c = local_c + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (local_c < (int)uVar1);
  }
  *param_4 = iVar6 - iVar2;
  *param_3 = iVar2;
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  *param_1 = 1;
LAB_00ddb11e: ;
  pvVar3 = gen_imp_TlsGetValue(dwTlsIndex);
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
      (uVar7 + (int)piVar4 != *(int *)((int)pvVar3 + 0xc))) ||
     (*(int * PTR32 *)((int)pvVar3 + 0x14) == piVar4)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,piVar4,uVar7);
  }
  else {
    *(int * PTR32 *)((int)pvVar3 + 0xc) = piVar4;
  }
  if (-1 < (int)(uVar1 | 0x80000000)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar4,uVar1 << 4);
  }
  return (uint)param_1;
}

/* ref: FUN_00ddb590 */
GEN_FRAME uint F_00ddb590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddb590u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 2))) {
  case 1: ;
  case 3: ;
  case 9: ;
  case 10: ;
    uVar1 = F_00dd9b30(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  case 2: ;
  case 4: ;
  case 5: ;
    uVar1 = F_00ddb190(param_2,param_3,param_1,param_4,param_5);
    return uVar1;
  case 6: ;
  case 7: ;
  case 8: ;
    uVar1 = F_00dd9ad0(param_2,param_1,param_3,param_4,param_5);
  }
  return uVar1;
}

